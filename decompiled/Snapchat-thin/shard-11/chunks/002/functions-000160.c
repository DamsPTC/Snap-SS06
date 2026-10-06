/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108301ae4; end: 108301ae7;  */

undefined8 * FUN_108301ae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 108301ae8; end: 108301afb;  */

void FUN_108301ae8(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108301afc; end: 108301b1b;  */

void FUN_108301afc(long param_1,long *param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000108301b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x80))
            (*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x48),
             *(undefined4 *)(param_4 + 0x4c),*(undefined4 *)(param_4 + 0x50),param_2,
             *(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 108301b1c; end: 108301c23;  */

void FUN_108301b1c(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x000108301c78();
  FUN_1082dd9a4(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(unaff_x19[4] + 0x5e) == '\x01') {
    FUN_10829dbfc(*unaff_x19,&UNK_10f488a5a);
  }
  FUN_10829dbfc(*unaff_x19,&UNK_10f489db7);
  param_3[0x28] = 0xe;
  func_0x0001083a3534(param_3 + 0x38,&UNK_10f489995);
  *param_3 = 0xe;
  func_0x0001083a3534(param_3 + 0x10,&UNK_10f489ec7);
  uVar1 = unaff_x19[3];
  func_0x00010828bb5c(uVar1,0,2,0x17,&DAT_10f68f0f0,auStack_38);
  *(int *)(unaff_x20 + 0x30) = (int)uVar1;
  FUN_10828bae8((long)unaff_x19[1] + *(long *)(*(long *)unaff_x19[1] + -0x18),&UNK_10f489ed1);
  FUN_10828bae8((long)unaff_x19[1] + *(long *)(*(long *)unaff_x19[1] + -0x18),&UNK_10f481ead);
  return;
}



/* Entry: 108301c24; end: 108301ccb;  */

void FUN_108301c24(void)

{
  return;
}



/* Entry: 108301ccc; end: 108301e33;  */

uint FUN_108301ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x48);
  uStack_28 = *(undefined8 *)(lVar2 + 0x40);
  uStack_30 = *(undefined8 *)(lVar2 + 0x38);
  uStack_34 = 3;
  if (*(float *)(lVar2 + 0x44) != 1.0) {
    uStack_34 = 1;
  }
  uVar1 = param_1 + 0x58;
  FUN_1082a3cdc(uVar1,&uStack_34,0,param_3,0,param_2,param_4,lVar2 + 0x38);
  if ((uVar1 & 1) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    puVar3[4] = *(undefined8 *)(param_1 + 0x98);
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    uVar6 = uRam0000000113254e38;
    uVar5 = uRam0000000113254e30;
    uVar4 = uRam0000000113254e20;
    *(undefined8 *)(param_1 + 0x80) = uRam0000000113254e28;
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    *(undefined8 *)(param_1 + 0x98) = uRam0000000113254e40;
  }
  return (uint)uVar1 & 0xffff;
}



/* Entry: 108301e34; end: 108301ec7;  */

void FUN_108301e34(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = param_2;
  FUN_10830dbf0(param_2,*(undefined4 *)(param_1 + 0x30),param_3,param_1 + 0x58);
  lVar2 = *param_2;
  func_0x000108300ab4(lVar2,*(undefined1 *)(*(long *)(param_2[5] + 0x10) + 0x12),
                      *(undefined4 *)(param_1 + 0x44));
  *(long *)(param_1 + 0xa0) = lVar2;
  uVar3 = *(undefined8 *)(param_2[5] + 0x10);
  FUN_10830c3d8(uVar3,*param_2,param_1 + 0x78,*(long *)(param_1 + 0x48) + 0x38,
                *(undefined4 *)(lVar2 + 8));
  func_0x000108300a60(param_2,uVar3,plVar1,*(undefined8 *)(param_1 + 0x38));
  *(long **)(param_1 + 0xa8) = param_2;
  return;
}



/* Entry: 108301ec8; end: 108301ff3;  */

void FUN_108301ec8(long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [72];
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_3;
  (**(code **)(*plVar3 + 0x28))();
  cVar1 = (char)plVar3[1];
  uVar2 = cVar1 == '\x01';
  plVar3 = param_2 + 5;
  func_0x0001082a6e68();
  uStack_a8 = *(undefined8 *)(param_2[2] + 0xb8);
  plStack_d0 = plVar3;
  plStack_c8 = param_3;
  uStack_c0 = '\x01' < cVar1;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  uStack_ac = param_7;
  if (param_4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0x2000000020000000;
    uStack_90 = 0x2000000020000000;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    FUN_1082a191c(&uStack_a0,param_4);
  }
  FUN_108301e34(param_1,&plStack_d0,&uStack_a0);
  FUN_1083021a4();
  lVar5 = *(long *)(param_1 + 0xa8);
  (**(code **)(*param_2 + 0x48))();
  func_0x0001083021ac(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083021a4();
  plVar3 = param_2;
  __Unwind_Resume();
  pcStack_d8 = FUN_108301ff4;
  uStack_f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)plVar3[0x14];
  lStack_f0 = param_1;
  plStack_e8 = param_2;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (plVar4 == (long *)0x0) {
    lStack_170 = lVar5 + 0x10;
    lVar6 = *(long *)(lVar5 + 0x150);
    uStack_168 = *(undefined8 *)(lVar6 + 8);
    uStack_160 = *(undefined1 *)(lVar6 + 0x18);
    lStack_158 = lVar6 + 0x28;
    uStack_150 = *(undefined8 *)(lVar6 + 0x48);
    uStack_148 = *(undefined8 *)(*(long *)(lVar5 + 0x160) + 0x10);
    func_0x0001082a167c(auStack_140,lVar5);
    FUN_108301e34(plVar3,&lStack_170,auStack_140);
    FUN_1083021a4();
    plVar4 = (long *)plVar3[0x14];
  }
  uVar2 = lVar5 == 0;
  lVar6 = 0;
  if (!(bool)uVar2) {
    lVar6 = lVar5 + 8;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,lVar6,plVar3 + 0xf,plVar3[9],(int)plVar3[8]);
  func_0x0001083021ac(uStack_f8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083021a4();
  __Unwind_Resume();
  FUN_1082a1068(lVar6,plVar4[0x15],plVar4 + 4);
  FUN_1082a10b4(lVar6,*(undefined8 *)(plVar4[0x15] + 0x98),0,*(undefined8 *)(plVar4[0x15] + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010830212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar4[0x14] + 0x18))((long *)plVar4[0x14],lVar6);
  return;
}



/* Entry: 108301ff4; end: 1083020d7;  */

void FUN_108301ff4(long param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *(long **)(param_1 + 0xa0);
  if (plVar2 == (long *)0x0) {
    lStack_a0 = param_2 + 0x10;
    lVar3 = *(long *)(param_2 + 0x150);
    uStack_98 = *(undefined8 *)(lVar3 + 8);
    uStack_90 = *(undefined1 *)(lVar3 + 0x18);
    lStack_88 = lVar3 + 0x28;
    uStack_80 = *(undefined8 *)(lVar3 + 0x48);
    uStack_78 = *(undefined8 *)(*(long *)(param_2 + 0x160) + 0x10);
    func_0x0001082a167c(auStack_70,param_2);
    FUN_108301e34(param_1,&lStack_a0,auStack_70);
    FUN_1083021a4();
    plVar2 = *(long **)(param_1 + 0xa0);
  }
  uVar1 = param_2 == 0;
  lVar3 = 0;
  if (!(bool)uVar1) {
    lVar3 = param_2 + 8;
  }
  (**(code **)(*plVar2 + 0x10))
            (plVar2,lVar3,param_1 + 0x78,*(undefined8 *)(param_1 + 0x48),
             *(undefined4 *)(param_1 + 0x40));
  func_0x0001083021ac(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083021a4();
  __Unwind_Resume();
  FUN_1082a1068(lVar3,plVar2[0x15],plVar2 + 4);
  FUN_1082a10b4(lVar3,*(undefined8 *)(plVar2[0x15] + 0x98),0,*(undefined8 *)(plVar2[0x15] + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010830212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar2[0x14] + 0x18))((long *)plVar2[0x14],lVar3);
  return;
}



/* Entry: 1083020d8; end: 10830212f;  */

void FUN_1083020d8(long param_1,undefined8 param_2)

{
  FUN_1082a1068(param_2,*(undefined8 *)(param_1 + 0xa8),param_1 + 0x20);
  FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x98),0,
                *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010830212c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),param_2);
  return;
}



/* Entry: 108302130; end: 108302133;  */

undefined8 * FUN_108302130(undefined8 *param_1)

{
  FUN_1082a3b78(param_1 + 0xb);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 108302134; end: 108302147;  */

void FUN_108302134(void)

{
  FUN_10830217c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108302148; end: 10830217b;  */

undefined * FUN_108302148(void)

{
  return &UNK_10f489ee0;
}



/* Entry: 10830217c; end: 1083021a3;  */

undefined8 * FUN_10830217c(undefined8 *param_1)

{
  FUN_1082a3b78(param_1 + 0xb);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1083021a4; end: 1083021bf;  */

undefined1 * FUN_1083021a4(void)

{
  func_0x00010827f53c(&stack0x00000070);
  FUN_10827a4f4(&stack0x00000050);
  return &stack0x00000030;
}



/* Entry: 1083021c0; end: 10830220f;  */

undefined4
FUN_1083021c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = 0;
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_10828e864(&uStack_20,&UNK_10df18ec0);
  if ((uVar2 & 1) == 0) {
    FUN_1082fc488();
    uVar3 = 1;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 108302210; end: 1083022ef;  */

code * FUN_108302210(ushort *param_1)

{
  code *pcVar1;
  code *pcVar2;
  ushort uVar3;
  bool bVar4;
  code *pcVar5;
  
  uVar3 = *param_1;
  pcVar5 = FUN_108302654;
  if ((((uVar3 ^ 0xffff) & 3) != 0) && ((uVar3 >> 0xc & 1) == 0)) {
    FUN_1083022f0();
    bVar4 = (uVar3 & 0x200) != 0;
    pcVar5 = (code *)0x108302608;
    if (bVar4) {
      pcVar5 = (code *)0x1083025bc;
    }
    pcVar1 = (code *)0x10830257c;
    if (bVar4) {
      pcVar1 = FUN_10830253c;
    }
    if ((int)param_1 == 1) {
      pcVar5 = pcVar1;
    }
    pcVar1 = FUN_108302654;
    if ((uVar3 & 0xc) != 0xc) {
      pcVar1 = pcVar5;
    }
    pcVar5 = FUN_108302654;
    if ((uVar3 & 0x40) != 0) {
      pcVar5 = pcVar1;
    }
    pcVar1 = FUN_108302494;
    if ((uVar3 & 0x200) != 0) {
      pcVar1 = FUN_10830239c;
    }
    pcVar2 = FUN_108302654;
    if (((uVar3 ^ 0xffff) & 0xc) != 0) {
      pcVar2 = pcVar1;
    }
    pcVar1 = FUN_108302318;
    if ((uVar3 & 0x40) != 0) {
      pcVar1 = pcVar2;
    }
    pcVar2 = FUN_108302654;
    if ((int)param_1 != 1) {
      pcVar2 = pcVar1;
    }
    if ((uVar3 & 0x180) != 0) {
      pcVar5 = pcVar2;
    }
  }
  return pcVar5;
}



/* Entry: 1083022f0; end: 108302317;  */

undefined4 FUN_1083022f0(ushort *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_1;
  uVar3 = 1;
  if ((uVar2 & 0x180) != 0 && (uVar2 & 0x1800) == 0x800) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if ((uVar2 & 0x400) != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 108302318; end: 10830239b;  */

void FUN_108302318(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  param_3 = param_3 + 0x10;
  for (lVar1 = 0; lVar1 != 0x10; lVar1 = lVar1 + 4) {
    func_0x000108303abc(*(undefined4 *)(param_3 + -0x10));
    param_3 = param_3 + 4;
    func_0x000108303b64();
    FUN_108302d98(*(undefined4 *)(param_5 + lVar1),param_6);
    func_0x0001083039d8();
    func_0x0001082e70b0();
    func_0x000108303adc();
  }
  return;
}



/* Entry: 10830239c; end: 108302493;  */

void FUN_10830239c(long *param_1,undefined8 param_2,long param_3,long param_4,undefined4 *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_74 [20];
  
  lVar5 = 4;
  puVar3 = (undefined4 *)(param_3 + 0x10);
  puVar4 = (undefined4 *)(param_4 + 0x10);
  do {
    *(undefined4 *)*param_1 = puVar3[-4];
    lVar2 = *param_1;
    *param_1 = lVar2 + 4;
    *(undefined4 *)(lVar2 + 4) = *puVar3;
    *param_1 = *param_1 + 4;
    FUN_108302d98(*param_5,param_6);
    func_0x0001083039d8();
    func_0x0001082e70b0();
    plVar1 = param_1;
    FUN_1082fdf68(param_1,auStack_74);
    *(undefined4 *)*plVar1 = puVar4[-4];
    func_0x000108303a94();
    *(undefined4 *)(extraout_x8 + 4) = *puVar4;
    func_0x000108303a94();
    uVar6 = *param_8;
    *(undefined8 *)(extraout_x8_00 + 0xc) = param_8[1];
    *(undefined8 *)(extraout_x8_00 + 4) = uVar6;
    *plVar1 = *plVar1 + 0x10;
    lVar5 = lVar5 + -1;
    param_5 = param_5 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (lVar5 != 0);
  return;
}



/* Entry: 108302494; end: 10830253b;  */

void FUN_108302494(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined4 *param_5,long *param_6)

{
  long *plVar1;
  long extraout_x8;
  undefined4 *puVar2;
  long lVar3;
  
  param_3 = param_3 + 0x10;
  lVar3 = 4;
  puVar2 = (undefined4 *)(param_4 + 0x10);
  do {
    func_0x000108303abc(*(undefined4 *)(param_3 + -0x10));
    param_3 = param_3 + 4;
    func_0x000108303b64();
    plVar1 = param_6;
    FUN_108302d98(*param_5);
    func_0x0001083039d8();
    func_0x0001082e70b0();
    func_0x000108303adc();
    *(undefined4 *)*plVar1 = puVar2[-4];
    func_0x000108303a94();
    *(undefined4 *)(extraout_x8 + 4) = *puVar2;
    *plVar1 = *plVar1 + 4;
    lVar3 = lVar3 + -1;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  } while (lVar3 != 0);
  return;
}



/* Entry: 10830253c; end: 108302653;  */

void FUN_10830253c(undefined8 param_1)

{
  long extraout_x10;
  undefined8 unaff_x30;
  
  do {
    func_0x000108303934(param_1,unaff_x30);
    func_0x000108303900();
    func_0x000108303ba0();
  } while (extraout_x10 != 0);
  return;
}



/* Entry: 108302654; end: 1083027e3;  */

void FUN_108302654(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,ushort *param_6,long param_7,long param_8,undefined4 *param_9,
                  undefined8 param_10)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  long extraout_x8;
  undefined4 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined4 *puVar4;
  long extraout_x8_02;
  undefined4 *extraout_x9;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [20];
  
  puVar2 = param_6;
  FUN_1083022f0();
  puVar6 = (undefined4 *)(param_7 + 0x20);
  puVar7 = (undefined4 *)(param_8 + 0x20);
  lVar5 = 4;
  do {
    *(undefined4 *)*param_5 = puVar6[-8];
    func_0x000108303a84();
    *(undefined4 *)(extraout_x8 + 4) = puVar6[-4];
    func_0x0001083039ec();
    puVar4 = extraout_x8_00;
    if (((*param_6 ^ 0xffff) & 3) == 0) {
      *extraout_x8_00 = *puVar6;
      func_0x0001083039ec();
      puVar4 = extraout_x8_01;
    }
    if ((int)puVar2 == 1) {
      *puVar4 = *param_9;
      func_0x0001083039ec();
    }
    uVar1 = *param_6;
    if ((uVar1 & 0x180) != 0) {
      uVar8 = 0x3f800000;
      if ((int)puVar2 == 2) {
        uVar8 = *param_9;
      }
      FUN_108302d98(param_10);
      uStack_84 = uVar8;
      uStack_80 = param_2;
      uStack_7c = param_3;
      uStack_78 = param_4;
      func_0x0001082e70b0(auStack_74,&uStack_84,(uVar1 & 0x180) == 0x100);
      FUN_1082fdf68(param_5,auStack_74);
      uVar1 = *param_6;
    }
    uVar3 = (uint)uVar1;
    if ((uVar1 >> 6 & 1) != 0) {
      *(undefined4 *)*param_5 = puVar7[-8];
      func_0x000108303a84();
      *(undefined4 *)(extraout_x8_02 + 4) = puVar7[-4];
      func_0x000108303a84();
      uVar3 = (uint)*param_6;
      if (((*param_6 ^ 0xffff) & 0xc) == 0) {
        *extraout_x9 = *puVar7;
        func_0x0001083039ec();
        uVar3 = (uint)*param_6;
      }
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      func_0x000108303aa4(*param_5);
      uVar3 = (uint)*param_6;
    }
    if ((uVar3 >> 9 & 1) != 0) {
      func_0x000108303aa4(*param_5);
    }
    lVar5 = lVar5 + -1;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
    param_9 = param_9 + 1;
  } while (lVar5 != 0);
  return;
}



/* Entry: 1083027e4; end: 10830284b;  */

undefined8 * FUN_1083027e4(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13f) = 0;
  *(undefined4 *)(param_1 + 0x2a) = *param_2;
  param_1[0x2b] = param_3;
  FUN_108302210();
  param_1[0x2c] = param_2;
  return param_1;
}



/* Entry: 10830284c; end: 108302a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10830284c(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  int param_10)

{
  bool bVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar4 [12];
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(ushort *)(param_5 + 0x150) >> 10 & 1) == 0) {
    bVar1 = *(long *)PTR____stack_chk_guard_11034bdc0 == lVar2;
    lVar2 = *(long *)(param_5 + 0x160);
    if (bVar1) {
      func_0x000108303b30();
                    /* WARNING: Could not recover jumptable at 0x0001083028ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if ((*(ushort *)(param_5 + 0x150) >> 0xc & 1) != 0) {
      fVar8 = 0.5;
      if (param_10 != 0xf) {
        fVar8 = 1.0;
      }
      FUN_1082c0b88(param_6);
      param_3 = fVar8 + param_3;
    }
    if (param_10 == 0) {
      func_0x000108303b30(*(undefined8 *)(param_5 + 0x160));
      func_0x0001083038e8();
    }
    else {
      FUN_1082d52f0(param_5,param_6,param_7);
      func_0x000108303b50();
      uVar11 = FUN_1082d6590();
      fVar8 = param_3;
      fVar10 = param_4;
      func_0x000108303b30(*(undefined8 *)(param_5 + 0x160));
      func_0x0001083038e8();
      if (param_10 == 0xf) {
        auVar9 = NEON_fmov(0x3f800000,4);
        iVar5 = -(uint)((float)((ulong)uVar11 >> 0x20) < auVar9._4_4_);
        iVar6 = -(uint)(param_3 < auVar9._8_4_);
        iVar7 = -(uint)(param_4 < auVar9._12_4_);
        uVar3 = (uint)(byte)(UNK_10dddb700 & ~-((float)uVar11 < auVar9._0_4_));
        auVar4._0_8_ = CONCAT17(UNK_10dddb700._7_1_ & ~(byte)((uint)iVar5 >> 0x18),
                                (uint7)CONCAT14(UNK_10dddb700._4_1_ & ~(byte)iVar5,uVar3));
        auVar4[8] = UNK_10dddb700._8_1_ & ~(byte)iVar6;
        auVar4[9] = UNK_10dddb700._9_1_ & ~(byte)((uint)iVar6 >> 8);
        auVar4[10] = UNK_10dddb700._10_1_ & ~(byte)((uint)iVar6 >> 0x10);
        auVar4[0xb] = UNK_10dddb700._11_1_ & ~(byte)((uint)iVar6 >> 0x18);
        auVar9[0xc] = UNK_10dddb700._12_1_ & ~(byte)iVar7;
        auVar9._0_12_ = auVar4;
        auVar9[0xd] = UNK_10dddb700._13_1_ & ~(byte)((uint)iVar7 >> 8);
        auVar9[0xe] = UNK_10dddb700._14_1_ & ~(byte)((uint)iVar7 >> 0x10);
        auVar9[0xf] = UNK_10dddb700._15_1_ & ~(byte)((uint)iVar7 >> 0x18);
        if ((uVar3 + (int)((ulong)auVar4._0_8_ >> 0x20) + auVar4._8_4_ + auVar9._12_4_ & 0xf) == 0)
        {
          uVar11 = FUN_1082d72b4(param_5);
          FUN_108302a8c(uVar11,CONCAT44(fVar10,fVar8));
          auVar9 = NEON_fmov(0x3f800000,4);
          FUN_108302a8c(auVar9._0_8_);
        }
      }
      func_0x000108303b50();
      FUN_1082d7210();
    }
    func_0x000108303b30(*(undefined8 *)(param_5 + 0x160));
    func_0x0001083038e8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
      return;
    }
  }
  ___stack_chk_fail(lVar2);
  return;
}



/* Entry: 108302a8c; end: 108302af3;  */

uint FUN_108302a8c(float param_1,float param_2)

{
  byte bVar2;
  byte bVar3;
  int iVar1;
  byte bVar4;
  
  iVar1 = -(uint)(param_1 < param_2);
  bVar2 = (byte)((uint)iVar1 >> 8);
  bVar3 = (byte)((uint)iVar1 >> 0x10);
  bVar4 = (byte)((uint)iVar1 >> 0x18);
  return CONCAT13(~bVar4 & (byte)((uint)param_1 >> 0x18),
                  CONCAT12(~bVar3 & (byte)((uint)param_1 >> 0x10),
                           CONCAT11(~bVar2 & (byte)((uint)param_1 >> 8),
                                    ~(byte)iVar1 & SUB41(param_1,0)))) |
         CONCAT13(bVar4 & (byte)((uint)param_2 >> 0x18),
                  CONCAT12(bVar3 & (byte)((uint)param_2 >> 0x10),
                           CONCAT11(bVar2 & (byte)((uint)param_2 >> 8),
                                    (byte)iVar1 & SUB41(param_2,0))));
}



/* Entry: 108302af4; end: 108302b63;  */

void FUN_108302af4(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  (**(code **)(*param_2 + 0xb0))();
  if (param_3 == 1) {
    FUN_1082ee6b0(&lStack_28);
  }
  else {
    if (param_3 != 0) {
      *param_1 = 0;
      return;
    }
    FUN_108302b64(&lStack_28);
  }
  lVar2 = lStack_28;
  lStack_28 = 0;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0xb0;
  }
  *param_1 = lVar1;
  func_0x000108303ad4();
  return;
}



/* Entry: 108302b64; end: 108302bd3;  */

void FUN_108302b64(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_28;
  
  plVar6 = (long *)(param_2 + 0x20);
  lVar5 = *plVar6;
  if (lVar5 == 0) {
    func_0x0001082af404(&uStack_28);
    uVar4 = uStack_28;
    uStack_28 = 0;
    FUN_1082eea00(plVar6,uVar4);
    func_0x000108303ad4();
    lVar5 = *plVar6;
    if (lVar5 == 0) goto LAB_108302bbc;
  }
  piVar1 = (int *)(lVar5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_108302bbc:
  *param_1 = lVar5;
  return;
}



/* Entry: 108302bd4; end: 108302c63;  */

void FUN_108302bd4(long param_1,long *param_2,ushort *param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  int iVar6;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  
  uVar2 = *param_3 >> 4 & 3;
  if (uVar2 == 0) {
    uVar5 = 0x200;
    iVar3 = 0x1e;
    iVar6 = 8;
  }
  else {
    if (uVar2 == 2) {
      plVar4 = param_2;
      FUN_1082a23bc();
      if ((int)plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a2454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x50))(param_2,4,(int)param_7 + param_4 * 4);
        return;
      }
      return;
    }
    uVar5 = 0x1000;
    iVar3 = 6;
    iVar6 = 4;
  }
  if ((*(byte *)(param_1 + 0x1b) >> 4 & 1) != 0) {
    func_0x0001082a25cc(param_2,iVar3,param_5,uVar5,iVar6,(int)param_7 + iVar6 * param_4);
    for (iVar3 = 0; iVar6 = unaff_w22 - iVar3, iVar6 != 0 && iVar3 <= unaff_w22;
        iVar3 = iVar1 + iVar3) {
      iVar1 = unaff_w21;
      if (iVar6 <= unaff_w21) {
        iVar1 = iVar6;
      }
      FUN_1082a2460();
    }
    return;
  }
  func_0x0001082a25cc(param_2,iVar3 * (int)param_5,iVar3 * param_4,iVar6 * param_4 & 0xffff,
                      iVar6 * ((int)param_5 + param_4) - 1U & 0xffff,param_7);
  iVar3 = (int)param_2;
  FUN_1082a23bc();
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x24 + 0x58);
    func_0x0001082a2608();
                    /* WARNING: Could not recover jumptable at 0x0001082a2604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108302c64; end: 108302ceb;  */

short FUN_108302c64(ushort *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  
  uVar4 = *param_1;
  FUN_1083022f0();
  bVar6 = (uVar4 & 3) != 3;
  sVar2 = 0x10;
  if (bVar6) {
    sVar2 = 0xc;
  }
  sVar3 = 0xc;
  if (bVar6) {
    sVar3 = 8;
  }
  if ((int)param_1 != 1) {
    sVar2 = sVar3;
  }
  sVar3 = 0xc;
  if (((uVar4 ^ 0xffff) & 0xc) != 0) {
    sVar3 = 8;
  }
  sVar1 = 0;
  if ((uVar4 & 0x40) != 0) {
    sVar1 = sVar3;
  }
  sVar1 = sVar2 + (uVar4 >> 8 & 0x10) + sVar1;
  uVar5 = uVar4 >> 7 & 3;
  sVar2 = sVar1;
  if (uVar5 == 1) {
    sVar2 = sVar1 + 4;
  }
  sVar3 = sVar1 + 0x10;
  if (uVar5 != 2) {
    sVar3 = sVar2;
  }
  return sVar3 + (uVar4 >> 5 & 0x10);
}



/* Entry: 108302cec; end: 108302d0f;  */

void FUN_108302cec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108302db0(param_1,&uStack_18);
  return;
}



/* Entry: 108302d10; end: 108302d53;  */

void FUN_108302d10(void)

{
  undefined8 *in_x7;
  
  *in_x7 = 0;
  FUN_108302d54();
  func_0x000108303a10();
  return;
}



/* Entry: 108302d54; end: 108302d97;  */

void FUN_108302d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_21 = param_9;
  puStack_48 = &uStack_20;
  puStack_30 = &uStack_21;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_40 = param_7;
  uStack_38 = param_8;
  uStack_20 = param_5;
  uStack_18 = param_6;
  FUN_108303724(param_1,&uStack_60);
  return;
}



/* Entry: 108302d98; end: 108302daf;  */

float FUN_108302d98(float param_1,undefined8 *param_2)

{
  return (float)*param_2 * param_1;
}



/* Entry: 108302db0; end: 108302ddb;  */

undefined8 * FUN_108302db0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000108303a44();
  func_0x000108303b3c();
  func_0x00010830398c();
  uVar2 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0x36;
  puVar1 = param_2;
  func_0x000108303b78(param_2,uVar2);
  *puVar1 = &PTR_FUN_110a3af80;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((long)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 1;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((long)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((long)puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 1;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 1;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((long)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 1;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)((long)puVar1 + 0xcc) = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 1;
  *(undefined1 *)((long)puVar1 + 0xd9) = 0;
  puVar1[0x1c] = 0;
  func_0x0001082c6adc(puVar1 + 0x1d);
  func_0x000108303ae8();
  *(undefined4 *)(param_2 + 8) = 0;
  return param_2;
}



/* Entry: 108302ddc; end: 108302deb;  */

undefined8 * FUN_108302ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0x36;
  puVar1 = param_2;
  func_0x000108303b78(param_2,uVar2);
  *puVar1 = &PTR_FUN_110a3af80;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((long)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 1;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((long)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((long)puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 1;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 1;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((long)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 1;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)((long)puVar1 + 0xcc) = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 1;
  *(undefined1 *)((long)puVar1 + 0xd9) = 0;
  puVar1[0x1c] = 0;
  func_0x0001082c6adc(puVar1 + 0x1d);
  func_0x000108303ae8();
  *(undefined4 *)(param_2 + 8) = 0;
  return param_2;
}



/* Entry: 108302dec; end: 108302e07;  */

void FUN_108302dec(void)

{
  func_0x000108303a58();
  return;
}



/* Entry: 108302e08; end: 108302ef3;  */

undefined8 * FUN_108302e08(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x36;
  puVar1 = param_1;
  func_0x000108303b78();
  *puVar1 = &PTR_FUN_110a3af80;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((long)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 1;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((long)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((long)puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 1;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 1;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((long)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 1;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)((long)puVar1 + 0xcc) = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 1;
  *(undefined1 *)((long)puVar1 + 0xd9) = 0;
  puVar1[0x1c] = 0;
  func_0x0001082c6adc(puVar1 + 0x1d);
  func_0x000108303ae8();
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 108302ef4; end: 1083030c7;  */

void FUN_108302ef4(long param_1,ushort *param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  ushort *puVar4;
  undefined1 uVar5;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong uVar8;
  
  uVar1 = *param_2 & 3;
  *(bool *)(param_1 + 0xd8) = uVar1 == 3;
  puVar4 = param_2;
  FUN_1083022f0();
  *(int *)(param_1 + 0xdc) = (int)puVar4;
  if ((int)puVar4 == 1) {
    if (uVar1 == 3) {
      *(undefined **)(param_1 + 0x48) = &UNK_10f489ef1;
      *(undefined4 *)(param_1 + 0x50) = 3;
      uVar5 = 0x10;
LAB_108302f78:
      *(undefined1 *)(param_1 + 0x54) = uVar5;
      uVar6 = 1;
      goto LAB_108302fbc;
    }
    *(undefined **)(param_1 + 0x48) = &DAT_10f68f20c;
    func_0x000108303b8c();
    *(undefined4 *)(param_1 + 0x58) = extraout_w8;
    *(undefined **)(param_1 + 0x60) = &UNK_10f489f06;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x6c) = 0xd;
    *(undefined4 *)(param_1 + 0x70) = extraout_w8;
  }
  else {
    *(undefined **)(param_1 + 0x48) = &DAT_10f68f20c;
    if (uVar1 == 3) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      uVar5 = 0xf;
      goto LAB_108302f78;
    }
    func_0x000108303b8c();
    uVar6 = extraout_w8_00;
LAB_108302fbc:
    *(undefined4 *)(param_1 + 0x58) = uVar6;
  }
  uVar1 = *param_2;
  if ((uVar1 >> 0xc & 1) != 0) {
    *(undefined **)(param_1 + 0xa8) = &UNK_10f489f0f;
    *(undefined4 *)(param_1 + 0xb0) = 3;
    *(undefined1 *)(param_1 + 0xb4) = 0x10;
    *(undefined4 *)(param_1 + 0xb8) = 1;
    uVar1 = *param_2;
  }
  uVar6 = 2;
  uVar7 = 2;
  if (((uVar1 ^ 0xffffffff) & 0xc) == 0) {
    uVar7 = 3;
  }
  uVar7 = uVar7 & (int)((uint)uVar1 << 0x19) >> 0x1f;
  if (uVar7 == 3) {
    uVar5 = 0xf;
  }
  else {
    if (uVar7 != 2) goto LAB_108303048;
    uVar5 = 0xe;
    uVar6 = 1;
  }
  *(undefined **)(param_1 + 0x90) = &UNK_10f488b52;
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  *(undefined1 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  uVar1 = *param_2;
LAB_108303048:
  if ((uVar1 & 0x180) != 0) {
    uVar6 = 3;
    if ((uVar1 & 0x180) != 0x100) {
      uVar6 = 0x11;
    }
    *(undefined **)(param_1 + 0x78) = &DAT_10f68f0f0;
    *(undefined4 *)(param_1 + 0x80) = uVar6;
    *(undefined1 *)(param_1 + 0x84) = 0x17;
    *(undefined4 *)(param_1 + 0x88) = 1;
    uVar1 = *param_2;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    *(undefined **)(param_1 + 0xc0) = &UNK_10f489f1a;
    *(undefined4 *)(param_1 + 200) = 3;
    *(undefined1 *)(param_1 + 0xcc) = 0x10;
    *(undefined4 *)(param_1 + 0xd0) = 1;
  }
  plVar2 = (long *)(param_1 + 0x10);
  param_1 = param_1 + 0x48;
  uVar7 = 6;
  func_0x00010829ede4();
  *plVar2 = param_1;
  *(uint *)(plVar2 + 1) = uVar7;
  *(undefined4 *)((long)plVar2 + 0xc) = 0;
  plVar2[2] = 0;
  for (uVar8 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar8 != 0; uVar8 = uVar8 - 1) {
    if (*(char *)(unaff_x19 + 0xc) != '\0') {
      *(int *)(unaff_x20 + 0xc) = *(int *)(unaff_x20 + 0xc) + 1;
      lVar3 = unaff_x19;
      FUN_10829e2b4();
      *(ulong *)(unaff_x20 + 0x10) = (lVar3 + 3U & 0xfffffffffffffffc) + *(long *)(unaff_x20 + 0x10)
      ;
    }
    unaff_x19 = unaff_x19 + 0x18;
  }
  return;
}



/* Entry: 1083030c8; end: 1083030cb;  */

undefined8 * FUN_1083030c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3af80;
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    func_0x000108303964();
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  FUN_10827f5a4(param_1 + 0x1c);
  return param_1;
}



/* Entry: 1083030cc; end: 1083030df;  */

void FUN_1083030cc(void)

{
  undefined1 *unaff_x19;
  
  FUN_1083032cc();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1083030e0; end: 1083030eb;  */

undefined * FUN_1083030e0(void)

{
  return &UNK_10f489f24;
}



/* Entry: 1083030ec; end: 1083032c3;  */

void FUN_1083030ec(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  
  func_0x0001083039fc(*(undefined1 *)(param_1 + 0xcc));
  func_0x000108303a38();
  (*extraout_x8)();
  func_0x000108303a2c();
  func_0x000108303974();
  func_0x000108303a2c();
  func_0x000108303a38();
  (*extraout_x8_00)();
  func_0x000108303a2c();
  func_0x000108303974();
  func_0x0001083039fc(*(undefined1 *)(param_1 + 0x9c));
  func_0x000108303a38();
  (*extraout_x8_01)();
  if (*(char *)(param_1 + 0x9c) != '\0') {
    func_0x000108303a2c();
    func_0x000108303a38();
    (*extraout_x8_02)();
  }
  func_0x0001083039fc(*(undefined1 *)(param_1 + 0x84));
  func_0x000108303974();
  if (*(char *)(param_1 + 0x84) != '\0') {
    func_0x000108303a2c();
    func_0x000108303a38();
    (*extraout_x8_03)();
  }
  func_0x000108303a2c();
  (*extraout_x8_04)(param_3,2);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  FUN_10828b1a4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000108303260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,uVar1,&UNK_10f484992,0xf);
  return;
}



/* Entry: 1083032c4; end: 1083032cb;  */

long FUN_1083032c4(long param_1)

{
  return param_1 + 0xe8;
}



/* Entry: 1083032cc; end: 10830330f;  */

undefined8 * FUN_1083032cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3af80;
  if (*(char *)(param_1 + 0x2a) == '\x01') {
    func_0x000108303964();
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  FUN_10827f5a4(param_1 + 0x1c);
  return param_1;
}



/* Entry: 108303310; end: 108303313;  */

undefined8 * FUN_108303310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 108303314; end: 108303327;  */

void FUN_108303314(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108303328; end: 108303333;  */

void FUN_108303328(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_4 + 0xe0);
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x30),7,lVar1 + 0x14);
  }
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined4 *)(param_1 + 0x34),lVar1 + 0x4c);
  }
  if (*(char *)(param_1 + 0x3f) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010828bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x38),7,lVar1 + 0x30);
    return;
  }
  return;
}



/* Entry: 108303334; end: 108303723;  */

void FUN_108303334(long param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x9;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lVar2 = param_2[5];
  FUN_10828ba0c(param_1 + 0x30,param_2[3],*(undefined8 *)(lVar2 + 0xe0),2);
  FUN_1082dd9a4(param_2[2],lVar2);
  if (*(int *)(lVar2 + 0xdc) == 1) {
    puVar1 = &UNK_10f489f81;
    if (*(char *)(lVar2 + 0xd8) == '\0') {
      puVar1 = &UNK_10f489f9b;
    }
    FUN_10828bae8(*param_2,puVar1);
    FUN_10828e8c4(auStack_68,&DAT_10f68f20c,(int)*(char *)(lVar2 + 0xd8) | 0xe,0);
    func_0x000108303b00();
  }
  else {
    func_0x00010828e8b0(auStack_68,lVar2 + 0x48);
    func_0x000108303b00();
  }
  func_0x000108303984();
  func_0x000108303af4();
  FUN_10827535c(param_3 + 0x28,auStack_68);
  func_0x000108303984();
  if (*(char *)(lVar2 + 0x84) == '\0') {
    func_0x0001083038d8();
    func_0x000108303a24();
    uVar3 = 0;
  }
  else {
    func_0x0001083038d8();
    func_0x000108303a24();
    uVar3 = param_2[2];
    func_0x00010828e8b0(auStack_68,lVar2 + 0x78);
    FUN_1082dd7c8(uVar3,auStack_68,param_2[6],*(int *)(lVar2 + 0xdc) != 2);
    func_0x000108303984();
    uVar3 = param_2[6];
  }
  if (*(char *)(lVar2 + 0x16a) == '\x01') {
    func_0x0001083038d8();
    func_0x000108303a1c();
    if (*(int *)(lVar2 + 0x98) == 2) {
      auStack_68[0] = *(undefined1 *)(lVar2 + 0x9c);
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_54 = 0;
      FUN_1082dd868(param_2[2],*(undefined8 *)(lVar2 + 0x90),auStack_68,0);
      func_0x000108303a6c(CONCAT44(uStack_5c,uStack_60),*param_2);
      func_0x0001083038d8();
      func_0x000108303a24();
    }
    else {
      uVar4 = param_2[2];
      func_0x000108303af4();
      FUN_1082dd7c8(uVar4,auStack_68,&UNK_10f41520a,0);
      func_0x000108303984();
    }
    if (*(char *)(lVar2 + 0xcc) != '\0') {
      func_0x0001083038d8();
      func_0x000108303a1c();
      uVar4 = param_2[2];
      func_0x00010828e8b0(auStack_68,lVar2 + 0xc0);
      FUN_1082dd7c8(uVar4,auStack_68,&UNK_10f486022,1);
      func_0x000108303984();
      func_0x0001083038d8();
      func_0x000108303a1c();
    }
    func_0x0001083038d8();
    uVar4 = param_2[6];
    pcVar5 = "saturate";
    if (*(char *)(lVar2 + 0xd9) == '\0') {
      pcVar5 = "";
    }
    func_0x000108303a24();
    func_0x0001083038d8();
    FUN_1082dca24(extraout_x8 + extraout_x9,uVar3,0xd,*(undefined4 *)param_2[8],&UNK_10f41520a,
                  param_1 + 0x30,in_x6,in_x7,uVar4,pcVar5);
    func_0x0001083038d8();
    func_0x000108303a1c();
  }
  if (*(int *)(lVar2 + 0xdc) == 1) {
    auStack_80[0] = 0xd;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_6c = 0;
    FUN_1082dd868(param_2[2],&UNK_10f489f06,auStack_80,0);
    if (*(char *)(lVar2 + 0xd8) == '\x01') {
      FUN_10828bae8(*param_2,&UNK_10f48a02b);
    }
    else {
      func_0x000108303a6c(*param_2);
    }
    func_0x0001083038d8();
    func_0x000108303a24();
    if (*(char *)(lVar2 + 0xb4) != '\0') {
      func_0x0001083038d8();
      func_0x000108303a1c();
      uVar3 = param_2[2];
      func_0x00010828e8b0(auStack_68,lVar2 + 0xa8);
      FUN_1082dd7c8(uVar3,auStack_68,&UNK_10f48a08a,1);
      func_0x000108303984();
      func_0x0001083038d8();
      func_0x000108303a1c();
    }
    func_0x0001083038d8();
  }
  else {
    func_0x0001083038d8();
  }
  func_0x000108303a24();
  return;
}



/* Entry: 108303724; end: 10830374f;  */

undefined8 FUN_108303724(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  
  func_0x000108303a44();
  func_0x000108303b3c();
  func_0x00010830398c();
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *(undefined8 *)param_1[3];
  uVar6 = ((undefined8 *)param_1[3])[1];
  uVar4 = param_1[4];
  uStack_28 = *(undefined8 *)param_1[5];
  *(undefined8 *)param_1[5] = 0;
  FUN_1083037d0(param_2,uVar1,uVar5,uVar2,uVar3,uVar6,uVar4,&uStack_28,*(undefined1 *)param_1[6]);
  FUN_10827f5a4(&uStack_28);
  return param_2;
}



/* Entry: 108303750; end: 1083037b3;  */

undefined8 FUN_108303750(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = *(undefined8 *)param_1[3];
  uVar6 = ((undefined8 *)param_1[3])[1];
  uVar4 = param_1[4];
  uStack_28 = *(undefined8 *)param_1[5];
  *(undefined8 *)param_1[5] = 0;
  FUN_1083037d0(param_2,uVar1,uVar5,uVar2,uVar3,uVar6,uVar4,&uStack_28,*(undefined1 *)param_1[6]);
  FUN_10827f5a4(&uStack_28);
  return param_2;
}



/* Entry: 1083037b4; end: 1083037cf;  */

void FUN_1083037b4(void)

{
  func_0x000108303a58();
  return;
}



/* Entry: 1083037d0; end: 1083038d7;  */

undefined8 *
FUN_1083037d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined1 extraout_w8;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x36;
  puVar1 = param_1;
  func_0x000108303b78(param_9,param_1,param_2,param_6);
  *puVar1 = &PTR_FUN_110a3af80;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((long)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 1;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  *(undefined1 *)((long)puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 1;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined1 *)((long)puVar1 + 0x84) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 1;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)((long)puVar1 + 0x9c) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 1;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((long)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 1;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined1 *)((long)puVar1 + 0xcc) = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 1;
  *(undefined1 *)((long)puVar1 + 0xd9) = extraout_w8;
  uVar2 = *param_8;
  *param_8 = 0;
  puVar1[0x1c] = uVar2;
  FUN_10829c740(puVar1 + 0x1d,param_5);
  func_0x000108303ae8();
  *(undefined4 *)(param_1 + 8) = 1;
  return param_1;
}



/* Entry: 1083038d8; end: 108303bc3;  */

void FUN_1083038d8(void)

{
  return;
}



/* Entry: 108303bc4; end: 108303cb7;  */

void FUN_108303bc4(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,ulong param_6)

{
  long lVar1;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((param_6 & 0xfffffffd) == 0) {
    uStack_78 = param_4[1];
    uStack_80 = *param_4;
    uStack_68 = param_4[3];
    uStack_70 = param_4[2];
    uStack_60 = param_4[4];
    FUN_10838f538(auStack_98,param_5);
    uStack_48 = *(undefined8 *)(param_3 + 0x24);
    uStack_50 = *(undefined8 *)(param_3 + 0x1c);
    if (*(char *)(param_3 + 0x18) == '\x01') {
      lVar1 = 0xc0;
      __Znwm();
      func_0x0001083044ac();
    }
    else {
      lVar1 = 0xe0;
      __Znwm();
      FUN_1082a3af0(lVar1 + 0xc0,param_3);
      func_0x0001083044ac(lVar1,lVar1 + 0xc0,&uStack_50,&uStack_80,auStack_98);
    }
    *param_1 = lVar1;
    FUN_10838f648(auStack_98);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 108303cb8; end: 108303e73;  */

undefined8 *
FUN_108303cb8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,byte param_10,undefined *param_11)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam000000011372ab70 & 1) == 0) {
    iVar2 = 0x1372ab70;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372ab68 = iVar2;
      ___cxa_guard_release(0x11372ab70);
    }
  }
  iVar2 = iRam000000011372ab68;
  param_5[1] = 0;
  param_5[2] = 0;
  *(short *)(param_5 + 3) = (short)iVar2;
  *(undefined8 *)((long)param_5 + 0x24) = 0;
  *(undefined8 *)((long)param_5 + 0x1c) = 0;
  *(undefined4 *)((long)param_5 + 0x2c) = 0;
  *param_5 = &PTR_FUN_110a3b020;
  param_5[6] = param_6;
  *(undefined1 *)(param_5 + 7) = 0;
  *(byte *)((long)param_5 + 0x39) = *(byte *)((long)param_5 + 0x39) & 0xf0 | param_10 & 3;
  puVar1 = &UNK_10df14cb4;
  if (param_11 != (undefined *)0x0) {
    puVar1 = param_11;
  }
  param_5[8] = puVar1;
  uVar3 = param_8[4];
  uVar10 = param_8[1];
  uVar9 = *param_8;
  uVar7 = param_8[3];
  uVar6 = param_8[2];
  param_5[0x13] = param_5 + 0xe;
  param_5[10] = uVar10;
  param_5[9] = uVar9;
  param_5[0xc] = uVar7;
  param_5[0xb] = uVar6;
  param_5[0xd] = uVar3;
  param_5[0x14] = 0x200000000;
  param_5[0x16] = 0;
  param_5[0x17] = 0;
  FUN_1083043bc(param_5 + 0x13,1);
  uVar8 = (undefined4)uVar9;
  puVar4 = (undefined8 *)(param_5[0x13] + (long)*(int *)(param_5 + 0x14) * 0x28);
  *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0xffffffffffffffff;
  uVar3 = *param_7;
  puVar4[1] = param_7[1];
  *puVar4 = uVar3;
  func_0x00010838f558(puVar4 + 2,param_9);
  uVar5 = (undefined4)uVar3;
  FUN_10817500c(param_9);
  uStack_60 = uVar5;
  uStack_5c = uVar8;
  uStack_58 = param_3;
  uStack_54 = param_4;
  FUN_108364f90(param_8,param_5 + 4,&uStack_60,1);
  *(undefined2 *)((long)param_5 + 0x1a) = 0;
  return param_5;
}



/* Entry: 108303e74; end: 108303ed3;  */

long FUN_108303e74(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x30) * 0x28;
    do {
      FUN_10838f648(uVar1 + 0x10);
      uVar1 = uVar1 + 0x28;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x28));
  }
  return param_1;
}



/* Entry: 108303ed4; end: 108303f03;  */

undefined8 * FUN_108303ed4(undefined8 *param_1)

{
  FUN_108303e74(param_1 + 0xe);
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 108303f04; end: 108303f17;  */

void FUN_108303f04(void)

{
  FUN_108303ed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108303f18; end: 108303f3b;  */

undefined * FUN_108303f18(void)

{
  return &UNK_10f48a13e;
}



/* Entry: 108303f3c; end: 108304013;  */

undefined8 FUN_108303f3c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = param_1 + 0x30;
  FUN_1082fcb80(lVar3,param_2 + 0x30,param_4,param_1 + 0x20,param_2 + 0x20,0);
  if ((int)lVar3 != 0) {
    uVar4 = param_1 + 0x48;
    func_0x0001081421c8(uVar4,param_2 + 0x48);
    if ((uVar4 & 1) == 0) {
      uVar1 = *(uint *)(param_2 + 0xa0);
      lVar5 = *(long *)(param_2 + 0x98);
      FUN_1083043bc(param_1 + 0x98,uVar1);
      iVar2 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar2 + uVar1;
      lVar3 = *(long *)(param_1 + 0x98) + (long)iVar2 * 0x28 + 0x10;
      lVar5 = lVar5 + 0x10;
      for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
          uVar4 = uVar4 - 1) {
        uVar6 = *(undefined8 *)(lVar5 + -0x10);
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar5 + -8);
        *(undefined8 *)(lVar3 + -0x10) = uVar6;
        FUN_10838f538(lVar3,lVar5);
        lVar3 = lVar3 + 0x28;
        lVar5 = lVar5 + 0x28;
      }
      *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | *(byte *)(param_2 + 0xa8);
      return 0;
    }
  }
  return 2;
}



/* Entry: 108304014; end: 108304077;  */

void FUN_108304014(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
    FUN_1082a1068(param_2);
    FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x98),0,
                  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x88));
    puVar1 = *(undefined8 **)(param_1 + 0xb0);
    plVar2 = (long *)*puVar1;
    if (plVar2 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      plVar2 = (long *)puVar1[4];
      if (plVar2 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      }
      plStack_48 = plVar2;
      FUN_1082a16e0(param_2,&uStack_38,&uStack_40,&plStack_48,0);
      func_0x0001082a20e4();
      FUN_1082647e4(&uStack_40);
      FUN_1082647e4(&uStack_38);
      func_0x0001082a1754(param_2,*(undefined4 *)(puVar1 + 5),*(undefined4 *)((long)puVar1 + 0x2c));
    }
    else {
      func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      uStack_58 = 0;
      plStack_60 = (long *)puVar1[4];
      plStack_50 = plVar2;
      if (plStack_60 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
      }
      FUN_1082a16e0(param_2,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)puVar1 + 0x1c))
      ;
      FUN_1082647e4(&plStack_60);
      func_0x0001082a2114();
      func_0x0001082a2124();
      if (*(int *)((long)puVar1 + 0xc) == 0) {
        func_0x0001082a175c(param_2,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((long)puVar1 + 0x14)
                            ,*(undefined2 *)(puVar1 + 3),*(undefined2 *)((long)puVar1 + 0x1a),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
      else {
        func_0x0001082a1764(param_2,*(undefined4 *)(puVar1 + 1),*(int *)((long)puVar1 + 0xc),
                            *(undefined4 *)(puVar1 + 2),*(undefined4 *)(puVar1 + 5),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
    }
    return;
  }
  return;
}



/* Entry: 108304078; end: 1083040af;  */

uint FUN_108304078(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0xa0) < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083040a0);
    (*pcVar1)();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x98);
  lVar2 = param_1 + 0x30;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  func_0x0001082fbad4(lVar2);
  puVar3[1] = uVar5;
  *puVar3 = uVar4;
  if ((byte *)(param_1 + 0xa8) != (byte *)0x0) {
    FUN_1082fc488();
    *(byte *)(param_1 + 0xa8) = (byte)puVar3 ^ 1;
  }
  return (uint)lVar2 & 0xffff;
}



/* Entry: 1083040b0; end: 10830419f;  */

void FUN_1083040b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_64 = 1;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    uStack_64 = 2;
  }
  uStack_58 = 0xff800000ff800000;
  uStack_60 = 0xff800000ff800000;
  uStack_6c = 0;
  uStack_68 = 0xff;
  auStack_80[0] = 1;
  uStack_78 = 0;
  lVar1 = param_3;
  func_0x00010828dd54(param_3,&uStack_64,&uStack_6c,auStack_80,param_1 + 0x48);
  if (lVar1 == 0) {
    FUN_10841076c(&UNK_10f48a149);
  }
  else {
    lVar2 = param_1 + 0x30;
    FUN_1082fcbb8(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,lVar1,0,param_8,param_9);
    *(long *)(param_1 + 0xb8) = lVar2;
  }
  return;
}



/* Entry: 1083041a0; end: 1083043bb;  */

void FUN_1083041a0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  code *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  long lVar5;
  undefined4 *extraout_x9;
  undefined4 *extraout_x9_00;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  byte bStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  char cStack_64;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  byte bStack_41;
  
  if ((*(long *)(param_5 + 0xb8) != 0) ||
     (FUN_1082fbcfc(param_5,param_6), *(long *)(param_5 + 0xb8) != 0)) {
    bStack_41 = 1;
    uVar7 = (ulong)(*(uint *)(param_5 + 0xa0) &
                   ((int)*(uint *)(param_5 + 0xa0) >> 0x1f ^ 0xffffffffU));
    lVar9 = 0x20;
    pbVar4 = (byte *)0x0;
    for (uVar8 = 0; uVar7 != uVar8; uVar8 = uVar8 + 1) {
      if ((long)*(int *)(param_5 + 0xa0) <= (long)uVar8) goto LAB_1083043b8;
      lVar5 = *(long *)(*(long *)(param_5 + 0x98) + lVar9);
      if (lVar5 == -1) {
        uVar3 = 0;
      }
      else if (lVar5 == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = *(undefined4 *)(lVar5 + 0xc);
      }
      pbVar2 = &bStack_41;
      FUN_1082e91c4(pbVar2,pbVar4,uVar3);
      lVar9 = lVar9 + 0x28;
      pbVar4 = pbVar2;
    }
    if (((int)pbVar4 != 0) && ((bStack_41 & 1) != 0)) {
      FUN_1082fc0f8(&puStack_60,param_6,
                    *(undefined8 *)(*(long *)(*(long *)(param_5 + 0xb8) + 0x98) + 0x20));
      if (puStack_60 == (undefined4 *)0x0) {
        FUN_10841076c(&UNK_10f488006);
      }
      else {
        puVar6 = puStack_60;
        for (uVar8 = 0; uVar8 != uVar7; uVar8 = uVar8 + 1) {
          if (((long)*(int *)(param_5 + 0xa0) <= (long)uVar8) ||
             (func_0x0001082e70b0(&uStack_74,*(long *)(param_5 + 0x98) + uVar8 * 0x28,
                                  *(undefined1 *)(param_5 + 0xa8)),
             (long)*(int *)(param_5 + 0xa0) <= (long)uVar8)) {
LAB_1083043b8:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1083043bc);
            (*pcVar1)();
          }
          FUN_1083902c4(auStack_a0,*(long *)(param_5 + 0x98) + uVar8 * 0x28 + 0x10);
          while ((bStack_80 & 1) == 0) {
            FUN_10817500c(auStack_90);
            *puVar6 = (int)param_1;
            puVar6[1] = param_2;
            puVar6[2] = uStack_74;
            if (cStack_64 == '\x01') {
              *(undefined8 *)(puVar6 + 3) = uStack_70;
              puVar6[5] = uStack_68;
              puVar6 = puVar6 + 6;
            }
            else {
              puVar6 = puVar6 + 3;
            }
            *puVar6 = (int)param_1;
            puVar6[1] = param_4;
            puVar6[2] = uStack_74;
            if (cStack_64 == '\x01') {
              func_0x000108304494();
              puVar6 = extraout_x9;
              uVar3 = extraout_w8;
            }
            else {
              puVar6 = puVar6 + 3;
              uVar3 = uStack_74;
            }
            *puVar6 = param_3;
            puVar6[1] = param_2;
            puVar6[2] = uVar3;
            if (cStack_64 == '\x01') {
              func_0x000108304494();
              puVar6 = extraout_x9_00;
              uVar3 = extraout_w8_00;
            }
            else {
              puVar6 = puVar6 + 3;
            }
            *puVar6 = param_3;
            puVar6[1] = param_4;
            puVar6[2] = uVar3;
            if (cStack_64 == '\x01') {
              *(undefined8 *)(puVar6 + 3) = uStack_70;
              puVar6[5] = uStack_68;
              puVar6 = puVar6 + 6;
              param_1 = uStack_70;
            }
            else {
              puVar6 = puVar6 + 3;
            }
            func_0x000108390338(auStack_a0);
          }
        }
        *(undefined8 *)(param_5 + 0xb0) = uStack_58;
      }
    }
  }
  return;
}



/* Entry: 1083043bc; end: 10830447f;  */

void FUN_1083043bc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - uVar1) < param_2) {
    if ((int)(uVar1 ^ 0x7fffffff) < param_2) {
      func_0x00010bdb1a68();
      return;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 0x28;
    uVar3 = (ulong)(uVar1 + param_2);
    FUN_10840fe24(0x3ff8000000000000);
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(puVar2,*param_1,(long)*(int *)(param_1 + 1) * 0x28);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    uVar3 = uVar3 / 0x28;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    *param_1 = puVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar3 << 1 | 1;
  }
  return;
}



/* Entry: 108304480; end: 1083044b7;  */

void FUN_108304480(void)

{
  return;
}



/* Entry: 1083044b8; end: 108304507;  */

undefined8 FUN_1083044b8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(long *)(param_2 + 0x20) + 0x40;
  FUN_10828769c();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x10) != 0 && *(uint *)(param_2 + 0x38) < 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 108304508; end: 108304527;  */

void FUN_108304508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,long param_7)

{
  undefined4 uVar1;
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar2 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_bc [52];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_1082d38bc(auStack_bc,param_6,param_5);
  auVar6._8_8_ = extraout_var;
  auVar6._0_8_ = extraout_d2;
  if (param_7 == 0) {
    uStack_88 = *param_6;
    uStack_6c = param_6[3];
    uStack_70 = (undefined4)*(undefined8 *)(param_6 + 1);
    auVar2._4_12_ = auVar6._4_12_;
    auVar2._0_4_ = uStack_70;
    uVar1 = (undefined4)((ulong)*(undefined8 *)(param_6 + 1) >> 0x20);
    auVar4._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
    auVar4._0_8_ = auVar2._0_8_;
    auVar4._8_4_ = uVar1;
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._4_4_ = uStack_70;
    auVar3._0_4_ = uStack_70;
    auVar5._0_12_ = auVar3._0_12_;
    auVar5._12_4_ = uVar1;
    auVar6 = NEON_ext(auVar5,auVar5,8,1);
    auVar7._0_12_ = auVar6._0_12_;
    auVar7._12_4_ = uStack_6c;
    uStack_78 = auVar7._8_8_;
    uStack_80 = auVar6._0_8_;
    auVar6 = NEON_fmov(0x3f800000,4);
    uStack_60 = auVar6._8_8_;
    uStack_68 = auVar6._0_8_;
    uStack_58 = 0;
    uStack_84 = uStack_88;
  }
  else {
    FUN_1082d38bc(&uStack_88,param_6,param_7);
  }
  uStack_54 = 0;
  FUN_1082c0dd8(param_1,param_4,param_2,auStack_bc,param_3);
  return;
}



/* Entry: 108304528; end: 10830469f;  */

void FUN_108304528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6,int *param_7)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_50 = 0x103f800000;
  FUN_10818cfd0(param_5,&uStack_70);
  if ((int)param_5 != 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    if (param_6[1] < param_7[1]) {
      func_0x0001083053fc((float)*param_6,(float)param_6[1],(float)param_6[2],(float)param_7[1]);
      func_0x0001083053d8();
      func_0x000108305424();
    }
    if (*param_6 < *param_7) {
      func_0x0001083053fc((float)*param_6,(float)param_7[1],(float)*param_7,(float)param_7[3]);
      func_0x0001083053d8();
      func_0x000108305424();
    }
    if (param_7[2] < param_6[2]) {
      func_0x0001083053fc((float)param_7[2],(float)param_7[1],(float)param_6[2],(float)param_7[3]);
      func_0x0001083053d8();
      func_0x000108305424();
    }
    if (param_7[3] < param_6[3]) {
      uStack_80 = CONCAT44((float)param_7[3],(float)*param_6);
      uStack_78 = CONCAT44((float)param_6[3],(float)param_6[2]);
      FUN_108304508(param_1,param_2,param_3,param_4,0x113254e20,&uStack_80,&uStack_70);
    }
  }
  return;
}



/* Entry: 1083046a0; end: 1083051a7;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_1083046a0(float param_1,float param_2,float param_3,float param_4,long param_5,
                    long *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  long *extraout_x8;
  ulong extraout_x8_00;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong unaff_x20;
  undefined8 uVar18;
  uint *unaff_x22;
  undefined4 uVar19;
  undefined8 *unaff_x24;
  undefined4 uVar20;
  uint *unaff_x25;
  undefined8 *unaff_x26;
  byte unaff_w27;
  undefined4 uVar21;
  undefined4 *unaff_x28;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  long *plStack_270;
  undefined4 uStack_268;
  undefined2 uStack_264;
  long *plStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined4 uStack_248;
  undefined2 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_210;
  long *plStack_208;
  long *plStack_200;
  uint auStack_1f8 [4];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined4 uStack_1d0;
  undefined2 uStack_1cc;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_190;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
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
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined8 uStack_b8;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined ***pppuStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_6;
  if (*(char *)(*(long *)(*param_6 + 0x20) + 0x54) == '\x01') {
    plVar11 = (long *)&UNK_10f48a16e;
    FUN_10827b938();
  }
  if (*(long *)(param_5 + 0x10) == 0) {
    param_6 = (long *)0x0;
    goto LAB_1083048d0;
  }
  lVar12 = param_6[7];
  if (*(char *)(lVar12 + 0x38) == '\x04') {
    if ((*(byte *)(lVar12 + 0xe) >> 1 & 1) == 0) goto LAB_10830471c;
LAB_108304738:
    plVar11 = (long *)param_6[6];
    unaff_x20 = lVar12 + 0x40;
    FUN_1082b65d4(unaff_x20,plVar11,0);
  }
  else {
    if (*(char *)(lVar12 + 0x3b) == '\x01') goto LAB_108304738;
LAB_10830471c:
    unaff_x20 = 1;
  }
  unaff_x24 = (undefined8 *)0x0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  auStack_1f8[0] = 0;
  auStack_1f8[1] = 0;
  auStack_1f8[2] = 0;
  auStack_1f8[3] = 0;
  if ((*(char *)(param_5 + 0x18) == '\x01') && ((int)unaff_x20 != 0)) {
    iVar7 = (int)param_6[6];
    FUN_10827a0d8();
    if (iVar7 != 0) {
      iVar7 = (int)param_6[7];
      FUN_108287bd8();
      if (iVar7 != 0) {
        unaff_x24 = (undefined8 *)(ulong)((int)param_6[8] == 1);
        goto LAB_108304794;
      }
    }
    unaff_x24 = (undefined8 *)0x0;
  }
LAB_108304794:
  plVar8 = (long *)param_6[4];
  unaff_x22 = (uint *)param_6[6];
  lVar12 = param_6[7];
  if (plVar8 == (long *)0x0) {
    plVar11 = *(long **)(*(long *)(param_6[3] + 0x10) + 0x90);
  }
  else {
    (**(code **)(*plVar8 + 0x10))();
  }
  plStack_208 = plVar8;
  plStack_200 = plVar11;
  FUN_1082d8a18(lVar12);
  uStack_180 = (long *)CONCAT44(param_2,param_1);
  uStack_178 = (undefined8 *)CONCAT44(param_4,param_3);
  bVar4 = false;
  if ((param_1 < param_3) && (bVar4 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar4 = param_2 < param_4;
  }
  if (bVar4) {
    uStack_240 = 0;
    uStack_238 = 0;
    FUN_108364f90(unaff_x22,&uStack_240,&uStack_180,1);
    lStack_1b8 = 0x4effffff4effffff;
    uStack_1c0 = 0xcf000000cf000000;
    puVar9 = &uStack_240;
    FUN_10838ed10(puVar9,&uStack_1c0);
    if ((int)puVar9 == 0) goto LAB_1083048a8;
    fVar23 = (float)NEON_fminnm((float)(double)(long)(((float)uStack_238 - (float)uStack_240) + 0.5)
                                ,0x4effffff);
    if (fVar23 <= -2.1474835e+09) {
      fVar23 = -2.1474835e+09;
    }
    if (0x7fffff80 < (int)fVar23) goto LAB_1083048a8;
    fVar23 = (float)NEON_fminnm((float)(double)(long)((uStack_238._4_4_ - uStack_240._4_4_) + 0.5),
                                0x4effffff);
    uVar19 = 0xceffffff;
    if (fVar23 <= -2.1474835e+09) {
      fVar23 = -2.1474835e+09;
    }
    if (0x7fffff80 < (int)fVar23) goto LAB_1083048a8;
    fVar23 = uStack_240._4_4_;
    func_0x00010812f1a8(&uStack_240,&uStack_1e8);
    puVar10 = auStack_1f8;
    FUN_10838ea90(puVar10,&plStack_208,&uStack_1e8);
    if (((ulong)puVar10 & 1) != 0) {
      if ((int)unaff_x24 == 0) {
        unaff_w27 = false;
        unaff_x22 = auStack_1f8;
      }
      else {
        iVar2 = (int)uStack_1e0 - (uint)uStack_1e8;
        iVar3 = uStack_1e0._4_4_ - uStack_1e8._4_4_;
        lVar15 = (long)iVar3 * (long)iVar2;
        iVar7 = *(int *)(*(long *)(*(long *)(*(long *)(param_6[3] + 8) + 0x10) + 0xb8) + 0x3c);
        lVar12 = (long)(int)(auStack_1f8[2] - auStack_1f8[0]) *
                 (long)(int)(auStack_1f8[3] - auStack_1f8[1]);
        bVar5 = lVar15 + lVar12 * -2 == 0;
        bVar4 = lVar15 < lVar12 * 2;
        unaff_w27 = ((bVar5 || bVar4) && iVar2 <= iVar7) && iVar3 <= iVar7;
        unaff_x22 = (uint *)&uStack_1e8;
        if ((!bVar5 && !bVar4 || iVar2 > iVar7) || iVar3 > iVar7) {
          unaff_x22 = auStack_1f8;
        }
      }
      FUN_10827a1fc(&uStack_240);
      if ((bool)unaff_w27 != false) {
        puVar13 = (undefined4 *)param_6[6];
        uVar19 = *puVar13;
        uVar20 = puVar13[1];
        unaff_x26 = (undefined8 *)(ulong)(uint)puVar13[3];
        uVar21 = puVar13[4];
        if ((bRam000000011372ab80 & 1) == 0) goto LAB_108305018;
        goto LAB_1083049c4;
      }
      plStack_250 = (long *)0x0;
      uStack_248 = 0;
      uStack_244 = 0x3210;
      goto LAB_108304b90;
    }
  }
  else {
LAB_1083048a8:
    uStack_1e8 = 0;
    uStack_1e0 = 0;
  }
  auStack_1f8[0] = 0;
  auStack_1f8[1] = 0;
  auStack_1f8[2] = 0;
  auStack_1f8[3] = 0;
  if ((unaff_x20 & 1) == 0) {
    FUN_108304528(param_6[3],param_6[1],param_6[2],param_6[4],param_6[6],&plStack_208,&uStack_1e8);
  }
  param_6 = (long *)0x1;
LAB_1083048d0:
  do {
    uVar20 = SUB84(unaff_x25,0);
    uVar21 = SUB84(unaff_x28,0);
    uVar19 = SUB84(unaff_x24,0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return param_6;
    }
    ___stack_chk_fail();
LAB_108305018:
    iVar7 = 0x1372ab80;
    ___cxa_guard_acquire();
    if (iVar7 != 0) {
      func_0x000108320d60();
      iRam000000011372ab78 = iVar7;
      ___cxa_guard_release(&bRam000000011372ab80);
    }
LAB_1083049c4:
    iVar7 = iRam000000011372ab78;
    lVar12 = param_6[7];
    FUN_1082d8b10(lVar12);
    FUN_10827a280(&uStack_180,&uStack_240,iVar7,(int)lVar12 + 7);
    puStack_210 = &UNK_10f48a18f;
    lVar12 = *uStack_180;
    *(uint *)(lVar12 + 8) = unaff_x22[2] - *unaff_x22;
    *(uint *)(lVar12 + 0xc) = unaff_x22[3] - unaff_x22[1];
    fVar27 = *(float *)(param_6[6] + 8);
    fVar26 = *(float *)(param_6[6] + 0x14);
    *(undefined4 *)(lVar12 + 0x10) = uVar19;
    *(undefined4 *)(lVar12 + 0x14) = uVar21;
    *(undefined4 *)(lVar12 + 0x18) = uVar20;
    *(int *)(lVar12 + 0x1c) = (int)unaff_x26;
    iVar7 = (int)param_6[7] + 0x40;
    FUN_108287d18();
    uVar19 = 0x47800000;
    fVar23 = 2.1474835e+09;
    fVar27 = (float)NEON_fminnm((fVar27 - (float)(int)fVar27) * 65536.0,0x4effffff);
    param_4 = -2.1474835e+09;
    if (fVar27 <= -2.1474835e+09) {
      fVar27 = -2.1474835e+09;
    }
    fVar26 = (float)NEON_fminnm((fVar26 - (float)(int)fVar26) * 65536.0,0x4effffff);
    if (fVar26 <= -2.1474835e+09) {
      fVar26 = param_4;
    }
    lVar12 = param_6[7];
    if (iVar7 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(int *)(lVar12 + 0x4c) << 0x11 | 0x10000;
    }
    lVar15 = *uStack_180;
    *(uint *)(lVar15 + 0x20) = (uint)(int)fVar26 >> 8 & 0xff | (int)fVar27 & 0xff00U | uVar16;
    FUN_1082d8bdc(lVar12,lVar15 + 0x24);
    FUN_10827a320(&uStack_180);
    plStack_250 = (long *)0x0;
    uStack_248 = 0;
    uStack_244 = 0x3210;
    FUN_1082a4c48(&uStack_1c0,*(undefined8 *)(param_5 + 0x10),&uStack_240,1);
    if (uStack_1c0 != 0) {
      uVar6 = (undefined2)*(undefined8 *)(*(long *)(*(long *)(param_6[3] + 8) + 0x10) + 0xb8);
      func_0x00010830542c();
      func_0x00010828a9ac();
      uVar14 = uStack_1c0;
      uStack_1c0 = 0;
      plVar11 = (long *)0x0;
      if (uVar14 != 0) {
        func_0x00010830542c();
        plVar11 = extraout_x8;
      }
      uStack_258 = 0;
      uStack_178 = (undefined8 *)((ulong)CONCAT22((short)((ulong)uStack_178 >> 0x30),uVar6) << 0x20)
      ;
      uStack_180 = plVar11;
      FUN_108279f20(&plStack_250,&uStack_180);
      FUN_1082764bc(&uStack_180);
      FUN_1082764bc(&uStack_258);
    }
    func_0x00010827aaa0(&uStack_1c0);
    if (plStack_250 == (long *)0x0) {
LAB_108304b90:
      uVar16 = *(uint *)(param_6 + 8);
      unaff_x24 = (undefined8 *)(ulong)uVar16;
      unaff_x25 = (uint *)(ulong)(uVar16 == 1);
      plVar11 = (long *)*param_6;
      (**(code **)(*plVar11 + 0x18))();
      if ((plVar11 == (long *)0x0) || (lVar12 = plVar11[0xc], lVar12 == 0)) {
        uStack_178 = &uStack_170;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        uStack_f8 = 0;
        ppuStack_140 = &PTR_FUN_110a3e608;
        uStack_e8 = 0;
        uStack_e0 = 0xffffffffffffffff;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0x101;
        uStack_be = 0;
        puVar9 = &uStack_180;
        FUN_1082b0564(puVar9,unaff_x22);
        if (((ulong)puVar9 & 1) != 0) {
          FUN_1082b032c(&uStack_180,param_6[7],param_6[6],uVar16 == 1,0xff);
          FUN_1082b0660(&uStack_1c0,&uStack_180,*param_6,unaff_w27 & 1);
          func_0x000108305444();
          func_0x00010830543c();
          func_0x00010830546c();
          goto LAB_108304e04;
        }
        func_0x00010830546c();
      }
      else {
        lVar15 = *param_6;
        unaff_x25 = unaff_x22;
        func_0x00010821a0c0();
        unaff_x26 = *(undefined8 **)(lVar15 + 0x48);
        unaff_x24 = *(undefined8 **)(*(long *)(lVar15 + 0x10) + 0xb8);
        FUN_10828a818(&uStack_180,unaff_x24,1,0);
        func_0x00010828a9ac(unaff_x24,&uStack_180,1);
        FUN_1082a5548(&uStack_190,unaff_x26,&uStack_180,unaff_x25,0,1,0,unaff_w27 & 1,1,0);
        lVar15 = uStack_190;
        uStack_190 = 0;
        uVar14 = 0;
        if (lVar15 != 0) {
          func_0x00010830542c();
          uVar14 = extraout_x8_00;
        }
        plStack_1d8 = (long *)0x0;
        lStack_1b8 = (ulong)CONCAT22((short)((ulong)lStack_1b8 >> 0x30),(short)unaff_x24) << 0x20;
        uStack_1c0 = uVar14;
        func_0x000108305450();
        func_0x00010827aaa0(&uStack_190);
        if ((char)uStack_128 == '\x01') {
          func_0x000108305410();
        }
        func_0x000108305444();
        func_0x00010830543c();
        if (plStack_250 != (long *)0x0) {
          puVar9 = (undefined8 *)param_6[6];
          unaff_x25 = (uint *)param_6[7];
          unaff_x24 = (undefined8 *)0x58;
          __Znwm();
          unaff_x24[8] = 0;
          *(undefined2 *)(unaff_x24 + 9) = 0;
          unaff_x24[2] = 0;
          unaff_x24[1] = 0;
          unaff_x24[4] = 0;
          unaff_x24[3] = 0;
          unaff_x24[6] = 0;
          unaff_x24[5] = 0;
          *(undefined8 *)((long)unaff_x24 + 0x35) = 0;
          *unaff_x24 = &PTR_FUN_110a3b0e8;
          unaff_x26 = (undefined8 *)0x120;
          __Znwm();
          uVar18 = *(undefined8 *)unaff_x22;
          unaff_x26[1] = *(undefined8 *)(unaff_x22 + 2);
          *unaff_x26 = uVar18;
          uVar25 = puVar9[1];
          uVar24 = *puVar9;
          uVar22 = puVar9[3];
          uVar18 = puVar9[2];
          unaff_x26[6] = puVar9[4];
          unaff_x26[3] = uVar25;
          unaff_x26[2] = uVar24;
          unaff_x26[5] = uVar22;
          unaff_x26[4] = uVar18;
          FUN_1082d8ff0(unaff_x26 + 7,unaff_x25);
          uVar19 = (undefined4)uVar24;
          *(bool *)(unaff_x26 + 0x23) = uVar16 == 1;
          unaff_x24[10] = unaff_x26;
          ppuStack_a8 = &PTR_FUN_110a3b128;
          pppuStack_90 = &ppuStack_a8;
          puStack_a0 = unaff_x24;
          FUN_1083a74d4(lVar12,&ppuStack_a8);
          func_0x0001006393ec(&ppuStack_a8);
          plVar11 = plStack_250;
          (**(code **)(*plStack_250 + 0x18))();
          lVar12 = plVar11[0xb];
          plVar11[0xb] = (long)unaff_x24;
          if (lVar12 != 0) {
            func_0x000108305460();
          }
LAB_108304e04:
          if (plStack_250 != (long *)0x0) {
            if ((unaff_w27 & 1) != 0) {
              FUN_1082b8070(&uStack_180,&uStack_240,
                            *(undefined4 *)(*(long *)(*param_6 + 0x10) + 0xb0));
              uVar18 = *(undefined8 *)(param_5 + 0x10);
              if (plStack_250 == (long *)0x0) {
                plVar11 = (long *)0x0;
              }
              else {
                plVar11 = plStack_250;
                (**(code **)(*plStack_250 + 0x18))();
              }
              FUN_1082a49e8(uVar18,&uStack_240,plVar11);
              plStack_260 = uStack_180;
              uStack_180 = (long *)0x0;
              FUN_1082d8ecc(param_6[7],&plStack_260);
              FUN_1082b91e4(&plStack_260);
              FUN_1082b91e4(&uStack_180);
            }
            goto LAB_108304e8c;
          }
        }
      }
      param_6 = (long *)0x0;
    }
    else {
LAB_108304e8c:
      if ((unaff_x20 & 1) == 0) {
        lVar12 = param_6[3];
        FUN_1082a2648(&uStack_180,param_6[1]);
        FUN_108304528(lVar12,&uStack_180,param_6[2],param_6[4],param_6[6],&plStack_208,&uStack_1e8);
        func_0x00010827ee54(&uStack_180);
      }
      plStack_270 = plStack_250;
      plStack_250 = (long *)0x0;
      uStack_268 = uStack_248;
      uStack_264 = uStack_244;
      unaff_x20 = param_6[1];
      param_5 = param_6[2];
      unaff_x24 = (undefined8 *)param_6[3];
      lVar12 = param_6[4];
      lVar17 = param_6[6];
      uVar16 = *unaff_x22;
      unaff_x26 = (undefined8 *)(ulong)uVar16;
      uVar1 = unaff_x22[1];
      unaff_x25 = (uint *)(ulong)uVar1;
      uVar20 = 0x3f800000;
      uStack_178 = (undefined8 *)0x0;
      uStack_180 = (long *)0x3f800000;
      uStack_168 = 0;
      uStack_170 = 0x3f800000;
      uStack_160 = 0x103f800000;
      lVar15 = lVar17;
      FUN_10818cfd0(lVar17,&uStack_180);
      if ((int)lVar15 != 0) {
        FUN_108266014(&uStack_1c0,&UNK_10f481050);
        func_0x0001082b2838(&plStack_270,uStack_1c0 & 0xffff);
        FUN_10817500c(unaff_x22);
        uStack_190 = CONCAT44(uVar19,uVar20);
        fStack_188 = fVar23;
        fStack_184 = param_4;
        FUN_10814bdfc(&uStack_1c0,(float)(int)-uVar16,(float)(int)-uVar1);
        FUN_108363e94(&uStack_1c0,lVar17);
        plStack_1d8 = plStack_270;
        plStack_270 = (long *)0x0;
        uStack_1d0 = uStack_268;
        uStack_1cc = uStack_264;
        FUN_1082cdd5c(&lStack_1c8,&plStack_1d8,2,&uStack_1c0,0,0);
        FUN_10827cbfc(unaff_x20,&lStack_1c8);
        lVar15 = lStack_1c8;
        lStack_1c8 = 0;
        if (lVar15 != 0) {
          func_0x000108305460();
        }
        func_0x000108305450();
        FUN_108304508(unaff_x24,unaff_x20,param_5,lVar12,0x113254e20,&uStack_190,&uStack_180);
      }
      FUN_1082764bc(&plStack_270);
      param_6 = (long *)0x1;
    }
    unaff_x28 = &uStack_248;
    FUN_1082764bc(&plStack_250);
    func_0x00010827a384(&uStack_240);
  } while( true );
}



/* Entry: 1083051a8; end: 1083051c3;  */

void FUN_1083051a8(void)

{
  return;
}



/* Entry: 1083051c4; end: 1083051ff;  */

undefined8 * FUN_1083051c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3b0e8;
  func_0x00010827a804();
  FUN_10830521c(param_1 + 10);
  *param_1 = &PTR_DAT_110a34950;
  func_0x00010827a804();
  FUN_108410074(param_1 + 7);
  FUN_10832fef8(param_1 + 1);
  return param_1;
}



/* Entry: 108305200; end: 108305213;  */

void FUN_108305200(void)

{
  FUN_1083051c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108305214; end: 10830521b;  */

void FUN_108305214(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = 0;
  if (lVar1 != 0) {
    func_0x00010827f18c(lVar1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10830521c; end: 108305257;  */

void FUN_10830521c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010827f18c(lVar1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108305258; end: 10830525f;  */

void FUN_108305258(void)

{
  return;
}



/* Entry: 108305260; end: 108305293;  */

void FUN_108305260(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a3b128;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108305294; end: 1083052bf;  */

void FUN_108305294(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3b128;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1083052c0; end: 10830538f;  */

void FUN_1083052c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined8 uStack_28;
  
  iVar1 = (int)auStack_f0;
  lStack_e8 = *(long *)(param_1 + 8) + 8;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  ppuStack_b0 = &PTR_FUN_110a3e608;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0xffffffffffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_28 = 0;
  uStack_30 = 0x101;
  uStack_2e = 0;
  FUN_1082b0564(auStack_f0,*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
  if (iVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x50);
    FUN_1082b032c(auStack_f0,lVar2 + 0x38,lVar2 + 0x10,*(undefined1 *)(lVar2 + 0x118),0xff);
  }
  FUN_10827aa70(*(undefined8 *)(param_1 + 8));
  FUN_10827ab14(auStack_f0);
  return;
}



/* Entry: 108305390; end: 1083053cb;  */

long FUN_108305390(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a3b188);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1083053cc; end: 108305473;  */

undefined ** FUN_1083053cc(void)

{
  return &PTR_DAT_110a3b188;
}



/* Entry: 108305474; end: 1083057c3;  */

void FUN_108305474(long *param_1,long param_2,long param_3,int param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  byte bStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_4 == 1) {
    uVar6 = param_5;
    FUN_10827a0d8();
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + 0xb8) + 0x18);
      FUN_108305a3c(uVar6,param_7,1,&bStack_a1);
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)(*(long *)(param_2 + 0x10) + 0xb8);
        uStack_88._0_4_ = *(float *)(param_7 + 4);
        if ((float)uStack_88 <= 0.0) {
          uVar1 = NEON_fmov(0x3f800000,4);
          fVar9 = (float)uVar1;
          fVar12 = (float)((ulong)uVar1 >> 0x20);
        }
        else {
          uStack_88._4_4_ = (float)uStack_88;
          FUN_1082ef8c0(param_5,&uStack_88,1);
          fVar9 = ABS((float)uStack_88);
          fVar12 = ABS(uStack_88._4_4_);
        }
        uStack_88 = CONCAT44(fVar12,fVar9);
        fVar10 = fVar9 * 0.5;
        fVar13 = fVar12 * 0.5;
        uStack_b0 = CONCAT44(fVar13,fVar10);
        uStack_80 = 0;
        uStack_78 = 0;
        FUN_108364f90(param_5,&uStack_80,param_6,1);
        fVar11 = (float)*(int *)(lVar8 + 0x30);
        auVar15 = NEON_fmov(0x3f800000,4);
        fVar14 = fVar9 + auVar15._0_4_;
        uStack_a0 = CONCAT44(0.0 - (fVar12 + auVar15._4_4_),0.0 - fVar14);
        uStack_98 = CONCAT44(fVar11 + fVar12 + auVar15._12_4_,fVar11 + fVar9 + auVar15._8_4_);
        puVar7 = &uStack_80;
        FUN_10838ed10(fVar11 + fVar14,puVar7,&uStack_a0);
        if ((int)puVar7 != 0) {
          uStack_d8 = uStack_78;
          uStack_e0 = uStack_80;
          uStack_c8 = uStack_78;
          uStack_d0 = uStack_80;
          uStack_b8 = uStack_78;
          uStack_c0 = uStack_80;
          func_0x00010816882c(fVar10,fVar13,&uStack_e0);
          uStack_c0 = CONCAT44((float)((ulong)uStack_c0 >> 0x20) + fVar13,(float)uStack_c0 + fVar10)
          ;
          uStack_b8 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) - fVar13,(float)uStack_b8 - fVar10)
          ;
          fVar10 = (float)((ulong)uStack_78 >> 0x20);
          fVar11 = (float)((ulong)uStack_80 >> 0x20);
          fVar9 = ((float)uStack_78 - (float)uStack_80) - fVar9;
          fVar12 = (fVar10 - fVar11) - fVar12;
          if (fVar9 <= fVar12) {
            fVar12 = fVar9;
          }
          uStack_a8 = fVar12 <= 0.0;
          if (fVar12 <= 0.0) {
            auVar15 = NEON_fmov(0x3fe0000000000000,8);
            dVar2 = ((double)(float)uStack_78 + (double)(float)uStack_80) * auVar15._0_8_;
            dVar3 = ((double)fVar10 + (double)fVar11) * auVar15._8_8_;
            auVar15._8_4_ = SUB84(dVar3,0);
            auVar15._0_8_ = dVar2;
            auVar15._12_4_ = (int)((ulong)dVar3 >> 0x20);
            uStack_c0 = CONCAT44((float)auVar15._8_8_,(float)dVar2);
            uStack_b8 = CONCAT44((float)dVar3,(float)dVar2);
          }
          if ((bStack_a1 & 1) == 0) {
            uStack_e0 = CONCAT44(fVar13 + (float)((ulong)uStack_e0 >> 0x20),(float)uStack_e0 + 0.0);
            uStack_d8 = CONCAT44(uStack_d8._4_4_ - fVar13,(undefined4)uStack_d8);
            func_0x00010816882c(0,fVar13,&uStack_d0);
          }
          fVar12 = uStack_b0._4_4_;
          if ((float)uStack_b0 <= uStack_b0._4_4_) {
            fVar12 = (float)uStack_b0;
          }
          bVar4 = false;
          bVar5 = false;
          if (0.00024414062 < ABS((float)uStack_b0 - uStack_b0._4_4_)) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar12)) {
              bVar4 = fVar12 < 0.5;
              bVar5 = false;
            }
          }
          if (bVar4 == bVar5) {
            uStack_78 = *(undefined8 *)(param_3 + 0x24);
            uStack_80 = *(undefined8 *)(param_3 + 0x1c);
            if (*(char *)(param_3 + 0x18) == '\x01') {
              lVar8 = 0xe0;
              __Znwm();
              func_0x000108306e34();
            }
            else {
              lVar8 = 0x100;
              __Znwm();
              func_0x000108306e4c(lVar8 + 0xe0);
              func_0x000108306e34(lVar8,lVar8 + 0xe0,&uStack_80);
            }
            *param_1 = lVar8;
            return;
          }
        }
      }
    }
  }
  else {
    uVar6 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + 0xb8) + 0x18);
    FUN_108305a3c(uVar6,param_7,0,&uStack_80);
    if ((uVar6 & 1) != 0) {
      func_0x0001083a630c();
      uStack_e8 = *(undefined8 *)(param_3 + 0x24);
      uStack_f0 = *(undefined8 *)(param_3 + 0x1c);
      if (*(char *)(param_3 + 0x18) == '\x01') {
        lVar8 = 0xa0;
        __Znwm();
        func_0x000108306dd0();
      }
      else {
        lVar8 = 0xc0;
        __Znwm();
        func_0x000108306e4c(lVar8 + 0xa0);
        func_0x000108306dd0(lVar8,lVar8 + 0xa0,&uStack_f0);
      }
      *param_1 = lVar8;
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083057c4; end: 108305a3b;  */

void FUN_1083057c4(long *param_1,undefined8 param_2,float param_3,undefined8 param_4,float param_5,
                  long param_6,long param_7,ulong param_8,undefined4 *param_9)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float extraout_s2;
  float extraout_s2_00;
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  fStack_80 = (float)func_0x000108142084(param_8,param_9,1);
  fVar14 = param_5;
  fStack_7c = param_3;
  fStack_78 = extraout_s2;
  fStack_74 = param_5;
  fVar7 = (float)func_0x000108142084(param_8,param_9 + 4,1);
  fVar15 = extraout_s2 - extraout_s2_00;
  param_5 = param_5 - fVar14;
  fStack_98 = (float)*(int *)(*(long *)(*(long *)(param_6 + 0x10) + 0xb8) + 0x30) + 1.0;
  uStack_a0 = NEON_fmov(0xbf800000,4);
  uStack_110 = CONCAT44(-1.0 - param_5,-1.0 - fVar15);
  uStack_108 = CONCAT44(param_5 + fStack_98,fVar15 + fStack_98);
  pfVar3 = &fStack_80;
  fStack_94 = fStack_98;
  fStack_90 = fVar7;
  fStack_8c = param_3;
  fStack_88 = extraout_s2_00;
  fStack_84 = fVar14;
  FUN_10838ed10(pfVar3,&uStack_110);
  if (((ulong)pfVar3 & 1) != 0) {
    bVar1 = false;
    if ((fVar7 < extraout_s2_00) && (bVar1 = false, !NAN(param_3) && !NAN(fVar14))) {
      bVar1 = param_3 < fVar14;
    }
    if (bVar1) {
      pfVar3 = &fStack_90;
      FUN_10838ed10(pfVar3,&uStack_a0);
      if (((ulong)pfVar3 & 1) != 0) {
        uVar4 = param_8;
        FUN_10827a0d8();
        if ((uVar4 & 1) != 0) {
          fVar15 = fVar15 * 0.5;
          param_5 = param_5 * 0.5;
          fVar14 = param_5;
          if (fVar15 <= param_5) {
            fVar14 = fVar15;
          }
          bVar1 = false;
          bVar2 = false;
          if (0.00024414062 < ABS(fVar15 - param_5)) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar14)) {
              bVar1 = fVar14 < 0.5;
              bVar2 = false;
            }
          }
          if (bVar1 == bVar2) {
            uStack_110 = *(undefined8 *)(param_7 + 0x1c);
            uStack_108 = *(undefined8 *)(param_7 + 0x24);
            if (*(char *)(param_7 + 0x18) == '\x01') {
              lVar5 = 0xe0;
              __Znwm();
              FUN_108306c5c();
            }
            else {
              lVar5 = 0x100;
              __Znwm();
              func_0x000108306e4c(lVar5 + 0xe0);
              FUN_108306c5c(lVar5,lVar5 + 0xe0,&uStack_110,param_8,&fStack_80,&fStack_90,
                            CONCAT44(param_5,fVar15));
            }
            *param_1 = lVar5;
            return;
          }
        }
        goto LAB_108305958;
      }
    }
    if ((fStack_80 < fStack_78) && (fStack_7c < fStack_74)) {
      FUN_1082d38bc(&uStack_110,param_9,param_8);
      auVar12._8_8_ = extraout_var;
      auVar12._0_8_ = extraout_d2;
      uStack_dc = *param_9;
      uStack_c0 = param_9[3];
      uStack_c4 = (undefined4)*(undefined8 *)(param_9 + 1);
      auVar8._4_12_ = auVar12._4_12_;
      auVar8._0_4_ = uStack_c4;
      uVar6 = (undefined4)((ulong)*(undefined8 *)(param_9 + 1) >> 0x20);
      auVar10._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
      auVar10._0_8_ = auVar8._0_8_;
      auVar10._8_4_ = uVar6;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9._4_4_ = uStack_c4;
      auVar9._0_4_ = uStack_c4;
      auVar11._0_12_ = auVar9._0_12_;
      auVar11._12_4_ = uVar6;
      auVar12 = NEON_ext(auVar11,auVar11,8,1);
      auVar13._0_12_ = auVar12._0_12_;
      auVar13._12_4_ = uStack_c0;
      uStack_cc = auVar13._8_8_;
      uStack_d4 = auVar12._0_8_;
      auVar12 = NEON_fmov(0x3f800000,4);
      uStack_b4 = auVar12._8_8_;
      uStack_bc = auVar12._0_8_;
      uStack_ac = 0xf00000000;
      uStack_d8 = uStack_dc;
      FUN_1082facb8(param_1,param_7,1,&uStack_110,0,0);
      return;
    }
  }
LAB_108305958:
  *param_1 = 0;
  return;
}



/* Entry: 108305a3c; end: 108305acf;  */

byte FUN_108305a3c(ulong param_1,ulong param_2,byte param_3,undefined1 *param_4)

{
  bool bVar1;
  ulong uVar2;
  
  if (((param_1 >> 0x2d & 1) == 0) || (uVar2 = param_2, FUN_10828782c(), (uVar2 & 1) == 0)) {
    if (*(float *)(param_2 + 4) == 0.0) {
      param_3 = 1;
      *param_4 = 1;
      goto LAB_108305abc;
    }
    if (*(char *)(param_2 + 0xe) == '\0') {
      bVar1 = 1.4142135 <= *(float *)(param_2 + 8);
      *param_4 = bVar1;
      param_3 = param_3 | bVar1;
      goto LAB_108305abc;
    }
    if (*(char *)(param_2 + 0xe) == '\x02') {
      *param_4 = 0;
      goto LAB_108305abc;
    }
  }
  param_3 = 0;
LAB_108305abc:
  return param_3 & 1;
}



/* Entry: 108305ad0; end: 108305c0f;  */

undefined8 *
FUN_108305ad0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_1;
  FUN_108305c10();
  param_1[2] = 0;
  param_1[1] = 0;
  *(short *)(param_1 + 3) = (short)puVar1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_SUB_110a3b1f8;
  param_1[6] = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xf0 | 1;
  param_1[0x12] = param_1 + 8;
  param_1[0x13] = 0x200000000;
  uVar2 = param_4[4];
  uVar5 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  param_1[0x15] = param_4[1];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar4;
  param_1[0x16] = uVar3;
  param_1[0x18] = uVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(char *)(param_1 + 0x1b) = (char)param_6;
  _memcpy(param_1 + 8,param_5,0x4c);
  *(undefined4 *)(param_1 + 0x13) = 1;
  uVar2 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar2;
  if (param_6 == 0) {
    uStack_58 = param_1[0xb];
    uStack_60 = param_1[10];
    FUN_1082fc2f8(&uStack_60,param_1 + 0xc);
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
  }
  else {
    param_1[5] = param_1[0xb];
    param_1[4] = param_1[10];
  }
  *(undefined2 *)((long)param_1 + 0x1a) = 1;
  return param_1;
}



/* Entry: 108305c10; end: 108305c7f;  */

int FUN_108305c10(void)

{
  int iVar1;
  
  if ((bRam000000011372ab98 & 1) == 0) {
    iVar1 = 0x1372ab98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam000000011372ab8c = iVar1;
      ___cxa_guard_release(0x11372ab98);
    }
  }
  return iRam000000011372ab8c;
}



/* Entry: 108305c80; end: 108305cdf;  */

long FUN_108305c80(long param_1)

{
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x50));
  }
  return param_1;
}



/* Entry: 108305ce0; end: 108305cf3;  */

void FUN_108305ce0(void)

{
  func_0x000108305cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108305cf4; end: 108305d17;  */

undefined * FUN_108305cf4(void)

{
  return &UNK_10f48a1bb;
}



/* Entry: 108305d18; end: 108305e97;  */

long FUN_108305d18(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = &uStack_50;
  lVar3 = param_1 + 0x30;
  lVar2 = param_2 + 0x30;
  FUN_1082fc374(lVar3,lVar2,param_4,param_1 + 0x20,param_2 + 0x20,0);
  if (((int)lVar3 == 0) || (*(char *)(param_1 + 0xd8) != *(char *)(param_2 + 0xd8))) {
LAB_108305e24:
    lVar3 = 2;
  }
  else {
    if ((*(byte *)(param_1 + 0x39) >> 2 & 1) != 0) {
      lVar3 = param_1 + 0xa0;
      lVar2 = param_2 + 0xa0;
      FUN_10829dddc(lVar3,lVar2);
      if ((int)lVar3 == 0) goto LAB_108305e24;
    }
    uVar1 = *(uint *)(param_2 + 0x98);
    lVar8 = *(long *)(param_2 + 0x90);
    uVar6 = *(uint *)(param_1 + 0x98);
    if ((int)((*(uint *)(param_1 + 0x9c) >> 1) - uVar6) < (int)uVar1) {
      if ((int)(uVar6 ^ 0x7fffffff) < (int)uVar1) {
        func_0x00010bdb1a68();
        if ((*(long *)(lVar3 + 0xd0) != 0) && (*(long *)(lVar3 + 200) != 0)) {
          FUN_1082a1068(lVar2);
          func_0x000108306de8(*(undefined8 *)(lVar3 + 0xd0));
          puVar5 = *(undefined8 **)(lVar3 + 200);
          plVar7 = (long *)*puVar5;
          if (plVar7 == (long *)0x0) {
            uStack_90 = 0;
            uStack_88 = 0;
            plVar7 = (long *)puVar5[4];
            if (plVar7 != (long *)0x0) {
              func_0x0001082a2158(*(undefined8 *)(*plVar7 + 0x10));
            }
            plStack_98 = plVar7;
            FUN_1082a16e0(lVar2,&uStack_88,&uStack_90,&plStack_98,0);
            func_0x0001082a20e4();
            FUN_1082647e4(&uStack_90);
            FUN_1082647e4(&uStack_88);
            func_0x0001082a1754(lVar2,*(undefined4 *)(puVar5 + 5),
                                *(undefined4 *)((long)puVar5 + 0x2c));
          }
          else {
            func_0x0001082a2158(*(undefined8 *)(*plVar7 + 0x10));
            uStack_a8 = 0;
            plStack_b0 = (long *)puVar5[4];
            plStack_a0 = plVar7;
            if (plStack_b0 != (long *)0x0) {
              func_0x0001082a2158(*(undefined8 *)(*plStack_b0 + 0x10));
            }
            FUN_1082a16e0(lVar2,&plStack_a0,&uStack_a8,&plStack_b0,
                          *(undefined1 *)((long)puVar5 + 0x1c));
            FUN_1082647e4(&plStack_b0);
            func_0x0001082a2114();
            func_0x0001082a2124();
            if (*(int *)((long)puVar5 + 0xc) == 0) {
              func_0x0001082a175c(lVar2,*(undefined4 *)(puVar5 + 1),
                                  *(undefined4 *)((long)puVar5 + 0x14),*(undefined2 *)(puVar5 + 3),
                                  *(undefined2 *)((long)puVar5 + 0x1a),
                                  *(undefined4 *)((long)puVar5 + 0x2c));
            }
            else {
              func_0x0001082a1764(lVar2,*(undefined4 *)(puVar5 + 1),*(int *)((long)puVar5 + 0xc),
                                  *(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 5),
                                  *(undefined4 *)((long)puVar5 + 0x2c));
            }
          }
          return lVar2;
        }
        return lVar3;
      }
      uStack_48 = 0x7fffffff;
      uStack_50 = 0x4c;
      uVar4 = (ulong)(uVar6 + uVar1);
      FUN_10840fe24(0x3ff8000000000000);
      if (*(int *)(param_1 + 0x98) != 0) {
        _memcpy(puVar5,*(undefined8 *)(param_1 + 0x90),(long)*(int *)(param_1 + 0x98) * 0x4c);
      }
      if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
        _free(*(undefined8 *)(param_1 + 0x90));
      }
      uVar4 = uVar4 / 0x4c;
      if (0x7ffffffe < uVar4) {
        uVar4 = 0x7fffffff;
      }
      *(undefined8 **)(param_1 + 0x90) = puVar5;
      *(uint *)(param_1 + 0x9c) = (int)uVar4 << 1 | 1;
      uVar6 = *(uint *)(param_1 + 0x98);
    }
    else {
      puVar5 = *(undefined8 **)(param_1 + 0x90);
    }
    puVar9 = (undefined1 *)((long)puVar5 + (long)(int)uVar6 * 0x4c);
    *(uint *)(param_1 + 0x98) = uVar6 + uVar1;
    for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1)
    {
      _memcpy(puVar9,lVar8,0x4c);
      puVar9 = puVar9 + 0x4c;
      lVar8 = lVar8 + 0x4c;
    }
    lVar3 = 0;
    *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) | *(byte *)(param_2 + 0xd9);
  }
  return lVar3;
}



/* Entry: 108305e98; end: 108305eeb;  */

void FUN_108305e98(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 200) != 0)) {
    FUN_1082a1068(param_2);
    func_0x000108306de8(*(undefined8 *)(param_1 + 0xd0));
    puVar1 = *(undefined8 **)(param_1 + 200);
    plVar2 = (long *)*puVar1;
    if (plVar2 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      plVar2 = (long *)puVar1[4];
      if (plVar2 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      }
      plStack_48 = plVar2;
      FUN_1082a16e0(param_2,&uStack_38,&uStack_40,&plStack_48,0);
      func_0x0001082a20e4();
      FUN_1082647e4(&uStack_40);
      FUN_1082647e4(&uStack_38);
      func_0x0001082a1754(param_2,*(undefined4 *)(puVar1 + 5),*(undefined4 *)((long)puVar1 + 0x2c));
    }
    else {
      func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      uStack_58 = 0;
      plStack_60 = (long *)puVar1[4];
      plStack_50 = plVar2;
      if (plStack_60 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
      }
      FUN_1082a16e0(param_2,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)puVar1 + 0x1c))
      ;
      FUN_1082647e4(&plStack_60);
      func_0x0001082a2114();
      func_0x0001082a2124();
      if (*(int *)((long)puVar1 + 0xc) == 0) {
        func_0x0001082a175c(param_2,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((long)puVar1 + 0x14)
                            ,*(undefined2 *)(puVar1 + 3),*(undefined2 *)((long)puVar1 + 0x1a),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
      else {
        func_0x0001082a1764(param_2,*(undefined4 *)(puVar1 + 1),*(int *)((long)puVar1 + 0xc),
                            *(undefined4 *)(puVar1 + 2),*(undefined4 *)(puVar1 + 5),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
    }
    return;
  }
  return;
}



/* Entry: 108305eec; end: 108305f2b;  */

uint FUN_108305eec(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x98) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108305f1c);
    (*pcVar1)();
  }
  lVar4 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x98) * 0x4c;
  puVar3 = (undefined8 *)(lVar4 + -0x4c);
  lVar2 = param_1 + 0x30;
  uVar6 = *(undefined8 *)(lVar4 + -0x44);
  uVar5 = *puVar3;
  FUN_1082f3a00(lVar2);
  *(undefined8 *)(lVar4 + -0x44) = uVar6;
  *puVar3 = uVar5;
  if ((byte *)(param_1 + 0xd9) != (byte *)0x0) {
    FUN_1082fc488();
    *(byte *)(param_1 + 0xd9) = (byte)puVar3 ^ 1;
  }
  return (uint)lVar2 & 0xffff;
}



/* Entry: 108305f2c; end: 108306013;  */

void FUN_108305f2c(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x24;
  
  func_0x000108306e74();
  func_0x000108306e10(*(byte *)(param_1 + 0x39) >> 2 & 1);
  FUN_10828de24();
  if (unaff_x24 == 0) {
    FUN_10841076c(&UNK_10f48a149);
  }
  else {
    lVar1 = param_1 + 0x30;
    func_0x000108306e88(lVar1,param_2);
    FUN_1082fc8bc();
    *(long *)(param_1 + 0xd0) = lVar1;
  }
  return;
}



/* Entry: 108306014; end: 1083065bb;  */

void FUN_108306014(long param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  ulong uVar22;
  float fVar23;
  undefined8 in_d3;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_bc [28];
  
  if ((*(long *)(param_1 + 0xd0) == 0) && (func_0x000108306e54(), *(long *)(param_1 + 0xd0) == 0)) {
    return;
  }
  bVar6 = *(char *)(param_1 + 0xd8) == '\0';
  uVar12 = 0x10;
  if (bVar6) {
    uVar12 = 0x18;
  }
  uVar13 = 0x48;
  if (bVar6) {
    uVar13 = 0x6c;
  }
  uVar2 = *(uint *)(param_1 + 0x98);
  plVar8 = param_2;
  (**(code **)(*param_2 + 0xb0))(param_2);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    if ((bRam000000011372aba0 & 1) == 0) {
      iVar7 = 0x1372aba0;
      ___cxa_guard_acquire();
      if (iVar7 != 0) {
        ___cxa_guard_release(0x11372aba0);
      }
    }
    func_0x000108306db8(0x11372abd8);
    if ((bRam000000011372abb0 & 1) == 0) {
      iVar7 = 0x1372abb0;
      ___cxa_guard_acquire();
      if (iVar7 != 0) {
        uRam000000011372aba8 = 0x11372abd8;
        ___cxa_guard_release(0x11372abb0);
      }
    }
    puVar9 = &UNK_10df191ac;
    uVar10 = 0x48;
    uVar11 = 0x10;
    uVar21 = uRam000000011372aba8;
  }
  else {
    if ((bRam000000011372abb8 & 1) == 0) {
      iVar7 = 0x1372abb8;
      ___cxa_guard_acquire();
      if (iVar7 != 0) {
        ___cxa_guard_release(0x11372abb8);
      }
    }
    func_0x000108306db8(0x11372ac10);
    if ((bRam000000011372abc8 & 1) == 0) {
      iVar7 = 0x1372abc8;
      ___cxa_guard_acquire();
      if (iVar7 != 0) {
        uRam000000011372abc0 = 0x11372ac10;
        ___cxa_guard_release(0x11372abc8);
      }
    }
    puVar9 = &UNK_10df1923c;
    uVar10 = 0x6c;
    uVar11 = 0x18;
    uVar21 = uRam000000011372abc0;
  }
  FUN_1082e96e8(&lStack_108,plVar8,puVar9,uVar10,0x100,uVar11,uVar21);
  lVar17 = lStack_108;
  if (lStack_108 == 0) {
    puVar9 = &UNK_10f488023;
  }
  else {
    lStack_108 = 0;
    lStack_128 = lVar17 + 0xb0;
    FUN_1082fbf74(&lStack_120,param_2,0,
                  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xd0) + 0x98) + 0x20),&lStack_128,
                  uVar12,uVar13,uVar2,0x100);
    FUN_1082647e4(&lStack_128);
    lStack_130 = lStack_120;
    if (lStack_120 != 0) {
      lVar17 = 0;
      for (lVar16 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 0x4c != lVar16;
          lVar16 = lVar16 + 0x4c) {
        if (*(int *)(param_1 + 0x98) <= lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10830650c);
          (*pcVar5)();
        }
        lVar14 = *(long *)(param_1 + 0x90);
        puVar1 = (ulong *)(lVar14 + lVar16);
        bVar3 = *(byte *)(param_1 + 0xd8);
        uVar4 = puVar1[9];
        plVar8 = param_2;
        (**(code **)(*param_2 + 0x90))();
        if (((ulong)plVar8 & 1) == 0) {
          bVar18 = *(byte *)(param_1 + 0x39) >> 3 & 1;
        }
        else {
          bVar18 = 0;
        }
        lVar14 = lVar14 + lVar16;
        fVar19 = *(float *)(lVar14 + 0x44);
        if (*(float *)(puVar1 + 8) <= fVar19) {
          fVar19 = *(float *)(puVar1 + 8);
        }
        fVar26 = fVar19;
        if (0.5 <= fVar19) {
          fVar26 = 0.5;
        }
        fVar23 = (fVar19 + fVar19) / (fVar19 + 0.5);
        fVar27 = 1.0;
        fVar24 = 1.0;
        if (0.5 > fVar19) {
          fVar24 = fVar23;
        }
        fVar25 = 1.0 - fVar26;
        if ((int)plVar8 == 0) {
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar20 = fVar23;
          if (bVar18 == 0) goto LAB_1083062b8;
LAB_1083062d8:
          fVar23 = fVar20;
          uVar22 = (ulong)(uint)fVar19;
          fVar27 = 1.0;
          func_0x000108306e28();
          uStack_d0 = CONCAT44(fVar23,(int)uVar22);
          uStack_c8 = CONCAT44((int)in_d3,fVar27);
          puVar15 = (ulong *)&UNK_10df19314;
        }
        else {
          if (fVar26 + 0.91421354 <= fVar19) {
            fVar19 = fVar26 + 0.91421354;
          }
          fVar19 = fVar19 - fVar26;
          fVar26 = fVar26 + fVar19;
          fVar24 = fVar19 + fVar24;
          uVar21 = *(undefined8 *)(lVar14 + 0x38);
          fVar19 = (float)uVar21 - (float)puVar1[6];
          fVar23 = (float)((ulong)uVar21 >> 0x20) - (float)(puVar1[6] >> 0x20);
          if (fVar19 <= fVar23) {
            fVar23 = fVar19;
          }
          fVar19 = fVar23 * 0.5;
          if (fVar25 + 0.91421354 <= fVar23 * 0.5) {
            fVar19 = fVar25 + 0.91421354;
          }
          fVar19 = fVar19 - fVar25;
          fVar25 = fVar25 + fVar19;
          fVar23 = 0.0;
          fVar28 = 0.0 - fVar19;
          fVar29 = fVar28;
          fVar20 = 0.0;
          if (bVar18 != 0) goto LAB_1083062d8;
LAB_1083062b8:
          uStack_c8 = puVar1[1];
          uVar22 = *puVar1;
          puVar15 = puVar1;
          fVar29 = fVar28;
          uStack_d0 = uVar22;
        }
        uVar12 = (undefined4)uVar22;
        func_0x000108306e6c(auStack_bc,&uStack_d0);
        func_0x000108306e6c(&uStack_d0,puVar15);
        func_0x000108306e60(puVar1 + 2);
        func_0x000108306e04();
        func_0x000108306d6c(&lStack_130,&uStack_e4,&uStack_d0);
        if ((bVar3 & 1) == 0) {
          func_0x000108306e60(puVar1 + 4);
          func_0x000108306e04();
          func_0x000108306d6c(&lStack_130,&uStack_e4,&uStack_d0);
        }
        func_0x000108306e40(puVar1 + 2);
        uStack_d8 = (undefined4)in_d3;
        uStack_e4 = uVar12;
        fStack_e0 = fVar23;
        fStack_dc = fVar27;
        func_0x000108306d54();
        if ((bVar3 & 1) == 0) {
          func_0x000108306e40(puVar1 + 4);
          func_0x000108306e04();
          func_0x000108306d54();
        }
        if ((uVar4 & 1) == 0) {
          FUN_1083066e8(-fVar26,-fVar26,puVar1 + 6);
          func_0x000108306e04();
          func_0x000108306d54();
          fVar26 = fVar25;
          fVar19 = fVar25;
          FUN_108279f50(puVar1 + 6);
          fVar23 = (float)in_d3;
          if (fVar19 <= fVar27) {
            fVar20 = 0.0;
          }
          else {
            fVar20 = (fVar19 - fVar27) / (fVar25 + fVar25);
            in_d3 = 0;
            fVar19 = (fVar19 + fVar27) * 0.5;
            fVar27 = fVar19;
          }
          if (fVar23 < fVar26) {
            fVar25 = (fVar26 - fVar23) / (fVar25 + fVar25);
            if (fVar20 <= fVar25) {
              fVar20 = fVar25;
            }
            fVar26 = (fVar26 + fVar23) * 0.5;
            fVar23 = fVar26;
          }
          fVar24 = fVar24 * fVar20;
          fVar28 = fVar29 + fVar24 + (1.0 - fVar20) * fVar29;
          fVar25 = fVar28;
          if (fVar20 <= 0.0) {
            fVar25 = fVar29;
          }
          if (bVar18 == 0) {
            uStack_f8 = puVar1[1];
            uStack_100 = *puVar1;
          }
          else {
            func_0x000108306e28();
            uStack_100 = CONCAT44(fVar28,fVar20);
            uStack_f8 = CONCAT44((int)in_d3,fVar24);
          }
          func_0x000108306e6c(&uStack_e4,&uStack_100);
          uStack_100 = CONCAT44(fVar26,fVar19);
          uStack_f8 = CONCAT44(fVar23,fVar27);
          FUN_108306608(&lStack_130,&uStack_100,&uStack_e4,bVar18 ^ 1,fVar25);
        }
        else {
          FUN_1083066e8(puVar1 + 6);
          func_0x000108306e04();
          func_0x000108306d54();
          func_0x0001083066ec(puVar1 + 6);
          func_0x000108306e04();
          func_0x000108306d54();
        }
        lVar17 = lVar17 + 1;
      }
      *(undefined8 *)(param_1 + 200) = uStack_118;
      goto LAB_1083064d0;
    }
    puVar9 = &UNK_10f488006;
  }
  FUN_10841076c(puVar9);
LAB_1083064d0:
  FUN_10828f708(&lStack_108);
  return;
}



/* Entry: 1083065bc; end: 108306607;  */

void FUN_1083065bc(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 108306608; end: 1083066e7;  */

void FUN_108306608(long *param_1,undefined4 *param_2,undefined8 param_3,ulong param_4,
                  undefined4 param_5)

{
  long lVar1;
  
  *(undefined4 *)*param_1 = *param_2;
  lVar1 = *param_1;
  *param_1 = lVar1 + 4;
  *(undefined4 *)(lVar1 + 4) = param_2[1];
  *param_1 = *param_1 + 4;
  FUN_1082fdf68(param_1,param_3);
  if ((param_4 & 1) != 0) {
    *(undefined4 *)*param_1 = param_5;
    func_0x000108306d94();
  }
  func_0x000108306da4();
  func_0x000108306d78();
  if ((param_4 & 1) != 0) {
    *(undefined4 *)*param_1 = param_5;
    func_0x000108306d94();
  }
  func_0x000108306da4();
  func_0x000108306d78();
  if ((param_4 & 1) != 0) {
    *(undefined4 *)*param_1 = param_5;
    func_0x000108306d94();
  }
  func_0x000108306da4();
  func_0x000108306d78();
  if ((param_4 & 1) != 0) {
    *(undefined4 *)*param_1 = param_5;
    func_0x000108306d94();
  }
  return;
}



/* Entry: 1083066e8; end: 1083066f7;  */

float FUN_1083066e8(float param_1,float *param_2)

{
  return param_1 + *param_2;
}



/* Entry: 1083066f8; end: 1083068d3;  */

undefined8 *
FUN_1083066f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
             undefined8 *param_5,undefined8 *param_6,long param_7,int param_8)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000011372abd0 & 1) == 0) {
    iVar1 = 0x1372abd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam000000011372ab90 = iVar1;
      ___cxa_guard_release(0x11372abd0);
    }
  }
  iVar1 = iRam000000011372ab90;
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)iVar1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_110a3b2a8;
  *(char *)(param_1 + 7) = (char)param_4;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xf0 | (byte)param_8 & 3;
  FUN_10810c9b4(param_1 + 10);
  puVar2 = param_1 + 0xf;
  *puVar2 = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar4 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar4;
  uVar5 = param_5[1];
  uVar4 = *param_5;
  uVar7 = param_5[3];
  uVar6 = param_5[2];
  param_1[0xe] = param_5[4];
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  uVar4 = *param_6;
  param_1[0x10] = param_6[1];
  *puVar2 = uVar4;
  FUN_1082d8070(puVar2);
  fVar3 = *(float *)(param_7 + 4);
  *(float *)(param_1 + 0x11) = fVar3;
  fVar3 = fVar3 * 0.5;
  uStack_68 = param_6[1];
  uStack_70 = *param_6;
  func_0x00010816882c(fVar3,fVar3,&uStack_70);
  if (param_4 < 8) {
    FUN_1082ef8cc(param_1,&uStack_70,param_1 + 10,param_8 != 0,*(float *)(param_1 + 0x11) == 0.0);
  }
  else {
    FUN_108189c38(param_5,&uStack_70,1);
    param_1[5] = CONCAT44((float)(int)(float)((ulong)uStack_68 >> 0x20) + 0.5,
                          (float)(int)(float)uStack_68 + 0.5);
    param_1[4] = CONCAT44((float)(int)(float)((ulong)uStack_70 >> 0x20) + 0.5,
                          (float)(int)(float)uStack_70 + 0.5);
    *(undefined2 *)((long)param_1 + 0x1a) = 0;
  }
  return param_1;
}



/* Entry: 1083068d4; end: 1083068fb;  */

undefined8 * FUN_1083068d4(undefined8 *param_1)

{
  FUN_1082fc320(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}


