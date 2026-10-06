/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001f49c8; end: 1001f4a7b; +[SCDiskUtility freeDiskSpace:] */

undefined * FUN_1001f49c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_1001f4a7c();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c3e384(puVar1,param_2,puVar2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c4d9c0(puVar3,param_2,*(undefined8 *)PTR__NSFileSystemFreeSize_110345458);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5d38c();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 1001f4a7c; end: 1001f4acf;  */

void FUN_1001f4a7c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fdf00 != -1) {
    FUN_10002a2fc(0x1137fdf00,&PTR___NSConcreteGlobalBlock_110d98808);
  }
  uVar1 = uRam00000001137fdef8;
  func_0x000107c61174(uRam00000001137fdef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001f4ad0; end: 1001f4aeb;  */

void FUN_1001f4ad0(undefined8 param_1)

{
  FUN_1000285a8(0x112de2ad8,&UNK_10d9ab058);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003d49c0,param_1);
  return;
}



/* Entry: 1001f4aec; end: 1001f4b3b;  */

void FUN_1001f4aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f4b3c; end: 1001f4b87;  */

void FUN_1001f4b3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c60af8();
  func_0x000107c61180();
  uVar1 = uRam00000001137fdef8;
  uRam00000001137fdef8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001f4b88; end: 1001f4c1f;  */

void FUN_1001f4b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x11305ece0,&UNK_10dcd3520);
  puVar1 = &UNK_110742408;
  func_0x000107c613fc(&UNK_110742408,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1040b0450,puVar1);
  return;
}



/* Entry: 1001f4c20; end: 1001f4c53;  */

void FUN_1001f4c20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f4c54; end: 1001f4c77; -[KSCrashInstallation requiredProperties] */

undefined8 FUN_1001f4c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1001f4c78; end: 1001f4d37; -[KSCrashInstallationSnapAir sink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001f4c78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d05e0;
  func_0x000107c434bc(PTR_PTR_1126d05e0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d05c8;
  func_0x000107c43504(PTR_PTR_1126d05c8,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1001f4d38; end: 1001f4dcf;  */

void FUN_1001f4d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc1ed8,&UNK_10d97e8d0);
  puVar1 = &UNK_1103f9eb0;
  func_0x000107c613fc(&UNK_1103f9eb0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(0x1003d8208,puVar1);
  return;
}



/* Entry: 1001f4dd0; end: 1001f4f27; +[KSCrashReportFilterSnapAir filterForSnapAir] */

void FUN_1001f4dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b6c28;
  func_0x000107c43514(PTR_PTR_1126b6c28,param_2,0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d0608;
  func_0x000107c4350c(PTR_PTR_1126d0608,param_2,&PTR____CFConstantStringClassReference_110dafeb8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d0610;
  func_0x000107c43508(PTR_PTR_1126d0610,param_2,puVar1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126d05c8;
  func_0x000107c43504(PTR_PTR_1126d05c8,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1001f4f28; end: 1001f532f; +[KSCrashReportFilterAppleFmt initialize] */

void FUN_1001f4f28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610fc();
  uVar1 = puRam00000001136c6328;
  puRam00000001136c6328 = puVar2;
  FUN_1001f5664(uVar1);
  puVar2 = puRam00000001136c6328;
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x000107c4b844(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,
                      &PTR____CFConstantStringClassReference_110e70358);
  func_0x000107c61180();
  func_0x000107c5601c(puVar2,param_2,puVar3);
  FUN_1001f72a4();
  func_0x000107c53e28(puRam00000001136c6328,param_2,&PTR____CFConstantStringClassReference_110e70378
                     );
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  func_0x000107c610fc();
  uVar1 = puRam00000001136c6330;
  puRam00000001136c6330 = puVar2;
  FUN_1001f5664(uVar1);
  puVar2 = puRam00000001136c6330;
  puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x000107c4b844(PTR__OBJC_CLASS___NSLocale_1126af788,param_2,
                      &PTR____CFConstantStringClassReference_110e70358);
  func_0x000107c61180();
  func_0x000107c5601c(puVar2,param_2,puVar3);
  FUN_1001f73dc();
  func_0x000107c53e28(puRam00000001136c6330,param_2,&PTR____CFConstantStringClassReference_110e70398
                     );
  puVar2 = puRam00000001136c6330;
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  func_0x000107c5ca2c(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_2,0);
  func_0x000107c61180();
  func_0x000107c59d94(puVar2,param_2,puVar3);
  FUN_1001f73dc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e178(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                      &PTR____CFConstantStringClassReference_110e6faf8);
  func_0x000107c61180();
  func_0x000107c3e178(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                      &PTR____CFConstantStringClassReference_110e70538);
  func_0x000107c61180();
  func_0x000107c3e178(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,
                      &PTR____CFConstantStringClassReference_110e70678);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f4();
  func_0x000107c47b5c();
  uVar1 = puRam00000001136c6338;
  puRam00000001136c6338 = puVar3;
  FUN_1001f5664(uVar1);
  FUN_1001f72a4();
  FUN_1001f73dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1001f5330; end: 1001f537b;  */

void FUN_1001f5330(undefined8 param_1)

{
  FUN_1000285a8(0x112dc1ee0,&UNK_10d97e940);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003d3f18,param_1);
  return;
}



/* Entry: 1001f537c; end: 1001f5413;  */

void FUN_1001f537c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d850,&UNK_10d95b550);
  puVar1 = &UNK_1103db3a8;
  func_0x000107c613fc(&UNK_1103db3a8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100614a68,puVar1);
  return;
}



/* Entry: 1001f5414; end: 1001f5493;  */

void FUN_1001f5414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc8c58,&UNK_10d989b60);
  puVar1 = &UNK_110407170;
  func_0x000107c613fc(&UNK_110407170,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100a882a8,puVar1);
  return;
}



/* Entry: 1001f5494; end: 1001f54b3;  */

void FUN_1001f5494(void)

{
  func_0x000107c61168(&PTR_PTR_112dc8cd0);
  return;
}



/* Entry: 1001f54b4; end: 1001f54cf;  */

void FUN_1001f54b4(undefined8 param_1)

{
  FUN_1000285a8(0x112dc8c60,&UNK_10d989b68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a8824c,param_1);
  return;
}



/* Entry: 1001f54d0; end: 1001f551f;  */

void FUN_1001f54d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f5520; end: 1001f556b;  */

void FUN_1001f5520(undefined8 param_1)

{
  FUN_1000285a8(0x112db0ec8,&UNK_10d95b340);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004fcb74,param_1);
  return;
}



/* Entry: 1001f556c; end: 1001f5587;  */

void FUN_1001f556c(undefined8 param_1)

{
  FUN_1000285a8(0x112de8b30,&UNK_10d9b3bf8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006429a8,param_1);
  return;
}



/* Entry: 1001f5588; end: 1001f55d7;  */

void FUN_1001f5588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f55d8; end: 1001f55f7;  */

void FUN_1001f55d8(void)

{
  func_0x000107c61168(&PTR_PTR_1129678d8);
  return;
}



/* Entry: 1001f55f8; end: 1001f5643;  */

void FUN_1001f55f8(undefined8 param_1)

{
  FUN_1000285a8(0x113044e38,&UNK_10dcbeaa8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009c96e8,param_1);
  return;
}



/* Entry: 1001f5644; end: 1001f5663;  */

void FUN_1001f5644(void)

{
  func_0x000107c61168(&PTR_PTR_11297c670);
  return;
}



/* Entry: 1001f5664; end: 1001f567f;  */

void FUN_1001f5664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001f5680; end: 1001f574f;  */

void FUN_1001f5680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  FUN_1000285a8(0x112db0d78,&UNK_10d95af90);
  func_0x000107c613fc(param_7,0x40,7);
  *(undefined8 *)(param_7 + 0x10) = param_3;
  *(undefined8 *)(param_7 + 0x18) = param_1;
  *(undefined8 *)(param_7 + 0x20) = param_2;
  *(undefined8 *)(param_7 + 0x28) = param_4;
  *(undefined8 *)(param_7 + 0x30) = param_5;
  *(undefined8 *)(param_7 + 0x38) = param_6;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(param_8,param_7);
  return;
}



/* Entry: 1001f5750; end: 1001f57e7;  */

void FUN_1001f5750(undefined8 param_1)

{
  FUN_1000285a8(0x112dc81b0,&UNK_10d988a50);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1017703cc,param_1);
  return;
}



/* Entry: 1001f57e8; end: 1001f5807;  */

void FUN_1001f57e8(void)

{
  func_0x000107c61168(&PTR_PTR_112953e30);
  return;
}



/* Entry: 1001f5808; end: 1001f58c3;  */

void FUN_1001f5808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d9b0,&UNK_10d93e6b8);
  puVar1 = &UNK_1103db1c8;
  func_0x000107c613fc(&UNK_1103db1c8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(0x100b41624,puVar1);
  return;
}



/* Entry: 1001f58c4; end: 1001f5943;  */

void FUN_1001f58c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db06a8,&UNK_10d95a1c0);
  puVar1 = &UNK_1103db3f8;
  func_0x000107c613fc(&UNK_1103db3f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10096a2d4,puVar1);
  return;
}



/* Entry: 1001f5944; end: 1001f5967;  */

void FUN_1001f5944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110736838;
  FUN_1000285a8(0x1130495f0,&UNK_10dcc48c8);
  func_0x000107c613fc(&UNK_110736838,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009d0438,puVar1);
  return;
}



/* Entry: 1001f5968; end: 1001f59e7;  */

void FUN_1001f5968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1001f59e8; end: 1001f5a07;  */

void FUN_1001f59e8(void)

{
  func_0x000107c61168(&PTR_PTR_11297f970);
  return;
}



/* Entry: 1001f5a08; end: 1001f5a23;  */

void FUN_1001f5a08(undefined8 param_1)

{
  FUN_1000285a8(0x112dca078,&UNK_10d98b678);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100719ce0,param_1);
  return;
}



/* Entry: 1001f5a24; end: 1001f5a73;  */

void FUN_1001f5a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f5a74; end: 1001f5a93;  */

void FUN_1001f5a74(void)

{
  func_0x000107c61168(&PTR_PTR_11294ec70);
  return;
}



/* Entry: 1001f5a94; end: 1001f5aab;  */

void FUN_1001f5a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103daa08;
  FUN_1000285a8(0x112db0d78,&UNK_10d95af90);
  func_0x000107c613fc(&UNK_1103daa08,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_10152d03c,puVar1);
  return;
}



/* Entry: 1001f5aac; end: 1001f5b2b;  */

void FUN_1001f5aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0a060,&UNK_10d9e0570);
  puVar1 = &UNK_110458180;
  func_0x000107c613fc(&UNK_110458180,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101c26cf8,puVar1);
  return;
}



/* Entry: 1001f5b2c; end: 1001f5b77;  */

void FUN_1001f5b2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f5b78; end: 1001f5c3f;  */

void FUN_1001f5b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de2410,&UNK_10d9aa4c0);
  puVar1 = &UNK_110422c60;
  func_0x000107c613fc(&UNK_110422c60,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1003d40a0,puVar1);
  return;
}



/* Entry: 1001f5c40; end: 1001f5c5f;  */

void FUN_1001f5c40(void)

{
  func_0x000107c61168(&PTR_PTR_112de2488);
  return;
}



/* Entry: 1001f5c60; end: 1001f5cab;  */

void FUN_1001f5c60(undefined8 param_1)

{
  FUN_1000285a8(0x113044518,&UNK_10dcbe0c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009acd58,param_1);
  return;
}



/* Entry: 1001f5cac; end: 1001f5ccb;  */

void FUN_1001f5cac(void)

{
  func_0x000107c61168(&PTR_PTR_11297bb20);
  return;
}



/* Entry: 1001f5ccc; end: 1001f5ce7;  */

void FUN_1001f5ccc(undefined8 param_1)

{
  FUN_1000285a8(0x112db0c78,&UNK_10d95ade8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009d088c,param_1);
  return;
}



/* Entry: 1001f5ce8; end: 1001f5d37;  */

void FUN_1001f5ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f5d38; end: 1001f5d53;  */

void FUN_1001f5d38(undefined8 param_1)

{
  FUN_1000285a8(0x112db0c80,&UNK_10d95adf0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10152c7ac,param_1);
  return;
}



/* Entry: 1001f5d54; end: 1001f5e0f;  */

void FUN_1001f5d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc72a8,&UNK_10d9879e0);
  puVar1 = &UNK_110404830;
  func_0x000107c613fc(&UNK_110404830,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10175fce8,puVar1);
  return;
}



/* Entry: 1001f5e10; end: 1001f5e53;  */

void FUN_1001f5e10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f5e54; end: 1001f5e6f;  */

void FUN_1001f5e54(undefined8 param_1)

{
  FUN_1000285a8(0x112de2418,&UNK_10d9aa4c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003d4044,param_1);
  return;
}



/* Entry: 1001f5e70; end: 1001f5ebf;  */

void FUN_1001f5e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f5ec0; end: 1001f5f57;  */

void FUN_1001f5ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de4848,&UNK_10d9ae380);
  puVar1 = &UNK_1104247c8;
  func_0x000107c613fc(&UNK_1104247c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10046fff8,puVar1);
  return;
}



/* Entry: 1001f5f58; end: 1001f5f77;  */

void FUN_1001f5f58(void)

{
  func_0x000107c61168(&PTR_PTR_112de48c0);
  return;
}



/* Entry: 1001f5f78; end: 1001f5f93;  */

void FUN_1001f5f78(undefined8 param_1)

{
  FUN_1000285a8(0x112de4850,&UNK_10d9ae388);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10046ff9c,param_1);
  return;
}



/* Entry: 1001f5f94; end: 1001f5fe3;  */

void FUN_1001f5f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f5fe4; end: 1001f6007;  */

void FUN_1001f5fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103db3d0;
  FUN_1000285a8(0x112db0ef8,&UNK_10d95b558);
  func_0x000107c613fc(&UNK_1103db3d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(0x10096a204,puVar1);
  return;
}



/* Entry: 1001f6008; end: 1001f612b;  */

void FUN_1001f6008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1001f612c; end: 1001f61ab;  */

void FUN_1001f612c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db0ef0,&UNK_10d95b488);
  puVar1 = &UNK_1103db1f0;
  func_0x000107c613fc(&UNK_1103db1f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100256a00,puVar1);
  return;
}



/* Entry: 1001f61ac; end: 1001f61cf;  */

void FUN_1001f61ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103db420;
  FUN_1000285a8(0x112d37ed8,&UNK_10d901d40);
  func_0x000107c613fc(&UNK_1103db420,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100255bc0,puVar1);
  return;
}



/* Entry: 1001f61d0; end: 1001f6267;  */

void FUN_1001f61d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc6488,&UNK_10d986320);
  puVar1 = &UNK_110402938;
  func_0x000107c613fc(&UNK_110402938,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10174e758,puVar1);
  return;
}



/* Entry: 1001f6268; end: 1001f629b;  */

void FUN_1001f6268(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f629c; end: 1001f6333;  */

void FUN_1001f629c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc64a0,&UNK_10d986380);
  puVar1 = &UNK_1104029a0;
  func_0x000107c613fc(&UNK_1104029a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10174e894,puVar1);
  return;
}



/* Entry: 1001f6334; end: 1001f6367;  */

void FUN_1001f6334(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f6368; end: 1001f63ff;  */

void FUN_1001f6368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113018178,&UNK_10dc9cc28);
  puVar1 = &UNK_110717008;
  func_0x000107c613fc(&UNK_110717008,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10099fef8,puVar1);
  return;
}



/* Entry: 1001f6400; end: 1001f641f;  */

void FUN_1001f6400(void)

{
  func_0x000107c61168(&PTR_PTR_112953bc0);
  return;
}



/* Entry: 1001f6420; end: 1001f64e7;  */

void FUN_1001f6420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddeae8,&UNK_10d9a5340);
  puVar1 = &UNK_11041e468;
  func_0x000107c613fc(&UNK_11041e468,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_100979710,puVar1);
  return;
}



/* Entry: 1001f64e8; end: 1001f6507;  */

void FUN_1001f64e8(void)

{
  func_0x000107c61168(&PTR_PTR_112ddeb60);
  return;
}



/* Entry: 1001f6508; end: 1001f6523;  */

void FUN_1001f6508(undefined8 param_1)

{
  FUN_1000285a8(0x112ddeaf0,&UNK_10d9a5348);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009796b4,param_1);
  return;
}



/* Entry: 1001f6524; end: 1001f6573;  */

void FUN_1001f6524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f6574; end: 1001f6593;  */

void FUN_1001f6574(void)

{
  func_0x000107c61168(&PTR_PTR_112959548);
  return;
}



/* Entry: 1001f6594; end: 1001f6613;  */

void FUN_1001f6594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df7378,&UNK_10d9c6b00);
  puVar1 = &UNK_11043b7e0;
  func_0x000107c613fc(&UNK_11043b7e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101ab20ac,puVar1);
  return;
}



/* Entry: 1001f6614; end: 1001f663f;  */

void FUN_1001f6614(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f6640; end: 1001f66fb;  */

void FUN_1001f6640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de1f68,&UNK_10d9a9c70);
  puVar1 = &UNK_1104228a0;
  func_0x000107c613fc(&UNK_1104228a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1007718d0,puVar1);
  return;
}



/* Entry: 1001f66fc; end: 1001f671b;  */

void FUN_1001f66fc(void)

{
  func_0x000107c61168(&PTR_PTR_112de1fe0);
  return;
}



/* Entry: 1001f671c; end: 1001f67bf;  */

void FUN_1001f671c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ded490,&UNK_10d9b9cc0);
  puVar1 = &UNK_11042eec8;
  func_0x000107c613fc(&UNK_11042eec8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101a3b400,puVar1);
  return;
}



/* Entry: 1001f67c0; end: 1001f681b;  */

void FUN_1001f67c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f681c; end: 1001f6837;  */

void FUN_1001f681c(undefined8 param_1)

{
  FUN_1000285a8(0x112ded498,&UNK_10d9b9cc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101a3b5c8,param_1);
  return;
}



/* Entry: 1001f6838; end: 1001f6887;  */

void FUN_1001f6838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f6888; end: 1001f68a7;  */

void FUN_1001f6888(void)

{
  func_0x000107c61168(&PTR_PTR_112804ab0);
  return;
}



/* Entry: 1001f68a8; end: 1001f693f;  */

void FUN_1001f68a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df2bc0,&UNK_10d9c0d30);
  puVar1 = &UNK_110435060;
  func_0x000107c613fc(&UNK_110435060,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101a77c00,puVar1);
  return;
}



/* Entry: 1001f6940; end: 1001f69b3;  */

void FUN_1001f6940(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f69b4; end: 1001f69ff;  */

void FUN_1001f69b4(undefined8 param_1)

{
  FUN_1000285a8(0x112dbf908,&UNK_10d97b450);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f7e44,param_1);
  return;
}



/* Entry: 1001f6a00; end: 1001f6a47;  */

void FUN_1001f6a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f4e98;
  FUN_1000285a8(0x112d6a5b0,&UNK_10d97b460);
  func_0x000107c613fc(&UNK_1103f4e98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003a7364,puVar1);
  return;
}



/* Entry: 1001f6a48; end: 1001f6aeb;  */

void FUN_1001f6a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df6938,&UNK_10d9c5b20);
  puVar1 = &UNK_11043aa10;
  func_0x000107c613fc(&UNK_11043aa10,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10043d110,puVar1);
  return;
}



/* Entry: 1001f6aec; end: 1001f6b0b;  */

void FUN_1001f6aec(void)

{
  func_0x000107c61168(&PTR_PTR_112df69b0);
  return;
}



/* Entry: 1001f6b0c; end: 1001f6bc7;  */

void FUN_1001f6b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db0d88,&UNK_10d95afa0);
  puVar1 = &UNK_1103daa58;
  func_0x000107c613fc(&UNK_1103daa58,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(0x1009caef4,puVar1);
  return;
}



/* Entry: 1001f6bc8; end: 1001f6beb;  */

void FUN_1001f6bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103daa80;
  FUN_1000285a8(0x112db0d90,&UNK_10d95afa8);
  func_0x000107c613fc(&UNK_1103daa80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100256c5c,puVar1);
  return;
}



/* Entry: 1001f6bec; end: 1001f6ccb;  */

void FUN_1001f6bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddf578,&UNK_10d9a6660);
  puVar1 = &UNK_11041ec38;
  func_0x000107c613fc(&UNK_11041ec38,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_101985cd0,puVar1);
  return;
}



/* Entry: 1001f6ccc; end: 1001f6d3f;  */

void FUN_1001f6ccc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f6d40; end: 1001f6d5b;  */

void FUN_1001f6d40(undefined8 param_1)

{
  FUN_1000285a8(0x112ddf580,&UNK_10d9a6668);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101986194,param_1);
  return;
}



/* Entry: 1001f6d5c; end: 1001f6dab;  */

void FUN_1001f6d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f6dac; end: 1001f6dc7;  */

void FUN_1001f6dac(undefined8 param_1)

{
  FUN_1000285a8(0x112de1f70,&UNK_10d9a9c78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100771874,param_1);
  return;
}



/* Entry: 1001f6dc8; end: 1001f6e17;  */

void FUN_1001f6dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001f6e18; end: 1001f6ef7;  */

void FUN_1001f6e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df5e70,&UNK_10d9c4b20);
  puVar1 = &UNK_110439c88;
  func_0x000107c613fc(&UNK_110439c88,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_101aa7dac,puVar1);
  return;
}



/* Entry: 1001f6ef8; end: 1001f6f6b;  */

void FUN_1001f6ef8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f6f6c; end: 1001f6feb;  */

void FUN_1001f6f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db06a0,&UNK_10d95a160);
  puVar1 = &UNK_1103d8d88;
  func_0x000107c613fc(&UNK_1103d8d88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101526c88,puVar1);
  return;
}



/* Entry: 1001f6fec; end: 1001f7017;  */

void FUN_1001f6fec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f7018; end: 1001f70af;  */

void FUN_1001f7018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de4b20,&UNK_10d9ae860);
  puVar1 = &UNK_110424a20;
  func_0x000107c613fc(&UNK_110424a20,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1019bb3e4,puVar1);
  return;
}



/* Entry: 1001f70b0; end: 1001f7103;  */

void FUN_1001f70b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001f7104; end: 1001f711f;  */

void FUN_1001f7104(undefined8 param_1)

{
  FUN_1000285a8(0x112de4b28,&UNK_10d9ae868);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1019bb6b4,param_1);
  return;
}



/* Entry: 1001f7120; end: 1001f716f;  */

void FUN_1001f7120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}


