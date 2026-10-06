/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077a0f08; end: 1077a0f2f;  */

void FUN_1077a0f08(void)

{
  func_0x0001077a30a8();
  func_0x0001077a0f58();
  return;
}



/* Entry: 1077a1028; end: 1077a1097;  */

/* WARNING: Possible PIC construction at 0x0001077a1054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077a1058) */
/* WARNING: Removing unreachable block (ram,0x0001077a1080) */
/* WARNING: Removing unreachable block (ram,0x0001077a1094) */
/* WARNING: Removing unreachable block (ram,0x0001077a1078) */
/* WARNING: Removing unreachable block (ram,0x0001077a2e9c) */

undefined8 FUN_1077a1028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  
  func_0x0001077a2d10();
  func_0x0001077a3208();
  func_0x0001077a30a8(uStack_30,param_3);
  func_0x0001077a10c0();
  return param_1;
}



/* Entry: 1077a129c; end: 1077a12bf;  */

void FUN_1077a129c(void)

{
  func_0x0001077a12c0();
  return;
}



/* Entry: 1077a14c4; end: 1077a151b;  */

undefined8 * FUN_1077a14c4(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x0001073f8154(param_1,*(undefined8 *)(param_2 + 8));
  func_0x0001077a151c(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 1077a19e4; end: 1077a1a27;  */

void FUN_1077a19e4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  code *extraout_x8;
  
  func_0x0001077a2bc8();
  func_0x0001077a2f24();
  func_0x0001077a2d7c();
  func_0x0001077a2e7c();
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077a2da0();
  func_0x0001077a2e74();
  func_0x0001073f6a54(param_2);
  func_0x0001077a3168();
  func_0x0001077a2ef8(*(undefined4 *)(param_2 + 0x30));
  func_0x0001077a2f4c();
  (*extraout_x8)();
  return;
}



/* Entry: 1077a1b54; end: 1077a1b83;  */

undefined8 FUN_1077a1b54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077a1cb4; end: 1077a1d03;  */

undefined8 * FUN_1077a1cb4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  func_0x0001077a2c5c();
  param_2 = (undefined8 *)*param_2;
  func_0x0001077a2f18();
  func_0x0001077a2f24();
  func_0x0001077a2d7c();
  func_0x0001077a2e7c();
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001077a2da0();
  func_0x0001077a2e74();
  uVar1 = *(undefined8 *)*param_2;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077a1e00; end: 1077a1e23;  */

void FUN_1077a1e00(void)

{
  func_0x0001077a2fbc();
  func_0x0001077f2978();
  func_0x0001077a2dac();
  return;
}



/* Entry: 1077a1fac; end: 1077a1fdf;  */

void FUN_1077a1fac(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  
  func_0x0001077a2ef8(*(undefined4 *)(param_2 + 0x98));
  func_0x0001077a2f4c();
  (*extraout_x8)();
  return;
}



/* Entry: 1077a20f8; end: 1077a20ff;  */

void FUN_1077a20f8(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 1077a2228; end: 1077a227f;  */

void FUN_1077a2228(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001077a329c();
  if (!(bool)in_ZR || (int)extraout_x8 != -1) {
    if ((int)extraout_x8 == -1) {
      func_0x00010733ad98();
    }
    else {
      func_0x0001077a31b0((&PTR_DAT_1109da2e8)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077a24f0; end: 1077a24fb;  */

undefined8 FUN_1077a24f0(void)

{
  return 1;
}



/* Entry: 1077a2790; end: 1077a279b;  */

undefined8 FUN_1077a2790(void)

{
  return 1;
}



/* Entry: 1077a2a08; end: 1077a32af;  */

void FUN_1077a2a08(void)

{
  undefined8 *unaff_x19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  unaff_x19[1] = in_stack_00000020;
  *unaff_x19 = in_stack_00000018;
  unaff_x19[2] = in_stack_00000028;
  return;
}



/* Entry: 1077a3934; end: 1077a399b;  */

long FUN_1077a3934(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001077a3970();
    lVar2 = uVar1 + 0xe98;
  }
  else {
    lVar2 = param_1;
    func_0x0001077a399c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xe98;
}



/* Entry: 1077a3f3c; end: 1077a3f43;  */

void FUN_1077a3f3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0xe98;
    func_0x0001074c49a8();
  }
  return;
}



/* Entry: 1077a4320; end: 1077a4327;  */

void FUN_1077a4320(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074c8868(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x470;
    func_0x0001074c4bd0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077a4ec4; end: 1077a5657;  */

long FUN_1077a4ec4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  long extraout_x9;
  long lVar5;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x10;
  long lVar6;
  
  lVar6 = -0x61c8864680b583eb;
  lVar2 = param_1 + 0x168;
  func_0x0001077859c4();
  lVar3 = param_1 + 0x1a0;
  FUN_1077ab078();
  func_0x0001077859c4();
  func_0x0001077ab0d4();
  func_0x0001077a1ed0();
  func_0x0001077859c4();
  func_0x0001077a1f08();
  func_0x0001077859c4();
  func_0x00010778f398();
  func_0x0001077ab130();
  func_0x00010778f398();
  func_0x0001077ab130();
  func_0x00010778f398();
  if (*(int *)(param_1 + 0x4e0) != 0) {
    func_0x0001077acc94();
    func_0x000107403790(param_1 + 0x4b0);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x4e0));
    func_0x0001077acc70();
    (*extraout_x8)();
    func_0x0001077ace20();
  }
  lVar5 = lVar6;
  if (*(int *)(param_1 + 0x528) != 0) {
    func_0x0001077acc94();
    func_0x000107403898(param_1 + 0x4e8);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x528));
    func_0x0001077acc70();
    (*extraout_x8_00)();
    func_0x0001077ace20();
    lVar5 = extraout_x9;
  }
  func_0x000107798754();
  func_0x0001077859c4();
  func_0x0001077859c4();
  func_0x00010778f398();
  func_0x0001077a1f08();
  if (*(int *)(param_1 + 0x690) != 0) {
    func_0x0001077acc94();
    func_0x000107403a20(param_1 + 0x660);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x690));
    func_0x0001077acc70();
    (*extraout_x8_01)();
    func_0x0001077ace20();
  }
  func_0x000107798754();
  if (*(int *)(param_1 + 0x710) != 0) {
    func_0x0001077acc94();
    func_0x000107403aec(param_1 + 0x6e0);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x710));
    func_0x0001077acc70();
    (*extraout_x8_02)();
    func_0x0001077ace20();
  }
  if (*(int *)(param_1 + 0x748) != 0) {
    func_0x0001077acc94();
    func_0x000107403bb8(param_1 + 0x718);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0x748));
    func_0x0001077acc70();
    (*extraout_x8_03)();
    func_0x0001077ace20();
    lVar6 = extraout_x9_00;
  }
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x0001077859c4();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x00010779878c();
  func_0x000107798754();
  func_0x00010778f398();
  if (*(int *)(param_1 + 0xa08) != 0) {
    func_0x0001077acc94();
    func_0x000107403cc8(param_1 + 0x9d8);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xa08));
    func_0x0001077acc70();
    (*extraout_x8_04)();
  }
  func_0x0001077859c4();
  FUN_1077ab078();
  if (*(int *)(param_1 + 0xac8) != 0) {
    func_0x0001077acc94();
    func_0x000107403d94(param_1 + 0xa80);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xac8));
    func_0x0001077acc70();
    (*extraout_x8_05)();
  }
  func_0x000107798754();
  func_0x0001077859c4();
  func_0x0001077ab0d4();
  if (*(int *)(param_1 + 3000) != 0) {
    func_0x0001077acc94();
    func_0x000107404298(param_1 + 0xb88);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 3000));
    func_0x0001077acc70();
    (*extraout_x8_06)();
  }
  func_0x0001077859c4();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x00010778f398();
  func_0x0001077a1f08();
  func_0x0001077859c4();
  func_0x00010778f398();
  func_0x0001077ab130();
  func_0x00010778f398();
  func_0x00010778f398();
  lVar4 = param_1 + 0xe30;
  func_0x0001077ab130(lVar4);
  func_0x00010778f398(param_1 + 0xe68);
  if (*(int *)(param_1 + 0xed0) != 0) {
    func_0x0001077acc94();
    func_0x000107404448(param_1 + 0xea0);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xed0));
    func_0x0001077acc70();
    (*extraout_x8_07)();
  }
  if (*(int *)(param_1 + 0xf18) != 0) {
    func_0x0001077acc94();
    func_0x0001074045f8(param_1 + 0xed8);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xf18));
    func_0x0001077acc70();
    (*extraout_x8_08)();
  }
  if (*(int *)(param_1 + 0xf60) != 0) {
    func_0x0001077acc94();
    func_0x000107404930(param_1 + 0xf20);
    func_0x0001077acc88();
    func_0x0001077acb00(*(undefined4 *)(param_1 + 0xf60));
    func_0x0001077acc70();
    (*extraout_x8_09)();
  }
  uVar1 = lVar2 + 0x9e3779b97f4a7c15;
  func_0x0001077ac7c4(lVar3 + -0x61c8864680b583eb + uVar1 * 0x1000 + (uVar1 >> 4) ^ uVar1);
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077acca0();
  func_0x0001077aca00();
  func_0x0001077ac7c4(extraout_x9_01 + lVar5 ^ extraout_x8_10);
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077acca0();
  func_0x0001077ac7c4(extraout_x9_02 + extraout_x10 ^ extraout_x8_11);
  func_0x0001077acca0();
  func_0x0001077aca00();
  func_0x0001077ac7c4(extraout_x9_03 + lVar6 ^ extraout_x8_12);
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077acca0();
  func_0x0001077ac7c4(extraout_x9_04 + 0x9e3779b97f4a7c15U ^ extraout_x8_13);
  func_0x0001077ac7c4();
  func_0x0001077acca0();
  func_0x0001077ac7c4(extraout_x9_05 + 0x9e3779b97f4a7c15U ^ extraout_x8_14);
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077acca0();
  func_0x0001077ac7c4(extraout_x9_06 + 0x9e3779b97f4a7c15U ^ extraout_x8_15);
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077ac7c4();
  func_0x0001077aca00(lVar4 + -0x61c8864680b583eb + extraout_x8_16 * 0x1000 + (extraout_x8_16 >> 4)
                      ^ extraout_x8_16);
  func_0x0001077aca00();
  func_0x0001077aca00();
  return (extraout_x9_07 + 0x9e3779b97f4a7c15U ^ extraout_x8_17) + 0x9e3779b97f4a7c15;
}



/* Entry: 1077a9030; end: 1077a9157;  */

void FUN_1077a9030(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077a43e8(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x0001077acb74();
  return;
}



/* Entry: 1077a95e0; end: 1077a960f;  */

void FUN_1077a95e0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xb8594b407337d) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1638);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ace44();
  func_0x0001077a9664();
  return;
}



/* Entry: 1077a96f8; end: 1077a9717;  */

void FUN_1077a96f8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001077a9718(&uStack_11,param_1);
  return;
}



/* Entry: 1077aa370; end: 1077aa38b;  */

void FUN_1077aa370(void)

{
  func_0x0001077aca20();
  func_0x0001077acd10();
  return;
}



/* Entry: 1077aa454; end: 1077aa45b;  */

void FUN_1077aa454(void)

{
  return;
}



/* Entry: 1077aa530; end: 1077aa53b;  */

void FUN_1077aa530(void)

{
  return;
}



/* Entry: 1077aa974; end: 1077aa9d7;  */

void FUN_1077aa974(undefined8 param_1,undefined1 param_2)

{
  func_0x0001077f27dc(param_2);
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aab08; end: 1077aab0b;  */

undefined8 FUN_1077aab08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077aac40; end: 1077aac87;  */

undefined8 * FUN_1077aac40(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 uStack_28;
  
  func_0x0001077ac6d8();
  func_0x0001077acb30();
  func_0x0001077ac958();
  func_0x0001077acad0();
  func_0x0001077ac76c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077ac994();
  func_0x0001077acae8();
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 1077aad80; end: 1077aada3;  */

void FUN_1077aad80(void)

{
  func_0x0001077acab8();
  func_0x0001077f2868();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077aaeb8; end: 1077aaedb;  */

void FUN_1077aaeb8(void)

{
  func_0x0001077acab8();
  func_0x0001077f2b60();
  func_0x0001077ac894();
  return;
}



/* Entry: 1077ab078; end: 1077ab18b;  */

undefined8 FUN_1077ab078(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uStack_30 = 0;
  }
  else {
    func_0x0001077acdc8();
    func_0x0001074033c8();
    puStack_28 = auStack_38;
    func_0x0001077acb00(*(undefined4 *)(unaff_x19 + 0x30));
    func_0x0001077acb6c((&PTR_DAT_1109db120)[extraout_x8],&puStack_28);
  }
  return uStack_30;
}



/* Entry: 1077ab200; end: 1077ab21b;  */

void FUN_1077ab200(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab2c0; end: 1077ab2db;  */

void FUN_1077ab2c0(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab358; end: 1077ab373;  */

void FUN_1077ab358(void)

{
  func_0x0001077ac824();
  func_0x0001077ac6ac();
  return;
}



/* Entry: 1077ab51c; end: 1077ab573;  */

void FUN_1077ab51c(long param_1,long param_2)

{
  code *extraout_x8;
  
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099aec8)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x0001077acbc0();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1077ab788; end: 1077ab7d7;  */

void FUN_1077ab788(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077ac9b4();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acd98();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db2e8)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077ab9e8; end: 1077aba37;  */

void FUN_1077ab9e8(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x8;
  
  func_0x0001077ac9b4();
  if (!(bool)in_ZR || extraout_w8 != -1) {
    if (extraout_w8 == -1) {
      func_0x0001077acf78();
    }
    else {
      func_0x0001077acc7c();
      func_0x0001077ac9e0((&PTR_DAT_1109db348)[extraout_x8]);
    }
  }
  return;
}



/* Entry: 1077abc48; end: 1077abc6b;  */

undefined8 FUN_1077abc48(undefined8 param_1)

{
  func_0x0001077abc6c();
  return param_1;
}



/* Entry: 1077abed8; end: 1077abeeb;  */

undefined8 FUN_1077abed8(void)

{
  return 1;
}



/* Entry: 1077ac190; end: 1077ac19b;  */

undefined8 FUN_1077ac190(void)

{
  return 1;
}



/* Entry: 1077ac3b0; end: 1077ac45b;  */

void FUN_1077ac3b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x40) != 0) {
    func_0x0001077acfa0();
    *(undefined4 *)(lVar1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1077ad038; end: 1077ad6bb;  */

void FUN_1077ad038(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar9 = param_1 + 0xd0;
  func_0x00010778cf84(uVar9,param_2 + 0xd0);
  if ((uVar9 & 1) == 0) {
    lVar10 = param_1 + 0x140;
    func_0x000107781d84(lVar10,param_2 + 0x140);
    if ((int)lVar10 != 0) {
      lVar10 = param_1 + 0x168;
      func_0x000107785b50(lVar10,param_2 + 0x168);
      if ((int)lVar10 != 0) {
        lVar10 = param_1 + 0x1a0;
        func_0x0001077ab4ac(lVar10,param_2 + 0x1a0);
        if ((int)lVar10 != 0) {
          lVar10 = param_1 + 0x1d8;
          func_0x000107785b50(lVar10,param_2 + 0x1d8);
          if ((int)lVar10 != 0) {
            lVar10 = param_1 + 0x210;
            func_0x0001077ab60c(lVar10,param_2 + 0x210);
            if ((int)lVar10 != 0) {
              lVar10 = param_1 + 0x248;
              func_0x0001077860a0(lVar10,param_2 + 0x248);
              if ((int)lVar10 != 0) {
                lVar10 = param_1 + 0x2e8;
                func_0x000107785b50(lVar10,param_2 + 0x2e8);
                if ((int)lVar10 != 0) {
                  lVar10 = param_1 + 800;
                  func_0x000107785dfc(lVar10,param_2 + 800);
                  if ((int)lVar10 != 0) {
                    lVar10 = param_1 + 0x360;
                    func_0x000107785b50(lVar10,param_2 + 0x360);
                    if ((int)lVar10 != 0) {
                      lVar10 = param_1 + 0x398;
                      func_0x000107786038(lVar10,param_2 + 0x398);
                      if ((int)lVar10 != 0) {
                        lVar10 = param_1 + 0x3d0;
                        func_0x0001077ab73c(lVar10,param_2 + 0x3d0);
                        if ((int)lVar10 != 0) {
                          lVar10 = param_1 + 0x408;
                          func_0x000107786038(lVar10,param_2 + 0x408);
                          if ((int)lVar10 != 0) {
                            lVar10 = param_1 + 0x440;
                            func_0x0001077ab73c(lVar10,param_2 + 0x440);
                            if ((int)lVar10 != 0) {
                              lVar10 = param_1 + 0x478;
                              func_0x000107786038(lVar10,param_2 + 0x478);
                              if ((int)lVar10 != 0) {
                                lVar10 = param_1 + 0x4b0;
                                func_0x0001077ab86c(lVar10,param_2 + 0x4b0);
                                if ((int)lVar10 != 0) {
                                  lVar10 = param_1 + 0x4e8;
                                  func_0x00010778c12c(lVar10,param_2 + 0x4e8);
                                  if ((int)lVar10 != 0) {
                                    lVar10 = param_1 + 0x530;
                                    func_0x000107798a18(lVar10,param_2 + 0x530);
                                    if ((int)lVar10 != 0) {
                                      lVar10 = param_1 + 0x578;
                                      func_0x000107785b50(lVar10,param_2 + 0x578);
                                      if ((int)lVar10 != 0) {
                                        lVar10 = param_1 + 0x5b0;
                                        func_0x000107785b50(lVar10,param_2 + 0x5b0);
                                        if ((int)lVar10 != 0) {
                                          lVar10 = param_1 + 0x5e8;
                                          func_0x000107786038(lVar10,param_2 + 0x5e8);
                                          if ((int)lVar10 != 0) {
                                            lVar10 = param_1 + 0x620;
                                            func_0x000107785dfc(lVar10,param_2 + 0x620);
                                            if ((int)lVar10 != 0) {
                                              lVar10 = param_1 + 0x660;
                                              func_0x0001077ab99c(lVar10,param_2 + 0x660);
                                              if ((int)lVar10 != 0) {
                                                lVar10 = param_1 + 0x698;
                                                func_0x000107798a18(lVar10,param_2 + 0x698);
                                                if ((int)lVar10 != 0) {
                                                  lVar10 = param_1 + 0x6e0;
                                                  func_0x0001077abacc(lVar10,param_2 + 0x6e0);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0x718;
                                                    func_0x0001077abbfc(lVar10,param_2 + 0x718);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0x750;
                                                      func_0x000107786038(lVar10,param_2 + 0x750);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0x788;
                                                        func_0x000107786038(lVar10,param_2 + 0x788);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0x7c0;
                                                          func_0x000107786038(lVar10,param_2 + 0x7c0
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0x7f8;
                                                            func_0x000107786038(lVar10,param_2 + 
                                                  0x7f8);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0x830;
                                                    func_0x000107786038(lVar10,param_2 + 0x830);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0x868;
                                                      func_0x000107785b50(lVar10,param_2 + 0x868);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0x8a0;
                                                        func_0x000107786038(lVar10,param_2 + 0x8a0);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0x8d8;
                                                          func_0x000107786038(lVar10,param_2 + 0x8d8
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0x910;
                                                            func_0x00010779465c(lVar10,param_2 + 
                                                  0x910);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0x958;
                                                    func_0x000107798a18(lVar10,param_2 + 0x958);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0x9a0;
                                                      func_0x000107786038(lVar10,param_2 + 0x9a0);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0x9d8;
                                                        func_0x0001077abd5c(lVar10,param_2 + 0x9d8);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0xa10;
                                                          func_0x000107785b50(lVar10,param_2 + 0xa10
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0xa48;
                                                            func_0x0001077ab4ac(lVar10,param_2 + 
                                                  0xa48);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0xa80;
                                                    func_0x0001077abe8c(lVar10,param_2 + 0xa80);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0xad0;
                                                      func_0x000107798a18(lVar10,param_2 + 0xad0);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0xb18;
                                                        func_0x000107785b50(lVar10,param_2 + 0xb18);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0xb50;
                                                          func_0x0001077ab60c(lVar10,param_2 + 0xb50
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0xb88;
                                                            func_0x0001077ac020(lVar10,param_2 + 
                                                  0xb88);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0xbc0;
                                                    func_0x000107785b50(lVar10,param_2 + 0xbc0);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0xbf8;
                                                      func_0x000107786038(lVar10,param_2 + 0xbf8);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0xc30;
                                                        func_0x000107786038(lVar10,param_2 + 0xc30);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0xc68;
                                                          func_0x000107786038(lVar10,param_2 + 0xc68
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0xca0;
                                                            func_0x000107786038(lVar10,param_2 + 
                                                  0xca0);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0xcd8;
                                                    func_0x000107785dfc(lVar10,param_2 + 0xcd8);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0xd18;
                                                      func_0x000107785b50(lVar10,param_2 + 0xd18);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0xd50;
                                                        func_0x000107786038(lVar10,param_2 + 0xd50);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0xd88;
                                                          func_0x0001077ab73c(lVar10,param_2 + 0xd88
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0xdc0;
                                                            func_0x000107786038(lVar10,param_2 + 
                                                  0xdc0);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0xdf8;
                                                    func_0x000107786038(lVar10,param_2 + 0xdf8);
                                                    if ((int)lVar10 != 0) {
                                                      lVar10 = param_1 + 0xe30;
                                                      func_0x0001077ab73c(lVar10,param_2 + 0xe30);
                                                      if ((int)lVar10 != 0) {
                                                        lVar10 = param_1 + 0xe68;
                                                        func_0x000107786038(lVar10,param_2 + 0xe68);
                                                        if ((int)lVar10 != 0) {
                                                          lVar10 = param_1 + 0xea0;
                                                          func_0x0001077ac150(lVar10,param_2 + 0xea0
                                                                             );
                                                          if ((int)lVar10 != 0) {
                                                            lVar10 = param_1 + 0xed8;
                                                            func_0x0001077ac280(lVar10,param_2 + 
                                                  0xed8);
                                                  if ((int)lVar10 != 0) {
                                                    lVar10 = param_1 + 0xf20;
                                                    func_0x0001077ac45c(lVar10,param_2 + 0xf20);
                                                    if ((int)lVar10 != 0) {
                                                      uVar9 = param_1 + 0xf68;
                                                      func_0x00010778d05c(uVar9,param_2 + 0xf68);
                                                      uVar11 = param_1 + 0xfd8;
                                                      func_0x00010778d01c(uVar11,param_2 + 0xfd8);
                                                      uVar1 = (uint)uVar11;
                                                      func_0x0001077ade74(0x1038);
                                                      func_0x00010778d05c();
                                                      uVar2 = uVar1;
                                                      func_0x0001077ade68(0x10a8);
                                                      uVar3 = uVar2;
                                                      func_0x0001077ade68(0x1108);
                                                      uVar4 = uVar3;
                                                      func_0x0001077ade68(0x1168);
                                                      uVar5 = uVar4;
                                                      func_0x0001077ade74(0x11c8);
                                                      func_0x00010778d09c();
                                                      uVar6 = uVar5;
                                                      func_0x0001077ade74(0x1230);
                                                      func_0x00010778d11c();
                                                      uVar7 = uVar6;
                                                      func_0x0001077ade68(0x1290);
                                                      uVar12 = param_1 + 0x12f0;
                                                      func_0x00010778d05c(uVar12,param_2 + 0x12f0);
                                                      uVar13 = uVar12;
                                                      func_0x0001077ade68(0x1360);
                                                      uVar14 = param_1 + 0x13c0;
                                                      func_0x00010778d05c(uVar14,param_2 + 0x13c0);
                                                      uVar15 = uVar14;
                                                      func_0x0001077ade68(0x1430);
                                                      uVar16 = uVar15;
                                                      func_0x0001077ade68(0x1490);
                                                      uVar17 = uVar16;
                                                      func_0x0001077ade68(0x14f0);
                                                      uVar18 = uVar17;
                                                      func_0x0001077ade74(0x1550);
                                                      func_0x00010778d09c();
                                                      uVar19 = uVar18;
                                                      func_0x0001077ade74(0x15b8);
                                                      func_0x00010778d11c();
                                                      if ((((((((uVar9 & 1) == 0) &&
                                                              ((uVar11 & 1) == 0)) &&
                                                             ((uVar1 & 1) == 0)) &&
                                                            (((uVar2 & 1) == 0 && ((uVar3 & 1) == 0)
                                                             ))) && (((uVar4 & 1) == 0 &&
                                                                     (((uVar5 & 1) == 0 &&
                                                                      ((uVar6 & 1) == 0)))))) &&
                                                          ((uVar7 & 1) == 0)) &&
                                                         (((((uVar12 & 1) == 0 &&
                                                            ((uVar13 & 1) == 0)) &&
                                                           ((uVar14 & 1) == 0)) &&
                                                          ((((uVar15 & 1) == 0 &&
                                                            ((uVar16 & 1) == 0)) &&
                                                           (((uVar17 & 1) == 0 &&
                                                            (((uVar18 & 1) == 0 &&
                                                             ((uVar19 & 1) == 0)))))))))) {
                                                        if (*(char *)(param_1 + 0x1619) == '\x01') {
                                                          if ((*(byte *)(param_1 + 0x1618) & 1) == 0
                                                             ) {
                                                            return;
                                                          }
                                                        }
                                                        else {
                                                          iVar8 = (int)param_1 + 0xa80;
                                                          func_0x0001074c9fec();
                                                          *(ushort *)(param_1 + 0x1618) =
                                                               (ushort)iVar8 | 0x100;
                                                          if (iVar8 == 0) {
                                                            return;
                                                          }
                                                        }
                                                        if (*(int *)(param_1 + 0x1330) == 1 &&
                                                            *(int *)(param_2 + 0x1330) == 1) {
                                                          func_0x0001077ade4c(param_1 + 0x12f0);
                                                          func_0x0001077ade4c(param_2 + 0x12f0);
                                                          func_0x00010775dea4(param_1 + 0x12f0,
                                                                              param_2 + 0x12f0);
                                                        }
                                                        if (*(int *)(param_1 + 0x1400) == 1 &&
                                                            *(int *)(param_2 + 0x1400) == 1) {
                                                          func_0x0001077ade4c(param_1 + 0x13c0);
                                                          func_0x0001077ade4c(param_2 + 0x13c0);
                                                          func_0x00010775dea4(param_1 + 0x13c0,
                                                                              param_2 + 0x13c0);
                                                        }
                                                        if (*(int *)(param_1 + 0x1460) == 1 &&
                                                            *(int *)(param_2 + 0x1460) == 1) {
                                                          func_0x00010754bee4();
                                                          func_0x00010754bee4();
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1077adb90; end: 1077adc3f;  */

void FUN_1077adb90(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  func_0x0001077ada80(param_1,&uStack_48,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x30;
    __Znwm();
    uStack_50 = 0;
    lStack_60 = lVar2;
    plStack_58 = param_1 + 1;
    func_0x000107278b70(lVar2 + 0x20,param_2);
    uStack_50 = CONCAT71(uStack_50._1_7_,1);
    func_0x0001077adafc(param_1,uStack_48,plVar1,lVar2);
    lStack_60 = 0;
    func_0x0001077adb4c(&lStack_60);
  }
  return;
}



/* Entry: 1077adfa8; end: 1077adfab;  */

undefined8 * FUN_1077adfa8(undefined8 *param_1)

{
  func_0x0001074cfcfc(param_1 + 4);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1077ae210; end: 1077ae253;  */

void FUN_1077ae210(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x000107433610(uStack_30 + 0xd8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae414; end: 1077ae453;  */

void FUN_1077ae414(void)

{
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x0001077af248(uStack_30 + 0x148);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae614; end: 1077ae657;  */

void FUN_1077ae614(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x0001077af1dc();
  func_0x00010748312c(uStack_30 + 0x3f0,unaff_x19 + 8);
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077ae834; end: 1077ae877;  */

void FUN_1077ae834(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0xa28) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0xa20) = param_2;
  *(undefined8 *)(extraout_x8 + 0xa38) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0xa30) = param_1;
  *(undefined1 *)(extraout_x8 + 0xa40) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aea4c; end: 1077aea8f;  */

void FUN_1077aea4c(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  undefined1 extraout_w9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  
  func_0x0001077af1dc();
  func_0x0001077af220();
  *(undefined8 *)(extraout_x8 + 0x6d8) = in_register_00005028;
  *(undefined8 *)(extraout_x8 + 0x6d0) = param_2;
  *(undefined8 *)(extraout_x8 + 0x6e8) = in_register_00005008;
  *(undefined8 *)(extraout_x8 + 0x6e0) = param_1;
  *(undefined1 *)(extraout_x8 + 0x6f0) = extraout_w9;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aec64; end: 1077aecaf;  */

void FUN_1077aec64(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_30;
  
  func_0x0001077af1dc();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  *(undefined1 *)(lStack_30 + 0x508) = *(undefined1 *)(unaff_x19 + 4);
  *(undefined8 *)(lStack_30 + 0x4f0) = uVar4;
  *(undefined8 *)(lStack_30 + 0x4e8) = uVar3;
  *(undefined8 *)(lStack_30 + 0x500) = uVar2;
  *(undefined8 *)(lStack_30 + 0x4f8) = uVar1;
  func_0x0001077af1f8();
  func_0x0001077af210();
  func_0x0001077af240();
  func_0x0001077af230();
  return;
}



/* Entry: 1077aee7c; end: 1077aeec7;  */

undefined8 * FUN_1077aee7c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109b6550;
  param_1[1] = 0;
  func_0x0001077aeec8(param_1 + 3);
  return param_1;
}



/* Entry: 1077af834; end: 1077af8eb;  */

void FUN_1077af834(void)

{
  return;
}



/* Entry: 1077afd64; end: 1077afd83;  */

void FUN_1077afd64(void)

{
  func_0x0001077b00dc();
  func_0x0001077afde8();
  return;
}



/* Entry: 1077afebc; end: 1077afedb;  */

void FUN_1077afebc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109db5f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077b01f4; end: 1077b02c7;  */

/* WARNING: Possible PIC construction at 0x0001077b05e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b09dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0a74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b0958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b0a78) */
/* WARNING: Removing unreachable block (ram,0x0001077b0a50) */
/* WARNING: Removing unreachable block (ram,0x0001077b09e0) */
/* WARNING: Removing unreachable block (ram,0x0001077b09c0) */
/* WARNING: Removing unreachable block (ram,0x0001077b05e8) */
/* WARNING: Removing unreachable block (ram,0x0001077b095c) */

undefined **
FUN_1077b01f4(undefined **param_1,char *param_2,undefined **param_3,undefined **param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined1 uVar13;
  undefined8 extraout_x8;
  undefined *puVar14;
  undefined8 extraout_x8_00;
  undefined **extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined **extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined **unaff_x19;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **unaff_x21;
  long lVar17;
  undefined **unaff_x24;
  undefined8 ******ppppppuVar18;
  undefined8 *****pppppuVar19;
  float fVar20;
  undefined1 auStack_7d0 [328];
  undefined *apuStack_688 [7];
  undefined *apuStack_650 [9];
  undefined8 uStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined8 *****pppppuStack_5f0;
  undefined *puStack_5e8;
  undefined1 auStack_5e0 [8];
  undefined *apuStack_5d8 [4];
  undefined *apuStack_5b8 [6];
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 auStack_568 [56];
  undefined1 auStack_530 [72];
  undefined8 uStack_4e8;
  undefined8 ****ppppuStack_4c0;
  undefined *puStack_4b8;
  undefined1 auStack_4b0 [6];
  undefined2 uStack_4aa;
  undefined *puStack_4a8;
  undefined *apuStack_4a0 [5];
  undefined4 uStack_478;
  undefined4 uStack_470;
  byte bStack_468;
  byte bStack_3c0;
  byte bStack_388;
  byte bStack_380;
  undefined *puStack_378;
  undefined *apuStack_370 [5];
  undefined4 uStack_348;
  undefined4 auStack_340 [2];
  undefined1 auStack_338 [40];
  undefined4 uStack_310;
  undefined1 auStack_300 [24];
  undefined4 uStack_2e8;
  undefined4 uStack_2d0;
  undefined1 auStack_2c8 [48];
  undefined4 uStack_298;
  undefined4 auStack_290 [12];
  undefined4 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_248;
  undefined *apuStack_240 [2];
  char cStack_230;
  undefined8 uStack_208;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  undefined *apuStack_198 [11];
  byte bStack_140;
  undefined1 auStack_131 [17];
  char cStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined2 uStack_d2;
  undefined *puStack_d0;
  undefined *apuStack_c8 [14];
  byte bStack_58;
  undefined1 auStack_50 [16];
  char cStack_40;
  undefined8 uStack_38;
  undefined1 *puVar2;
  
  func_0x0001077b0e08();
  ppuVar16 = param_3;
  uStack_38 = extraout_x8;
  if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
    auStack_50[0] = 0;
    cStack_40 = '\0';
    ppuVar6 = param_1;
LAB_1077b0288:
    ppuVar15 = (undefined **)0x1;
  }
  else {
    ppuVar6 = (undefined **)((long)param_2 + 8);
    puVar14 = *(undefined **)param_2;
    param_2 = "source";
    (**(code **)(puVar14 + 0x38))(auStack_50);
    in_ZR = cStack_40 == '\x01';
    unaff_x19 = param_1;
    unaff_x21 = param_3;
    if (!(bool)in_ZR) goto LAB_1077b0288;
    uStack_d2 = 0;
    func_0x0001077b0ec4();
    func_0x000107323db4();
    ppuVar15 = (undefined **)(ulong)bStack_58;
    if ((bStack_58 & 1) != 0) {
      param_2 = (char *)apuStack_c8;
      func_0x000107383540(param_1 + 1);
    }
    ppuVar6 = &puStack_d0;
    func_0x00010732493c();
  }
  func_0x0001077b0e3c();
  func_0x0001077b0de4(uStack_38);
  if ((bool)in_ZR) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  func_0x0001077b0e30();
  func_0x0001077b0e28();
  puStack_e8 = &UNK_1077b02c8;
  puStack_f0 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x0001077b0e08();
  uStack_118 = extraout_x8_00;
  if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
    auStack_131[1] = 0;
    cStack_120 = '\0';
code_r0x0001077b0354:
    ppuVar15 = param_4;
    unaff_x21 = ppuVar16;
    ppuVar16 = (undefined **)0x1;
  }
  else {
    func_0x0001077b0eec();
    func_0x0001077b0e7c();
    in_ZR = cStack_120 == '\x01';
    if (!(bool)in_ZR) goto code_r0x0001077b0354;
    ppuVar6 = (undefined **)auStack_131;
    param_2 = auStack_131 + 1;
    func_0x000107555b80(apuStack_198);
    ppuVar16 = (undefined **)(ulong)bStack_140;
    if ((bStack_140 & 1) != 0) {
      param_2 = (char *)apuStack_198;
      func_0x00010779b470();
      in_ZR = bStack_140 == 1;
      ppuVar6 = unaff_x19;
      if ((bool)in_ZR) {
        ppuVar6 = apuStack_198;
        func_0x0001073e6484();
      }
    }
  }
  func_0x0001077b0e3c();
  func_0x0001077b0de4(uStack_118);
  if ((bool)in_ZR) {
    return ppuVar16;
  }
  ___stack_chk_fail();
  func_0x0001077b0e30();
  func_0x0001077b0e28();
  puStack_1a8 = &UNK_1077b0394;
  pppppuVar19 = (undefined8 *****)&pppuStack_1b0;
  puVar3 = auStack_4b0;
  ppuVar16 = ppuVar6;
  ppuVar8 = (undefined **)param_2;
  pcVar12 = (char *)unaff_x21;
  pppuStack_1b0 = (undefined8 ***)&puStack_f0;
  func_0x0001077b0e08();
  iVar5 = (int)ppuVar16;
  uStack_208 = extraout_x8_02;
  uVar4 = *(char *)(ppuVar8 + 2) == '\x01';
  if ((bool)uVar4) {
    ppuVar16 = (undefined **)((long)param_2 + 8);
    (**(code **)(*(undefined **)param_2 + 0x30))();
    iVar5 = (int)ppuVar16;
    if (((ulong)ppuVar16 & 1) != 0) goto code_r0x0001077b03f0;
    ppuVar16 = (undefined **)&UNK_10f42a235;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
code_r0x0001077b084c:
    *(undefined1 *)extraout_x8_01 = 0;
    *(undefined1 *)(extraout_x8_01 + 0x27) = 0;
  }
  else {
code_r0x0001077b03f0:
    unaff_x24 = &puStack_378;
    func_0x0001077b0eac();
    if (iVar5 == 0) {
      ppuVar16 = (undefined **)&UNK_10f415ce6;
      func_0x0001077b0eac();
      if (iVar5 == 0) {
        func_0x0001077b0eac();
        if (iVar5 != 0) {
          uStack_248 = 3;
          ppuVar8 = &puStack_378;
          ppuVar16 = &puStack_378;
          puVar14 = &UNK_1077b05e8;
          ppuVar6 = extraout_x8_01;
          ppuVar9 = extraout_x8_01;
          goto code_r0x0001077b0db0;
        }
        func_0x0001077b0eac();
        if (iVar5 == 0) {
          func_0x00010002b838(apuStack_240,&UNK_10f42a254);
          func_0x000100610910(&puStack_4a8);
          func_0x00010048a6c8(&puStack_378,&puStack_4a8,&DAT_10f3b3c06);
          ppuVar16 = &puStack_378;
          func_0x000100066230(unaff_x21);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_378);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_4a8);
          unaff_x21 = apuStack_240;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          goto code_r0x0001077b084c;
        }
        uStack_348 = 0;
        uStack_310 = 0;
        uStack_298 = 0;
        uStack_260 = 0;
        puStack_4a8._0_4_ = 0x3eb33333;
        uStack_478 = 1;
        ppuVar6 = &puStack_378;
        func_0x0001077b0e54(&puStack_378);
        func_0x0001077b0e4c();
        puStack_4a8._0_4_ = 0;
        uStack_478 = 1;
        func_0x0001077b0e54(auStack_340);
        func_0x0001077b0e4c();
        func_0x0001077b0e64();
        func_0x0001077b0f20();
        ppuVar16 = apuStack_4a0;
        func_0x000107383540(auStack_300);
        func_0x00010732442c(apuStack_4a0);
        func_0x000104c2f714(apuStack_240);
        puStack_4a8 = (undefined *)CONCAT44(puStack_4a8._4_4_,0x3eb33333);
        uStack_478 = 1;
        func_0x0001077b0e54(auStack_290);
        func_0x0001077b0e4c();
        pcVar12 = "bottom";
        uVar7 = 0;
        func_0x0001077b0df8();
        if ((uVar7 & 1) == 0) {
code_r0x0001077b07a8:
          puStack_4a8 = (undefined *)((ulong)puStack_4a8 & 0xffffffffffffff00);
          bStack_388 = 0;
        }
        else {
          pcVar12 = &UNK_10f42a22d;
          uVar7 = 0;
          func_0x0001077b0df8();
          if ((uVar7 & 1) == 0) goto code_r0x0001077b07a8;
          uVar7 = 0;
          func_0x0001077b0e9c();
          if ((uVar7 & 1) == 0) goto code_r0x0001077b07a8;
          pcVar12 = "top";
          uVar7 = 0;
          func_0x0001077b0df8();
          if ((uVar7 & 1) == 0) goto code_r0x0001077b07a8;
          ppuVar16 = &puStack_378;
          func_0x0001074e157c(&puStack_4a8);
          bStack_388 = 1;
        }
        unaff_x21 = &puStack_378;
        func_0x0001073e652c();
        if ((bStack_388 & 1) == 0) goto code_r0x0001077b084c;
        unaff_x21 = apuStack_370;
        ppuVar16 = &puStack_4a8;
        func_0x0001074e157c();
        func_0x0001077b0e18(4);
        func_0x0001077b0e74();
        uVar4 = bStack_388 == 1;
        if ((bool)uVar4) {
          unaff_x21 = &puStack_4a8;
          func_0x0001073e652c();
        }
      }
      else {
        auStack_340[0] = 0;
        uStack_2e8 = 0;
        auStack_290[0] = 0;
        uStack_258 = 0;
        puStack_4a8 = (undefined *)0x0;
        apuStack_4a0[0]._0_4_ = 0;
        uStack_470 = 1;
        func_0x0001077b0f0c();
        func_0x0001073e64d8(&puStack_4a8);
        if (((ulong)*(undefined **)((long)param_2 + 0x10) & 1) == 0) {
          apuStack_240[0]._0_1_ = 0;
          cStack_230 = '\0';
code_r0x0001077b05f8:
          func_0x0001077b0f04();
          pcVar12 = &UNK_10f42a1ef;
          uVar7 = 0;
          func_0x0001077b0e8c();
          if ((uVar7 & 1) == 0) goto code_r0x0001077b0800;
          pcVar12 = &UNK_10f42a1ff;
          uVar7 = 0;
          func_0x0001077b0e8c();
          if ((uVar7 & 1) == 0) goto code_r0x0001077b0800;
          pcVar12 = &UNK_10f42a20f;
          uVar7 = 0;
          func_0x0001077b0df8();
          if ((uVar7 & 1) == 0) goto code_r0x0001077b0800;
          ppuVar16 = &puStack_378;
          func_0x0001074e1490(&puStack_4a8);
          bStack_380 = 1;
        }
        else {
          ppuVar16 = (undefined **)&UNK_10f42a1e2;
          (**(code **)(*(undefined **)param_2 + 0x38))
                    (apuStack_240,(undefined **)((long)param_2 + 8));
          uVar4 = cStack_230 == '\x01';
          if (!(bool)uVar4) goto code_r0x0001077b05f8;
          uStack_4aa = 0;
          pcVar12 = (char *)ppuVar15;
          func_0x000107797a58(&puStack_4a8,apuStack_240,unaff_x21,ppuVar15,(long)&uStack_4aa + 1,
                              &uStack_4aa);
          if ((bStack_468 & 1) != 0) {
            func_0x0001077b0f0c();
            func_0x000107554964(&puStack_4a8);
            ppuVar16 = unaff_x21;
            goto code_r0x0001077b05f8;
          }
          func_0x000107554964(&puStack_4a8);
          func_0x0001077b0f04();
          ppuVar16 = unaff_x21;
code_r0x0001077b0800:
          puStack_4a8 = (undefined *)((ulong)puStack_4a8 & 0xffffffffffffff00);
          bStack_380 = 0;
        }
        unaff_x21 = &puStack_378;
        func_0x0001073e6448();
        if ((bStack_380 & 1) == 0) goto code_r0x0001077b084c;
        unaff_x21 = apuStack_370;
        ppuVar16 = &puStack_4a8;
        func_0x0001074e1490();
        func_0x0001077b0e18(2);
        func_0x0001077b0e74();
        uVar4 = bStack_380 == 1;
        if ((bool)uVar4) {
          unaff_x21 = &puStack_4a8;
          func_0x0001073e6448();
        }
      }
    }
    else {
      uStack_348 = 0;
      uStack_2d0 = 0;
      uStack_298 = 0;
      puStack_4a8._0_4_ = 0x3f800000;
      uStack_478 = 1;
      ppuVar6 = &puStack_378;
      func_0x0001077b0e54(&puStack_378);
      func_0x0001077b0e4c();
      func_0x0001077b0e64();
      func_0x0001077b0f20();
      ppuVar16 = apuStack_4a0;
      func_0x000107383540(auStack_338);
      func_0x00010732442c(apuStack_4a0);
      func_0x000104c2f714(apuStack_240);
      puStack_4a8 = (undefined *)CONCAT44(puStack_4a8._4_4_,0x3f400000);
      uStack_478 = 1;
      func_0x0001077b0e54(auStack_2c8);
      func_0x0001077b0e4c();
      pcVar12 = &DAT_10f4154b4;
      uVar7 = 0;
      func_0x0001077b0df8();
      if ((uVar7 & 1) == 0) {
code_r0x0001077b0560:
        puStack_4a8 = (undefined *)((ulong)puStack_4a8 & 0xffffffffffffff00);
        bStack_3c0 = 0;
      }
      else {
        uVar7 = 0;
        func_0x0001077b0e9c();
        if ((uVar7 & 1) == 0) goto code_r0x0001077b0560;
        pcVar12 = &DAT_10f2e8c7d;
        uVar7 = 0;
        func_0x0001077b0df8();
        if ((uVar7 & 1) == 0) goto code_r0x0001077b0560;
        ppuVar16 = &puStack_378;
        func_0x0001074e1450(&puStack_4a8);
        bStack_3c0 = 1;
      }
      unaff_x21 = &puStack_378;
      func_0x0001073e6414();
      if ((bStack_3c0 & 1) == 0) goto code_r0x0001077b084c;
      unaff_x21 = apuStack_370;
      ppuVar16 = &puStack_4a8;
      func_0x0001074e1450();
      func_0x0001077b0e18(1);
      func_0x0001077b0e74();
      uVar4 = bStack_3c0 == 1;
      if ((bool)uVar4) {
        unaff_x21 = &puStack_4a8;
        func_0x0001073e6414();
      }
    }
  }
  func_0x0001077b0de4(uStack_208);
  if ((bool)uVar4) {
    return unaff_x21;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_4a8);
  ppuVar8 = apuStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001077b0e28();
  puVar1 = auStack_5e0;
  puVar2 = auStack_5e0;
  puStack_4b8 = &SUB_1077b08e8;
  ppppppuVar18 = (undefined8 ******)&ppppuStack_4c0;
  ppppuStack_4c0 = pppppuVar19;
  func_0x0001077b0e08();
  puStack_588 = &UNK_10e52b660;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = 0;
  uVar4 = *(int *)(ppuVar8 + 0x26) + -1 == 3;
  uStack_4e8 = extraout_x8_04;
  switch(*(int *)(ppuVar8 + 0x26) + -1) {
  case 0:
    func_0x0001077b0f34();
    ppuVar16 = &puStack_588;
    ppuVar11 = ppuVar8 + 8;
    puVar14 = &UNK_1077b095c;
    ppuVar10 = extraout_x8_03;
    goto code_r0x0001077b0bac;
  case 1:
    if (*(int *)(ppuVar8 + 8) != 0) {
      func_0x000107797c64(auStack_530,ppuVar8 + 1);
      func_0x000100060964(auStack_568,&UNK_10f42a1e2);
      func_0x000107267f10(&puStack_588,auStack_568);
      func_0x0001072d80fc();
      func_0x0001077b0eb4();
      func_0x000104c3323c(auStack_530);
    }
    ppuVar11 = (undefined **)&UNK_10f42a1ef;
    ppuVar9 = &puStack_588;
    pcVar12 = (char *)(ppuVar8 + 9);
    puVar14 = &UNK_1077b0a50;
    ppuVar10 = extraout_x8_03;
    goto code_r0x0001077b0c3c;
  case 2:
    ppuVar8 = apuStack_5b8;
    func_0x0001077b0e44(apuStack_5b8);
    func_0x0001077b0ee0();
    apuStack_5d8[0] = apuStack_5b8[0];
    break;
  case 3:
    func_0x0001077b0f34();
    ppuVar16 = (undefined **)&UNK_10f42a22d;
    ppuVar10 = &puStack_588;
    pcVar12 = (char *)(ppuVar8 + 8);
    puVar14 = &UNK_1077b09c0;
    ppuVar9 = extraout_x8_03;
    goto code_r0x0001077b0b1c;
  default:
    ppuVar8 = apuStack_5d8;
    func_0x0001077b0e44(apuStack_5d8);
    func_0x0001077b0ee0();
  }
  extraout_x8_03[1] = apuStack_5d8[0];
  extraout_x8_03[2] = ppuVar8[1];
  *ppuVar8 = (undefined *)0x0;
  ppuVar8[1] = (undefined *)0x0;
  func_0x000104c335c0(ppuVar8);
  ppuVar9 = &puStack_588;
  func_0x000104c33548();
  func_0x0001077b0de4(uStack_4e8);
  if ((bool)uVar4) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(auStack_530);
  ppuVar10 = &puStack_588;
  func_0x000104c33548();
  puVar14 = &UNK_1077b0b1c;
  func_0x0001077b0e28();
code_r0x0001077b0b1c:
  puVar2 = auStack_7d0 + 0x140;
  ppuStack_600 = ppuVar8;
  ppuStack_5f8 = ppuVar9;
  pppppuStack_5f0 = ppppppuVar18;
  puStack_5e8 = puVar14;
  func_0x0001077b0e08();
  uStack_608 = extraout_x8_05;
  ppuVar11 = ppuVar16;
  if (*(int *)((long)pcVar12 + 0x30) != 0) {
    func_0x000107784b60(apuStack_650,pcVar12);
    ppuVar10 = (undefined **)(auStack_7d0 + 0x148);
    func_0x000100060964(ppuVar10,ppuVar16);
    func_0x0001077b0f2c();
    ppuVar11 = apuStack_650;
    func_0x0001072d80fc();
    func_0x0001077b0ebc();
    func_0x0001077b0e5c();
    ppuVar8 = ppuVar16;
  }
  func_0x0001077b0de4(uStack_608);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    ppuVar16 = ppuVar10;
    func_0x0001077b0e5c();
    puVar14 = &UNK_1077b0bac;
    func_0x0001077b0e28();
    ppppppuVar18 = &pppppuStack_5f0;
code_r0x0001077b0bac:
    puVar1 = puVar2 + -0xb0;
    *(undefined ***)(puVar2 + -0x20) = ppuVar8;
    *(undefined ***)(puVar2 + -0x18) = ppuVar10;
    *(undefined8 *******)(puVar2 + -0x10) = ppppppuVar18;
    *(undefined **)(puVar2 + -8) = puVar14;
    ppppppuVar18 = (undefined8 ******)(puVar2 + -0x10);
    func_0x0001077b0e08();
    *(undefined8 *)(puVar2 + -0x28) = extraout_x8_06;
    ppuVar10 = ppuVar16;
    if (*(int *)(ppuVar11 + 0xe) != 0) {
      func_0x00010778b104(puVar2 + -0x70,ppuVar11);
      ppuVar10 = (undefined **)(puVar2 + -0xa8);
      func_0x000100060964(ppuVar10,"source");
      func_0x0001077b0f2c();
      ppuVar11 = (undefined **)(puVar2 + -0x70);
      func_0x0001072d80fc();
      func_0x0001077b0ebc();
      func_0x0001077b0e5c();
    }
    func_0x0001077b0de4(*(undefined8 *)(puVar2 + -0x28));
    if (!(bool)uVar4) {
      ___stack_chk_fail();
      ppuVar9 = ppuVar10;
      func_0x0001077b0e5c();
      puVar14 = &UNK_1077b0c3c;
      func_0x0001077b0e28();
code_r0x0001077b0c3c:
      puVar3 = puVar1 + -0x100;
      *(undefined ***)(puVar1 + -0x40) = unaff_x24;
      *(undefined ***)(puVar1 + -0x38) = ppuVar6;
      *(char **)(puVar1 + -0x30) = param_2;
      *(undefined ***)(puVar1 + -0x28) = ppuVar15;
      *(undefined ***)(puVar1 + -0x20) = ppuVar8;
      *(undefined ***)(puVar1 + -0x18) = ppuVar10;
      *(undefined8 *******)(puVar1 + -0x10) = ppppppuVar18;
      *(undefined **)(puVar1 + -8) = puVar14;
      pppppuVar19 = (undefined8 *****)(puVar1 + -0x10);
      func_0x0001077b0e08();
      *(undefined8 *)(puVar1 + -0x48) = extraout_x8_07;
      ppuVar16 = ppuVar11;
      if (*(int *)((long)pcVar12 + 0x50) != 0) {
        uVar4 = *(int *)((long)pcVar12 + 0x50) == 1;
        if ((bool)uVar4) {
          *(undefined8 *)(puVar1 + -0xe8) = 0;
          *(undefined8 *)(puVar1 + -0xe0) = 0;
          *(undefined8 *)(puVar1 + -0xd8) = 0;
          func_0x0001072ac134(puVar1 + -0xe8,9);
          for (lVar17 = 0; uVar4 = lVar17 == 0x24, !(bool)uVar4; lVar17 = lVar17 + 4) {
            fVar20 = *(float *)((long)pcVar12 + lVar17);
            *(undefined4 *)(puVar1 + -0x88) = 3;
            *(double *)(puVar1 + -0x80) = (double)fVar20;
            func_0x0001072aad1c(puVar1 + -0xe8,puVar1 + -0x88);
            func_0x0001077b0f18();
          }
          func_0x000107327958(puVar1 + -0x100,puVar1 + -0xe8);
          *(undefined4 *)(puVar1 + -0x88) = 0;
          *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0xf8);
          *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x100);
          *(undefined8 *)(puVar1 + -0x100) = 0;
          *(undefined8 *)(puVar1 + -0xf8) = 0;
          func_0x000104c33108(puVar1 + -0x100);
          func_0x000107269124(puVar1 + -0xe8);
          func_0x0001077b0f40();
          uVar13 = 1;
        }
        else {
          (**(code **)(**(long **)pcVar12 + 0x28))(puVar1 + -0x88);
          func_0x0001077b0f40();
          uVar13 = 2;
        }
        puVar1[-0x90] = uVar13;
        func_0x0001077b0f18();
        func_0x000100060964(puVar1 + -0x88,ppuVar11);
        func_0x0001077b0f2c();
        ppuVar16 = (undefined **)(puVar1 + -0xd0);
        func_0x0001072d80fc();
        func_0x0001077b0eb4();
        ppuVar9 = (undefined **)(puVar1 + -0xd0);
        func_0x000104c3323c();
        ppuVar8 = ppuVar11;
      }
      func_0x0001077b0de4(*(undefined8 *)(puVar1 + -0x48));
      if ((bool)uVar4) {
        return ppuVar9;
      }
      ___stack_chk_fail();
      puVar14 = &UNK_1077b0db0;
      ppuVar6 = ppuVar9;
      func_0x0001077b0e28();
code_r0x0001077b0db0:
      *(undefined ***)(puVar3 + -0x20) = ppuVar8;
      *(undefined ***)(puVar3 + -0x18) = ppuVar9;
      *(undefined8 ******)(puVar3 + -0x10) = pppppuVar19;
      *(undefined **)(puVar3 + -8) = puVar14;
      func_0x0001074e13c8(ppuVar6 + 1,ppuVar16 + 1);
      *(undefined1 *)(ppuVar6 + 0x27) = 1;
      return ppuVar6;
    }
  }
  return ppuVar10;
}



/* Entry: 1077b0de4; end: 1077b0f57;  */

void FUN_1077b0de4(void)

{
  return;
}



/* Entry: 1077b1298; end: 1077b12e7;  */

void FUN_1077b1298(float param_1,float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)(*(long **)(param_3 + 0x18))[1];
  if (iVar2 != 0) {
    lVar1 = 0x90;
    if (iVar2 != 1) {
      lVar1 = 0x58;
    }
    func_0x00010775e66c((double)param_1,(double)param_2,**(long **)(param_3 + 0x18) + lVar1);
  }
  return;
}



/* Entry: 1077b1468; end: 1077b1497;  */

undefined8 * FUN_1077b1468(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109db640;
  func_0x0001077b14bc(param_1 + 3);
  return param_1;
}



/* Entry: 1077b15cc; end: 1077b1607;  */

void FUN_1077b15cc(long *param_1,undefined8 param_2)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  if (*param_1 != -1) {
    puStack_20 = &uStack_18;
    uStack_18 = param_2;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(param_1,&puStack_20,&UNK_1077b1608);
  }
  return;
}



/* Entry: 1077b192c; end: 1077b1a9f;  */

void FUN_1077b192c(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x23;
  long lVar13;
  long *unaff_x24;
  long *plVar14;
  long *unaff_x25;
  long lVar15;
  ulong unaff_x26;
  long *unaff_x27;
  long lVar16;
  long *unaff_x28;
  long *plVar17;
  long *plStack_458;
  long *plStack_450;
  long *plStack_448;
  long lStack_440;
  long lStack_430;
  long lStack_428;
  long *plStack_420;
  long *plStack_418;
  ulong uStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 **ppuStack_3d0;
  undefined *puStack_3c8;
  undefined1 *puStack_3b8;
  long *plStack_3b0;
  char cStack_3a1;
  long alStack_3a0 [29];
  long alStack_2b8 [29];
  undefined8 uStack_1d0;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  long alStack_140 [26];
  long lStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  plVar5 = alStack_140;
  plVar17 = alStack_140;
  plVar6 = alStack_140;
  plVar10 = param_1;
  func_0x0001077b3d14();
  uStack_58 = extraout_x8;
  if ((char)plVar10[10] == '\x01') {
    func_0x0001077b3e44();
    func_0x0001077f1c70();
  }
  else {
    plVar10 = (long *)0x0;
  }
  func_0x0001077b3538(alStack_140,param_2);
  lStack_70 = param_1[0x18] + 1;
  param_1[0x18] = lStack_70;
  func_0x0001077b3974(auStack_68);
  uVar2 = (int)plVar10 == 0;
  lVar9 = 0x18;
  if ((bool)uVar2) {
    lVar9 = 0;
  }
  plVar4 = (long *)((long)param_1 + lVar9);
  func_0x0001077b3124();
  func_0x0001077b3e98();
  plVar11 = alStack_140;
  if (((ulong)plVar10 & 1) == 0) {
    unaff_x23 = (long *)*param_1;
    uVar8 = param_1[1] - (long)unaff_x23;
    uVar2 = uVar8 == 0xe9;
    plVar11 = alStack_140;
    if (0xe8 < (long)uVar8) {
      plVar14 = (long *)(uVar8 / 0xe8 - 2 >> 1);
      plVar10 = unaff_x23 + (long)plVar14 * 0x1d;
      param_2 = (long *)(param_1[1] + -0xe8);
      plVar4 = param_1;
      plVar5 = plVar10;
      func_0x0001077b2e30(param_1,plVar10,param_2);
      plVar11 = alStack_140;
      unaff_x24 = plVar14;
      if ((int)plVar4 != 0) {
        func_0x0001077b3230(alStack_140,param_2);
        unaff_x25 = (long *)0xe8;
        do {
          plVar11 = plVar10;
          func_0x0001077b3e38();
          plVar4 = plVar17;
          unaff_x24 = (long *)0x0;
          if (plVar14 == (long *)0x0) break;
          plVar14 = (long *)((ulong)((long)plVar14 + -1) >> 1);
          plVar17 = param_1;
          func_0x0001077b2e30(param_1,unaff_x23 + (long)plVar14 * 0x1d,alStack_140);
          plVar4 = plVar17;
          plVar10 = unaff_x23 + (long)plVar14 * 0x1d;
          param_2 = plVar11;
          unaff_x24 = plVar14;
        } while (((ulong)plVar17 & 1) != 0);
        func_0x0001077b3e58();
        func_0x0001077b3e98();
        plVar5 = plVar6;
      }
    }
  }
  func_0x0001077b3cec(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077b3d2c();
  if ((*(byte *)(plVar4 + 4) & 1) != 0) {
    return;
  }
  puStack_148 = &UNK_1077b1aa0;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000104bdc2c8();
  if ((*(byte *)(plVar4 + 3) & 1) != 0) {
    return;
  }
  puStack_158 = &UNK_1077b1ab8;
  puStack_160 = (undefined1 *)&puStack_150;
  func_0x000104bdc2c8();
  puStack_168 = &UNK_1077b1ad0;
  plVar10 = plVar4;
  puStack_3b8 = extraout_x8_00;
  puStack_170 = (undefined1 *)&puStack_160;
  func_0x0001077b3d14();
  cStack_3a1 = '\0';
  lVar9 = *plVar10;
  lVar7 = plVar10[1];
  uStack_1d0 = extraout_x8_01;
  if (lVar9 == lVar7) {
    uVar2 = plVar4[3] == plVar4[4];
    if (!(bool)uVar2) {
      func_0x0001077b3e24();
      lVar9 = *plVar4;
      lVar7 = plVar4[1];
      goto code_r0x0001077b1b24;
    }
  }
  else {
code_r0x0001077b1b24:
    uVar2 = lVar9 == lVar7;
    if (!(bool)uVar2) {
      if (((char)plVar4[0x16] == '\x01') &&
         (__ZNSt3__16chrono12steady_clock3nowEv(),
         plVar4[0x19] < ((long)plVar10 - plVar4[0x17]) / 1000000)) {
        func_0x0001077b3e24();
      }
      if (cStack_3a1 == '\x01') {
        plVar5 = plVar4;
        func_0x0001077b216c(plVar4,*plVar4,plVar4[1]);
        lVar9 = *plVar4;
        if (0xe8 < plVar4[1] - lVar9) {
          unaff_x24 = (long *)((plVar4[1] - lVar9) / 0xe8);
          unaff_x25 = (long *)((ulong)((long)unaff_x24 + -2) >> 1);
          plStack_3b0 = (long *)(lVar9 + 0xe8);
          unaff_x27 = (long *)0xe8;
          unaff_x28 = unaff_x25;
          do {
            if ((long)unaff_x28 <= (long)unaff_x25) {
              uVar1 = ((ulong)unaff_x28 & 0x3fffffffffffffff) << 1 | 1;
              param_2 = (long *)(uVar1 * 0xe8 + lVar9);
              uVar8 = (long)unaff_x28 * 2 + 2;
              unaff_x26 = uVar1;
              if ((long)uVar8 < (long)unaff_x24) {
                func_0x0001077b3d40();
                bVar3 = (int)plVar5 == 0;
                lVar7 = 0xe8;
                if (bVar3) {
                  lVar7 = 0;
                }
                param_2 = (long *)((long)param_2 + lVar7);
                unaff_x26 = uVar8;
                if (bVar3) {
                  unaff_x26 = uVar1;
                }
              }
              plVar11 = (long *)(lVar9 + (long)unaff_x28 * 0xe8);
              plVar5 = plVar4;
              func_0x0001077b2e30(plVar4,param_2,plVar11);
              if (((ulong)plVar5 & 1) == 0) {
                func_0x0001077b3de0();
                do {
                  plVar5 = plVar11;
                  plVar11 = param_2;
                  func_0x0001077b3658(plVar5,plVar11);
                  param_2 = plVar11;
                  if ((long)unaff_x25 < (long)unaff_x26) break;
                  uVar1 = (unaff_x26 & 0x3fffffffffffffff) << 1 | 1;
                  param_2 = (long *)(uVar1 * 0xe8 + lVar9);
                  uVar8 = unaff_x26 * 2 + 2;
                  unaff_x26 = uVar1;
                  if ((long)uVar8 < (long)unaff_x24) {
                    func_0x0001077b3d40();
                    bVar3 = (int)plVar5 == 0;
                    lVar7 = 0xe8;
                    if (bVar3) {
                      lVar7 = 0;
                    }
                    param_2 = (long *)((long)param_2 + lVar7);
                    unaff_x26 = uVar8;
                    if (bVar3) {
                      unaff_x26 = uVar1;
                    }
                  }
                  func_0x0001077b3d40();
                } while ((int)plVar5 == 0);
                func_0x0001077b3e58();
                func_0x0001077b3d8c();
              }
            }
            unaff_x28 = (long *)((long)unaff_x28 + -1);
          } while (-1 < (long)unaff_x28);
        }
        *(undefined1 *)(plVar4 + 0x16) = 0;
        __ZNSt3__16chrono12steady_clock3nowEv();
        plVar4[0x17] = (long)plVar5;
      }
      else if (((char)plVar4[0x1a] == '\x01') && (param_2 = plVar4 + 3, *param_2 != plVar4[4])) {
        func_0x0001077b216c(plVar4);
        plVar5 = (long *)plVar4[4];
        unaff_x26 = 0xe8;
        for (plVar11 = (long *)plVar4[3]; plVar11 != plVar5; plVar11 = plVar11 + 0x1d) {
          func_0x0001077b3124(plVar4,plVar11);
          unaff_x27 = (long *)*plVar4;
          uVar8 = plVar4[1] - (long)unaff_x27;
          if (0xe8 < (long)uVar8) {
            plVar17 = (long *)(uVar8 / 0xe8 - 2 >> 1);
            unaff_x25 = (long *)(plVar4[1] + -0xe8);
            plVar10 = plVar4;
            func_0x0001077b2e30(plVar4,unaff_x27 + (long)plVar17 * 0x1d,unaff_x25);
            unaff_x28 = plVar17;
            if ((int)plVar10 != 0) {
              func_0x0001077b3230(alStack_2b8,unaff_x25);
              plVar10 = unaff_x27 + (long)plVar17 * 0x1d;
              do {
                unaff_x24 = plVar10;
                plVar6 = unaff_x25;
                func_0x0001077b3658(unaff_x25,unaff_x24);
                unaff_x28 = (long *)0x0;
                if (plVar17 == (long *)0x0) break;
                plVar17 = (long *)((ulong)((long)plVar17 + -1) >> 1);
                func_0x0001077b3d9c();
                plVar10 = unaff_x27 + (long)plVar17 * 0x1d;
                unaff_x25 = unaff_x24;
                unaff_x28 = plVar17;
              } while (((ulong)plVar6 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b2e04(param_2);
      }
      unaff_x23 = (long *)*plVar4;
      lVar9 = plVar4[1];
      lVar7 = lVar9 - (long)unaff_x23;
      uVar2 = lVar7 == 0xe9;
      if (0xe8 < lVar7) {
        unaff_x24 = (long *)(lVar7 / 0xe8);
        func_0x0001077b3e78(alStack_3a0);
        unaff_x27 = (long *)0x0;
        unaff_x25 = (long *)((ulong)((long)unaff_x24 + -2) >> 1);
        unaff_x26 = 0xe8;
        plStack_3b0 = unaff_x23;
        do {
          unaff_x28 = unaff_x23 + (long)unaff_x27 * 0x1d;
          plVar5 = unaff_x28 + 0x1d;
          plVar10 = (long *)((long)unaff_x27 << 1 | 1);
          param_2 = (long *)((long)unaff_x27 * 2 + 2);
          plVar11 = plVar5;
          unaff_x27 = plVar10;
          if ((long)param_2 < (long)unaff_x24) {
            plVar17 = plVar4;
            func_0x0001077b2e30(plVar4,plVar5,unaff_x28 + 0x3a);
            plVar11 = unaff_x28 + 0x3a;
            unaff_x27 = param_2;
            if ((int)plVar17 == 0) {
              plVar11 = plVar5;
              unaff_x27 = plVar10;
            }
          }
          func_0x0001077b3658(unaff_x23,plVar11);
          unaff_x23 = plVar11;
        } while ((long)unaff_x27 <= (long)unaff_x25);
        unaff_x23 = (long *)(lVar9 + -0xe8);
        uVar2 = plVar11 == unaff_x23;
        if ((bool)uVar2) {
          func_0x0001077b3e58();
        }
        else {
          func_0x0001077b3e60();
          func_0x0001077b3658(unaff_x23,alStack_3a0);
          param_2 = plStack_3b0;
          uVar8 = (long)plVar11 + (0xe8 - (long)plStack_3b0);
          uVar2 = uVar8 == 0xe9;
          if (0xe8 < (long)uVar8) {
            uVar8 = uVar8 / 0xe8 - 2 >> 1;
            unaff_x23 = plStack_3b0 + uVar8 * 0x1d;
            plVar5 = plVar4;
            func_0x0001077b2e30(plVar4,unaff_x23,plVar11);
            if ((int)plVar5 != 0) {
              func_0x0001077b3de0();
              unaff_x25 = (long *)0xe8;
              do {
                unaff_x24 = unaff_x23;
                func_0x0001077b3e60();
                unaff_x23 = unaff_x24;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                unaff_x23 = param_2 + uVar8 * 0x1d;
                func_0x0001077b3d9c();
                plVar11 = unaff_x24;
              } while (((ulong)plVar5 & 1) != 0);
              func_0x0001077b3e8c();
              func_0x0001077b3d8c();
            }
          }
        }
        func_0x0001077b356c(alStack_3a0);
        lVar9 = plVar4[1];
      }
      func_0x0001077b3538(alStack_2b8,lVar9 + -0xe8);
      func_0x0001077b3940(plVar4,plVar4[1] + -0xe8);
      plVar5 = alStack_2b8;
      func_0x0001077b3538();
      puStack_3b8[0xd0] = 1;
      plVar10 = alStack_2b8;
      func_0x000107273efc();
      goto code_r0x0001077b1edc;
    }
  }
  *puStack_3b8 = 0;
  puStack_3b8[0xd0] = 0;
code_r0x0001077b1edc:
  func_0x0001077b3cec(uStack_1d0);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    plVar17 = alStack_3a0;
    func_0x0001077b356c();
    func_0x0001077b3d2c();
    puStack_3c8 = &UNK_1077b1f48;
    lVar13 = plVar17[3];
    lVar7 = plVar17[4];
    lVar9 = lVar7 - lVar13;
    plStack_420 = unaff_x28;
    plStack_418 = unaff_x27;
    uStack_410 = unaff_x26;
    plStack_408 = unaff_x25;
    plStack_400 = unaff_x24;
    plStack_3f8 = unaff_x23;
    plStack_3f0 = plVar11;
    plStack_3e8 = param_2;
    plStack_3e0 = plVar4;
    plStack_3d8 = plVar10;
    ppuStack_3d0 = &puStack_170;
    if (0 < lVar9) {
      lVar12 = *plVar17;
      plVar10 = plVar17 + 2;
      lVar15 = plVar17[1];
      lVar16 = lVar9 / 0xe8;
      if (*plVar10 - lVar15 < lVar9) {
        plVar6 = plVar17;
        func_0x0001077b3260(plVar17,(lVar15 - lVar12) / 0xe8 + lVar16);
        func_0x0001077b3354(&plStack_458,plVar6,(lVar12 - *plVar17) / 0xe8,plVar10);
        lVar7 = (long)plStack_448 + lVar9;
        for (; lVar9 != 0; lVar9 = lVar9 + -0xe8) {
          func_0x0001077b3e78(plStack_448);
          plStack_448 = plStack_448 + 0x1d;
        }
        plStack_448 = (long *)lVar7;
        func_0x0001077b33f4(plVar10,lVar12,plVar17[1],lVar7);
        lVar9 = *plVar17;
        plStack_448 = (long *)((long)plStack_448 + (plVar17[1] - lVar12));
        plVar17[1] = lVar12;
        func_0x0001077b33f4(plVar10,lVar9,lVar12,plStack_450 + ((lVar12 - lVar9) / -0xe8) * 0x1d);
        plStack_458 = (long *)*plVar17;
        *plVar17 = (long)(plStack_450 + ((lVar12 - lVar9) / -0xe8) * 0x1d);
        lVar9 = plVar17[2];
        plVar17[2] = lStack_440;
        plVar17[1] = (long)plStack_448;
        plStack_450 = plStack_458;
        plStack_448 = plStack_458;
        lStack_440 = lVar9;
        func_0x0001077b34d0(&plStack_458);
      }
      else {
        lVar9 = lVar15 - lVar12;
        if (lVar9 / 0xe8 < lVar16) {
          plStack_450 = &lStack_430;
          plStack_448 = &lStack_428;
          plStack_458 = plVar10;
          lStack_430 = lVar15;
          for (lVar16 = lVar9 + lVar13; lStack_428 = lVar15, lVar16 != lVar7; lVar16 = lVar16 + 0xe8
              ) {
            func_0x0001077b3230(lVar15,lVar16);
            lVar15 = lStack_428 + 0xe8;
          }
          lStack_440 = CONCAT71(lStack_440._1_7_,1);
          func_0x0001077b348c(&plStack_458);
          plVar17[1] = lVar15;
          if (0 < lVar9) {
            func_0x0001077b3d58();
            func_0x0001077b38f8(lVar13,lVar9 / 0xe8,lVar12);
          }
        }
        else {
          func_0x0001077b3d58();
          func_0x0001077b38f8(lVar13,lVar16,lVar12);
        }
      }
    }
    func_0x0001077b2e04(plVar17 + 3);
    *(undefined1 *)plVar5 = 1;
    return;
  }
  return;
}



/* Entry: 1077b2ff4; end: 1077b300b;  */

void FUN_1077b2ff4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077b3188; end: 1077b322f;  */

long FUN_1077b3188(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x0001077b3260(param_1,(param_1[1] - *param_1) / 0xe8 + 1);
  func_0x0001077b3354(auStack_58,plVar1,(param_1[1] - *param_1) / 0xe8,param_1 + 2);
  func_0x0001077b3230(lStack_48,param_2);
  lStack_48 = lStack_48 + 0xe8;
  func_0x0001077b32c0(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001077b34d0(auStack_58);
  return lVar2;
}



/* Entry: 1077b348c; end: 1077b34fb;  */

long FUN_1077b348c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0xe8;
      func_0x0001077b356c();
    }
  }
  return param_1;
}



/* Entry: 1077b3760; end: 1077b3783;  */

void FUN_1077b3760(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0001056d1ce4();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1077b3998; end: 1077b3a23;  */

void FUN_1077b3998(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ada38 & 1) == 0) {
    iVar3 = 0x131ada38;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x0001077b3a24(0x1131ada28);
      ___cxa_guard_release(0x1131ada38);
    }
  }
  lVar2 = lRam00000001131ada30;
  uVar1 = uRam00000001131ada28;
  param_1[1] = lRam00000001131ada30;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x0001077b3dac();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1077b3b50; end: 1077b3c43;  */

void FUN_1077b3b50(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  puVar4 = param_3;
  func_0x0001077b3d14();
  uStack_48 = extraout_x8;
  func_0x000104c32bd8();
  if (((ulong)puVar4 & 1) == 0) {
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
    uStack_88 = (ulong)uStack_88._4_4_ << 0x20;
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    param_3 = &uStack_88;
    func_0x000104c3302c(param_2[1] + (long)plVar1 * 0x78 + 0x38);
    func_0x000104c3323c(&uStack_88);
    plVar3 = alStack_98;
  }
  else {
    lVar2 = param_2[1] + (long)plVar1 * 0x78;
    func_0x000104c318bc();
    uVar6 = param_4[1];
    uVar5 = *param_4;
    *param_4 = 0;
    param_4[1] = 0;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x48) = uVar6;
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    uStack_88 = 0;
    uStack_80 = 0;
    plVar3 = &uStack_88;
  }
  func_0x000104c33108();
  lVar2 = param_2[1];
  *param_1 = *param_2 + (long)plVar1;
  param_1[1] = lVar2 + (long)plVar1 * 0x78;
  *(char *)(param_1 + 2) = (char)puVar4;
  func_0x0001077b3cec(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = *plVar3;
  *plVar3 = (long)param_3;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077b4390; end: 1077b45bf;  */

undefined8 * FUN_1077b4390(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  uint uVar9;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 auStack_160 [2];
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [56];
  undefined1 auStack_b8 [56];
  undefined1 uStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_2 & 0xffffffff) <
      (ulong)((*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) / 0x38)) {
    iVar1 = *(int *)(param_1 + 200);
    *(int *)(param_1 + 200) = iVar1 + 1;
    puVar5 = param_2;
    if (iVar1 == 0) {
      lVar3 = param_1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(param_1 + 0xd0) = lVar3;
    }
    else if ((*(char *)(param_1 + 0x48) == '\x01') &&
            (lVar3 = param_1, __ZNSt3__16chrono12steady_clock3nowEv(),
            4999999999 < lVar3 - *(long *)(param_1 + 0xd0))) {
      auStack_160[0] = 0x186;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      ppuStack_140 = &PTR_DAT_110996720;
      uStack_138 = 0;
      uStack_120 = 0x186;
      uStack_118 = 0;
      uStack_114 = 1;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_110 = 0;
      lVar3 = param_1 + 0x10;
      func_0x00010725ffc4(lVar3);
      func_0x000104c2fe00(auStack_f0,lVar3);
      puVar2 = auStack_160;
      func_0x000107371bc4(puVar2,&UNK_10f42a2a0,auStack_f0);
      func_0x00010726e6c0(auStack_b8,puVar2);
      func_0x000104c2f714(auStack_f0);
      func_0x000107262330(auStack_160);
      auStack_160[0] = *(undefined4 *)(param_1 + 200);
      uStack_158 = 1;
      uStack_170 = **(undefined8 **)(param_1 + 8);
      uStack_168 = 3;
      puVar5 = auStack_b8;
      func_0x00010743fa44(*(undefined8 **)(param_1 + 8),puVar5,auStack_160,&uStack_170,7);
      *(undefined4 *)(param_1 + 200) = 0;
      func_0x000107262330(auStack_b8);
    }
    puVar4 = (uint *)(*(long *)(param_1 + 0xb0) + ((ulong)param_2 & 0xffffffff) * 0x38);
    uVar9 = puVar4[0xc];
    puVar7 = (undefined8 *)(ulong)uVar9;
    param_2 = puVar5;
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        uVar9 = *puVar4;
        param_3 = puVar5;
      }
      else {
        auStack_b8[0] = 0;
        uStack_80 = 0;
        lStack_78 = param_1 + 0x50;
        uVar9 = 0;
        func_0x00010727f6f4(0,puVar4,param_3,auStack_b8);
        func_0x00010724b3d8();
      }
      puVar7 = (undefined8 *)((ulong)uVar9 | 0x100000000);
      param_2 = param_3;
    }
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = auStack_b8;
    func_0x000107262330();
    func_0x0001077b4d98();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    func_0x0001077b4688(extraout_x8,(*(long *)(puVar5 + 0xb8) - *(long *)(puVar5 + 0xb0)) / 0x38);
    puVar7 = (undefined8 *)(puVar5 + 0x50);
    func_0x000107752094(puVar7);
    for (uVar8 = 0; uVar8 < (ulong)((*(long *)(puVar5 + 0xb8) - *(long *)(puVar5 + 0xb0)) / 0x38);
        uVar8 = (ulong)((int)uVar8 + 1)) {
      puVar6 = puVar5;
      FUN_1077b4390(puVar5,uVar8,param_2);
      uStack_1b8 = SUB84(puVar6,0);
      uStack_1b4 = (undefined1)((ulong)puVar6 >> 0x20);
      puVar7 = extraout_x8;
      func_0x0001077b4cac(extraout_x8,&uStack_1b8);
    }
    return puVar7;
  }
  return puVar7;
}



/* Entry: 1077b48a8; end: 1077b48cb;  */

void FUN_1077b48a8(void)

{
  func_0x0001077b48cc();
  return;
}



/* Entry: 1077b4b8c; end: 1077b4c5b;  */

long FUN_1077b4b8c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    func_0x000107342188(lVar1,param_1);
    lVar1 = lVar1 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return param_3;
}



/* Entry: 1077b4e68; end: 1077b50af;  */

void FUN_1077b4e68(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b52a8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077b5448();
  return;
}



/* Entry: 1077b51c0; end: 1077b51f7;  */

/* WARNING: Possible PIC construction at 0x0001077b51d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077b51e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077b51d8) */
/* WARNING: Removing unreachable block (ram,0x0001077b51e8) */

void FUN_1077b51c0(long param_1)

{
  if (*(uint *)(param_1 + 0x168) != 0xffffffff) {
    func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(param_1 + 0x168)]);
  }
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  return;
}



/* Entry: 1077b5368; end: 1077b53e3;  */

long FUN_1077b5368(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001074c4824();
  func_0x0001074c4824(lVar1 + 0x60,param_2 + 0x60);
  func_0x0001074c4824(param_1 + 0xc0,param_2 + 0xc0);
  func_0x0001074c4824(param_1 + 0x120,param_2 + 0x120);
  return param_1;
}



/* Entry: 1077b563c; end: 1077b5693;  */

void FUN_1077b563c(long param_1,uint param_2)

{
  undefined8 uStack_40;
  
  if (param_2 != *(byte *)(*(long *)(param_1 + 8) + 0x51)) {
    func_0x0001077b5824();
    *(char *)(uStack_40 + 0x51) = (char)param_2;
    func_0x0001077b584c();
    func_0x0001077b5834();
    func_0x0001077b5858();
    func_0x0001077b5844();
  }
  return;
}



/* Entry: 1077b58e8; end: 1077b5903;  */

void FUN_1077b58e8(long param_1)

{
  func_0x0001077b590c(param_1 + 0x68);
  return;
}



/* Entry: 1077b5ecc; end: 1077b5ecf;  */

undefined8 * FUN_1077b5ecc(undefined8 *param_1)

{
  func_0x0001077b68e0(param_1 + 0xc);
  FUN_1077b6704(param_1 + 9);
  func_0x000107313354(param_1 + 7);
  *param_1 = &PTR_DAT_1109db730;
  func_0x000107783268(param_1 + 5);
  func_0x0001074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 1077b62fc; end: 1077b6377;  */

void FUN_1077b62fc(long *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  
  func_0x0001077b71e8();
  if (uStack_50 != 0) {
    lVar1 = *param_1;
    func_0x0001077b72b8();
    func_0x0001077b6c78();
    func_0x0001077b71dc();
    func_0x0001077b71f4();
    if (lVar1 != 0) {
      func_0x0001077b716c();
    }
  }
  func_0x0001077b7200();
  return;
}



/* Entry: 1077b6704; end: 1077b6753;  */

void FUN_1077b6704(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109db840)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 1077b689c; end: 1077b68bb;  */

void FUN_1077b689c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077b68a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1077b6a4c; end: 1077b6ab7;  */

long FUN_1077b6a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5,undefined8 *param_6)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_d0 [168];
  undefined8 uStack_28;
  
  puVar2 = auStack_d0;
  func_0x0001077b72a8();
  uStack_28 = extraout_x8;
  func_0x000107273e00(auStack_d0);
  func_0x0001073ad8fc(param_1);
  func_0x000107273f24();
  func_0x0001077b7218(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107273f24(auStack_d0);
  func_0x0001077b71cc();
  uStack_120 = *param_4;
  uStack_118 = *(undefined4 *)(param_4 + 1);
  lStack_110 = *param_5;
  *param_5 = 0;
  uStack_108 = *param_6;
  puStack_100 = puVar2;
  uStack_f8 = param_3;
  func_0x0001077b6b40(&uStack_128);
  lVar1 = lStack_110;
  *extraout_x8_00 = uStack_128;
  lStack_110 = 0;
  if (lVar1 != 0) {
    func_0x0001077b716c();
  }
  return lVar1;
}



/* Entry: 1077b6cf4; end: 1077b6d6b;  */

void FUN_1077b6cf4(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [40];
  
  func_0x0001077b7208();
  uVar1 = 0x58;
  __Znwm();
  func_0x0001077b6d6c(auStack_88);
  func_0x0001077b7340();
  func_0x0001077b6da0();
  *extraout_x8 = uVar1;
  func_0x0001073787dc(auStack_78);
  return;
}



/* Entry: 1077b6f08; end: 1077b6f2b;  */

void FUN_1077b6f08(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001077b6f2c();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 1077b7004; end: 1077b7047;  */

void FUN_1077b7004(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109db9c0;
  puVar1[1] = param_2;
  uVar2 = *param_3;
  puVar1[3] = param_3[1];
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1077b7354; end: 1077b73d7;  */

undefined8 * FUN_1077b7354(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  func_0x0001077b5880(param_1,5,param_2,*(undefined4 *)(param_3 + 0x60));
  *puVar1 = &PTR_DAT_1109dba00;
  func_0x0001077b73d8(&uStack_30,param_3 + 0x48);
  param_1[0x11] = uStack_28;
  param_1[0x10] = uStack_30;
  func_0x0001077b777c();
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_3 + 0x40);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



/* Entry: 1077b7568; end: 1077b757f;  */

void FUN_1077b7568(long param_1)

{
  func_0x00010750bcac();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1077b7714; end: 1077b7727;  */

void FUN_1077b7714(void)

{
  func_0x0001077b7730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077b7a14; end: 1077b7a7f;  */

void FUN_1077b7a14(long param_1)

{
  long lVar1;
  
  func_0x00010725ffdc(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x78);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    if (lVar1 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar1 == 0) goto LAB_1077b7a58;
  }
  func_0x0001077b8cb8();
LAB_1077b7a58:
                    /* WARNING: Could not recover jumptable at 0x0001077b7a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_1);
  return;
}



/* Entry: 1077b7ecc; end: 1077b7ed3;  */

void FUN_1077b7ecc(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x000107346060(param_1 + 0x90);
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
    } while (extraout_w11 != 0);
  }
  func_0x0001073269a0();
  func_0x0001073460e8();
  return;
}



/* Entry: 1077b80b0; end: 1077b80d7;  */

long FUN_1077b80b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077b80d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077b81b4; end: 1077b81e3;  */

void FUN_1077b81b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_register_00005008;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077b8d58();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001074fffe8(&uStack_30);
  return;
}



/* Entry: 1077b8348; end: 1077b836b;  */

void FUN_1077b8348(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dbb38;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077b8788; end: 1077b87af;  */

undefined8 * FUN_1077b8788(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = &PTR_DAT_1109dbba8;
  func_0x000107283e34(puVar1 + 1);
  func_0x0001077b864c(puVar1 + 4,param_1 + 0x20);
  func_0x0001077b8698(puVar1 + 8,param_1 + 0x40);
  return puVar1;
}



/* Entry: 1077b8b00; end: 1077b8b27;  */

long FUN_1077b8b00(long param_1)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  __Znwm();
  func_0x0001077b8d68();
  func_0x0001077b8698();
  lVar2 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001077b8c98();
    } while (extraout_w10 != 0);
  }
  return lVar1;
}



/* Entry: 1077b9cec; end: 1077b9df3;  */

long FUN_1077b9cec(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001077bece8();
  lVar1 = unaff_x19;
  func_0x0001073c706c();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1077b9ea0; end: 1077b9ed7;  */

void FUN_1077b9ea0(void)

{
  func_0x0001077becf4();
  return;
}



/* Entry: 1077ba5d4; end: 1077ba74b;  */

/* WARNING: Possible PIC construction at 0x0001077ba634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077ba738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077ba638) */
/* WARNING: Removing unreachable block (ram,0x0001077ba644) */
/* WARNING: Removing unreachable block (ram,0x0001077ba658) */
/* WARNING: Removing unreachable block (ram,0x0001077ba660) */
/* WARNING: Removing unreachable block (ram,0x0001077ba66c) */
/* WARNING: Removing unreachable block (ram,0x0001077ba674) */
/* WARNING: Removing unreachable block (ram,0x0001077ba680) */
/* WARNING: Removing unreachable block (ram,0x0001077ba688) */
/* WARNING: Removing unreachable block (ram,0x0001077ba690) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6b0) */
/* WARNING: Removing unreachable block (ram,0x0001077ba69c) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6a4) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6b4) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6bc) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6d4) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6dc) */
/* WARNING: Removing unreachable block (ram,0x0001077ba6c4) */
/* WARNING: Removing unreachable block (ram,0x0001077ba64c) */
/* WARNING: Removing unreachable block (ram,0x0001077ba73c) */

void FUN_1077ba5d4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = param_1;
  plVar1 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 > param_2 || param_2 == plVar4) {
    if (plVar4 <= param_2) {
      return;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar4 < (long *)0x3) || (((ulong)plVar4 & (long)plVar4 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001077beae4();
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar4 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
      goto code_r0x0001077ba74c;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)((long)param_2 << 3);
    __Znwm();
  }
  else {
    func_0x000104bd35f4();
    param_1 = plVar2;
  }
code_r0x0001077ba74c:
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077baab4; end: 1077baad7;  */

undefined8 FUN_1077baab4(undefined8 param_1)

{
  func_0x0001077baad8(param_1,0);
  return param_1;
}



/* Entry: 1077bad90; end: 1077badb3;  */

void FUN_1077bad90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1077bb3a4; end: 1077bb46b;  */

void FUN_1077bb3a4(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar5;
  long unaff_x24;
  int unaff_w25;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  
  func_0x0001077be874();
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      while( true ) {
        uVar5 = (uint)param_3;
        bVar3 = param_4 <= uVar5;
        bVar4 = uVar5 == param_4;
        if (bVar3 && !bVar4) break;
        func_0x0001077be800();
        if (!bVar3 || bVar4) {
          func_0x0001077bb46c(*(undefined8 *)(*unaff_x20 + 0x38),unaff_x20[1],
                              *(undefined4 *)(*unaff_x21 + (param_3 & 0xffffffff) * 4));
        }
        param_3 = (ulong)(uVar5 + 1);
      }
      return;
    }
    func_0x0001077be79c();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001077bb46c(*(undefined8 *)(*unaff_x20 + 0x38),unaff_x20[1],
                          *(undefined4 *)(*unaff_x21 + unaff_x24 * 4));
    }
    in_ZR = (param_5 & 0xff) == 0;
    cVar1 = '\0';
    in_CY = false;
    cVar2 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!(bool)in_CY || (bool)in_ZR) goto LAB_1077bb414;
LAB_1077bb42c:
      func_0x0001077bebcc();
      if (cVar1 != cVar2) {
        return;
      }
    }
    else {
      cVar2 = NAN(unaff_d12) || NAN(unaff_d15);
      in_CY = unaff_d15 <= unaff_d12;
      in_ZR = unaff_d12 == unaff_d15;
      cVar1 = unaff_d12 < unaff_d15;
      if (!(bool)in_CY || (bool)in_ZR) {
LAB_1077bb414:
        func_0x0001077be7c0();
        FUN_1077bb3a4();
        if (unaff_w25 == 0) goto LAB_1077bb42c;
      }
      in_CY = unaff_d15 <= unaff_d14;
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
}



/* Entry: 1077bbab8; end: 1077bbe87;  */

/* WARNING: Possible PIC construction at 0x0001077bbb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077bbb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bbb3c) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb64) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb80) */
/* WARNING: Removing unreachable block (ram,0x0001077bbb94) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc24) */
/* WARNING: Removing unreachable block (ram,0x0001077bbbc8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbbf0) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc00) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc28) */
/* WARNING: Removing unreachable block (ram,0x0001077bbc8c) */
/* WARNING: Removing unreachable block (ram,0x0001077bbca4) */
/* WARNING: Removing unreachable block (ram,0x0001077bbcc8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbcd8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbcf4) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd48) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd54) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd60) */
/* WARNING: Removing unreachable block (ram,0x0001077bbd8c) */
/* WARNING: Removing unreachable block (ram,0x0001077bbdac) */
/* WARNING: Removing unreachable block (ram,0x0001077bbe70) */
/* WARNING: Removing unreachable block (ram,0x0001077bbedc) */
/* WARNING: Removing unreachable block (ram,0x0001077bbf68) */
/* WARNING: Removing unreachable block (ram,0x0001077bbf50) */
/* WARNING: Removing unreachable block (ram,0x0001077bbec8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbda0) */
/* WARNING: Removing unreachable block (ram,0x0001077be9c8) */
/* WARNING: Removing unreachable block (ram,0x0001077bbce8) */

void FUN_1077bbab8(void)

{
  uint uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_2b1 [57];
  undefined1 auStack_278 [56];
  undefined1 auStack_240 [64];
  undefined1 auStack_200 [120];
  undefined1 auStack_188 [264];
  
  func_0x0001077bebc0();
  func_0x0001077be83c();
  func_0x000100060964(auStack_240,&DAT_10f3dcac7);
  auStack_2b1[0] = 1;
  func_0x000107396da0(auStack_200,auStack_240,auStack_2b1);
  puVar2 = auStack_188;
  func_0x000100060964(auStack_278,&UNK_10f406adb);
  uVar1 = *(uint *)(unaff_x20 + 0x14);
  func_0x000104c318bc(puVar2,auStack_278);
  *(undefined4 *)(puVar2 + 0x38) = 5;
  *(ulong *)(puVar2 + 0x40) = (ulong)uVar1;
  return;
}



/* Entry: 1077bc344; end: 1077bc3f3;  */

void FUN_1077bc344(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,ulong param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int unaff_w25;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  
  func_0x0001077be874();
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      while( true ) {
        uVar5 = (uint)param_3;
        bVar3 = param_4 <= uVar5;
        bVar4 = uVar5 == param_4;
        if (bVar3 && !bVar4) break;
        func_0x0001077be800();
        if (!bVar3 || bVar4) {
          func_0x0001077be964();
          func_0x0001077bc3f4();
        }
        param_3 = (ulong)(uVar5 + 1);
      }
      return;
    }
    func_0x0001077be79c();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001077be954();
      func_0x0001077bc3f4();
    }
    in_ZR = (param_5 & 0xff) == 0;
    cVar1 = '\0';
    in_CY = false;
    cVar2 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!(bool)in_CY || (bool)in_ZR) goto LAB_1077bc3a8;
LAB_1077bc3c0:
      func_0x0001077bebcc();
      if (cVar1 != cVar2) {
        return;
      }
    }
    else {
      cVar2 = NAN(unaff_d12) || NAN(unaff_d15);
      in_CY = unaff_d15 <= unaff_d12;
      in_ZR = unaff_d12 == unaff_d15;
      cVar1 = unaff_d12 < unaff_d15;
      if (!(bool)in_CY || (bool)in_ZR) {
LAB_1077bc3a8:
        func_0x0001077be7c0();
        FUN_1077bc344();
        if (unaff_w25 == 0) goto LAB_1077bc3c0;
      }
      in_CY = unaff_d15 <= unaff_d14;
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
}



/* Entry: 1077bc81c; end: 1077bc85f;  */

void FUN_1077bc81c(undefined8 param_1)

{
  func_0x000107330058(param_1);
  return;
}


