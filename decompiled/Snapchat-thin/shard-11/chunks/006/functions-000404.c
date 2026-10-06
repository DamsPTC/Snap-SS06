/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087598b8; end: 1087598ef;  */

long FUN_1087598b8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6ac98);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087598f0; end: 1087598fb;  */

undefined ** FUN_1087598f0(void)

{
  return &PTR_DAT_110a6ac98;
}



/* Entry: 1087598fc; end: 108759977;  */

undefined8 * FUN_1087598fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  puVar2 = puVar1;
  func_0x000107c31510();
  *puVar2 = &PTR_FUN_110a6acb8;
  *(undefined1 *)(puVar2 + 0x13) = 0;
  *(undefined1 *)(puVar2 + 0x17) = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  func_0x000107c27f98(&uStack_28);
  func_0x000107c27f9c(&uStack_40);
  *param_1 = puVar1;
  param_1[1] = puVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c27fec(&uStack_40);
  return param_1;
}



/* Entry: 108759978; end: 10875997b;  */

undefined8 * FUN_108759978(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6acb8;
  FUN_108758f54(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10875997c; end: 10875998f;  */

void FUN_10875997c(void)

{
  FUN_108759990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108759990; end: 1087599bf;  */

undefined8 * FUN_108759990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6acb8;
  FUN_108758f54(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087599c0; end: 108759b93;  */

void FUN_1087599c0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 uVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 auStack_58 [3];
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar3 = (long *)(param_1 + 0x28);
    func_0x000107c28870();
    unaff_x20 = *plVar3;
    func_0x00010875a7f4();
    func_0x00010875a8c0();
    if (unaff_x20 == 0) {
      lVar6 = *(long *)(param_1 + 0x38);
      uVar4 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_58,&UNK_10f4afc25,lVar6 + 0x20);
      FUN_10865aaac(uVar4,auStack_58);
      func_0x00010875ab88();
      ___cxa_throw(uVar4);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108759b2c);
      (*pcVar2)();
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    do {
      func_0x00010875a72c();
    } while (extraout_w10 != 0);
    func_0x00010875a888(*(undefined8 *)(param_1 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      unaff_x20 = *(long *)(param_1 + 0x28);
      func_0x00010875a6d8();
      unaff_x21 = *plVar3;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *plVar3;
      }
      func_0x00010875aa4c();
      plVar3 = extraout_x8;
      do {
        if (*plVar3 == 0) {
          func_0x00010875a75c();
          plVar3 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar5 = extraout_w11_00;
        }
        else {
          func_0x00010875a894();
          plVar3 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar5 = extraout_w11;
        }
        if ((uVar5 & 1) != 0) {
          func_0x00010875a7d0();
          if ((bool)in_ZR) {
            func_0x00010875a76c();
            func_0x00010875a6c8();
            func_0x00010875a700();
          }
          func_0x00010875a69c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  param_1 = param_1 + 0x28;
  FUN_10872f9ec();
  func_0x00010875a844();
  do {
    func_0x00010875a6e8();
    if ((int)param_1 != 0) {
      func_0x000108733b60(unaff_x21 + 0x98);
      FUN_108730e90(unaff_x21 + 0x98);
      *(undefined1 *)(unaff_x21 + 200) = 1;
      func_0x00010875a874(unaff_x21 + 0x10);
      func_0x000107c31508(unaff_x21,unaff_x20);
      break;
    }
  } while (((uint)auStack_58[0] >> 1 & 1) == 0);
  func_0x00010875a750();
  func_0x00010875a7f4();
  func_0x00010875a7c8();
  func_0x00010875a880();
  func_0x00010875a7e4();
  return;
}



/* Entry: 108759b94; end: 108759bd3;  */

void FUN_108759b94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = param_1 + 0x30;
    func_0x000107c27f9c(param_1 + 0x28);
  }
  func_0x000107c27f9c(lVar1);
  func_0x00010875a7c8();
  func_0x00010875a880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108759bd4; end: 10875a027;  */

void FUN_108759bd4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *extraout_x8;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [4];
  undefined4 uStack_68;
  
  puVar4 = (undefined8 *)(param_1 + 0x20);
  puVar1 = (undefined8 *)(param_1 + 0x4a8);
  FUN_10872f9ec();
  if (puVar4 != puVar1) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar1 + 4);
    plVar9 = (long *)puVar1[2];
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)*puVar4;
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      plVar8 = *(long **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      for (plVar10 = plVar9;
          (plVar9 = plVar10, plVar8 != (long *)0x0 && (plVar9 = (long *)0x0, plVar10 != (long *)0x0)
          ); plVar10 = (long *)*plVar10) {
        func_0x000107c27cfc(plVar8 + 2,plVar10 + 2);
        FUN_108730dbc(plVar8 + 5,plVar10 + 5);
        lVar6 = *plVar8;
        FUN_108757f9c(puVar4,plVar8);
        plVar8 = (long *)lVar6;
      }
      func_0x00010875ab64();
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      puVar2 = (undefined8 *)0x100;
      __Znwm();
      *(undefined8 **)(param_1 + 1000) = puVar2;
      *(long *)(param_1 + 0x3f0) = param_1 + 0x30;
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_1087313b8(puVar2 + 2,plVar9 + 2);
      *(undefined1 *)(param_1 + 0x3f8) = 1;
      puVar3 = puVar2 + 2;
      FUN_108848654();
      puVar2[1] = puVar3;
      FUN_108757f9c(puVar4,*(undefined8 *)(param_1 + 1000));
      func_0x00010875aaac();
    }
  }
  lVar6 = *(long *)(param_1 + 0x4c0);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(puVar1 + 5);
  func_0x000107c27f9c(param_1 + 0x4a8);
  func_0x00010875ab50();
  func_0x00010875a8b0();
  func_0x000107c316d0(param_1 + 0x208);
  plVar9 = *(long **)(lVar6 + 200);
  func_0x00010875aa30();
  uStack_68 = 0x1f7;
  func_0x00010875a900();
  puVar1 = auStack_88;
  func_0x000107c2881c(puVar1,param_1 + 0x478,*(undefined4 *)(param_1 + 0x48));
  func_0x00010875a81c();
  puStack_a0 = puVar1;
  func_0x00010875ab70(*(undefined8 *)(*plVar9 + 0x18));
  (*extraout_x8)();
  uVar7 = *(undefined8 *)(param_1 + 0x4c0);
  func_0x00010875a8f0();
  func_0x00010875a854();
  puStack_a0 = puVar4;
  uStack_98 = uVar7;
  func_0x000107c316c8(auStack_88,&UNK_10f4ba053);
  FUN_1087577d0(*(undefined8 *)(param_1 + 0x430),*(undefined8 *)(param_1 + 0x438),
                (undefined8 *)(param_1 + 0x460),uVar7,&puStack_a0);
  lVar6 = *(long *)(param_1 + 0x4c0);
  puVar4 = auStack_88;
  func_0x000107c316d0();
  plVar9 = *(long **)(lVar6 + 200);
  func_0x00010875aa30();
  uStack_68 = 0x1f8;
  func_0x00010875a81c();
  puStack_90 = puVar4;
  func_0x00010875a928(*(undefined8 *)(*plVar9 + 0x18));
  lVar6 = *(long *)(param_1 + 0x4c0);
  func_0x00010875a854();
  plVar9 = *(long **)(lVar6 + 200);
  func_0x00010875aa30();
  uStack_68 = 0x1f5;
  func_0x00010875a81c();
  puStack_90 = puVar4;
  func_0x00010875a928(*(undefined8 *)(*plVar9 + 0x18));
  func_0x00010875a854();
  plVar9 = (long *)(param_1 + 0x18);
  lVar6 = *plVar9;
  do {
    auStack_88[0] = 0;
    lVar5 = lVar6 + 0x10;
    func_0x00010875a720(lVar5,auStack_88);
    if ((int)lVar5 != 0) {
      FUN_108758c80(lVar6 + 0x98);
      uVar7 = *(undefined8 *)(param_1 + 0x460);
      *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(param_1 + 0x468);
      *(undefined8 *)(lVar6 + 0x98) = uVar7;
      *(undefined8 *)(lVar6 + 0xa8) = *(undefined8 *)(param_1 + 0x470);
      *(undefined8 *)(param_1 + 0x460) = 0;
      *(undefined8 *)(param_1 + 0x468) = 0;
      *(undefined8 *)(param_1 + 0x470) = 0;
      *(undefined1 *)(lVar6 + 0xb0) = 1;
      *(undefined1 *)(lVar6 + 0xb8) = 1;
      func_0x00010875a874(lVar6 + 0x10);
      func_0x000107c31508(lVar6,plVar9);
      break;
    }
  } while (((uint)auStack_88[0] >> 1 & 1) == 0);
  func_0x00010875a82c(plVar9);
  func_0x00010875aa00();
  func_0x00010875aa94();
  func_0x00010875ab18();
  func_0x00010875a8a0();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
  return;
}



/* Entry: 10875a028; end: 10875a077;  */

void FUN_10875a028(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x4a8);
  func_0x00010875ab50();
  func_0x00010875a8b0();
  func_0x000107c316d0(param_1 + 0x208);
  func_0x000108731490(param_1 + 0x20);
  FUN_108638118(param_1 + 0x460);
  func_0x00010875ab18();
  func_0x00010875a8a0();
  func_0x00010875a7c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875a078; end: 10875a103;  */

void FUN_10875a078(long param_1)

{
  undefined4 uStack_38;
  
  param_1 = param_1 + 0x20;
  FUN_108758c20();
  func_0x00010875a844();
  do {
    func_0x00010875a6e8();
    if ((int)param_1 != 0) {
      func_0x00010875a8a8();
      func_0x00010875aa68();
      func_0x00010875a67c();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  func_0x00010875a750();
  func_0x00010875a880();
  func_0x00010875a7f4();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
  return;
}



/* Entry: 10875a104; end: 10875a12f;  */

void FUN_10875a104(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x00010875a7f4();
  func_0x00010875a7c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875a130; end: 10875a267;  */

void FUN_10875a130(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x21;
  uint uStack_48;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108758ac4(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    do {
      func_0x00010875a72c();
    } while (extraout_w10 != 0);
    func_0x00010875a888(*(undefined8 *)(param_1 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      func_0x00010875a6d8();
      unaff_x21 = *plVar2;
      if (unaff_x21 == 0) {
        func_0x000107c3a5c0();
        unaff_x21 = *plVar2;
      }
      func_0x00010875aa4c();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x00010875a75c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar4 = extraout_w11_00;
        }
        else {
          func_0x00010875a894();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar4 = extraout_w11;
        }
        if ((uVar4 & 1) != 0) {
          func_0x00010875a7d0();
          if ((bool)in_ZR) {
            func_0x00010875a76c();
            func_0x00010875a6c8();
            func_0x00010875a700();
          }
          func_0x00010875a69c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar3 = param_1 + 0x30;
  FUN_108758c20();
  func_0x00010875a844();
  do {
    func_0x00010875a6e8();
    if ((int)lVar3 != 0) {
      func_0x00010875a8a8();
      func_0x000108638084(unaff_x21 + 0x98);
      func_0x00010875a67c();
      break;
    }
  } while ((uStack_48 >> 1 & 1) == 0);
  func_0x00010875a750();
  func_0x00010875a8c0();
  func_0x00010875aaf4();
  func_0x00010875a7c8();
  func_0x000107c288ac(param_1 + 0x28);
  func_0x00010875a7e4();
  return;
}



/* Entry: 10875a268; end: 10875a2a3;  */

void FUN_10875a268(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010875a8c0();
    func_0x00010875aaf4();
  }
  func_0x00010875a7c8();
  func_0x000107c288ac(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875a2a4; end: 10875a513;  */

void FUN_10875a2a4(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x9;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  plVar8 = (long *)(param_1 + 0x40);
  FUN_108758c20();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x00010875a9e8();
  func_0x00010875ab44();
  func_0x00010875a9e0();
  func_0x00010875a988();
  lVar10 = *(long *)(param_1 + 0x20);
  lVar5 = lVar10 + 0x58;
  __ZNSt3__15mutex4lockEv(lVar5);
  plVar7 = *(long **)(param_1 + 0x20);
  if ((char)plVar7[4] == '\x01') {
    bVar2 = *(byte *)(plVar8 + 3);
    if (((*(byte *)(plVar7 + 3) & 1) == 0) && (bVar2 != 0)) {
      FUN_108758ce8(&lStack_60,plVar8);
      plVar7[1] = lStack_58;
      *plVar7 = lStack_60;
      plVar7[2] = lStack_50;
      lStack_60 = 0;
      lStack_58 = 0;
      lStack_50 = 0;
      *(undefined1 *)(plVar7 + 3) = 1;
      FUN_108638118(&lStack_60);
    }
    else if (*(byte *)(plVar7 + 3) == 0) {
      if ((bVar2 & 1) == 0) {
        *(int *)plVar7 = (int)*plVar8;
      }
    }
    else if (bVar2 == 0) {
      func_0x00010875aa94();
      *(int *)plVar7 = (int)*plVar8;
      *(undefined1 *)(plVar7 + 3) = 0;
    }
    else {
      bVar3 = plVar8 <= plVar7;
      bVar4 = plVar7 == plVar8;
      if (!bVar4) {
        lVar9 = *plVar8;
        lVar1 = plVar8[1];
        lVar6 = *plVar7;
        func_0x00010875aa40(lVar1 - lVar9);
        if (!bVar3 || bVar4) {
          func_0x00010875aa40();
          if (!bVar3 || bVar4) {
            func_0x00010875ab7c();
            FUN_108759520();
            FUN_10863818c(plVar7,lVar5);
            goto LAB_10875a360;
          }
          lVar9 = lVar9 + extraout_x9;
          func_0x00010875ab70();
          FUN_108759520();
        }
        else {
          if (lVar6 != 0) {
            FUN_108638184(plVar7);
            __ZdlPv(*plVar7);
            *plVar7 = 0;
            plVar7[1] = 0;
            plVar7[2] = 0;
          }
          plVar8 = plVar7;
          FUN_108758968(plVar7,extraout_x8 / 0x110);
          FUN_108758d70(plVar7,plVar8);
        }
        FUN_108758db4(plVar7,lVar9,lVar1);
      }
    }
  }
  else {
    FUN_108758ca4(plVar7,plVar8);
    *(undefined1 *)(plVar7 + 4) = 1;
  }
LAB_10875a360:
  plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0xa0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0) = 0;
  __ZNSt3__15mutex6unlockEv(lVar10 + 0x58);
  if (plVar8 == (long *)0x0) {
    func_0x00010875aad0();
  }
  else {
    (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 0x20);
    func_0x00010875a990();
  }
  func_0x00010875a9f8();
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x00010875ab2c();
  func_0x00010875a7c8();
  func_0x00010875a7e4();
  return;
}



/* Entry: 10875a514; end: 10875a53b;  */

void FUN_10875a514(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x40);
  func_0x00010875a7c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875a53c; end: 10875a643;  */

void FUN_10875a53c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_1087591a0(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010875a72c();
    } while (extraout_w10 != 0);
    func_0x00010875a888(*(undefined8 *)(param_1 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      func_0x00010875a6d8();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010875aa4c();
      plVar2 = extraout_x8;
      do {
        if (*plVar2 == 0) {
          func_0x00010875a75c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x00010875a894();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x00010875a7d0();
          if ((bool)in_ZR) {
            func_0x00010875a76c();
            func_0x00010875a6c8();
            func_0x00010875a700();
          }
          func_0x00010875a69c();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x50);
  func_0x00010875aac8();
  func_0x00010875aaa4();
  func_0x00010875ab2c();
  func_0x00010875a7c8();
  func_0x00010875ab3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875a644; end: 10875a67b;  */

void FUN_10875a644(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010875aac8();
    func_0x00010875aaa4();
  }
  func_0x00010875a7c8();
  func_0x00010875ab3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10875a67c; end: 10875abbf;  */

void FUN_10875a67c(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x21;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined1 *)(unaff_x21 + 0xb8) = 1;
  *(undefined8 *)(unaff_x21 + 0x10) = 2;
  lVar1 = unaff_x21 + 0x20;
  lVar4 = lVar1;
  do {
    if (*(char *)(lVar4 + 1) != '\0') {
      uVar5 = 0;
      plVar7 = (long *)(lVar4 + 0x20);
      do {
        plVar2 = (long *)*plVar7;
        pcVar3 = (code *)plVar7[-2];
        if (plVar2 == (long *)0x0) {
          if (pcVar3 == (code *)0x0) {
            (**(code **)plVar7[-1])();
          }
          else {
            (*pcVar3)();
          }
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,pcVar3,plVar7[-1]);
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 3;
      } while (uVar5 < *(byte *)(lVar4 + 1));
    }
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar1) {
      func_0x000107c60fd0(lVar4);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0);
  *(long *)(unaff_x21 + 0x90) = lVar1;
  *(undefined1 *)(unaff_x21 + 0x21) = 0;
  return;
}



/* Entry: 10875abc0; end: 10875ad4b;  */

undefined8 *
FUN_10875abc0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,long *param_8,
             undefined8 param_9,undefined8 *param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_68 = *param_7;
  *param_7 = 0;
  lStack_70 = *param_8;
  *param_8 = 0;
  func_0x000107c278b8(auStack_88,&UNK_10f4ba0c2);
  uStack_98 = param_10[1];
  uStack_a0 = *param_10;
  if (param_10[1] != 0) {
    plVar1 = (long *)(param_10[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10875da28(param_1,param_2,&uStack_60,param_4,param_5,param_6,&uStack_68,&lStack_70,5);
  func_0x000107c297ac(&uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  if (lStack_70 != 0) {
    func_0x00010875bf30();
  }
  func_0x000107c29578(&uStack_68);
  func_0x000107c27a04(&uStack_60);
  *param_1 = &PTR_FUN_110a6acf8;
  FUN_1086e76d4(param_1 + 0x37,param_9);
  return param_1;
}



/* Entry: 10875ad4c; end: 10875adc7;  */

undefined8 * FUN_10875ad4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6b230;
  func_0x000107c297ac(param_1 + 0x35);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x32);
  func_0x00010875b6a8(param_1 + 0x2e);
  FUN_1086e8d68(param_1 + 0x2a);
  func_0x00010875b758(param_1 + 0x25);
  func_0x000100864b68(param_1 + 0x20);
  func_0x0001086cf230(param_1 + 0x1a);
  func_0x00010875be10(param_1 + 0x19);
  func_0x000107c27a04(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875adc8; end: 10875b5ff;  */

undefined *** FUN_10875adc8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  code **ppcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined ***pppuVar14;
  int iVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined **ppuVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long *plVar27;
  ulong unaff_x24;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10875b600(param_1 + 0xd0,1);
  ppuStack_1b0 = &PTR_FUN_110a90620;
  uStack_1a8 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  pcStack_1a0 = (code *)0x0;
  uStack_188 = 0;
  uVar24 = *(ulong *)(param_1 + 0xb0);
  uVar2 = *(ulong *)(param_1 + 0xb8);
  plVar13 = (long *)(param_1 + 0x138);
  do {
    if (uVar24 == uVar2) {
      func_0x000107c297b4(&uStack_1d0,param_1 + 8);
      lStack_1c0 = param_1;
      func_0x000107c297b4(&plStack_1f0,param_1 + 8);
      plStack_178 = (long *)lStack_1e8;
      plStack_180 = plStack_1f0;
      plStack_1f0 = (long *)0x0;
      lStack_1e8 = 0;
      lStack_1e0 = param_1;
      lStack_170 = param_1;
      func_0x00010875bf0c(&pcStack_120);
      lStack_160 = *(long *)(pcStack_120 + 600);
      uStack_168 = *(undefined8 *)(pcStack_120 + 0x250);
      if (*(long *)(pcStack_120 + 600) != 0) {
        do {
          func_0x00010875bee0();
        } while (extraout_w10 != 0);
      }
      uStack_158 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
      func_0x00010875bf14();
      pcStack_a0 = FUN_10875bb44;
      ppuStack_98 = &PTR_FUN_110a6aea8;
      puVar11 = (undefined8 *)0x30;
      __Znwm();
      puVar11[1] = plStack_178;
      *puVar11 = plStack_180;
      if (plStack_178 != (long *)0x0) {
        do {
          func_0x00010875bee0();
        } while (extraout_w10_00 != 0);
      }
      puVar11[3] = uStack_168;
      puVar11[2] = lStack_170;
      puVar11[4] = lStack_160;
      if (lStack_160 != 0) {
        do {
          func_0x00010875bee0();
        } while (extraout_w10_01 != 0);
      }
      *(undefined4 *)(puVar11 + 5) = uStack_158;
      uVar1 = *(undefined8 *)(param_1 + 8);
      lVar9 = *(long *)(param_1 + 0x10);
      uStack_130 = uVar1;
      lStack_128 = lVar9;
      puStack_90 = puVar11;
      if (lVar9 == 0) {
        uVar28 = *(undefined8 *)(param_1 + 0x58);
      }
      else {
        do {
          func_0x00010875bee0();
        } while (extraout_w10_02 != 0);
        uVar28 = *(undefined8 *)(param_1 + 0x58);
        do {
          func_0x00010875bee0();
        } while (extraout_w10_03 != 0);
      }
      puVar12 = (undefined8 *)0xb8;
      uStack_150 = uVar1;
      lStack_148 = lVar9;
      __Znwm();
      uVar7 = uStack_1c8;
      uVar6 = uStack_1d0;
      plVar27 = puVar12 + 1;
      *plVar27 = 0;
      puVar12[2] = 0;
      *puVar12 = &PTR_FUN_110a6ad68;
      pcStack_120 = FUN_10875b844;
      ppuStack_118 = &PTR_FUN_110a6ada8;
      uStack_150 = 0;
      lStack_148 = 0;
      puVar30 = puVar12 + 3;
      *puVar30 = &PTR_DAT_110a6ade8;
      puStack_d8 = (undefined8 *)0x10875b8c8;
      ppuStack_d0 = &PTR_DAT_110a6adc0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_c0 = 0;
      lStack_b8 = lStack_1c0;
      puVar12[4] = 0x10875b8c8;
      puVar12[5] = &PTR_DAT_110a6adc0;
      puVar12[7] = uVar7;
      puVar12[6] = uVar6;
      uStack_c8 = 0;
      puVar12[8] = lStack_1c0;
      puVar12[10] = FUN_10875bb44;
      puVar12[0xb] = &PTR_FUN_110a6aea8;
      puVar12[0xc] = puVar11;
      puStack_90 = (undefined8 *)0x0;
      puVar12[0x10] = FUN_10875b844;
      puVar12[0x11] = &PTR_FUN_110a6ada8;
      puVar12[0x12] = uVar1;
      puVar12[0x13] = lVar9;
      uStack_110 = 0;
      uStack_108 = 0;
      puVar12[0x16] = uVar28;
      func_0x000107c297a4(&uStack_c8);
      func_0x000107c297a8(&uStack_110);
      func_0x000107c297a8(&uStack_150);
      uStack_140 = 0;
      uStack_138 = 0;
      puStack_200 = puVar30;
      puStack_1f8 = puVar12;
      func_0x00010875be98(&uStack_140);
      func_0x000107c297a8(&uStack_130);
      func_0x00010875bef0();
      FUN_10875b7f4(&plStack_180);
      func_0x00010875bf0c(&pcStack_120);
      plVar13 = *(long **)(pcStack_120 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *plVar27 = *plVar27 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuVar14 = &ppuStack_1b0;
      puStack_d8 = puVar30;
      ppuStack_d0 = (undefined **)puVar12;
      (**(code **)(*plVar13 + 0x48))(plVar13,pppuVar14,&puStack_d8,param_1 + 0x1b8);
      iVar15 = (int)pppuVar14;
      func_0x00010875bebc(&puStack_d8);
      func_0x00010875bf14();
      func_0x00010875be98(&puStack_200);
      func_0x000107c297a4(&plStack_1f0);
      func_0x000107c297a4(&uStack_1d0);
      pppuVar14 = &ppuStack_1b0;
      FUN_1089064c8();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return pppuVar14;
      }
      ___stack_chk_fail();
      func_0x00010875bebc(&puStack_d8);
      func_0x00010875bf14();
      func_0x00010875be98(&puStack_200);
      func_0x000107c297a4(&plStack_1f0);
      func_0x000107c297a4(&uStack_1d0);
      pppuVar14 = &ppuStack_1b0;
      FUN_1089064c8();
      func_0x00010875bf04();
      pppuVar14[1] = *pppuVar14;
      pppuVar14[3] = (undefined **)0x0;
      *(undefined1 *)(pppuVar14 + 5) = 0;
      if (iVar15 != 0) {
        func_0x000107c28298();
      }
      return pppuVar14;
    }
    uVar18 = param_1 + 0x100;
    FUN_108699578(uVar18,uVar24);
    if ((uVar18 & 1) == 0) {
      func_0x00010875bf0c(&plStack_180);
      FUN_10885edd8(&pcStack_120,plStack_180[0xc],uVar24);
      FUN_108663a10(&puStack_d8,&pcStack_120);
      FUN_108656820(&pcStack_120);
      func_0x000107c297b0(&plStack_180);
      (**(code **)(**(long **)(param_1 + 200) + 0x18))
                (&pcStack_120,*(long **)(param_1 + 200),uVar24,&puStack_d8);
      uVar8 = (uint)uStack_110;
      uVar18 = uVar24;
      FUN_108848654();
      uVar26 = *(ulong *)(param_1 + 0x130);
      if (uVar26 != 0) {
        uVar29 = uVar26 - 1;
        uVar25 = (uint)uVar26;
        if ((uVar26 & uVar29) == 0) {
          unaff_x24 = uVar25 - 1 & uVar18;
        }
        else {
          unaff_x24 = uVar18;
          if (uVar26 <= uVar18) {
            uVar5 = 0;
            if (uVar25 != 0) {
              uVar5 = (uint)uVar18 / uVar25;
            }
            unaff_x24 = (ulong)((uint)uVar18 - uVar5 * uVar25);
          }
        }
        plVar27 = *(long **)(*(long *)(param_1 + 0x128) + unaff_x24 * 8);
        if (plVar27 != (long *)0x0) {
          do {
            while( true ) {
              plVar27 = (long *)*plVar27;
              if (plVar27 == (long *)0x0) goto LAB_10875af38;
              uVar16 = plVar27[1];
              if (uVar16 != uVar18) break;
              plVar20 = plVar27 + 2;
              func_0x000107c28078(plVar20,uVar24);
              if (((ulong)plVar20 & 1) != 0) goto LAB_10875b1f0;
            }
            if ((uVar26 & uVar29) == 0) {
              uVar16 = uVar16 & uVar29;
            }
            else if (uVar26 <= uVar16) {
              uVar22 = 0;
              if (uVar26 != 0) {
                uVar22 = uVar16 / uVar26;
              }
              uVar16 = uVar16 - uVar22 * uVar26;
            }
          } while (uVar16 == unaff_x24);
        }
      }
LAB_10875af38:
      plVar27 = (long *)0x30;
      __Znwm();
      lStack_170 = 0;
      *plVar27 = 0;
      plVar27[1] = uVar18;
      plStack_180 = plVar27;
      plStack_178 = plVar13;
      func_0x000107c27994(plVar27 + 2,uVar24);
      *(undefined1 *)(plVar27 + 5) = 0;
      lStack_170 = CONCAT71(lStack_170._1_7_,1);
      fVar31 = (float)(*(long *)(param_1 + 0x140) + 1);
      if ((uVar26 == 0) || (*(float *)(param_1 + 0x148) * (float)uVar26 < fVar31)) {
        uVar29 = 1;
        if (2 < uVar26) {
          uVar29 = (ulong)((uVar26 & uVar26 - 1) != 0);
        }
        uVar29 = uVar29 | uVar26 << 1;
        uVar26 = (ulong)(fVar31 / *(float *)(param_1 + 0x148));
        if (uVar29 <= uVar26) {
          uVar29 = uVar26;
        }
        if (uVar29 - 1 == 0) {
          uVar29 = 2;
        }
        else if ((uVar29 & uVar29 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar26 = *(ulong *)(param_1 + 0x130);
        if (uVar26 < uVar29) {
LAB_10875afe8:
          uVar26 = uVar29;
          if (uVar26 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x10875b500);
            (*pcVar17)();
          }
          lVar9 = uVar26 << 3;
          __Znwm(lVar9);
          FUN_10875be3c(param_1 + 0x128,lVar9);
          *(ulong *)(param_1 + 0x130) = uVar26;
          lVar9 = *(long *)(param_1 + 0x128);
          for (uVar29 = 0; uVar26 != uVar29; uVar29 = uVar29 + 1) {
            *(undefined8 *)(lVar9 + uVar29 * 8) = 0;
          }
          plVar20 = (long *)*plVar13;
          if (plVar20 != (long *)0x0) {
            uVar22 = plVar20[1];
            uVar16 = uVar26 - 1;
            uVar29 = 0;
            if (uVar26 != 0) {
              uVar29 = uVar22 / uVar26;
            }
            uVar23 = uVar22;
            if (uVar26 <= uVar22) {
              uVar23 = uVar22 - uVar29 * uVar26;
            }
            if ((uVar26 & uVar16) == 0) {
              uVar23 = uVar22 & uVar16;
            }
            *(long **)(lVar9 + uVar23 * 8) = plVar13;
            while (plVar21 = plVar20, plVar20 = (long *)*plVar21, plVar20 != (long *)0x0) {
              uVar29 = plVar20[1];
              if ((uVar26 & uVar16) == 0) {
                uVar29 = uVar29 & uVar16;
              }
              else if (uVar26 <= uVar29) {
                uVar22 = 0;
                if (uVar26 != 0) {
                  uVar22 = uVar29 / uVar26;
                }
                uVar29 = uVar29 - uVar22 * uVar26;
              }
              if (uVar29 != uVar23) {
                if (*(long *)(lVar9 + uVar29 * 8) == 0) {
                  *(long **)(lVar9 + uVar29 * 8) = plVar21;
                  uVar23 = uVar29;
                }
                else {
                  *plVar21 = *plVar20;
                  *plVar20 = **(undefined8 **)(lVar9 + uVar29 * 8);
                  **(long **)(lVar9 + uVar29 * 8) = (long)plVar20;
                  plVar20 = plVar21;
                }
              }
            }
          }
        }
        else if (uVar29 < uVar26) {
          uVar16 = (ulong)((float)*(ulong *)(param_1 + 0x140) / *(float *)(param_1 + 0x148));
          if ((uVar26 < 3) || ((uVar26 & uVar26 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar16) {
            uVar16 = 1L << (-LZCOUNT(uVar16 - 1) & 0x3fU);
          }
          if (uVar29 <= uVar16) {
            uVar29 = uVar16;
          }
          if (uVar29 < uVar26) {
            if (uVar29 != 0) goto LAB_10875afe8;
            FUN_10875be3c(param_1 + 0x128,0);
            uVar26 = 0;
            *(undefined8 *)(param_1 + 0x130) = 0;
          }
          else {
            uVar26 = *(ulong *)(param_1 + 0x130);
          }
        }
        if ((uVar26 & uVar26 - 1) == 0) {
          unaff_x24 = (int)uVar26 - 1 & uVar18;
        }
        else {
          unaff_x24 = uVar18;
          if (uVar26 <= uVar18) {
            uVar29 = 0;
            if (uVar26 != 0) {
              uVar29 = uVar18 / uVar26;
            }
            unaff_x24 = uVar18 - uVar29 * uVar26;
          }
        }
      }
      lVar9 = *(long *)(param_1 + 0x128);
      plVar20 = *(long **)(lVar9 + unaff_x24 * 8);
      if (plVar20 == (long *)0x0) {
        *plVar27 = *plVar13;
        *plVar13 = (long)plVar27;
        *(long **)(lVar9 + unaff_x24 * 8) = plVar13;
        if (*plVar27 != 0) {
          uVar18 = *(ulong *)(*plVar27 + 8);
          if ((uVar26 & uVar26 - 1) == 0) {
            uVar18 = uVar18 & uVar26 - 1;
          }
          else if (uVar26 <= uVar18) {
            uVar29 = 0;
            if (uVar26 != 0) {
              uVar29 = uVar18 / uVar26;
            }
            uVar18 = uVar18 - uVar29 * uVar26;
          }
          *(long **)(lVar9 + uVar18 * 8) = plVar27;
        }
      }
      else {
        *plVar27 = *plVar20;
        *plVar20 = (long)plVar27;
      }
      plStack_180 = (long *)0x0;
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      FUN_10875be54(&plStack_180);
LAB_10875b1f0:
      *(char *)(plVar27 + 5) = (char)((uVar8 & 4) >> 2);
      ppcVar10 = &pcStack_1a0;
      func_0x000107c303b0(ppcVar10,0x10875bdc0);
      if (ppcVar10 != &pcStack_120) {
        pcVar17 = ppcVar10[1];
        if (((ulong)pcVar17 & 1) != 0) {
          pcVar17 = *(code **)((ulong)pcVar17 & 0xfffffffffffffffe);
        }
        ppuVar19 = ppuStack_118;
        if (((ulong)ppuStack_118 & 1) != 0) {
          ppuVar19 = *(undefined ***)((ulong)ppuStack_118 & 0xfffffffffffffffe);
        }
        if ((undefined **)pcVar17 == ppuVar19) {
          FUN_108905704();
        }
        else {
          FUN_1089056d0();
        }
      }
      FUN_1089052c4(&pcStack_120);
      FUN_1086569a0(&puStack_d8);
    }
    uVar24 = uVar24 + 0x18;
  } while( true );
}



/* Entry: 10875b600; end: 10875b633;  */

undefined8 * FUN_10875b600(undefined8 *param_1,int param_2)

{
  param_1[1] = *param_1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_2 != 0) {
    func_0x000107c28298();
  }
  return param_1;
}



/* Entry: 10875b634; end: 10875b637;  */

undefined8 * FUN_10875b634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6acf8;
  func_0x00010086ab34(param_1 + 0x37);
  *param_1 = &PTR_DAT_110a6b230;
  func_0x000107c297ac(param_1 + 0x35);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x32);
  func_0x00010875b6a8(param_1 + 0x2e);
  FUN_1086e8d68(param_1 + 0x2a);
  func_0x00010875b758(param_1 + 0x25);
  func_0x000100864b68(param_1 + 0x20);
  func_0x0001086cf230(param_1 + 0x1a);
  func_0x00010875be10(param_1 + 0x19);
  func_0x000107c27a04(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875b638; end: 10875b64b;  */

void FUN_10875b638(void)

{
  FUN_10875bd8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875b64c; end: 10875b663;  */

undefined8 FUN_10875b64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10875b664; end: 10875b717;  */

undefined8 * FUN_10875b664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875b718; end: 10875b71f;  */

void FUN_10875b718(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10875b720; end: 10875b7db;  */

void FUN_10875b720(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10875b7dc; end: 10875b7f3;  */

void FUN_10875b7dc(long *param_1)

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



/* Entry: 10875b7f4; end: 10875b81b;  */

undefined8 FUN_10875b7f4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10875b81c; end: 10875b81f;  */

void FUN_10875b81c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ad68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10875b820; end: 10875b833;  */

void FUN_10875b820(void)

{
  func_0x00010875bb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875b834; end: 10875b843;  */

void FUN_10875b834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010875b83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10875b844; end: 10875b8a3;  */

long FUN_10875b844(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10875b8a4; end: 10875b907;  */

void FUN_10875b8a4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10875b908; end: 10875b91b;  */

void FUN_10875b908(void)

{
  func_0x00010875bab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875b91c; end: 10875b933;  */

void FUN_10875b91c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10875b934; end: 10875b973;  */

void FUN_10875b934(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010875bf1c();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010875b968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10875b974; end: 10875ba1f;  */

void FUN_10875b974(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010875bf1c();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10875ba20; end: 10875ba23;  */

undefined8 * FUN_10875ba20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ae70;
  func_0x00010875bf28(param_1[8]);
  func_0x00010875bf28(param_1[2]);
  return param_1;
}



/* Entry: 10875ba24; end: 10875ba37;  */

void FUN_10875ba24(void)

{
  FUN_10875ba74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875ba38; end: 10875ba73;  */

void FUN_10875ba38(void)

{
  return;
}



/* Entry: 10875ba74; end: 10875bae3;  */

undefined8 * FUN_10875ba74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6ae70;
  func_0x00010875bf28(param_1[8]);
  func_0x00010875bf28(param_1[2]);
  return param_1;
}



/* Entry: 10875bae4; end: 10875bb1f;  */

undefined1 * FUN_10875bae4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10875bb20();
  return param_1;
}



/* Entry: 10875bb20; end: 10875bb43;  */

void FUN_10875bb20(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_108681dcc();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10875bb44; end: 10875bbdb;  */

void FUN_10875bb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_108770c94();
  if ((1 << (ulong)((uint)param_1 & 0x1f) & 0xfdbU) == 0) {
    FUN_10875eb20(uVar2,0);
  }
  else {
    FUN_10875ebcc(uVar2,param_1);
  }
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10875bbdc; end: 10875bc23;  */

void FUN_10875bbdc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    plVar1 = (long *)*param_3;
    FUN_10875bc24();
                    /* WARNING: Could not recover jumptable at 0x00010875bc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
    return;
  }
  return;
}



/* Entry: 10875bc24; end: 10875bc3b;  */

undefined1 * FUN_10875bc24(undefined1 *param_1)

{
  if ((param_1[0x40] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10875bc68();
  return param_1;
}



/* Entry: 10875bc3c; end: 10875bc67;  */

undefined1 * FUN_10875bc3c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_10875bc68();
  return param_1;
}



/* Entry: 10875bc68; end: 10875bc7b;  */

void FUN_10875bc68(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10875bc98();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 10875bc7c; end: 10875bc97;  */

void FUN_10875bc7c(long param_1)

{
  FUN_10875bc98();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10875bc98; end: 10875bca3;  */

undefined8 * FUN_10875bc98(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110a81020;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_10875bcf0(param_1,param_2);
  return param_1;
}



/* Entry: 10875bca4; end: 10875bcef;  */

undefined8 * FUN_10875bca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110a81020;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_10875bcf0(param_1,param_3);
  return param_1;
}



/* Entry: 10875bcf0; end: 10875bd53;  */

long FUN_10875bcf0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1088b9b38(param_1);
    }
    else {
      FUN_1088b9b00(param_1);
    }
  }
  return param_1;
}



/* Entry: 10875bd54; end: 10875bd73;  */

void FUN_10875bd54(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10875b7f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10875bd74; end: 10875bd8b;  */

void FUN_10875bd74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10875bd8c; end: 10875be3b;  */

undefined8 * FUN_10875bd8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6acf8;
  func_0x00010086ab34(param_1 + 0x37);
  *param_1 = &PTR_DAT_110a6b230;
  func_0x000107c297ac(param_1 + 0x35);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x32);
  func_0x00010875b6a8(param_1 + 0x2e);
  FUN_1086e8d68(param_1 + 0x2a);
  func_0x00010875b758(param_1 + 0x25);
  func_0x000100864b68(param_1 + 0x20);
  func_0x0001086cf230(param_1 + 0x1a);
  func_0x00010875be10(param_1 + 0x19);
  func_0x000107c27a04(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875be3c; end: 10875be53;  */

void FUN_10875be3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10875be54; end: 10875bedf;  */

long * FUN_10875be54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10875bee0; end: 10875bf3b;  */

void FUN_10875bee0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10875bf3c; end: 10875c103;  */

undefined8 *
FUN_10875bf3c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_248 [120];
  long alStack_1d0 [2];
  undefined8 uStack_1bc;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_184;
  undefined1 auStack_168 [48];
  byte bStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110a6aed0;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba0d8);
  ppuStack_88 = &PTR_FUN_110a6af40;
  pppuStack_70 = &ppuStack_88;
  uStack_a8 = *param_7;
  *param_7 = 0;
  puStack_80 = param_1;
  FUN_10875e9fc(param_1,auStack_a0,param_2,param_4,&ppuStack_88,param_9,&uStack_a8,5);
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *param_1 = &PTR_FUN_110a6aed0;
  puVar12 = param_1 + 0x16;
  *puVar12 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar6 = *param_3;
  param_1[0x17] = param_3[1];
  *puVar12 = uVar6;
  param_1[0x18] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_10875cbec(param_1 + 0x19,param_6);
  uVar6 = *param_8;
  *param_8 = 0;
  puVar8 = param_1 + 0x1d;
  *puVar8 = uVar6;
  puVar10 = param_1 + 0x1e;
  *puVar10 = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar4 = param_1 + 0x21;
  FUN_1086cf200();
  *(undefined4 *)(param_1 + 0x27) = param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010875b6a8(puVar10);
  func_0x00010875be10(puVar8);
  FUN_1086e8408(param_1 + 0x19);
  func_0x000100870608(puVar12);
  func_0x00010875b664(param_1);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_b8 = FUN_10875c104;
  puStack_100 = param_7;
  uStack_f8 = param_2;
  puStack_f0 = puVar12;
  puStack_e8 = param_3;
  puStack_e0 = puVar10;
  puStack_d8 = puVar8;
  puStack_d0 = puVar4;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10875b600(puVar5 + 0x21,1);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uVar7 = puVar5[0x16];
  uVar11 = puVar5[0x17];
  bVar3 = uVar7 <= uVar11;
  if (uVar11 != uVar7) {
    func_0x00010875cc5c();
    if (bVar3) {
      FUN_10875c458();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10875c2d4);
      (*pcVar2)();
    }
    FUN_10875c4f8(&uStack_1b0);
    FUN_10875c46c(&uStack_118,&uStack_1b0);
    func_0x00010875c718(&uStack_1b0);
    uVar7 = puVar5[0x16];
    uVar11 = puVar5[0x17];
  }
  for (; uVar7 != uVar11; uVar7 = uVar7 + 0x78) {
    func_0x0001086a6ac0(&uStack_1b0,uVar7);
    func_0x000107c29ee0(&uStack_130,&uStack_1b0);
    func_0x000107c2a2e0(&uStack_1b0);
    func_0x000107c29820(alStack_1d0,puVar5);
    FUN_10885edd8(&uStack_1b0,*(undefined8 *)(alStack_1d0[0] + 0x60),&uStack_130);
    FUN_108663a10(auStack_168,&uStack_1b0);
    FUN_108656820(&uStack_1b0);
    func_0x000107c297b0(alStack_1d0);
    if ((bStack_138 & 1) != 0) {
      plVar9 = (long *)puVar5[0x1d];
      uVar1 = *(undefined4 *)(puVar5 + 0x27);
      FUN_10868cc20(auStack_248,uVar7);
      (**(code **)(*plVar9 + 0x28))
                (alStack_1d0,plVar9,&uStack_130,1,uVar1,puVar5 + 0x21,auStack_248,0,0);
      FUN_1089058f8(auStack_248);
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      uStack_1a0 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      lStack_198 = alStack_1d0[0];
      uStack_184 = uStack_1bc;
      func_0x00010875c784(&uStack_118,&uStack_1b0);
      func_0x000107c27914(&uStack_1b0);
    }
    FUN_1086569a0(auStack_168);
    func_0x000107c27914(&uStack_130);
  }
  FUN_10875c8f0(puVar5 + 0x1e,&uStack_118);
  FUN_10875ec20(puVar5);
  puVar4 = &uStack_118;
  func_0x00010875b6a8(puVar4);
  return puVar4;
}



/* Entry: 10875c104; end: 10875c357;  */

void FUN_10875c104(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_198 [120];
  long alStack_120 [2];
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_d4;
  undefined1 auStack_b8 [48];
  byte bStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10875b600(param_1 + 0x108,1);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar4 = *(ulong *)(param_1 + 0xb0);
  uVar6 = *(ulong *)(param_1 + 0xb8);
  bVar3 = uVar4 <= uVar6;
  if (uVar6 != uVar4) {
    func_0x00010875cc5c();
    if (bVar3) {
      FUN_10875c458();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10875c2d4);
      (*pcVar2)();
    }
    FUN_10875c4f8(&uStack_100);
    FUN_10875c46c(&uStack_68,&uStack_100);
    func_0x00010875c718(&uStack_100);
    uVar4 = *(ulong *)(param_1 + 0xb0);
    uVar6 = *(ulong *)(param_1 + 0xb8);
  }
  for (; uVar4 != uVar6; uVar4 = uVar4 + 0x78) {
    func_0x0001086a6ac0(&uStack_100,uVar4);
    func_0x000107c29ee0(&uStack_80,&uStack_100);
    func_0x000107c2a2e0(&uStack_100);
    func_0x000107c29820(alStack_120,param_1);
    FUN_10885edd8(&uStack_100,*(undefined8 *)(alStack_120[0] + 0x60),&uStack_80);
    FUN_108663a10(auStack_b8,&uStack_100);
    FUN_108656820(&uStack_100);
    func_0x000107c297b0(alStack_120);
    if ((bStack_88 & 1) != 0) {
      plVar5 = *(long **)(param_1 + 0xe8);
      uVar1 = *(undefined4 *)(param_1 + 0x138);
      FUN_10868cc20(auStack_198,uVar4);
      (**(code **)(*plVar5 + 0x28))
                (alStack_120,plVar5,&uStack_80,1,uVar1,param_1 + 0x108,auStack_198,0,0);
      FUN_1089058f8(auStack_198);
      uStack_f8 = uStack_78;
      uStack_100 = uStack_80;
      uStack_f0 = uStack_70;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      lStack_e8 = alStack_120[0];
      uStack_d4 = uStack_10c;
      func_0x00010875c784(&uStack_68,&uStack_100);
      func_0x000107c27914(&uStack_100);
    }
    FUN_1086569a0(auStack_b8);
    func_0x000107c27914(&uStack_80);
  }
  FUN_10875c8f0(param_1 + 0xf0,&uStack_68);
  FUN_10875ec20(param_1);
  func_0x00010875b6a8(&uStack_68);
  return;
}



/* Entry: 10875c358; end: 10875c35b;  */

undefined8 * FUN_10875c358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6aed0;
  func_0x0001086cf230(param_1 + 0x21);
  func_0x00010875b6a8(param_1 + 0x1e);
  func_0x00010875be10(param_1 + 0x1d);
  FUN_1086e8408(param_1 + 0x19);
  func_0x000100870608(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875c35c; end: 10875c36f;  */

void FUN_10875c35c(void)

{
  func_0x00010875c98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875c370; end: 10875c377;  */

undefined8 FUN_10875c370(void)

{
  return 0;
}



/* Entry: 10875c378; end: 10875c457;  */

void FUN_10875c378(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27ab0(param_1,(*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) / 0x78);
  lVar2 = *(long *)(param_2 + 0xb8);
  for (lVar4 = *(long *)(param_2 + 0xb0); lVar4 != lVar2; lVar4 = lVar4 + 0x78) {
    ppuVar3 = &PTR_PTR_11327ad30;
    if (*(int *)(lVar4 + 0x70) == 3) {
      ppuVar3 = *(undefined ***)(lVar4 + 0x60);
    }
    ppuVar1 = &PTR_PTR_11326cb58;
    if ((undefined **)ppuVar3[0xd] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar3[0xd];
    }
    func_0x000107c29ee0(auStack_58,ppuVar1);
    func_0x000107c27ac4(param_1,auStack_58);
    func_0x000107c27914(auStack_58);
  }
  return;
}



/* Entry: 10875c458; end: 10875c46b;  */

void FUN_10875c458(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x38) * 0x38;
  FUN_10875c590(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10875c46c; end: 10875c4f7;  */

void FUN_10875c46c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_10875c590(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10875c4f8; end: 10875c567;  */

long * FUN_10875c4f8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010875c544();
  }
  lVar1 = param_4 + param_3 * 0x38;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x38;
  return param_1;
}



/* Entry: 10875c568; end: 10875c58f;  */

void FUN_10875c568(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 in_CY;
  long lVar1;
  undefined8 unaff_x30;
  undefined1 auStack_70 [8];
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010875cc5c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_50 = param_4;
  for (lVar1 = param_2; lStack_48 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x38) {
    FUN_10875c664(param_4,lVar1);
    param_4 = lStack_48 + 0x38;
  }
  uStack_58 = 1;
  FUN_10875c634(unaff_x30,param_2,param_3);
  FUN_10875c698(auStack_70);
  return;
}



/* Entry: 10875c590; end: 10875c633;  */

void FUN_10875c590(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x38) {
    FUN_10875c664(param_4,lVar1);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_10875c634(param_1,param_2,param_3);
  FUN_10875c698(&uStack_60);
  return;
}



/* Entry: 10875c634; end: 10875c663;  */

void FUN_10875c634(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10875c664; end: 10875c697;  */

void FUN_10875c664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10875c698; end: 10875c6c7;  */

long FUN_10875c698(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10875c6c8(param_1);
  }
  return param_1;
}



/* Entry: 10875c6c8; end: 10875c6e7;  */

void FUN_10875c6c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10875c6e8; end: 10875c743;  */

void FUN_10875c6e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10875c744; end: 10875c74b;  */

void FUN_10875c744(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10875c74c; end: 10875c7e7;  */

void FUN_10875c74c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x38;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10875c7e8; end: 10875c88f;  */

long FUN_10875c7e8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10875c890(param_1,(param_1[1] - *param_1) / 0x38 + 1);
  FUN_10875c4f8(auStack_58,plVar1,(param_1[1] - *param_1) / 0x38,param_1 + 2);
  FUN_10875c664(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x38;
  FUN_10875c46c(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010875c718(auStack_58);
  return lVar2;
}



/* Entry: 10875c890; end: 10875c8ef;  */

long * FUN_10875c890(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((long *)0x492492492492492 < param_2) {
    FUN_10875c458();
    plVar2 = param_1;
    func_0x00010875c928();
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return plVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    plVar2 = (long *)0x492492492492492;
  }
  return plVar2;
}



/* Entry: 10875c8f0; end: 10875c9e3;  */

void FUN_10875c8f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010875c928();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10875c9e4; end: 10875c9eb;  */

void FUN_10875c9e4(void)

{
  return;
}



/* Entry: 10875c9ec; end: 10875ca1b;  */

void FUN_10875c9ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6af40;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10875ca1c; end: 10875ca47;  */

void FUN_10875ca1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6af40;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10875ca48; end: 10875cba7;  */

void FUN_10875ca48(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 uVar11;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  
  lVar8 = *(long *)(param_1 + 8);
  ppuStack_98 = (undefined8 ***)0x0;
  ppuStack_90 = (undefined8 ***)0x0;
  uVar7 = *(ulong *)(lVar8 + 0xf0);
  uVar1 = *(ulong *)(lVar8 + 0xf8);
  ppuStack_80 = &ppuStack_98;
  ppuStack_88 = (undefined8 ***)0x0;
  uStack_78 = 0;
  bVar3 = uVar7 <= uVar1;
  if (uVar1 - uVar7 != 0) {
    lVar6 = (long)(uVar1 - uVar7) / 0x38;
    func_0x00010875cc5c();
    if (bVar3) {
      FUN_10875c458();
      goto LAB_10875cb70;
    }
    pppuVar4 = &ppuStack_88;
    func_0x00010875c544();
    ppuStack_88 = pppuVar4 + lVar6 * 7;
    ppuStack_68 = &ppuStack_50;
    ppuStack_60 = &ppuStack_48;
    uStack_58 = 0;
    ppuStack_98 = pppuVar4;
    ppuStack_90 = pppuVar4;
    ppuStack_70 = &ppuStack_88;
    ppuStack_50 = pppuVar4;
    for (; ppuStack_48 = pppuVar4, uVar7 != uVar1; uVar7 = uVar7 + 0x38) {
      func_0x000107c27994(pppuVar4,uVar7);
      ppuVar10 = *(undefined8 ***)(uVar7 + 0x20);
      ppuVar9 = *(undefined8 ***)(uVar7 + 0x18);
      uVar11 = *(undefined8 *)(uVar7 + 0x24);
      *(undefined8 *)((long)pppuVar4 + 0x2c) = *(undefined8 *)(uVar7 + 0x2c);
      *(undefined8 *)((long)pppuVar4 + 0x24) = uVar11;
      pppuVar4[4] = ppuVar10;
      pppuVar4[3] = ppuVar9;
      pppuVar4 = (undefined8 ***)(ppuStack_48 + 7);
    }
    uStack_58 = 1;
    FUN_10875c698(&ppuStack_70);
    ppuStack_90 = pppuVar4;
  }
  uStack_78 = 1;
  func_0x00010875c960(&ppuStack_80);
  plVar5 = *(long **)(lVar8 + 0xe0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&ppuStack_98);
    func_0x00010875b6a8(&ppuStack_98);
    return;
  }
  func_0x000104bfeb48();
LAB_10875cb70:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10875cb74);
  (*pcVar2)();
}



/* Entry: 10875cba8; end: 10875cbdf;  */

long FUN_10875cba8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6afa0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10875cbe0; end: 10875cbeb;  */

undefined ** FUN_10875cbe0(void)

{
  return &PTR_DAT_110a6afa0;
}



/* Entry: 10875cbec; end: 10875cc4b;  */

long FUN_10875cbec(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10875cc4c; end: 10875cc87;  */

void FUN_10875cc4c(void)

{
  return;
}



/* Entry: 10875cc88; end: 10875ce37;  */

undefined8 *
FUN_10875cc88(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_50 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_68 = *param_7;
  *param_7 = 0;
  plStack_70 = (long *)*param_8;
  *param_8 = 0;
  func_0x000107c278b8(auStack_88,&UNK_10f4ba0fb);
  uStack_98 = param_11[1];
  uStack_a0 = *param_11;
  if (param_11[1] != 0) {
    plVar1 = (long *)(param_11[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10875da28(param_1,param_2,&uStack_60,param_4,param_5,param_6,&uStack_68,&plStack_70,0xf);
  func_0x000107c297ac(&uStack_a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  if (plStack_70 != (long *)0x0) {
    (**(code **)(*plStack_70 + 8))();
  }
  func_0x000107c29578(&uStack_68);
  func_0x000107c27a04(&uStack_60);
  *param_1 = &PTR_FUN_110a6afc0;
  FUN_1086a0454(param_1 + 0x37,param_9);
  FUN_1086e76d4(param_1 + 0x3f,param_10);
  return param_1;
}



/* Entry: 10875ce38; end: 10875d317;  */

undefined8 * FUN_10875ce38(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 auStack_1a0 [6];
  long lStack_170;
  int iStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10875b600(param_1 + 0xd0,1);
  FUN_1086a0454(auStack_1a0,param_1 + 0x1b8);
  uVar6 = iStack_168 == 2;
  if ((bool)uVar6) {
    FUN_10875d8e0(&pcStack_a0,0,lStack_170 + 0x10);
    puVar8 = auStack_1a0;
    func_0x00010865edac(puVar8);
    func_0x00010875d86c(puVar8 + 2);
    func_0x00010875da14();
    plVar10 = extraout_x8_00;
    if (!(bool)uVar6) {
      plVar10 = extraout_x9_00;
    }
    for (lVar11 = (long)(int)ppuStack_98 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      if ((*(byte *)(*plVar10 + 0x10) & 1) != 0) {
        uVar7 = *(ulong *)(*plVar10 + 0x30);
        func_0x000107c29ee0(&puStack_d0);
        func_0x00010875d9d8();
        func_0x00010875d9bc();
        if ((uVar7 & 1) == 0) {
          puVar8 = auStack_1a0;
          func_0x00010865edac(puVar8);
          FUN_10875d43c(puVar8 + 2);
          FUN_1088f1afc();
        }
      }
      plVar10 = plVar10 + 1;
    }
    FUN_10875d910(&pcStack_a0);
  }
  else {
    uVar6 = iStack_168 == 1;
    if ((bool)uVar6) {
      FUN_10875d880(&pcStack_a0,0,lStack_170 + 0x10);
      puVar8 = auStack_1a0;
      FUN_10875d330(puVar8);
      FUN_10875d858(puVar8 + 2);
      func_0x00010875da14();
      plVar10 = extraout_x8;
      if (!(bool)uVar6) {
        plVar10 = extraout_x9;
      }
      for (lVar11 = (long)(int)ppuStack_98 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
        if ((*(byte *)(*plVar10 + 0x10) & 1) != 0) {
          uVar7 = *(ulong *)(*plVar10 + 0x30);
          func_0x000107c29ee0(&puStack_d0);
          func_0x00010875d9d8();
          func_0x00010875d9bc();
          if ((uVar7 & 1) == 0) {
            puVar8 = auStack_1a0;
            FUN_10875d330(puVar8);
            FUN_10875d3dc(puVar8 + 2);
            FUN_1088f15ec();
          }
        }
        plVar10 = plVar10 + 1;
      }
      FUN_10875d8b0(&pcStack_a0);
    }
  }
  func_0x000107c297b4(&uStack_1c0,param_1 + 8);
  lStack_1b0 = param_1;
  func_0x000107c297b4(&uStack_1e0,param_1 + 8);
  lStack_158 = lStack_1d8;
  uStack_160 = uStack_1e0;
  uStack_1e0 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = param_1;
  lStack_150 = param_1;
  func_0x00010875d9ec();
  lStack_140 = *(long *)(pcStack_a0 + 600);
  uStack_148 = *(undefined8 *)(pcStack_a0 + 0x250);
  if (*(long *)(pcStack_a0 + 600) != 0) {
    do {
      func_0x00010875d998();
    } while (extraout_w10 != 0);
  }
  uStack_138 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x00010875d9f8();
  pcStack_100 = FUN_10875d74c;
  ppuStack_f8 = &PTR_FUN_110a6b170;
  puVar8 = (undefined8 *)0x30;
  __Znwm();
  puVar8[1] = lStack_158;
  *puVar8 = uStack_160;
  if (lStack_158 != 0) {
    do {
      func_0x00010875d998();
    } while (extraout_w10_00 != 0);
  }
  puVar8[3] = uStack_148;
  puVar8[2] = lStack_150;
  puVar8[4] = lStack_140;
  if (lStack_140 != 0) {
    do {
      func_0x00010875d998();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar8 + 5) = uStack_138;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uStack_110 = uVar1;
  lStack_108 = lVar11;
  puStack_f0 = puVar8;
  if (lVar11 == 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010875d998();
    } while (extraout_w10_02 != 0);
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010875d998();
    } while (extraout_w10_03 != 0);
  }
  puVar9 = (undefined8 *)0xb8;
  uStack_130 = uVar1;
  lStack_128 = lVar11;
  __Znwm();
  uVar5 = uStack_1b8;
  uVar4 = uStack_1c0;
  plVar13 = puVar9 + 1;
  *plVar13 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a6b030;
  pcStack_a0 = FUN_10875d498;
  ppuStack_98 = &PTR_FUN_110a6b070;
  uStack_130 = 0;
  lStack_128 = 0;
  puVar14 = puVar9 + 3;
  *puVar14 = &PTR_DAT_110a6b0b0;
  puStack_d0 = (undefined8 *)0x10875d51c;
  ppuStack_c8 = &PTR_DAT_110a6b088;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_b8 = 0;
  lStack_b0 = lStack_1b0;
  puVar9[4] = 0x10875d51c;
  puVar9[5] = &PTR_DAT_110a6b088;
  puVar9[7] = uVar5;
  puVar9[6] = uVar4;
  uStack_c0 = 0;
  puVar9[8] = lStack_1b0;
  puVar9[10] = FUN_10875d74c;
  puVar9[0xb] = &PTR_FUN_110a6b170;
  puVar9[0xc] = puVar8;
  puStack_f0 = (undefined8 *)0x0;
  puVar9[0x10] = FUN_10875d498;
  puVar9[0x11] = &PTR_FUN_110a6b070;
  puVar9[0x12] = uVar1;
  puVar9[0x13] = lVar11;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar9[0x16] = uVar12;
  func_0x000107c297a4(&uStack_c0);
  func_0x000107c297a8(&uStack_90);
  func_0x000107c297a8(&uStack_130);
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_1f0 = puVar14;
  puStack_1e8 = puVar9;
  FUN_10875d940(&uStack_120);
  func_0x000107c297a8(&uStack_110);
  func_0x00010875d9a8();
  FUN_10875d448(&uStack_160);
  func_0x00010875d9ec();
  plVar10 = *(long **)(pcStack_a0 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = *plVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_d0 = puVar14;
  ppuStack_c8 = (undefined **)puVar9;
  (**(code **)(*plVar10 + 0x50))(plVar10,auStack_1a0,&puStack_d0,param_1 + 0x1f8);
  func_0x00010875d968(&puStack_d0);
  func_0x00010875d9f8();
  FUN_10875d940(&puStack_1f0);
  func_0x000107c297a4(&uStack_1e0);
  func_0x000107c297a4(&uStack_1c0);
  puVar8 = auStack_1a0;
  FUN_1088f050c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  ___stack_chk_fail();
  puVar8 = auStack_1a0;
  FUN_1088f050c();
  func_0x00010875d9c4();
  *puVar8 = &PTR_FUN_110a6afc0;
  func_0x00010086ab34(puVar8 + 0x3f);
  FUN_1088f050c(puVar8 + 0x37);
  *puVar8 = &PTR_DAT_110a6b230;
  func_0x000107c297ac(puVar8 + 0x35);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8 + 0x32);
  func_0x00010875b6a8(puVar8 + 0x2e);
  FUN_1086e8d68(puVar8 + 0x2a);
  func_0x00010875b758(puVar8 + 0x25);
  func_0x000100864b68(puVar8 + 0x20);
  func_0x0001086cf230(puVar8 + 0x1a);
  func_0x00010875be10(puVar8 + 0x19);
  func_0x000107c27a04(puVar8 + 0x16);
  *puVar8 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(puVar8 + 0x13);
  func_0x00010865f8f8(puVar8 + 0xd);
  *puVar8 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(puVar8 + 0xb);
  func_0x0001005640e4(puVar8 + 6);
  func_0x000107c60ca0(puVar8 + 3);
  func_0x0001005fe52c(puVar8 + 1);
  return puVar8;
}



/* Entry: 10875d318; end: 10875d31b;  */

undefined8 * FUN_10875d318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6afc0;
  func_0x00010086ab34(param_1 + 0x3f);
  FUN_1088f050c(param_1 + 0x37);
  *param_1 = &PTR_DAT_110a6b230;
  func_0x000107c297ac(param_1 + 0x35);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x32);
  func_0x00010875b6a8(param_1 + 0x2e);
  FUN_1086e8d68(param_1 + 0x2a);
  func_0x00010875b758(param_1 + 0x25);
  func_0x000100864b68(param_1 + 0x20);
  func_0x0001086cf230(param_1 + 0x1a);
  func_0x00010875be10(param_1 + 0x19);
  func_0x000107c27a04(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875d31c; end: 10875d32f;  */

void FUN_10875d31c(void)

{
  FUN_10875d81c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875d330; end: 10875d3db;  */

void FUN_10875d330(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x38) != 1) {
    FUN_1088f02ec(param_1);
    *(undefined4 *)(param_1 + 0x38) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x00010875d384();
    *(ulong *)(param_1 + 0x30) = uVar1;
  }
  return;
}



/* Entry: 10875d3dc; end: 10875d3e7;  */

void FUN_10875d3dc(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10875d3e8);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10875d3e8);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10875d3e8; end: 10875d43b;  */

void FUN_10875d3e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110a8c1f8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10875d43c; end: 10875d447;  */

void FUN_10875d43c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10865f308);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10865f308);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10875d448; end: 10875d46f;  */

undefined8 FUN_10875d448(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10875d470; end: 10875d473;  */

void FUN_10875d470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


