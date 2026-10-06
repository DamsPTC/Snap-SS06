/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100459cb8; end: 100459d23;  */

void FUN_100459cb8(undefined8 param_1)

{
  if (lRam0000000112f0f5c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e72a92c);
  return;
}



/* Entry: 100459d24; end: 100459dc3; -[SCNDuplexBackgroundNetworkTaskDelegateImpl initWithBackgroundTaskWrapper:] */

undefined1 * FUN_100459d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7c30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100459dc4; end: 100459dcf;  */

void FUN_100459dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100459dd0; end: 100459f57; +[SCNDuplexDuplexClientFactory createDefaultClient:tweaks:authDelegate:backgroundNetworkTaskDelegate:] */

void FUN_100459dd0(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  FUN_100459dc4();
  func_0x000107c61174(in_x3);
  func_0x000107c61174(in_x4);
  func_0x000107c61174(in_x5);
  FUN_1000fbca4(auStack_68);
  FUN_100459f58(auStack_98,in_x3);
  FUN_100459fd0(auStack_a8,in_x4);
  FUN_10045a1b4(auStack_b8,in_x5);
  FUN_10045af94(auStack_50,auStack_68,auStack_98,auStack_a8,auStack_b8);
  func_0x00010048b828(auStack_b8);
  func_0x00010048b850(auStack_a8);
  FUN_10045fc9c(auStack_98);
  func_0x000107c60ca0(auStack_68);
  puVar1 = auStack_50;
  func_0x00010048b874(puVar1);
  func_0x000107c61180();
  func_0x00010048d4f4();
  func_0x000107c61170(in_x5);
  func_0x00010048d4fc();
  func_0x00010048d504();
  FUN_100459fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100459f58; end: 100459fc7;  */

void FUN_100459f58(undefined1 *param_1,long param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x28] = 0;
  }
  else {
    func_0x000107c2a86c(auStack_48,param_2);
    func_0x000107c2a860(param_1,auStack_48);
    func_0x00010049cddc(auStack_48);
  }
  FUN_100459fc8();
  return;
}



/* Entry: 100459fc8; end: 100459fcf;  */

void FUN_100459fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100459fd0; end: 10045a07f;  */

void FUN_100459fd0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110ccfd90;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10045a080);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10045a180(&uStack_50);
  }
  FUN_10045a1ac();
  return;
}



/* Entry: 10045a080; end: 10045a17f;  */

void FUN_10045a080(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110ccfdd0;
  puVar4[3] = &PTR_DAT_110ccfe48;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110ccfe20;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10045a180(&uStack_50);
  return;
}



/* Entry: 10045a180; end: 10045a1ab;  */

long FUN_10045a180(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10045a1ac; end: 10045a1b3;  */

void FUN_10045a1ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10045a1b4; end: 10045a2af;  */

void FUN_10045a1b4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db3a0;
    func_0x000107c61158(PTR_PTR_1126db3a0);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110ab99f8;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_10045ae10);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10045af14(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10045af04();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10045a2b0; end: 10045a317;  */

void FUN_10045a2b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_10045a318(0);
  func_0x000107c610f8();
  FUN_10045a338(puVar1,uVar2);
  FUN_1001d734c(0);
  func_0x000107c610f8();
  func_0x00010045a414(puVar1,&PTR_DAT_1105c6548);
  return;
}



/* Entry: 10045a318; end: 10045a337;  */

void FUN_10045a318(void)

{
  func_0x000107c61168(&PTR_PTR_1128a1dd0);
  return;
}



/* Entry: 10045a338; end: 10045a46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045a338(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_2;
  func_0x000107c614f0();
  lVar2 = _DAT_112f0f4a0;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(param_2 + _DAT_112f0f4a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_2 + _DAT_112f0f4b0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[5] = 1;
  *(undefined8 *)(param_2 + _DAT_112f0f4b8) = 0x402e000000000000;
  lVar2 = _DAT_112f0f4c0;
  pcVar5 = "ContactsNavigationBroker";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(param_2 + lVar2) = pcVar5;
  *(undefined8 *)(param_2 + _DAT_112f0f4c8) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10045a470; end: 10045a477;  */

void FUN_10045a470(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045a478; end: 10045a4cb;  */

void FUN_10045a478(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045a4cc; end: 10045a4d3;  */

void FUN_10045a4cc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1002abdfc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10045a5b8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10045a630();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10045a800();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10045a4d4; end: 10045a5b7;  */

void FUN_10045a4d4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002abdfc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10045a5b8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10045a630();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10045a800();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10045a5b8; end: 10045a62f;  */

void FUN_10045a5b8(undefined8 param_1)

{
  if (lRam0000000112e10f58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67f8b0);
  return;
}



/* Entry: 10045a630; end: 10045a797;  */

void FUN_10045a630(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar2 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = 0;
    FUN_10045a7c0();
    func_0x000107c613fc();
    puVar4 = &UNK_1104641d8;
    func_0x000107c613fc(&UNK_1104641d8,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    uVar5 = 0x112d382e8;
    FUN_1000285a8(0x112d382e8,&UNK_10d902020);
    func_0x000107c613fc();
    func_0x000107c615f4(lVar2,2);
    puVar6 = &UNK_101c948f0;
    FUN_1000bdd8c(&UNK_101c948f0,puVar4);
    *(undefined **)(lVar3 + 0x10) = puVar6;
    puVar4 = &UNK_110464200;
    func_0x000107c613fc(&UNK_110464200,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    func_0x000107c613fc(uVar5,0x18,7);
    func_0x000107c615f0(lVar2);
    puVar6 = &UNK_101c948f8;
    FUN_1000bdd8c(&UNK_101c948f8,puVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(undefined **)(lVar3 + 0x18) = puVar6;
    *(long *)(unaff_x20 + 0x18) = lVar3;
    lVar3 = 0;
    func_0x00010045a7e0();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar2;
    *(long *)(unaff_x20 + 0x10) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10045a798);
  (*pcVar1)();
}



/* Entry: 10045a798; end: 10045a7bb;  */

void FUN_10045a798(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045a7bc; end: 10045a7bf;  */

void FUN_10045a7bc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045a7c0; end: 10045a7ff;  */

void FUN_10045a7c0(void)

{
  func_0x000107c61168(&PTR_PTR_112e10ec8);
  return;
}



/* Entry: 10045a800; end: 10045a8b7;  */

void FUN_10045a800(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1002abe88(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar1);
  func_0x000107c615f0(uVar2);
  func_0x00010045a854(uVar1,uVar2);
  return;
}



/* Entry: 10045a8b8; end: 10045a97f;  */

void FUN_10045a8b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045a980; end: 10045ae07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045a980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083f78);
  uVar3 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  uVar3 = ((undefined8 *)(param_8 + _DAT_112f0f668))[1];
  uVar1 = *(undefined8 *)(param_8 + _DAT_112f0f668);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(param_8);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(param_9 + _DAT_112ff8ac8);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(param_9);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  return;
}



/* Entry: 10045ae08; end: 10045ae0f; -[SCComposerCoreUIServices alertPresenterFactory] */

undefined8 FUN_10045ae08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10045ae10; end: 10045af03;  */

void FUN_10045ae10(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ab9a38;
  puVar1[3] = &PTR_DAT_110ab9ab8;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10045af04();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110ab9a88;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10045af14(&uStack_50);
  return;
}



/* Entry: 10045af04; end: 10045af13;  */

void FUN_10045af04(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10045af14; end: 10045af3b;  */

long FUN_10045af14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10045af3c; end: 10045af57;  */

void FUN_10045af3c(void)

{
  return;
}



/* Entry: 10045af58; end: 10045af93;  */

undefined1 * FUN_10045af58(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  func_0x00010045af44();
  return param_1;
}



/* Entry: 10045af94; end: 10045b033;  */

void FUN_10045af94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [112];
  
  FUN_10045af58(auStack_100);
  FUN_10045b2c4(auStack_d0,auStack_100);
  FUN_10045fcbc();
  FUN_1002a8234(auStack_b0,param_2);
  FUN_10045fd18(param_1,auStack_d0,param_4,param_5);
  FUN_10048b7f8(auStack_d0);
  return;
}



/* Entry: 10045b034; end: 10045b03b;  */

void FUN_10045b034(void)

{
  return;
}



/* Entry: 10045b03c; end: 10045b2c3;  */

void FUN_10045b03c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long **pplVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  byte bStack_d9;
  char cStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *aplStack_50 [2];
  
  FUN_10007847c(auStack_108,&UNK_10f50ea9e);
  FUN_100100ed0(aplStack_50);
  if (aplStack_50[0] == (long *)0x0) {
LAB_10045b128:
    FUN_100469238();
  }
  else {
    FUN_10002b838(&uStack_b8,&UNK_10f50eade);
    uStack_90 = uStack_a8;
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0xc;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    FUN_100100fec(&uStack_d0);
    func_0x000107c60ca0(&uStack_b8);
    (**(code **)(*aplStack_50[0] + 0x28))(auStack_f0,aplStack_50[0],&uStack_a0);
    if (cStack_d8 != '\x01') {
LAB_10045b120:
      FUN_10045d880();
      func_0x00010045d888();
      goto LAB_10045b128;
    }
    if (-1 < (char)bStack_d9) {
      uStack_e8 = (ulong)bStack_d9;
    }
    if (uStack_e8 == 0) goto LAB_10045b120;
    func_0x000107c60c94(auStack_120,auStack_f0);
    FUN_10045d880();
    func_0x00010045d888();
  }
  pplVar6 = aplStack_50;
  FUN_1000df75c();
  uVar9 = (uint)*(byte *)(param_2 + 0x28);
  cVar3 = SBORROW4(uVar9,1);
  cVar4 = (int)(uVar9 - 1) < 0;
  if (uVar9 == 1) {
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)*(byte *)(param_2 + 0x28));
    func_0x000107c34ccc();
    if (pplVar6 != (long **)0x0) {
      func_0x000107c34ccc();
      puVar7 = &uStack_a0;
      func_0x000107c60c94(puVar7,pplVar6 + 3);
      func_0x000107c34ccc();
      puVar8 = puVar7;
      func_0x000107c34ccc();
      func_0x000107c34cc0();
      uVar1 = extraout_x11;
      puVar2 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar1 = extraout_x8;
        puVar2 = &uStack_a0;
      }
      iVar5 = 0xf31feca;
      FUN_1000633dc(&DAT_10f31feca,6,puVar2,uVar1);
      if ((iVar5 == 0) || (puVar7 == (undefined8 *)0x0)) {
        func_0x000107c34cc0();
        uVar1 = extraout_x11_00;
        puVar7 = extraout_x10_00;
        if (cVar4 == cVar3) {
          uVar1 = extraout_x8_00;
          puVar7 = &uStack_a0;
        }
        iVar5 = 0xf50eb41;
        FUN_1000633dc(&DAT_10f50eb41,7,puVar7,uVar1);
        if ((iVar5 != 0) && (puVar7 = puVar8, puVar8 != (undefined8 *)0x0)) goto LAB_10045b1e4;
        func_0x000107c34cc0();
        uVar1 = extraout_x11_01;
        puVar7 = extraout_x10_01;
        if (cVar4 == cVar3) {
          uVar1 = extraout_x8_01;
          puVar7 = &uStack_a0;
        }
        iVar5 = 0xf50eb39;
        FUN_1000633dc(&DAT_10f50eb39,7,puVar7,uVar1);
        if (iVar5 == 0) {
          func_0x00010045da04();
        }
        else {
          FUN_10002b838(param_1,&UNK_10f50eaae);
        }
      }
      else {
LAB_10045b1e4:
        func_0x000107c60c94(param_1,puVar7 + 3);
      }
      func_0x000107c60ca0(&uStack_a0);
      goto LAB_10045b200;
    }
  }
  func_0x00010045da04();
LAB_10045b200:
  func_0x00010045da20();
  FUN_100078bd8(auStack_108);
  return;
}



/* Entry: 10045b2c4; end: 10045b3ab;  */

void FUN_10045b2c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10045b03c(&uStack_48);
  uVar1 = param_2;
  FUN_10045da28(param_2);
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010045fb98(auStack_80,&UNK_10f50ea25);
  FUN_10045fbc8(auStack_b0,param_2);
  FUN_10045fbf8(param_1,&uStack_60,3,auStack_80,10000,20000,uVar1,1,0,0,0,auStack_b0);
  FUN_10045fc9c(auStack_b0);
  FUN_1001148fc(auStack_80);
  func_0x000107c60ca0(&uStack_60);
  func_0x000107c60ca0(&uStack_48);
  return;
}



/* Entry: 10045b3ac; end: 10045b3b3; -[SCSnapchatterServices snapchattersDataMutator] */

undefined8 FUN_10045b3ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10045b3b4; end: 10045b3d3;  */

void FUN_10045b3b4(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff518);
  return;
}



/* Entry: 10045b3d4; end: 10045b3f3;  */

void FUN_10045b3d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e107c0);
  return;
}



/* Entry: 10045b3f4; end: 10045b497;  */

void FUN_10045b3f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e10860);
  return;
}



/* Entry: 10045b498; end: 10045b49f;  */

void FUN_10045b498(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045b4a0; end: 10045b4f3;  */

void FUN_10045b4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045b4f4; end: 10045b4fb;  */

void FUN_10045b4f4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1002ac6e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10045b5e0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10045b65c();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10045b714();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10045b4fc; end: 10045b5df;  */

void FUN_10045b4fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002ac6e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10045b5e0(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10045b65c();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10045b714();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10045b5e0; end: 10045b65b;  */

void FUN_10045b5e0(undefined8 param_1)

{
  if (lRam0000000112ff8e28 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ba858);
  return;
}



/* Entry: 10045b65c; end: 10045b6eb;  */

void FUN_10045b65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = &UNK_1106ec330;
  func_0x000107c613fc(&UNK_1106ec330,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112f10c18,&UNK_10db446f0);
  func_0x000107c613fc();
  puVar2 = &UNK_103c277fc;
  FUN_1000bdd8c(&UNK_103c277fc,puVar1);
  func_0x000107c61170(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Entry: 10045b6ec; end: 10045b70f;  */

void FUN_10045b6ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045b710; end: 10045b713;  */

void FUN_10045b710(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045b714; end: 10045b81b;  */

void FUN_10045b714(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  FUN_1000285a8(0x112ff8de8,&UNK_10dc67888);
  func_0x000107c613fc();
  puVar1 = &UNK_103c27630;
  FUN_1000bdd8c(&UNK_103c27630,0);
  FUN_1000285a8(0x112ff8df0,&UNK_10dc67890);
  func_0x000107c613fc();
  puVar2 = &UNK_103c27660;
  FUN_1000bdd8c(&UNK_103c27660,0);
  FUN_1000285a8(0x112ff8df8,&UNK_10dc67898);
  func_0x000107c613fc();
  puVar3 = &UNK_103c27690;
  FUN_1000bdd8c(&UNK_103c27690,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002ac708(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar4);
  FUN_10045b81c(puVar1,puVar2,puVar3,uVar4);
  return;
}



/* Entry: 10045b81c; end: 10045b957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10045b81c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa910) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa918) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffa920) = param_2;
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa928) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ffa930) = param_3;
  uVar1 = param_3;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ffa938) = uVar1;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112ffa940) = puVar2;
  FUN_1003a5b88();
  *(undefined **)(unaff_x20 + _DAT_112ffa948) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10045b958; end: 10045b95f;  */

void FUN_10045b958(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045b960; end: 10045b98b;  */

void FUN_10045b960(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045b98c; end: 10045b993;  */

void FUN_10045b98c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_100293e24(0);
  func_0x000107c610f8();
  FUN_10045ba10();
  *param_1 = uVar1;
  return;
}



/* Entry: 10045b994; end: 10045ba07;  */

void FUN_10045b994(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  FUN_100293e24(0);
  func_0x000107c610f8();
  FUN_10045ba10();
  *param_1 = uVar1;
  return;
}



/* Entry: 10045ba08; end: 10045ba0f; -[SCUserScopedValdiRuntimeServices valdiRuntimeProvider] */

undefined8 FUN_10045ba08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10045ba10; end: 10045ba5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045ba10(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff82c0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10045ba5c; end: 10045ba63;  */

void FUN_10045ba5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x148);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045ba64; end: 10045bab7;  */

void FUN_10045ba64(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x148);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045bab8; end: 10045d1f7;  */

void FUN_10045bab8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_1002c82c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar18 = uStack_80;
  func_0x000107c61174();
  uVar19 = uStack_88;
  func_0x000107c61174();
  uVar20 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar15 = uVar2;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x50) = uVar15;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  *(undefined8 *)(param_2 + 0x108) = uStack_150;
  *(undefined8 *)(param_2 + 0x110) = uStack_158;
  *(undefined8 *)(param_2 + 0x118) = uStack_160;
  *(undefined8 *)(param_2 + 0x120) = uStack_168;
  *(undefined8 *)(param_2 + 0x128) = uStack_170;
  *(undefined8 *)(param_2 + 0x130) = uStack_178;
  *(undefined8 *)(param_2 + 0x138) = uStack_180;
  *(undefined8 *)(param_2 + 0x140) = uStack_188;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar12 = uStack_e8;
  func_0x000107c61174();
  uVar22 = uStack_f0;
  func_0x000107c61174();
  uVar23 = uStack_f8;
  func_0x000107c61174();
  uVar24 = uStack_100;
  func_0x000107c61174();
  uVar25 = uStack_108;
  func_0x000107c61174();
  uVar26 = uStack_110;
  func_0x000107c61174();
  uVar27 = uStack_118;
  func_0x000107c61174();
  uVar28 = uStack_120;
  func_0x000107c61174();
  uVar29 = uStack_128;
  func_0x000107c61174();
  uVar30 = uStack_130;
  func_0x000107c61174();
  uVar31 = uStack_138;
  func_0x000107c61174();
  uVar32 = uStack_140;
  func_0x000107c61174();
  uVar33 = uStack_148;
  func_0x000107c61174();
  uVar34 = uStack_150;
  func_0x000107c61174();
  uVar35 = uStack_158;
  func_0x000107c61174();
  uVar36 = uStack_160;
  func_0x000107c61174();
  uVar37 = uStack_168;
  func_0x000107c61174();
  uVar38 = uStack_170;
  func_0x000107c61174();
  uVar39 = uStack_178;
  func_0x000107c61174();
  uVar40 = uStack_180;
  func_0x000107c61174();
  uVar41 = uStack_188;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar13;
  puVar13 = PTR_PTR_1126a8f70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar21 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010efc3450);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a500);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc32e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a520);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2b9a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00a540);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00a560);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3c3c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2b9e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a580);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00a5a0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f00a5c0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f00a5e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar40);
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar17);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00a610);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar15 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f00a630);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar42 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar42 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10045d1f4);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x148) = lVar42;
  lVar42 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar42 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar38);
    func_0x000107c61170(uVar39);
    func_0x000107c61170(uVar40);
    func_0x000107c61170(uVar41);
    *(long *)(param_2 + 0x150) = lVar42;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10045d1f8);
  (*pcVar1)();
}



/* Entry: 10045d1f8; end: 10045d26b;  */

void FUN_10045d1f8(void)

{
  long unaff_x20;
  
  FUN_10045bab8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Entry: 10045d26c; end: 10045d273;  */

void FUN_10045d26c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045d274; end: 10045d2c7;  */

void FUN_10045d274(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045d2c8; end: 10045d2cf;  */

void FUN_10045d2c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002a10f8();
  func_0x000107c613fc();
  FUN_10045d344(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045d2d0; end: 10045d343;  */

void FUN_10045d2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002a10f8();
  func_0x000107c613fc();
  FUN_10045d344(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10045d344; end: 10045d4a7;  */

void FUN_10045d344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8fb0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 10045d4a8; end: 10045d4b7; -[SCSqliteConnection .cxx_construct] */

void FUN_10045d4a8(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10045d4b8; end: 10045d53b; +[SQLFideliusEncryptedUserInfoDB schema] */

void FUN_10045d4b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b84f8;
  func_0x000107c610f4(PTR_PTR_1126b84f8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f31219a);
  func_0x000107c61180();
  func_0x000107c494b0(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_11034ab48);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10045d53c; end: 10045d543; -[SCSqliteSchema .cxx_construct] */

void FUN_10045d53c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10045d544; end: 10045d87f; -[SCSqliteSchema initWithVersion:sql:upgradeSteps:] */

undefined8 *
FUN_10045d544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x23;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *apuStack_120 [5];
  char cStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_150 = PTR_PTR_112706658;
  puVar2 = &uStack_158;
  uStack_158 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lStack_170 = 0;
    plStack_168 = (long *)0x0;
    plStack_160 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    func_0x000107c61174(param_5);
    lVar5 = param_5;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_5);
        }
        uVar6 = *(undefined8 *)(lVar7 * 8);
        uVar3 = uVar6;
        func_0x000107c43b30();
        uStack_148 = (long *)CONCAT44(uStack_148._4_4_,(int)uVar3);
        uVar3 = uVar6;
        func_0x000107c5cb54();
        uStack_148 = (long *)CONCAT44((int)uVar3,(undefined4)uStack_148);
        func_0x000107c5b9b8(uVar6);
        func_0x000107c61180();
        func_0x000107c61178();
        uVar3 = uVar6;
        func_0x000107c3ac4c(uVar6);
        FUN_10002b838(&lStack_140,uVar3);
        plVar4 = plStack_168;
        uStack_128 = 0;
        cStack_f8 = '\0';
        if (plStack_168 < plStack_160) {
          *plStack_168 = (long)uStack_148;
          plVar4[3] = lStack_130;
          plVar4[2] = lStack_138;
          plVar4[1] = lStack_140;
          lStack_138 = 0;
          lStack_130 = 0;
          lStack_140 = 0;
          *(undefined1 *)(plVar4 + 4) = 0;
          *(undefined1 *)(plVar4 + 10) = 0;
          if (cStack_f8 == '\x01') {
            plVar4[4] = CONCAT71(uStack_127,uStack_128);
            (*(code *)apuStack_120[0][2])(plVar4 + 5,apuStack_120);
            *(undefined1 *)(plVar4 + 10) = 1;
          }
          plVar4 = plVar4 + 0xb;
        }
        else {
          plVar4 = &lStack_170;
          FUN_100b9dad0(plVar4,&uStack_148);
        }
        plStack_168 = plVar4;
        if (cStack_f8 == '\x01') {
          (*(code *)*apuStack_120[0])(apuStack_120);
        }
        if (lStack_130 < 0) {
          func_0x000107c60e14(lStack_140);
        }
        func_0x000107c61170(uVar6);
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = param_5;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_5);
    func_0x000107c61178(param_4);
    func_0x000107c3ac4c(param_4);
    unaff_x23 = 0x38;
    func_0x000107c60e20();
    FUN_10045d974();
    lVar5 = puVar2[1];
    puVar2[1] = unaff_x23;
    if (lVar5 != 0) {
      FUN_1005875b0();
    }
    uStack_148 = &lStack_170;
    FUN_10045db5c(&uStack_148);
  }
  func_0x000107c61170(param_5);
  uVar3 = param_4;
  func_0x000107c61170(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  func_0x000107c60e78();
  func_0x000107c60e14(unaff_x23);
  uStack_148 = &lStack_170;
  FUN_10045db5c(&uStack_148);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c60bd8(uVar3);
  puVar2 = &uStack_190;
  if ((char)uStack_178 == '\x01') {
    func_0x000107c60ca0();
  }
  return puVar2;
}



/* Entry: 10045d880; end: 10045d88f;  */

void FUN_10045d880(void)

{
  char in_stack_00000048;
  
  if (in_stack_00000048 == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10045d890; end: 10045d973; -[SCNativeConversationServiceProvider provide] */

void FUN_10045d890(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126be760;
  func_0x000107c610f4(PTR_PTR_1126be760);
  func_0x000107c47990();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10045d974; end: 10045d9ef;  */

long FUN_10045d974(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  FUN_10045d9f0();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar1 = param_4[1];
  for (lVar2 = *param_4; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_10054af38((undefined8 *)(param_1 + 0x20),lVar2 + 4,lVar2);
  }
  return param_1;
}



/* Entry: 10045d9f0; end: 10045da27;  */

void FUN_10045d9f0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  func_0x00010002b82c(param_1 + 2,param_3);
  func_0x000107c613d0(param_3);
  func_0x000107c60c50();
  return;
}



/* Entry: 10045da28; end: 10045db3f;  */

long * FUN_10045da28(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [72];
  long *aplStack_40 [2];
  
  FUN_100100ed0(aplStack_40);
  if (aplStack_40[0] != (long *)0x0) {
    FUN_10002b838(auStack_a0,&UNK_10f50eb21);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    FUN_10011a82c(auStack_88,auStack_a0,0,0,0xc,&uStack_b8);
    FUN_100100fec(&uStack_b8);
    func_0x000107c60ca0(auStack_a0);
    uVar1 = 0;
    plVar2 = aplStack_40[0];
    (**(code **)(*aplStack_40[0] + 0x40))();
    FUN_100114924(auStack_88);
    if ((uVar1 & 1) != 0) goto LAB_10045daf8;
  }
  if ((*(char *)(param_1 + 0x28) == '\x01') &&
     (func_0x0001004b538c(param_1,&UNK_10df9d85c), param_1 != 0)) {
    plVar2 = (long *)(param_1 + 0x18);
    func_0x000107c60d84(plVar2,0,10);
  }
  else {
    plVar2 = (long *)0x2710;
  }
LAB_10045daf8:
  FUN_1000df75c(aplStack_40);
  return plVar2;
}



/* Entry: 10045db40; end: 10045db5b;  */

void FUN_10045db40(void)

{
  return;
}



/* Entry: 10045db5c; end: 10045db8f;  */

void FUN_10045db5c(long *param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010045db50();
  if (*param_1 != 0) {
    func_0x000100b9df50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*unaff_x19);
    return;
  }
  return;
}



/* Entry: 10045db90; end: 10045db97;  */

void FUN_10045db90(void)

{
  return;
}



/* Entry: 10045db98; end: 10045dbef; -[_TtC26NativeConversationServices26NativeConversationServices initWithNativeSnapManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045db98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113071110) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10045dbf0; end: 10045de27;  */

long * FUN_10045dbf0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_78 [2];
  char cStack_61;
  long lStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar2 = (long *)0x0;
  if (param_1 == 0) {
LAB_10045ddb8:
    plVar5 = (long *)0x0;
  }
  else {
    puStack_58 = PTR_PTR_112706650;
    plVar2 = &lStack_60;
    lStack_60 = param_1;
    func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
    if (plVar2 != (long *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x000107c610fc();
      lVar6 = plVar2[5];
      plVar2[5] = (long)puVar3;
      func_0x000107c61170(lVar6);
      uVar4 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
      FUN_10002b838(auStack_78,uVar4);
      if (param_4 != 0) {
        func_0x000107c31348(auStack_78);
      }
      lVar6 = 0x1a8;
      func_0x000107c60e20();
      FUN_10045e284();
      plVar5 = (long *)plVar2[4];
      plVar2[4] = lVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      uVar4 = param_3;
      func_0x000107c43fd0();
      iVar1 = (int)uVar4;
      FUN_10054b1d0();
      if (cStack_61 < '\0') {
        func_0x000107c60e14(auStack_78[0]);
      }
      if (iVar1 == -1) goto LAB_10045ddb8;
    }
    func_0x000107c61174(plVar2);
    plVar5 = plVar2;
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar2);
  return plVar5;
}



/* Entry: 10045de28; end: 10045de53;  */

void FUN_10045de28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045de54; end: 10045de5b;  */

void FUN_10045de54(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045de5c; end: 10045deaf;  */

void FUN_10045de5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045deb0; end: 10045debf;  */

void FUN_10045deb0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100296bf0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8f30;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(lVar1 + 0x40) = puVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 10045dec0; end: 10045e283;  */

void FUN_10045dec0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100296bf0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8f30;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(param_2 + 0x40) = puVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 10045e284; end: 10045e897;  */

long * FUN_10045e284(long *param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  undefined *puVar10;
  undefined8 *****pppppuVar11;
  undefined4 uVar12;
  undefined8 extraout_x8;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iStack_14c;
  long alStack_148 [3];
  undefined *puStack_130;
  undefined8 uStack_128;
  long *plStack_110;
  undefined *puStack_108;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  int *piStack_b8;
  long *plStack_b0;
  undefined8 ****ppppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  
  plVar5 = param_1;
  FUN_1004554d8();
  uStack_68 = extraout_x8;
  FUN_10045e898();
  *plVar5 = (long)&PTR_DAT_110d998e8;
  *(undefined4 *)(plVar5 + 0x13) = param_4;
  func_0x000107c60d30(plVar5 + 0x14);
  func_0x000107c60c94(param_1 + 0x1c,param_2);
  plVar5 = param_1 + 0x1f;
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    if (param_1[0x1d] == 0) goto LAB_10045e32c;
LAB_10045e2f8:
    plVar6 = param_1 + 0x1c;
    func_0x000107c60be8(plVar6,0x2f,0xffffffffffffffff);
    FUN_1000e1048(plVar5,param_1 + 0x1c,(undefined *)((long)plVar6 + 1),0xffffffffffffffff);
  }
  else {
    if (*(char *)((long)param_1 + 0xf7) != '\0') goto LAB_10045e2f8;
LAB_10045e32c:
    func_0x000107c60c94(plVar5,param_1 + 0x1c);
  }
  param_1[0x22] = (long)&UNK_10bcc57dc;
  param_1[0x23] = (long)&PTR_DAT_110873830;
  param_1[0x28] = 0;
  lVar15 = param_3[1];
  lVar8 = *param_3;
  lVar17 = param_3[3];
  lVar16 = param_3[2];
  param_1[0x2d] = param_3[4];
  param_1[0x2a] = lVar15;
  param_1[0x29] = lVar8;
  param_1[0x2c] = lVar17;
  param_1[0x2b] = lVar16;
  func_0x000100456708(param_1 + 0x2e,param_1 + 0x1c);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  param_1[0x33] = 0;
  if ((*(char *)((long)param_1 + 0x15e) == '\x01') && ((*(byte *)((long)param_1 + 0x149) & 1) == 0))
  {
    plVar6 = param_1;
    FUN_10045e950();
    if ((int)plVar6 == 0) {
      bVar3 = true;
    }
    else {
      func_0x000107c31348(param_1 + 0x1c);
      bVar3 = true;
      *(undefined1 *)((long)param_1 + 0x1a1) = 1;
    }
  }
  else {
    bVar3 = false;
  }
  plVar6 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar6 = param_2;
  }
  plVar7 = param_1;
  FUN_100463338(param_1,plVar6,param_3);
  param_1[0x31] = (long)plVar7;
  FUN_1004c3b38(param_1);
  if ((char)param_1[0x2c] == '\x01') {
    plStack_110 = (long *)((ulong)plStack_110 & 0xffffffffffffff00);
    ppppuStack_98 = (undefined8 ****)&UNK_10bcc584c;
    ppuStack_90 = &PTR_DAT_110d99988;
    uStack_88 = &plStack_110;
    puVar10 = &UNK_10f780aa9;
    plVar6 = param_1;
    func_0x0001004c3d2c(param_1,&UNK_10f780aa9,0x12);
    func_0x000107c3a3fc();
    uVar13 = 0;
    if ((char)plStack_110 == '\0') {
      uVar13 = 0xb;
    }
    uVar14 = (uint)plVar6;
    if ((uVar14 != 0) || (uVar14 = uVar13, ((ulong)plStack_110 & 1) == 0)) {
      if ((bVar3) && ((uVar14 & 0xff) == 0x1a || (uVar14 & 0xff) == 0xb)) {
        func_0x000107c31354(param_1);
        *(undefined1 *)((long)param_1 + 0x1a1) = 1;
      }
      else {
        lVar8 = param_1[0x31];
        param_1[0x31] = 0;
        func_0x000107c61348(lVar8);
        plVar6 = param_1 + 0x1c;
        FUN_1005d466c();
        plStack_110 = plVar6;
        puStack_108 = puVar10;
        FUN_1003a91d4(&UNK_10f82f421);
        FUN_1003a9204(&ppppuStack_98);
        func_0x000107c313a4(0,uVar14,&ppppuStack_98);
        FUN_10054aa54();
      }
    }
  }
  FUN_1004c3bf8(param_2);
  ppppuStack_98 = (undefined8 *****)0x0;
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = (long **)0x0;
  if (*(char *)((long)param_3 + 2) == '\x01') {
    func_0x0001004c3c8c();
  }
  if (*(char *)((long)param_3 + 3) == '\x01') {
    func_0x0001004c3c8c();
  }
  if (*(char *)((long)param_3 + 0x25) == '\x01') {
    uVar13 = 3;
    if (*(int *)((long)param_1 + 0x14c) != 0) {
      uVar13 = *(int *)((long)param_1 + 0x14c) - 2;
    }
    if (uVar13 < 5) {
      uStack_128 = *(undefined8 *)(&UNK_10e6052b0 + (ulong)uVar13 * 8);
      puStack_130 = (&PTR_DAT_110d999a0)[uVar13];
    }
    else {
      puStack_130 = &DAT_10f2d9663;
      uStack_128 = 6;
    }
    FUN_1003a91d4(&UNK_10f82f6cc);
    FUN_1003a9204(&plStack_110);
    func_0x0001004c3c94();
    func_0x0001004c3cbc();
  }
  if ((char)param_3[1] == '\x01') {
    func_0x0001004c3c8c();
  }
  if (0 < (int)param_3[4]) {
    func_0x000107c60ddc(alStack_148);
    func_0x0001004c3cc4(&UNK_10f82f498);
    func_0x0001004c3d10();
    func_0x0001004c3c94();
    func_0x0001004c3cbc();
    func_0x0001004c3d24();
    FUN_100456adc();
  }
  if ((*(char *)((long)param_3 + 0x25) == '\x01') && (0 < *(int *)((long)param_3 + 0x1c))) {
    func_0x000107c60ddc(alStack_148);
    func_0x0001004c3cc4(&UNK_10f82f4ab);
    func_0x0001004c3d10();
    func_0x0001004c3c94();
    func_0x0001004c3cbc();
    func_0x0001004c3d24();
    FUN_100456adc();
  }
  iStack_14c = 0;
  alStack_148[0] = -1;
  pcStack_c8 = FUN_10054a6dc;
  ppuStack_c0 = &PTR_DAT_110d99970;
  piStack_b8 = &iStack_14c;
  plStack_b0 = alStack_148;
  plVar6 = param_1;
  func_0x0001004c3d2c(param_1,&UNK_10f82f4bd,0x79);
  func_0x00010054a7cc(ppuStack_c0);
  if (((*param_3 & 0x100) == 0) && ((*(byte *)((long)param_3 + 0x25) & 1) != 0)) {
    if (*(char *)((long)param_3 + 9) == '\x01') {
      if ((iStack_14c != 1) && (iStack_14c != 0)) {
        if (0 < (int)*(uint *)((long)param_3 + 0xc)) {
          uStack_128 = 0;
          plVar6 = (long *)&UNK_10f82f57f;
          puStack_130 = (undefined *)(ulong)*(uint *)((long)param_3 + 0xc);
          FUN_1003a91d4();
          FUN_1003a9204(&plStack_110);
          func_0x0001004c3c94();
          func_0x0001004c3cbc();
        }
        goto LAB_10045e6b0;
      }
    }
    else if (iStack_14c == 0) goto LAB_10045e6b0;
    func_0x0001004c3c8c();
  }
LAB_10045e6b0:
  if (-1 < alStack_148[0]) {
    FUN_1004c330c();
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar4 = uStack_88._7_1_ == 0;
  ppuVar1 = ppuStack_90;
  pppppuVar11 = (undefined8 *****)ppppuStack_98;
  if (-1 < (long)uStack_88) {
    ppuVar1 = (undefined **)(ulong)uStack_88._7_1_;
    pppppuVar11 = &ppppuStack_98;
  }
  uVar12 = SUB84(ppuVar1,0);
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  puStack_f8 = &UNK_105277f7c;
  ppuStack_f0 = &PTR_DAT_110873830;
  plVar6 = param_1;
  func_0x0001004c3d2c();
  func_0x00010054a7cc(ppuStack_f0);
  FUN_10054aa54();
  func_0x000100456ae4(uStack_68);
  if ((bool)uVar4) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c60ca0(&plStack_110);
  FUN_10054aa54();
  func_0x000107c60ca0(param_1 + 0x2e);
  func_0x000107c3a400();
  func_0x000107c60ca0(plVar5);
  func_0x000107c60ca0(param_1 + 0x1c);
  func_0x000107c60d34(param_1 + 0x14);
  func_0x000107c313c4(param_1);
  func_0x000107c60bd8();
  *plVar6 = (long)&PTR_DAT_110d99bf0;
  ppppuVar2 = pppppuVar11[1];
  if (-1 < (char)*(byte *)((long)pppppuVar11 + 0x17)) {
    ppppuVar2 = (undefined8 ****)(ulong)*(byte *)((long)pppppuVar11 + 0x17);
  }
  if (ppppuVar2 == (undefined8 ****)0x0) {
    func_0x000107c60c94(plVar6 + 1,pppppuVar11);
  }
  else {
    pppppuVar9 = pppppuVar11;
    func_0x000107c60be8(pppppuVar11,0x2f,0xffffffffffffffff);
    FUN_1000e1048(plVar6 + 1,pppppuVar11,(long)pppppuVar9 + 1,0xffffffffffffffff);
  }
  *(undefined4 *)(plVar6 + 4) = uVar12;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  plVar6[10] = 0;
  plVar6[9] = 0;
  plVar6[0xb] = 0x32aaaba7;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x11] = 0;
  plVar6[0x10] = 0;
  plVar6[0x12] = 0;
  return plVar6;
}



/* Entry: 10045e898; end: 10045e94f;  */

undefined8 * FUN_10045e898(undefined8 *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110d99bf0;
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x000107c60c94(param_1 + 1,param_2);
  }
  else {
    lVar2 = param_2;
    func_0x000107c60be8(param_2,0x2f,0xffffffffffffffff);
    FUN_1000e1048(param_1 + 1,param_2,lVar2 + 1,0xffffffffffffffff);
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0x32aaaba7;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  return param_1;
}



/* Entry: 10045e950; end: 10045e98b;  */

long FUN_10045e950(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10045e98c();
  lVar1 = unaff_x19 + 0xe0;
  FUN_100455428(lVar1);
  FUN_100463330();
  return lVar1;
}



/* Entry: 10045e98c; end: 10045e997;  */

void FUN_10045e98c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex4lockEv_110346578)(param_1 + 0xa0);
  return;
}



/* Entry: 10045e998; end: 10045ea7b; -[SCChatDisplayReadyLoggingServiceProvider provide] */

void FUN_10045e998(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126be820;
  func_0x000107c610f4(PTR_PTR_1126be820);
  func_0x000107c45d80();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10045ea7c; end: 10045eaef; -[SCChatDisplayReadyLoggingServices initWithChatDisplayReadyLogger:] */

undefined1 * FUN_10045ea7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f75f0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10045eaf0; end: 10045eb3b;  */

void FUN_10045eaf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10045eb3c; end: 10045eb43;  */

void FUN_10045eb3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045eb44; end: 10045eb97;  */

void FUN_10045eb44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x80);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045eb98; end: 10045f427;  */

void FUN_10045eb98(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_1002b7acc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  puVar1 = PTR_PTR_1126a8f28;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar14 = uStack_d8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar16 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f00a440);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc34f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar17);
  uVar16 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar16 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00a470);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  uVar16 = uVar17;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(param_2 + 0x80) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 10045f428; end: 10045f463;  */

void FUN_10045f428(void)

{
  long unaff_x20;
  
  FUN_10045eb98(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10045f464; end: 10045f46b;  */

void FUN_10045f464(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045f46c; end: 10045f4bf;  */

void FUN_10045f46c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045f4c0; end: 10045fb63;  */

void FUN_10045f4c0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_1002a6100();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a96e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar2);
  uVar13 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efbb910);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar10);
  func_0x000107c61174();
  uVar13 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efbb9c0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  lVar15 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar14);
  func_0x000107c61174();
  uVar13 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0176d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar15 != 0) {
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    *(long *)(param_2 + 0x68) = lVar15;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10045fb64);
  (*pcVar1)();
}



/* Entry: 10045fb64; end: 10045fbb3;  */

void FUN_10045fb64(void)

{
  long unaff_x20;
  
  FUN_10045f4c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10045fbb4; end: 10045fbc7;  */

void FUN_10045fbb4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000107c28720();
    *(undefined1 *)(param_1 + 0x28) = 1;
    return;
  }
  return;
}


