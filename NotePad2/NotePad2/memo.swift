//
//  memo.swift
//  NotePad2
//
//  Created by kimsian on 2021/06/01.
//

import Foundation

class Memo {
    var content : String
    var insertDate: Date
    
    init (content: String)
    {
        self.content = content
        insertDate = Date()
        
    }
    static var dummyMemoList = [
        Memo(content: "Lorm Ipsum"),
        Memo(content: "Dolar Anet")
    ]
}


