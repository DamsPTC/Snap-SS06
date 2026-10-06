/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101684a90; end: 101684c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101684a90(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c5fb78(0xd000000000000013,0x800000010efb4b00);
    func_0x000107c5fb78(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
    func_0x000107c5fb78(0x20726574666120,0xe700000000000000);
    func_0x000107c5fddc(param_1,&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x4c54542073,0xe500000000000000);
    func_0x000107c6142c(uStack_80);
    uVar5 = *(undefined8 *)(param_3 + _DAT_112dbe508);
    lVar2 = ((undefined8 *)(param_3 + _DAT_112dbe508))[1];
    uVar4 = uVar5;
    func_0x000107c614f0(uVar5);
    uVar1 = *(undefined8 *)(param_3 + _DAT_112dbe588);
    uVar3 = ((undefined8 *)(param_3 + _DAT_112dbe588))[1];
    pcVar6 = *(code **)(lVar2 + 0x28);
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(uVar5);
    (*pcVar6)(param_4,uVar1,uVar3,uVar4,lVar2);
    func_0x000107c615e8(uVar5);
    func_0x000107c6142c(uVar3);
    uVar5 = *(undefined8 *)(param_3 + _DAT_112dbe548);
    *(undefined8 *)(param_3 + _DAT_112dbe548) = 0;
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 101684c28; end: 101684c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101684c28(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  FUN_1016838b0();
  lVar1 = _DAT_112dbe548;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112dbe548) != 0) {
    func_0x000107c498f8();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101684c94; end: 101684cb7; -[_TtC40SponsoredSnapBannerLoggingImplementation31SponsoredSnapBannerEventTracker dealloc] */

void FUN_101684c94(void)

{
  func_0x000107c61174();
  FUN_101684c28();
  return;
}



/* Entry: 101684cb8; end: 101684d87; -[_TtC40SponsoredSnapBannerLoggingImplementation31SponsoredSnapBannerEventTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101684d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101684d5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101684cb8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe508));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe510));
  func_0x0001000834e4(param_1 + _DAT_112dbe518);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe520));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dbe528));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbe540));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112dbe548));
  FUN_101681b5c(param_1 + _DAT_112dbe578);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112dbe580 + 8))
  ;
  return;
}



/* Entry: 101684d88; end: 101684d8f;  */

void FUN_101684d88(void)

{
  if (lRam0000000112dbe5d0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e64b778);
  return;
}



/* Entry: 101684d90; end: 101684dc7;  */

void FUN_101684d90(undefined8 param_1)

{
  if (lRam0000000112dbe5d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e64b778);
  return;
}



/* Entry: 101684dc8; end: 101684df3; -[_TtC40SponsoredSnapBannerLoggingImplementation31SponsoredSnapBannerEventTracker init] */

void FUN_101684dc8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapBannerLoggingImplementation.SponsoredSnapBannerEventTracker",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101684df4);
  (*pcVar1)();
}



/* Entry: 101684df4; end: 101684f2b;  */

void FUN_101684df4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_c0 = &UNK_10d979600;
  puStack_b8 = &UNK_10d979600;
  puStack_b0 = &UNK_10d979618;
  puStack_a8 = &UNK_10d979600;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a0 = &UNK_10d979630;
  puStack_88 = &UNK_10d979648;
  puStack_80 = &UNK_10d979648;
  puStack_70 = &UNK_10d979660;
  puStack_68 = &UNK_10d979660;
  puStack_60 = &UNK_10d979678;
  puStack_58 = &UNK_10d979660;
  lVar2 = 0x13f;
  puStack_98 = puVar1;
  puStack_90 = puVar1;
  puStack_78 = puVar1;
  func_0x000101684ed8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar2 + -8) + 0x40;
    puStack_48 = &UNK_10d979690;
    puStack_38 = PTR___sBbWV_11034d660 + 0x40;
    puStack_40 = &UNK_10d979690;
    puStack_30 = &UNK_10d9796a8;
    puStack_28 = puVar1;
    func_0x000107c61630(param_1,0x100,0x14,&puStack_c0,param_1 + 0x50);
  }
  return;
}



/* Entry: 101684f2c; end: 1016851d7;  */

int FUN_101684f2c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101684fa8;
        goto LAB_101684f8c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101684f8c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101684fa8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1016851d8; end: 101685217;  */

void FUN_1016851d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9796f8;
  func_0x000107c61520(&UNK_10d9796f8,&UNK_1103f2660);
  puRam0000000112dbe5e8 = puVar1;
  return;
}



/* Entry: 101685218; end: 10168521b;  */

void FUN_101685218(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d979760;
  func_0x000107c61520(&UNK_10d979760,&UNK_1103f25d0);
  puRam0000000112dbe5f0 = puVar1;
  return;
}



/* Entry: 10168521c; end: 10168525b;  */

void FUN_10168521c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d979760;
  func_0x000107c61520(&UNK_10d979760,&UNK_1103f25d0);
  puRam0000000112dbe5f0 = puVar1;
  return;
}



/* Entry: 10168525c; end: 10168525f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168525c(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b91d00();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_101683034();
  lVar2 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,auStack_68,0,0);
  FUN_101685588(unaff_x20 + lVar2,puVar7);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_101681b5c(puVar7);
  }
  else {
    func_0x0001016855d8(puVar7,lVar6);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe510);
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dbe510))[1];
    func_0x000107c614f0(uVar5);
    lVar3 = _DAT_112dbe590;
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112dbe558);
    func_0x000107c61428(unaff_x20 + _DAT_112dbe590,auStack_80,0,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    pcVar10 = *(code **)(lVar2 + 8);
    func_0x000107c61434(uVar9);
    (*pcVar10)(lVar6,1,uVar1,uVar9,uVar5,lVar2);
    func_0x000107c6142c(uVar9);
    func_0x00010168561c(lVar6);
  }
  FUN_101683184();
  return;
}



/* Entry: 101685260; end: 1016852eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101685260(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbe508);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dbe508))[1];
  func_0x000107c614f0(uVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dbe588);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112dbe588))[1];
  pcVar5 = *(code **)(lVar2 + 0x28);
  func_0x000107c61434(uVar3);
  (*pcVar5)(param_1,uVar1,uVar3,uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1016852ec; end: 1016852ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016852ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112dbe418;
  uStack_80 = param_4;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_80 - extraout_x8;
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x2e);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd000000000000019;
  uStack_70 = 0x800000010efb4bc0;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    lVar2 = -0x1d00000000000000;
    uVar6 = 0x612f6e;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar6,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c5fb78(0xd000000000000011,0x800000010efb4be0);
  lVar2 = _DAT_112dbe568;
  if ((*(char *)(unaff_x20 + _DAT_112dbe568) == '\x01') &&
     (*(char *)(unaff_x20 + _DAT_112dbe570) == '\0')) {
    uVar5 = 0xe400000000000000;
    uVar6 = 0x65757274;
  }
  else {
    uVar5 = 0xe500000000000000;
    uVar6 = 0x65736c6166;
  }
  func_0x000107c5fb78(uVar6,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uStack_70);
  func_0x000101681be8(param_1,lVar4);
  lVar3 = 0;
  func_0x000100b91d00();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar4,0,1,lVar3);
  lVar3 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,&uStack_78,0x21,0);
  func_0x000101685658(lVar4,unaff_x20 + lVar3);
  func_0x000107c614a8(&uStack_78);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe580);
  uVar6 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe588);
  uVar6 = puVar1[1];
  *puVar1 = uStack_80;
  puVar1[1] = param_5;
  func_0x000107c61434(param_5);
  func_0x000107c6142c(uVar6);
  if ((*(char *)(unaff_x20 + lVar2) == '\x01') && (*(char *)(unaff_x20 + _DAT_112dbe570) == '\0')) {
    FUN_1016836b4(param_1);
  }
  return;
}



/* Entry: 1016852f0; end: 10168540f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016852f0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dbe508);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dbe508))[1];
  func_0x000107c614f0(uVar4);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dbe588);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112dbe588))[1];
  pcVar5 = *(code **)(lVar2 + 0x20);
  func_0x000107c61434(uVar3);
  (*pcVar5)(param_1,uVar1,uVar3,uVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101685410; end: 101685473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101685410(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dbe518;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x18))(param_1,param_2,uVar2,lVar3);
  return;
}



/* Entry: 101685474; end: 1016854c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101685474(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dbe518;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(param_1,uVar2,lVar3);
  return;
}



/* Entry: 1016854c8; end: 10168552b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016854c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dbe518;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(param_1,param_2,uVar2,lVar3);
  return;
}



/* Entry: 10168552c; end: 10168554f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168552c(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112dbe568) = 2;
  FUN_101683034();
  lVar2 = _DAT_112dbe540;
  uVar6 = 0;
  if (*(long *)(unaff_x20 + _DAT_112dbe540) != 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112dbe558) & 1) == 0) {
      lVar1 = unaff_x20 + _DAT_112dbe578;
      func_0x000107c61428(lVar1,auStack_58,0,0);
      lVar4 = 0;
      func_0x000100b91d00();
      lVar5 = lVar1;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
      if ((int)lVar5 == 0) {
        bVar3 = *(int *)(lVar1 + *(int *)(lVar4 + 0x48)) == 7;
      }
      else {
        bVar3 = false;
      }
      lVar1 = unaff_x20 + _DAT_112dbe518;
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar6);
      (**(code **)(lVar5 + 0x20))(0,bVar3,uVar6,lVar5);
      uVar6 = 0;
      if (*(long *)(unaff_x20 + lVar2) == 0) goto LAB_101683998;
    }
    func_0x000107c498f8();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  }
LAB_101683998:
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112dbe550) = 0;
  return;
}



/* Entry: 101685550; end: 10168555f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101685550(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b91d00();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _DAT_112dbe568) = 1;
  lVar2 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,auStack_58,0,0);
  FUN_101685588(unaff_x20 + lVar2,puVar6);
  puVar4 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_101681b5c(puVar6);
  }
  else {
    func_0x0001016855d8(puVar6,lVar5);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dbe598);
    if (*(char *)(puVar1 + 1) == '\x01') {
      func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112dbe528));
      FUN_1016860bc();
      *puVar1 = param_1;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
    if ((*(byte *)(unaff_x20 + _DAT_112dbe558) & 1) == 0) {
      FUN_101683b38(lVar5);
    }
    func_0x00010168561c(lVar5);
  }
  return;
}



/* Entry: 101685560; end: 101685583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101685560(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112dbe568) = 3;
  FUN_101683034();
  lVar2 = _DAT_112dbe540;
  uVar6 = 0;
  if (*(long *)(unaff_x20 + _DAT_112dbe540) != 0) {
    if ((*(byte *)(unaff_x20 + _DAT_112dbe558) & 1) == 0) {
      lVar1 = unaff_x20 + _DAT_112dbe578;
      func_0x000107c61428(lVar1,auStack_58,0,0);
      lVar4 = 0;
      func_0x000100b91d00();
      lVar5 = lVar1;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
      if ((int)lVar5 == 0) {
        bVar3 = *(int *)(lVar1 + *(int *)(lVar4 + 0x48)) == 7;
      }
      else {
        bVar3 = false;
      }
      lVar1 = unaff_x20 + _DAT_112dbe518;
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar6);
      (**(code **)(lVar5 + 0x20))(0,bVar3,uVar6,lVar5);
      uVar6 = 0;
      if (*(long *)(unaff_x20 + lVar2) == 0) goto LAB_101683998;
    }
    func_0x000107c498f8();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  }
LAB_101683998:
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar6);
  *(undefined8 *)(unaff_x20 + _DAT_112dbe550) = 0;
  return;
}



/* Entry: 101685584; end: 101685587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101685584(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000100b91d00();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(unaff_x20 + _DAT_112dbe568) = 3;
  FUN_101683034();
  lVar2 = _DAT_112dbe578;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe578,auStack_68,0,0);
  FUN_101685588(unaff_x20 + lVar2,puVar7);
  puVar4 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_101681b5c(puVar7);
  }
  else {
    func_0x0001016855d8(puVar7,lVar6);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe510);
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dbe510))[1];
    func_0x000107c614f0(uVar5);
    lVar3 = _DAT_112dbe590;
    uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112dbe558);
    func_0x000107c61428(unaff_x20 + _DAT_112dbe590,auStack_80,0,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
    pcVar10 = *(code **)(lVar2 + 8);
    func_0x000107c61434(uVar9);
    (*pcVar10)(lVar6,1,uVar1,uVar9,uVar5,lVar2);
    func_0x000107c6142c(uVar9);
    func_0x00010168561c(lVar6);
  }
  FUN_101683184();
  return;
}



/* Entry: 101685588; end: 1016856a7;  */

undefined8 FUN_101685588(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1016856a8; end: 1016857bf;  */

undefined * FUN_1016856a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016857c0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dbe5f8;
    func_0x0001000285a8(0x112dbe5f8,&UNK_10d9797e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016857c0; end: 10168584f;  */

undefined8 FUN_1016857c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbe418;
  func_0x0001000285a8(0x112dbe418,&UNK_10d990420);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101685850; end: 10168586b;  */

void FUN_101685850(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10168586c; end: 1016858bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168586c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000100b91d00();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar7 + 7 & 0xffffffffffffff8));
  lVar5 = unaff_x20 + uVar7;
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c5fb78(0xd000000000000013,0x800000010efb4b00);
    func_0x000107c5fb78(*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x30));
    func_0x000107c5fb78(0x20726574666120,0xe700000000000000);
    func_0x000107c5fddc(uVar9,&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x4c54542073,0xe500000000000000);
    func_0x000107c6142c(uStack_80);
    uVar9 = *(undefined8 *)(lVar6 + _DAT_112dbe508);
    lVar2 = ((undefined8 *)(lVar6 + _DAT_112dbe508))[1];
    uVar4 = uVar9;
    func_0x000107c614f0(uVar9);
    uVar1 = *(undefined8 *)(lVar6 + _DAT_112dbe588);
    uVar3 = ((undefined8 *)(lVar6 + _DAT_112dbe588))[1];
    pcVar8 = *(code **)(lVar2 + 0x28);
    func_0x000107c61434(uVar3);
    func_0x000107c615f0(uVar9);
    (*pcVar8)(lVar5,uVar1,uVar3,uVar4,lVar2);
    func_0x000107c615e8(uVar9);
    func_0x000107c6142c(uVar3);
    uVar9 = *(undefined8 *)(lVar6 + _DAT_112dbe548);
    *(undefined8 *)(lVar6 + _DAT_112dbe548) = 0;
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar9);
  }
  return;
}



/* Entry: 1016858c0; end: 1016858f7;  */

undefined1 FUN_1016858c0(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1016858f8; end: 10168593b;  */

long FUN_1016858f8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a77a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 10168593c; end: 1016859ef;  */

/* WARNING: Possible PIC construction at 0x0001016859d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016859d4) */

void FUN_10168593c(ulong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  bVar1 = (param_1 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar1) {
    uVar3 = 0x65736c6166;
  }
  uVar4 = 0xe400000000000000;
  if (bVar1) {
    uVar4 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  uVar4 = 0x65757274;
  func_0x000107c5fadc(0x65757274,0xe400000000000000);
  func_0x0001053c1204(uVar5,uVar2,uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1016859f0; end: 101685aa7;  */

/* WARNING: Possible PIC construction at 0x000101685a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101685a88) */

void FUN_1016859f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar5 = (uint)param_2;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101685aa8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar3 = 0x65736c6166;
  func_0x000107c5fadc(0x65736c6166,0xe500000000000000);
  bVar2 = (uVar5 & 0xff) != 1;
  uVar4 = 0;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe000000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001053c1204(uVar6,param_1,uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101685aa8; end: 101685c37;  */

/* WARNING: Possible PIC construction at 0x000101685da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101685fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101685fdc) */

undefined1  [16] FUN_101685aa8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *in_x12;
  undefined *in_x13;
  undefined *in_x14;
  undefined *in_x15;
  ulong in_x16;
  ulong unaff_x19;
  undefined *unaff_x20;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  puVar6 = (undefined *)0xee00646964656566;
  puVar3 = (undefined *)0x5f676e697373696d;
  pcVar9 = (char *)(param_1 & 0xff);
  puVar10 = &UNK_10d9797f0;
  puVar12 = (undefined *)(ulong)(byte)(&UNK_10d9797f0)[(long)pcVar9];
  puVar11 = (undefined *)((long)puVar12 * 4 + 0x101685ae8);
  puVar4 = puVar3;
  puVar7 = puVar6;
  puVar5 = unaff_x22;
  switch(pcVar9) {
  case (char *)0x0:
    goto code_r0x000101685bd8;
  default:
    pcVar9 = "missing_native_message";
  case (char *)0x1f:
  case (char *)0x27:
  case (char *)0x9b:
  case (char *)0xa3:
code_r0x000101685be4:
    pcVar9 = pcVar9 + -0x20;
code_r0x000101685be8:
    puVar6 = (undefined *)((ulong)pcVar9 | 0x8000000000000000);
    pcVar9 = (char *)0x17;
code_r0x000101685bf0:
    auVar18._0_8_ = ((ulong)pcVar9 | 0xd000000000000000) - 1;
    auVar18._8_8_ = puVar6;
    return auVar18;
  case (char *)0x2:
  case (char *)0x17:
    puVar6 = (undefined *)0x800000010efb4e90;
  case (char *)0x21:
  case (char *)0x9d:
    puVar3 = (undefined *)0xd000000000000014;
code_r0x000101685b70:
    auVar15._8_8_ = puVar6;
    auVar15._0_8_ = puVar3;
    return auVar15;
  case (char *)0x3:
    puVar3 = (undefined *)0xd000000000000017;
    pcVar9 = "missing_adresponsebytes";
  case (char *)0x11:
code_r0x000101685c0c:
    auVar19._8_8_ = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = puVar3;
    return auVar19;
  case (char *)0x4:
    pcVar9 = "ntext";
  case (char *)0xfc:
    pcVar9 = pcVar9 + 0xe50;
code_r0x000101685b0c:
    puVar6 = (undefined *)((ulong)pcVar9 | 0x8000000000000000);
    pcVar9 = (char *)0xd000000000000017;
code_r0x000101685b18:
    auVar13._0_8_ = pcVar9 + -5;
    auVar13._8_8_ = puVar6;
    return auVar13;
  case (char *)0x5:
    pcVar9 = "missing_serveitemid";
  case (char *)0x15:
    auVar16._8_8_ = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
    auVar16._0_8_ = 0xd000000000000013;
    return auVar16;
  case (char *)0x6:
    pcVar9 = "missing_conversationid";
    goto code_r0x000101685be4;
  case (char *)0x7:
    puVar3 = (undefined *)0xd000000000000017;
    pcVar9 = "missing_adsyncattemptid";
    goto code_r0x000101685c0c;
  case (char *)0x8:
  case (char *)0x5b:
  case (char *)0xd3:
    puVar6 = (undefined *)0x800000010efb4dd0;
  case (char *)0x16:
  case (char *)0xe1:
    puVar3 = (undefined *)0xd000000000000011;
code_r0x000101685c34:
    auVar20._8_8_ = puVar6;
    auVar20._0_8_ = puVar3;
    return auVar20;
  case (char *)0x9:
    puVar3 = (undefined *)0xd000000000000017;
    pcVar9 = "missing_profileimageurl";
  case (char *)0xe:
    goto code_r0x000101685c0c;
  case (char *)0xa:
    puVar3 = (undefined *)0xd000000000000017;
  case (char *)0x53:
    pcVar9 = "ntext";
code_r0x000101685c08:
    pcVar9 = pcVar9 + 0xd70;
    goto code_r0x000101685c0c;
  case (char *)0xb:
    pcVar9 = "missing_advert_userid";
    break;
  case (char *)0xc:
    pcVar9 = "missing_adentity";
  case (char *)0x12:
  case (char *)0x30:
    puVar6 = (undefined *)((ulong)(pcVar9 + -0x20) | 0x8000000000000000);
    pcVar9 = (char *)0x17;
code_r0x000101685b34:
    puVar3 = (undefined *)(((ulong)pcVar9 | 0xd000000000000000) - 7);
code_r0x000101685b3c:
    auVar14._8_8_ = puVar6;
    auVar14._0_8_ = puVar3;
    return auVar14;
  case (char *)0xd:
    pcVar9 = "missing_brand_subtext";
    break;
  case (char *)0x10:
    goto code_r0x000101685b70;
  case (char *)0x13:
    break;
  case (char *)0x14:
    goto code_r0x000101685be8;
  case (char *)0x18:
    goto code_r0x000101685c08;
  case (char *)0x19:
    goto code_r0x000101685b0c;
  case (char *)0x1a:
    goto code_r0x000101685b34;
  case (char *)0x1c:
    goto code_r0x000101685b3c;
  case (char *)0x1d:
    goto code_r0x000101685d28;
  case (char *)0x1e:
  case (char *)0x26:
  case (char *)0x9a:
  case (char *)0xa2:
    goto code_r0x000101685d84;
  case (char *)0x20:
    auVar24._8_8_ = 0xee0064656c696566;
    auVar24._0_8_ = 0x5f64615f79616c70;
    return auVar24;
  case (char *)0x22:
  case (char *)0x9e:
    auVar21._8_8_ = 0xee00646964656566;
    auVar21._0_8_ = 0x616e73647373696d;
    return auVar21;
  case (char *)0x24:
    auVar25._8_8_ = 0x800000010efb4d30;
    auVar25._0_8_ = 0x5f676e697373696d;
    return auVar25;
  case (char *)0x25:
  case (char *)0x99:
  case (char *)0xa1:
    goto code_r0x000101685d24;
  case (char *)0x40:
  case (char *)0x49:
  case (char *)0x70:
  case (char *)0x79:
  case (char *)0xc0:
  case (char *)0xc9:
  case (char *)0xda:
    goto code_r0x000101685c34;
  case (char *)0x41:
  case (char *)0x4c:
  case (char *)0x56:
  case (char *)0x71:
  case (char *)0x7c:
  case (char *)0x85:
  case (char *)0xc1:
  case (char *)0xcc:
    goto code_r0x000101685ca8;
  case (char *)0x42:
  case (char *)0x45:
  case (char *)0x5c:
  case (char *)0x72:
  case (char *)0x75:
  case (char *)0x8b:
  case (char *)0xc2:
  case (char *)0xc5:
  case (char *)0xd4:
  case (char *)0xe3:
    goto code_r0x000101685ca4;
  case (char *)0x43:
  case (char *)0x4a:
  case (char *)0x4f:
  case (char *)0x50:
  case (char *)0x59:
  case (char *)0x73:
  case (char *)0x7a:
  case (char *)0x7f:
  case (char *)0x80:
  case (char *)0x8c:
  case (char *)0xc3:
  case (char *)0xca:
  case (char *)0xcf:
  case (char *)0xd0:
  case (char *)0xd8:
    goto code_r0x000101685ca0;
  case (char *)0x44:
  case (char *)0x74:
  case (char *)0x88:
  case (char *)0x89:
  case (char *)0xc4:
    goto code_r0x000101685cb4;
  case (char *)0x46:
  case (char *)0x52:
  case (char *)0x54:
  case (char *)0x60:
  case (char *)0x76:
  case (char *)0x82:
  case (char *)0x86:
  case (char *)0x8e:
  case (char *)0x93:
  case (char *)0xc6:
  case (char *)0xd2:
  case (char *)0xdc:
  case (char *)0xe2:
  case (char *)0xe8:
    goto code_r0x000101685cb0;
  case (char *)0x47:
  case (char *)0x51:
  case (char *)0x58:
  case (char *)0x5a:
  case (char *)0x5f:
  case (char *)0x77:
  case (char *)0x81:
  case (char *)0x87:
  case (char *)0x92:
  case (char *)0xc7:
  case (char *)0xd1:
  case (char *)0xdb:
  case (char *)0xe0:
  case (char *)0xe7:
    goto code_r0x000101685c7c;
  case (char *)0x48:
  case (char *)0x78:
  case (char *)0xc8:
  case (char *)0xe6:
    goto code_r0x000101685c78;
  case (char *)0x4b:
  case (char *)0x4e:
  case (char *)0x55:
  case (char *)0x7b:
  case (char *)0x7e:
  case (char *)0x8f:
  case (char *)0xcb:
  case (char *)0xce:
    goto code_r0x000101685c6c;
  case (char *)0x4d:
  case (char *)0x7d:
  case (char *)0xcd:
    goto code_r0x000101685bf0;
  case (char *)0x57:
    goto code_r0x000101685c88;
  case (char *)0x5d:
  case (char *)0x5e:
  case (char *)0xd5:
  case (char *)0xd6:
  case (char *)0xd9:
    goto code_r0x000101685c84;
  case (char *)0x83:
    goto code_r0x000101685c0c;
  case (char *)0x84:
    goto code_r0x000101685c9c;
  case (char *)0x8a:
  case (char *)0xd7:
  case (char *)0xde:
  case (char *)0xe5:
    goto code_r0x000101685c8c;
  case (char *)0x8d:
    unaff_x19 = *(ulong *)(unaff_x20 + 0x10);
    pcVar9 = (char *)0x6d;
    puVar10 = (undefined *)0xeb00000000656c69;
    puVar11 = (undefined *)0x72705f706174;
    goto code_r0x000101685c6c;
  case (char *)0x90:
  case (char *)0xdf:
    goto code_r0x000101685c74;
  case (char *)0x91:
    goto code_r0x000101685c94;
  case (char *)0x98:
    auVar22._8_8_ = (ulong)(pcVar9 + 0xcf0) | 0x8000000000000000;
    auVar22._0_8_ = 0xd000000000000015;
    return auVar22;
  case (char *)0x9c:
    puVar10 = (undefined *)(ulong)((uint)unaff_x23 & 0xffff | 0x65750000);
    unaff_x22 = puVar10;
    if ((bool)in_ZR) {
      unaff_x22 = (undefined *)0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if ((bool)in_ZR) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fadc(unaff_x22,uVar1);
    func_0x000107c6142c(uVar1);
    bVar2 = (unaff_x19 & 1) == 0;
    if (bVar2) {
      puVar10 = (undefined *)0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (bVar2) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fadc(puVar10,uVar1);
    func_0x000107c6142c(uVar1);
    puVar6 = unaff_x22;
    func_0x0001053c1784();
    goto code_r0x000107c61170;
  case (char *)0xa0:
    goto code_r0x000101685d48;
  case (char *)0xb0:
  case (char *)0xf0:
    goto code_r0x000101685d20;
  case (char *)0xb1:
    func_0x000107c61170();
  case (char *)0xf1:
  case (char *)0xf9:
    goto code_r0x000107c61170;
  case (char *)0xb2:
  case (char *)0xf2:
  case (char *)0xfa:
    auVar23._8_8_ = 0x800000010efb4cb0;
    auVar23._0_8_ = 0xd000000000000010;
    return auVar23;
  case (char *)0xb4:
  case (char *)0xf4:
    goto code_r0x000101685b18;
  case (char *)0xdd:
  case (char *)0xe4:
    goto code_r0x000101685cc0;
  case (char *)0xf8:
    goto code_r0x000101685d38;
  }
  puVar6 = (undefined *)((ulong)(pcVar9 + -0x20) | 0x8000000000000000);
  puVar3 = (undefined *)0xd000000000000015;
code_r0x000101685bd8:
  auVar17._8_8_ = puVar6;
  auVar17._0_8_ = puVar3;
  return auVar17;
code_r0x000101685c6c:
  puVar11 = (undefined *)((ulong)puVar11 | 0x666f000000000000);
  puVar12 = (undefined *)0x6863;
code_r0x000101685c74:
  puVar12 = (undefined *)((ulong)puVar12 | 0x656d0000);
code_r0x000101685c78:
  puVar12 = (undefined *)((ulong)puVar12 | 0x746e00000000);
code_r0x000101685c7c:
  puVar12 = (undefined *)((ulong)puVar12 | 0xee00000000000000);
  in_x12 = (undefined *)0x6174;
code_r0x000101685c84:
  in_x12 = (undefined *)((ulong)in_x12 & 0xffffffff0000ffff | 0x5f700000);
code_r0x000101685c88:
  in_x12 = (undefined *)((ulong)in_x12 & 0xffff0000ffffffff | 0x746100000000);
code_r0x000101685c8c:
  in_x12 = (undefined *)((ulong)in_x12 & 0xffffffffffff | 0x6174000000000000);
  in_ZR = (int)pcVar9 == 3;
code_r0x000101685c94:
  in_x13 = (undefined *)0x737369;
code_r0x000101685c9c:
  in_x13 = (undefined *)((ulong)in_x13 & 0xffffffffffff | 0xeb00000000000000);
code_r0x000101685ca0:
  in_x14 = (undefined *)0x6174;
code_r0x000101685ca4:
  in_x14 = (undefined *)((ulong)in_x14 & 0xffffffff0000ffff | 0x5f700000);
code_r0x000101685ca8:
  in_x14 = (undefined *)((ulong)in_x14 & 0xffffffff | 0x6d73696400000000);
code_r0x000101685cb0:
  in_x15 = (undefined *)0x73;
code_r0x000101685cb4:
  in_x15 = (undefined *)((ulong)in_x15 & 0xffffffffffff | 0xe900000000000000);
  in_x16 = 0x676e6f6c;
code_r0x000101685cc0:
  if (!(bool)in_ZR) {
    in_x13 = in_x15;
    in_x14 = (undefined *)(in_x16 & 0xffffffff | 0x7365727000000000);
  }
  uVar8 = (uint)pcVar9;
  if (uVar8 != 2) {
    puVar12 = in_x13;
    in_x12 = in_x14;
  }
  if (uVar8 != 0) {
    puVar10 = (undefined *)0xe800000000000000;
    puVar11 = (undefined *)0x79646f625f706174;
  }
  unaff_x20 = in_x12;
  if (uVar8 < 2) {
    puVar12 = puVar10;
    unaff_x20 = puVar11;
  }
  puVar7 = puVar12;
  func_0x000107c5fadc(unaff_x20);
  func_0x000107c6142c(puVar12);
  unaff_x22 = puVar6;
code_r0x000101685d20:
  puVar4 = unaff_x22;
  unaff_x22 = puVar4;
code_r0x000101685d24:
  FUN_101685dc8(puVar4);
code_r0x000101685d28:
  puVar3 = (undefined *)0x0;
  if (puVar7 != (undefined *)0x0) {
    puVar3 = puVar4;
  }
  unaff_x21 = (undefined *)0xe000000000000000;
  if (puVar7 != (undefined *)0x0) {
    unaff_x21 = puVar7;
  }
code_r0x000101685d38:
  puVar4 = unaff_x21;
  func_0x000107c5fadc(puVar3,puVar4);
  unaff_x23 = puVar3;
code_r0x000101685d48:
  func_0x000107c6142c(puVar4);
  bVar2 = ((ulong)unaff_x22 & 0xff) != 0;
  puVar5 = (undefined *)0x65757274;
  if (bVar2) {
    puVar5 = (undefined *)0x65736c6166;
  }
  puVar3 = (undefined *)0xe400000000000000;
  if (bVar2) {
    puVar3 = (undefined *)0xe500000000000000;
  }
  func_0x000107c5fadc(puVar5,puVar3);
code_r0x000101685d84:
  unaff_x22 = unaff_x20;
  func_0x000107c6142c(puVar3);
  puVar6 = unaff_x22;
  func_0x0001053c14c4(unaff_x19,unaff_x22,unaff_x23,puVar5,1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  auVar26._8_8_ = puVar6;
  auVar26._0_8_ = unaff_x22;
  return auVar26;
}



/* Entry: 101685c38; end: 101685dc7;  */

/* WARNING: Possible PIC construction at 0x000101685da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101685da8) */

void FUN_101685c38(byte param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = -0x14ffffffff9a9397;
  lVar9 = -0x14ffffffff8c8c97;
  uVar7 = 0x6d7369645f706174;
  if (param_1 != 3) {
    lVar9 = -0x16ffffffffffff8d;
    uVar7 = 0x73657270676e6f6c;
  }
  lVar1 = -0x11ff8b919a92979d;
  uVar4 = 0x617474615f706174;
  if (param_1 != 2) {
    lVar1 = lVar9;
    uVar4 = uVar7;
  }
  uVar7 = 0x666f72705f706174;
  if (param_1 != 0) {
    lVar8 = -0x1800000000000000;
    uVar7 = 0x79646f625f706174;
  }
  if (param_1 < 2) {
    lVar1 = lVar8;
    uVar4 = uVar7;
  }
  lVar9 = lVar1;
  func_0x000107c5fadc(uVar4);
  func_0x000107c6142c(lVar1);
  uVar5 = param_2;
  FUN_101685dc8(param_2);
  uVar6 = 0;
  if (lVar9 != 0) {
    uVar6 = uVar5;
  }
  lVar8 = -0x2000000000000000;
  if (lVar9 != 0) {
    lVar8 = lVar9;
  }
  func_0x000107c5fadc(uVar6,lVar8);
  func_0x000107c6142c(lVar8);
  bVar3 = (param_2 & 0xff) != 0;
  uVar7 = 0x65757274;
  if (bVar3) {
    uVar7 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar7,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x0001053c14c4(uVar10,uVar4,uVar6,uVar7,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 101685dc8; end: 101685f43;  */

/* WARNING: Possible PIC construction at 0x0001016861dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016862c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016862d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101685fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010168611c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101685fdc) */
/* WARNING: Removing unreachable block (ram,0x0001016862d8) */
/* WARNING: Removing unreachable block (ram,0x0001016862c8) */
/* WARNING: Removing unreachable block (ram,0x0001016861e0) */
/* WARNING: Removing unreachable block (ram,0x000101686120) */

undefined1  [16] FUN_101685dc8(ulong param_1)

{
  bool in_ZR;
  undefined *puVar1;
  ulong uVar2;
  char *pcVar4;
  ulong uVar5;
  ulong unaff_x19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined *puVar3;
  
  param_1 = param_1 & 0xff;
  pcVar4 = "\x1a";
  uVar5 = (ulong)(byte)(&UNK_10d9797fe)[param_1] * 4 + 0x101685de8;
  uVar2 = param_1;
  switch(param_1) {
  case 0:
    goto code_r0x000101685e50;
  default:
    pcVar4 = "missing_publicprofileid";
  case 0x11:
  case 0x19:
  case 0x8d:
  case 0x95:
    param_1 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    pcVar4 = (char *)0x5;
    uVar5 = 0xd000000000000012;
    goto code_r0x000101685e04;
  case 2:
    param_1 = 0xd000000000000012;
  case 0xf6:
    pcVar4 = "missing_adclientid";
    break;
  case 3:
    pcVar4 = "missing_advert_userid";
    goto code_r0x000101685e8c;
  case 4:
  case 0x22:
    pcVar4 = "profile_launch_failed";
code_r0x000101685e8c:
    auVar10._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000015;
    return auVar10;
  case 5:
    auVar12._8_8_ = 0xee0064656c696166;
    auVar12._0_8_ = 0x5f64615f79616c70;
    return auVar12;
  case 6:
    pcVar4 = "attachment_open_failed";
  case 0x3f:
  case 0x6f:
  case 0xbf:
    uVar2 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    param_1 = 0xd000000000000016;
code_r0x000101685f04:
    auVar13._8_8_ = uVar2;
    auVar13._0_8_ = param_1;
    return auVar13;
  case 7:
    auVar11._8_8_ = 0x800000010efb4cb0;
    auVar11._0_8_ = 0xd000000000000010;
    return auVar11;
  case 8:
  case 0xd3:
    param_1 = 0xd000000000000012;
    pcVar4 = "ntext";
  case 0x32:
  case 0x3b:
  case 0x62:
  case 0x6b:
  case 0xb2:
  case 0xbb:
  case 0xcc:
    pcVar4 = pcVar4 + 0xcb0;
    break;
  case 9:
    uVar2 = 0xea00000000006567;
    param_1 = 0x6d5f6f6e;
  case 0x13:
  case 0x8f:
    auVar9._0_8_ = param_1 | 0x6173736500000000;
    auVar9._8_8_ = uVar2;
    return auVar9;
  case 10:
    pcVar4 = "ntext";
  case 0x75:
    param_1 = (ulong)(pcVar4 + 0xc70) | 0x8000000000000000;
code_r0x000101685f18:
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = 0xd000000000000011;
    return auVar14;
  case 0xb:
    uVar2 = 0xe900000000000070;
    param_1 = 0x6f6e;
  case 0xa6:
  case 0xe6:
    auVar7._0_8_ = param_1 | 0x616e7364615f0000;
    auVar7._8_8_ = uVar2;
    return auVar7;
  case 0xc:
    pcVar4 = "attach_build_failed";
  case 0xe:
    uVar2 = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    param_1 = 0xd000000000000013;
    goto code_r0x000101685e50;
  case 0xf:
    goto code_r0x000101686028;
  case 0x10:
  case 0x18:
  case 0x8c:
  case 0x94:
    uVar2 = param_1;
    FUN_101685f44();
    auVar18._8_8_ = uVar2;
    auVar18._0_8_ = param_1;
    return auVar18;
  case 0x12:
    goto code_r0x0001016861c8;
  case 0x14:
  case 0x90:
    goto code_r0x000107c61170;
  case 0x16:
    uVar2 = param_1;
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar2);
    }
    uVar2 = param_1;
    unaff_x24 = param_1;
    if (unaff_x23 != 0) goto code_r0x0001016861a4;
    goto LAB_1016861b0;
  case 0x17:
  case 0x8b:
  case 0x93:
    goto code_r0x000101686024;
  case 0x33:
  case 0x3e:
  case 0x48:
  case 99:
  case 0x6e:
  case 0x77:
  case 0xb3:
  case 0xbe:
    goto code_r0x000101685fa8;
  case 0x34:
  case 0x37:
  case 0x4e:
  case 100:
  case 0x67:
  case 0x7d:
  case 0xb4:
  case 0xb7:
  case 0xc6:
  case 0xd5:
    goto code_r0x000101685fa4;
  case 0x35:
  case 0x3c:
  case 0x41:
  case 0x42:
  case 0x4b:
  case 0x65:
  case 0x6c:
  case 0x71:
  case 0x72:
  case 0x7e:
  case 0xb5:
  case 0xbc:
  case 0xc1:
  case 0xc2:
  case 0xca:
    goto code_r0x000101685fa0;
  case 0x36:
  case 0x66:
  case 0x7a:
  case 0x7b:
  case 0xb6:
    goto code_r0x000101685fb4;
  case 0x38:
  case 0x44:
  case 0x46:
  case 0x52:
  case 0x68:
  case 0x74:
  case 0x78:
  case 0x80:
  case 0x85:
  case 0xb8:
  case 0xc4:
  case 0xce:
  case 0xd4:
  case 0xda:
    goto code_r0x000101685fb0;
  case 0x39:
  case 0x43:
  case 0x4a:
  case 0x4c:
  case 0x51:
  case 0x69:
  case 0x73:
  case 0x79:
  case 0x84:
  case 0xb9:
  case 0xc3:
  case 0xcd:
  case 0xd2:
  case 0xd9:
    goto code_r0x000101685f7c;
  case 0x3a:
  case 0x6a:
  case 0xba:
  case 0xd8:
    goto code_r0x000101685f78;
  case 0x3d:
  case 0x40:
  case 0x47:
  case 0x6d:
  case 0x70:
  case 0x81:
  case 0xbd:
  case 0xc0:
    unaff_x23 = (ulong)((uint)unaff_x23 & 0xffff | 0x65750000);
    unaff_x24 = 0x6166;
  case 0x82:
  case 0xd1:
    unaff_x24 = unaff_x24 & 0xffffffff0000ffff | 0x736c0000;
    goto code_r0x000101685f78;
  case 0x45:
    goto code_r0x000101685f04;
  case 0x49:
    goto code_r0x000101685f88;
  case 0x4d:
  case 0xc5:
    goto code_r0x000101685f18;
  case 0x4f:
  case 0x50:
  case 199:
  case 200:
  case 0xcb:
    goto code_r0x000101685f84;
  case 0x76:
    goto code_r0x000101685f9c;
  case 0x7c:
  case 0xc9:
  case 0xd0:
  case 0xd7:
    goto code_r0x000101685f8c;
  case 0x7f:
    break;
  case 0x83:
    goto code_r0x000101685f94;
  case 0x8a:
    uVar2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    auVar20._8_8_ = uVar2;
    auVar20._0_8_ = param_1;
    return auVar20;
  case 0x8e:
    puVar1 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0,param_1);
    func_0x000107c3ceac();
    puVar3 = PTR_s_secondsToMillis__112632f28;
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
    auVar22._8_8_ = puVar3;
    auVar22._0_8_ = puVar1;
    return auVar22;
  case 0x92:
    uVar2 = param_1;
    FUN_1016859f0();
    auVar17._8_8_ = uVar2;
    auVar17._0_8_ = param_1;
    return auVar17;
  case 0xa2:
  case 0xe2:
    goto code_r0x000101686024;
  case 0xa3:
    uVar2 = param_1 + 0x640;
    func_0x000107c61168(uVar2,param_1);
  case 0xe3:
  case 0xeb:
  case 0xf3:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar2;
    return auVar19;
  case 0xa4:
  case 0xe4:
  case 0xec:
  case 0xf4:
code_r0x0001016861a4:
    func_0x000107c5fadc();
    uVar2 = unaff_x24;
LAB_1016861b0:
    func_0x000107c610f8(PTR_PTR_1126b9090);
    unaff_x24 = uVar2;
code_r0x0001016861c8:
    param_1 = unaff_x24;
    func_0x000107c30d00();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    auVar21._8_8_ = uVar2;
    auVar21._0_8_ = param_1;
    return auVar21;
  case 0xcf:
  case 0xd6:
    goto code_r0x000101685fc0;
  case 0xea:
  case 0xf2:
    goto code_r0x000101686038;
  case 0xee:
    goto code_r0x000101685e04;
  }
  auVar15._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar15._0_8_ = param_1;
  return auVar15;
code_r0x000101685f78:
  unaff_x24 = unaff_x24 & 0xffff0000ffffffff | 0x6500000000;
code_r0x000101685f7c:
  param_1 = unaff_x23;
  if (in_ZR) {
    param_1 = unaff_x24;
  }
  unaff_x25 = 0xe500000000000000;
code_r0x000101685f84:
  unaff_x26 = 0xe400000000000000;
code_r0x000101685f88:
  unaff_x21 = unaff_x26;
  if (in_ZR) {
    unaff_x21 = unaff_x25;
  }
code_r0x000101685f8c:
  func_0x000107c5fadc(param_1,unaff_x21);
code_r0x000101685f94:
  uVar2 = unaff_x21;
  unaff_x22 = param_1;
code_r0x000101685f9c:
  func_0x000107c6142c(uVar2);
code_r0x000101685fa0:
  in_ZR = (unaff_x19 & 1) == 0;
code_r0x000101685fa4:
  param_1 = unaff_x23;
  if (in_ZR) {
    param_1 = unaff_x24;
  }
code_r0x000101685fa8:
  uVar2 = unaff_x26;
  unaff_x19 = unaff_x26;
  if (in_ZR) {
    uVar2 = unaff_x25;
    unaff_x19 = unaff_x25;
  }
code_r0x000101685fb0:
  func_0x000107c5fadc(param_1,uVar2);
code_r0x000101685fb4:
  func_0x000107c6142c(unaff_x19);
code_r0x000101685fc0:
  param_1 = unaff_x22;
  uVar2 = param_1;
  func_0x0001053c1784();
  goto code_r0x000107c61170;
code_r0x000101686024:
code_r0x000101686028:
  FUN_10168593c();
code_r0x000101686038:
  auVar16._8_8_ = uVar2;
  auVar16._0_8_ = param_1;
  return auVar16;
code_r0x000101685e04:
  auVar6._0_8_ = uVar5 | (ulong)pcVar4;
  auVar6._8_8_ = param_1;
  return auVar6;
code_r0x000101685e50:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 101685f44; end: 101685ff7;  */

/* WARNING: Possible PIC construction at 0x000101685fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101685fdc) */

void FUN_101685f44(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  bVar2 = (param_2 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar4 = 0xe400000000000000;
  if (bVar2) {
    uVar4 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  bVar2 = (param_1 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x0001053c1784(uVar5,uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101685ff8; end: 10168601b;  */

void FUN_101685ff8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10168601c; end: 10168609b;  */

void FUN_10168601c(void)

{
  FUN_10168593c();
  return;
}



/* Entry: 10168609c; end: 1016860bb;  */

void FUN_10168609c(void)

{
  func_0x000107c61168(&PTR_PTR_112dbe640);
  return;
}



/* Entry: 1016860bc; end: 1016860ef;  */

void FUN_1016860bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac();
                    /* WARNING: Could not recover jumptable at 0x00010c155430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_secondsToMillis__112632f28);
  return;
}



/* Entry: 1016860f0; end: 10168612f; -[_TtC40SponsoredSnapBannerLoggingImplementation36SponsoredSnapBannerImpressionTracker sponsoredSnapBannerEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016860f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101686130; end: 1016864b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101686130(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 2;
  lVar4 = param_1;
  FUN_1016864b8(2,param_1);
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  uVar6 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar6 = param_3;
  }
  puVar3 = PTR_PTR_1126b9090;
  func_0x000107c610f8(PTR_PTR_1126b9090);
  func_0x000107c30d00();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar6);
  func_0x00010469e958(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  lVar2 = lVar1;
  puVar5 = puVar3;
  func_0x00010469e564(lVar1,puVar3);
  lStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c6142c(uStack_58);
  lStack_60 = -0x2fffffffffffffe7;
  uStack_58 = 0x800000010efb4ed0;
  func_0x0001046bdef0(2);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x20646120726f6620,0xe800000000000000);
  func_0x000107c5fb78(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(uStack_58);
  lStack_60 = lVar2;
  func_0x0001002a64a8(&lStack_60);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1016864b8; end: 1016869c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016864b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong auStack_110 [8];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar4 = 0;
  func_0x000100b91d00();
  lStack_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_d0 + lVar4;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112dbe6a8);
  puVar5 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(uVar11);
  func_0x000107c51b38(puVar5);
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  uVar13 = *(undefined8 *)(param_3 + 0x30);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x24);
  func_0x000107c5fb78(0xd00000000000001c,0x800000010efb4ef0);
  func_0x000107c5fb78(uVar11,uVar13);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar5 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  uStack_88 = param_2;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar15 = uStack_78;
  uStack_a0 = uStack_80;
  func_0x0001000d224c(&uStack_80);
  uVar16 = uStack_80;
  if (uStack_80 == 0) {
    uVar17 = 0;
  }
  else {
    uVar6 = uVar11;
    func_0x000107c5fadc(uVar11,uVar13);
    uVar17 = uVar16;
    func_0x000107c5ce1c();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000d224c(&uStack_80);
  uVar16 = uStack_80;
  uStack_90 = uVar13;
  if (uStack_80 != 0) {
    uVar6 = uVar11;
    func_0x000107c5fadc(uVar11,uVar13);
    uVar18 = uVar16;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar6);
    if ((uVar18 == 0) && (func_0x0001000d224c(&uStack_80), uVar16 = uStack_80, uStack_80 != 0)) {
      uVar13 = uVar11;
      func_0x000107c5fadc(uVar11,uStack_90);
      func_0x000107c4532c(uVar16);
      func_0x000107c615e8(uVar16);
      func_0x000107c61170(uVar13);
    }
  }
  func_0x0001000d224c(&uStack_80);
  uVar16 = uStack_80;
  uVar13 = uStack_90;
  if (uStack_80 == 0) {
    uVar18 = 1;
  }
  else {
    uVar6 = uVar11;
    func_0x000107c5fadc(uVar11,uStack_90);
    uVar18 = uVar16;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar6);
  }
  func_0x0001000d224c(&uStack_80);
  uVar16 = uStack_80;
  if (uStack_80 == 0) {
    uVar14 = 1;
  }
  else {
    uVar6 = uVar11;
    func_0x000107c5fadc(uVar11,uVar13);
    uVar14 = uVar16;
    func_0x000107c42f50();
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar6);
  }
  func_0x000101681be8(param_3,puVar7);
  func_0x0001047c0984(0);
  func_0x000107c610f8();
  func_0x0001047b952c();
  uVar16 = *(ulong *)(puVar7 + _DAT_113815208);
  if (uVar16 != 0) {
    uVar12 = uVar16 & 0xffffffffffffff8;
    if (uVar16 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar12 + 0x10);
    }
    else {
      uVar8 = uVar16;
      if (-1 < (long)uVar16) {
        uVar8 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      if ((uVar16 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016869c8);
          (*pcVar3)();
        }
        uVar13 = *(undefined8 *)(uVar16 + 0x20);
        func_0x000107c61174(puVar7);
        func_0x000107c61174(uVar13);
      }
      else {
        func_0x000107c61174(puVar7);
        uVar13 = 0;
        func_0x000100e471e4(0,uVar16);
      }
      goto LAB_10168680c;
    }
  }
  func_0x000107c61174(puVar7);
  uVar13 = 0;
LAB_10168680c:
  puVar9 = puVar7;
  uVar6 = uVar13;
  func_0x0001084c6f7c(puVar7,uVar13);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar13);
  if ((long)(uVar18 | uVar17 | uVar14) < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016869ac);
    (*pcVar3)();
  }
  uVar13 = *(undefined8 *)(param_3 + 0x48);
  lVar1 = *(long *)(param_3 + 0x50);
  uStack_c8 = *(undefined8 *)(param_3 + 0x38);
  lVar2 = *(long *)(param_3 + 0x40);
  lStack_98 = *(undefined8 *)(param_3 + *(int *)(lStack_98 + 0x48));
  uStack_c0 = *(undefined8 *)(param_3 + 0x20);
  uVar10 = 0x16;
  uStack_b8 = uVar14;
  uStack_b0 = uVar18;
  uStack_a8 = uVar17;
  func_0x000104840e10();
  uVar16 = uStack_a0;
  func_0x000107c5fadc(uStack_a0,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c5fadc(uVar11,uStack_90);
  if (lVar1 == 0) {
    uVar13 = 0;
    uVar15 = uStack_c8;
  }
  else {
    func_0x000107c5fadc(uVar13,lVar1);
    uVar15 = uStack_c8;
  }
  uStack_c8 = uVar15;
  if (lVar2 == 0) {
    uVar15 = 0;
  }
  else {
    func_0x000107c5fadc(uVar15,lVar2);
  }
  puVar5 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c5fadc(uVar10,uVar6);
  func_0x000107c6142c(uVar6);
  *(undefined8 *)((long)auStack_110 + lVar4 + 0x38) = uVar10;
  uVar6 = uStack_c0;
  *(undefined1 **)((long)auStack_110 + lVar4 + 0x28) = puVar9;
  *(undefined8 *)((long)auStack_110 + lVar4 + 0x30) = uVar6;
  *(undefined1 **)((long)auStack_110 + lVar4 + 0x20) = puVar9;
  *(undefined8 *)((long)auStack_110 + lVar4 + 0x10) = 0;
  *(long *)((long)auStack_110 + lVar4 + 0x18) = lStack_98;
  *(undefined8 *)((long)auStack_110 + lVar4 + 8) = 0;
  *(ulong *)((long)auStack_110 + lVar4) = uStack_b8;
  func_0x000107c30ad4(param_1,puVar5,uVar16,uVar11,uVar13,uVar15,0,uStack_a8,uStack_b0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  return puVar5;
}



/* Entry: 1016869c8; end: 101686a27; -[_TtC40SponsoredSnapBannerLoggingImplementation36SponsoredSnapBannerImpressionTracker init] */

void FUN_1016869c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredSnapBannerLoggingImplementation.SponsoredSnapBannerImpressionTracker"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016869f4);
  (*pcVar1)();
}



/* Entry: 101686a28; end: 101686a6f; -[_TtC40SponsoredSnapBannerLoggingImplementation36SponsoredSnapBannerImpressionTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101686a44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101686a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101686a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dbe6a0));
  return;
}



/* Entry: 101686a70; end: 101686abf;  */

void FUN_101686a70(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3b68);
  return;
}



/* Entry: 101686ac0; end: 101686ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101686ac0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 2;
  lVar4 = param_1;
  FUN_1016864b8(2,param_1);
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  uVar6 = 0;
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar6 = param_3;
  }
  puVar3 = PTR_PTR_1126b9090;
  func_0x000107c610f8(PTR_PTR_1126b9090);
  func_0x000107c30d00();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar6);
  func_0x00010469e958(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  lVar2 = lVar1;
  puVar5 = puVar3;
  func_0x00010469e564(lVar1,puVar3);
  lStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c6142c(uStack_58);
  lStack_60 = -0x2fffffffffffffe7;
  uStack_58 = 0x800000010efb4ed0;
  func_0x0001046bdef0(2);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x20646120726f6620,0xe800000000000000);
  func_0x000107c5fb78(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(uStack_58);
  lStack_60 = lVar2;
  func_0x0001002a64a8(&lStack_60);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 101686ac4; end: 101686af3;  */

void FUN_101686ac4(void)

{
  func_0x0001016862f4();
  return;
}



/* Entry: 101686af4; end: 101686c03;  */

void FUN_101686af4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112dbe6e8,&UNK_10d9798e0);
  puVar1 = &UNK_1103f28b8;
  func_0x000107c613fc(&UNK_1103f28b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101687074;
  func_0x0001000823a8(FUN_101687074,puVar1);
  uVar3 = 0x112dbe6f0;
  func_0x0001000285a8(0x112dbe6f0,&UNK_10d9798e8);
  uVar4 = 0x101687080;
  func_0x00010072927c(0x101687080,0,uVar3);
  uVar3 = uVar4;
  func_0x0001000cad14();
  uVar5 = 0;
  func_0x00010022e4f4(0);
  func_0x000107c610f8();
  func_0x0001022731d8(uVar3,uVar5);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 101686c04; end: 101686c1f;  */

void FUN_101686c04(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112dbe6e8,&UNK_10d9798e0);
  puVar1 = &UNK_1103f28b8;
  func_0x000107c613fc(&UNK_1103f28b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar5);
  pcVar2 = FUN_101687074;
  func_0x0001000823a8(FUN_101687074,puVar1);
  uVar3 = 0x112dbe6f0;
  func_0x0001000285a8(0x112dbe6f0,&UNK_10d9798e8);
  uVar4 = 0x101687080;
  func_0x00010072927c(0x101687080,0,uVar3);
  uVar3 = uVar4;
  func_0x0001000cad14();
  uVar5 = 0;
  func_0x00010022e4f4(0);
  func_0x000107c610f8();
  func_0x0001022731d8(uVar3,uVar5);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 101686c20; end: 10168703f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101686c20(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lStack_b8;
  long lStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  func_0x000100083b20(alStack_a8);
  lVar2 = alStack_a8[0];
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_11308b850);
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112dbe700,&UNK_10d990210);
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11308b848);
  func_0x000107c61174(uVar5);
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c453e4(puVar6);
  uVar7 = 0;
  FUN_101686a70(0);
  func_0x000107c610f8();
  uVar5 = uVar4;
  FUN_101687094(uVar4,uVar3,puVar6,uVar7);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  func_0x000100083b20(alStack_a8);
  uVar8 = *(undefined8 *)(alStack_a8[0] + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(alStack_a8[0]);
  uVar7 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar9 = 0;
  func_0x000101682bf4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar7;
  lVar10 = 0;
  FUN_10168609c();
  lVar11 = lVar10;
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126a77a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + 0x10) = puVar6;
  func_0x000107c61174();
  func_0x000107c6157c(lVar9);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11304a478);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lStack_68);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c61574(uVar7);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuStack_88 = &PTR_DAT_1103f27f8;
  lVar12 = 0;
  alStack_a8[0] = lVar11;
  lStack_90 = lVar10;
  FUN_101684d90();
  lVar10 = lVar12;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112dbe530) = 0x3ff0000000000000;
  *(undefined8 *)(lVar10 + _DAT_112dbe538) = 0x3fb9a027525460aa;
  *(undefined8 *)(lVar10 + _DAT_112dbe540) = 0;
  *(undefined8 *)(lVar10 + _DAT_112dbe548) = 0;
  *(undefined8 *)(lVar10 + _DAT_112dbe550) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe558) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe560) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe568) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe570) = 0;
  lVar11 = _DAT_112dbe578;
  lVar13 = 0;
  func_0x000100b91d00();
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar10 + lVar11,1,1,lVar13);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe580);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe588);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar10 + _DAT_112dbe590) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe598);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar10 + _DAT_112dbe5a0) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe508);
  *puVar1 = uVar5;
  puVar1[1] = &PTR_DAT_1103f2828;
  plVar14 = (long *)(lVar10 + _DAT_112dbe510);
  *plVar14 = lVar9;
  plVar14[1] = (long)&PTR_DAT_1103f2528;
  FUN_1016871a8(alStack_a8,lVar10 + _DAT_112dbe518);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe520);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  *(undefined **)(lVar10 + _DAT_112dbe528) = puVar6;
  plVar14 = &lStack_b8;
  lStack_b8 = lVar10;
  lStack_b0 = lVar12;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a8);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(lVar9);
  func_0x000107c61170(lVar2);
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 101687040; end: 101687073;  */

void FUN_101687040(void)

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



/* Entry: 101687074; end: 101687093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101687074(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x20;
  long lStack_b8;
  long lStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  func_0x000100083b20(alStack_a8,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = alStack_a8[0];
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar3 = *(undefined8 *)(lVar2 + _DAT_11308b850);
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112dbe700,&UNK_10d990210);
  uVar5 = *(undefined8 *)(lVar2 + _DAT_11308b848);
  func_0x000107c61174(uVar5);
  uVar3 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c453e4(puVar6);
  uVar7 = 0;
  FUN_101686a70(0);
  func_0x000107c610f8();
  uVar5 = uVar4;
  FUN_101687094(uVar4,uVar3,puVar6,uVar7);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  func_0x000100083b20(alStack_a8);
  uVar8 = *(undefined8 *)(alStack_a8[0] + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(alStack_a8[0]);
  uVar7 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(uVar8);
  lVar9 = 0;
  func_0x000101682bf4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar7;
  lVar10 = 0;
  FUN_10168609c();
  lVar11 = lVar10;
  func_0x000107c613fc();
  puVar6 = PTR_PTR_1126a77a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + 0x10) = puVar6;
  func_0x000107c61174();
  func_0x000107c6157c(lVar9);
  func_0x000100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_11304a478);
  func_0x000107c6157c(uVar7);
  func_0x000107c61170(lStack_68);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c61574(uVar7);
  puVar6 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuStack_88 = &PTR_DAT_1103f27f8;
  lVar12 = 0;
  alStack_a8[0] = lVar11;
  lStack_90 = lVar10;
  FUN_101684d90();
  lVar10 = lVar12;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112dbe530) = 0x3ff0000000000000;
  *(undefined8 *)(lVar10 + _DAT_112dbe538) = 0x3fb9a027525460aa;
  *(undefined8 *)(lVar10 + _DAT_112dbe540) = 0;
  *(undefined8 *)(lVar10 + _DAT_112dbe548) = 0;
  *(undefined8 *)(lVar10 + _DAT_112dbe550) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe558) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe560) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe568) = 0;
  *(undefined1 *)(lVar10 + _DAT_112dbe570) = 0;
  lVar11 = _DAT_112dbe578;
  lVar13 = 0;
  func_0x000100b91d00();
  (**(code **)(*(long *)(lVar13 + -8) + 0x38))(lVar10 + lVar11,1,1,lVar13);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe580);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe588);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined **)(lVar10 + _DAT_112dbe590) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe598);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar10 + _DAT_112dbe5a0) = 0;
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe508);
  *puVar1 = uVar5;
  puVar1[1] = &PTR_DAT_1103f2828;
  plVar14 = (long *)(lVar10 + _DAT_112dbe510);
  *plVar14 = lVar9;
  plVar14[1] = (long)&PTR_DAT_1103f2528;
  FUN_1016871a8(alStack_a8,lVar10 + _DAT_112dbe518);
  puVar1 = (undefined8 *)(lVar10 + _DAT_112dbe520);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  *(undefined **)(lVar10 + _DAT_112dbe528) = puVar6;
  plVar14 = &lStack_b8;
  lStack_b8 = lVar10;
  lStack_b0 = lVar12;
  func_0x000107c61154(plVar14,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a8);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(lVar9);
  func_0x000107c61170(lVar2);
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 101687094; end: 1016871a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101687094(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_4;
  func_0x000107c614f0();
  lVar2 = _DAT_112dbe6b0;
  uVar4 = 0x112dbe708;
  func_0x0001000285a8(0x112dbe708,&UNK_10d979908);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar2) = uVar4;
  *(undefined8 *)(param_4 + _DAT_112dbe6a0) = param_1;
  *(undefined8 *)(param_4 + _DAT_112dbe6a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_4;
  lStack_58 = lVar3;
  func_0x000107c6157c(param_1);
  func_0x000107c61174(param_3);
  plVar5 = &lStack_60;
  func_0x000107c61154(plVar5,puVar1);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    func_0x000107c3e7bc(lStack_68);
    func_0x000107c615e8(lStack_68);
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  return plVar5;
}



/* Entry: 1016871a8; end: 1016871eb;  */

long FUN_1016871a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1016871ec; end: 10168724b; -[_TtC20AdConfigProviderImpl16AdConfigProvider init] */

void FUN_1016871ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdConfigProviderImpl.AdConfigProvider",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101687218);
  (*pcVar1)();
}



/* Entry: 10168724c; end: 1016872a3; -[_TtC20AdConfigProviderImpl16AdConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168724c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dbe720));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112dbe738));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dbe718));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dbe730));
  return;
}



/* Entry: 1016872a4; end: 10168761b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016872a4(long param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 auStack_68 [3];
  
  func_0x00010006c804();
  lVar2 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,auStack_68,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar7 + 0x10) == 0) {
    ppuStack_70 = (undefined **)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    puStack_78 = (undefined *)0x0;
    uStack_80 = 0;
    func_0x000107c61434(param_2);
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c61434(lVar7);
    lVar3 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      ppuStack_70 = (undefined **)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      puStack_78 = (undefined *)0x0;
      uStack_80 = 0;
    }
    else {
      func_0x00010048eeb8(*(long *)(lVar7 + 0x38) + lVar3 * 0x28,&uStack_90);
      func_0x000107c6142c(lVar7);
    }
  }
  func_0x000107c614a8(auStack_68);
  uVar5 = 0x112dbe728;
  func_0x0001000285a8(0x112dbe728,&UNK_10d979918);
  puVar1 = PTR___sSiN_11034deb0;
  puVar4 = auStack_68;
  func_0x000107c6147c(puVar4,&uStack_90,uVar5,PTR___sSiN_11034deb0,6);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe730);
    (*param_4)(uVar5,param_1,param_2,param_3);
    puStack_78 = puVar1;
    ppuStack_70 = &PTR_DAT_110738338;
    uStack_90 = uVar5;
    func_0x000107c61428(unaff_x20 + lVar2,auStack_68,0x21,0);
    func_0x0001003ff25c(&uStack_90,param_1,param_2);
    func_0x000107c614a8(auStack_68);
  }
  else {
    func_0x000107c6142c(param_2);
    uVar5 = auStack_68[0];
  }
  func_0x000100070bfc();
  return uVar5;
}



/* Entry: 10168761c; end: 1016877ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10168761c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  
  func_0x00010006c804();
  lVar1 = _DAT_112dbe720;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe720,auStack_78,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar7 + 0x10) == 0) {
    ppuStack_80 = (undefined **)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x000107c61434(param_2);
  }
  else {
    func_0x000107c61434(param_2);
    func_0x000107c61434(lVar7);
    lVar2 = param_1;
    uVar6 = param_2;
    func_0x000100029284(param_1);
    if ((uVar6 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      ppuStack_80 = (undefined **)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010048eeb8(*(long *)(lVar7 + 0x38) + lVar2 * 0x28,&uStack_a0);
      func_0x000107c6142c(lVar7);
    }
  }
  func_0x000107c614a8(auStack_78);
  uVar5 = 0x112dbe728;
  func_0x0001000285a8(0x112dbe728,&UNK_10d979918);
  uVar3 = 0;
  FUN_10168819c();
  puVar4 = auStack_78;
  func_0x000107c6147c(puVar4,&uStack_a0,uVar5,uVar3,6);
  if (((ulong)puVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dbe730);
    func_0x00010403ca14(uVar5,param_1,param_2,param_3,param_4,uVar3);
    ppuStack_80 = &PTR_DAT_110738350;
    uStack_a0 = uVar5;
    uStack_88 = uVar3;
    func_0x000107c61428(unaff_x20 + lVar1,auStack_78,0x21,0);
    func_0x000107c61174(uVar5);
    func_0x0001003ff25c(&uStack_a0,param_1,param_2);
    func_0x000107c614a8(auStack_78);
  }
  else {
    func_0x000107c6142c(param_2);
    uVar5 = auStack_78[0];
  }
  func_0x000100070bfc();
  return uVar5;
}



/* Entry: 1016877f0; end: 1016877f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016877f0(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  func_0x00010006c804();
  lVar1 = _DAT_112dbe738;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe738,auStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar7 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      param_3 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar6);
      goto LAB_101687974;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_78);
  lVar7 = *(long *)(unaff_x20 + _DAT_112dbe730);
  lVar6 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar7 != 0) {
    func_0x000107c42c04(lVar7);
    lVar6 = lVar7;
    func_0x000107c5dc0c(lVar7);
    func_0x000107c61180();
    lVar2 = lVar6;
    func_0x000107c49804();
    func_0x000107c61170(lVar6);
    param_3 = (long)(int)lVar2;
  }
  func_0x000107c61428(unaff_x20 + lVar1,auStack_78,0x21,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_101687ce0(param_3,param_1,param_2,uVar3);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_78);
  func_0x000107c615e8(lVar7);
LAB_101687974:
  func_0x000100070bfc();
  return param_3;
}



/* Entry: 1016877f4; end: 10168799f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016877f4(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  func_0x00010006c804();
  lVar1 = _DAT_112dbe738;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe738,auStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar7 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      param_3 = *(long *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar6);
      goto LAB_101687974;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_78);
  lVar7 = *(long *)(unaff_x20 + _DAT_112dbe730);
  lVar6 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4c270();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar7 != 0) {
    func_0x000107c42c04(lVar7);
    lVar6 = lVar7;
    func_0x000107c5dc0c(lVar7);
    func_0x000107c61180();
    lVar2 = lVar6;
    func_0x000107c49804();
    func_0x000107c61170(lVar6);
    param_3 = (long)(int)lVar2;
  }
  func_0x000107c61428(unaff_x20 + lVar1,auStack_78,0x21,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_101687ce0(param_3,param_1,param_2,uVar3);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_78);
  func_0x000107c615e8(lVar7);
LAB_101687974:
  func_0x000100070bfc();
  return param_3;
}



/* Entry: 1016879a0; end: 1016879a7; -[_TtC20AdConfigProviderImpl16AdConfigProvider optimisticFeatureFlagForKey:] */

uint FUN_1016879a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x0001003ff038(param_3,param_2,1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1016879a8; end: 1016879b3; -[_TtC20AdConfigProviderImpl16AdConfigProvider intValueForKey:defaultValue:] */

undefined8
FUN_1016879a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1016872a4(param_3,param_2,param_4,&UNK_10403c714);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 1016879b4; end: 1016879bf; -[_TtC20AdConfigProviderImpl16AdConfigProvider longValueForKey:defaultValue:] */

undefined8
FUN_1016879b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1016872a4(param_3,param_2,param_4,&UNK_10403c818);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 1016879c0; end: 101687a3f;  */

undefined8
FUN_1016879c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1016872a4(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 101687a40; end: 101687aeb; -[_TtC20AdConfigProviderImpl16AdConfigProvider stringListValueForKey:defaultValue:] */

void FUN_101687a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  func_0x000101687454(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,puVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101687aec; end: 101687bdb; -[_TtC20AdConfigProviderImpl16AdConfigProvider protoValueForKey:valueType:defaultValue:] */

void FUN_101687aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c614ec(param_4);
  func_0x000107c614e8();
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = param_5;
  func_0x000107c4a054();
  if ((int)uVar2 == 0) {
    func_0x000107c610f8(param_4);
    func_0x000107c453e4();
  }
  else {
    param_4 = param_5;
    func_0x000107c61174(param_5);
  }
  func_0x000107c61434(param_2);
  FUN_10168761c(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61430(param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101687bdc; end: 101687c07; -[_TtC20AdConfigProviderImpl16AdConfigProvider manualExposureValueForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101687bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c4c270(*(undefined8 *)(param_1 + _DAT_112dbe730),param_2,param_3,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101687c08; end: 101687cdf;  */

void FUN_101687c08(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101687e28();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    func_0x0001003ff244(*(long *)(lVar2 + 0x38) + param_2 * 0x28,param_1);
    func_0x000101687fd0(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 101687ce0; end: 101687e27;  */

void FUN_101687ce0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101687db0);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    func_0x00010113678c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101687d80);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101136368();
    lVar6 = *unaff_x20;
    goto joined_r0x000101687dc4;
  }
  lVar6 = *unaff_x20;
joined_r0x000101687dc4:
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101687e28);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101687e28; end: 10168818b;  */

void FUN_101687e28(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [40];
  
  func_0x0001000285a8(0x112dbe770,&UNK_10d979988);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61574(lVar11);
LAB_101687fa8:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_101687f10;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x28;
      func_0x00010048eeb8(*(long *)(lVar11 + 0x38) + lVar10,auStack_88);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x0001003ff244(auStack_88,*(long *)(lVar6 + 0x38) + lVar10);
      func_0x000107c61434(uVar4);
      if (uVar7 != 0) break;
LAB_101687f10:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101687fd0);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar11);
          goto LAB_101687fa8;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 10168818c; end: 10168819b;  */

undefined1  [16] FUN_10168818c(void)

{
  return ZEXT816(0x1103f2978);
}



/* Entry: 10168819c; end: 1016881df;  */

void FUN_10168819c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbe768 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126be598;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dbe768 = puVar1;
  return;
}



/* Entry: 1016881e0; end: 101688277;  */

undefined8 FUN_1016881e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112dbe728;
  func_0x0001000285a8(0x112dbe728,&UNK_10d979918);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101688278; end: 1016882a7;  */

undefined1  [16] FUN_101688278(void)

{
  return ZEXT816(0x1103f29a0);
}



/* Entry: 1016882a8; end: 1016883eb;  */

undefined8 FUN_1016882a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1016884a0(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1016883ec; end: 101688423;  */

void FUN_1016883ec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101688424; end: 10168842b;  */

void FUN_101688424(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10168842c; end: 101688447;  */

/* WARNING: Possible PIC construction at 0x000101688438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010168843c) */

void FUN_10168842c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101688448; end: 101688493;  */

void FUN_101688448(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101688494; end: 10168849f;  */

void FUN_101688494(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1016884a0; end: 1016885bf;  */

void FUN_1016884a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1103f2aa8;
  func_0x000107c613fc(&UNK_1103f2aa8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_60 = FUN_10168863c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1016883ec;
  puStack_68 = &UNK_1103f2ac0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = 0;
  func_0x0001001df2d0(0);
  func_0x000107c610f8();
  func_0x00010168905c(puVar1,uVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1016885c0; end: 10168863b;  */

void FUN_1016885c0(undefined8 param_1)

{
  if (lRam0000000112dbe7b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e64b960);
  return;
}



/* Entry: 10168863c; end: 10168865f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168863c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar4 = 0;
  FUN_1016888b8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112dbe868) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112dbe870) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 101688660; end: 101688823;  */

undefined * FUN_101688660(void)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar9 = puVar3;
  func_0x000107c5e408();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar4 = 0;
  func_0x000100e8a058(0);
  puVar3 = puVar9;
  func_0x000107c5fc54(puVar9,uVar4);
  func_0x000107c61170(puVar9);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar9 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar9 != (undefined *)0x0) {
    do {
      bVar2 = SBORROW8((long)puVar9,1);
      puVar9 = puVar9 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016887dc);
        (*pcVar1)();
      }
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016887e0);
          (*pcVar1)();
        }
        if (*(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016887e4);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(puVar3 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
        uVar6 = uVar5;
        func_0x000107c49f64();
        func_0x000107c61170(uVar5);
        if ((uVar6 & 1) != 0) {
          puVar9 = *(undefined **)(puVar3 + (long)puVar9 * 8 + 0x20);
          func_0x000107c61174();
LAB_10168876c:
          func_0x000107c6142c(puVar3);
          puVar3 = puVar9;
          func_0x000107c508f0();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          if (puVar3 == (undefined *)0x0) {
            return (undefined *)0x0;
          }
          puVar9 = puVar3;
          func_0x000107c4f078();
          func_0x000107c61180();
          while (puVar9 != (undefined *)0x0) {
            func_0x000107c61170(puVar3);
            puVar7 = puVar9;
            func_0x000107c4f078();
            func_0x000107c61180();
            puVar3 = puVar9;
            puVar9 = puVar7;
          }
          return puVar3;
        }
      }
      else {
        puVar7 = puVar9;
        func_0x000100de9de8(puVar9,puVar3);
        puVar8 = puVar7;
        func_0x000107c49f64();
        func_0x000107c61170(puVar7);
        if (((ulong)puVar8 & 1) != 0) {
          func_0x000100de9de8(puVar9,puVar3);
          goto LAB_10168876c;
        }
      }
    } while (puVar9 != (undefined *)0x0);
  }
  func_0x000107c6142c(puVar3);
  return (undefined *)0x0;
}



/* Entry: 101688824; end: 10168887f; -[_TtC30BitmojiComposerServiceProvider22BitmojiCreationService init] */

void FUN_101688824(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiComposerServiceProvider.BitmojiCreationService",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101688850);
  (*pcVar1)();
}



/* Entry: 101688880; end: 1016888b7; -[_TtC30BitmojiComposerServiceProvider22BitmojiCreationService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010168889c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016888a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbe868));
  return;
}



/* Entry: 1016888b8; end: 1016888d7;  */

void FUN_1016888b8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3d10);
  return;
}



/* Entry: 1016888d8; end: 1016889ef;  */

/* WARNING: Possible PIC construction at 0x000101688960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016889c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101688964) */
/* WARNING: Removing unreachable block (ram,0x0001016889c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016888d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112dbe870);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_101688660();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c5b634();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c31260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1016889f0; end: 101688a37; -[_TtC30BitmojiComposerServiceProvider22BitmojiCreationService launchCreateFlowWithOptions:] */

void FUN_1016889f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1016888d8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101688a38; end: 101688b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101688a38(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112dbe868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efb4fd0);
    puVar3 = puVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(uVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x000107c61168(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar4 = puVar3;
      func_0x000107c6148c(puVar3,puVar1);
      if (puVar4 != (undefined *)0x0) goto LAB_101688aec;
      func_0x000107c615e8(puVar3);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c453e4();
LAB_101688aec:
  puVar1 = PTR_PTR_1126b3540;
  func_0x000107c61168(PTR_PTR_1126b3540);
  func_0x000107c5061c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 101688b28; end: 101688b5b; -[_TtC30BitmojiComposerServiceProvider22BitmojiCreationService loadSuggestedAvatarOptions] */

void FUN_101688b28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101688a38();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101688b5c; end: 101688c57;  */

/* WARNING: Possible PIC construction at 0x000101688bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101688c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101688bf4) */
/* WARNING: Removing unreachable block (ram,0x000101688c2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688b5c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112dbe868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010018cc3c(param_1);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar3 = param_1;
    func_0x000107c5f9dc(param_1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(param_1);
    func_0x000107c46570(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 101688c58; end: 101688cc7; -[_TtC30BitmojiComposerServiceProvider22BitmojiCreationService setSuggestedAvatarOptionsWithOptions:] */

void FUN_101688c58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c61174(param_1);
  FUN_101688b5c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101688cc8; end: 101688d5f; -[_TtC30BitmojiComposerServiceProvider22BitmojiCreationService bitmojiCreateFlowDidCompleteWithAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688cc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dbe870);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 101688d60; end: 101688dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688d60(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101688fe0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112dbe8a0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101688dcc; end: 101688dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688dcc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101688fe0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dbe8a0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101688dd4; end: 101688e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101688dd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbe8a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101688e20; end: 101688f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101688e20(undefined *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = *(long *)(lStack_38 + _DAT_112dbe8d0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126b3588;
    func_0x000107c610f8(PTR_PTR_1126b3588);
    uVar4 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010efb5030);
    func_0x000107c47794(puVar3);
    func_0x000107c61170(uVar4);
    param_1 = puVar3;
    func_0x000107c4f6d8(puVar3);
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000107c30db4(param_1,lVar2);
    func_0x000107c615e8(lVar2);
  }
  return param_1;
}



/* Entry: 101688f24; end: 101688f5f; -[_TtC30BitmojiComposerServiceProvider28BitmojiCreationServicePlugin pushToValdiMarshaller:] */

undefined8 FUN_101688f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_101688e20(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}


