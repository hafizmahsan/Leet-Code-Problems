int subtractProductAndSum(int n) {
        // initializing product and sum variables to further use them
        
        int product = 1;
        int sum = 0;
        // loop will run until n reaches to 0
        while(n!=0)
        {
        // taking the remainder of n after diving with 10 to get the single digit e.g. 234%10 = 4
            int digit = n%10;
        // Getting the product of digits    
            product = digit * product;
        // Getting the sum of digits
            sum = digit + sum;
        // Dividing the number with 10 to reduce number to 0
            n = n/10;
        }
        
        // Getting result by subtracting product and sum of digits
        int result = product - sum;
        return result; // Returning the results
    }
