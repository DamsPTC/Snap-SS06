/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102739bbc; end: 102739c1f;  */

void FUN_102739bbc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10273a090;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027361a4,0,0);
  return;
}



/* Entry: 102739c20; end: 102739c57;  */

void FUN_102739c20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102739c58; end: 102739cc3;  */

void FUN_102739c58(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10273a094;
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102734ef8,0,0,uVar4);
  return;
}



/* Entry: 102739cc4; end: 102739d1b;  */

void FUN_102739cc4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10273a098;
  plVar1[2] = param_1;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102734c0c,0,0);
  return;
}



/* Entry: 102739d1c; end: 102739d73;  */

void FUN_102739d1c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102739d74;
  plVar1[2] = param_1;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027349cc,0,0);
  return;
}



/* Entry: 102739d74; end: 102739daf;  */

void FUN_102739d74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102739dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102739db0; end: 102739dbf;  */

void FUN_102739db0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102739dc0; end: 102739dff;  */

void FUN_102739dc0(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102739e00; end: 102739e0f;  */

void FUN_102739e00(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102739e10; end: 102739e4f;  */

void FUN_102739e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb4e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad3fd4;
  func_0x000107c61520(&UNK_10dad3fd4,&UNK_110542090);
  puRam0000000112ebb4e8 = puVar1;
  return;
}



/* Entry: 102739e50; end: 102739ed3;  */

/* WARNING: Possible PIC construction at 0x000102739e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102739e74) */
/* WARNING: Removing unreachable block (ram,0x000102739e78) */

void FUN_102739e50(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c27dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*param_1,PTR_s_type_11267d188);
    return;
  }
  return;
}



/* Entry: 102739ed4; end: 10273a03b;  */

int FUN_102739ed4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102739f50;
        goto LAB_102739f34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102739f34:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102739f50:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10273a03c; end: 10273a07b;  */

void FUN_10273a03c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb508 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad3fac;
  func_0x000107c61520(&UNK_10dad3fac,&UNK_110542090);
  puRam0000000112ebb508 = puVar1;
  return;
}



/* Entry: 10273a07c; end: 10273a07f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate uiViewController] */

void FUN_10273a07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10273a080; end: 10273a083; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate uiContainer] */

void FUN_10273a080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10273a084; end: 10273a087; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate commonLoggingParams] */

void FUN_10273a084(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10273a088; end: 10273a0a7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation31ChatMediaDrawerSendFlowDelegate lensAssetUploadInfo] */

void FUN_10273a088(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10273a0a8; end: 10273a113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273a0a8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10273a2c8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebb518) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10273a114; end: 10273a11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273a114(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10273a2c8();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebb518) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10273a11c; end: 10273a1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273a11c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebb518) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10273a1e8; end: 10273a247; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation25MemTwoChatMediaDrawerHost makeHostViewControllerWithConversation:] */

void FUN_10273a1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010273a168(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10273a248; end: 10273a2a7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation25MemTwoChatMediaDrawerHost init] */

void FUN_10273a248(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoChatMediaDrawerValdiComponentImplementation.MemTwoChatMediaDrawerHost",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273a274);
  (*pcVar1)();
}



/* Entry: 10273a2a8; end: 10273a2b7;  */

undefined1  [16] FUN_10273a2a8(void)

{
  return ZEXT816(0x110542110);
}



/* Entry: 10273a2b8; end: 10273a2c7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation25MemTwoChatMediaDrawerHost .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273a2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebb518));
  return;
}



/* Entry: 10273a2c8; end: 10273a2e7;  */

void FUN_10273a2c8(void)

{
  func_0x000107c61168(&PTR_PTR_11285e708);
  return;
}



/* Entry: 10273a2e8; end: 10273a3e7;  */

/* WARNING: Possible PIC construction at 0x00010273a354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273a384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273a3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273a3c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273a388) */
/* WARNING: Removing unreachable block (ram,0x00010273a358) */
/* WARNING: Removing unreachable block (ram,0x00010273a3a4) */
/* WARNING: Removing unreachable block (ram,0x00010273a3cc) */
/* WARNING: Removing unreachable block (ram,0x00010273a3b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273a2e8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112ebb578),1)) {
    *(long *)(unaff_x20 + _DAT_112ebb578) = *(long *)(unaff_x20 + _DAT_112ebb578) + 1;
    puVar2 = PTR_PTR_1126aae30;
    func_0x000107c610f8(PTR_PTR_1126aae30);
    func_0x000107c453e4();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ebb570);
    func_0x000107c40fe8(uVar3);
    func_0x000107c61180();
    func_0x000107c53ca0(puVar2,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273a3e8);
  (*pcVar1)();
}



/* Entry: 10273a3e8; end: 10273a4a7;  */

/* WARNING: Possible PIC construction at 0x00010273a444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273a468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273a490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273a448) */
/* WARNING: Removing unreachable block (ram,0x00010273a46c) */
/* WARNING: Removing unreachable block (ram,0x00010273a494) */
/* WARNING: Removing unreachable block (ram,0x00010273a47c) */

void FUN_10273a3e8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aae30;
  func_0x000107c610f8(PTR_PTR_1126aae30);
  func_0x000107c453e4();
  uVar2 = 0x112ebb488;
  func_0x0001000285a8(0x112ebb488,&UNK_10dad3f20);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar2);
  func_0x000107c53ca0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10273a4a8; end: 10273aaab;  */

void FUN_10273a4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110542130;
  func_0x000107c613fc(&UNK_110542130,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x0001000285a8(0x112ebb548,&UNK_10dad4080);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x0001002acf1c(FUN_10273aaac,puVar1);
  return;
}



/* Entry: 10273aaac; end: 10273aaef;  */

void FUN_10273aaac(void)

{
  long unaff_x20;
  
  func_0x00010273a654(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 10273aaf0; end: 10273af2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10273aaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_88 [16];
  long lStack_78;
  long lStack_70;
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112ebb550,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ebb558,0);
  lVar2 = _DAT_112ebb560;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb568) = 0;
  lVar2 = _DAT_112ebb570;
  puVar3 = PTR_PTR_1126aae30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb580) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb588) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb590) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb598) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb5a0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb5a8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb5b0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb5b8) = param_7;
  lVar4 = 0;
  FUN_102739b3c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x000107c61614(lVar5 + _DAT_112ebb2e8,0);
  *(undefined8 *)(lVar5 + _DAT_112ebb340) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ebb348);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(lVar5 + _DAT_112ebb350) = 0;
  *(undefined8 *)(lVar5 + _DAT_112ebb358) = 0;
  lVar2 = _DAT_112ebb360;
  uVar6 = 0;
  func_0x000102739b5c();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c453e4();
  *(undefined8 *)(lVar5 + lVar2) = uVar6;
  *(undefined8 *)(lVar5 + _DAT_112ebb2f8) = param_8;
  *(undefined8 *)(lVar5 + _DAT_112ebb300) = param_9;
  *(undefined8 *)(lVar5 + _DAT_112ebb308) = param_10;
  *(undefined8 *)(lVar5 + _DAT_112ebb2f0) = param_11;
  *(undefined8 *)(lVar5 + _DAT_112ebb310) = param_12;
  *(undefined8 *)(lVar5 + _DAT_112ebb318) = param_13;
  *(undefined8 *)(lVar5 + _DAT_112ebb320) = param_14;
  *(undefined8 *)(lVar5 + _DAT_112ebb328) = param_15;
  *(undefined8 *)(lVar5 + _DAT_112ebb330) = param_16;
  *(undefined8 *)(lVar5 + _DAT_112ebb338) = param_17;
  plVar7 = &lStack_78;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_112ebb5c0) = plVar7;
  puVar8 = auStack_88;
  func_0x000107c61154(puVar8,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61574(param_14);
  func_0x000107c61574(param_15);
  func_0x000107c61574(param_16);
  func_0x000107c61574(param_17);
  return puVar8;
}



/* Entry: 10273af2c; end: 10273af37; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273af2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebb550;
  func_0x000107c61428(param_1 + _DAT_112ebb550,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10273af38; end: 10273af8b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController setInputController:] */

/* WARNING: Possible PIC construction at 0x00010273af74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273af78) */

void FUN_10273af38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10273ca30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10273af8c; end: 10273af97; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273af8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebb558;
  func_0x000107c61428(param_1 + _DAT_112ebb558,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10273af98; end: 10273afdb;  */

void FUN_10273af98(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10273afdc; end: 10273b033; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273afdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebb558;
  func_0x000107c61428(param_1 + _DAT_112ebb558,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10273b034; end: 10273b0d7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController defaultDrawerHeight] */

long FUN_10273b034(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61174(param_5);
  func_0x000107c4c194(puVar1);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  return (long)(param_1 / 3.0);
}



/* Entry: 10273b0d8; end: 10273b0db; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController setDefaultDrawerHeight:] */

void FUN_10273b0d8(void)

{
  return;
}



/* Entry: 10273b0dc; end: 10273b103; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController initWithCoder:] */

void FUN_10273b0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10273cca0();
  return;
}



/* Entry: 10273b104; end: 10273b257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273b104(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5c5e8();
    func_0x000107c61180();
    func_0x000107c52b50(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar4);
    lVar7 = *(long *)(unaff_x20 + _DAT_112ebb5c0);
    func_0x000107c61604(lVar7 + _DAT_112ebb2e8);
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ebb348);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    uVar6 = puVar1[2];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_10273cbb4(uVar5,uVar2,uVar6);
    func_0x000102737c10();
    puVar4 = &UNK_110542158;
    func_0x000107c613fc(&UNK_110542158,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar5 = 0xc1;
    func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad4090,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10273b258);
  (*pcVar3)();
}



/* Entry: 10273b258; end: 10273b2c3;  */

void FUN_10273b258(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273b2c4,uVar1,uVar2);
  return;
}



/* Entry: 10273b2c4; end: 10273b34f;  */

void FUN_10273b2c4(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10273b350;
    plVar1[9] = lVar3;
    lVar2 = 0;
    func_0x000107c5fcec();
    lVar3 = lVar2;
    func_0x000107c5fce8();
    plVar1[10] = lVar3;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[0xb] = lVar2;
    plVar1[0xc] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10273b4c0,lVar2,lVar3);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010273b34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273b350; end: 10273b3bb;  */

void FUN_10273b350(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x60) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_10273b3bc;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    pcVar1 = FUN_10273b40c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10273b3bc; end: 10273b40b;  */

void FUN_10273b3bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  FUN_10273b6d8(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010273b408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273b40c; end: 10273b453;  */

void FUN_10273b40c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61574(uVar1);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010273b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273b454; end: 10273b4bf;  */

void FUN_10273b454(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273b4c0,uVar1,uVar2);
  return;
}



/* Entry: 10273b4c0; end: 10273b5eb;  */

/* WARNING: Removing unreachable block (ram,0x00010273b4ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273b4c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  FUN_10273ba00();
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ebb570);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ebb5b8);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  uVar2 = 0;
  FUN_10273ce78(0,0x112ebb5f0,&PTR_PTR_1126aae48);
  func_0x000107c61174(uVar11);
  pcVar3 = FUN_10273cd80;
  func_0x00010488bc98(FUN_10273cd80,unaff_x22 + 0x10,uVar2);
  *(code **)(unaff_x22 + 0x70) = pcVar3;
  func_0x000107c61170(uVar11);
  *(code **)(unaff_x22 + 0x38) = pcVar3;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  lVar5 = 0x112ebb5f8;
  func_0x0001000285a8(0x112ebb5f8,&UNK_10dad4110);
  lVar6 = lVar5;
  FUN_10273cd8c();
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10273b5ec;
  plVar4[3] = unaff_x22 + 0x40;
  uVar11 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar6,lVar5,&UNK_10e821f58,&UNK_10e821f60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar11,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar4[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[5] = uVar8;
  piVar10 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar4[6] = (long)plVar9;
  *plVar9 = (long)plVar4;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar5,lVar6);
  return;
}



/* Entry: 10273b5ec; end: 10273b643;  */

void FUN_10273b5ec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10273b644;
  }
  else {
    pcVar1 = FUN_10273b690;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
  return;
}



/* Entry: 10273b644; end: 10273b68f;  */

void FUN_10273b644(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010273b68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 10273b690; end: 10273b6d7;  */

void FUN_10273b690(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010273b6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10273b6d8; end: 10273b9d7;  */

/* WARNING: Possible PIC construction at 0x00010273b708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010273b960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273b944) */
/* WARNING: Removing unreachable block (ram,0x00010273b8e4) */
/* WARNING: Removing unreachable block (ram,0x00010273b9d4) */
/* WARNING: Removing unreachable block (ram,0x00010273b918) */
/* WARNING: Removing unreachable block (ram,0x00010273b8c4) */
/* WARNING: Removing unreachable block (ram,0x00010273b874) */
/* WARNING: Removing unreachable block (ram,0x00010273b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010273b8a8) */
/* WARNING: Removing unreachable block (ram,0x00010273b854) */
/* WARNING: Removing unreachable block (ram,0x00010273b804) */
/* WARNING: Removing unreachable block (ram,0x00010273b9cc) */
/* WARNING: Removing unreachable block (ram,0x00010273b838) */
/* WARNING: Removing unreachable block (ram,0x00010273b7e4) */
/* WARNING: Removing unreachable block (ram,0x00010273b740) */
/* WARNING: Removing unreachable block (ram,0x00010273b9c8) */
/* WARNING: Removing unreachable block (ram,0x00010273b7c8) */
/* WARNING: Removing unreachable block (ram,0x00010273b70c) */
/* WARNING: Removing unreachable block (ram,0x00010273b9c4) */
/* WARNING: Removing unreachable block (ram,0x00010273b72c) */
/* WARNING: Removing unreachable block (ram,0x00010273b964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273b6d8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ebb568);
  *(undefined8 *)(unaff_x20 + _DAT_112ebb568) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10273b9d8; end: 10273b9ff; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController viewDidLoad] */

void FUN_10273b9d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10273b104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10273ba00; end: 10273bddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10273ba00(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = *(undefined1 **)(unaff_x20 + _DAT_112ebb590);
  func_0x000107c41414();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar3 == (undefined1 *)0x0) {
    FUN_10273cde8();
    func_0x000107c613f8(&UNK_110617920,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    puVar2 = puVar3;
    func_0x000107c409cc();
    func_0x000107c61180();
    if (puVar2 == (undefined1 *)0x0) {
      FUN_10273cde8();
      func_0x000107c613f8(&UNK_110617920,puVar2,0,0);
      *puVar2 = 1;
      func_0x000107c61654();
      func_0x000107c615e8(puVar3);
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ebb580);
      *(undefined1 **)(unaff_x20 + _DAT_112ebb580) = puVar2;
      func_0x000107c615f0();
      func_0x000107c615e8(uVar11);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ebb588);
      func_0x000107c5dbd4(uVar11);
      func_0x000107c61180();
      puVar4 = puVar2;
      func_0x000107c40978();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ebb5a0);
      puVar5 = &UNK_110542158;
      func_0x000107c613fc(&UNK_110542158,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1105421f0;
      func_0x000107c613fc(&UNK_1105421f0,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar11;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      puVar7 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_10273ce28;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101016bdc;
      puStack_78 = &UNK_110542208;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61174(uVar11);
      func_0x000107c46b38(puVar7);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_68);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ebb5b0);
      puVar5 = &UNK_110542240;
      func_0x000107c613fc(&UNK_110542240,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar11;
      puVar6 = PTR_PTR_1126b1678;
      func_0x000107c610f8(PTR_PTR_1126b1678);
      pcStack_70 = (code *)0x10273ce30;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101016bdc;
      puStack_78 = &UNK_110542258;
      ppuVar8 = &puStack_90;
      puStack_68 = puVar5;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61174(uVar11);
      func_0x000107c46b38(puVar6);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puStack_68);
      lVar12 = *(long *)(unaff_x20 + _DAT_112ebb598);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ebb5a8);
      func_0x000107c615f0(lVar12);
      func_0x000107c61174(uVar11);
      puVar9 = puVar4;
      func_0x000107c41408(puVar4);
      func_0x000107c61180();
      unaff_x20 = PTR_PTR_1126aae50;
      func_0x000107c610f8(PTR_PTR_1126aae50);
      func_0x000107c615f0(lVar12);
      func_0x000107c45c44(unaff_x20);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c615e8(puVar9);
      func_0x000107c59358(unaff_x20);
      puStack_98 = PTR_DAT_11269f0a8;
      lVar10 = lVar12;
      func_0x000107c61494(lVar12,1,&puStack_98);
      if (lVar10 == 0) {
        func_0x000107c615e8(lVar12);
      }
      func_0x000107c55378(unaff_x20);
      func_0x000107c615e8(puVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c615e8(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(lVar10);
    }
  }
  return unaff_x20;
}



/* Entry: 10273bddc; end: 10273bfbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273bddc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(param_2 + _DAT_112ff82c0);
  puVar1 = &UNK_1105421a0;
  func_0x000107c613fc(&UNK_1105421a0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_50 = FUN_10273cddc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f0f800;
  puStack_58 = &UNK_1105421b8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar1);
  pcVar3 = "makeComponentView()";
  func_0x0001000c10c0("makeComponentView()");
  func_0x000107c61180();
  func_0x000107c44288(uVar4);
  func_0x000107c615e8(pcVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10273bfc0; end: 10273c0bb;  */

long FUN_10273bfc0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000102797678(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  lVar1 = param_2;
  (**(code **)(lStack_38 + 8))();
  func_0x000107c61170(param_2);
  func_0x0001000834e4(auStack_58);
  return lVar1;
}



/* Entry: 10273c0bc; end: 10273c0c3; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController canPanDrawer] */

undefined8 FUN_10273c0bc(void)

{
  return 1;
}



/* Entry: 10273c0c4; end: 10273c0c7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController willBeginPanningFromState:gestureRecognizer:] */

void FUN_10273c0c4(void)

{
  return;
}



/* Entry: 10273c0c8; end: 10273c0cb; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController didPanFromState:gestureRecognizer:] */

void FUN_10273c0c8(void)

{
  return;
}



/* Entry: 10273c0cc; end: 10273c0cf; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController willEndPanningToState:] */

void FUN_10273c0cc(void)

{
  return;
}



/* Entry: 10273c0d0; end: 10273c0d3; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController didEndPanningToState:] */

void FUN_10273c0d0(void)

{
  return;
}



/* Entry: 10273c0d4; end: 10273c0d7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController sizeDidChange:] */

void FUN_10273c0d4(void)

{
  return;
}



/* Entry: 10273c0d8; end: 10273c17f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController maximumDrawerHeight] */

long FUN_10273c0d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61174(param_5);
  func_0x000107c4c194(puVar1);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar1);
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_5);
  return (long)((param_1 + param_1) / 3.0);
}



/* Entry: 10273c180; end: 10273c187; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController preferredTargetState] */

undefined8 FUN_10273c180(void)

{
  return 2;
}



/* Entry: 10273c188; end: 10273c18b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController willBecomeActive] */

void FUN_10273c188(void)

{
  return;
}



/* Entry: 10273c18c; end: 10273c223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273c18c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ebb5c0);
  FUN_1027348bc();
  lVar1 = param_1;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    uVar2 = *(undefined8 *)(lVar4 + _DAT_112ebb358);
    func_0x000107c61174(uVar2);
    uVar3 = uVar2;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
    return;
  }
  return;
}



/* Entry: 10273c224; end: 10273c24b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController didBecomeActive] */

void FUN_10273c224(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10273c18c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10273c24c; end: 10273c24f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController willResignActive] */

void FUN_10273c24c(void)

{
  return;
}



/* Entry: 10273c250; end: 10273c303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273c250(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  FUN_102736508();
  if ((param_1 & 1) != 0) {
    func_0x000100083b20(&lStack_38);
    lVar1 = *(long *)(lStack_38 + _DAT_1130735b8);
    func_0x000107c61174();
    func_0x000107c61170(lStack_38);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c44774();
      if ((int)lVar1 != 0) {
        FUN_102737fb8();
      }
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10273c304; end: 10273c32b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController didResignActive] */

void FUN_10273c304(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10273c250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10273c32c; end: 10273c32f; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController willResumeActive] */

void FUN_10273c32c(void)

{
  return;
}



/* Entry: 10273c330; end: 10273c333; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController willSuspendActive] */

void FUN_10273c330(void)

{
  return;
}



/* Entry: 10273c334; end: 10273c457;  */

void FUN_10273c334(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar2 = &UNK_110542290;
  func_0x000107c613fc(&UNK_110542290,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10273ce38;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_10273ce40;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10273c540;
  puStack_58 = &UNK_1105422a8;
  ppuVar3 = &puStack_70;
  puStack_48 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c5d8(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9b,0x116,0x22,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273c458);
  (*pcVar1)();
}



/* Entry: 10273c458; end: 10273c4b7;  */

void FUN_10273c458(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5fcec(0);
  func_0x000100f7a598(FUN_10273ce60,param_2,
                      "MemTwoChatMediaDrawerValdiComponentImplementation/MemTwoChatMediaDrawerViewController.swift"
                      ,0x5b,2,0x117);
  return;
}



/* Entry: 10273c4b8; end: 10273c53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273c4b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112ebb5c0);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
    func_0x000102737d20();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10273c540; end: 10273c5c3;  */

void FUN_10273c540(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10273c5c4; end: 10273c5c7; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController didActivateDrawerWithDeeplinkIdentifier:subitemDeeplinkIdentifier:] */

void FUN_10273c5c4(void)

{
  return;
}



/* Entry: 10273c5c8; end: 10273c5cf; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController shouldForceMaximumHeight] */

undefined8 FUN_10273c5c8(void)

{
  return 0;
}



/* Entry: 10273c5d0; end: 10273c68b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10273c5d0(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  plVar1 = param_1;
  func_0x000104397b18();
  if (param_2 != 0) {
    if (((param_1 == (long *)*plVar1 && param_2 == plVar1[1]) ||
        (func_0x000107c605b8(param_1,param_2,(long *)*plVar1,plVar1[1],0), plVar1 = param_1,
        ((ulong)param_1 & 1) != 0)) && (FUN_102737dc8(), ((ulong)plVar1 & 1) != 0)) {
      puVar2 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c451b0(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10273c68c; end: 10273c703; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController interceptMessageSendAttemptForPlugin:] */

void FUN_10273c68c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_10273c5d0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10273c704; end: 10273c763; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController initWithNibName:bundle:] */

void FUN_10273c704(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoChatMediaDrawerValdiComponentImplementation.MemTwoChatMediaDrawerViewController"
                      ,0x55,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273c730);
  (*pcVar1)();
}



/* Entry: 10273c764; end: 10273c85b; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010273c7c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273c7c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273c764(long param_1)

{
  func_0x000100d033ac(param_1 + _DAT_112ebb550);
  func_0x000100d033ac(param_1 + _DAT_112ebb558);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebb560));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebb588));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ebb590));
  return;
}



/* Entry: 10273c85c; end: 10273c913; -[_TtC49MemTwoChatMediaDrawerValdiComponentImplementation35MemTwoChatMediaDrawerViewController updateConversation:] */

/* WARNING: Possible PIC construction at 0x00010273c8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010273c8fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273c85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + _DAT_112ebb5c0);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112ebb340);
  *(undefined8 *)(lVar3 + _DAT_112ebb340) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102739db0(uVar4);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ebb348);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  uVar5 = puVar1[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  func_0x000107c61174(param_3);
  FUN_10273cbb4(uVar4,uVar2,uVar5);
  func_0x000102737c10();
  FUN_10273a3e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10273c914; end: 10273c95b;  */

void FUN_10273c914(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ebb628;
  plVar5 = (long *)&UNK_10dad4140;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10273ce78(0,0x112ebb2d0,&PTR_PTR_1126c3358);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10273c95c; end: 10273c9d3;  */

void FUN_10273c95c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10273ce78(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10273c9d4; end: 10273ca2f;  */

void FUN_10273c9d4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ebb618;
  plVar5 = (long *)&UNK_10dad4130;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10273ce78(0,0x112ebb480,&PTR_PTR_1126c4258);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10273ca30; end: 10273cb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273ca30(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebb550;
  func_0x000107c61428(unaff_x20 + _DAT_112ebb550,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c496fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ebb560));
  if (lVar4 != 0) {
    puVar2 = &UNK_110542158;
    func_0x000107c613fc(&UNK_110542158,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_58 = 0x10273cee0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x10273c578;
    puStack_60 = &UNK_1105422d0;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174(lVar4);
    func_0x000107c61574(puVar2);
    lVar1 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c3e924(lVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10273cb90; end: 10273cbb3;  */

void FUN_10273cb90(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar2 = &UNK_110542290;
  func_0x000107c613fc(&UNK_110542290,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x10273ce38;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  pcStack_50 = FUN_10273ce40;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10273c540;
  puStack_58 = &UNK_1105422a8;
  ppuVar3 = &puStack_70;
  puStack_48 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar4 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c5d8(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x9b,0x116,0x22,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10273c458);
  (*pcVar1)();
}



/* Entry: 10273cbb4; end: 10273cbdf;  */

void FUN_10273cbb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
    return;
  }
  return;
}



/* Entry: 10273cbe0; end: 10273cc33;  */

void FUN_10273cbe0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10273cc34;
  plVar3[5] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10273b2c4,lVar1,lVar2);
  return;
}



/* Entry: 10273cc34; end: 10273cc6f;  */

void FUN_10273cc34(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010273cc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10273cc70; end: 10273cc7f;  */

undefined1  [16] FUN_10273cc70(void)

{
  return ZEXT816(0x110542180);
}



/* Entry: 10273cc80; end: 10273cc9f;  */

void FUN_10273cc80(void)

{
  func_0x000107c61168(&PTR_PTR_11285e7c8);
  return;
}



/* Entry: 10273cca0; end: 10273cd7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273cca0(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112ebb550,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ebb558,0);
  lVar1 = _DAT_112ebb560;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb568) = 0;
  lVar1 = _DAT_112ebb570;
  puVar3 = PTR_PTR_1126aae30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebb580) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MemTwoChatMediaDrawerValdiComponentImplementation/MemTwoChatMediaDrawerViewController.swift"
                      ,0x5b,2,0x86,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10273cd80);
  (*pcVar2)();
}



/* Entry: 10273cd80; end: 10273cd8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10273cd80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar3 = &puStack_70;
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112ff82c0);
  puVar2 = &UNK_1105421a0;
  func_0x000107c613fc(&UNK_1105421a0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  pcStack_50 = FUN_10273cddc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f0f800;
  puStack_58 = &UNK_1105421b8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar2);
  pcVar4 = "makeComponentView()";
  func_0x0001000c10c0("makeComponentView()");
  func_0x000107c61180();
  func_0x000107c44288(uVar6);
  func_0x000107c615e8(pcVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10273cd8c; end: 10273cddb;  */

void FUN_10273cd8c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ebb600 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ebb5f8;
  func_0x00010002969c(0x112ebb5f8,&UNK_10dad4110);
  puVar2 = &DAT_10dd3cdf8;
  func_0x000107c61520(&DAT_10dd3cdf8,uVar1);
  puRam0000000112ebb600 = puVar2;
  return;
}



/* Entry: 10273cddc; end: 10273cde7;  */

void FUN_10273cddc(undefined1 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (param_1 == (undefined1 *)0x0) {
    FUN_10273cde8(0,*(undefined8 *)(unaff_x20 + 0x10));
    puVar1 = &UNK_110617920;
    func_0x000107c613f8(&UNK_110617920,param_1,0,0);
    *param_1 = 2;
    uStack_48 = 1;
    puStack_50 = puVar1;
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126aae48;
    func_0x000107c610f8();
    func_0x000107c615f0(param_1);
    func_0x000107c49520();
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10273cde8; end: 10273ce27;  */

void FUN_10273cde8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebb608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db943c8;
  func_0x000107c61520(&UNK_10db943c8,&UNK_110617920);
  puRam0000000112ebb608 = puVar1;
  return;
}



/* Entry: 10273ce28; end: 10273ce3f;  */

long FUN_10273ce28(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000102797678(auStack_58,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000a8868(auStack_58,uStack_40);
  func_0x000107c61428(lVar1 + 0x10,auStack_70,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618(lVar1);
  lVar2 = lVar1;
  (**(code **)(lStack_38 + 8))();
  func_0x000107c61170(lVar1);
  func_0x0001000834e4(auStack_58);
  return lVar2;
}



/* Entry: 10273ce40; end: 10273ce5f;  */

void FUN_10273ce40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10273ce60; end: 10273ce77;  */

void FUN_10273ce60(void)

{
  FUN_10273c4b8();
  return;
}



/* Entry: 10273ce78; end: 10273ceb7;  */

void FUN_10273ce78(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}


