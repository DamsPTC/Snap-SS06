/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001d6800; end: 1001d6807;  */

void FUN_1001d6800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1001d6808; end: 1001d685f;  */

void FUN_1001d6808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001d6860; end: 1001d686f; -[GPBAutocreatedArray countByEnumeratingWithState:objects:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001d6860(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796b2c),
             PTR_s_countByEnumeratingWithState_obje_1125b2440);
  return;
}



/* Entry: 1001d6870; end: 1001d68ff; -[GPBAutocreatedArray dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001d6870(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112796b2c));
  puStack_28 = PTR_PTR_11270e7c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1001d6900; end: 1001d6997;  */

void FUN_1001d6900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d6afb0,&UNK_10d92e490);
  puVar1 = &UNK_1104041b8;
  func_0x000107c613fc(&UNK_1104041b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10070e6f8,puVar1);
  return;
}



/* Entry: 1001d6998; end: 1001d69b7;  */

void FUN_1001d6998(void)

{
  func_0x000107c61168(&PTR_PTR_112908d98);
  return;
}



/* Entry: 1001d69b8; end: 1001d6beb; -[SCPreferencesObservationGraph notifyObserversForChangedObjects:] */

void FUN_1001d69b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c520a4();
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  lVar4 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      lVar5 = *(long *)(param_1 + 8);
      func_0x000107c4d9e8();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar6 = lVar5;
        func_0x000107c4a8cc();
        func_0x000107c61180();
        lVar7 = lVar6;
        func_0x000107c4080c();
        lVar2 = lRam0000000000000000;
        while (lVar7 != 0) {
          lVar11 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              func_0x000107c61128(lVar6);
            }
            puVar8 = puVar3;
            func_0x000107c40404();
            if (((ulong)puVar8 & 1) == 0) {
              func_0x000107c3d798(puVar3);
              lVar9 = lVar5;
              func_0x000107c4d9e8(lVar5);
              func_0x000107c61180();
              func_0x000107c4dabc();
              func_0x000107c61170(lVar9);
            }
            lVar11 = lVar11 + 1;
          } while (lVar7 != lVar11);
          lVar7 = lVar6;
          func_0x000107c4080c();
        }
        func_0x000107c61170(lVar6);
      }
      func_0x000107c61170(lVar5);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar4);
    lVar4 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000285a8(0x112db41d0,&UNK_10d95e730);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10403c504,param_3);
  return;
}



/* Entry: 1001d6bec; end: 1001d6c07;  */

void FUN_1001d6bec(undefined8 param_1)

{
  FUN_1000285a8(0x112db41d0,&UNK_10d95e730);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10403c504,param_1);
  return;
}



/* Entry: 1001d6c08; end: 1001d6c57;  */

void FUN_1001d6c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d6c58; end: 1001d6c73;  */

void FUN_1001d6c58(undefined8 param_1)

{
  FUN_1000285a8(0x112dcb838,&UNK_10d98ddc0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10070daec,param_1);
  return;
}



/* Entry: 1001d6c74; end: 1001d6cc3;  */

void FUN_1001d6c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d6cc4; end: 1001d6ce3;  */

void FUN_1001d6cc4(void)

{
  func_0x000107c61168(&PTR_PTR_112dcb8b0);
  return;
}



/* Entry: 1001d6ce4; end: 1001d6cff;  */

void FUN_1001d6ce4(undefined8 param_1)

{
  FUN_1000285a8(0x112dcb840,&UNK_10d98ddc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10070da90,param_1);
  return;
}



/* Entry: 1001d6d00; end: 1001d6d1f;  */

void FUN_1001d6d00(void)

{
  func_0x000107c61168(&PTR_PTR_1129db680);
  return;
}



/* Entry: 1001d6d20; end: 1001d6d3b;  */

void FUN_1001d6d20(undefined8 param_1)

{
  FUN_1000285a8(0x112de5de0,&UNK_10d9b0950);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10046fd64,param_1);
  return;
}



/* Entry: 1001d6d3c; end: 1001d6d8b;  */

void FUN_1001d6d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d6d8c; end: 1001d6dab;  */

void FUN_1001d6d8c(void)

{
  func_0x000107c61168(&PTR_PTR_112de5e58);
  return;
}



/* Entry: 1001d6dac; end: 1001d6e67;  */

void FUN_1001d6dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc97b0,&UNK_10d98a900);
  puVar1 = &UNK_110407cb0;
  func_0x000107c613fc(&UNK_110407cb0,0x38,7);
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
  FUN_1000823a8(FUN_1003cf324,puVar1);
  return;
}



/* Entry: 1001d6e68; end: 1001d6e87;  */

void FUN_1001d6e68(void)

{
  func_0x000107c61168(&PTR_PTR_112dc9828);
  return;
}



/* Entry: 1001d6e88; end: 1001d6ea3;  */

void FUN_1001d6e88(undefined8 param_1)

{
  FUN_1000285a8(0x112dc97b8,&UNK_10d98a908);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003cf2c8,param_1);
  return;
}



/* Entry: 1001d6ea4; end: 1001d6ef3;  */

void FUN_1001d6ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d6ef4; end: 1001d6f13;  */

void FUN_1001d6ef4(void)

{
  func_0x000107c61168(&PTR_PTR_11294d910);
  return;
}



/* Entry: 1001d6f14; end: 1001d6f2f;  */

void FUN_1001d6f14(undefined8 param_1)

{
  FUN_1000285a8(0x112dc9ac0,&UNK_10d98ad28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100729dfc,param_1);
  return;
}



/* Entry: 1001d6f30; end: 1001d6f4f;  */

void FUN_1001d6f30(void)

{
  func_0x000107c61168(&PTR_PTR_1128a14d8);
  return;
}



/* Entry: 1001d6f50; end: 1001d6fcf;  */

void FUN_1001d6f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc9c90,&UNK_10d98b010);
  puVar1 = &UNK_110407fa8;
  func_0x000107c613fc(&UNK_110407fa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10070bcec,puVar1);
  return;
}



/* Entry: 1001d6fd0; end: 1001d6fef;  */

void FUN_1001d6fd0(void)

{
  func_0x000107c61168(&PTR_PTR_112dc9d08);
  return;
}



/* Entry: 1001d6ff0; end: 1001d700b;  */

void FUN_1001d6ff0(undefined8 param_1)

{
  FUN_1000285a8(0x112dc9c98,&UNK_10d98b018);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10070bc90,param_1);
  return;
}



/* Entry: 1001d700c; end: 1001d705b;  */

void FUN_1001d700c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d705c; end: 1001d707b;  */

void FUN_1001d705c(void)

{
  func_0x000107c61168(&PTR_PTR_1129808e8);
  return;
}



/* Entry: 1001d707c; end: 1001d7113;  */

void FUN_1001d707c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc9f80,&UNK_10d98b4d0);
  puVar1 = &UNK_110408200;
  func_0x000107c613fc(&UNK_110408200,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1004404b4,puVar1);
  return;
}



/* Entry: 1001d7114; end: 1001d7133;  */

void FUN_1001d7114(void)

{
  func_0x000107c61168(&PTR_PTR_112dc9ff8);
  return;
}



/* Entry: 1001d7134; end: 1001d714f;  */

void FUN_1001d7134(undefined8 param_1)

{
  FUN_1000285a8(0x112dd3010,&UNK_10d995808);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b8abc0,param_1);
  return;
}



/* Entry: 1001d7150; end: 1001d719f;  */

void FUN_1001d7150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d71a0; end: 1001d71bf;  */

void FUN_1001d71a0(void)

{
  func_0x000107c61168(&PTR_PTR_11294f9d8);
  return;
}



/* Entry: 1001d71c0; end: 1001d71db;  */

void FUN_1001d71c0(undefined8 param_1)

{
  FUN_1000285a8(0x112dca168,&UNK_10d98b818);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10040c198,param_1);
  return;
}



/* Entry: 1001d71dc; end: 1001d71fb;  */

void FUN_1001d71dc(void)

{
  func_0x000107c61168(&PTR_PTR_11294d210);
  return;
}



/* Entry: 1001d71fc; end: 1001d7247;  */

void FUN_1001d71fc(undefined8 param_1)

{
  FUN_1000285a8(0x112dbf800,&UNK_10d97aec0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1016a3058,param_1);
  return;
}



/* Entry: 1001d7248; end: 1001d7267;  */

void FUN_1001d7248(void)

{
  func_0x000107c61168(&PTR_PTR_112953978);
  return;
}



/* Entry: 1001d7268; end: 1001d730b;  */

void FUN_1001d7268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc5d30,&UNK_10d9859a0);
  puVar1 = &UNK_110401cf8;
  func_0x000107c613fc(&UNK_110401cf8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101746bb0,puVar1);
  return;
}



/* Entry: 1001d730c; end: 1001d730f;  */

void FUN_1001d730c(void)

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



/* Entry: 1001d7310; end: 1001d732f;  */

void FUN_1001d7310(void)

{
  func_0x000107c61168(&PTR_PTR_112dc5d80);
  return;
}



/* Entry: 1001d7330; end: 1001d734b;  */

void FUN_1001d7330(undefined8 param_1)

{
  FUN_1000285a8(0x112dd2c10,&UNK_10d9950f8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100459bd4,param_1);
  return;
}



/* Entry: 1001d734c; end: 1001d736b;  */

void FUN_1001d734c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1eb8);
  return;
}



/* Entry: 1001d736c; end: 1001d73eb;  */

void FUN_1001d736c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc6b60,&UNK_10d986ff0);
  puVar1 = &UNK_110403bc8;
  func_0x000107c613fc(&UNK_110403bc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_10175a32c,puVar1);
  return;
}



/* Entry: 1001d73ec; end: 1001d7417;  */

void FUN_1001d73ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001d7418; end: 1001d742f;  */

void FUN_1001d7418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103da9b8;
  FUN_1000285a8(0x112db0d70,&UNK_10d95af88);
  func_0x000107c613fc(&UNK_1103da9b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_10152ce68,puVar1);
  return;
}



/* Entry: 1001d7430; end: 1001d74af;  */

void FUN_1001d7430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dca858,&UNK_10d98c330);
  puVar1 = &UNK_1104088b8;
  func_0x000107c613fc(&UNK_1104088b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003fdb48,puVar1);
  return;
}



/* Entry: 1001d74b0; end: 1001d74cf;  */

void FUN_1001d74b0(void)

{
  func_0x000107c61168(&PTR_PTR_112dca8d0);
  return;
}



/* Entry: 1001d74d0; end: 1001d7567;  */

void FUN_1001d74d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc2d28,&UNK_10d97fdf0);
  puVar1 = &UNK_1103fba78;
  func_0x000107c613fc(&UNK_1103fba78,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1016ec914,puVar1);
  return;
}



/* Entry: 1001d7568; end: 1001d7573;  */

void FUN_1001d7568(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001016edaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1001d7574; end: 1001d75f3;  */

void FUN_1001d7574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc2f38,&UNK_10d980070);
  puVar1 = &UNK_1103fbcc0;
  func_0x000107c613fc(&UNK_1103fbcc0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1016f0c7c,puVar1);
  return;
}



/* Entry: 1001d75f4; end: 1001d75ff;  */

void FUN_1001d75f4(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocObject_11034f298;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001016f11e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1001d7600; end: 1001d7697;  */

void FUN_1001d7600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db08d0,&UNK_10d95a740);
  puVar1 = &UNK_1103d97b8;
  func_0x000107c613fc(&UNK_1103d97b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101527788,puVar1);
  return;
}



/* Entry: 1001d7698; end: 1001d76cb;  */

void FUN_1001d7698(void)

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



/* Entry: 1001d76cc; end: 1001d77ff;  */

void FUN_1001d76cc(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10025a618,param_1);
  return;
}



/* Entry: 1001d7800; end: 1001d7897;  */

void FUN_1001d7800(undefined8 param_1)

{
  FUN_1000285a8(0x112db0d98,&UNK_10d95afb0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10076e83c,param_1);
  return;
}



/* Entry: 1001d7898; end: 1001d78b7;  */

void FUN_1001d7898(void)

{
  func_0x000107c61168(&PTR_PTR_11294a850);
  return;
}



/* Entry: 1001d78b8; end: 1001d78d3;  */

void FUN_1001d78b8(undefined8 param_1)

{
  FUN_1000285a8(0x112dd98e0,&UNK_10d99d448);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c26b0,param_1);
  return;
}



/* Entry: 1001d78d4; end: 1001d7923;  */

void FUN_1001d78d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d7924; end: 1001d794b;  */

void FUN_1001d7924(void)

{
  undefined8 *unaff_x19;
  long unaff_x22;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  unaff_x19[1] = *(undefined8 *)(unaff_x22 + 0x48);
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1001d794c; end: 1001d797f;  */

void FUN_1001d794c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3bea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001d7980; end: 1001d7a17;  */

void FUN_1001d7980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112db08a0,&UNK_10d95a5f0);
  puVar1 = &UNK_1103d9530;
  func_0x000107c613fc(&UNK_1103d9530,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100444600,puVar1);
  return;
}



/* Entry: 1001d7a18; end: 1001d7a33;  */

void FUN_1001d7a18(undefined8 param_1)

{
  FUN_1000285a8(0x112de9998,&UNK_10d9b4e38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d1dbc,param_1);
  return;
}



/* Entry: 1001d7a34; end: 1001d7a83;  */

void FUN_1001d7a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d7a84; end: 1001d7b1b;  */

void FUN_1001d7a84(undefined8 param_1,undefined8 param_2)

{
  FUN_1000285a8(0x112db0ee0,&UNK_10d95b410);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003bb550,param_2);
  return;
}



/* Entry: 1001d7b1c; end: 1001d7b3b;  */

void FUN_1001d7b1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7780);
  return;
}



/* Entry: 1001d7b3c; end: 1001d7b5f;  */

void FUN_1001d7b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f4e70;
  FUN_1000285a8(0x112dbf910,&UNK_10d97b458);
  func_0x000107c613fc(&UNK_1103f4e70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1016a498c,puVar1);
  return;
}



/* Entry: 1001d7b60; end: 1001d7c83;  */

void FUN_1001d7b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1001d7c84; end: 1001d7ccf;  */

void FUN_1001d7c84(undefined8 param_1)

{
  FUN_1000285a8(0x112dbfe28,&UNK_10d97bdd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003ec72c,param_1);
  return;
}



/* Entry: 1001d7cd0; end: 1001d7cef;  */

void FUN_1001d7cd0(void)

{
  func_0x000107c61168(&PTR_PTR_1129672c0);
  return;
}



/* Entry: 1001d7cf0; end: 1001d7d3b;  */

void FUN_1001d7cf0(undefined8 param_1)

{
  FUN_1000285a8(0x112dc72a0,&UNK_10d9879d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10175fc98,param_1);
  return;
}



/* Entry: 1001d7d3c; end: 1001d7d5f;  */

void FUN_1001d7d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110404808;
  FUN_1000285a8(0x112dc7298,&UNK_10d9879d0);
  func_0x000107c613fc(&UNK_110404808,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_10175fc28,puVar1);
  return;
}



/* Entry: 1001d7d60; end: 1001d7ddf;  */

void FUN_1001d7d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1001d7de0; end: 1001d7dfb;  */

void FUN_1001d7de0(undefined8 param_1)

{
  FUN_1000285a8(0x112dca860,&UNK_10d98c338);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003fdaec,param_1);
  return;
}



/* Entry: 1001d7dfc; end: 1001d7e4b;  */

void FUN_1001d7dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d7e4c; end: 1001d7e6b;  */

void FUN_1001d7e4c(void)

{
  func_0x000107c61168(&PTR_PTR_11294d848);
  return;
}



/* Entry: 1001d7e6c; end: 1001d7e87;  */

void FUN_1001d7e6c(undefined8 param_1)

{
  FUN_1000285a8(0x112db06a8,&UNK_10d95a1c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004592d4,param_1);
  return;
}



/* Entry: 1001d7e88; end: 1001d82d7;  */

void FUN_1001d7e88(void)

{
  undefined8 *unaff_x19;
  char in_stack_00000020;
  
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  if (in_stack_00000020 == '\x01') {
    func_0x0001001d7e94();
  }
  return;
}



/* Entry: 1001d82d8; end: 1001d82df;  */

void FUN_1001d82d8(long param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x28);
  iVar3 = (int)lVar6 + 0x28;
  func_0x000107c61264();
  if (iVar3 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    bVar1 = *(byte *)(param_1 + 0x3a);
  }
  else {
    func_0x000107c2cfbc(lVar6 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    bVar1 = *(byte *)(param_1 + 0x3a);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x38) == '\x01') {
      uVar5 = *(long *)(lVar4 + 0x138) - 1;
      *(ulong *)(lVar4 + 0x138) = uVar5;
      if ((*(long *)(lVar4 + 0x70) == *(long *)(lVar4 + 0x78)) ||
         (*(ulong *)(lVar4 + 0x148) < uVar5)) {
        *(undefined2 *)(lVar4 + 0xa8) = 0;
        bVar1 = *(byte *)(param_1 + 0x18);
      }
      else {
        *(undefined2 *)(lVar4 + 0xa8) = *(undefined2 *)(*(long *)(lVar4 + 0x70) + 0x10);
        bVar1 = *(byte *)(param_1 + 0x18);
      }
    }
    else {
      *(int *)(lVar4 + 0x158) = *(int *)(lVar4 + 0x158) + -1;
      bVar1 = *(byte *)(param_1 + 0x18);
    }
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d8404);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + 0x19) == '\0') {
      lVar4 = *(long *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x39) == '\x01') {
        *(long *)(lVar4 + 0x140) = *(long *)(lVar4 + 0x140) + -1;
        if ((*(long *)(lVar4 + 0x70) == *(long *)(lVar4 + 0x78)) ||
           (*(ulong *)(lVar4 + 0x148) < *(ulong *)(lVar4 + 0x138))) {
          *(undefined2 *)(lVar4 + 0xa8) = 0;
          *(undefined2 *)(param_1 + 0x38) = 0;
        }
        else {
          *(undefined2 *)(lVar4 + 0xa8) = *(undefined2 *)(*(long *)(lVar4 + 0x70) + 0x10);
          *(undefined2 *)(param_1 + 0x38) = 0;
        }
      }
      else {
        *(int *)(lVar4 + 0x15c) = *(int *)(lVar4 + 0x15c) + -1;
        *(undefined2 *)(param_1 + 0x38) = 0;
      }
      goto SUB_107c61268;
    }
  }
  *(undefined2 *)(param_1 + 0x38) = 0;
SUB_107c61268:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(lVar6 + 0x28);
  return;
}



/* Entry: 1001d82e0; end: 1001d8437;  */

void FUN_1001d82e0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x30);
  iVar3 = (int)lVar6 + 0x28;
  func_0x000107c61264();
  if (iVar3 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    bVar1 = *(byte *)(param_1 + 0x42);
  }
  else {
    func_0x000107c2cfbc(lVar6 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    bVar1 = *(byte *)(param_1 + 0x42);
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x40) == '\x01') {
      uVar5 = *(long *)(lVar4 + 0x138) - 1;
      *(ulong *)(lVar4 + 0x138) = uVar5;
      if ((*(long *)(lVar4 + 0x70) == *(long *)(lVar4 + 0x78)) ||
         (*(ulong *)(lVar4 + 0x148) < uVar5)) {
        *(undefined2 *)(lVar4 + 0xa8) = 0;
        bVar1 = *(byte *)(param_1 + 0x20);
      }
      else {
        *(undefined2 *)(lVar4 + 0xa8) = *(undefined2 *)(*(long *)(lVar4 + 0x70) + 0x10);
        bVar1 = *(byte *)(param_1 + 0x20);
      }
    }
    else {
      *(int *)(lVar4 + 0x158) = *(int *)(lVar4 + 0x158) + -1;
      bVar1 = *(byte *)(param_1 + 0x20);
    }
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001d8404);
      (*pcVar2)();
    }
    if (*(char *)(param_1 + 0x21) == '\0') {
      lVar4 = *(long *)(param_1 + 0x30);
      if (*(char *)(param_1 + 0x41) == '\x01') {
        *(long *)(lVar4 + 0x140) = *(long *)(lVar4 + 0x140) + -1;
        if ((*(long *)(lVar4 + 0x70) == *(long *)(lVar4 + 0x78)) ||
           (*(ulong *)(lVar4 + 0x148) < *(ulong *)(lVar4 + 0x138))) {
          *(undefined2 *)(lVar4 + 0xa8) = 0;
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
        else {
          *(undefined2 *)(lVar4 + 0xa8) = *(undefined2 *)(*(long *)(lVar4 + 0x70) + 0x10);
          *(undefined2 *)(param_1 + 0x40) = 0;
        }
      }
      else {
        *(int *)(lVar4 + 0x15c) = *(int *)(lVar4 + 0x15c) + -1;
        *(undefined2 *)(param_1 + 0x40) = 0;
      }
      goto SUB_107c61268;
    }
  }
  *(undefined2 *)(param_1 + 0x40) = 0;
SUB_107c61268:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(lVar6 + 0x28);
  return;
}



/* Entry: 1001d8438; end: 1001dac33;  */

void FUN_1001d8438(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((iVar1 + -1 == 0) && ((long *)(param_1 + -2) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001001d845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -2) + 0x18))();
    return;
  }
  return;
}



/* Entry: 1001dac34; end: 1001dacf3;  */

void FUN_1001dac34(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c2a694(auStack_48,param_1);
    while (lStack_38 != 0 && param_2 != param_3) {
      func_0x000107c60ca4(lStack_38 + 0x20,param_2 + 0x20);
      func_0x000107c2a688(param_1,lStack_38);
      param_2 = auStack_48;
      func_0x000107c2a68c();
      func_0x000107c34bcc();
    }
    func_0x000107c2a698(auStack_48);
  }
  while (param_2 != param_3) {
    puVar1 = param_2 + 0x20;
    param_2 = param_1;
    func_0x000107c2a690(param_1,param_1 + 8,puVar1);
    func_0x000107c34bcc();
  }
  return;
}



/* Entry: 1001dacf4; end: 1001dad27;  */

undefined8 * FUN_1001dacf4(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_1001dac34(param_1,*param_2,param_2 + 1);
  }
  return param_1;
}



/* Entry: 1001dad28; end: 1001dad2f;  */

void FUN_1001dad28(void)

{
  return;
}



/* Entry: 1001dad30; end: 1001dbf4b;  */

void FUN_1001dad30(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001dad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1001dbf4c; end: 1001dbff7;  */

undefined1 FUN_1001dbf4c(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  func_0x000107c60fb0(param_1,3);
  if ((uint)piVar1 == 0xffffffff) {
    return 0;
  }
  if (((uint)piVar1 >> 2 & 1) == 0) {
    do {
      piVar1 = param_1;
      func_0x000107c60fb0(param_1,4);
      if ((int)piVar1 != -1) {
        return 1;
      }
      func_0x000107c60e5c();
    } while (*piVar1 == 4);
    return 0;
  }
  return 1;
}



/* Entry: 1001dbff8; end: 1001dc76b;  */

void FUN_1001dbff8(void)

{
  return;
}



/* Entry: 1001dc76c; end: 1001dc997;  */

void FUN_1001dc76c(long param_1,undefined8 param_2,uint param_3,uint param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  lVar8 = *(long *)(param_5 + 0x38);
  lStack_78 = param_5;
  if (lVar8 == 0) {
    lVar9 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    lVar8 = lVar9;
    func_0x000107c607a4(lVar9,param_2,0,FUN_1001e0940,&uStack_80);
    if (lVar8 == 0) {
      return;
    }
    func_0x000107c607b0();
    func_0x000107c607a8(lVar9,lVar8,0);
    if (lVar9 == 0) {
      func_0x000107c607f0(lVar8);
      return;
    }
    func_0x000107c607fc(*(undefined8 *)(param_1 + 8),lVar9,
                        *(undefined8 *)PTR__kCFRunLoopCommonModes_11034abe0);
    *(char *)(param_5 + 0x28) = (char)param_3;
    lVar7 = *(long *)(param_5 + 0x38);
    if (lVar7 != 0) {
      if (lVar7 == lVar8) {
        func_0x000107c60ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__getsockopt_11034c430)();
        return;
      }
      func_0x000107c607b8(lVar7);
      func_0x000107c607f0(lVar7);
    }
    *(long *)(param_5 + 0x38) = lVar8;
    *(ulong *)(param_5 + 0x48) = (ulong)(param_4 & 3);
    if (*(long *)(param_5 + 0x50) != 0) {
      func_0x000107c607f0();
    }
    *(long *)(param_5 + 0x50) = lVar9;
    *(undefined8 *)(param_5 + 0x68) = param_6;
    piVar6 = *(int **)(param_1 + 0x98);
  }
  else {
    lVar9 = lVar8;
    func_0x000107c607b4();
    if ((int)lVar9 != (int)param_2) {
      return;
    }
    if (*(byte *)(param_5 + 0x28) != param_3) {
      return;
    }
    func_0x000107c607ac(lVar8,*(undefined8 *)(param_5 + 0x48));
    *(ulong *)(param_5 + 0x48) = *(ulong *)(param_5 + 0x48) | (ulong)(param_4 & 3);
    func_0x000107c607b0(lVar8);
    *(undefined8 *)(param_5 + 0x68) = param_6;
    piVar6 = *(int **)(param_1 + 0x98);
  }
  if (piVar6 == (int *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    piVar4 = *(int **)(param_5 + 0x58);
    *(undefined8 *)(param_5 + 0x58) = 0;
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000107c60e14(piVar6);
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = *piVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    piVar4 = *(int **)(param_5 + 0x58);
    *(int **)(param_5 + 0x58) = piVar6;
  }
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000107c60e14();
    }
  }
  *(undefined8 *)(param_5 + 0x60) = uVar5;
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
      func_0x000107c60e14(piVar6);
    }
  }
  return;
}



/* Entry: 1001dc998; end: 1001dcea3;  */

void FUN_1001dc998(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getsockopt_11034c430)(param_1,0xffff,0x1007);
  return;
}



/* Entry: 1001dcea4; end: 1001dcebf;  */

void FUN_1001dcea4(undefined8 param_1)

{
  FUN_1000285a8(0x112de9a80,&UNK_10d9b4fd8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d4bf4,param_1);
  return;
}



/* Entry: 1001dcec0; end: 1001dcf57;  */

void FUN_1001dcec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de30f0,&UNK_10d9aba70);
  puVar1 = &UNK_110423638;
  func_0x000107c613fc(&UNK_110423638,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1003c39a4,puVar1);
  return;
}



/* Entry: 1001dcf58; end: 1001dcf77;  */

void FUN_1001dcf58(void)

{
  func_0x000107c61168(&PTR_PTR_112de3168);
  return;
}



/* Entry: 1001dcf78; end: 1001dcf93;  */

void FUN_1001dcf78(undefined8 param_1)

{
  FUN_1000285a8(0x112de30f8,&UNK_10d9aba78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c3948,param_1);
  return;
}



/* Entry: 1001dcf94; end: 1001dcfe3;  */

void FUN_1001dcf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001dcfe4; end: 1001dd09f;  */

void FUN_1001dcfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de36f0,&UNK_10d9ac5a0);
  puVar1 = &UNK_110423ad8;
  func_0x000107c613fc(&UNK_110423ad8,0x38,7);
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
  FUN_1000823a8(FUN_1003c236c,puVar1);
  return;
}



/* Entry: 1001dd0a0; end: 1001dd0bf;  */

void FUN_1001dd0a0(void)

{
  func_0x000107c61168(&PTR_PTR_112de3768);
  return;
}



/* Entry: 1001dd0c0; end: 1001dd0db;  */

void FUN_1001dd0c0(undefined8 param_1)

{
  FUN_1000285a8(0x112de36f8,&UNK_10d9ac5a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c2310,param_1);
  return;
}



/* Entry: 1001dd0dc; end: 1001dd1ab;  */

void FUN_1001dd0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001dd1ac; end: 1001dd1cb;  */

void FUN_1001dd1ac(void)

{
  func_0x000107c61168(&PTR_PTR_112de3a90);
  return;
}



/* Entry: 1001dd1cc; end: 1001dd1e7;  */

void FUN_1001dd1cc(undefined8 param_1)

{
  FUN_1000285a8(0x112de3a20,&UNK_10d9acaf8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100417e34,param_1);
  return;
}


