/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ab05f4; end: 101ab05fb;  */

undefined8 FUN_101ab05f4(void)

{
  return 1;
}



/* Entry: 101ab05fc; end: 101ab069b;  */

void FUN_101ab05fc(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101ab069c; end: 101ab06ab;  */

void FUN_101ab069c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101ab06ac; end: 101ab06ef;  */

void FUN_101ab06ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ab06f0; end: 101ab0753;  */

void FUN_101ab06f0(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101ab0754;
  plVar1[0x14] = param_2;
  plVar1[0x15] = lVar2;
  plVar1[0x13] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ab0150,0,0);
  return;
}



/* Entry: 101ab0754; end: 101ab078f;  */

void FUN_101ab0754(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ab078c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ab0790; end: 101ab079b;  */

void FUN_101ab0790(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf3de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + 0x10),PTR_s_closeStream_1125ad128);
  return;
}



/* Entry: 101ab079c; end: 101ab0897; -[_TtC31LegacyGRPCServiceImplementationP33_BE18B712582EE3161A124FA78634167620GRPCSendCallbackImpl onSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab079c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *apuStack_78 [3];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000107c5bd10();
  uVar2 = param_3;
  func_0x000107c42a50();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  puStack_60 = &UNK_11043b508;
  ppuStack_58 = &PTR_DAT_11043b5b0;
  puVar4 = &UNK_11043b488;
  func_0x000107c613fc(&UNK_11043b488,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  puVar4[0x18] = 0;
  *(undefined8 *)(puVar4 + 0x20) = uVar3;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  uVar1 = 0x112df7220;
  apuStack_78[0] = puVar4;
  func_0x0001000285a8(0x112df7220,&UNK_10d9c6948);
  func_0x000107c5fcb4(apuStack_78,uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101ab0898; end: 101ab08f7; -[_TtC31LegacyGRPCServiceImplementationP33_BE18B712582EE3161A124FA78634167620GRPCSendCallbackImpl init] */

void FUN_101ab0898(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyGRPCServiceImplementation.GRPCSendCallbackImpl",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ab08c4);
  (*pcVar1)();
}



/* Entry: 101ab08f8; end: 101ab093f; -[_TtC31LegacyGRPCServiceImplementationP33_BE18B712582EE3161A124FA78634167620GRPCSendCallbackImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab08f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_112df71c8;
  lVar2 = 0x112df7220;
  func_0x0001000285a8(0x112df7220,&UNK_10d9c6948);
                    /* WARNING: Could not recover jumptable at 0x000101ab093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 101ab0940; end: 101ab0947;  */

void FUN_101ab0940(void)

{
  if (lRam0000000112df71f8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e66eaa8);
  return;
}



/* Entry: 101ab0948; end: 101ab097f;  */

void FUN_101ab0948(undefined8 param_1)

{
  if (lRam0000000112df71f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66eaa8);
  return;
}



/* Entry: 101ab0980; end: 101ab0a6f;  */

void FUN_101ab0980(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  func_0x000101ab09ec();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 101ab0a70; end: 101ab0aaf;  */

void FUN_101ab0a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df7218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c69e4;
  func_0x000107c61520(&UNK_10d9c69e4,&UNK_11043b5a0);
  puRam0000000112df7218 = puVar1;
  return;
}



/* Entry: 101ab0ab0; end: 101ab0ab7;  */

/* WARNING: Removing unreachable block (ram,0x000101ab0514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab0ab0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar8 = &lStack_60;
  uVar9 = *(undefined8 *)(lVar3 + 0x18);
  uVar5 = *(undefined8 *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar9);
  uVar4 = 0;
  func_0x000104580400(0,uVar9,uVar5,lVar3);
  uVar5 = uVar4;
  func_0x000107c5ee20();
  func_0x00010006c090(uVar4,uVar9);
  lVar6 = 0;
  FUN_101ab0948();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar2 = _DAT_112df71c8;
  lVar3 = 0x112df7220;
  func_0x0001000285a8(0x112df7220,&UNK_10d9c6948);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(lVar7 + lVar2,param_1,lVar3);
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c51d94(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(plVar8);
  return;
}



/* Entry: 101ab0ab8; end: 101ab0ae3;  */

long FUN_101ab0ab8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101ab0ae4; end: 101ab0aeb;  */

void FUN_101ab0ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 101ab0aec; end: 101ab0bb7;  */

undefined8 * FUN_101ab0aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101ab0bb8; end: 101ab0d3f;  */

int FUN_101ab0bb8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101ab0d40; end: 101ab0d7f;  */

void FUN_101ab0d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df7228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c69ac;
  func_0x000107c61520(&UNK_10d9c69ac,&UNK_11043b5a0);
  puRam0000000112df7228 = puVar1;
  return;
}



/* Entry: 101ab0d80; end: 101ab0d8b;  */

undefined1  [16] FUN_101ab0d80(void)

{
  unkuint9 *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *unaff_x20;
  return auVar1;
}



/* Entry: 101ab0d8c; end: 101ab0db7;  */

undefined1  [16] FUN_101ab0d8c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101ab0db8; end: 101ab0dbb;  */

void FUN_101ab0db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101ab0dbc; end: 101ab0eab;  */

void FUN_101ab0dbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0x13f;
  func_0x000107c5fdb8(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  if (uVar3 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c61524(param_1,0,2,&lStack_30,param_1 + 0x60);
  }
  return;
}



/* Entry: 101ab0eac; end: 101ab0f1b;  */

void FUN_101ab0eac(void)

{
  ulong *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)
           ((long)unaff_x20 +
           *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x68));
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_101ab0f1c,0,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101ab0f1c; end: 101ab0f27;  */

void FUN_101ab0f1c(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 101ab0f28; end: 101ab12b3;  */

/* WARNING: Removing unreachable block (ram,0x000101ab11c8) */

void FUN_101ab0f28(uint param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  ulong *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  uint uStack_b4;
  ulong uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar8 = *unaff_x20;
  uVar9 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar10 = *(long *)((uVar9 & uVar8) + 0x50);
  uStack_c8 = param_2;
  uStack_b4 = param_1;
  uStack_b0 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0x112d393f0;
  puStack_c0 = auStack_d0 + -extraout_x8;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar6 = PTR___ss5ErrorWS_11034ee10;
  lVar2 = 0;
  func_0x000107c5fdb8(0,lVar10,uVar7,PTR___ss5ErrorWS_11034ee10);
  lVar11 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  puVar3 = (undefined8 *)0x0;
  lVar2 = lVar10;
  func_0x000107c5fda4(0,lVar10,uVar7,puVar6);
  lVar13 = puVar3[-1];
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar14 - extraout_x8_01;
  FUN_101ab12b4();
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
  if (param_4 == (undefined8 *)0x0) {
LAB_101ab10e0:
    uVar1 = uStack_b0;
    if (uStack_b0 >> 0x3c < 0xf) {
      (**(code **)(lVar11 + 0x10))
                (lVar14,(long)unaff_x20 +
                        *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60),
                 lStack_a8);
      uStack_78 = uStack_c8;
      uStack_70 = uVar1;
      uStack_80 = 0;
      uStack_98 = 0;
      puStack_a0 = (undefined *)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      func_0x00010006c00c(uStack_c8,uVar1);
      uVar7 = *(undefined8 *)((uVar9 & uVar8) + 0x58);
      *(undefined ***)(lVar12 + -0x10) = &PTR_DAT_110789f58;
      func_0x00010457fe00(puStack_c0,&uStack_78,&puStack_a0,0,100,0,lVar10,
                          PTR___s10Foundation4DataVN_110350ae0,uVar7);
      lVar2 = lStack_a8;
      func_0x000107c5fdb0(lVar12,puStack_c0,lStack_a8);
      (**(code **)(lVar11 + 8))(lVar14,lVar2);
      (**(code **)(lVar13 + 8))(lVar12,puVar3);
      if ((uStack_b4 & 1) == 0) {
        return;
      }
    }
    else if ((uStack_b4 & 1) == 0) {
      func_0x000101ab1610();
      puVar6 = &UNK_11043b418;
      func_0x000107c613f8(&UNK_11043b418,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      func_0x000107c61654();
      goto LAB_101ab1128;
    }
    FUN_101ab0eac();
    puStack_a0 = (undefined *)0x0;
    func_0x000107c5fdb4(*(undefined8 *)
                         ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60),&puStack_a0,
                        lStack_a8);
  }
  else {
    func_0x000107c61174();
    puVar4 = param_4;
    func_0x000107c5bd10();
    if ((long)puVar4 < 1) {
      func_0x000107c61170();
      puVar4 = param_4;
      goto LAB_101ab10e0;
    }
    puVar4 = param_4;
    func_0x000107c5bd10();
    puVar3 = param_4;
    func_0x000107c42a50();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x000101ab1610();
    puVar6 = &UNK_11043b418;
    func_0x000107c613f8(&UNK_11043b418,puVar3,0,0);
    *puVar3 = puVar4;
    puVar3[1] = 0;
    puVar3[2] = puVar5;
    puVar3[3] = lVar2;
    func_0x000107c61654();
    func_0x000107c61170(param_4);
LAB_101ab1128:
    lVar2 = lStack_a8;
    FUN_101ab0eac();
    puStack_a0 = puVar6;
    func_0x000107c614b0(puVar6);
    func_0x000107c5fdb4(&puStack_a0,lVar2);
    func_0x000107c614ac(puVar6);
  }
  return;
}



/* Entry: 101ab12b4; end: 101ab132b;  */

undefined1 FUN_101ab12b4(void)

{
  ulong *unaff_x20;
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)
           ((long)unaff_x20 +
           *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x68));
  func_0x000107c6157c(uVar1);
  func_0x000100075034(&uStack_31,0x101ab13e0,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  return uStack_31;
}



/* Entry: 101ab132c; end: 101ab13db;  */

/* WARNING: Possible PIC construction at 0x000101ab1384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ab13c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ab1388) */
/* WARNING: Removing unreachable block (ram,0x000101ab13c4) */

void FUN_101ab132c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 == 0) {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    FUN_101ab0f28(param_3,0,0xf000000000000000,param_5);
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  else {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_5 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 101ab13dc; end: 101ab140f;  */

void FUN_101ab13dc(void)

{
  return;
}



/* Entry: 101ab1410; end: 101ab1443;  */

void FUN_101ab1410(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ab1444; end: 101ab14d7;  */

void FUN_101ab1444(ulong *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__swift_isaMask_11034f488;
  lVar5 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60);
  uVar4 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  func_0x000107c5fdb8(0,uVar4,uVar2,PTR___ss5ErrorWS_11034ee10);
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + lVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)
            (*(undefined8 *)((long)param_1 + *(long *)((*(ulong *)puVar1 & *param_1) + 0x68)));
  return;
}



/* Entry: 101ab14d8; end: 101ab14e3;  */

void FUN_101ab14d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e66eb30);
  return;
}



/* Entry: 101ab14e4; end: 101ab15b3;  */

void FUN_101ab14e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c614f0();
  puVar1 = PTR__swift_isaMask_11034f488;
  lVar5 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x68);
  uVar3 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50);
  uVar2 = 0;
  func_0x000101ab0e5c();
  *(undefined8 *)((long)unaff_x20 + lVar5) = uVar2;
  lVar4 = *(long *)((*(ulong *)puVar1 & *unaff_x20) + 0x60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar5 = 0;
  func_0x000107c5fdb8(0,uVar3,uVar2,PTR___ss5ErrorWS_11034ee10);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)unaff_x20 + lVar4,param_1,lVar5);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ab15b4; end: 101ab15e3;  */

void FUN_101ab15b4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_101ab14e4(param_1);
  return;
}



/* Entry: 101ab15e4; end: 101ab164f;  */

void FUN_101ab15e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyGRPCServiceImplementation.GRPCServerStreamingEventHandler",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ab1610);
  (*pcVar1)();
}



/* Entry: 101ab1650; end: 101ab1653;  */

void FUN_101ab1650(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101ab1654; end: 101ab16e7;  */

void FUN_101ab1654(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0x13f;
  func_0x000107c5fcb8(0x13f,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  if (uVar3 < 0x40) {
    lStack_28 = *(long *)(lVar2 + -8) + 0x40;
    func_0x000107c61524(param_1,0,1,&lStack_28,param_1 + 0x60);
  }
  return;
}



/* Entry: 101ab16e8; end: 101ab19ab;  */

/* WARNING: Removing unreachable block (ram,0x000101ab1914) */

void FUN_101ab16e8(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  ulong *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar8 = *unaff_x20;
  uVar9 = *(ulong *)PTR__swift_isaMask_11034f488;
  lVar10 = *(long *)((uVar9 & uVar8) + 0x50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_a0 - extraout_x8;
  uVar7 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar1 = (undefined8 *)0x0;
  lVar6 = lVar10;
  func_0x000107c5fcb8(0,lVar10,uVar7,PTR___ss5ErrorWS_11034ee10);
  lVar13 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar11 - extraout_x8_00;
  if (param_3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar2 = param_3;
    func_0x000107c5bd10();
    if (0 < (long)puVar2) {
      puVar2 = param_3;
      func_0x000107c5bd10();
      puVar3 = param_3;
      func_0x000107c42a50();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000101ab1610();
      puVar5 = &UNK_11043b418;
      func_0x000107c613f8(&UNK_11043b418,puVar3,0,0);
      *puVar3 = puVar2;
      puVar3[1] = 0;
      puVar3[2] = puVar4;
      puVar3[3] = lVar6;
      func_0x000107c61654();
      func_0x000107c61170(param_3);
      goto LAB_101ab192c;
    }
    func_0x000107c61170();
    puVar2 = param_3;
  }
  if (param_2 >> 0x3c < 0xf) {
    (**(code **)(lVar13 + 0x10))
              (lVar12,(long)unaff_x20 +
                      *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60),puVar1
              );
    uStack_80 = 0;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = param_1;
    uStack_70 = param_2;
    func_0x00010006c00c(param_1,param_2);
    uVar7 = *(undefined8 *)((uVar9 & uVar8) + 0x58);
    *(undefined ***)(lVar12 + -0x10) = &PTR_DAT_110789f58;
    func_0x00010457fe00(lVar11,&uStack_78,&puStack_a0,0,100,0,lVar10,
                        PTR___s10Foundation4DataVN_110350ae0,uVar7);
    func_0x000107c5fcb4(lVar11,puVar1);
    (**(code **)(lVar13 + 8))(lVar12,puVar1);
    return;
  }
  func_0x000101ab1610();
  puVar5 = &UNK_11043b418;
  func_0x000107c613f8(&UNK_11043b418,puVar2,0,0);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  func_0x000107c61654();
LAB_101ab192c:
  puStack_a0 = puVar5;
  func_0x000107c614b0(puVar5);
  func_0x000107c5fcb0(&puStack_a0,puVar1);
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101ab19ac; end: 101ab1a53;  */

/* WARNING: Possible PIC construction at 0x000101ab1a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ab1a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ab1a04) */
/* WARNING: Removing unreachable block (ram,0x000101ab1a3c) */

void FUN_101ab19ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    FUN_101ab16e8(0,0xf000000000000000,param_4);
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    param_4 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101ab1a54; end: 101ab1a6f;  */

void FUN_101ab1a54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyGRPCServiceImplementation.GRPCUnaryEventHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ab1c3c);
  (*pcVar1)();
}



/* Entry: 101ab1a70; end: 101ab1aa3;  */

void FUN_101ab1a70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ab1aa4; end: 101ab1b1f;  */

void FUN_101ab1aa4(ulong *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60);
  uVar3 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c5fcb8(0,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
                    /* WARNING: Could not recover jumptable at 0x000101ab1b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + lVar4,lVar2);
  return;
}



/* Entry: 101ab1b20; end: 101ab1b2b;  */

void FUN_101ab1b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e66eb8c);
  return;
}



/* Entry: 101ab1b2c; end: 101ab1bdf;  */

void FUN_101ab1b2c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c614f0();
  lVar4 = *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x60);
  uVar3 = *(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c5fcb8(0,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)unaff_x20 + lVar4,param_1,lVar2);
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ab1be0; end: 101ab1c0f;  */

void FUN_101ab1be0(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_101ab1b2c(param_1);
  return;
}



/* Entry: 101ab1c10; end: 101ab1c3b;  */

void FUN_101ab1c10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyGRPCServiceImplementation.GRPCUnaryEventHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ab1c3c);
  (*pcVar1)();
}



/* Entry: 101ab1c3c; end: 101ab1ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab1c3c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&puStack_70);
  puVar2 = puStack_70;
  puVar1 = puStack_70;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_101ab1ef8();
    func_0x000107c613f8(&UNK_11043b388,puVar1,0,0);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 2) = 0;
    func_0x000107c61654();
    func_0x000107c61434(param_3);
  }
  else {
    func_0x000100083b20(&puStack_70);
    puVar3 = *(undefined8 **)((long)puStack_70 + _DAT_113093a98);
    func_0x000107c61174();
    func_0x000107c61170(puStack_70);
    puVar1 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar1 == (undefined8 *)0x0) {
      FUN_101ab1ef8();
      func_0x000107c613f8(&UNK_11043b388,puVar3,0,0);
      *puVar3 = param_2;
      puVar3[1] = param_3;
      *(undefined1 *)(puVar3 + 2) = 1;
      func_0x000107c61654();
      func_0x000107c61434(param_3);
      func_0x000107c615e8(puVar2);
    }
    else {
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_68);
      puStack_70 = (undefined8 *)0xd00000000000001b;
      uStack_68 = 0x800000010efcfae0;
      func_0x000107c5fb78(param_2,param_3);
      uVar5 = uStack_68;
      puVar3 = puStack_70;
      func_0x000107c5fadc(puStack_70,uStack_68);
      func_0x000107c6142c(uVar5);
      puVar4 = puVar1;
      func_0x000107c4e60c(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c5fadc(param_2,param_3);
      uVar5 = param_2;
      FUN_101aaff2c();
      puVar3 = puVar2;
      func_0x000107c40a28();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar5);
      lVar6 = 0;
      func_0x000101ab2b84();
      lVar7 = lVar6;
      func_0x000107c613fc();
      *(undefined8 **)(lVar7 + 0x10) = puVar3;
      param_1[3] = lVar6;
      param_1[4] = (long)&PTR_DAT_11043b818;
      func_0x000107c615e8(puVar2);
      func_0x000107c615e8(puVar1);
      func_0x000107c615e8(puVar4);
      *param_1 = lVar7;
    }
  }
  return;
}



/* Entry: 101ab1ef8; end: 101ab1f37;  */

void FUN_101ab1ef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df7340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9c67ec;
  func_0x000107c61520(&UNK_10d9c67ec,&UNK_11043b388);
  puRam0000000112df7340 = puVar1;
  return;
}



/* Entry: 101ab1f38; end: 101ab1f97; -[_TtC31LegacyGRPCServiceImplementation31LegacyGRPCServiceImplementation init] */

void FUN_101ab1f38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyGRPCServiceImplementation.LegacyGRPCServiceImplementation",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ab1f64);
  (*pcVar1)();
}



/* Entry: 101ab1f98; end: 101ab1fcf; -[_TtC31LegacyGRPCServiceImplementation31LegacyGRPCServiceImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ab1fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ab1fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab1f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df7338));
  return;
}



/* Entry: 101ab1fd0; end: 101ab1fef;  */

void FUN_101ab1fd0(void)

{
  FUN_101ab1c3c();
  return;
}



/* Entry: 101ab1ff0; end: 101ab200f;  */

void FUN_101ab1ff0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f3018);
  return;
}



/* Entry: 101ab2010; end: 101ab20ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab2010(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_101ab1ff0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112df7338) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112df7348) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_50,puVar1);
  param_1[3] = lVar2;
  param_1[4] = &PTR_DAT_11043b7b8;
  *param_1 = plVar4;
  return;
}



/* Entry: 101ab20ac; end: 101ab20c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab20ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_50;
  lVar4 = 0;
  FUN_101ab1ff0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112df7338) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112df7348) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_50,puVar3);
  param_1[3] = lVar4;
  param_1[4] = &PTR_DAT_11043b7b8;
  *param_1 = plVar6;
  return;
}



/* Entry: 101ab20c4; end: 101ab21fb;  */

void FUN_101ab20c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlFTu_11034fff0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x101ab2238;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF_11034ffe8
    )(plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101ab21fc;
                    /* WARNING: Could not recover jumptable at 0x000101ab21f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101ab2ccc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 101ab21fc; end: 101ab2273;  */

void FUN_101ab21fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ab2234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ab2274; end: 101ab229b;  */

void FUN_101ab2274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ab229c,0,0);
  return;
}



/* Entry: 101ab229c; end: 101ab238f;  */

void FUN_101ab229c(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x88);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101ab2354;
                    /* WARNING: Could not recover jumptable at 0x000101ab2350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101ab20c4(*(undefined8 *)(unaff_x22 + 0x60),0,0,0xd000000000000026,0x800000010efbb370,
                FUN_101ab2f20,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 101ab2390; end: 101ab27ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab2390(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lStack_70;
  long lStack_68;
  
  lVar10 = param_7[2];
  uVar9 = param_7[5];
  uVar7 = param_7[7];
  uVar6 = param_7[0xb];
  uVar3 = 0;
  FUN_101ab1b20(0,param_8,param_9);
  FUN_101ab1be0(param_1,uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5ee20(param_5,param_6);
  if (lVar10 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    lVar4 = 0;
    FUN_101aafa48();
    lVar5 = lVar4;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar5 + _DAT_112df70f8);
    uVar11 = *param_7;
    puVar1[1] = param_7[1];
    *puVar1 = uVar11;
    puVar1[2] = lVar10;
    uVar11 = param_7[3];
    puVar1[4] = param_7[4];
    puVar1[3] = uVar11;
    puVar1[0xb] = param_7[0xb];
    uVar11 = param_7[9];
    puVar1[10] = param_7[10];
    puVar1[9] = uVar11;
    uVar11 = param_7[7];
    puVar1[8] = param_7[8];
    puVar1[7] = uVar11;
    uVar11 = param_7[5];
    puVar1[6] = param_7[6];
    puVar1[5] = uVar11;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar5;
    lStack_68 = lVar4;
    func_0x000107c61434(lVar10);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar6);
    plVar8 = &lStack_70;
    func_0x000107c61154(plVar8,puVar2);
  }
  func_0x000107c61174(param_1);
  func_0x000107c5d1d4(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(plVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101ab2800; end: 101ab2873;  */

void FUN_101ab2800(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined4 *)
           PTR___sScs12ContinuationV15BufferingPolicyO9unboundedyADyxq___GAFms5ErrorR_r0_lFWC_11034fee8
  ;
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  func_0x000107c5fdac(0,param_2,uVar2,PTR___ss5ErrorWS_11034ee10);
                    /* WARNING: Could not recover jumptable at 0x000101ab2870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x68))(param_1,uVar1,lVar3);
  return;
}



/* Entry: 101ab2874; end: 101ab2b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab2874(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  long lStack_68;
  
  lVar11 = param_5[2];
  uStack_b0 = param_5[5];
  uStack_a8 = param_5[7];
  uStack_a0 = param_5[0xb];
  uVar2 = 0x112d393f0;
  uStack_98 = param_3;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  puVar6 = PTR___ss5ErrorWS_11034ee10;
  lVar3 = 0;
  func_0x000107c5fdac(0,param_6,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_b0 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5fdb8(0,param_6,uVar2,puVar6);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar5 - extraout_x8_00;
  FUN_101ab2800(lVar5,param_6);
  FUN_101770e2c(param_2,lVar10,param_6,lVar5,param_6);
  (**(code **)(lVar12 + 8))(lVar5,lVar3);
  FUN_101ab14d8(0,param_6,param_7);
  lVar3 = lVar10;
  FUN_101ab15b4(lVar10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uStack_98;
  func_0x000107c5fadc(uStack_98,param_4);
  if (lVar11 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    lVar12 = 0;
    FUN_101aafa48();
    lVar5 = lVar12;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar5 + _DAT_112df70f8);
    uVar13 = *param_5;
    puVar1[1] = param_5[1];
    *puVar1 = uVar13;
    puVar1[2] = lVar11;
    uVar13 = param_5[3];
    puVar1[4] = param_5[4];
    puVar1[3] = uVar13;
    puVar1[0xb] = param_5[0xb];
    uVar13 = param_5[9];
    puVar1[10] = param_5[10];
    puVar1[9] = uVar13;
    uVar13 = param_5[7];
    puVar1[8] = param_5[8];
    puVar1[7] = uVar13;
    uVar13 = param_5[5];
    puVar1[6] = param_5[6];
    puVar1[5] = uVar13;
    puVar6 = PTR_s_init_1125d9248;
    lStack_70 = lVar5;
    lStack_68 = lVar12;
    func_0x000107c61434(lVar11);
    func_0x000107c61434(uStack_b0);
    func_0x000107c61434(uStack_a8);
    func_0x000107c61434(uStack_a0);
    plVar9 = &lStack_70;
    func_0x000107c61154(plVar9,puVar6);
  }
  func_0x000107c3e8b8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(plVar9);
  lVar11 = 0;
  func_0x000101ab06d0();
  lVar5 = lVar11;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar8;
  puVar6 = &UNK_11043b848;
  func_0x000107c613fc(&UNK_11043b848,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  *(undefined8 *)(puVar6 + 0x18) = param_7;
  *(long *)(puVar6 + 0x20) = lVar5;
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(lVar5);
  func_0x000107c5fda8(FUN_101ab2ef4,puVar6,lVar4);
  param_1[3] = lVar11;
  param_1[4] = (long)&PTR_DAT_11043b460;
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar8);
  *param_1 = lVar5;
  (**(code **)(lVar7 + 8))(lVar10,lVar4);
  return;
}



/* Entry: 101ab2b60; end: 101ab2ba3;  */

void FUN_101ab2b60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ab2ba4; end: 101ab2c4f;  */

void FUN_101ab2ba4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101ab2c50;
  plVar1[0x13] = param_8;
  plVar1[0x14] = lVar2;
  plVar1[0x11] = param_6;
  plVar1[0x12] = param_7;
  plVar1[0xf] = param_4;
  plVar1[0x10] = param_5;
  plVar1[0xd] = param_2;
  plVar1[0xe] = param_3;
  plVar1[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ab229c,0,0);
  return;
}



/* Entry: 101ab2c50; end: 101ab2c8b;  */

void FUN_101ab2c50(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ab2c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ab2c8c; end: 101ab2ccb;  */

void FUN_101ab2c8c(void)

{
  func_0x000101ab2540();
  return;
}



/* Entry: 101ab2ccc; end: 101ab2d37;  */

void FUN_101ab2ccc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c614f0(param_2);
    func_0x000107c5fca8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ab2d38,param_2,param_3);
  return;
}



/* Entry: 101ab2d38; end: 101ab2daf;  */

void FUN_101ab2d38(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101ab2db0;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101ab2dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101ab2db0; end: 101ab2dfb;  */

void FUN_101ab2db0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101ab2df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ab2dfc; end: 101ab2ef3;  */

void FUN_101ab2dfc(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c5fcb8(0,param_6,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x000107c61434(param_5);
  func_0x000107c5fcac(puVar4,param_1,param_4,param_5,param_6,uVar1,PTR___ss5ErrorWS_11034ee10);
  (*param_2)(puVar4);
  (**(code **)(lVar3 + 8))(puVar4,lVar2);
  return;
}



/* Entry: 101ab2ef4; end: 101ab2eff;  */

void FUN_101ab2ef4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf3de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x10),PTR_s_closeStream_1125ad128);
  return;
}



/* Entry: 101ab2f00; end: 101ab2f1f;  */

void FUN_101ab2f00(void)

{
  FUN_101ab0eac();
  return;
}



/* Entry: 101ab2f20; end: 101ab2f4f;  */

void FUN_101ab2f20(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101ab2390(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101ab2f50; end: 101ab2fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab2f50(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df7428) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ab2fbc; end: 101ab301b; -[_TtC45ActiveUserSessionScopedFactoryServiceProvider33SCActiveUserSessionScopedServices init] */

void FUN_101ab2fbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActiveUserSessionScopedFactoryServiceProvider.SCActiveUserSessionScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ab2fe8);
  (*pcVar1)();
}



/* Entry: 101ab301c; end: 101ab302b; -[_TtC45ActiveUserSessionScopedFactoryServiceProvider33SCActiveUserSessionScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab301c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df7428));
  return;
}



/* Entry: 101ab302c; end: 101ab3097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab302c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11043ba70;
  func_0x000107c613fc(&UNK_11043ba70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ab3120,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ab3098; end: 101ab30f7;  */

undefined1  [16] FUN_101ab3098(void)

{
  return ZEXT816(0x11043b9b0);
}



/* Entry: 101ab30f8; end: 101ab311f;  */

void FUN_101ab30f8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ab3120; end: 101ab31ff;  */

void FUN_101ab3120(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ab3200; end: 101ab3233;  */

void FUN_101ab3200(void)

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



/* Entry: 101ab3234; end: 101ab325f;  */

void FUN_101ab3234(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002a6158();
  func_0x000107c613fc();
  FUN_101ab9a78(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ab3260; end: 101ab3293;  */

void FUN_101ab3260(void)

{
  long unaff_x20;
  
  FUN_101ab9f30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101ab3294; end: 101ab329f;  */

void FUN_101ab3294(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101aba5f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("BillboardUIConfigProviderPluginRegistryServiceProvider",0x36,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ab32a0; end: 101ab32e3;  */

void FUN_101ab32a0(void)

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



/* Entry: 101ab32e4; end: 101ab3303;  */

void FUN_101ab32e4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002bdc54();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8868;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efe1e70);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 101ab3304; end: 101ab333f;  */

void FUN_101ab3304(void)

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



/* Entry: 101ab3340; end: 101ab3353;  */

void FUN_101ab3340(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x0001002c4b80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a88a8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efbaa40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1ec0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efe1ef0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101ab3354; end: 101ab33eb;  */

void FUN_101ab3354(void)

{
  long unaff_x20;
  
  FUN_101aba958(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 101ab33ec; end: 101ab340f;  */

/* WARNING: Possible PIC construction at 0x000101abad44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abad54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101abad64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101abad58) */
/* WARNING: Removing unreachable block (ram,0x000101abad48) */
/* WARNING: Removing unreachable block (ram,0x000101abad68) */

void FUN_101ab33ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_11043d530;
  func_0x000107c613fc(&UNK_11043d530,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112df8818;
  func_0x0001000285a8(0x112df8818,&UNK_10d9c8d50);
  func_0x000107c613fc();
  pcVar8 = FUN_101abae44;
  func_0x0001000841fc(FUN_101abae44,puVar6,uVar7);
  func_0x000100084214("ValdiActiveUserScopedServiceRegistryServiceProvider",0x33,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101ab3410; end: 101ab344b;  */

void FUN_101ab3410(void)

{
  long unaff_x20;
  
  FUN_101ab578c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101ab344c; end: 101ab34df;  */

void FUN_101ab344c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100287c84();
  func_0x000107c613fc();
  FUN_101ab3534(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101ab34e0; end: 101ab3533;  */

undefined8 FUN_101ab34e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101ab3534(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101ab3534; end: 101ab360f;  */

void FUN_101ab3534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101b65754(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b65468();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101b65478();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101ab3610; end: 101ab364b;  */

void FUN_101ab3610(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ab364c; end: 101ab369f;  */

void FUN_101ab364c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ab36a0; end: 101ab36e3;  */

undefined1  [16] FUN_101ab36a0(void)

{
  return ZEXT816(0x11043bfb8);
}



/* Entry: 101ab36e4; end: 101ab3737;  */

void FUN_101ab36e4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ab3738; end: 101ab37cf;  */

void FUN_101ab3738(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100288234();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101b65a98();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101b65850();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 101ab37d0; end: 101ab383b;  */

long FUN_101ab37d0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_101b65a98();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_101b65850();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}


