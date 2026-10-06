/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ec602c; end: 106ec6077;  */

void FUN_106ec602c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uStack_34;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c7fe0;
  puRam00000001136c7fe0 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class();
  _objc_retain(&PTR___NSConcreteGlobalBlock_110982578);
  _class_copyMethodList(puVar2,&uStack_34);
  if (uStack_34 != 0) {
    uVar3 = 0;
    do {
      FUN_106ec6078(&PTR___NSConcreteGlobalBlock_110982578,*(undefined8 *)(puVar2 + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_34);
  }
  _free(puVar2);
  _objc_release(&PTR___NSConcreteGlobalBlock_110982578);
  return;
}



/* Entry: 106ec6078; end: 106ec60d3;  */

void FUN_106ec6078(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136c7fe0;
  _method_getName(param_2);
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ec60d4; end: 106ec790f;  */

void FUN_106ec60d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c7ff0;
  puRam00000001136c7ff0 = puVar3;
  _objc_release(uVar1);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1109825d8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982658,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1109826d8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982758,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"q");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1109827d8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"Q");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982858,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"q");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1109828a8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982928,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"B");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1109829a8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982a28,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"q");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982aa8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"q");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982b28,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982ba8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar5);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar6;
  func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982c28,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar6);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar3);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x00010bf446e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982ca8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3deb9e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982d28,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3deb9e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982da8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3deb9e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar5);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar6;
  func_0x00010bf446e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982e28,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982ea8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982ef8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"d");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982f48,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982f98,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar2 = puRam00000001136c7ff0;
  _objc_retain(puRam00000001136c7ff0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,"@");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar4 = puVar5;
  func_0x00010bf446e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e8b058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110982fe8,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106ec7910; end: 106ec79db;  */

undefined **
FUN_106ec7910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec79dc;
  puStack_50 = &UNK_110982628;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec79dc; end: 106ec7b33;  */

void FUN_106ec79dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_98 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ec7b34;
  uStack_40 = 0x106ec7b44;
  uStack_38 = 0;
  puStack_a0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_106ec7b4c;
  puStack_b0 = &UNK_1109825f8;
  uStack_88 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_a8 = param_2;
  puStack_78 = puStack_a0;
  puStack_58 = puStack_98;
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_c8);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec7b34; end: 106ec7b4b;  */

void FUN_106ec7b34(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ec7b4c; end: 106ec7c1f;  */

void FUN_106ec7b4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x38))(uVar1,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec7c20; end: 106ec7ceb;  */

undefined **
FUN_106ec7c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec7cec;
  puStack_50 = &UNK_1109826a8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec7cec; end: 106ec7e77;  */

void FUN_106ec7cec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_98 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ec7b34;
  uStack_40 = 0x106ec7b44;
  uStack_38 = 0;
  puStack_a0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106ec7e78;
  puStack_b8 = &UNK_110982678;
  uStack_88 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  puStack_78 = puStack_a0;
  puStack_58 = puStack_98;
  _objc_retain(param_3);
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_d0);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec7e78; end: 106ec7ed3;  */

void FUN_106ec7e78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x40))
            (uVar1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec7ed4; end: 106ec7f9f;  */

undefined **
FUN_106ec7ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec7fa0;
  puStack_50 = &UNK_110982728;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec7fa0; end: 106ec816b;  */

void FUN_106ec7fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a8 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106ec7b34;
  uStack_50 = 0x106ec7b44;
  uStack_48 = 0;
  puStack_b0 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106ec816c;
  puStack_d0 = &UNK_1109826f8;
  uStack_98 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  puStack_88 = puStack_b0;
  puStack_68 = puStack_a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_e8);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec816c; end: 106ec8263;  */

void FUN_106ec816c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x48))
            (uVar1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec8264; end: 106ec832f;  */

undefined **
FUN_106ec8264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec8330;
  puStack_50 = &UNK_1109827a8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec8330; end: 106ec852f;  */

void FUN_106ec8330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a8 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106ec7b34;
  uStack_50 = 0x106ec7b44;
  uStack_48 = 0;
  puStack_b0 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_106ec8530;
  puStack_d8 = &UNK_110982778;
  uStack_98 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  puStack_88 = puStack_b0;
  puStack_68 = puStack_a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_f0);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec8530; end: 106ec863b;  */

void FUN_106ec8530(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x50))
            (uVar1,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec863c; end: 106ec8707;  */

undefined **
FUN_106ec863c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec8708;
  puStack_50 = &UNK_110982828;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec8708; end: 106ec8867;  */

void FUN_106ec8708(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_a0 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ec7b34;
  uStack_40 = 0x106ec7b44;
  uStack_38 = 0;
  puStack_a8 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106ec8868;
  puStack_b8 = &UNK_1109827f8;
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_b0 = param_2;
  uStack_88 = param_3;
  puStack_78 = puStack_a8;
  puStack_58 = puStack_a0;
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_d0);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec8868; end: 106ec88c3;  */

void FUN_106ec8868(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x38))
            (uVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec88c4; end: 106ec898f;  */

undefined **
FUN_106ec88c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec8990;
  puStack_50 = &UNK_110982878;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec8990; end: 106ec8aef;  */

void FUN_106ec8990(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_a0 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ec7b34;
  uStack_40 = 0x106ec7b44;
  uStack_38 = 0;
  puStack_a8 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106ec8af0;
  puStack_b8 = &UNK_1109827f8;
  uStack_90 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_b0 = param_2;
  uStack_88 = param_3;
  puStack_78 = puStack_a8;
  puStack_58 = puStack_a0;
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_d0);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec8af0; end: 106ec8b4b;  */

void FUN_106ec8af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x38))
            (uVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec8b4c; end: 106ec8c17;  */

undefined **
FUN_106ec8b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec8c18;
  puStack_50 = &UNK_1109828f8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec8c18; end: 106ec8db3;  */

void FUN_106ec8c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_b0 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106ec7b34;
  uStack_50 = 0x106ec7b44;
  uStack_48 = 0;
  puStack_b8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106ec8db4;
  puStack_d0 = &UNK_1109828c8;
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  uStack_98 = param_4;
  puStack_88 = puStack_b8;
  puStack_68 = puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_e8);
  uVar2 = puStack_68[5];
  _objc_retain(uVar2);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106ec8db4; end: 106ec8e13;  */

void FUN_106ec8db4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x40))
            (uVar1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ec8e14; end: 106ec8edf;  */

undefined **
FUN_106ec8e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec8ee0;
  puStack_50 = &UNK_110982978;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec8ee0; end: 106ec8fbb;  */

void FUN_106ec8ee0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_38,param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ec8fbc;
  puStack_58 = &UNK_110982948;
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,&puStack_70);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ec8fbc; end: 106ec900b;  */

void FUN_106ec8fbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x28))(lVar1,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec900c; end: 106ec90d7;  */

undefined **
FUN_106ec900c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec90d8;
  puStack_50 = &UNK_1109829f8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec90d8; end: 106ec91fb;  */

void FUN_106ec90d8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ec91fc;
  puStack_78 = &UNK_1109829c8;
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_70 = param_4;
  uStack_50 = param_3;
  _objc_retain(param_4);
  (*pcVar1)(lVar2,param_2,&puStack_90);
  _objc_release(param_2);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ec91fc; end: 106ec9253;  */

void FUN_106ec91fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x30))
              (lVar1,*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec9254; end: 106ec931f;  */

undefined **
FUN_106ec9254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec9320;
  puStack_50 = &UNK_110982a78;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec9320; end: 106ec943b;  */

void FUN_106ec9320(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ec943c;
  puStack_70 = &UNK_110982a48;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_68 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_88);
  _objc_release(param_2);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ec943c; end: 106ec948f;  */

void FUN_106ec943c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x30))
              (lVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec9490; end: 106ec955b;  */

undefined **
FUN_106ec9490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec955c;
  puStack_50 = &UNK_110982af8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec955c; end: 106ec9647;  */

void FUN_106ec955c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106ec9648;
  puStack_70 = &UNK_110982ac8;
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = param_3;
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,&puStack_88);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ec9648; end: 106ec969b;  */

void FUN_106ec9648(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x28))
              (lVar1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec969c; end: 106ec9767;  */

undefined **
FUN_106ec969c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec9768;
  puStack_50 = &UNK_110982b78;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec9768; end: 106ec988b;  */

void FUN_106ec9768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ec988c;
  puStack_78 = &UNK_110982b48;
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_70 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_90);
  _objc_release(param_2);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ec988c; end: 106ec98e3;  */

void FUN_106ec988c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x30))
              (lVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec98e4; end: 106ec99af;  */

undefined **
FUN_106ec98e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec99b0;
  puStack_50 = &UNK_110982bf8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec99b0; end: 106ec9aff;  */

void FUN_106ec99b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106ec9b00;
  puStack_78 = &UNK_110982bc8;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_70 = param_3;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_90);
  _objc_release(param_2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ec9b00; end: 106ec9b53;  */

void FUN_106ec9b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x38))
              (lVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec9b54; end: 106ec9c1f;  */

undefined **
FUN_106ec9b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec9c20;
  puStack_50 = &UNK_110982c78;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec9c20; end: 106ec9daf;  */

void FUN_106ec9c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_initWeak(auStack_58,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106ec9db0;
  puStack_90 = &UNK_110982c48;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_a8);
  _objc_release(param_2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106ec9db0; end: 106ec9e07;  */

void FUN_106ec9db0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x40))
              (lVar1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ec9e08; end: 106ec9ed3;  */

undefined **
FUN_106ec9e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ec9ed4;
  puStack_50 = &UNK_110982cf8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ec9ed4; end: 106eca097;  */

void FUN_106ec9ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_2);
  _objc_initWeak(auStack_58,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106eca098;
  puStack_98 = &UNK_110982cc8;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_b0);
  _objc_release(param_2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106eca098; end: 106eca0ef;  */

void FUN_106eca098(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x48))
              (lVar1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eca0f0; end: 106eca1bb;  */

undefined **
FUN_106eca0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106eca1bc;
  puStack_50 = &UNK_110982d78;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106eca1bc; end: 106eca2d7;  */

void FUN_106eca1bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106eca2d8;
  puStack_70 = &UNK_110982d48;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_68 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_88);
  _objc_release(param_2);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106eca2d8; end: 106eca32b;  */

void FUN_106eca2d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x30))
              (lVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eca32c; end: 106eca3f7;  */

undefined **
FUN_106eca32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106eca3f8;
  puStack_50 = &UNK_110982df8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106eca3f8; end: 106eca547;  */

void FUN_106eca3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_initWeak(auStack_48,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106eca548;
  puStack_78 = &UNK_110982dc8;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_70 = param_3;
  uStack_68 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_90);
  _objc_release(param_2);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106eca548; end: 106eca59b;  */

void FUN_106eca548(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x38))
              (lVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eca59c; end: 106eca667;  */

undefined **
FUN_106eca59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106eca668;
  puStack_50 = &UNK_110982e78;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106eca668; end: 106eca7f7;  */

void FUN_106eca668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_initWeak(auStack_58,param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106eca7f8;
  puStack_90 = &UNK_110982e48;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  (*pcVar1)(lVar2,param_2,&puStack_a8);
  _objc_release(param_2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106eca7f8; end: 106eca84f;  */

void FUN_106eca7f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x40))
              (lVar1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106eca850; end: 106eca91b;  */

undefined **
FUN_106eca850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106eca91c;
  puStack_50 = &UNK_110982ec8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106eca91c; end: 106ecaa3f;  */

undefined8 FUN_106eca91c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106ecaa40;
  puStack_a0 = &UNK_1109825f8;
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_98 = param_2;
  puStack_68 = puStack_90;
  puStack_48 = puStack_88;
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_b8);
  uVar2 = puStack_48[3];
  _objc_release(uStack_98);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  return uVar2;
}



/* Entry: 106ecaa40; end: 106ecaa83;  */

void FUN_106ecaa40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x38))(uVar1,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ecaa84; end: 106ecab4f;  */

undefined **
FUN_106ecaa84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ecab50;
  puStack_50 = &UNK_110982f18;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ecab50; end: 106ecac73;  */

undefined8 FUN_106ecab50(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106ecac74;
  puStack_a0 = &UNK_1109825f8;
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  pcVar1 = *(code **)(lVar3 + 0x10);
  uStack_98 = param_2;
  puStack_68 = puStack_90;
  puStack_48 = puStack_88;
  _objc_retain(param_2);
  (*pcVar1)(lVar3,param_2,&puStack_b8);
  uVar2 = puStack_48[3];
  _objc_release(uStack_98);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  return uVar2;
}



/* Entry: 106ecac74; end: 106ecacb7;  */

void FUN_106ecac74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x38))(uVar1,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = uVar1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ecacb8; end: 106ecad83;  */

undefined **
FUN_106ecacb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ecad84;
  puStack_50 = &UNK_110982f68;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ecad84; end: 106ecaeaf;  */

void FUN_106ecad84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_3);
  lVar2 = *(long *)(param_2 + 0x20);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106ecaeb0;
  puStack_88 = &UNK_110982b48;
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_68 = *(undefined8 *)(param_2 + 0x30);
  uStack_70 = *(undefined8 *)(param_2 + 0x28);
  pcVar1 = *(code **)(lVar2 + 0x10);
  uStack_80 = param_4;
  uStack_60 = param_1;
  _objc_retain(param_4);
  (*pcVar1)(lVar2,param_3,&puStack_a0);
  _objc_release(param_3);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106ecaeb0; end: 106ecaf07;  */

void FUN_106ecaeb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(param_1 + 0x30))
              (*(undefined8 *)(param_1 + 0x40),lVar1,*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ecaf08; end: 106ecafd3;  */

undefined **
FUN_106ecaf08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ecafd4;
  puStack_50 = &UNK_110982fb8;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ecafd4; end: 106ecb0f7;  */

undefined1 FUN_106ecafd4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106ecb0f8;
  puStack_a0 = &UNK_1109825f8;
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  pcVar2 = *(code **)(lVar3 + 0x10);
  uStack_98 = param_2;
  puStack_68 = puStack_90;
  puStack_48 = puStack_88;
  _objc_retain(param_2);
  (*pcVar2)(lVar3,param_2,&puStack_b8);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(uStack_98);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 106ecb0f8; end: 106ecb13b;  */

void FUN_106ecb0f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x38))(uVar1,*(undefined8 *)(param_1 + 0x40));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ecb13c; end: 106ecb207;  */

undefined **
FUN_106ecb13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106ecb208;
  puStack_50 = &UNK_110983008;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _imp_implementationWithBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return ppuVar2;
}



/* Entry: 106ecb208; end: 106ecb35f;  */

undefined1 FUN_106ecb208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_88 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_90 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106ecb360;
  puStack_a8 = &UNK_110982678;
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  pcVar2 = *(code **)(lVar3 + 0x10);
  uStack_a0 = param_2;
  uStack_98 = param_3;
  puStack_68 = puStack_90;
  puStack_48 = puStack_88;
  _objc_retain(param_3);
  _objc_retain(param_2);
  (*pcVar2)(lVar3,param_2,&puStack_c0);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 106ecb360; end: 106ecb3a7;  */

void FUN_106ecb360(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x40))
            (uVar1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar1;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106ecb3a8; end: 106ecb52f; -[SCSpectaclesGenericDataFlowsRequest initWithDevice:transferChannel:startSource:requestType:initialTasks:allowedPowerUsage:delegate:tag:backgroundExecutionMode:] */

undefined1 *
FUN_106ecb3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_70;
  _objc_initWeak(auStack_58,param_3);
  _objc_retain(param_7);
  _objc_initWeak(auStack_60,param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f7ba8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_58;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),puVar2);
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar5 = param_7;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar5;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar5);
    puVar2 = auStack_60;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),puVar2);
    _objc_release(puVar2);
    uVar5 = param_10;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar5;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
  }
  _objc_release(param_10);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_58);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecb530; end: 106ecb557; -[SCSpectaclesGenericDataFlowsRequest identifier] */

void FUN_106ecb530(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ecb558; end: 106ecb55f; -[SCSpectaclesGenericDataFlowsRequest transferChannel] */

undefined8 FUN_106ecb558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ecb560; end: 106ecb577; -[SCSpectaclesGenericDataFlowsRequest device] */

void FUN_106ecb560(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ecb578; end: 106ecb57f; -[SCSpectaclesGenericDataFlowsRequest startSource] */

undefined8 FUN_106ecb578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ecb580; end: 106ecb587; -[SCSpectaclesGenericDataFlowsRequest allowedPowerUsage] */

undefined8 FUN_106ecb580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ecb588; end: 106ecb58f; -[SCSpectaclesGenericDataFlowsRequest requestType] */

undefined8 FUN_106ecb588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ecb590; end: 106ecb5a7; -[SCSpectaclesGenericDataFlowsRequest delegate] */

void FUN_106ecb590(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ecb5a8; end: 106ecb5cf; -[SCSpectaclesGenericDataFlowsRequest initialTasks] */

void FUN_106ecb5a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ecb5d0; end: 106ecb5d7; -[SCSpectaclesGenericDataFlowsRequest backgroundExecutionMode] */

undefined8 FUN_106ecb5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ecb5d8; end: 106ecb623; -[SCSpectaclesGenericDataFlowsRequest .cxx_destruct] */

void FUN_106ecb5d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ecb624; end: 106ecb697; -[SCSpectaclesProxyAuthCounterValidator init] */

undefined1 * FUN_106ecb624(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7bb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010bfdea80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ecb698; end: 106ecb757; -[SCSpectaclesProxyAuthCounterValidator verifyAndUpdateCounter:] */

uint FUN_106ecb698(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar5,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar2 = param_3 - uVar4;
  if (param_3 < uVar4 || param_3 - uVar4 == 0) {
    uVar2 = uVar4 - param_3;
  }
  uVar1 = 0;
  if (uVar2 < 1000) {
    uVar1 = (uint)uVar5 ^ 1;
  }
  if (uVar1 == 1) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_2,puVar3);
    _objc_release(puVar3);
    *(ulong *)(param_1 + 0x10) = param_3;
  }
  return uVar1;
}



/* Entry: 106ecb758; end: 106ecb763; -[SCSpectaclesProxyAuthCounterValidator .cxx_destruct] */

void FUN_106ecb758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecb764; end: 106ecb7b3; -[SCSpectaclesProxyAuthenticator init] */

undefined1 * FUN_106ecb764(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bdeb120(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ecb7b4; end: 106ecb833; -[SCSpectaclesProxyAuthenticator _createAuthSeed] */

void FUN_106ecb7b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d3180;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ecb834; end: 106ecb837; -[SCSpectaclesProxyAuthenticator generateCredentials] */

void FUN_106ecb834(void)

{
  return;
}



/* Entry: 106ecb838; end: 106ecba9f; -[SCSpectaclesProxyAuthenticator verifyAndInvalidateCredentials:] */

undefined8 FUN_106ecb838(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  puVar3 = PTR_PTR_1126d3188;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar10 = param_3;
  func_0x00010c0f5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c034460();
  _objc_release(uVar10);
  if (puVar3 != (undefined *)0x0) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010bf53180();
    if ((lVar2 == 0) || (lVar1 == 0)) {
      puVar11 = (undefined *)0x0;
    }
    else {
      _objc_retainAutorelease(lVar1);
      _objc_retain();
      _objc_retain(lVar2);
      lVar4 = lVar1;
      func_0x00010bf25f00(lVar1);
      lVar5 = lVar1;
      func_0x00010c08fa60(lVar1);
      _objc_release(lVar1);
      puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64a60(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0();
      _objc_release(lVar2);
      func_0x00010bf06a40(puVar6);
      puVar11 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bf25f00();
      _CCHmac(2,lVar4,lVar5,puVar11,0xc,auStack_68);
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar11 != (undefined *)0x0) {
        puVar6 = puVar11;
        func_0x00010c08fa60();
        puVar7 = puVar3;
        func_0x00010bfe3be0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c08fa60();
        _objc_release(puVar7);
        if (puVar6 == puVar8) {
          puVar6 = puVar11;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar7 = puVar3;
          func_0x00010bfe3be0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          puVar9 = puVar11;
          func_0x00010c08fa60(puVar11);
          _timingsafe_bcmp(puVar6,puVar8,puVar9);
          _objc_release(puVar7);
          _objc_release(puVar11);
          if ((int)puVar6 == 0) {
            uVar10 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010bf53180(puVar3);
            func_0x00010c298560(uVar10);
            goto LAB_106ecba60;
          }
          goto LAB_106ecba5c;
        }
      }
    }
    _objc_release(puVar11);
  }
LAB_106ecba5c:
  uVar10 = 0;
LAB_106ecba60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar10;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(puVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bf15db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar10,PTR_s_base64EncodedStringWithOptions__1125a3110,0);
  return uVar10;
}



/* Entry: 106ecbaa0; end: 106ecbaab; -[SCSpectaclesProxyAuthenticator username] */

void FUN_106ecbaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf15db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_base64EncodedStringWithOptions__1125a3110,0);
  return;
}



/* Entry: 106ecbaac; end: 106ecbab7; -[SCSpectaclesProxyAuthenticator key] */

void FUN_106ecbaac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf15db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_base64EncodedStringWithOptions__1125a3110,0);
  return;
}



/* Entry: 106ecbab8; end: 106ecbaf3; -[SCSpectaclesProxyAuthenticator .cxx_destruct] */

void FUN_106ecbab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecbaf4; end: 106ecbb9f; -[SCSpectaclesProxyCredentials initWithUsername:password:] */

undefined1 *
FUN_106ecbaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7bc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ecbba0; end: 106ecbba7; -[SCSpectaclesProxyCredentials username] */

undefined8 FUN_106ecbba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ecbba8; end: 106ecbbaf; -[SCSpectaclesProxyCredentials password] */

undefined8 FUN_106ecbba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ecbbb0; end: 106ecbbdf; -[SCSpectaclesProxyCredentials .cxx_destruct] */

void FUN_106ecbbb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ecbbe0; end: 106ecbceb; -[SCSpectaclesProxyPasswordParser initWithPassword:] */

undefined1 * FUN_106ecbbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7bc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc();
    func_0x00010bff6b20();
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 != (undefined8 *)0x28) {
      _objc_release(puVar3);
      puVar5 = (undefined1 *)0x0;
      goto LAB_106ecbcc4;
    }
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    *(undefined8 *)((long)puVar1 + 0x18) = *puVar4;
    puVar4 = puVar3;
    func_0x00010c25eac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_106ecbcc4:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 106ecbcec; end: 106ecbcf3; -[SCSpectaclesProxyPasswordParser hmac] */

undefined8 FUN_106ecbcec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


