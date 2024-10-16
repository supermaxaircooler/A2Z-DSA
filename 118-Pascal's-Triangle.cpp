class Solution {
public:
    vector<vector<int>> generate(int numRows) {


        vector<vector<int>> pascalt ;



        // pascalt.push_back({1});


        // for(int i = 1 ; i< numRows ; i++){
        //     vector<int> temp;

        //     temp.push_back(1);
        //     for(int j = 1 ; j < pascalt.back().size() ; j++){
        //         temp.push_back(pascalt.back()[j] + pascalt.back()[j-1]);

        //     }
        //     temp.push_back(1);

        //     pascalt.push_back(temp);


        // }

        for(int i = 1 ; i <= numRows ; i++){

            vector<int> temp;
            temp.push_back(1);

            int x= 1;

            for(int j = 1; j < i ; j++){
                x = (x*(i-j))/j;
                temp.push_back(x);

            }
            // temp.push_back(1);

            pascalt.push_back(temp);


        }


        return pascalt;
        
    }
};