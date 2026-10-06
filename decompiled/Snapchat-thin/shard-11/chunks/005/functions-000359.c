/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108692be0; end: 108692be3;  */

void FUN_108692be0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108692be4; end: 108692d6f;  */

void FUN_108692be4(void)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long unaff_x19;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_2c0 [192];
  undefined1 auStack_200 [24];
  byte bStack_1e8;
  undefined8 uStack_80;
  
  func_0x000108693310();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  func_0x0001006b38fc();
  (*extraout_x8)();
  puVar4 = (undefined8 *)(unaff_x19 + 0x20);
  func_0x000108693420(*puVar4);
  func_0x000108693414();
  func_0x0001086933c0();
  func_0x000108693498();
  if ((bool)in_ZR) {
    uStack_80 = uVar2;
    FUN_10886bf18(*puVar4,auStack_2c0);
  }
  bVar1 = *(char *)(unaff_x19 + 0x60) == '\x01';
  if (bVar1) {
    func_0x000108693498();
    if ((bVar1) && ((bStack_1e8 & 1) != 0)) {
      FUN_1086902a0(uVar2,auStack_200,*(undefined4 *)(unaff_x19 + 0x18),puVar4);
    }
  }
  else {
    func_0x00010869348c();
    func_0x00010868f78c();
  }
  (**(code **)(**(long **)(unaff_x19 + 0x50) + 0x118))();
  FUN_10886d2d0(*puVar4,uVar2);
  func_0x000108693370();
  func_0x000108693358();
  plVar3 = *(long **)(unaff_x19 + 0x40);
  func_0x000108693458();
  func_0x000108693360(*(undefined8 *)(*plVar3 + 0x50));
  func_0x0001086933b8();
  func_0x000108693368();
  return;
}



/* Entry: 108692d70; end: 108692d8f;  */

void FUN_108692d70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108691b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108692d90; end: 108692d93;  */

void FUN_108692d90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108692d94; end: 108692dbf;  */

undefined8 * FUN_108692d94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62de0;
  func_0x000108691b70(param_1 + 1);
  return param_1;
}



/* Entry: 108692dc0; end: 108692dd3;  */

void FUN_108692dc0(void)

{
  FUN_108692d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108692dd4; end: 108692df7;  */

void FUN_108692dd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000108693464();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a62de0;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 108692df8; end: 108692e23;  */

void FUN_108692df8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a62de0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c323e4();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 108692e24; end: 108692f53;  */

void FUN_108692e24(long param_1,ulong *param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *extraout_x8;
  ulong uVar3;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_68 [72];
  
  uVar3 = *param_2;
  lStack_e8 = 0;
  lStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    lStack_e0 = lVar1;
    if (lVar1 != 0) {
      lStack_e8 = *(long *)(param_1 + 8);
      if (lStack_e8 != 0) {
        uStack_d8 = 0;
        uStack_d0 = 0;
        func_0x00010868c708(lStack_e8 + 0x118,&uStack_d8);
        FUN_10868cd80(&uStack_d8);
        lVar1 = lStack_e8;
        if ((uVar3 >> 0x20 & 1) == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x18);
          func_0x0001006b38fc();
          (*extraout_x8)();
          *(undefined8 *)(lVar1 + 0x108) = uVar2;
          *(undefined1 *)(lVar1 + 0x110) = 1;
          if (((*(byte *)(lVar1 + 0xfa) & 1) != 0) || (*(char *)(lVar1 + 0xfb) == '\x01')) {
            func_0x000107c28dc4(&uStack_d8,lVar1 + 0x50);
            uStack_d0 = uStack_d8;
            uStack_c8 = 1;
            uStack_a0 = 1;
            uStack_a8 = uVar2;
            FUN_10886d1b4(*(undefined8 *)(lVar1 + 0x50),&uStack_d8);
            func_0x000107c28d20(auStack_68);
          }
          func_0x000107c28e00(lStack_e8);
        }
      }
    }
  }
  func_0x000107c28e20(&lStack_e8);
  return;
}



/* Entry: 108692f54; end: 108692f8b;  */

long FUN_108692f54(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a62e40);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108692f8c; end: 108692fef;  */

undefined ** FUN_108692f8c(void)

{
  return &PTR_DAT_110a62e40;
}



/* Entry: 108692ff0; end: 108693023;  */

void FUN_108692ff0(void)

{
  func_0x000108693008();
  return;
}



/* Entry: 108693024; end: 1086930af;  */

undefined1  [16] FUN_108693024(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x00010866f1f4(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1086930b0(alStack_50,param_1,param_3);
    FUN_10866f2bc(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
    alStack_50[0] = 0;
    func_0x00010866f308(alStack_50);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1086930b0; end: 108693107;  */

void FUN_1086930b0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x38;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2 + 8;
  param_1[2] = 0;
  func_0x000107c27994(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108693108; end: 10869318b;  */

void FUN_108693108(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  FUN_108848684(auStack_48);
  puVar1 = (undefined8 *)puVar2[2];
  while (puVar1 != puVar2 + 3) {
    (**(code **)(*(long *)*puVar2 + 0x40))((long *)*puVar2,puVar1 + 4,auStack_48);
    func_0x000107c27be0();
  }
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 10869318c; end: 1086931ab;  */

void FUN_10869318c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108691f8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086931ac; end: 1086931d7;  */

void FUN_1086931ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086931d8; end: 1086931f7;  */

void FUN_1086931d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108692130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086931f8; end: 108693223;  */

void FUN_1086931f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108693224; end: 108693243;  */

void FUN_108693224(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086922dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108693244; end: 1086934b7;  */

void FUN_108693244(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086934b8; end: 108693533;  */

long * FUN_1086934b8(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_38 [24];
  
  plVar3 = (long *)*param_1;
  func_0x000107c278b8(auStack_38,&UNK_10f4b08b6);
  uVar2 = 0;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  if ((uVar2 & 1) == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    plVar1 = (long *)0x0;
  }
  else {
    func_0x000108693698();
    plVar1 = plVar3;
    if (plVar3 != (long *)0x2) {
      plVar1 = (long *)0x0;
    }
    if (plVar3 == (long *)0x1) {
      plVar1 = (long *)0x1;
    }
  }
  return plVar1;
}



/* Entry: 108693534; end: 108693677;  */

void FUN_108693534(undefined1 *param_1,long *param_2,float *param_3,long param_4,ulong param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar3;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined1 uVar4;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar5;
  undefined1 extraout_w11;
  undefined1 uVar6;
  long lVar7;
  
  uVar1 = (uint)param_2;
  lVar7 = *param_2;
  if (lVar7 == 2) {
    FUN_108693678();
    func_0x000108691750();
    uVar2 = uVar1 & 0xffff;
    if ((param_6 & 1) == 0) {
      if ((uVar1 & 1) != 0) goto LAB_1086935f8;
    }
    else {
      if (*(char *)(param_3 + 2) == '\x01') {
        if (((uVar1 & 1) != 0) && (0xff < uVar2)) goto LAB_1086935f8;
      }
      else if ((uVar1 & 0xff01) != 0) goto LAB_1086935f8;
LAB_108693604:
      if ((uVar2 & 1) != 0) {
        func_0x000108693688();
        uVar3 = extraout_x8_01;
        uVar5 = extraout_x10_01;
        uVar6 = extraout_w11;
        uVar4 = extraout_w9_01;
        goto LAB_108693654;
      }
    }
    uVar6 = 0;
    lVar7 = *(long *)(param_4 + 0x18);
    if (*(char *)(param_4 + 0x20) == '\0') {
      lVar7 = 0;
    }
    uVar5 = (long)(*param_3 * 1000.0) + lVar7;
    uVar3 = 0;
    if (param_5 <= uVar5) {
      uVar3 = uVar5 - param_5;
    }
    uVar5 = uVar3 & 0xffffffffffffff00;
    uVar3 = uVar3 & 0xff;
    uVar4 = 1;
  }
  else {
    if (lVar7 == 1) {
      FUN_108693678();
      func_0x000108691750();
      func_0x000108693688();
      uVar6 = 0xff < (uVar1 & 0xffff);
      uVar3 = extraout_x8;
      uVar5 = extraout_x10;
      uVar4 = extraout_w9;
      goto LAB_108693654;
    }
    FUN_108693678();
    func_0x000108691750();
    uVar2 = (uint)(lVar7 != 0) & uVar1 & 0xffff;
    if ((lVar7 != 0) || ((uVar1 & 1) == 0)) goto LAB_108693604;
LAB_1086935f8:
    func_0x000108693688();
    uVar6 = 1;
    uVar3 = extraout_x8_00;
    uVar5 = extraout_x10_00;
    uVar4 = extraout_w9_00;
  }
LAB_108693654:
  *param_1 = uVar6;
  *(ulong *)(param_1 + 8) = uVar5 | uVar3;
  param_1[0x10] = uVar4;
  return;
}



/* Entry: 108693678; end: 1086936a3;  */

void FUN_108693678(void)

{
  return;
}



/* Entry: 1086936a4; end: 1086938d3;  */

undefined8 *
FUN_1086936a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
             long param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a62ea8;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_108694fc0();
    } while (extraout_w10 != 0);
  }
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_01 != 0);
  }
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_02 != 0);
  }
  lVar4 = param_6[1];
  uVar5 = *param_6;
  param_1[0xc] = param_6[1];
  param_1[0xb] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_03 != 0);
  }
  lVar4 = param_7[1];
  uVar5 = *param_7;
  param_1[0xe] = param_7[1];
  param_1[0xd] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_04 != 0);
  }
  *(undefined4 *)(param_1 + 0xf) = param_8;
  FUN_108848684(param_1 + 0x10);
  lVar4 = *(long *)(param_9 + 0x18);
  if (lVar4 != 0) {
    if (lVar4 == param_9) {
      param_1[0x16] = param_1 + 0x13;
      (**(code **)(**(long **)(param_9 + 0x18) + 0x18))(*(long **)(param_9 + 0x18),param_1 + 0x13);
      goto LAB_1086937e8;
    }
    func_0x0001086950f4();
    (*extraout_x8)();
  }
  param_1[0x16] = lVar4;
LAB_1086937e8:
  FUN_10869429c(param_1 + 0x17,1);
  uVar5 = *param_10;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_10 + 1);
  param_1[0x1a] = uVar5;
  lVar4 = param_11[1];
  uVar5 = *param_11;
  param_1[0x1d] = param_11[1];
  param_1[0x1c] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = param_12[1];
  uVar5 = *param_12;
  param_1[0x1f] = param_12[1];
  param_1[0x1e] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_05 != 0);
  }
  return param_1;
}



/* Entry: 1086938d4; end: 108693b97;  */

undefined *** FUN_1086938d4(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [40];
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  pppuVar5 = &ppuStack_120;
  pppuVar8 = &ppuStack_120;
  lVar9 = param_1;
  func_0x000108695028();
  uStack_58 = extraout_x8;
  FUN_108681b4c(lVar9 + 0xb8);
  lVar9 = *(long *)(param_1 + 0xf0);
  if (lVar9 != 0) {
    func_0x000107c29e04(&ppuStack_120,param_1 + 0x80);
    FUN_108697fa4(lVar9,&ppuStack_120);
    func_0x000108695080();
  }
  plVar10 = *(long **)(param_1 + 0x68);
  uStack_110 = 0;
  uStack_108 = 0;
  ppuStack_120 = &PTR_FUN_110a609a8;
  uStack_118 = 0;
  uStack_100 = 0x25e;
  func_0x000108695060();
  func_0x000107c28824(&ppuStack_120,auStack_d0,(&PTR_s_Unknown_110a62f20)[*(int *)(param_1 + 0x78)])
  ;
  func_0x000107c2884c(auStack_b8,pppuVar5);
  (**(code **)(*plVar10 + 0x50))(plVar10,auStack_b8);
  func_0x000107c2882c(auStack_b8);
  func_0x0001086950b8();
  func_0x000107c2882c(&ppuStack_120);
  lVar9 = *(long *)(param_1 + 0x48);
  uStack_118 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_120 = *(undefined ***)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10 != 0);
  }
  uStack_108 = *(undefined8 *)(param_1 + 0x10);
  uStack_110 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_00 != 0);
  }
  uStack_100 = *(undefined4 *)(param_1 + 0x78);
  puVar6 = &uStack_f8;
  func_0x000107c27994(puVar6,param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_d8 = *(undefined4 *)(param_1 + 0xd8);
  func_0x000107c28150();
  lVar11 = *(long *)(lVar9 + 0x10);
  __ZNSt3__15mutex4lockEv(lVar11 + 8);
  lVar12 = *(long *)(lVar11 + 0x70);
  pcStack_90 = FUN_10869435c;
  ppuStack_88 = &PTR_FUN_110a62f80;
  puVar7 = (undefined8 *)0x50;
  __Znwm();
  uVar3 = uStack_e8;
  uVar2 = uStack_118;
  ppuVar1 = ppuStack_120;
  ppuStack_120 = (undefined **)0x0;
  uStack_118 = 0;
  puVar7[1] = uVar2;
  *puVar7 = ppuVar1;
  puVar7[3] = uStack_108;
  puVar7[2] = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  *(undefined4 *)(puVar7 + 4) = uStack_100;
  puVar7[6] = uStack_f0;
  puVar7[5] = uStack_f8;
  *(undefined4 *)(puVar7 + 9) = uStack_d8;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  puVar7[7] = uVar3;
  puVar7[8] = uStack_e0;
  puStack_80 = puVar7;
  puStack_60 = puVar6;
  func_0x000107c28154(lVar11 + 0x48,&pcStack_90);
  func_0x000108695040();
  __ZNSt3__15mutex6unlockEv(lVar11 + 8);
  if (lVar12 == 0) {
    ppuStack_88 = *(undefined ***)(lVar9 + 0x18);
    pcStack_90 = *(code **)(lVar9 + 0x10);
    if (*(long *)(lVar9 + 0x18) != 0) {
      do {
        func_0x000108694fc4();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001086950f4();
    (*extraout_x8_00)();
    func_0x000107c27e74(&pcStack_90);
  }
  FUN_108693b98();
  func_0x000108694fd4(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&pcStack_90);
    FUN_108693b98(&ppuStack_120);
    func_0x000108695020();
    func_0x0001086950c0();
    func_0x00010868e558((undefined1 *)((long)pppuVar8 + 0x10));
    puVar4 = (undefined1 *)pppuVar8;
    func_0x0001005528ec();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined ***)(undefined1 *)pppuVar8;
  }
  return pppuVar8;
}



/* Entry: 108693b98; end: 108693bbf;  */

long FUN_108693b98(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086950c0();
  func_0x00010868e558(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108693bc0; end: 108693f6f;  */

code ** FUN_108693bc0(code *param_1,long *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  code **ppcVar9;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar10;
  code **ppcVar11;
  code *pcStack_1c0;
  undefined **ppuStack_1b8;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  long *plStack_1a0;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [40];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  long *plStack_c0;
  undefined8 uStack_68;
  
  ppcVar11 = &pcStack_1c0;
  ppcVar9 = &pcStack_1c0;
  func_0x000108695028();
  uVar7 = *param_2 == param_2[1];
  uStack_68 = extraout_x8;
  if (!(bool)uVar7) {
    bVar2 = *(byte *)(param_3 + 0x17);
    uVar7 = bVar2 == 0;
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(*(long **)(param_1 + 0x18),param_1 + 0x80);
      plVar10 = *(long **)(param_1 + 0x38);
      pcStack_1b0 = *(code **)(param_1 + 0x10);
      ppuStack_1b8 = *(undefined ***)(param_1 + 8);
      pcStack_1c0 = param_1;
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x000108694fc4();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27994(&ppuStack_1a8,param_2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_190,param_3);
      func_0x000107c2791c(auStack_178,param_4);
      lStack_148 = *(long *)(param_1 + 0x30);
      lStack_150 = *(long *)(param_1 + 0x28);
      if (*(long *)(param_1 + 0x30) != 0) {
        do {
          func_0x000108694fc4();
        } while (extraout_w10_00 != 0);
      }
      lStack_138 = *(long *)(param_1 + 0x60);
      lStack_140 = *(long *)(param_1 + 0x58);
      if (*(long *)(param_1 + 0x60) != 0) {
        do {
          func_0x000108694fc4();
        } while (extraout_w10_01 != 0);
      }
      uStack_130 = *(undefined4 *)(param_1 + 0x78);
      lStack_120 = *(long *)(param_1 + 0x70);
      lStack_128 = *(long *)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) != 0) {
        do {
          func_0x000108694fc4();
        } while (extraout_w10_02 != 0);
      }
      lStack_110 = *(long *)(param_1 + 0xc0);
      lStack_118 = *(long *)(param_1 + 0xb8);
      uStack_108 = param_1[200];
      lStack_f8 = *(long *)(param_1 + 0x20);
      lStack_100 = *(long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x20) != 0) {
        do {
          func_0x000108694fc4();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c27994(&lStack_f0,param_1 + 0x80);
      uStack_d8 = 0;
      pcStack_d0 = FUN_108694634;
      ppuStack_c8 = &PTR_FUN_110a63040;
      plVar8 = (long *)0xf0;
      __Znwm();
      plVar8[1] = (long)ppuStack_1b8;
      *plVar8 = (long)pcStack_1c0;
      plVar8[2] = (long)pcStack_1b0;
      *(undefined8 *)((ulong)&pcStack_1c0 | 8) = 0;
      ((undefined8 *)((ulong)&pcStack_1c0 | 8))[1] = 0;
      func_0x000107c27994(plVar8 + 3,&ppuStack_1a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (plVar8 + 6,auStack_190);
      func_0x000107c2791c(plVar8 + 9,auStack_178);
      lVar6 = lStack_f8;
      lVar5 = lStack_100;
      lVar4 = lStack_148;
      lVar3 = lStack_150;
      lStack_150 = 0;
      lStack_148 = 0;
      plVar8[0xf] = lVar4;
      plVar8[0xe] = lVar3;
      plVar8[0x11] = lStack_138;
      plVar8[0x10] = lStack_140;
      lStack_140 = 0;
      lStack_138 = 0;
      *(undefined4 *)(plVar8 + 0x12) = uStack_130;
      plVar8[0x14] = lStack_120;
      plVar8[0x13] = lStack_128;
      lStack_128 = 0;
      lStack_120 = 0;
      plVar8[0x16] = lStack_110;
      plVar8[0x15] = lStack_118;
      plVar8[0x17] = CONCAT71(uStack_107,uStack_108);
      lStack_100 = 0;
      lStack_f8 = 0;
      plVar8[0x19] = lVar6;
      plVar8[0x18] = lVar5;
      plVar8[0x1b] = lStack_e8;
      plVar8[0x1a] = lStack_f0;
      plVar8[0x1c] = lStack_e0;
      lStack_f0 = 0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      *(undefined1 *)(plVar8 + 0x1d) = uStack_d8;
      plStack_c0 = plVar8;
      func_0x0001086950a0(*(undefined8 *)(*plVar10 + 0x10));
      func_0x000108695088();
      FUN_108693f70();
      goto LAB_108693e6c;
    }
  }
  plVar10 = *(long **)(param_1 + 0x38);
  ppcVar11 = (code **)((ulong)&pcStack_d0 | 8);
  pcStack_d0 = param_1;
  FUN_10869446c(ppcVar11,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  pcStack_1c0 = FUN_1086944a8;
  ppuStack_1b8 = &PTR_FUN_110a62f98;
  ppuStack_1a8 = ppuStack_c8;
  pcStack_1b0 = pcStack_d0;
  plStack_1a0 = plStack_c0;
  *ppcVar11 = (code *)0x0;
  ppcVar11[1] = (code *)0x0;
  func_0x0001086950a0(*(undefined8 *)(*plVar10 + 0x10));
  func_0x00010869500c(ppuStack_1b8);
  FUN_10868cd80();
LAB_108693e6c:
  func_0x000108694fd4(uStack_68);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x000108695088();
    FUN_108693f70(&pcStack_1c0);
    func_0x000108695020();
    func_0x000107c27914(ppcVar9 + 0x1a);
    func_0x000107c28700(ppcVar9 + 0x18);
    func_0x000107c288a4(ppcVar9 + 0x13);
    func_0x000107c28800(ppcVar9 + 0x10);
    func_0x000107c288e8(ppcVar9 + 0xe);
    func_0x000107c278e0(ppcVar9 + 9);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppcVar9 + 6);
    func_0x000107c27914(ppcVar9 + 3);
    func_0x00010868e558(ppcVar9 + 1);
    return ppcVar9;
  }
  return ppcVar11;
}



/* Entry: 108693f70; end: 108693fd3;  */

long FUN_108693f70(long param_1)

{
  func_0x000107c27914(param_1 + 0xd0);
  func_0x000107c28700(param_1 + 0xc0);
  func_0x000107c288a4(param_1 + 0x98);
  func_0x000107c28800(param_1 + 0x80);
  func_0x000107c288e8(param_1 + 0x70);
  func_0x000107c278e0(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  func_0x000107c27914(param_1 + 0x18);
  func_0x00010868e558(param_1 + 8);
  return param_1;
}



/* Entry: 108693fd4; end: 1086940a3;  */

void FUN_108693fd4(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined8 extraout_x8;
  long *plVar4;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [40];
  undefined8 *puStack_148;
  undefined1 auStack_140 [24];
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_38;
  
  func_0x000108695028();
  plVar4 = *(long **)(param_1 + 0x38);
  uStack_38 = extraout_x8;
  FUN_10869446c(&uStack_a8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  pcStack_98 = FUN_108694ea4;
  ppuStack_90 = &PTR_FUN_110a63058;
  uStack_70 = uStack_a0;
  uStack_78 = uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_88 = param_1;
  uStack_80 = param_2;
  func_0x0001086950a0(*(undefined8 *)(*plVar4 + 0x10));
  func_0x00010869500c(ppuStack_90);
  FUN_10868cd80();
  func_0x000108694fd4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010869500c(ppuStack_90);
  puVar1 = &uStack_a8;
  FUN_10868cd80();
  func_0x000108695020();
  plVar4 = (long *)puVar1[0xd];
  uStack_118 = 0;
  uStack_110 = 0;
  ppuStack_128 = &PTR_FUN_110a609a8;
  uStack_120 = 0;
  uStack_108 = 0x260;
  func_0x000108695060();
  func_0x000107c28824(&ppuStack_128,auStack_140,(&PTR_s_Unknown_110a62f20)[*(int *)(puVar1 + 0xf)]);
  FUN_1086941f4();
  puVar2 = puVar1 + 0x17;
  func_0x000107c2825c();
  puStack_148 = puVar2;
  func_0x0001086950d4(*(undefined8 *)(*plVar4 + 0x18));
  func_0x0001086950b8();
  func_0x0001086950b0();
  plVar4 = (long *)puVar1[0xd];
  uStack_118 = 0;
  uStack_110 = 0;
  ppuStack_128 = &PTR_FUN_110a609a8;
  uStack_120 = 0;
  uStack_108 = 0x25f;
  func_0x000108695070();
  pppuVar3 = &ppuStack_128;
  func_0x000107c28824(pppuVar3,auStack_188,(&PTR_s_Unknown_110a62f20)[*(int *)(puVar1 + 0xf)]);
  FUN_1086941f4();
  func_0x000107c2884c(auStack_170,pppuVar3);
  (**(code **)(*plVar4 + 0x50))(plVar4,auStack_170);
  func_0x000107c2882c(auStack_170);
  func_0x000108695018();
  func_0x0001086950b0();
  return;
}



/* Entry: 1086940a4; end: 1086941f3;  */

void FUN_1086940a4(long param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [40];
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar3 = *(long **)(param_1 + 0x68);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110a609a8;
  uStack_60 = 0;
  uStack_48 = 0x260;
  func_0x000108695060();
  func_0x000107c28824(&ppuStack_68,auStack_80,(&PTR_s_Unknown_110a62f20)[*(int *)(param_1 + 0x78)]);
  FUN_1086941f4();
  lVar1 = param_1 + 0xb8;
  func_0x000107c2825c();
  lStack_88 = lVar1;
  func_0x0001086950d4(*(undefined8 *)(*plVar3 + 0x18));
  func_0x0001086950b8();
  func_0x0001086950b0();
  plVar3 = *(long **)(param_1 + 0x68);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110a609a8;
  uStack_60 = 0;
  uStack_48 = 0x25f;
  func_0x000108695070();
  pppuVar2 = &ppuStack_68;
  func_0x000107c28824(pppuVar2,auStack_c8,(&PTR_s_Unknown_110a62f20)[*(int *)(param_1 + 0x78)]);
  FUN_1086941f4();
  func_0x000107c2884c(auStack_b0,pppuVar2);
  (**(code **)(*plVar3 + 0x50))(plVar3,auStack_b0);
  func_0x000107c2882c(auStack_b0);
  func_0x000108695018();
  func_0x0001086950b0();
  return;
}



/* Entry: 1086941f4; end: 10869425b;  */

undefined8 FUN_1086941f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268e38);
  func_0x000107c28824(param_1,auStack_38,(&PTR_s_success_113269028)[(uint)param_2 & 0x1d7]);
  func_0x000108695000();
  return param_2;
}



/* Entry: 10869425c; end: 108694283;  */

long FUN_10869425c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086950c0();
  func_0x000107c27914(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108694284; end: 108694287;  */

undefined8 * FUN_108694284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a62ea8;
  func_0x000107c28d38(param_1 + 0x1e);
  func_0x000107c28d34(param_1 + 0x1c);
  FUN_10868e450(param_1 + 0x13);
  func_0x000107c27914(param_1 + 0x10);
  func_0x000107c288a4(param_1 + 0xd);
  func_0x000107c28800(param_1 + 0xb);
  func_0x000107c2814c(param_1 + 9);
  func_0x000107c27c20(param_1 + 7);
  func_0x000107c288e8(param_1 + 5);
  func_0x000107c28700(param_1 + 3);
  func_0x00010868e558(param_1 + 1);
  return param_1;
}



/* Entry: 108694288; end: 10869429b;  */

void FUN_108694288(void)

{
  func_0x0001086942d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10869429c; end: 10869435b;  */

undefined8 * FUN_10869429c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 == 1) {
    puVar1 = param_1;
    func_0x000107c28258();
    param_1[1] = puVar1;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 10869435c; end: 108694407;  */

void FUN_10869435c(long param_1)

{
  code *extraout_x8;
  int extraout_w10;
  undefined8 *puVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  FUN_108694408(&lStack_30,puVar1 + 2);
  if (lStack_30 != 0) {
    lStack_40 = lStack_30;
    lStack_38 = lStack_28;
    if (lStack_28 != 0) {
      do {
        FUN_108694fc0();
      } while (extraout_w10 != 0);
    }
    func_0x0001086950f4();
    (*extraout_x8)();
    FUN_10861a39c(&lStack_40);
    (**(code **)(*(long *)*puVar1 + 0x18))((long *)*puVar1,puVar1 + 5,*(undefined4 *)(puVar1 + 4));
  }
  FUN_10868cd80(&lStack_30);
  return;
}



/* Entry: 108694408; end: 108694447;  */

void FUN_108694408(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108694448; end: 108694467;  */

void FUN_108694448(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108693b98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108694468; end: 10869446b;  */

void FUN_108694468(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10869446c; end: 1086944a7;  */

undefined8 * FUN_10869446c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_78 [48];
  undefined1 uStack_48;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  lVar2 = puVar1[2];
  func_0x0001086950cc(lVar2,0x1d4);
  FUN_108694544(*(undefined8 *)(lVar2 + 0xe0),lVar2 + 0x80,*(undefined4 *)(lVar2 + 0x78),2);
  lVar3 = *(long *)(lVar2 + 0xf0);
  if (lVar3 != 0) {
    func_0x000107c29e04(auStack_78,lVar2 + 0x80);
    FUN_1086980d0(lVar3,auStack_78,5);
    func_0x000108695018();
  }
  auStack_78[0] = 0;
  uStack_48 = 0;
  puVar1 = *(undefined8 **)(lVar2 + 0xb0);
  FUN_1086945d4(puVar1,0x100000001,auStack_78);
  func_0x000108695098();
  return puVar1;
}



/* Entry: 1086944a8; end: 108694543;  */

void FUN_1086944a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [48];
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001086950cc(lVar1,0x1d4);
  FUN_108694544(*(undefined8 *)(lVar1 + 0xe0),lVar1 + 0x80,*(undefined4 *)(lVar1 + 0x78),2);
  lVar2 = *(long *)(lVar1 + 0xf0);
  if (lVar2 != 0) {
    func_0x000107c29e04(auStack_58,lVar1 + 0x80);
    FUN_1086980d0(lVar2,auStack_58,5);
    func_0x000108695018();
  }
  auStack_58[0] = 0;
  uStack_28 = 0;
  FUN_1086945d4(*(undefined8 *)(lVar1 + 0xb0),0x100000001,auStack_58);
  func_0x000108695098();
  return;
}



/* Entry: 108694544; end: 1086945d3;  */

void FUN_108694544(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_88 [24];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  
  if (param_1 != (long *)0x0) {
    func_0x000107c29e04(auStack_88,param_2);
    uStack_6c = 0;
    uStack_70 = param_4;
    uStack_68 = param_3;
    func_0x000108696a68();
    uStack_64 = 1;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x0001086950a0(*(undefined8 *)(*param_1 + 0x20));
    func_0x000108695018();
  }
  return;
}



/* Entry: 1086945d4; end: 108694607;  */

void FUN_1086945d4(long *param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
    return;
  }
  func_0x000104bfeb48();
  param_1 = param_1 + 2;
  func_0x000107c32348();
  if (param_1 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108694608; end: 108694633;  */

void FUN_108694608(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c32348();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108694634; end: 108694877;  */

undefined8 * FUN_108694634(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000108695028();
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  uVar5 = *puVar8;
  uStack_c8 = puVar8[0x11];
  uStack_d0 = puVar8[0x10];
  uStack_48 = extraout_x8;
  if (puVar8[0x11] != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10 != 0);
  }
  uStack_b8 = puVar8[0x14];
  uStack_c0 = puVar8[0x13];
  if (puVar8[0x14] != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_00 != 0);
  }
  uStack_b0 = *(undefined4 *)(puVar8 + 0x12);
  uStack_a0 = puVar8[0x16];
  uStack_a8 = puVar8[0x15];
  uStack_98 = *(undefined1 *)(puVar8 + 0x17);
  func_0x000107c27994(auStack_90,puVar8 + 0x1a);
  puVar4 = puVar8 + 1;
  uStack_70 = puVar8[2];
  uStack_78 = *puVar4;
  if (puVar8[2] != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_01 != 0);
  }
  FUN_108694408(alStack_e0);
  if (alStack_e0[0] != 0) {
    func_0x0001086950cc(uVar5,0x1d2);
    lVar6 = *(long *)(alStack_e0[0] + 0xf0);
    if (lVar6 != 0) {
      func_0x000107c29e04(&uStack_150,puVar8 + 0x1a);
      FUN_10869801c(lVar6,&uStack_150);
      func_0x000108695080();
    }
    plVar7 = (long *)puVar8[0xe];
    uVar1 = *(undefined4 *)(puVar8 + 0x12);
    uVar2 = *(undefined1 *)(puVar8 + 0x1d);
    FUN_108694878(&uStack_150,&uStack_d0);
    puStack_50 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x70;
    __Znwm();
    puVar3[2] = uStack_148;
    puVar3[1] = uStack_150;
    *puVar3 = &PTR_SUB_110a62fc0;
    uStack_150 = 0;
    uStack_148 = 0;
    puVar3[4] = uStack_138;
    puVar3[3] = uStack_140;
    uStack_140 = 0;
    uStack_138 = 0;
    puVar3[6] = CONCAT71(uStack_127,uStack_128);
    puVar3[5] = uStack_130;
    *(undefined8 *)((long)puVar3 + 0x39) = uStack_11f;
    *(ulong *)((long)puVar3 + 0x31) = CONCAT17(uStack_120,uStack_127);
    puVar3[10] = uStack_108;
    puVar3[9] = uStack_110;
    puVar3[0xb] = uStack_100;
    uStack_110 = 0;
    uStack_108 = 0;
    puVar3[0xd] = uStack_f0;
    puVar3[0xc] = uStack_f8;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    puVar4 = puVar8 + 3;
    puStack_50 = puVar3;
    (**(code **)(*plVar7 + 0xc0))
              (plVar7,puVar4,puVar8 + 6,puVar8 + 9,uVar1,puVar8 + 0x1a,uVar2,auStack_68);
    func_0x000108694e3c(auStack_68);
    FUN_108694934(&uStack_150);
  }
  FUN_10868cd80(alStack_e0);
  puVar8 = &uStack_d0;
  FUN_108694934();
  func_0x000108694fd4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108695080();
    FUN_10868cd80(alStack_e0);
    puVar8 = &uStack_d0;
    FUN_108694934();
    func_0x000108695020();
    lVar6 = puVar4[1];
    uVar5 = *puVar4;
    puVar8[1] = puVar4[1];
    *puVar8 = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x000108694fc4();
      } while (extraout_w10_02 != 0);
    }
    lVar6 = puVar4[3];
    uVar5 = puVar4[2];
    puVar8[3] = puVar4[3];
    puVar8[2] = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x000108694fc4();
      } while (extraout_w10_03 != 0);
    }
    uVar9 = puVar4[5];
    uVar5 = puVar4[4];
    uVar10 = *(undefined8 *)((long)puVar4 + 0x29);
    *(undefined8 *)((long)puVar8 + 0x31) = *(undefined8 *)((long)puVar4 + 0x31);
    *(undefined8 *)((long)puVar8 + 0x29) = uVar10;
    puVar8[5] = uVar9;
    puVar8[4] = uVar5;
    func_0x000107c27994(puVar8 + 8,puVar4 + 8);
    lVar6 = puVar4[0xc];
    uVar5 = puVar4[0xb];
    puVar8[0xc] = puVar4[0xc];
    puVar8[0xb] = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x000108694fc4();
      } while (extraout_w10_04 != 0);
    }
    return puVar8;
  }
  return puVar8;
}



/* Entry: 108694878; end: 108694933;  */

undefined8 * FUN_108694878(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108694fc0();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_00 != 0);
  }
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  uVar4 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  func_0x000107c27994(param_1 + 8,param_2 + 8);
  lVar1 = param_2[0xc];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108694fc4();
    } while (extraout_w10_01 != 0);
  }
  return param_1;
}



/* Entry: 108694934; end: 10869498b;  */

long FUN_108694934(long param_1)

{
  func_0x00010868e558(param_1 + 0x58);
  func_0x000107c27914(param_1 + 0x40);
  func_0x000107c288a4(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10869498c; end: 10869499f;  */

void FUN_10869498c(void)

{
  func_0x00010869496c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086949a0; end: 1086949e3;  */

undefined8 FUN_1086949a0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_108694e1c();
  return uVar1;
}



/* Entry: 1086949e4; end: 108694a0f;  */

void FUN_1086949e4(long param_1,undefined8 param_2)

{
  func_0x0001086950e0(param_2,param_1 + 8);
  FUN_108694878();
  return;
}



/* Entry: 108694a10; end: 108694dd7;  */

long * FUN_108694a10(long param_1,ulong *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_138 [24];
  long alStack_120 [2];
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  
  func_0x000108695028();
  uVar5 = *param_2;
  pppuVar4 = (undefined ***)(param_1 + 0x60);
  uStack_70 = extraout_x8;
  FUN_108694408(alStack_120);
  lVar8 = alStack_120[0];
  if (alStack_120[0] == 0) goto LAB_108694ccc;
  if ((uVar5 >> 0x20 & 1) == 0) {
    in_ZR = *(char *)(param_3 + 0x260) == '\x01';
    if (!(bool)in_ZR) {
      ppuStack_110 = (undefined **)((ulong)ppuStack_110._1_7_ << 8);
      lStack_e0 = (ulong)lStack_e0._1_7_ << 8;
      FUN_1086945d4(*(undefined8 *)(alStack_120[0] + 0xb0),0,&ppuStack_110);
      goto LAB_108694bd4;
    }
    func_0x000107c27994(&uStack_d0,param_3 + 0x20);
    lVar7 = *(long *)(lVar8 + 0x48);
    uStack_108 = *(undefined8 *)(lVar8 + 0x20);
    ppuStack_110 = *(undefined ***)(lVar8 + 0x18);
    if (*(long *)(lVar8 + 0x20) != 0) {
      do {
        func_0x000108694fc4();
      } while (extraout_w10 != 0);
    }
    puVar1 = &uStack_100;
    func_0x000107c27994(puVar1,param_1 + 0x48);
    lStack_e0 = uStack_c8;
    uStack_e8 = uStack_d0;
    uStack_d8 = uStack_c0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    func_0x000107c28150();
    lVar8 = *(long *)(lVar7 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar8 + 8);
    lVar9 = *(long *)(lVar8 + 0x70);
    ppuStack_b0 = (undefined **)0x108694f88;
    ppuStack_a8 = &PTR_FUN_110a63070;
    puVar2 = (undefined8 *)0x40;
    __Znwm();
    puVar2[1] = uStack_108;
    *puVar2 = ppuStack_110;
    ppuStack_110 = (undefined **)0x0;
    uStack_108 = 0;
    func_0x000107c27994(puVar2 + 2,&uStack_100);
    puVar2[6] = lStack_e0;
    puVar2[5] = uStack_e8;
    puVar2[7] = uStack_d8;
    lStack_e0 = 0;
    uStack_d8 = 0;
    uStack_e8 = 0;
    puStack_a0 = puVar2;
    puStack_80 = puVar1;
    func_0x000107c28154(lVar8 + 0x48,&ppuStack_b0);
    func_0x000108695050();
    __ZNSt3__15mutex6unlockEv(lVar8 + 8);
    if (lVar9 == 0) {
      ppuStack_a8 = *(undefined ***)(lVar7 + 0x18);
      ppuStack_b0 = *(undefined ***)(lVar7 + 0x10);
      if (*(long *)(lVar7 + 0x18) != 0) {
        do {
          func_0x000108694fc4();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001086950f4();
      (*extraout_x8_00)();
      func_0x000107c27e74(&ppuStack_b0);
    }
    FUN_10869425c(&ppuStack_110);
    func_0x000107c27914(&uStack_d0);
    FUN_1086945d4(*(undefined8 *)(alStack_120[0] + 0xb0),0,param_3 + 0x130);
  }
  else {
    ppuStack_110 = (undefined **)((ulong)ppuStack_110._1_7_ << 8);
    lStack_e0 = (ulong)lStack_e0._1_7_ << 8;
    FUN_1086945d4(*(undefined8 *)(alStack_120[0] + 0xb0),uVar5,&ppuStack_110);
LAB_108694bd4:
    func_0x000107c28d20(&ppuStack_110);
  }
  plVar6 = *(long **)(param_1 + 0x18);
  uStack_100 = 0;
  uStack_f8 = 0;
  ppuStack_110 = &PTR_FUN_110a609a8;
  uStack_108 = 0;
  uStack_f0 = 0x263;
  func_0x000107c278b8(&uStack_d0,&DAT_10f4b05df);
  func_0x000107c28824(&ppuStack_110,&uStack_d0,(&PTR_s_Unknown_110a62f20)[*(int *)(param_1 + 0x28)])
  ;
  func_0x0001006a5684();
  ppuVar3 = (undefined **)(param_1 + 0x30);
  func_0x000107c2825c();
  ppuStack_b0 = ppuVar3;
  func_0x0001086950d4(*(undefined8 *)(*plVar6 + 0x18));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
  func_0x0001086950a8();
  plVar6 = *(long **)(param_1 + 0x18);
  puStack_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_110a609a8;
  ppuStack_a8 = (undefined **)0x0;
  uStack_90 = 0x264;
  func_0x000108695070();
  pppuVar4 = &ppuStack_b0;
  func_0x000107c28824(pppuVar4,auStack_138,(&PTR_s_Unknown_110a62f20)[*(int *)(param_1 + 0x28)]);
  func_0x0001006a5684();
  func_0x000107c2884c(&ppuStack_110,pppuVar4);
  pppuVar4 = &ppuStack_110;
  (**(code **)(*plVar6 + 0x50))(plVar6);
  func_0x0001086950a8();
  func_0x000108695018();
  func_0x000107c2882c(&ppuStack_b0);
LAB_108694ccc:
  plVar6 = alStack_120;
  FUN_10868cd80();
  func_0x000108694fd4(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27e74(&ppuStack_b0);
    FUN_10869425c(&ppuStack_110);
    func_0x000107c27914(&uStack_d0);
    plVar6 = alStack_120;
    FUN_10868cd80(plVar6);
    func_0x000108695020();
    func_0x000107c27934(pppuVar4,&PTR_DAT_110a63030);
    plVar6 = plVar6 + 1;
    if ((int)pppuVar4 == 0) {
      plVar6 = (long *)0x0;
    }
    return plVar6;
  }
  return plVar6;
}



/* Entry: 108694dd8; end: 108694e0f;  */

long FUN_108694dd8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a63030);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108694e10; end: 108694e1b;  */

undefined ** FUN_108694e10(void)

{
  return &PTR_DAT_110a63030;
}



/* Entry: 108694e1c; end: 108694e7f;  */

void FUN_108694e1c(void)

{
  func_0x0001086950e0();
  FUN_108694878();
  return;
}



/* Entry: 108694e80; end: 108694e9f;  */

void FUN_108694e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108693f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108694ea0; end: 108694ea3;  */

void FUN_108694ea0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108694ea4; end: 108694f53;  */

void FUN_108694ea4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [48];
  undefined1 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001086950cc(lVar1,0x1d3);
  FUN_108694544(*(undefined8 *)(lVar1 + 0xe0),lVar1 + 0x80,*(undefined4 *)(lVar1 + 0x78),1);
  lVar2 = *(long *)(lVar1 + 0xf0);
  if (lVar2 != 0) {
    func_0x000107c29e04(auStack_68,lVar1 + 0x80);
    FUN_1086980d0(lVar2,auStack_68,5);
    func_0x000108695018();
  }
  auStack_68[0] = 0;
  uStack_38 = 0;
  FUN_1086945d4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0),
                (ulong)*(uint *)(param_1 + 0x18) | 0x100000000,auStack_68);
  func_0x000108695098();
  return;
}



/* Entry: 108694f54; end: 108694f9f;  */

void FUN_108694f54(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x000107c32348();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108694fa0; end: 108694fbf;  */

void FUN_108694fa0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10869425c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108694fc0; end: 1086950ff;  */

void FUN_108694fc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108695100; end: 1086953ab;  */

undefined8 *
FUN_108695100(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
             long *param_9,undefined8 param_10,undefined8 *param_11,undefined8 *param_12)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  byte bVar6;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  long *plVar5;
  
  param_1[1] = &PTR_FUN_110a63110;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_DAT_110a63098;
  lVar7 = param_2[1];
  uVar8 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  lVar7 = param_3[1];
  uVar8 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_00 != 0);
  }
  lVar7 = param_4[1];
  uVar8 = *param_4;
  param_1[0xb] = param_4[1];
  param_1[10] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_01 != 0);
  }
  lVar7 = param_5[1];
  uVar8 = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xc] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_02 != 0);
  }
  lVar7 = param_6[1];
  uVar8 = *param_6;
  param_1[0xf] = param_6[1];
  param_1[0xe] = uVar8;
  if (lVar7 != 0) {
    plVar4 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar7 = param_8[1];
  uVar8 = *param_8;
  param_1[0x13] = param_8[1];
  param_1[0x12] = uVar8;
  if (lVar7 != 0) {
    plVar4 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = param_11[1];
  uVar8 = *param_11;
  param_1[0x15] = param_11[1];
  param_1[0x14] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_03 != 0);
  }
  plVar4 = param_9;
  func_0x000107c28dfc();
  *(char *)(param_1 + 0x16) = (char)plVar4;
  plVar4 = param_9;
  func_0x000107c28cd4();
  *(char *)((long)param_1 + 0xb1) = (char)plVar4;
  plVar4 = param_9;
  func_0x000107c28d98();
  *(char *)((long)param_1 + 0xb2) = (char)plVar4;
  plVar4 = param_9;
  FUN_1086934b8();
  plVar5 = param_9;
  func_0x000107c28cd4();
  uVar3 = SUB81(plVar5,0);
  if (plVar4 == (long *)0x1) {
    uVar3 = 1;
  }
  else if (plVar4 != (long *)0x2) {
    uVar3 = 0;
  }
  *(undefined1 *)((long)param_1 + 0xb3) = uVar3;
  param_9 = (long *)*param_9;
  func_0x000107c278b8(auStack_78,&UNK_10f4b04d7);
  bVar6 = (byte)auStack_78;
  (**(code **)(*param_9 + 0x18))();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  *(byte *)((long)param_1 + 0xb4) = bVar6 & 0 < (long)param_9;
  FUN_108690c14();
  param_1[0x17] = param_10;
  lVar7 = param_12[1];
  uVar8 = *param_12;
  param_1[0x19] = param_12[1];
  param_1[0x18] = uVar8;
  if (lVar7 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_04 != 0);
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



/* Entry: 1086953ac; end: 1086953d3;  */

void FUN_1086953ac(long param_1)

{
  code *extraout_x8;
  
  func_0x000108696720(*(undefined8 *)(param_1 + 0xc0));
  (*extraout_x8)();
  return;
}



/* Entry: 1086953d4; end: 1086953e3;  */

void FUN_1086953d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086953e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x38))();
  return;
}



/* Entry: 1086953e4; end: 10869557b;  */

undefined1 * FUN_1086953e4(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar4;
  long unaff_x20;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_118 [24];
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
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  func_0x0001086966f4();
  plVar4 = *(long **)(param_1 + 0x30);
  uStack_48 = extraout_x8;
  func_0x000107c27994(auStack_118);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x50);
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_00 != 0);
  }
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_01 != 0);
  }
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x60);
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_02 != 0);
  }
  uStack_b8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xc0);
  if (*(long *)(unaff_x20 + 200) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_03 != 0);
  }
  uStack_b0 = *(undefined1 *)(unaff_x20 + 0xb0);
  pcStack_a8 = FUN_108696058;
  ppuStack_a0 = &PTR_FUN_110a632c0;
  lVar1 = 0x70;
  __Znwm();
  func_0x000107c27994();
  *(undefined8 *)(lVar1 + 0x20) = uStack_f8;
  *(undefined8 *)(lVar1 + 0x18) = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  *(undefined8 *)(lVar1 + 0x30) = uStack_e8;
  *(undefined8 *)(lVar1 + 0x28) = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined8 *)(lVar1 + 0x40) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x38) = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined8 *)(lVar1 + 0x50) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x48) = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(lVar1 + 0x60) = uStack_b8;
  *(undefined8 *)(lVar1 + 0x58) = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined1 *)(lVar1 + 0x68) = uStack_b0;
  lStack_98 = lVar1;
  func_0x000108696890(*(undefined8 *)(*plVar4 + 0x10));
  func_0x0001086968a8();
  puVar2 = auStack_118;
  FUN_10869557c();
  func_0x0001086966c0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086968a8();
    puVar3 = auStack_118;
    FUN_10869557c();
    func_0x00010869680c();
    pcStack_128 = FUN_10869557c;
    lStack_140 = lVar1;
    puStack_138 = puVar2;
    puStack_130 = &stack0xfffffffffffffff0;
    FUN_108695f64(puVar3 + 0x58);
    func_0x000107c28ab4(puVar3 + 0x48);
    func_0x000107c288a4(puVar3 + 0x38);
    func_0x000107c28800(puVar3 + 0x28);
    func_0x000107c28808(puVar3 + 0x18);
    puStack_148 = puVar3;
    func_0x000100100fd4(&puStack_148);
    return puVar3;
  }
  return puVar2;
}



/* Entry: 10869557c; end: 1086955c3;  */

long FUN_10869557c(long param_1)

{
  long lStack_28;
  
  FUN_108695f64(param_1 + 0x58);
  func_0x000107c28ab4(param_1 + 0x48);
  func_0x000107c288a4(param_1 + 0x38);
  func_0x000107c28800(param_1 + 0x28);
  func_0x000107c28808(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086955c4; end: 108695763;  */

undefined1 * FUN_1086955c4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar8;
  long unaff_x20;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [24];
  undefined4 uStack_108;
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
  undefined1 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined8 uStack_48;
  
  puVar6 = auStack_120;
  puVar7 = auStack_120;
  func_0x0001086966f4();
  plVar8 = *(long **)(param_1 + 0x30);
  uStack_48 = extraout_x8;
  func_0x000107c27994(auStack_120);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_108 = param_3;
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_00 != 0);
  }
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_01 != 0);
  }
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x60);
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_02 != 0);
  }
  uStack_b8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xc0);
  if (*(long *)(unaff_x20 + 200) != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10_03 != 0);
  }
  uStack_b0 = *(undefined1 *)(unaff_x20 + 0xb0);
  pcStack_a8 = FUN_1086962d8;
  ppuStack_a0 = &PTR_FUN_110a632d8;
  lVar5 = 0x78;
  __Znwm();
  func_0x000107c27994();
  uVar4 = uStack_d8;
  uVar3 = uStack_e0;
  uVar2 = uStack_f8;
  uVar1 = uStack_100;
  *(undefined4 *)(lVar5 + 0x18) = uStack_108;
  uStack_100 = 0;
  uStack_f8 = 0;
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar1;
  *(undefined8 *)(lVar5 + 0x38) = uStack_e8;
  *(undefined8 *)(lVar5 + 0x30) = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined8 *)(lVar5 + 0x48) = uVar4;
  *(undefined8 *)(lVar5 + 0x40) = uVar3;
  *(undefined8 *)(lVar5 + 0x58) = uStack_c8;
  *(undefined8 *)(lVar5 + 0x50) = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(lVar5 + 0x68) = uStack_b8;
  *(undefined8 *)(lVar5 + 0x60) = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  *(undefined1 *)(lVar5 + 0x70) = uStack_b0;
  lStack_98 = lVar5;
  func_0x000108696890(*(undefined8 *)(*plVar8 + 0x10));
  func_0x0001086968b8();
  FUN_108695764();
  func_0x0001086966c0(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086968b8();
    FUN_108695764();
    func_0x00010869680c();
    pcStack_128 = FUN_108695764;
    lStack_140 = lVar5;
    puStack_138 = puVar6;
    puStack_130 = &stack0xfffffffffffffff0;
    FUN_108695f64(puVar7 + 0x60);
    func_0x000107c28ab4(puVar7 + 0x50);
    func_0x000107c288a4(puVar7 + 0x40);
    func_0x000107c28800(puVar7 + 0x30);
    func_0x000107c28808(puVar7 + 0x20);
    puStack_148 = puVar7;
    func_0x000100100fd4(&puStack_148);
    return puVar7;
  }
  return puVar6;
}



/* Entry: 108695764; end: 1086957ab;  */

long FUN_108695764(long param_1)

{
  long lStack_28;
  
  FUN_108695f64(param_1 + 0x60);
  func_0x000107c28ab4(param_1 + 0x50);
  func_0x000107c288a4(param_1 + 0x40);
  func_0x000107c28800(param_1 + 0x30);
  func_0x000107c28808(param_1 + 0x20);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1086957ac; end: 108695bbf;  */

code ** FUN_1086957ac(code **param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  code *pcVar4;
  code **ppcVar5;
  long *plVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long *plVar7;
  int extraout_w10;
  int extraout_w10_00;
  code **unaff_x19;
  code *pcVar8;
  long lVar9;
  code *unaff_x21;
  long lVar10;
  undefined **ppuVar11;
  code *apcStack_7c0 [77];
  byte bStack_558;
  code *pcStack_550;
  undefined **ppuStack_548;
  code *pcStack_540;
  long lStack_538;
  long lStack_530;
  byte bStack_2e8;
  code *pcStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  long *plStack_2b0;
  long lStack_298;
  code **ppcStack_290;
  code *pcStack_280;
  char cStack_278;
  undefined1 auStack_250 [520];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 == 0) && (unaff_x19 = param_1, ((ulong)param_1[0x1a] & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    if ((*(byte *)((long)param_1 + 0xb3) & 1) == 0) {
      (**(code **)(*(long *)param_1[0x18] + 0x50))(param_1[0x18],9);
    }
    if ((((*(byte *)((long)param_1 + 0xb1) & 1) != 0) ||
        ((*(byte *)((long)param_1 + 0xb2) & 1) != 0)) ||
       (in_ZR = 0, *(char *)((long)param_1 + 0xb3) == '\x01')) {
      func_0x000107c28dc4(&pcStack_2c0,param_1 + 10);
      pcStack_2c0 = pcStack_2c0 + 1;
      pcVar4 = param_1[8];
      func_0x000108696720();
      (*extraout_x8)();
      lVar9 = lStack_298;
      if (cStack_278 == '\x01') {
        uVar1 = (long)param_1[0x17] * 60000;
        if ((long)param_1[0x17] < 1) {
          uVar1 = 86400000;
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uint)((ulong)pcVar4 / uVar1);
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uint)((ulong)pcStack_280 / uVar1);
        }
        lVar9 = 1;
        if (uVar2 <= uVar3) {
          lVar9 = lStack_298 + 1;
        }
      }
      lStack_298 = lVar9;
      cStack_278 = '\x01';
      pcStack_280 = pcVar4;
      FUN_10886d1b4(param_1[10],&pcStack_2c0);
      func_0x000107c28d20(auStack_250);
      in_ZR = *(char *)((long)param_1 + 0xb3) == '\x01';
      if ((bool)in_ZR) {
        (**(code **)(*(long *)param_1[0x18] + 0x50))(param_1[0x18],9);
      }
    }
    pcVar8 = param_1[10];
    pcVar4 = param_1[8];
    func_0x000108696720(pcVar4);
    (*extraout_x8_00)();
    FUN_10886d394(pcVar8,pcVar4);
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    pcStack_2d8 = (code *)&lStack_2d0;
    func_0x000107c2a054(&pcStack_2c0,param_1[10]);
    func_0x000107c28ce0(&pcStack_550,&pcStack_2c0);
    _bzero(apcStack_7c0,0x270);
    while ((((bStack_2e8 & 1) != 0 || ((bStack_558 & 1) != 0)) &&
           (in_ZR = pcStack_550 == apcStack_7c0[0], !(bool)in_ZR))) {
      ppcVar5 = &pcStack_550;
      func_0x000107c28ce4();
      if ((((ulong)ppcVar5[0x11] & 1) == 0) &&
         (in_ZR = *(char *)(ppcVar5 + 0x1b) == '\x01', (bool)in_ZR)) {
        FUN_108691f74(&pcStack_2d8,ppcVar5 + 0x18);
      }
      func_0x000107c28d78(&pcStack_550);
    }
    func_0x000108696944(apcStack_7c0);
    func_0x000108696944(&pcStack_550);
    ppcVar5 = &pcStack_2c0;
    func_0x000107c28d4c();
    if (lStack_2c8 != 0) {
      unaff_x21 = param_1[0xe];
      ppuStack_548 = (undefined **)param_1[0x13];
      pcStack_550 = param_1[0x12];
      if (param_1[0x13] != (code *)0x0) {
        do {
          func_0x0001086966b0();
        } while (extraout_w10 != 0);
      }
      pcStack_540 = pcStack_2d8;
      lStack_538 = lStack_2d0;
      lStack_530 = lStack_2c8;
      pcVar4 = (code *)&lStack_538;
      if (lStack_2c8 != 0) {
        *(long **)(lStack_2d0 + 0x10) = &lStack_538;
        lStack_2d0 = 0;
        lStack_2c8 = 0;
        pcVar4 = pcStack_540;
        pcStack_2d8 = (code *)&lStack_2d0;
      }
      pcStack_540 = pcVar4;
      func_0x000107c28150();
      lVar10 = *(long *)(unaff_x21 + 0x10);
      func_0x000108696980();
      lVar9 = *(long *)(lVar10 + 0x70);
      pcStack_2c0 = FUN_108696558;
      ppuStack_2b8 = &PTR_FUN_110a632f0;
      plVar6 = (long *)0x28;
      __Znwm();
      ppuVar11 = ppuStack_548;
      pcVar4 = pcStack_550;
      plVar6[1] = (long)ppuStack_548;
      *plVar6 = (long)pcStack_550;
      ppuStack_548 = (undefined **)0x0;
      pcStack_550 = (code *)0x0;
      plVar6[2] = (long)pcStack_540;
      plVar7 = plVar6 + 3;
      *plVar7 = lStack_538;
      plVar6[4] = lStack_530;
      if (lStack_530 == 0) {
        plVar6[2] = (long)plVar7;
      }
      else {
        *(long **)(lStack_538 + 0x10) = plVar7;
        lStack_538 = 0;
        lStack_530 = 0;
        pcStack_540 = (code *)&lStack_538;
      }
      plStack_2b0 = plVar6;
      ppcStack_290 = ppcVar5;
      func_0x000107c28154(lVar10 + 0x48,&pcStack_2c0);
      func_0x000108696954();
      func_0x000108696774();
      if (lVar9 == 0) {
        func_0x000108696964();
        pcStack_2c0 = pcVar4;
        ppuStack_2b8 = ppuVar11;
        if (extraout_x8_01 != 0) {
          do {
            func_0x0001086966b0();
          } while (extraout_w10_00 != 0);
        }
        func_0x000108696720();
        (*extraout_x8_02)();
        func_0x000107c27e74(&pcStack_2c0);
      }
      FUN_108695bc0(&pcStack_550);
      unaff_x19 = ppcVar5;
    }
    param_1 = &pcStack_2d8;
    func_0x00010866f0d0(param_1);
  }
  while( true ) {
    func_0x0001086966c0(uStack_48);
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x000108696708();
    func_0x000107c27e74(&pcStack_2c0);
    FUN_108695bc0(&pcStack_550);
    param_1 = &pcStack_2d8;
    func_0x00010866f0d0();
    in_ZR = (int)unaff_x21 == 2;
    if (!(bool)in_ZR) break;
    func_0x0001086967bc();
    ___cxa_end_catch();
  }
  func_0x00010869692c();
  func_0x00010866f0d0(param_1 + 2);
  func_0x0001005528ec();
  if (param_1 != (code **)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108695bc0; end: 108695be3;  */

undefined8 FUN_108695bc0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010866f0d0(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108695be4; end: 108695c73;  */

code ** FUN_108695be4(long param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  code **ppcVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long *plVar8;
  int extraout_w10;
  int extraout_w10_00;
  code **unaff_x19;
  undefined8 uVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  code *pcVar12;
  undefined **ppuVar13;
  code *apcStack_7c0 [77];
  byte bStack_558;
  code *pcStack_550;
  undefined **ppuStack_548;
  code *pcStack_540;
  long lStack_538;
  long lStack_530;
  byte bStack_2e8;
  code *pcStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  long *plStack_2b0;
  long lStack_298;
  code **ppcStack_290;
  ulong uStack_280;
  char cStack_278;
  undefined1 auStack_250 [520];
  undefined8 uStack_48;
  
  ppcVar7 = (code **)(param_1 + -8);
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 == 0) && (unaff_x19 = ppcVar7, (*(byte *)(param_1 + 200) & 1) == 0)) {
    *(undefined1 *)(param_1 + 200) = 1;
    if ((*(byte *)(param_1 + 0xab) & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))(*(long **)(param_1 + 0xb8),9);
    }
    if ((((*(byte *)(param_1 + 0xa9) & 1) != 0) || ((*(byte *)(param_1 + 0xaa) & 1) != 0)) ||
       (in_ZR = 0, *(char *)(param_1 + 0xab) == '\x01')) {
      func_0x000107c28dc4(&pcStack_2c0,param_1 + 0x48);
      pcStack_2c0 = pcStack_2c0 + 1;
      uVar4 = *(ulong *)(param_1 + 0x38);
      func_0x000108696720();
      (*extraout_x8)();
      lVar10 = lStack_298;
      if (cStack_278 == '\x01') {
        uVar1 = *(long *)(param_1 + 0xb0) * 60000;
        if (*(long *)(param_1 + 0xb0) < 1) {
          uVar1 = 86400000;
        }
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uint)(uVar4 / uVar1);
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uint)(uStack_280 / uVar1);
        }
        lVar10 = 1;
        if (uVar2 <= uVar3) {
          lVar10 = lStack_298 + 1;
        }
      }
      lStack_298 = lVar10;
      cStack_278 = '\x01';
      uStack_280 = uVar4;
      FUN_10886d1b4(*(undefined8 *)(param_1 + 0x48),&pcStack_2c0);
      func_0x000107c28d20(auStack_250);
      in_ZR = *(char *)(param_1 + 0xab) == '\x01';
      if ((bool)in_ZR) {
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))(*(long **)(param_1 + 0xb8),9);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x000108696720(uVar5);
    (*extraout_x8_00)();
    FUN_10886d394(uVar9,uVar5);
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    pcStack_2d8 = (code *)&lStack_2d0;
    func_0x000107c2a054(&pcStack_2c0,*(undefined8 *)(param_1 + 0x48));
    func_0x000107c28ce0(&pcStack_550,&pcStack_2c0);
    _bzero(apcStack_7c0,0x270);
    while ((((bStack_2e8 & 1) != 0 || ((bStack_558 & 1) != 0)) &&
           (in_ZR = pcStack_550 == apcStack_7c0[0], !(bool)in_ZR))) {
      ppcVar7 = &pcStack_550;
      func_0x000107c28ce4();
      if ((((ulong)ppcVar7[0x11] & 1) == 0) &&
         (in_ZR = *(char *)(ppcVar7 + 0x1b) == '\x01', (bool)in_ZR)) {
        FUN_108691f74(&pcStack_2d8,ppcVar7 + 0x18);
      }
      func_0x000107c28d78(&pcStack_550);
    }
    func_0x000108696944(apcStack_7c0);
    func_0x000108696944(&pcStack_550);
    ppcVar7 = &pcStack_2c0;
    func_0x000107c28d4c();
    if (lStack_2c8 != 0) {
      unaff_x21 = *(long *)(param_1 + 0x68);
      ppuStack_548 = *(undefined ***)(param_1 + 0x90);
      pcStack_550 = *(code **)(param_1 + 0x88);
      if (*(long *)(param_1 + 0x90) != 0) {
        do {
          func_0x0001086966b0();
        } while (extraout_w10 != 0);
      }
      pcStack_540 = pcStack_2d8;
      lStack_538 = lStack_2d0;
      lStack_530 = lStack_2c8;
      pcVar12 = (code *)&lStack_538;
      if (lStack_2c8 != 0) {
        *(long **)(lStack_2d0 + 0x10) = &lStack_538;
        lStack_2d0 = 0;
        lStack_2c8 = 0;
        pcVar12 = pcStack_540;
        pcStack_2d8 = (code *)&lStack_2d0;
      }
      pcStack_540 = pcVar12;
      func_0x000107c28150();
      lVar11 = *(long *)(unaff_x21 + 0x10);
      func_0x000108696980();
      lVar10 = *(long *)(lVar11 + 0x70);
      pcStack_2c0 = FUN_108696558;
      ppuStack_2b8 = &PTR_FUN_110a632f0;
      plVar6 = (long *)0x28;
      __Znwm();
      ppuVar13 = ppuStack_548;
      pcVar12 = pcStack_550;
      plVar6[1] = (long)ppuStack_548;
      *plVar6 = (long)pcStack_550;
      ppuStack_548 = (undefined **)0x0;
      pcStack_550 = (code *)0x0;
      plVar6[2] = (long)pcStack_540;
      plVar8 = plVar6 + 3;
      *plVar8 = lStack_538;
      plVar6[4] = lStack_530;
      if (lStack_530 == 0) {
        plVar6[2] = (long)plVar8;
      }
      else {
        *(long **)(lStack_538 + 0x10) = plVar8;
        lStack_538 = 0;
        lStack_530 = 0;
        pcStack_540 = (code *)&lStack_538;
      }
      plStack_2b0 = plVar6;
      ppcStack_290 = ppcVar7;
      func_0x000107c28154(lVar11 + 0x48,&pcStack_2c0);
      func_0x000108696954();
      func_0x000108696774();
      if (lVar10 == 0) {
        func_0x000108696964();
        pcStack_2c0 = pcVar12;
        ppuStack_2b8 = ppuVar13;
        if (extraout_x8_01 != 0) {
          do {
            func_0x0001086966b0();
          } while (extraout_w10_00 != 0);
        }
        func_0x000108696720();
        (*extraout_x8_02)();
        func_0x000107c27e74(&pcStack_2c0);
      }
      FUN_108695bc0(&pcStack_550);
      unaff_x19 = ppcVar7;
    }
    ppcVar7 = &pcStack_2d8;
    func_0x00010866f0d0(ppcVar7);
  }
  while( true ) {
    func_0x0001086966c0(uStack_48);
    if ((bool)in_ZR) {
      return ppcVar7;
    }
    ___stack_chk_fail();
    func_0x000108696708();
    func_0x000107c27e74(&pcStack_2c0);
    FUN_108695bc0(&pcStack_550);
    ppcVar7 = &pcStack_2d8;
    func_0x00010866f0d0();
    in_ZR = (int)unaff_x21 == 2;
    if (!(bool)in_ZR) break;
    func_0x0001086967bc();
    ___cxa_end_catch();
  }
  func_0x00010869692c();
  func_0x00010866f0d0(ppcVar7 + 2);
  func_0x0001005528ec();
  if (ppcVar7 != (code **)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108695c74; end: 108695dab;  */

undefined1 * FUN_108695c74(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar3;
  undefined **in_register_00005008;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  puVar2 = auStack_e0;
  func_0x0001086966f4();
  uStack_58 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 0xc0) + 0x40))();
  func_0x000108696870();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  func_0x000108696974();
  func_0x000108696a08();
  func_0x000107c28150();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  func_0x000108696980();
  lVar3 = *(long *)(lVar3 + 0x70);
  uStack_90 = 0x108696600;
  ppuStack_88 = &PTR_FUN_110a63308;
  __Znwm(0x50);
  func_0x00010869672c();
  func_0x000108696748();
  func_0x000108696a14();
  func_0x0001086966e4();
  func_0x000108696774();
  if (lVar3 == 0) {
    func_0x000108696964();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001086966b0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108696720();
    (*extraout_x8_02)();
    func_0x00010869690c();
  }
  FUN_108695dac();
  func_0x0001086966c0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010869690c();
    FUN_108695dac(auStack_e0);
    func_0x00010869680c();
    func_0x0001086969e8();
    func_0x000107c279dc(puVar2 + 0x10);
    puVar1 = puVar2;
    func_0x0001005528ec();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 108695dac; end: 108695dcf;  */

long FUN_108695dac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086969e8();
  func_0x000107c279dc(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108695dd0; end: 108695dd7;  */

undefined1 * FUN_108695dd0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar3;
  undefined **in_register_00005008;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  param_2 = param_2 + -8;
  puVar2 = auStack_e0;
  func_0x0001086966f4();
  uStack_58 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 0xc0) + 0x40))();
  func_0x000108696870();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  func_0x000108696974();
  func_0x000108696a08();
  func_0x000107c28150();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  func_0x000108696980();
  lVar3 = *(long *)(lVar3 + 0x70);
  uStack_90 = 0x108696600;
  ppuStack_88 = &PTR_FUN_110a63308;
  __Znwm(0x50);
  func_0x00010869672c();
  func_0x000108696748();
  func_0x000108696a14();
  func_0x0001086966e4();
  func_0x000108696774();
  if (lVar3 == 0) {
    func_0x000108696964();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001086966b0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108696720();
    (*extraout_x8_02)();
    func_0x00010869690c();
  }
  FUN_108695dac();
  func_0x0001086966c0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010869690c();
    FUN_108695dac(auStack_e0);
    func_0x00010869680c();
    func_0x0001086969e8();
    func_0x000107c279dc(puVar2 + 0x10);
    puVar1 = puVar2;
    func_0x0001005528ec();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 108695dd8; end: 108695f0f;  */

undefined1 * FUN_108695dd8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar3;
  undefined **in_register_00005008;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  puVar2 = auStack_e0;
  func_0x0001086966f4();
  uStack_58 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 0xc0) + 0x48))();
  func_0x000108696870();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  func_0x000108696974();
  func_0x000108696a08();
  func_0x000107c28150();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  func_0x000108696980();
  lVar3 = *(long *)(lVar3 + 0x70);
  uStack_90 = 0x10869664c;
  ppuStack_88 = &PTR_FUN_110a63320;
  __Znwm(0x50);
  func_0x00010869672c();
  func_0x000108696748();
  func_0x000108696a14();
  func_0x0001086966e4();
  func_0x000108696774();
  if (lVar3 == 0) {
    func_0x000108696964();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001086966b0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108696720();
    (*extraout_x8_02)();
    func_0x00010869690c();
  }
  FUN_108695f10();
  func_0x0001086966c0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010869690c();
    FUN_108695f10(auStack_e0);
    func_0x00010869680c();
    func_0x0001086969e8();
    func_0x000107c279dc(puVar2 + 0x10);
    puVar1 = puVar2;
    func_0x0001005528ec();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 108695f10; end: 108695f33;  */

long FUN_108695f10(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086969e8();
  func_0x000107c279dc(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108695f34; end: 108695f3f;  */

undefined1 * FUN_108695f34(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  long lVar3;
  undefined **in_register_00005008;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_58;
  
  param_2 = param_2 + -8;
  puVar2 = auStack_e0;
  func_0x0001086966f4();
  uStack_58 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 0xc0) + 0x48))();
  func_0x000108696870();
  if (extraout_x8_00 != 0) {
    do {
      func_0x0001086966b0();
    } while (extraout_w10 != 0);
  }
  func_0x000108696974();
  func_0x000108696a08();
  func_0x000107c28150();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  func_0x000108696980();
  lVar3 = *(long *)(lVar3 + 0x70);
  uStack_90 = 0x10869664c;
  ppuStack_88 = &PTR_FUN_110a63320;
  __Znwm(0x50);
  func_0x00010869672c();
  func_0x000108696748();
  func_0x000108696a14();
  func_0x0001086966e4();
  func_0x000108696774();
  if (lVar3 == 0) {
    func_0x000108696964();
    uStack_90 = param_1;
    ppuStack_88 = in_register_00005008;
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001086966b0();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108696720();
    (*extraout_x8_02)();
    func_0x00010869690c();
  }
  FUN_108695f10();
  func_0x0001086966c0(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010869690c();
    FUN_108695f10(auStack_e0);
    func_0x00010869680c();
    func_0x0001086969e8();
    func_0x000107c279dc(puVar2 + 0x10);
    puVar1 = puVar2;
    func_0x0001005528ec();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 108695f40; end: 108695f53;  */

void FUN_108695f40(void)

{
  FUN_108695f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108695f54; end: 108695f63;  */

undefined8 * FUN_108695f54(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_110a63098;
  *param_1 = &PTR_FUN_110a63110;
  FUN_108695f64(param_1 + 0x17);
  func_0x000107c288a4(param_1 + 0x13);
  func_0x000107c28700(param_1 + 0x11);
  func_0x000107c288e8(param_1 + 0xf);
  func_0x000107c2814c(param_1 + 0xd);
  func_0x000107c28ab4(param_1 + 0xb);
  func_0x000107c28808(param_1 + 9);
  func_0x000107c28800(param_1 + 7);
  func_0x000107c27c20(param_1 + 5);
  FUN_10869602c(param_1 + 3);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 108695f64; end: 108695f8f;  */

long FUN_108695f64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108695f90; end: 10869602b;  */

undefined8 * FUN_108695f90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a63098;
  param_1[1] = &PTR_FUN_110a63110;
  FUN_108695f64(param_1 + 0x18);
  func_0x000107c288a4(param_1 + 0x14);
  func_0x000107c28700(param_1 + 0x12);
  func_0x000107c288e8(param_1 + 0x10);
  func_0x000107c2814c(param_1 + 0xe);
  func_0x000107c28ab4(param_1 + 0xc);
  func_0x000107c28808(param_1 + 10);
  func_0x000107c28800(param_1 + 8);
  func_0x000107c27c20(param_1 + 6);
  FUN_10869602c(param_1 + 4);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 10869602c; end: 108696057;  */

long FUN_10869602c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 108696058; end: 1086962b3;  */

void FUN_108696058(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  uint extraout_w8;
  code *extraout_x8;
  long lVar5;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined1 auStack_560 [888];
  byte bStack_1e8;
  ulong uStack_1e0;
  char cStack_1d8;
  char cStack_ac;
  
  func_0x000108696794();
  func_0x0001086969c4(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000108696994();
  func_0x000108696904();
  func_0x0001086968f0();
  if ((bool)in_ZR) {
    func_0x000108696720(*(undefined8 *)(unaff_x19 + 0x28));
    (*extraout_x8)();
    func_0x000108696a20();
    FUN_10886bf18();
  }
  uVar2 = *(char *)(unaff_x19 + 0x68) == '\x01';
  if ((bool)uVar2) {
    func_0x0001086968f0();
    if ((!(bool)uVar2) || ((bStack_1e8 & 1) == 0)) goto LAB_1086960e8;
    lVar5 = 0x28;
  }
  else {
    lVar5 = 0x20;
  }
  (**(code **)(**(long **)(unaff_x19 + 0x58) + lVar5))();
LAB_1086960e8:
  func_0x0001086969b8();
  func_0x000108696720(*(undefined8 *)(unaff_x19 + 0x28));
  (*extraout_x8_00)();
  func_0x000108696850();
  FUN_10886d1b4();
  func_0x0001086968f0();
  if (((bool)uVar2) && (cStack_1d8 == '\x01')) {
    uVar4 = *(ulong *)(unaff_x19 + 0x28);
    func_0x000108696720();
    (*extraout_x8_01)();
    bVar3 = uVar4 == uStack_1e0;
    if (uStack_1e0 <= uVar4) {
      func_0x0001086967c4();
      uVar1 = extraout_w8 & 0xffff | 0x4d0000;
      if (!bVar3) {
        uVar1 = uVar1 + 1;
      }
      FUN_1086901fc(auStack_560,uVar1);
      func_0x00010869683c();
      func_0x000108696a48();
      func_0x00010869693c();
      func_0x000108696828();
      if (cStack_ac == '\x01') {
        func_0x000108696a34();
      }
      func_0x00010869693c();
      func_0x000108696720(*(undefined8 *)(unaff_x19 + 0x28));
      (*extraout_x8_02)();
      func_0x0001086967e8();
      func_0x0001086968e0();
      func_0x000108696924();
      func_0x000108696934();
      func_0x00010869694c();
    }
  }
  func_0x0001086968c8();
  func_0x000108696714();
  func_0x0001086968a0();
  plVar6 = *(long **)(unaff_x19 + 0x38);
  func_0x000108696988();
  func_0x000108696890(*(undefined8 *)(*plVar6 + 0x50));
  func_0x0001086968fc();
  func_0x0001086968d8();
  return;
}



/* Entry: 1086962b4; end: 1086962d3;  */

void FUN_1086962b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10869557c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086962d4; end: 1086962d7;  */

void FUN_1086962d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086962d8; end: 108696533;  */

void FUN_1086962d8(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  ulong uVar4;
  uint extraout_w8;
  code *extraout_x8;
  long lVar5;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined1 auStack_560 [888];
  byte bStack_1e8;
  ulong uStack_1e0;
  char cStack_1d8;
  char cStack_ac;
  
  func_0x000108696794();
  func_0x0001086969c4(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000108696994();
  func_0x000108696904();
  func_0x0001086968f0();
  if ((bool)in_ZR) {
    func_0x000108696720(*(undefined8 *)(unaff_x19 + 0x30));
    (*extraout_x8)();
    func_0x000108696a20();
    FUN_10886bf18();
  }
  uVar2 = *(char *)(unaff_x19 + 0x70) == '\x01';
  if ((bool)uVar2) {
    func_0x0001086968f0();
    if ((!(bool)uVar2) || ((bStack_1e8 & 1) == 0)) goto LAB_108696368;
    lVar5 = 0x28;
  }
  else {
    lVar5 = 0x20;
  }
  (**(code **)(**(long **)(unaff_x19 + 0x60) + lVar5))();
LAB_108696368:
  func_0x0001086969b8();
  func_0x000108696720(*(undefined8 *)(unaff_x19 + 0x30));
  (*extraout_x8_00)();
  func_0x000108696850();
  FUN_10886d1b4();
  func_0x0001086968f0();
  if (((bool)uVar2) && (cStack_1d8 == '\x01')) {
    uVar4 = *(ulong *)(unaff_x19 + 0x30);
    func_0x000108696720();
    (*extraout_x8_01)();
    bVar3 = uVar4 == uStack_1e0;
    if (uStack_1e0 <= uVar4) {
      func_0x0001086967c4();
      uVar1 = extraout_w8 & 0xffff | 0x4d0000;
      if (!bVar3) {
        uVar1 = uVar1 + 1;
      }
      FUN_1086901fc(auStack_560,uVar1);
      func_0x00010869683c();
      func_0x000108696a48();
      func_0x00010869693c();
      func_0x000108696828();
      if (cStack_ac == '\x01') {
        func_0x000108696a34();
      }
      func_0x00010869693c();
      func_0x000108696720(*(undefined8 *)(unaff_x19 + 0x30));
      (*extraout_x8_02)();
      func_0x0001086967e8();
      func_0x0001086968e0();
      func_0x000108696924();
      func_0x000108696934();
      func_0x00010869694c();
    }
  }
  func_0x0001086968c8();
  func_0x000108696714();
  func_0x0001086968a0();
  plVar6 = *(long **)(unaff_x19 + 0x40);
  func_0x000108696988();
  func_0x000108696890(*(undefined8 *)(*plVar6 + 0x50));
  func_0x0001086968fc();
  func_0x0001086968d8();
  return;
}



/* Entry: 108696534; end: 108696553;  */

void FUN_108696534(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108695764();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108696554; end: 108696557;  */

void FUN_108696554(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108696558; end: 1086965db;  */

void FUN_108696558(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  FUN_108848684(auStack_48);
  puVar1 = (undefined8 *)puVar2[2];
  while (puVar1 != puVar2 + 3) {
    (**(code **)(*(long *)*puVar2 + 0x40))((long *)*puVar2,puVar1 + 4,auStack_48);
    func_0x000107c27be0();
  }
  func_0x000107c27914(auStack_48);
  return;
}



/* Entry: 1086965dc; end: 1086965fb;  */

void FUN_1086965dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108695bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086965fc; end: 108696627;  */

void FUN_1086965fc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108696628; end: 108696647;  */

void FUN_108696628(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108695dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108696648; end: 108696673;  */

void FUN_108696648(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108696674; end: 108696693;  */

void FUN_108696674(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108695f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108696694; end: 108696a77;  */

void FUN_108696694(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108696a78; end: 108696f8f;  */

void FUN_108696a78(undefined1 *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  uint extraout_w10;
  uint extraout_w10_00;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined1 auStack_218 [24];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined1 uStack_1e0;
  ulong uStack_1d8;
  byte bStack_1d0;
  ulong uStack_1c8;
  byte bStack_1c0;
  ulong uStack_1b8;
  byte bStack_1b0;
  ulong uStack_1a8;
  char cStack_1a0;
  ulong uStack_198;
  char cStack_190;
  ulong uStack_188;
  char cStack_180;
  ulong uStack_178;
  char cStack_170;
  ulong uStack_168;
  byte bStack_160;
  ulong uStack_158;
  byte bStack_150;
  ulong uStack_148;
  byte bStack_140;
  ulong uStack_138;
  byte bStack_130;
  ulong uStack_128;
  byte bStack_120;
  ulong uStack_118;
  undefined1 uStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  ulong uStack_f8;
  byte bStack_f0;
  ulong uStack_e8;
  byte bStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  uint uStack_d0;
  undefined1 uStack_cc;
  ulong uStack_c8;
  undefined1 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  uint uStack_b0;
  undefined1 uStack_ac;
  uint uStack_a8;
  undefined1 uStack_a4;
  ulong uStack_a0;
  byte bStack_98;
  undefined1 auStack_90 [24];
  byte bStack_78;
  undefined1 auStack_70 [24];
  char cStack_58;
  
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_108843a84(auStack_70,param_2 + 0xc0);
  }
  else {
    auStack_70[0] = 0;
    cStack_58 = '\0';
  }
  FUN_108843a84(auStack_90,param_2 + 0x38);
  if ((cStack_58 == '\x01') && ((bStack_78 & 1) != 0)) {
    uVar6 = *(undefined1 *)(param_2 + 0xe8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_258,auStack_70)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_240,auStack_90)
    ;
    if ((*(byte *)(param_2 + 0xe8) & 1) == 0) {
      if ((*(char *)(param_2 + 0x21c) == '\x01') &&
         (uVar7 = *(int *)(param_2 + 0x218) - 1, uVar7 < 7)) {
        uStack_228 = *(undefined4 *)(&UNK_10df42430 + (ulong)uVar7 * 4);
      }
      else {
        uStack_228 = 9;
      }
    }
    else {
      uStack_228 = 0;
    }
    uStack_224 = 7;
    uStack_21f = *(undefined1 *)(param_2 + 0x248);
    uStack_220 = uVar6;
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_108843a84(auStack_218,param_2);
    }
    else {
      auStack_218[0] = 0;
      uStack_200 = 0;
    }
    if (*(char *)(param_2 + 0xb8) == '\x01') {
      FUN_108843a84(auStack_1f8,param_2 + 0xa0);
    }
    else {
      auStack_1f8[0] = 0;
      uStack_1e0 = 0;
    }
    uVar10 = *(ulong *)(param_2 + 0x128);
    uStack_1d8 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
    bStack_1d0 = (byte)(uVar10 >> 0x3f) ^ 1;
    uVar8 = *(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20);
    uStack_1c8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    bStack_1c0 = (byte)(uVar8 >> 0x3f) ^ 1;
    uVar8 = *(ulong *)(param_2 + 0x50);
    uStack_1b8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    bStack_1b0 = (byte)(uVar8 >> 0x3f) ^ 1;
    cStack_1a0 = *(char *)(param_2 + 0x5c);
    uStack_1a8 = (ulong)*(uint *)(param_2 + 0x58);
    if (cStack_1a0 == '\0') {
      uStack_1a8 = 0;
    }
    uVar8 = *(ulong *)(param_2 + 0x250);
    uStack_198 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    cStack_190 = '\0';
    if (-1 < (long)uVar8) {
      cStack_190 = *(char *)(param_2 + 600);
    }
    if (*(char *)(param_2 + 600) == '\0') {
      uStack_198 = 0;
    }
    uVar8 = *(ulong *)(param_2 + 0x168);
    uStack_188 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    cStack_180 = '\0';
    if (-1 < (long)uVar8) {
      cStack_180 = *(char *)(param_2 + 0x170);
    }
    if (*(char *)(param_2 + 0x170) == '\0') {
      uStack_188 = 0;
    }
    uVar8 = *(ulong *)(param_2 + 0x230);
    uStack_178 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    cStack_170 = '\0';
    if (-1 < (long)uVar8) {
      cStack_170 = *(char *)(param_2 + 0x238);
    }
    if (*(char *)(param_2 + 0x238) == '\0') {
      uStack_178 = 0;
    }
    uStack_168 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
    bStack_160 = (byte)(param_3 >> 0x3f) ^ 1;
    uVar11 = *(ulong *)(param_2 + 0xe0);
    bVar1 = *(byte *)(param_2 + 0xe8);
    uVar8 = *(ulong *)(param_2 + 0x240) - uVar11;
    uStack_158 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    bVar2 = *(byte *)(param_2 + 0x248) & bVar1 & uVar11 <= *(ulong *)(param_2 + 0x240);
    bStack_150 = bVar2 & uVar8 < 0x8000000000000000;
    if (bVar2 == 0) {
      uStack_158 = 0;
    }
    uVar8 = *(ulong *)(param_2 + 0x80);
    bVar2 = *(byte *)(param_2 + 0x88);
    uStack_148 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    bStack_140 = 0;
    if (-1 < (long)uVar8) {
      bStack_140 = bVar2;
    }
    if (bVar2 == 0) {
      uStack_148 = 0;
    }
    uStack_138 = uStack_138 & 0xffffffffffffff00;
    bStack_130 = 0;
    uStack_128 = uStack_128 & 0xffffffffffffff00;
    bStack_120 = 0;
    uStack_118 = uStack_118 & 0xffffffffffffff00;
    uStack_110 = 0;
    uStack_108 = uStack_108 & 0xffffffffffffff00;
    uStack_100 = 0;
    uVar3 = param_3 - uVar8;
    uStack_f8 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
    bVar2 = bVar2 & uVar8 <= param_3;
    bStack_f0 = bVar2 & uVar3 < 0x8000000000000000;
    if (bVar2 == 0) {
      uStack_f8 = 0;
    }
    uStack_e8 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
    bStack_e0 = bVar1 & uVar11 < 0x8000000000000000;
    if ((bVar1 & 1) == 0) {
      uStack_e8 = 0;
    }
    uVar9 = 1;
    if (*(int *)(param_2 + 0x98) != 1) {
      uVar9 = 2;
    }
    uStack_d8 = 0;
    if (*(int *)(param_2 + 0x98) != 0) {
      uStack_d8 = uVar9;
    }
    uStack_d4 = 1;
    uStack_d0 = uStack_d0 & 0xffffff00;
    uStack_cc = 0;
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    uStack_c0 = 0;
    uStack_b8 = *(undefined4 *)(param_2 + 0x120);
    func_0x000108696a68();
    uStack_b4 = 1;
    if (*(char *)(param_2 + 0x214) == '\x01') {
      uStack_b0 = *(int *)(param_2 + 0x210) - 1;
      if (4 < uStack_b0) {
        uStack_b0 = 5;
      }
      uStack_ac = 1;
    }
    else {
      uStack_b0 = uStack_b0 & 0xffffff00;
      uStack_ac = 0;
    }
    uStack_a8 = 0;
    uStack_a4 = 1;
    uVar8 = uVar11 - uVar10;
    uStack_a0 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    bVar1 = bVar1 & uVar10 <= uVar11;
    bStack_98 = bVar1 & uVar8 < 0x8000000000000000;
    if (bVar1 == 0) {
      uStack_a0 = 0;
    }
    uVar7 = (uint)*(byte *)(param_2 + 0x160);
    cVar4 = SBORROW4(uVar7,1);
    cVar5 = (int)(uVar7 - 1) < 0;
    uVar6 = uVar7 == 1;
    if ((bool)uVar6) {
      uVar7 = *(uint *)(param_2 + 0x14c);
      uStack_138 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
      bStack_130 = (byte)~(byte)(uVar7 >> 0x18) >> 7;
      uVar7 = *(uint *)(param_2 + 0x148);
      uStack_128 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
      bStack_120 = (byte)~(byte)(uVar7 >> 0x18) >> 7;
      fVar12 = *(float *)(param_2 + 0x144);
      func_0x000108696fac();
      func_0x000108696f90();
      uVar7 = extraout_w10;
      if (!(bool)uVar6 && cVar5 == cVar4) {
        uVar7 = 1;
      }
      fVar13 = 9.223372e+18;
      uStack_118 = (ulong)fVar12;
      uVar7 = uVar7 & fVar12 < 9.223372e+18;
      uVar6 = uVar7 == 0;
      cVar5 = '\0';
      cVar4 = '\0';
      if ((bool)uVar6) {
        uStack_118 = 0;
      }
      uStack_110 = (undefined1)uVar7;
      fVar12 = *(float *)(param_2 + 0x158);
      func_0x000108696fac();
      func_0x000108696f90();
      uVar7 = extraout_w10_00;
      if (!(bool)uVar6 && cVar5 == cVar4) {
        uVar7 = 1;
      }
      uStack_108 = (ulong)fVar12;
      uVar7 = uVar7 & fVar12 < fVar13;
      if (uVar7 == 0) {
        uStack_108 = 0;
      }
      uStack_100 = (undefined1)uVar7;
      uStack_d0 = *(byte *)(param_2 + 0x150) ^ 1;
      uStack_cc = 1;
      uVar7 = *(uint *)(param_2 + 0x154);
      if (uVar7 < 2) {
        uStack_c0 = 1;
        uStack_a8 = (uint)(uVar7 == 1);
        uStack_c8 = (ulong)uVar7;
      }
      else {
        uStack_a8 = 2;
      }
    }
    uStack_a4 = 1;
    FUN_108690d24(param_1,auStack_258);
    param_1[0x1c8] = 1;
    func_0x000108691068(auStack_258);
  }
  else {
    *param_1 = 0;
    param_1[0x1c8] = 0;
  }
  func_0x000107c279a4(auStack_90);
  func_0x000107c279a4(auStack_70);
  return;
}



/* Entry: 108696f90; end: 108696fbf;  */

void FUN_108696f90(void)

{
  return;
}



/* Entry: 108696fc0; end: 10869702f;  */

bool FUN_108696fc0(void)

{
  undefined1 in_ZR;
  bool bVar1;
  long unaff_x19;
  
  func_0x0001086978f0();
  func_0x00010869791c();
  if ((bool)in_ZR) {
    bVar1 = *(long *)(unaff_x19 + 0x68) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 108697030; end: 10869715b;  */

void FUN_108697030(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long lStack_40;
  long lStack_38;
  
  func_0x0001086978f0();
  func_0x00010869791c();
  if ((((bool)in_ZR) && (*(long *)(unaff_x19 + 0x68) != 0)) &&
     (func_0x000108697928(), extraout_x8 != 0)) {
    FUN_10869715c(&lStack_40);
    *(undefined4 *)(lStack_40 + 0x1b8) = 0;
    *(undefined1 *)(lStack_40 + 0x1bc) = 1;
    func_0x000108697948(lStack_40 + 0x88);
    *(undefined4 *)(lStack_40 + 0x1d0) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(lStack_40 + 0x1d4) = 1;
    *(undefined4 *)(lStack_40 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(lStack_40 + 0x1c4) = 1;
    if (*(char *)(param_2 + 0x24) == '\x01') {
      *(undefined4 *)(lStack_40 + 0x1c8) = *(undefined4 *)(param_2 + 0x20);
      *(undefined1 *)(lStack_40 + 0x1cc) = 1;
    }
    if (*(char *)(param_2 + 0x30) == '\x01') {
      *(undefined8 *)(lStack_40 + 0xf8) = *(undefined8 *)(param_2 + 0x28);
      *(undefined1 *)(lStack_40 + 0x100) = 1;
    }
    if (*(char *)(param_2 + 0x40) == '\x01') {
      *(undefined8 *)(lStack_40 + 0x48) = *(undefined8 *)(param_2 + 0x38);
      *(undefined1 *)(lStack_40 + 0x50) = 1;
    }
    if (*(char *)(param_2 + 0x50) == '\x01') {
      *(undefined8 *)(lStack_40 + 0x58) = *(undefined8 *)(param_2 + 0x48);
      *(undefined1 *)(lStack_40 + 0x60) = 1;
    }
    plVar1 = *(long **)(unaff_x19 + 0x68);
    if (lStack_38 != 0) {
      do {
        func_0x000107c32414();
      } while (extraout_w10 != 0);
    }
    func_0x000108697940(*(undefined8 *)(*plVar1 + 0x10));
    func_0x0001086978e8();
    func_0x000108697904();
  }
  return;
}



/* Entry: 10869715c; end: 1086971c7;  */

void FUN_10869715c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x218;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110a633b8;
  _bzero(puVar1 + 5,0x1f0);
  puVar1[3] = &PTR_DAT_110cef708;
  puVar1[4] = &PTR_DAT_110cef770;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  *(undefined1 *)((long)puVar1 + 0x1d4) = 0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}


