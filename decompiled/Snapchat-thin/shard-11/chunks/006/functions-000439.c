/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108808e3c; end: 10880911f;  */

void FUN_108808e3c(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar9;
  long *plVar10;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_78 [6];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  func_0x00010880a4a0();
  puVar4 = (undefined8 *)0x90;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar4 = FUN_108809748;
  puVar4[1] = FUN_108809824;
  puVar4[0xf] = param_2;
  puVar4[0x10] = param_3;
  func_0x0001087adea8(puVar4 + 2);
  FUN_1087ad990(param_1,puVar4 + 2);
  FUN_1086708f8(puVar4 + 0xb);
  lVar9 = *(long *)(puVar4[0xb] + 8);
  puVar4[0xd] = lVar9;
  if (lVar9 != 0) {
    do {
      func_0x00010880a428();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(puVar4 + 4) = 0;
  *(undefined1 *)(puVar4 + 10) = 0;
  FUN_108809120(puVar4 + 4,*(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xf4),
                *(undefined4 *)(param_3 + 0x538));
  plVar13 = *(long **)(param_2 + 0x48);
  func_0x000107c27994(alStack_60,param_3 + 0x20);
  func_0x00010868c9c4(auStack_78,alStack_60,1);
  uStack_88 = puVar4[0xc];
  uStack_90 = puVar4[0xb];
  if (puVar4[0xc] != 0) {
    plVar10 = (long *)(puVar4[0xc] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar7 = (undefined4 *)(param_3 + 0x138);
  (**(code **)(*plVar13 + 0x88))(plVar13,puVar7,auStack_78,&uStack_90,puVar4 + 4);
  func_0x000104be3970(&uStack_90);
  func_0x000107c27a04(auStack_78);
  plVar13 = alStack_60;
  func_0x000107c27914();
  puVar4[0xe] = puVar4[0xd];
  do {
    func_0x00010880a428();
  } while (extraout_w10_00 != 0);
  func_0x00010880a5d4(puVar4[0xe]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0x11) = 0;
    lVar9 = puVar4[0xe];
    func_0x00010880a728();
    if (*plVar13 == 0) {
      func_0x000107c3a5c0();
    }
    plVar10 = (long *)(lVar9 + 0x10);
    do {
      if (*plVar10 == 0) {
        func_0x00010880a480();
        plVar10 = extraout_x8_01;
        uVar3 = extraout_w10_02;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x00010880a774();
        plVar10 = extraout_x8_00;
        uVar3 = extraout_w10_01;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        func_0x00010880a8c8();
        if ((bool)in_ZR) {
          func_0x00010880a490();
          func_0x00010880a654();
          func_0x00010880a5b4();
        }
        func_0x00010880a4c8();
        goto LAB_108809058;
      }
    } while ((uVar3 >> 1 & 1) == 0);
  }
  puVar5 = puVar4 + 0xe;
  func_0x000107c28a1c();
  uVar12 = *puVar5;
  func_0x00010880a6b4();
  if ((uVar12 >> 0x20 & 1) == 0) {
    uVar6 = puVar4[0xf];
    lVar9 = puVar4[0x10];
    *(undefined4 *)(lVar9 + 400) = 0;
    FUN_1088093ac(uVar6,lVar9,2);
    auStack_78[0] = 0;
  }
  else {
    uVar3 = (int)uVar12 - 1;
    in_ZR = uVar3 == 10;
    if (uVar3 < 0xb) {
      uVar8 = *(undefined4 *)(&UNK_10df5b354 + (ulong)uVar3 * 4);
    }
    else {
      uVar8 = 0xd;
    }
    uVar6 = puVar4[0xf];
    FUN_1088091e4(uVar6,puVar4[0x10],uVar8);
    auStack_78[0] = (undefined4)uVar6;
  }
  plVar13 = puVar4 + 2;
  puVar7 = auStack_78;
  func_0x0001087ade80(plVar13);
  func_0x00010880a59c();
  func_0x00010880a58c();
  func_0x00010880a584();
  while( true ) {
    func_0x00010880a478();
    func_0x00010880a4b0();
LAB_108809058:
    func_0x00010880a3d8(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar7 != 0) goto LAB_10880908c;
    do {
      func_0x00010880a794();
LAB_10880908c:
      func_0x000104bd46a0(plVar13);
    } while ((int)puVar7 == 0);
    func_0x00010880a59c();
    func_0x00010880a58c();
    func_0x00010880a584();
    func_0x00010880a624();
    func_0x00010880a548();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108809120; end: 1088091e3;  */

void FUN_108809120(ulong *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  double dVar2;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 != 0) {
    if ((param_1[6] & 1) == 0) {
      auStack_70[0] = 0;
      uStack_68 = 0;
      auStack_60[0] = 0;
      uStack_48 = 0;
      FUN_1087bd548(param_1,auStack_70);
      func_0x000107c279a4(auStack_60);
    }
    uVar1 = param_2;
    if (param_3 != 0) {
      if (7 < param_4) {
        param_4 = 8;
      }
      dVar2 = (double)param_4;
      _exp2();
      uVar1 = param_3;
      if (param_2 * (int)dVar2 <= param_3) {
        uVar1 = param_2 * (int)dVar2;
      }
    }
    if ((param_1[1] & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *param_1 = (ulong)uVar1;
  }
  return;
}



/* Entry: 1088091e4; end: 10880937f;  */

undefined4 FUN_1088091e4(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a609a8;
  uStack_78 = 0;
  uStack_60 = 0x1b0;
  func_0x000107c278b8(auStack_98,&UNK_10f4ba7c3);
  uVar4 = (ulong)*(uint *)(param_2 + 0x530);
  func_0x000108841bf8(uVar4);
  func_0x000107c28824(&ppuStack_80,auStack_98,uVar4);
  func_0x000107c278b8(auStack_b0,&UNK_10f4ba7d1);
  uVar4 = (ulong)*(uint *)(param_2 + 0x534);
  func_0x000108841c14(uVar4);
  func_0x00010880a79c();
  uVar5 = param_3;
  FUN_1087cd8cc(param_3);
  FUN_1087b95a0(uVar4,uVar5);
  func_0x000107c278b8(auStack_c8,&UNK_10f4bbcc6);
  func_0x00010880a610(*(undefined4 *)(param_2 + 0x52c));
  func_0x000107c28818(uVar4,auStack_c8);
  func_0x00010880a68c();
  func_0x00010880a7cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x00010880a7bc();
  if ((*(ulong *)(param_2 + 0x510) >> 0x20 & 1) != 0) {
    func_0x00010880a394();
    func_0x00010880a684();
  }
  plVar6 = *(long **)(param_1 + 0x98);
  func_0x000107c2884c(&ppuStack_80,auStack_58);
  (**(code **)(*plVar6 + 0x50))(plVar6,&ppuStack_80);
  func_0x00010880a7bc();
  func_0x00010880a67c();
  puVar2 = (ulong *)(param_1 + 0xb8);
  plVar6 = (long *)*puVar2;
  if (plVar6 != (long *)0x0) {
    if ((int)param_3 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000108770cd8(*(undefined8 *)(*plVar6 + 0x20));
      if (((ulong)plVar6 & 1) == 0) {
        plVar6 = (long *)*puVar2;
        func_0x000108770cd8(*(undefined8 *)(*plVar6 + 0x28));
        if (((ulong)plVar6 & 1) == 0) {
          plVar6 = (long *)*puVar2;
          func_0x000108770cd8(*(undefined8 *)(*plVar6 + 0x30));
          if (((ulong)plVar6 & 1) == 0) goto LAB_108770a10;
          uVar3 = 7;
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    return uVar3;
  }
LAB_108770a10:
  uVar1 = (int)param_3 + 1;
  if (uVar1 < 0x12) {
    return *(undefined4 *)(&UNK_10df50e18 + (ulong)uVar1 * 4);
  }
  return 7;
}



/* Entry: 108809380; end: 1088093ab;  */

void FUN_108809380(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (param_2 != 1) {
    uVar2 = (uint)(param_2 == 2);
  }
  uVar1 = 2;
  if (*(int *)(param_1 + 0x60) != 0x18 || uVar2 != 0) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x170) = uVar1;
  return;
}



/* Entry: 1088093ac; end: 1088094c3;  */

void FUN_1088093ac(void)

{
  long unaff_x19;
  long *plVar1;
  long unaff_x20;
  
  func_0x00010880a3b0();
  func_0x00010880a468();
  func_0x00010880a7f0();
  func_0x00010880a534();
  func_0x00010880a458();
  func_0x00010880a7e0();
  func_0x00010880a79c();
  FUN_1087b95a0();
  func_0x00010880a3f8();
  func_0x00010880a610(*(undefined4 *)(unaff_x20 + 0x52c));
  func_0x00010880a520();
  func_0x00010880a68c();
  func_0x00010880a52c();
  func_0x00010880a4b8();
  func_0x00010880a540();
  func_0x00010880a7e8();
  if ((*(ulong *)(unaff_x20 + 0x510) >> 0x20 & 1) != 0) {
    func_0x00010880a394();
    func_0x00010880a684();
  }
  plVar1 = *(long **)(unaff_x19 + 0x98);
  func_0x00010880a514();
  func_0x00010880a500(*(undefined8 *)(*plVar1 + 0x50));
  func_0x00010880a50c();
  func_0x00010880a67c();
  return;
}



/* Entry: 1088094c4; end: 1088094c7;  */

undefined8 * FUN_1088094c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73628;
  func_0x000107c297ac(param_1 + 0x20);
  func_0x000107c30608(param_1 + 0x19);
  func_0x000107c2995c(param_1 + 0x17);
  func_0x000107c289fc(param_1 + 0x15);
  func_0x000107c288a4(param_1 + 0x13);
  func_0x000107c28abc(param_1 + 0x11);
  func_0x000107c28ec0(param_1 + 0xf);
  func_0x000107c28ab8(param_1 + 0xd);
  func_0x000107c2814c(param_1 + 0xb);
  func_0x000107c288e8(param_1 + 9);
  func_0x000107c28808(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 1088094c8; end: 1088094db;  */

void FUN_1088094c8(void)

{
  FUN_1088095d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088094dc; end: 1088095bb;  */

long FUN_1088094dc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1086a82dc();
  }
  else {
    FUN_1086a8278();
  }
  return param_1;
}



/* Entry: 1088095bc; end: 1088095d3;  */

void FUN_1088095bc(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 1088095d4; end: 108809667;  */

undefined8 * FUN_1088095d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73628;
  func_0x000107c297ac(param_1 + 0x20);
  func_0x000107c30608(param_1 + 0x19);
  func_0x000107c2995c(param_1 + 0x17);
  func_0x000107c289fc(param_1 + 0x15);
  func_0x000107c288a4(param_1 + 0x13);
  func_0x000107c28abc(param_1 + 0x11);
  func_0x000107c28ec0(param_1 + 0xf);
  func_0x000107c28ab8(param_1 + 0xd);
  func_0x000107c2814c(param_1 + 0xb);
  func_0x000107c288e8(param_1 + 9);
  func_0x000107c28808(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 108809668; end: 10880966f;  */

void FUN_108809668(void)

{
  return;
}



/* Entry: 108809670; end: 108809693;  */

void FUN_108809670(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a73678;
  return;
}



/* Entry: 108809694; end: 1088096bb;  */

void FUN_108809694(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a73678;
  return;
}



/* Entry: 1088096bc; end: 108809703;  */

void FUN_1088096bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uStack_38 = param_2[3];
  uStack_30 = (undefined4)param_2[4];
  uStack_24 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_2c = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_28 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  func_0x000107c27914(&uStack_50);
  return;
}



/* Entry: 108809704; end: 10880973b;  */

long FUN_108809704(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a736d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10880973c; end: 108809747;  */

undefined ** FUN_10880973c(void)

{
  return &PTR_DAT_110a736d8;
}



/* Entry: 108809748; end: 108809823;  */

void FUN_108809748(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar3 = (ulong *)(param_1 + 0x70);
  func_0x000107c28a1c();
  uVar7 = *puVar3;
  func_0x00010880a6b4();
  if ((uVar7 >> 0x20 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined4 *)(lVar1 + 400) = 0;
    FUN_1088093ac(uVar4,lVar1,2);
    uStack_28 = 0;
    puVar5 = &uStack_28;
  }
  else {
    uVar2 = (int)uVar7 - 1;
    if (uVar2 < 0xb) {
      uVar6 = *(undefined4 *)(&UNK_10df5b354 + (ulong)uVar2 * 4);
    }
    else {
      uVar6 = 0xd;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    FUN_1088091e4(uVar4,*(undefined8 *)(param_1 + 0x80),uVar6);
    uStack_24 = (undefined4)uVar4;
    puVar5 = &uStack_24;
  }
  func_0x0001087ade80(param_1 + 0x10,puVar5);
  func_0x00010880a59c();
  func_0x00010880a58c();
  func_0x00010880a584();
  func_0x00010880a478();
  func_0x00010880a4b0();
  return;
}



/* Entry: 108809824; end: 108809857;  */

void FUN_108809824(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x70);
  func_0x00010880a59c();
  func_0x00010880a58c();
  func_0x00010880a584();
  func_0x00010880a478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108809858; end: 10880991b;  */

void FUN_108809858(long param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 *puVar5;
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x00010880a4a0();
  puVar3 = (undefined4 *)(lVar2 + 0xa0);
  uStack_38 = extraout_x8;
  FUN_1087b3548();
  uVar1 = *puVar3;
  func_0x00010880a718();
  func_0x00010880a5ac();
  puVar5 = (undefined1 *)(param_1 + 0x60);
  *puVar5 = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  uVar4 = 4;
  func_0x0001087fc040(auStack_a8,4,uVar1,puVar5);
  func_0x00010880a550();
  func_0x00010880a7c4();
  FUN_1087a33a8();
  func_0x00010880a5a4();
  while( true ) {
    func_0x00010880a478();
    func_0x00010880a4b0();
    func_0x00010880a3d8(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar4 == 0) break;
    func_0x00010880a718();
    func_0x00010880a5ac();
    func_0x00010880a5a4();
    func_0x00010880a624();
    func_0x00010880a548();
    ___cxa_end_catch();
  }
  func_0x00010880a794();
  func_0x000107c27f9c(puVar5 + 0xa0);
  func_0x00010880a5ac();
  func_0x00010880a5a4();
  func_0x00010880a478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar5);
  return;
}



/* Entry: 10880991c; end: 10880994b;  */

void FUN_10880991c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0xa0);
  func_0x00010880a5ac();
  func_0x00010880a5a4();
  func_0x00010880a478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10880994c; end: 10880a323;  */

void FUN_10880994c(undefined *******param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *******pppppppuVar10;
  undefined *******pppppppuVar11;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long lVar12;
  code *extraout_x8_00;
  undefined ******extraout_x8_01;
  uint uVar13;
  undefined *******extraout_x9;
  undefined *******pppppppuVar14;
  undefined *******pppppppuVar15;
  undefined *****pppppuVar16;
  undefined ******ppppppuVar17;
  ulong uVar18;
  undefined ******ppppppuVar19;
  ulong uVar20;
  undefined ******ppppppuVar21;
  undefined8 *****apppppuStack_108 [2];
  char cStack_f1;
  undefined ******ppppppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined *****pppppuStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  pppppppuVar14 = param_1;
  func_0x00010880a4a0();
  pppppppuVar11 = pppppppuVar14 + 0xb0;
  uStack_70 = extraout_x8;
  if (*(char *)(pppppppuVar14 + 0x134) == '\x02') {
    pppppppuVar10 = param_1 + 0xf5;
    func_0x00010880a5d4(*pppppppuVar10);
    pppppppuVar15 = (undefined *******)*pppppppuVar10;
    if ((extraout_w8_00 >> 5 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xba) = 0xffffffff;
      func_0x00010880a62c();
      uVar13 = *(uint *)(pppppppuVar15 + 0x1d);
      if (uVar13 != 0xffffffff) {
        pppppppuVar14 = &ppppppuStack_e0;
        ppppppuStack_e0 = (undefined ******)pppppppuVar11;
        (*(code *)(&PTR_FUN_110a73658)[uVar13])(pppppppuVar14,pppppppuVar15 + 0x13);
        *(uint *)(param_1 + 0xba) = uVar13;
      }
      func_0x00010880a634();
      func_0x00010880a594();
      uVar6 = *(int *)(param_1 + 0xba) == 1;
      if ((bool)uVar6) {
        FUN_10877cff0(param_1 + 0xbb);
        if (*(char *)(param_1[0x133] + 0x9a) == '\x01') {
          func_0x00010880a810();
        }
        else {
          func_0x00010880a804();
        }
        func_0x00010880a6e8();
        bVar4 = *(byte *)(param_1 + 0xb7);
        iVar2 = *(int *)(param_1 + 0xb9);
        ppppppuVar17 = param_1[0xb8];
        pppppppuVar14 = (undefined *******)(ppppppuVar17 + 7);
        if ((bVar4 & iVar2 == 0xd) == 0) {
          pppppppuVar14 = param_1 + 0xb6;
        }
        ppppppuVar21 = *pppppppuVar14;
        lVar12 = (long)ppppppuVar21 - (long)param_1[0x35];
        if (lVar12 < 2) {
          uVar13 = 3;
          if (ppppppuVar21 != param_1[0x35]) {
            uVar13 = 4;
          }
          uVar1 = 2;
          if (lVar12 != 1) {
            uVar1 = uVar13;
          }
          uVar20 = (ulong)uVar1;
        }
        else {
          uVar20 = 1;
        }
        if ((uint)bVar4 == (*(uint *)(param_1 + 0xb2) & 2) >> 1) {
          func_0x00010880a880();
          param_1[6] = (undefined ******)(ulong)bVar4;
          param_1[7] = (undefined ******)0x0;
          param_1[8] = extraout_x8_01;
          param_1[9] = (undefined ******)0x0;
          func_0x00010880a780();
          func_0x00010880a874(&ppppppuStack_e0);
          uVar20 = uStack_d8;
          pppppppuVar11 = (undefined *******)ppppppuStack_e0;
          if (-1 < (long)uStack_d0) {
            uVar20 = uStack_d0 >> 0x38;
            pppppppuVar11 = &ppppppuStack_e0;
          }
          func_0x00010bd3f434(apppppuStack_108,pppppppuVar11,uVar20,&UNK_10f4bbca9);
          if (-1 < cStack_f1) {
            apppppuStack_108[0] = apppppuStack_108;
          }
          func_0x00010880a6f8(apppppuStack_108[0]);
          goto LAB_10880a0f0;
        }
        *(undefined1 *)(param_1 + 0xc5) = 0;
        *(undefined1 *)(param_1 + 0xcd) = 0;
        ppppppuVar19 = param_1[0x133];
        if (bVar4 == 0) {
          func_0x00010880a8dc(param_1[0xb4]);
          uVar18 = (ulong)*(uint *)(pppppppuVar11 + 7);
          *(uint *)((long)ppppppuVar19 + 0x194) = *(uint *)(pppppppuVar11 + 7);
          pppppppuVar11 = param_1 + 0xc5;
          FUN_1086819f0(pppppppuVar11);
          func_0x00010880a8b4();
          (*extraout_x8_00)();
          uStack_d0 = 0;
          uStack_c8 = 0;
          ppppppuStack_e0 = (undefined ******)&PTR_FUN_110a609a8;
          uStack_d8 = 0;
          pppppuStack_c0 = (undefined *****)CONCAT44(pppppuStack_c0._4_4_,0x1b0);
          func_0x00010880a6bc();
          func_0x00010880a81c();
          pppppppuVar14 = &ppppppuStack_e0;
          func_0x000107c28824(pppppppuVar14,param_1 + 0x12f,pppppppuVar11);
          pppppppuVar11 = pppppppuVar14;
          func_0x00010880a69c();
          func_0x00010880a828();
          func_0x000107c28824(pppppppuVar14,param_1 + 300,pppppppuVar11);
          FUN_1087ceb70(uVar18);
          FUN_1087b95a0(pppppppuVar14,uVar18);
          func_0x00010880a66c();
          func_0x00010880a610(*(undefined4 *)((long)param_1[0x133] + 0x52c));
          func_0x000107c28818(pppppppuVar14,param_1 + 0x129);
          func_0x000107c2884c(pppppppuVar10,pppppppuVar14);
          ppppppuVar17 = param_1[0x133];
          func_0x00010880a664();
          func_0x00010880a694();
          func_0x00010880a6ac();
          func_0x000107c2882c(&ppppppuStack_e0);
          if (((ulong)ppppppuVar17[0xa2] >> 0x20 & 1) != 0) {
            func_0x00010880a394();
            func_0x000107c29054(pppppppuVar10);
          }
          pppppuVar16 = param_1[0x132][0x13];
          func_0x000107c2884c(param_1 + 0x108,pppppppuVar10);
          (*(code *)(*pppppuVar16)[10])(pppppuVar16,param_1 + 0x108);
          func_0x00010880a64c();
          func_0x000107c2882c(pppppppuVar10);
LAB_108809eb4:
          FUN_1087a47ec(uVar20,param_1 + 0xc5,param_1[0x132] + 0x17);
          uVar13 = 7;
          if (0xff < ((uint)uVar20 & 0xffff)) {
            uVar13 = 3;
          }
          uVar6 = bVar4 == 0;
          uVar1 = 0;
          if ((bool)uVar6) {
            uVar1 = uVar13;
          }
          pppppppuVar14 = (undefined *******)(ulong)uVar1;
          bVar7 = true;
          if ((uVar20 & 1) != 0) {
            pppppuVar16 = param_1[0x132][0x11];
            ppppppuStack_e0 = (undefined ******)CONCAT26(ppppppuStack_e0._6_2_,0x100120099);
            func_0x000107c27994(&uStack_d8,param_1[0x133] + 4);
            pppuStack_a0 = appuStack_b8;
            appuStack_b8[0] = &PTR_FUN_110a73678;
            uStack_98 = 0;
            pppppuStack_c0 = (undefined *****)ppppppuVar21;
            (*(code *)(*pppppuVar16)[5])(pppppuVar16,&ppppppuStack_e0);
            func_0x0001086cf1c0(&ppppppuStack_e0);
            bVar7 = true;
          }
        }
        else {
          if (iVar2 == 0xd) {
            ppppppuVar17 = param_1[0x132];
            FUN_108809380(ppppppuVar19 + 4,uVar20);
            ppppppuVar19[0x30] = (undefined *****)ppppppuVar21;
            *(undefined1 *)(ppppppuVar19 + 0x31) = 1;
            FUN_1088093ac(ppppppuVar17,ppppppuVar19,uVar20);
            goto LAB_108809eb4;
          }
          iVar3 = *(int *)(ppppppuVar19 + 0x10);
          if (iVar3 == 8) {
            bVar8 = false;
            bVar7 = false;
            bVar9 = iVar2 != 8;
          }
          else if (iVar3 == 6) {
            bVar7 = false;
            bVar9 = false;
            bVar8 = iVar2 != 7;
          }
          else if (iVar3 == 4) {
            bVar8 = false;
            bVar9 = false;
            bVar7 = iVar2 != 6;
          }
          else {
            bVar8 = false;
            bVar7 = false;
            bVar9 = false;
          }
          uVar6 = (int)uVar20 == 2;
          if ((!(bool)uVar6) || ((bVar8 == false && bVar7 == false) && bVar9 == false)) {
            FUN_108809380(ppppppuVar19 + 4,uVar20);
            ppppppuVar19[0x30] = (undefined *****)param_1[0xb6];
            *(undefined1 *)(ppppppuVar19 + 0x31) = 1;
            if (iVar2 == 8) {
              func_0x0001087fa31c(param_1 + 0x10d,ppppppuVar17);
              func_0x00010880a834(param_1[0x133]);
              func_0x00010880a6f0();
            }
            else if (iVar2 == 7) {
              func_0x0001087fa310(pppppppuVar10,ppppppuVar17);
              FUN_1088094dc(param_1[0x133] + 0x73,pppppppuVar10);
              FUN_10891e088(pppppppuVar10);
            }
            else if (iVar2 == 6) {
              FUN_1087fa304(param_1 + 0x119,ppppppuVar17);
              func_0x00010880a840(param_1[0x133]);
              func_0x00010880a708();
            }
            else {
              iVar2 = *(int *)(ppppppuVar19 + 0x10);
              if (iVar2 == 7) {
                *(undefined1 *)((long)param_1[0x133] + 0x519) = 1;
              }
              else if (iVar2 == 0x15) {
                FUN_108808bdc(param_1 + 0x7b,param_1[0x133]);
              }
              else if (iVar2 == 0x14) {
                func_0x00010880a6cc();
                uStack_d8 = 0;
                uStack_d0 = CONCAT71((int7)(uStack_d0 >> 8),extraout_w8) & 0xffffffff;
                ppppppuStack_e0 = (undefined ******)extraout_x9;
                func_0x0001087fa334(param_1 + 0x126,&ppppppuStack_e0);
                if (*(char *)(param_1[0x133] + 0x89) == '\x01') {
                  func_0x00010880a7b0();
                }
                else {
                  func_0x00010880a7a4();
                }
                func_0x00010880a644();
                FUN_108920dbc(&ppppppuStack_e0);
              }
              else if (iVar2 == 0x10) {
                FUN_108808b08(param_1[0x133]);
              }
            }
            func_0x00010880a8f0();
            FUN_1088093ac();
            goto LAB_108809eb4;
          }
          uStack_d0 = 0;
          uStack_c8 = 0;
          ppppppuStack_e0 = (undefined ******)&PTR_FUN_110a6f328;
          uStack_d8 = 0;
          pppppuStack_c0 = (undefined *****)CONCAT44(pppppuStack_c0._4_4_,5);
          func_0x00010880a600();
          pppppppuVar11 = &ppppppuStack_e0;
          FUN_1087915bc(pppppppuVar11,param_1 + 0x123,bVar7);
          func_0x00010880a5e8();
          FUN_1087915bc(pppppppuVar11,param_1 + 0x120,bVar8);
          func_0x00010880a738();
          FUN_1087915bc(pppppppuVar11,param_1 + 0x11d,bVar9);
          FUN_108791a34(apppppuStack_108,pppppppuVar11);
          ppppppuVar17 = param_1[0x132];
          func_0x00010880a720();
          func_0x00010880a5e0();
          func_0x00010880a5f8();
          FUN_108788618(&ppppppuStack_e0);
          pppppuVar16 = ppppppuVar17[0x13];
          FUN_108791a34(param_1 + 0x103,apppppuStack_108);
          (*(code *)(*pppppuVar16)[0xc])(pppppuVar16,param_1 + 0x103);
          func_0x00010880a710();
          FUN_108788618(apppppuStack_108);
          ppppppuStack_e0 = (undefined ******)0x700000004;
          uStack_d8 = uStack_d8 & 0xffffffffffffff00;
          pppuStack_a0 = (undefined ***)((ulong)pppuStack_a0 & 0xffffffffffffff00);
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          func_0x00010880a7f8();
          func_0x0001087fc078(&ppppppuStack_e0);
          pppppppuVar14 = (undefined *******)0x0;
          bVar7 = false;
        }
        func_0x000107c29564(param_1 + 0xc5);
      }
      else {
        if (*(int *)(param_1 + 0xba) != 0) {
          func_0x00010563ab98();
          goto LAB_10880a0f0;
        }
        func_0x00010880a8f0();
        FUN_1088091e4();
        bVar7 = true;
      }
      func_0x00010880a62c();
      func_0x00010880a574();
      if (bVar7) goto LAB_108809f64;
      goto LAB_108809f94;
    }
  }
  else {
    uVar6 = *(char *)(pppppppuVar14 + 0x134) == '\x01';
    if ((bool)uVar6) {
      FUN_1087b3548();
      pppppppuVar14 = (undefined *******)(ulong)*(uint *)pppppppuVar11;
      func_0x00010880a61c();
      func_0x00010880a78c();
LAB_108809f64:
      *(undefined1 *)(param_1 + 0xe6) = 0;
      *(undefined1 *)(param_1 + 0xed) = 0;
      func_0x0001087fc040(&ppppppuStack_e0,4,pppppppuVar14,param_1 + 0xe6);
      func_0x00010880a7f8();
      func_0x0001087fc078(&ppppppuStack_e0);
      FUN_1087a33a8(param_1 + 0xe6);
LAB_108809f94:
      func_0x00010880a854();
      func_0x00010880a86c();
      func_0x00010880a564();
    }
    else {
      pppppppuVar11 = param_1 + 0x45;
      FUN_1087fcdf4(pppppppuVar11);
      pppppppuVar14 = (undefined *******)param_1[3];
      do {
        ppppppuStack_e0 = (undefined ******)0x0;
        pppppppuVar10 = pppppppuVar14 + 2;
        func_0x00010880a7d4(pppppppuVar10,&ppppppuStack_e0);
        if ((int)pppppppuVar10 != 0) {
          FUN_1087fbf9c(pppppppuVar14 + 0x13);
          FUN_1087fc210(pppppppuVar14 + 0x13,pppppppuVar11);
          *(undefined1 *)(pppppppuVar14 + 0x21) = 1;
          pppppppuVar14[2] = (undefined ******)0x2;
          func_0x00010880a894();
          func_0x000107c31508();
          break;
        }
      } while (((uint)ppppppuStack_e0 >> 1 & 1) == 0);
      func_0x000107c27fa0(param_1 + 3,0);
      func_0x00010880a864();
      func_0x00010880a84c();
    }
    func_0x00010880a57c();
    func_0x00010880a478();
    func_0x00010880a4b0();
    func_0x00010880a3d8(uStack_70);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
    pppppppuVar15 = pppppppuVar14;
  }
  __ZNSt13exception_ptrC1ERKS_(param_1 + 0xc5,pppppppuVar15 + 3);
  __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0xc5);
LAB_10880a0f0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10880a0f4);
  (*pcVar5)();
}



/* Entry: 10880a324; end: 10880a393;  */

void FUN_10880a324(long param_1)

{
  if (*(char *)(param_1 + 0x9a0) == '\x02') {
    func_0x000107c27f9c(param_1 + 0x7a8);
    func_0x00010880a594();
    func_0x00010880a574();
  }
  else {
    if (*(char *)(param_1 + 0x9a0) != '\x01') {
      func_0x00010880a864();
      func_0x00010880a84c();
      goto LAB_10880a380;
    }
    func_0x000107c27f9c(param_1 + 0x580);
    func_0x00010880a78c();
  }
  func_0x00010880a854();
  func_0x00010880a86c();
  func_0x00010880a564();
LAB_10880a380:
  func_0x00010880a57c();
  func_0x00010880a478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10880a394; end: 10880a91f;  */

void FUN_10880a394(void)

{
  return;
}



/* Entry: 10880a920; end: 10880a9fb;  */

void FUN_10880a920(long param_1,code *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int extraout_w11;
  long *plStack_78;
  long *plStack_70;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  lVar1 = (long)param_3 >> 1;
  pcVar3 = param_2;
  if ((param_3 & 1) != 0) {
    pcVar3 = *(code **)(*(long *)(lVar2 + lVar1) + ((ulong)param_2 & 0xffffffff));
  }
  func_0x00010880b1b0(pcVar3);
  for (; plStack_78 != plStack_70; plStack_78 = plStack_78 + 2) {
    pcVar3 = param_2;
    if ((param_3 & 1) != 0) {
      pcVar3 = *(code **)(*(long *)(*plStack_78 + lVar1) + ((ulong)param_2 & 0xffffffff));
    }
    (*pcVar3)(*plStack_78 + lVar1,param_4);
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880a9fc; end: 10880aaab;  */

void FUN_10880a9fc(long param_1)

{
  long *plVar1;
  int extraout_w11;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  func_0x00010880b1d4(*(undefined8 *)(*plVar1 + 0x18),plVar1);
  for (; puStack_68 != puStack_60; puStack_68 = puStack_68 + 2) {
    func_0x00010880b1d4(*(undefined8 *)(*(long *)*puStack_68 + 0x18));
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880aaac; end: 10880ab2f;  */

void FUN_10880aaac(void)

{
  long extraout_x9;
  int extraout_w11;
  long *unaff_x20;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  func_0x00010880b1b8();
  if (extraout_x9 != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  func_0x00010880b1b0(*(undefined8 *)(*unaff_x20 + 0x20));
  for (; puStack_58 != puStack_50; puStack_58 = puStack_58 + 2) {
    func_0x00010880b1b0(*(undefined8 *)(*(long *)*puStack_58 + 0x20));
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880ab30; end: 10880abb3;  */

void FUN_10880ab30(void)

{
  long extraout_x9;
  int extraout_w11;
  long *unaff_x20;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  func_0x00010880b1b8();
  if (extraout_x9 != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  func_0x00010880b1b0(*(undefined8 *)(*unaff_x20 + 0x28));
  for (; puStack_58 != puStack_50; puStack_58 = puStack_58 + 2) {
    func_0x00010880b1b0(*(undefined8 *)(*(long *)*puStack_58 + 0x28));
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880abb4; end: 10880ac37;  */

void FUN_10880abb4(void)

{
  long extraout_x9;
  int extraout_w11;
  long *unaff_x20;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  func_0x00010880b1b8();
  if (extraout_x9 != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  func_0x00010880b1b0(*(undefined8 *)(*unaff_x20 + 0x30));
  for (; puStack_58 != puStack_50; puStack_58 = puStack_58 + 2) {
    func_0x00010880b1b0(*(undefined8 *)(*(long *)*puStack_58 + 0x30));
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880ac38; end: 10880ac47;  */

/* WARNING: Removing unreachable block (ram,0x00010880a970) */

void FUN_10880ac38(long param_1,undefined8 param_2)

{
  long *plVar1;
  int extraout_w11;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  func_0x00010880b1b0(*(undefined8 *)(*plVar1 + 0x38));
  for (; puStack_78 != puStack_70; puStack_78 = puStack_78 + 2) {
    (**(code **)(*(long *)*puStack_78 + 0x38))((long *)*puStack_78,param_2);
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880ac48; end: 10880acdb;  */

void FUN_10880ac48(long param_1)

{
  long *plVar1;
  int extraout_w11;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x00010880b188();
    } while (extraout_w11 != 0);
  }
  func_0x00010880b16c();
  func_0x00010880b1e8(*(undefined8 *)(*plVar1 + 0x40),plVar1);
  for (; puStack_58 != puStack_50; puStack_58 = puStack_58 + 2) {
    func_0x00010880b1e8(*(undefined8 *)(*(long *)*puStack_58 + 0x40));
  }
  func_0x00010880b198();
  func_0x00010880b1a0();
  return;
}



/* Entry: 10880acdc; end: 10880acdf;  */

undefined8 * FUN_10880acdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a736f8;
  func_0x00010880afd4(param_1 + 3);
  func_0x000107c27a64(param_1 + 1);
  return param_1;
}



/* Entry: 10880ace0; end: 10880acf3;  */

void FUN_10880ace0(void)

{
  func_0x00010880af98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880acf4; end: 10880ad3b;  */

undefined8 * FUN_10880acf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    puVar2 = puVar1 + 2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_10880ad3c();
  }
  param_1[1] = puVar2;
  return puVar2 + -2;
}



/* Entry: 10880ad3c; end: 10880add3;  */

long FUN_10880ad3c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_10880add4(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_10880aea0(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  *param_2 = 0;
  param_2[1] = 0;
  puStack_38 = puStack_38 + 2;
  FUN_10880ae14(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_10880af28(auStack_48);
  return lVar2;
}



/* Entry: 10880add4; end: 10880ae13;  */

undefined8 * FUN_10880add4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0xfffffffffffffff;
    }
    return puVar2;
  }
  FUN_10880ae8c();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
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
  return puVar2;
}



/* Entry: 10880ae14; end: 10880ae8b;  */

void FUN_10880ae14(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 10880ae8c; end: 10880ae9f;  */

long * FUN_10880ae8c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&UNK_10f4bc396;
  func_0x000104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010880aee8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 10880aea0; end: 10880af0b;  */

long * FUN_10880aea0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010880aee8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10880af0c; end: 10880af27;  */

long * FUN_10880af0c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10880af54();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10880af28; end: 10880af53;  */

long * FUN_10880af28(long *param_1)

{
  FUN_10880af54();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10880af54; end: 10880af5b;  */

void FUN_10880af54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x000107c27a64();
  }
  return;
}



/* Entry: 10880af5c; end: 10880b007;  */

void FUN_10880af5c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    func_0x000107c27a64();
  }
  return;
}



/* Entry: 10880b008; end: 10880b063;  */

void FUN_10880b008(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x10;
      func_0x000107c27a64();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10880b064; end: 10880b133;  */

undefined8 * FUN_10880b064(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uStack_38 = 0;
  lVar8 = (long)puVar2 - (long)puVar9;
  puStack_40 = param_1;
  if (lVar8 != 0) {
    uVar7 = lVar8 >> 4;
    if (uVar7 >> 0x3c != 0) {
      FUN_10880ae8c();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10880b124);
      (*pcVar5)();
    }
    puVar6 = param_1 + 2;
    func_0x00010880aee8();
    *param_1 = puVar6;
    param_1[1] = puVar6;
    param_1[2] = puVar6 + uVar7 * 2;
    for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar10;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[1] = puVar6;
  }
  uStack_38 = 1;
  FUN_10880b134(&puStack_40);
  return param_1;
}



/* Entry: 10880b134; end: 10880b15f;  */

long FUN_10880b134(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10880b008(param_1);
  }
  return param_1;
}



/* Entry: 10880b160; end: 10880b203;  */

undefined1 * FUN_10880b160(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000008;
  FUN_10880b008(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 10880b204; end: 10880b217;  */

void FUN_10880b204(void)

{
  func_0x00010880b220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b218; end: 10880b22f;  */

void FUN_10880b218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b230; end: 10880b243;  */

void FUN_10880b230(void)

{
  func_0x00010880b24c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b244; end: 10880b25b;  */

void FUN_10880b244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b25c; end: 10880b26f;  */

void FUN_10880b25c(void)

{
  func_0x00010880b278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b270; end: 10880b287;  */

void FUN_10880b270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b288; end: 10880b29b;  */

void FUN_10880b288(void)

{
  func_0x00010880b2a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b29c; end: 10880b2b3;  */

void FUN_10880b29c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b2b4; end: 10880b2c7;  */

void FUN_10880b2b4(void)

{
  func_0x00010880b2d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b2c8; end: 10880b30b;  */

void FUN_10880b2c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b30c; end: 10880b4c7;  */

void FUN_10880b30c(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long *plVar4;
  long lVar5;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  char cStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  
  lVar5 = *param_3;
  uStack_d8 = *(undefined8 *)(lVar5 + 0x1c8);
  uStack_e0 = *(undefined8 *)(lVar5 + 0x1c0);
  if (*(long *)(lVar5 + 0x1c8) != 0) {
    do {
      func_0x000107c33740();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(auStack_d0,param_2);
  func_0x000107c29ef4(auStack_b8,param_2);
  cStack_98 = (char)lVar5 + -0x40;
  uStack_a0 = param_4;
  func_0x000107c29a78();
  uStack_94 = 1;
  uStack_90 = 1;
  uStack_8f = *(undefined1 *)(param_6 + 0x13);
  func_0x00010880b704();
  plVar4 = *(long **)(lVar5 + 0x140);
  func_0x00010880b6b0();
  func_0x000107c33744(*(undefined8 *)(*plVar4 + 0x10));
  func_0x00010880b6ec();
  func_0x000107c3373c();
  lVar3 = *param_5;
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lStack_100 = 0;
  if (lVar1 != 0) {
    lStack_100 = lVar1 + 8;
  }
  lStack_f8 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c33754();
      lVar3 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x000107c29544(lVar3 + 0x18,&lStack_100);
  func_0x00010880b68c();
  func_0x000107c29ae4(&lStack_110,lVar5 + 0x1c0,lVar5 + 0x20,lVar1,lVar2);
  lStack_f8 = uStack_108;
  lStack_100 = lStack_110;
  lStack_110 = 0;
  uStack_108 = 0;
  func_0x00010880b6c0();
  func_0x00010880b68c();
  func_0x000107c3374c();
  func_0x00010880b6a8();
  return;
}



/* Entry: 10880b4c8; end: 10880b61f;  */

void FUN_10880b4c8(undefined8 param_1,long *param_2)

{
  int extraout_w10;
  undefined8 *unaff_x19;
  long *plVar1;
  long lVar2;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  
  func_0x000107c33758();
  lVar2 = *param_2;
  uStack_c8 = *(undefined8 *)(lVar2 + 0x1c8);
  uStack_d0 = *(undefined8 *)(lVar2 + 0x1c0);
  if (*(long *)(lVar2 + 0x1c8) != 0) {
    do {
      func_0x000107c33740();
    } while (extraout_w10 != 0);
  }
  func_0x000107c27994(auStack_c0);
  func_0x000107c29ef4(auStack_a8);
  func_0x000107c29a78();
  func_0x00010880b704();
  plVar1 = *(long **)(lVar2 + 0x140);
  func_0x00010880b6b0();
  func_0x000107c33744(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010880b6ec();
  func_0x000107c3373c();
  func_0x000107c29ae4(&uStack_100,lVar2 + 0x1c0,lVar2 + 0x20,*unaff_x19,unaff_x19[1]);
  uStack_e8 = uStack_f8;
  uStack_f0 = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x00010880b6c0();
  func_0x00010880b68c();
  func_0x000107c3374c();
  func_0x00010880b6a8();
  return;
}



/* Entry: 10880b620; end: 10880b623;  */

void FUN_10880b620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a738f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10880b624; end: 10880b637;  */

void FUN_10880b624(void)

{
  func_0x00010880b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b638; end: 10880b653;  */

void FUN_10880b638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b654; end: 10880b667;  */

void FUN_10880b654(void)

{
  func_0x00010880b670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b668; end: 10880b71b;  */

void FUN_10880b668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880b6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b71c; end: 10880b72f;  */

void FUN_10880b71c(void)

{
  func_0x00010880bdb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b730; end: 10880b73b;  */

void FUN_10880b730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880bec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880b73c; end: 10880b74f;  */

void FUN_10880b73c(void)

{
  FUN_10880bb48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880b750; end: 10880baa7;  */

void FUN_10880b750(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined1 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char cStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  long *aplStack_50 [2];
  
  func_0x00010880bf08();
  func_0x000107c28004(&uStack_110);
  func_0x00010b151eb0(&plStack_98,&uStack_110);
  (**(code **)(*plStack_98 + 0x30))(aplStack_50);
  func_0x00010529fde0(&plStack_98);
  func_0x000107c27914(&uStack_110);
  if (aplStack_50[0] == (long *)0x0) {
    func_0x000107c278b8(auStack_68,&UNK_10f4bc453);
    FUN_10880bb74(param_1,auStack_68);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  else {
    if (*(char *)(param_6 + 0x30) == '\x01') {
      func_0x00010bcd5ad0(&uStack_110,param_6);
      func_0x00010bcd5ad0(&plStack_98,param_6 + 0x18);
      (**(code **)(*aplStack_50[0] + 0x28))(&plStack_80,aplStack_50[0],&uStack_110,&plStack_98);
      FUN_10880bd10(aplStack_50,&plStack_80);
      func_0x00010529fde0(&plStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
    }
    uVar1 = *(undefined4 *)(param_5 + 0x18);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x000107c27f70(&uStack_160,param_5);
    auStack_180[0] = 0;
    uStack_168 = 0;
    uStack_110 = 3;
    uStack_10c = 0;
    uStack_108 = 2;
    uStack_100 = 500;
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_128 = 0;
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    uStack_c0 = cStack_148 == '\x01';
    if ((bool)uStack_c0) {
      uStack_d0 = uStack_158;
      uStack_d8 = uStack_160;
      uStack_c8 = uStack_150;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_160 = 0;
    }
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_f4 = uVar1;
    func_0x000107c279a4(auStack_180);
    func_0x000107c279a4(&uStack_160);
    func_0x000107c278a8(&uStack_128);
    func_0x000107c278a8(&uStack_140);
    (**(code **)(**(long **)(param_2 + 8) + 0x10))
              (&plStack_80,*(long **)(param_2 + 8),&uStack_110,aplStack_50);
    if (plStack_80 == (long *)0x0) {
      func_0x00010880bf20();
      func_0x000107c278b8(auStack_1a8,&UNK_10f4bc47a);
      FUN_10880bb74(param_1,auStack_1a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    }
    else {
      (**(code **)(*plStack_80 + 0x18))(&uStack_190);
      puVar4 = (undefined8 *)0x30;
      __Znwm();
      uVar3 = uStack_78;
      plVar2 = plStack_80;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_110a73a40;
      plStack_80 = (long *)0x0;
      uStack_78 = 0;
      puVar4[3] = &PTR_DAT_110a69cc0;
      puVar4[5] = uVar3;
      puVar4[4] = plVar2;
      plStack_98 = (long *)0x0;
      uStack_90 = 0;
      func_0x00010529fe38(&plStack_98);
      *param_1 = puVar4 + 3;
      param_1[1] = puVar4;
      param_1[3] = uStack_188;
      param_1[2] = uStack_190;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x0001052a4560(&uStack_190);
      func_0x00010880bf20();
    }
    func_0x00010529fe04(&uStack_110);
  }
  func_0x00010529fde0(aplStack_50);
  return;
}



/* Entry: 10880baa8; end: 10880bb47;  */

long * FUN_10880baa8(long param_1)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  long alStack_30 [2];
  
  func_0x00010880bf08();
  func_0x000107c28004(auStack_48);
  func_0x00010b151eb0(alStack_30,auStack_48);
  func_0x000107c27914(auStack_48);
  if (alStack_30[0] == 0) {
    plVar1 = (long *)0x1;
  }
  else {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x38))(plVar1,alStack_30);
  }
  func_0x00010529fde0(alStack_30);
  return plVar1;
}



/* Entry: 10880bb48; end: 10880bb73;  */

undefined8 * FUN_10880bb48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a739e8;
  func_0x000107c27f08(param_1 + 1);
  return param_1;
}



/* Entry: 10880bb74; end: 10880bd0f;  */

void FUN_10880bb74(undefined8 *param_1,undefined8 param_2)

{
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char cStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [72];
  undefined1 auStack_58 [40];
  
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c278b8(&uStack_138,&DAT_10f39e1b5);
  func_0x000107c281f8(&uStack_158,param_2);
  uStack_d0 = uStack_128;
  uStack_d8 = uStack_130;
  uStack_e0 = uStack_138;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_108 = 0;
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  uStack_e8 = cStack_140 == '\x01';
  if ((bool)uStack_e8) {
    uStack_f8 = uStack_150;
    uStack_100 = uStack_158;
    uStack_f0 = uStack_148;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_158 = 0;
  }
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_120 = 0;
  uStack_c8 = 0;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_a8 = cStack_140 != '\0';
  if ((bool)uStack_a8) {
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    uStack_b0 = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
  }
  FUN_10880bd54(auStack_a0,&uStack_e0);
  func_0x000105c40d64(auStack_58);
  func_0x000105c411ec();
  func_0x000105c41c1c(param_1 + 2,auStack_58);
  func_0x000105c40fd0(auStack_58);
  func_0x0001052a4808(auStack_a0);
  func_0x0001052a03ac(&uStack_e0);
  func_0x0001052a03ac(&uStack_120);
  func_0x000107c279a4(&uStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_138);
  return;
}



/* Entry: 10880bd10; end: 10880bd53;  */

undefined8 * FUN_10880bd10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010529fde0(&uStack_30);
  return param_1;
}



/* Entry: 10880bd54; end: 10880bd6b;  */

void FUN_10880bd54(void)

{
  FUN_10880bd6c();
  return;
}



/* Entry: 10880bd6c; end: 10880bd83;  */

void FUN_10880bd6c(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* Entry: 10880bd84; end: 10880bd87;  */

void FUN_10880bd84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73a40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10880bd88; end: 10880bd9b;  */

void FUN_10880bd88(void)

{
  func_0x00010880bda8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880bd9c; end: 10880bdbf;  */

void FUN_10880bd9c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x0001005f1e70();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10880bdc0; end: 10880bde7;  */

long FUN_10880bdc0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10880bde8; end: 10880bdeb;  */

void FUN_10880bde8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73a90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10880bdec; end: 10880bdff;  */

void FUN_10880bdec(void)

{
  func_0x00010880be08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880be00; end: 10880be13;  */

void FUN_10880be00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880bec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880be14; end: 10880be3b;  */

long FUN_10880be14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10880be3c; end: 10880be3f;  */

void FUN_10880be3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73ae0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10880be40; end: 10880be53;  */

void FUN_10880be40(void)

{
  func_0x00010880be5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880be54; end: 10880be67;  */

void FUN_10880be54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880bec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880be68; end: 10880be8f;  */

long FUN_10880be68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10880be90; end: 10880be93;  */

void FUN_10880be90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73b30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10880be94; end: 10880bea7;  */

void FUN_10880be94(void)

{
  func_0x00010880beb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880bea8; end: 10880bf2f;  */

void FUN_10880bea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010880bec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10880bf30; end: 10880bfdf;  */

void FUN_10880bf30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10880dab0(&uStack_70);
  func_0x000107c33ab0();
  func_0x000107c33aa4();
  uVar3 = uStack_60;
  uVar2 = uStack_68;
  uVar1 = uStack_70;
  *param_3 = &PTR_FUN_110a73d30;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  param_3[3] = &PTR_FUN_110a7bef8;
  uStack_40 = 0;
  uStack_38 = 0;
  param_3[5] = uVar5;
  param_3[4] = uVar4;
  param_3[7] = uVar2;
  param_3[6] = uVar1;
  param_3[8] = uVar3;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  func_0x000107c27914(&uStack_58);
  func_0x000107c27a64(&uStack_40);
  *param_1 = param_3 + 3;
  param_1[1] = unaff_x20;
  func_0x00010882fa10();
  return;
}



/* Entry: 10880bfe0; end: 10880c003;  */

void FUN_10880bfe0(void)

{
  func_0x000107c339c0();
  func_0x000107c295a8();
  return;
}



/* Entry: 10880c004; end: 10880c007;  */

undefined8 * FUN_10880c004(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110a73c98;
  func_0x0001005f1c5c(&puStack_28);
  return param_1;
}



/* Entry: 10880c008; end: 10880c1b7;  */

undefined8 * FUN_10880c008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73b80;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    FUN_10880c1b8(param_1);
  }
  func_0x000107c289f8(param_1 + 0x73);
  func_0x000107c29d00(param_1 + 0x70);
  func_0x000107c29b78(param_1 + 0x6a);
  func_0x000107c29c4c(param_1 + 0x68);
  func_0x000107c29c68(param_1 + 0x66);
  func_0x000107c28708(param_1 + 100);
  func_0x000107c29ce4(param_1 + 0x62);
  func_0x000107c28ec4(param_1 + 0x60);
  func_0x000107c27a78(param_1 + 0x5e);
  func_0x000107c28658(param_1 + 0x5c);
  func_0x000107c29c34(param_1 + 0x5a);
  func_0x000107c29278(param_1 + 0x58);
  func_0x000107c28d38(param_1 + 0x56);
  func_0x000107c285e0(param_1 + 0x54);
  func_0x000107c29d04(param_1 + 0x52);
  func_0x000107c29798(param_1 + 0x50);
  func_0x000107c29180(param_1 + 0x4e);
  func_0x000107c29184(param_1 + 0x4c);
  func_0x000107c28a10(param_1 + 0x4a);
  func_0x000107c28714(param_1 + 0x48);
  func_0x000107c286ec(param_1 + 0x46);
  func_0x000107c28710(param_1 + 0x44);
  func_0x000107c29ca4(param_1 + 0x42);
  func_0x000107c2814c(param_1 + 0x40);
  func_0x000107c291a8(param_1 + 0x3e);
  func_0x000107c29c8c(param_1 + 0x3c);
  func_0x000107c288a4(param_1 + 0x3a);
  func_0x000107c2917c(param_1 + 0x38);
  func_0x000107c288e8(param_1 + 0x36);
  func_0x000107c297bc(param_1 + 0x34);
  func_0x000107c28254(param_1 + 0x32);
  func_0x000107c29198(param_1 + 0x30);
  func_0x000107c29ba4(param_1 + 0x2e);
  func_0x000107c29cac(param_1 + 0x2c);
  func_0x000107c29ca8(param_1 + 0x2a);
  func_0x000107c29c28(param_1 + 0x28);
  func_0x000107c29c28(param_1 + 0x26);
  func_0x000107c29b90(param_1 + 0x24);
  func_0x000107c29b90(param_1 + 0x22);
  func_0x000107c29b90(param_1 + 0x20);
  func_0x000107c28c90(param_1 + 0x1e);
  func_0x000107c2911c(param_1 + 0x1c);
  func_0x000107c286d4(param_1 + 0x1a);
  func_0x000107c28868(param_1 + 0x18);
  func_0x000107c27c20(param_1 + 0x16);
  func_0x000107c286bc(param_1 + 1);
  return param_1;
}



/* Entry: 10880c1b8; end: 10880c3cb;  */

undefined8 * FUN_10880c1b8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  code *extraout_x8;
  long unaff_x19;
  undefined1 auStack_120 [24];
  undefined8 *puStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 *puStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  func_0x000107c3378c();
  auStack_98[0] = 0x10;
  uStack_90 = 0;
  func_0x000107c28258();
  uStack_80 = 1;
  auStack_b8[0] = 0x11;
  uStack_b0 = 0;
  uStack_88 = param_1;
  func_0x000107c28258();
  uStack_a0 = 1;
  uStack_d8 = 0x1c;
  uStack_d0 = 0;
  uStack_a8 = param_1;
  func_0x000107c28258();
  uStack_c0 = 1;
  uStack_c8 = param_1;
  FUN_10880e040(&uStack_e0);
  func_0x00010bcd32f8(&uStack_e0);
  func_0x000107c33aac(auStack_b8);
  puVar2 = auStack_b8;
  func_0x000107c28afc();
  func_0x00010882e540(*(undefined8 *)(unaff_x19 + 0xb0));
  (*extraout_x8)();
  uStack_100 = 0x1e;
  uStack_f8 = 0;
  puVar3 = puVar2;
  func_0x000107c28258();
  uStack_e8 = 1;
  puStack_f0 = puVar3;
  func_0x00010bcceaec(*(undefined8 *)(unaff_x19 + 0xb0));
  func_0x000107c33c1c();
  uVar1 = uStack_100;
  puVar4 = &uStack_f8;
  func_0x000107c2825c();
  puStack_108 = puVar4;
  func_0x000107c278b8(auStack_78,&UNK_10f4bc716);
  func_0x000107c28af4(puVar2);
  func_0x000107c278b8(auStack_60,puVar2);
  func_0x000107c33954(auStack_120,auStack_78);
  func_0x000107c28af8(uVar1,&puStack_108,auStack_120);
  func_0x00010882fa18();
  func_0x000107c27bbc(auStack_78);
  func_0x00010882fc7c(*(undefined8 *)(unaff_x19 + 0x1f0));
  lVar5 = unaff_x19 + 0x1f0;
  FUN_10880c47c();
  auStack_78[0] = 0x1d;
  uStack_70 = 0;
  func_0x000107c28258();
  auStack_60[0] = 1;
  lStack_68 = lVar5;
  func_0x000107c29b20();
  FUN_10880c498(unaff_x19 + 8);
  func_0x000107c28288(&uStack_70);
  func_0x000107c28afc(auStack_78);
  func_0x000107c33aac(auStack_98);
  func_0x000107c28afc(auStack_98);
  *(undefined1 *)(unaff_x19 + 0x390) = 1;
  puVar4 = &uStack_e0;
  func_0x000107c27f9c(puVar4);
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010882ee7c();
  func_0x000107c280f8();
  func_0x000107c27bbc(auStack_78);
  puVar4 = &uStack_e0;
  func_0x000107c27f9c();
  func_0x00010882edf0();
  *puVar4 = &PTR_FUN_110a73b80;
  if ((*(byte *)(puVar4 + 0x72) & 1) == 0) {
    FUN_10880c1b8(puVar4);
  }
  func_0x000107c289f8(puVar4 + 0x73);
  func_0x000107c29d00(puVar4 + 0x70);
  func_0x000107c29b78(puVar4 + 0x6a);
  func_0x000107c29c4c(puVar4 + 0x68);
  func_0x000107c29c68(puVar4 + 0x66);
  func_0x000107c28708(puVar4 + 100);
  func_0x000107c29ce4(puVar4 + 0x62);
  func_0x000107c28ec4(puVar4 + 0x60);
  func_0x000107c27a78(puVar4 + 0x5e);
  func_0x000107c28658(puVar4 + 0x5c);
  func_0x000107c29c34(puVar4 + 0x5a);
  func_0x000107c29278(puVar4 + 0x58);
  func_0x000107c28d38(puVar4 + 0x56);
  func_0x000107c285e0(puVar4 + 0x54);
  func_0x000107c29d04(puVar4 + 0x52);
  func_0x000107c29798(puVar4 + 0x50);
  func_0x000107c29180(puVar4 + 0x4e);
  func_0x000107c29184(puVar4 + 0x4c);
  func_0x000107c28a10(puVar4 + 0x4a);
  func_0x000107c28714(puVar4 + 0x48);
  func_0x000107c286ec(puVar4 + 0x46);
  func_0x000107c28710(puVar4 + 0x44);
  func_0x000107c29ca4(puVar4 + 0x42);
  func_0x000107c2814c(puVar4 + 0x40);
  func_0x000107c291a8(puVar4 + 0x3e);
  func_0x000107c29c8c(puVar4 + 0x3c);
  func_0x000107c288a4(puVar4 + 0x3a);
  func_0x000107c2917c(puVar4 + 0x38);
  func_0x000107c288e8(puVar4 + 0x36);
  func_0x000107c297bc(puVar4 + 0x34);
  func_0x000107c28254(puVar4 + 0x32);
  func_0x000107c29198(puVar4 + 0x30);
  func_0x000107c29ba4(puVar4 + 0x2e);
  func_0x000107c29cac(puVar4 + 0x2c);
  func_0x000107c29ca8(puVar4 + 0x2a);
  func_0x000107c29c28(puVar4 + 0x28);
  func_0x000107c29c28(puVar4 + 0x26);
  func_0x000107c29b90(puVar4 + 0x24);
  func_0x000107c29b90(puVar4 + 0x22);
  func_0x000107c29b90(puVar4 + 0x20);
  func_0x000107c28c90(puVar4 + 0x1e);
  func_0x000107c2911c(puVar4 + 0x1c);
  func_0x000107c286d4(puVar4 + 0x1a);
  func_0x000107c28868(puVar4 + 0x18);
  func_0x000107c27c20(puVar4 + 0x16);
  func_0x000107c286bc(puVar4 + 1);
  return puVar4;
}



/* Entry: 10880c3cc; end: 10880c3cf;  */

undefined8 * FUN_10880c3cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73b80;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    FUN_10880c1b8(param_1);
  }
  func_0x000107c289f8(param_1 + 0x73);
  func_0x000107c29d00(param_1 + 0x70);
  func_0x000107c29b78(param_1 + 0x6a);
  func_0x000107c29c4c(param_1 + 0x68);
  func_0x000107c29c68(param_1 + 0x66);
  func_0x000107c28708(param_1 + 100);
  func_0x000107c29ce4(param_1 + 0x62);
  func_0x000107c28ec4(param_1 + 0x60);
  func_0x000107c27a78(param_1 + 0x5e);
  func_0x000107c28658(param_1 + 0x5c);
  func_0x000107c29c34(param_1 + 0x5a);
  func_0x000107c29278(param_1 + 0x58);
  func_0x000107c28d38(param_1 + 0x56);
  func_0x000107c285e0(param_1 + 0x54);
  func_0x000107c29d04(param_1 + 0x52);
  func_0x000107c29798(param_1 + 0x50);
  func_0x000107c29180(param_1 + 0x4e);
  func_0x000107c29184(param_1 + 0x4c);
  func_0x000107c28a10(param_1 + 0x4a);
  func_0x000107c28714(param_1 + 0x48);
  func_0x000107c286ec(param_1 + 0x46);
  func_0x000107c28710(param_1 + 0x44);
  func_0x000107c29ca4(param_1 + 0x42);
  func_0x000107c2814c(param_1 + 0x40);
  func_0x000107c291a8(param_1 + 0x3e);
  func_0x000107c29c8c(param_1 + 0x3c);
  func_0x000107c288a4(param_1 + 0x3a);
  func_0x000107c2917c(param_1 + 0x38);
  func_0x000107c288e8(param_1 + 0x36);
  func_0x000107c297bc(param_1 + 0x34);
  func_0x000107c28254(param_1 + 0x32);
  func_0x000107c29198(param_1 + 0x30);
  func_0x000107c29ba4(param_1 + 0x2e);
  func_0x000107c29cac(param_1 + 0x2c);
  func_0x000107c29ca8(param_1 + 0x2a);
  func_0x000107c29c28(param_1 + 0x28);
  func_0x000107c29c28(param_1 + 0x26);
  func_0x000107c29b90(param_1 + 0x24);
  func_0x000107c29b90(param_1 + 0x22);
  func_0x000107c29b90(param_1 + 0x20);
  func_0x000107c28c90(param_1 + 0x1e);
  func_0x000107c2911c(param_1 + 0x1c);
  func_0x000107c286d4(param_1 + 0x1a);
  func_0x000107c28868(param_1 + 0x18);
  func_0x000107c27c20(param_1 + 0x16);
  func_0x000107c286bc(param_1 + 1);
  return param_1;
}



/* Entry: 10880c3d0; end: 10880c3e3;  */

void FUN_10880c3d0(void)

{
  FUN_10880c008();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10880c3e4; end: 10880c47b;  */

void FUN_10880c3e4(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long *extraout_x10;
  int extraout_w12;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_50 = *param_2;
  lStack_48 = param_2[1];
  if (lStack_48 == 0) {
    uStack_28 = 0;
    uStack_30 = uStack_50;
  }
  else {
    do {
      func_0x000107c33900();
    } while (extraout_w12 != 0);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x10,0x10);
      if (bVar2) {
        *extraout_x10 = *extraout_x10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      uStack_30 = extraout_x9;
      uStack_28 = extraout_x8;
    } while (cVar1 != '\0');
  }
  uStack_38 = param_1;
  FUN_10880db64(auStack_40,&uStack_38);
  FUN_10863d4dc(&uStack_30);
  FUN_10863d4dc(&uStack_50);
  func_0x000107c27f9c(auStack_40);
  return;
}



/* Entry: 10880c47c; end: 10880c497;  */

void FUN_10880c47c(void)

{
  func_0x00010882ed94();
  func_0x000107c291a8();
  return;
}



/* Entry: 10880c498; end: 10880c6bb;  */

void FUN_10880c498(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  
  __ZNSt3__15mutex4lockEv(0x11372ce68);
  uVar6 = uRam000000011372ceb0;
  if ((uRam000000011372ceb0 != 0) && (lRam000000011372cec0 != 0)) {
    uVar8 = 0x11372cec0;
    func_0x000107c278c4(0x11372cec0,param_1);
    uVar10 = uVar6 - 1;
    if ((uVar6 & uVar10) == 0) {
      uVar11 = uVar8 & uVar10;
    }
    else {
      uVar11 = uVar8;
      if (uVar6 <= uVar8) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar8 / uVar6;
        }
        uVar11 = uVar8 - uVar11 * uVar6;
      }
    }
    plVar9 = *(long **)(lRam000000011372cea8 + uVar11 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto code_r0x000100566ef8;
          uVar4 = plVar9[1];
          if (uVar4 != uVar8) break;
          plVar3 = plVar9 + 2;
          func_0x000107c278d0(plVar3,param_1);
          uVar4 = uRam000000011372ceb0;
          lVar2 = lRam000000011372cea8;
          if ((int)plVar3 != 0) {
            lVar5 = *plVar9;
            uVar6 = plVar9[1];
            uVar8 = uRam000000011372ceb0 - 1;
            if ((uRam000000011372ceb0 & uVar8) == 0) {
              uVar6 = uVar8 & uVar6;
            }
            else if (uRam000000011372ceb0 <= uVar6) {
              uVar10 = 0;
              if (uRam000000011372ceb0 != 0) {
                uVar10 = uVar6 / uRam000000011372ceb0;
              }
              uVar6 = uVar6 - uVar10 * uRam000000011372ceb0;
            }
            plVar3 = *(long **)(lRam000000011372cea8 + uVar6 * 8);
            do {
              plVar7 = plVar3;
              plVar3 = (long *)*plVar7;
            } while ((long *)*plVar7 != plVar9);
            if (plVar7 == (long *)0x11372ceb8) {
LAB_10880c5fc:
              if (lVar5 == 0) {
LAB_10880c630:
                *(undefined8 *)(lRam000000011372cea8 + uVar6 * 8) = 0;
                lVar5 = *plVar9;
                goto LAB_10880c638;
              }
              uVar10 = *(ulong *)(lVar5 + 8);
              if ((uRam000000011372ceb0 & uVar8) == 0) {
                uVar11 = uVar10 & uVar8;
              }
              else {
                uVar11 = uVar10;
                if (uRam000000011372ceb0 <= uVar10) {
                  uVar11 = 0;
                  if (uRam000000011372ceb0 != 0) {
                    uVar11 = uVar10 / uRam000000011372ceb0;
                  }
                  uVar11 = uVar10 - uVar11 * uRam000000011372ceb0;
                }
              }
              if (uVar11 != uVar6) goto LAB_10880c630;
LAB_10880c640:
              if ((uVar4 & uVar8) == 0) {
                uVar10 = uVar10 & uVar8;
              }
              else if (uVar4 <= uVar10) {
                uVar8 = 0;
                if (uVar4 != 0) {
                  uVar8 = uVar10 / uVar4;
                }
                uVar10 = uVar10 - uVar8 * uVar4;
              }
              if (uVar10 != uVar6) {
                *(long **)(lVar2 + uVar10 * 8) = plVar7;
                lVar5 = *plVar9;
              }
            }
            else {
              uVar10 = plVar7[1];
              if ((uRam000000011372ceb0 & uVar8) == 0) {
                uVar10 = uVar10 & uVar8;
              }
              else if (uRam000000011372ceb0 <= uVar10) {
                uVar11 = 0;
                if (uRam000000011372ceb0 != 0) {
                  uVar11 = uVar10 / uRam000000011372ceb0;
                }
                uVar10 = uVar10 - uVar11 * uRam000000011372ceb0;
              }
              if (uVar10 != uVar6) goto LAB_10880c5fc;
LAB_10880c638:
              if (lVar5 != 0) {
                uVar10 = *(ulong *)(lVar5 + 8);
                goto LAB_10880c640;
              }
            }
            *plVar7 = lVar5;
            *plVar9 = 0;
            lRam000000011372cec0 = lRam000000011372cec0 + -1;
            uStack_60 = 0x11372ceb8;
            uStack_58 = 1;
            uStack_57 = 0;
            uStack_53 = 0;
            plStack_68 = plVar9;
            func_0x000107c29b58(&plStack_68);
            goto code_r0x000100566ef8;
          }
        }
        if ((uVar6 & uVar10) == 0) {
          uVar4 = uVar4 & uVar10;
        }
        else if (uVar6 <= uVar4) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar4 / uVar6;
          }
          uVar4 = uVar4 - uVar1 * uVar6;
        }
      } while (uVar4 == uVar11);
    }
  }
code_r0x000100566ef8:
  func_0x000107c33b30();
  return;
}



/* Entry: 10880c6bc; end: 10880d09b;  */

void FUN_10880c6bc(void)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  char extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  uint extraout_w8_11;
  code *extraout_x8;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  code *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  long *extraout_x8_13;
  long *extraout_x8_14;
  long *extraout_x8_15;
  long *extraout_x8_16;
  long *extraout_x8_17;
  long *extraout_x8_18;
  long *extraout_x8_19;
  long *extraout_x8_20;
  long *extraout_x8_21;
  long *extraout_x8_22;
  long *extraout_x8_23;
  long *extraout_x8_24;
  long *extraout_x8_25;
  long *extraout_x8_26;
  long *extraout_x8_27;
  long *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  long *extraout_x8_32;
  long *plVar7;
  long *extraout_x8_33;
  long *extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  char extraout_w9;
  code *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  int extraout_w10_11;
  uint extraout_w10_12;
  uint extraout_w10_13;
  int extraout_w10_14;
  uint extraout_w10_15;
  uint extraout_w10_16;
  int extraout_w10_17;
  uint extraout_w10_18;
  uint extraout_w10_19;
  int extraout_w10_20;
  uint extraout_w10_21;
  uint extraout_w10_22;
  int extraout_w10_23;
  uint extraout_w10_24;
  uint extraout_w10_25;
  int extraout_w10_26;
  uint extraout_w10_27;
  uint extraout_w10_28;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  uint extraout_w11_03;
  uint extraout_w11_04;
  uint extraout_w11_05;
  uint extraout_w11_06;
  uint extraout_w11_07;
  uint extraout_w11_08;
  uint extraout_w11_09;
  uint extraout_w11_10;
  uint extraout_w11_11;
  uint extraout_w11_12;
  uint extraout_w11_13;
  uint extraout_w11_14;
  uint extraout_w11_15;
  uint extraout_w11_16;
  uint extraout_w11_17;
  uint extraout_w11_18;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010882fb44();
  puVar5 = (undefined8 *)0x148;
  __Znwm();
  *puVar5 = FUN_10882cba0;
  puVar5[1] = FUN_10882d2e4;
  puVar5[0x27] = unaff_x20;
  func_0x00010882f5c8();
  func_0x00010882eb00();
  if (*(long *)(unaff_x20 + 0x2b0) != 0) {
    FUN_108697a00(*(long *)(unaff_x20 + 0x2b0),2);
  }
  (**(code **)(**(long **)(unaff_x20 + 0x1b0) + 0x10))(puVar5 + 0x20);
  (**(code **)(**(long **)(unaff_x20 + 0x210) + 8))();
  func_0x000107c33a5c(*(undefined8 *)(unaff_x20 + 0x2c0));
  (*extraout_x8)();
  FUN_10880d09c(puVar5 + 0x25,unaff_x20 + 0x350);
  func_0x000107c33c68(*(undefined8 *)(unaff_x20 + 0x250));
  (*extraout_x9)(auStack_70);
  (**(code **)(**(long **)(unaff_x20 + 0x260) + 0x20))(auStack_48);
  (**(code **)(**(long **)(unaff_x20 + 0x270) + 0x20))(auStack_50);
  FUN_1086c1550(puVar5 + 0x24,auStack_70,auStack_48,auStack_50);
  func_0x000107c27f9c(auStack_50);
  func_0x000107c27f9c(auStack_48);
  func_0x000107c27f9c(auStack_70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x2a0);
  func_0x00010882fa04();
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar11;
  func_0x000107c285e0(auStack_70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x2d0);
  func_0x00010882fa04();
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar11;
  func_0x000107c29c34(auStack_70);
  (**(code **)(**(long **)(unaff_x20 + 0x280) + 0x30))(puVar5 + 0x23);
  (**(code **)(**(long **)(unaff_x20 + 0x310) + 0x50))(puVar5 + 0x22);
  func_0x000107c33c68(*(undefined8 *)(unaff_x20 + 0x290));
  (*extraout_x9_00)(puVar5 + 0x21);
  puVar5[0x19] = 0;
  func_0x00010882e6d8(0x12);
  func_0x00010882ebf8();
  func_0x000107c33a5c(*(undefined8 *)(unaff_x20 + 0x1a0));
  (*extraout_x8_00)();
  FUN_10880d2f8(unaff_x20 + 0x1a0);
  func_0x00010882f2bc();
  func_0x000107c28afc(puVar5 + 0x18);
  plVar6 = (long *)(unaff_x20 + 0x398);
  func_0x000107c289e8();
  uVar3 = (char)*plVar6 != '\0';
  uVar4 = (char)*plVar6 == '\x01';
  if ((bool)uVar4) {
    plVar6 = *(long **)(unaff_x20 + 0x1b0);
    (**(code **)(*plVar6 + 0xf0))();
  }
  puVar5[0x1d] = 0;
  func_0x00010882e6d8(0x18);
  func_0x00010882ebf8();
  puVar5[4] = puVar5[0x20];
  do {
    func_0x00010882e6b8();
  } while (extraout_w10 != 0);
  func_0x00010882effc(puVar5[4]);
  if ((extraout_w8_02 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 0;
    lVar9 = puVar5[4];
    func_0x00010882e774();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x00010882f808();
    plVar7 = extraout_x8_01;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_03;
        uVar2 = extraout_w10_01;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_02;
        uVar2 = extraout_w10_00;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) goto LAB_10880ceac;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x00010882f9bc();
  func_0x00010882f1c0();
  func_0x00010882f2bc();
  func_0x000107c28afc(puVar5 + 0x1c);
  puVar5[5] = 0;
  lVar9 = puVar5[0x27];
  func_0x00010882e6d8(0x16);
  func_0x00010882ebf8();
  lVar9 = *(long *)(lVar9 + 0x100);
  *(undefined1 *)(lVar9 + 0x38) = extraout_w8;
  plVar6 = *(long **)(lVar9 + 0x18);
  func_0x00010882f820();
  func_0x00010882f974();
  func_0x00010882f604();
  do {
    func_0x00010882e6b8();
  } while (extraout_w10_02 != 0);
  func_0x00010882eaf0();
  if ((extraout_w8_03 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 1;
    lVar9 = puVar5[8];
    func_0x00010882e774();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x00010882f808();
    plVar7 = extraout_x8_04;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_06;
        uVar2 = extraout_w10_04;
        uVar8 = extraout_w11_02;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_05;
        uVar2 = extraout_w10_03;
        uVar8 = extraout_w11_01;
      }
      if ((uVar8 & 1) != 0) goto LAB_10880ceac;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x00010882f1b8();
  func_0x00010882efec();
  func_0x00010882f0a0();
  func_0x00010882fc40();
  func_0x00010882f2bc();
  func_0x00010882fcc8();
  lVar9 = puVar5[0x27];
  if (*(long *)(lVar9 + 0xe0) != 0) {
    puVar5[9] = 0;
    func_0x00010882e6d8(0x15);
    func_0x00010882ebf8();
    plVar6 = *(long **)(lVar9 + 0xe0);
    func_0x00010882f96c();
    func_0x00010882f5ec();
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_05 != 0);
    func_0x00010882effc(puVar5[0xc]);
    if ((extraout_w8_04 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x28) = 2;
      lVar9 = puVar5[0xc];
      func_0x00010882e774();
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        func_0x000107c3a5c0();
        lVar10 = *plVar6;
      }
      func_0x00010882f808();
      plVar7 = extraout_x8_07;
      do {
        if (*plVar7 == 0) {
          func_0x00010882e74c();
          plVar7 = extraout_x8_09;
          uVar2 = extraout_w10_07;
          uVar8 = extraout_w11_04;
        }
        else {
          func_0x00010882f020();
          plVar7 = extraout_x8_08;
          uVar2 = extraout_w10_06;
          uVar8 = extraout_w11_03;
        }
        if ((uVar8 & 1) != 0) goto LAB_10880ceac;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x00010882f5fc();
    func_0x00010882f0a0();
    func_0x00010882f964();
    func_0x00010882fc4c();
    func_0x00010882f2bc();
    func_0x00010882f3c4();
    lVar9 = puVar5[0x27];
  }
  if (*(long *)(lVar9 + 0x170) != 0) {
    auStack_70[0] = 0x17;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x000107c28258();
    func_0x000107c33a20();
    func_0x00010882f6ec(*(undefined8 *)(lVar9 + 0x170));
    (*extraout_x8_10)();
    plVar6 = (long *)(lVar9 + 0x170);
    func_0x00010880d34c();
    func_0x000107c33c3c();
    func_0x00010882fa20();
    lVar9 = puVar5[0x27];
  }
  if (*(long *)(lVar9 + 0x110) != 0) {
    puVar5[9] = 0;
    func_0x00010882e6d8(0x1a);
    func_0x00010882ebf8();
    plVar6 = *(long **)(*(long *)(lVar9 + 0x110) + 0x18);
    *(undefined1 *)(*(long *)(lVar9 + 0x110) + 0x38) = extraout_w8_00;
    func_0x00010882f820();
    func_0x00010882f96c();
    func_0x00010882f5ec();
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_08 != 0);
    func_0x00010882effc(puVar5[0xc]);
    if ((extraout_w8_05 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x28) = 3;
      lVar9 = puVar5[0xc];
      func_0x00010882e774();
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        func_0x000107c3a5c0();
        lVar10 = *plVar6;
      }
      func_0x00010882f808();
      plVar7 = extraout_x8_11;
      do {
        if (*plVar7 == 0) {
          func_0x00010882e74c();
          plVar7 = extraout_x8_13;
          uVar2 = extraout_w10_10;
          uVar8 = extraout_w11_06;
        }
        else {
          func_0x00010882f020();
          plVar7 = extraout_x8_12;
          uVar2 = extraout_w10_09;
          uVar8 = extraout_w11_05;
        }
        if ((uVar8 & 1) != 0) goto LAB_10880ceac;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x00010882f5fc();
    func_0x00010882f0a0();
    func_0x00010882f964();
    func_0x00010882fc28();
    func_0x00010882f2bc();
    func_0x00010882f3c4();
    lVar9 = puVar5[0x27];
  }
  if (*(long *)(lVar9 + 0x120) != 0) {
    *(undefined1 *)(*(long *)(lVar9 + 0x120) + 0x38) = 1;
    func_0x00010882ee08();
    func_0x00010882f974();
    func_0x00010882f604();
    do {
      func_0x00010882e6b8();
    } while (extraout_w10_11 != 0);
    func_0x00010882eaf0();
    if ((extraout_w8_06 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0x28) = 4;
      lVar9 = puVar5[8];
      func_0x00010882e774();
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        func_0x000107c3a5c0();
        lVar10 = *plVar6;
      }
      func_0x00010882f3b8();
      plVar7 = extraout_x8_14;
      do {
        if (*plVar7 == 0) {
          func_0x00010882e74c();
          plVar7 = extraout_x8_16;
          uVar2 = extraout_w10_13;
          uVar8 = extraout_w11_08;
        }
        else {
          func_0x00010882f020();
          plVar7 = extraout_x8_15;
          uVar2 = extraout_w10_12;
          uVar8 = extraout_w11_07;
        }
        if ((uVar8 & 1) != 0) goto LAB_10880cf00;
      } while ((uVar2 >> 1 & 1) == 0);
    }
    func_0x00010882f1b8();
    func_0x00010882efec();
    func_0x00010882f0a0();
    func_0x00010882fc34();
  }
  puVar5[0x15] = 0;
  func_0x00010882e6d8(0x13);
  func_0x00010882ebf8();
  puVar5[8] = puVar5[0x24];
  do {
    func_0x00010882e6b8();
  } while (extraout_w10_14 != 0);
  func_0x00010882eaf0();
  if ((extraout_w8_07 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 5;
    lVar9 = puVar5[8];
    func_0x00010882e774();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x00010882f808();
    plVar7 = extraout_x8_17;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_19;
        uVar2 = extraout_w10_16;
        uVar8 = extraout_w11_10;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_18;
        uVar2 = extraout_w10_15;
        uVar8 = extraout_w11_09;
      }
      if ((uVar8 & 1) != 0) goto LAB_10880ceac;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x00010882f1b8();
  func_0x00010882efec();
  func_0x00010882f2bc();
  plVar6 = puVar5 + 0x14;
  func_0x000107c28afc();
  puVar5[0x11] = 0;
  func_0x00010882e6d8(0x14);
  func_0x00010882ebf8();
  puVar5[8] = puVar5[0x23];
  do {
    func_0x00010882e6b8();
  } while (extraout_w10_17 != 0);
  func_0x00010882eaf0();
  if ((extraout_w8_08 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 6;
    lVar9 = puVar5[8];
    func_0x00010882e774();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x00010882f808();
    plVar7 = extraout_x8_20;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_22;
        uVar2 = extraout_w10_19;
        uVar8 = extraout_w11_12;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_21;
        uVar2 = extraout_w10_18;
        uVar8 = extraout_w11_11;
      }
      if ((uVar8 & 1) != 0) goto LAB_10880ceac;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x00010882f1b8();
  func_0x00010882efec();
  func_0x00010882f2bc();
  plVar6 = puVar5 + 0x10;
  func_0x000107c28afc();
  puVar5[8] = puVar5[0x22];
  do {
    func_0x00010882e6b8();
  } while (extraout_w10_20 != 0);
  func_0x00010882eaf0();
  if ((extraout_w8_09 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 7;
    lVar9 = puVar5[8];
    func_0x00010882e774();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x00010882f3b8();
    plVar7 = extraout_x8_23;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_25;
        uVar2 = extraout_w10_22;
        uVar8 = extraout_w11_14;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_24;
        uVar2 = extraout_w10_21;
        uVar8 = extraout_w11_13;
      }
      if ((uVar8 & 1) != 0) goto LAB_10880cf00;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x00010882f1b8();
  func_0x00010882efec();
  puVar5[0xd] = 0;
  func_0x00010882e6d8(0x1b);
  func_0x00010882ebf8();
  puVar5[8] = puVar5[0x21];
  do {
    func_0x00010882e6b8();
  } while (extraout_w10_23 != 0);
  func_0x00010882eaf0();
  if ((extraout_w8_10 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 8;
    lVar9 = puVar5[8];
    func_0x00010882e774();
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar6;
    }
    func_0x00010882f808();
    plVar7 = extraout_x8_26;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_28;
        uVar2 = extraout_w10_25;
        uVar8 = extraout_w11_16;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_27;
        uVar2 = extraout_w10_24;
        uVar8 = extraout_w11_15;
      }
      if ((uVar8 & 1) != 0) goto LAB_10880ceac;
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x00010882f1b8();
  func_0x00010882efec();
  lVar9 = puVar5[0x27];
  uVar12 = *(undefined8 *)(lVar9 + 0x298);
  uVar11 = *(undefined8 *)(lVar9 + 0x290);
  func_0x00010882fa04();
  *(undefined8 *)(lVar9 + 0x298) = uVar12;
  *(undefined8 *)(lVar9 + 0x290) = uVar11;
  func_0x000107c29d04(auStack_70);
  func_0x00010880d314(lVar9 + 0x110);
  func_0x00010882f2bc();
  func_0x000107c28afc(puVar5 + 0xc);
  func_0x00010882f45c();
  func_0x00010882f430();
  func_0x00010882ebf8();
  func_0x000107c33a5c(*(undefined8 *)(lVar9 + 0x1b0));
  (*extraout_x8_29)();
  func_0x00010882f2bc();
  func_0x00010882f3c4();
  func_0x000107c339ac(*(undefined8 *)(puVar5[0x27] + 0x1c0));
  (*extraout_x8_30)();
  plVar6 = *(long **)(puVar5[0x27] + 0x1e0);
  func_0x000107c33b0c();
  (*extraout_x8_31)();
  puVar5[0x26] = puVar5[0x25];
  do {
    func_0x00010882e6b8();
  } while (extraout_w10_26 != 0);
  func_0x00010882effc(puVar5[0x26]);
  if ((extraout_w8_11 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x28) = 9;
    lVar9 = puVar5[0x26];
    func_0x00010882e774();
    if (*plVar6 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010882f3b8();
    plVar7 = extraout_x8_32;
    do {
      if (*plVar7 == 0) {
        func_0x00010882e74c();
        plVar7 = extraout_x8_34;
        uVar2 = extraout_w10_28;
        uVar8 = extraout_w11_18;
      }
      else {
        func_0x00010882f020();
        plVar7 = extraout_x8_33;
        uVar2 = extraout_w10_27;
        uVar8 = extraout_w11_17;
      }
      if ((uVar8 & 1) != 0) {
        func_0x00010882fe64();
        if ((bool)uVar4) {
          func_0x00010882e988();
          func_0x00010882e484();
          func_0x00010882e380();
          *(long **)(lVar9 + 0x90) = plVar6;
        }
        func_0x00010882fe78();
        goto LAB_10880cf28;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar5 + 0x26);
  func_0x000107c27f9c(puVar5 + 0x26);
  func_0x00010882f74c();
  func_0x00010882f774();
  func_0x00010882f754();
  func_0x00010882f9ac();
  func_0x00010882f75c();
  func_0x00010882f7c8();
  func_0x00010882f068();
  func_0x00010882eed8();
  func_0x00010882f040();
  return;
LAB_10880ceac:
  func_0x00010882f058();
  if ((bool)uVar4) {
    func_0x00010882e988();
    cVar1 = extraout_w8_01;
    if ((bool)uVar3) {
      cVar1 = extraout_w9;
    }
    func_0x00010882f1a8();
    *(char *)plVar6 = cVar1;
    func_0x00010882ebb8(0);
    *(long **)(lVar9 + 0x90) = plVar6;
  }
  func_0x00010882f048();
  *(long *)(extraout_x8_35 + 0x20) = lVar10;
  func_0x00010882ea40(*(undefined8 *)(lVar9 + 0x90));
  goto LAB_10880cee8;
LAB_10880cf00:
  func_0x00010882f058();
  if ((bool)uVar4) {
    func_0x00010882e988();
    func_0x00010882e484();
    func_0x00010882e4d8();
    func_0x00010882fa54();
  }
  func_0x00010882f048();
  *(long *)(extraout_x8_36 + 0x20) = lVar10;
LAB_10880cf28:
  func_0x00010882ea40(*(undefined8 *)(lVar9 + 0x90));
LAB_10880cee8:
  *(undefined8 *)(lVar9 + 0x10) = 0;
  return;
}



/* Entry: 10880d09c; end: 10880d2f7;  */

void FUN_10880d09c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint extraout_w8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000018;
  
  func_0x000107c33c90();
  puVar4 = param_1;
  func_0x000107c33aa8();
  *puVar4 = FUN_10882cb18;
  puVar4[1] = FUN_10882cb74;
  func_0x000107c27f94(puVar4 + 2);
  func_0x000107c287c4(extraout_x8,puVar4 + 2);
  plVar7 = puVar4 + 4;
  *plVar7 = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  plVar5 = plVar7;
  FUN_10877305c(plVar7,(long)(param_1[2] - param_1[1]) >> 4);
  puVar1 = (undefined8 *)param_1[2];
  for (puVar9 = (undefined8 *)param_1[1]; puVar9 != puVar1; puVar9 = puVar9 + 2) {
    func_0x000107c33c68(*puVar9);
    (*extraout_x9)(&stack0x00000008);
    plVar5 = plVar7;
    func_0x000108774e14(plVar7,&stack0x00000008);
    func_0x00010882f9fc();
  }
  lVar8 = puVar4[4];
  lVar12 = puVar4[5];
  uVar3 = lVar8 == lVar12;
  if ((bool)uVar3) {
    func_0x00010bcd3464(puVar4 + 8);
    lVar10 = puVar4[8];
  }
  else {
    lVar10 = lVar12 - lVar8 >> 3;
    FUN_10865b428(&stack0x00000008);
    FUN_10865b464(lVar10);
    FUN_10865b56c(in_stack_00000018 + 0x18,in_stack_00000000);
    func_0x00010865b5d0();
    *(long *)(in_stack_00000018 + 8) = lVar10;
    func_0x000107c2887c(in_stack_00000018,&stack0x00000010);
    lVar11 = 0;
    for (; lVar10 = in_stack_00000008, uVar3 = lVar8 == lVar12, !(bool)uVar3; lVar8 = lVar8 + 8) {
      FUN_10865b4a4(in_stack_00000018,lVar11,lVar8);
      lVar11 = lVar11 + 1;
    }
    puVar4[8] = in_stack_00000008;
    in_stack_00000008 = 0;
    plVar5 = &stack0x00000008;
    FUN_10865b628();
  }
  puVar4[7] = lVar10;
  do {
    func_0x00010882e6b8();
  } while (extraout_w10 != 0);
  func_0x00010882effc(puVar4[7]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 9) = 0;
    lVar8 = puVar4[7];
    func_0x00010882e57c();
    lVar12 = *plVar5;
    if (lVar12 == 0) {
      func_0x000107c3a5c0();
      lVar12 = *plVar5;
    }
    func_0x00010882f3b8();
    plVar5 = extraout_x8_00;
    do {
      if (*plVar5 == 0) {
        func_0x00010882e74c();
        plVar5 = extraout_x8_02;
        uVar2 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x00010882f020();
        plVar5 = extraout_x8_01;
        uVar2 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x00010882f058();
        if ((bool)uVar3) {
          func_0x00010882e988();
          func_0x00010882e484();
          func_0x00010882e4d8();
          func_0x00010882fa54();
        }
        func_0x00010882f048();
        *(long *)(extraout_x8_03 + 0x20) = lVar12;
        func_0x00010882ea40(*(undefined8 *)(lVar8 + 0x90));
        *(undefined8 *)(lVar8 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar4 + 7);
  func_0x00010882f0d0();
  func_0x00010882efec();
  func_0x0001086e32dc(plVar7);
  func_0x00010882f068();
  func_0x00010882eed8();
  func_0x00010882f040();
  return;
}


