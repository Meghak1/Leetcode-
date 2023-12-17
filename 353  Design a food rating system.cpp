#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

class FoodRatings {
private:
    map<string,pair<string,int>>foodrate;
    map<string,map<int,set<string>>>cuisinerate;
public:
    FoodRatings(const vector<string>&foods,const vector<string>&cuisines,const vector<int>&ratings) {
    for(size_t i=0;i<foods.size();++i) {
            const string&food=foods[i];
            const string&cuisine=cuisines[i];
            int rating=ratings[i];
            foodrate[food]={cuisine,rating};
            cuisinerate[cuisine][rating].insert(food);
        }
    }

    void changeRating(const string&food,int newRating) {
        auto&foodinfo=foodrate[food];
        const string&cuisine=foodinfo.first;
        int prevrate=foodinfo.second;

        cuisinerate[cuisine][prevrate].erase(food);
        if(cuisinerate[cuisine][prevrate].empty())
            cuisinerate[cuisine].erase(prevrate);
            cuisinerate[cuisine][newRating].insert(food);
        foodinfo.second=newRating;
    }

    string highestRated(const string&cuisine) {
        const auto&ratingSet=cuisinerate[cuisine];
        if(!ratingSet.empty()) {
            const auto&foodSet=ratingSet.rbegin()->second;
            if(!foodSet.empty()) {
                return *foodSet.begin();
            }
        }
        return "null";
    }
};



/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
