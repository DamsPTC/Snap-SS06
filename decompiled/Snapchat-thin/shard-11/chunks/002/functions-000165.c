/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10831b508; end: 10831b54b;  */

undefined4 * FUN_10831b508(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_10828c410();
  FUN_10831b3d4(param_1 + 2,param_2);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 10831b54c; end: 10831b5e3;  */

void FUN_10831b54c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010831b57c(param_1,&uStack_30);
  func_0x00010828c378(&uStack_28);
  return;
}



/* Entry: 10831b5e4; end: 10831b6f3;  */

void FUN_10831b5e4(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if (param_1 != param_2) {
    func_0x00010831b810();
    if (((*(byte *)(param_1 + 0xc) & 1) == 0) || ((*(uint *)(param_2 + 0xc) & 1) == 0)) {
      if ((*(uint *)(param_2 + 0xc) & 1) == 0) {
        FUN_10831adf8(0x3ff0000000000000);
        if (*(int *)(unaff_x20 + 1) != 0) {
          _memcpy();
        }
      }
      else {
        *unaff_x20 = 0;
        *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
      }
      *(undefined4 *)(unaff_x20 + 1) = 0;
      FUN_10831b6f4();
      FUN_10831b6f4();
      func_0x00010831b824();
    }
    else {
      uVar3 = *unaff_x19;
      *unaff_x19 = *unaff_x20;
      *unaff_x20 = uVar3;
      uVar1 = *(undefined4 *)(unaff_x19 + 1);
      *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
      *(undefined4 *)(unaff_x20 + 1) = uVar1;
      uVar2 = *(uint *)((long)unaff_x19 + 0xc);
      *(uint *)((long)unaff_x19 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) & 0xfffffffe | uVar2 & 1;
      *(uint *)((long)unaff_x20 + 0xc) = uVar2 & 0xfffffffe | *(uint *)((long)unaff_x20 + 0xc) & 1;
    }
  }
  return;
}



/* Entry: 10831b6f4; end: 10831b773;  */

long FUN_10831b6f4(long param_1,long param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 8) = 0;
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
      iVar1 = *(int *)(param_2 + 8);
      if ((int)(*(uint *)(param_1 + 0xc) >> 1) < iVar1) {
        FUN_10831ad9c(0x3ff0000000000000,0);
        func_0x00010831b864();
        FUN_10831adbc();
        iVar1 = *(int *)(param_2 + 8);
      }
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 != 0) {
        func_0x00010831b83c();
      }
    }
    else {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        func_0x00010831b84c();
      }
      func_0x00010831b790();
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return param_1;
}



/* Entry: 10831b774; end: 10831b8df;  */

void FUN_10831b774(void)

{
  return;
}



/* Entry: 10831b8e0; end: 10831b9d3;  */

void FUN_10831b8e0(undefined4 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,*param_1);
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined1 *)(param_1 + 1));
  (**(code **)(*param_2 + 0xa0))(param_2,param_1 + 2);
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00010831b960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(param_1 + 0x10),param_1[0x12]);
  return;
}



/* Entry: 10831b9d4; end: 10831baa3;  */

ulong FUN_10831b9d4(float param_1,float param_2,float *param_3,float *param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  FUN_108319c50(param_4);
  fVar2 = param_1;
  fVar3 = param_2;
  FUN_108319c50(param_3);
  param_1 = param_1 - fVar2;
  if ((((*param_3 == *param_4) && (param_3[4] == param_4[4])) && (param_3[1] == param_4[1])) &&
     ((param_3[3] == param_4[3] && (FUN_10828e338(), ((ulong)param_4 & 1) == 0)))) {
    FUN_10828e338();
    uVar1 = 0;
    if ((((ulong)param_3 & 1) == 0) && (param_1 == (float)(int)param_1)) {
      uVar1 = (ulong)(param_2 - fVar3 == (float)(int)(param_2 - fVar3));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 | (ulong)(uint)param_1 << 0x20;
}



/* Entry: 10831baa4; end: 10831bb77;  */

void FUN_10831baa4(undefined1 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(char *)(param_6 + 4) == '\x01') {
    uVar1 = param_6 + 8;
    uVar3 = param_7;
    FUN_10831b9d4();
    if ((uVar1 & 1) != 0) {
      param_3 = (undefined4)uVar3;
      uVar4 = (undefined4)(uVar1 >> 0x20);
      func_0x0001081836ec(param_6 + 0x30);
      *param_1 = 1;
      goto LAB_10831bb4c;
    }
  }
  uVar4 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f800000;
  uStack_40 = 0x103f800000;
  lVar2 = param_6 + 8;
  FUN_10818cfd0(lVar2,&uStack_60);
  if ((int)lVar2 == 0) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    return;
  }
  FUN_1081600e0(auStack_88,param_7,&uStack_60);
  func_0x000108142084(auStack_88,param_6 + 0x30,1);
  *param_1 = 0;
LAB_10831bb4c:
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return;
}



/* Entry: 10831bb78; end: 10831bb8b;  */

void FUN_10831bb78(void)

{
  return;
}



/* Entry: 10831bb8c; end: 10831bbaf;  */

undefined8 FUN_10831bb8c(undefined8 param_1)

{
  FUN_10831bbb0(param_1,0);
  return param_1;
}



/* Entry: 10831bbb0; end: 10831bbf3;  */

void FUN_10831bbb0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    if (*plVar2 != 0) {
      lVar3 = *plVar2 << 3;
      do {
        if (*(int *)((long)plVar2 + lVar3) != 0) {
          *(undefined4 *)((long)plVar2 + lVar3) = 0;
        }
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10831bbf4; end: 10831bc47;  */

void FUN_10831bbf4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  
  iVar1 = param_1[1];
  uStack_24 = param_2;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_10831bc48(param_1,iVar2);
  }
  FUN_10831bd34(param_1,&uStack_24);
  return;
}



/* Entry: 10831bc48; end: 10831bd33;  */

void FUN_10831bc48(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar4 = (long *)(param_1 + 2);
  lStack_38 = *plVar4;
  *plVar4 = 0;
  puVar2 = (undefined8 *)((long)param_2 * 8 + 0x10);
  if (0xffffffffffffffef < (ulong)((long)param_2 * 8) || param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 8;
  puVar2[1] = (long)param_2;
  if (param_2 != 0) {
    lVar3 = (long)param_2 << 3;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  FUN_10831bde8(plVar4);
  for (lVar3 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3 != lVar3;
      lVar3 = lVar3 + 8) {
    if (*(int *)(lStack_38 + lVar3) != 0) {
      FUN_10831bd34(param_1,lStack_38 + lVar3 + 4);
    }
  }
  FUN_10831bb8c(&lStack_38);
  return;
}



/* Entry: 10831bd34; end: 10831bde7;  */

uint * FUN_10831bd34(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = param_2;
  FUN_10831be00();
  uVar4 = param_1[1];
  uVar5 = (uint)puVar6;
  uVar1 = uVar4 - 1 & uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 8);
    if (*puVar6 == 0) break;
    if ((uVar5 == *puVar6) && (*param_2 == puVar6[1])) {
      *puVar6 = 0;
      puVar6[1] = *param_2;
      *puVar6 = uVar5;
      return puVar6 + 1;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  puVar6[1] = *param_2;
  *puVar6 = uVar5;
  *param_1 = *param_1 + 1;
  return puVar6 + 1;
}



/* Entry: 10831bde8; end: 10831bdff;  */

void FUN_10831bde8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + -8);
    if (*plVar1 != 0) {
      lVar3 = *plVar1 << 3;
      do {
        if (*(int *)((long)plVar1 + lVar3) != 0) {
          *(undefined4 *)((long)plVar1 + lVar3) = 0;
        }
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10831be00; end: 10831be3f;  */

uint FUN_10831be00(uint param_1)

{
  func_0x00010831be1c();
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 10831be40; end: 10831be83;  */

void FUN_10831be40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10831be84; end: 10831bebf;  */

void FUN_10831be84(long param_1)

{
  code *extraout_x8;
  
  func_0x00010831f168(*(undefined8 *)(param_1 + 0x88));
  (*extraout_x8)();
                    /* WARNING: Could not recover jumptable at 0x00010831bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(*(long **)(param_1 + 0x88),&DAT_10f68f57e);
  return;
}



/* Entry: 10831bec0; end: 10831bed7;  */

void FUN_10831bec0(void)

{
  FUN_10831e5b0();
  func_0x00010831f3e4();
  return;
}



/* Entry: 10831bed8; end: 10831c90f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10831bed8(undefined8 param_1,code *param_2,byte param_3,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  undefined ***pppuVar12;
  uint uVar13;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  long *extraout_x10;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  long *unaff_x19;
  long *unaff_x20;
  long lVar17;
  long *plVar18;
  int iVar19;
  ulong uVar20;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  long lStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long alStack_f8 [3];
  undefined **ppuStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b0 [10];
  
  func_0x00010831f260();
code_r0x00010831bf0c:
  iVar19 = *(int *)((long)unaff_x20 + 0xc) + -0x19;
  cVar7 = SBORROW4(iVar19,0x19);
  cVar8 = *(int *)((long)unaff_x20 + 0xc) + -0x32 < 0;
  switch(iVar19) {
  case 0:
    goto code_r0x00010831c210;
  case 1:
    alStack_f8[0] = unaff_x20[3];
    lVar11 = unaff_x19[10];
    if ((lVar11 != 0) && (FUN_10831bec0(lVar11,alStack_f8), lVar11 != 0)) {
      func_0x00010831f168();
      alStack_f8[0] = extraout_x8_04;
    }
    iVar19 = 0;
    lVar17 = *unaff_x19;
    plVar18 = *(long **)(lVar17 + 0x38);
    plVar14 = *(long **)(lVar17 + 0x50);
    plVar3 = *(long **)(lVar17 + 0x58);
    goto code_r0x00010831c5e4;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    FUN_10831d4fc();
    func_0x00010831f11c();
    plVar18 = extraout_x10;
    if (cVar8 == cVar7) {
      plVar18 = alStack_b0;
    }
    func_0x00010831f100();
    (*extraout_x8)();
    func_0x00010831f22c();
    func_0x00010831f0e4();
    FUN_10831cc90();
    (**(code **)(*unaff_x20 + 0x48))();
    param_2 = UNRECOVERED_JUMPTABLE;
    for (lVar11 = (long)plVar18 << 3; lVar11 != 0; lVar11 = lVar11 + -8) {
      func_0x00010831f100();
      (*extraout_x8_00)();
      func_0x00010831f110();
    }
code_r0x00010831c02c:
    func_0x00010831f130();
    func_0x00010831f3f4();
    UNRECOVERED_JUMPTABLE = param_2;
code_r0x00010831c038:
                    /* WARNING: Could not recover jumptable at 0x00010831c054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 0xb:
    func_0x00010831f130();
    goto code_r0x00010831c038;
  case 0xc:
    if (*(char *)((long)unaff_x20 + 0x1c) == '\0') {
      FUN_10831bed8();
      func_0x00010831f100();
      param_2 = (code *)&DAT_10f62a9de;
      func_0x00010831f18c();
    }
    (**(code **)(**(long **)(unaff_x20[4] + 0x10) + 0x90))();
    if (param_2 <= (code *)(long)(int)unaff_x20[3]) goto code_r0x00010831c828;
    func_0x00010831f130();
    goto code_r0x00010831c038;
  default:
    goto LAB_10831c808;
  case 0xe:
    lVar11 = unaff_x20[3];
    uVar13 = (uint)*(byte *)(lVar11 + 0x54);
    cVar8 = SBORROW4(uVar13,0x5c);
    iVar19 = uVar13 - 0x5c;
    bVar9 = uVar13 == 0x5c;
    if (!bVar9) {
      uVar13 = (uint)*(byte *)(lVar11 + 0x54);
      cVar8 = SBORROW4(uVar13,0x25);
      iVar19 = uVar13 - 0x25;
      bVar9 = uVar13 == 0x25;
      if (!bVar9) {
        FUN_1083d7fd8(unaff_x20,unaff_x19 + 5,(int)unaff_x19[9]);
        FUN_1083d8038(&stack0xfffffffffffffeb8,lVar11,unaff_x19 + 5);
        FUN_10831c98c();
        func_0x00010831f11c();
        func_0x00010831f100();
        (*extraout_x8_10)();
        func_0x00010831f22c();
        func_0x00010831f100();
        func_0x00010831f18c();
        FUN_10831cc90();
        uVar20 = 0;
        goto code_r0x00010831c4d0;
      }
    }
    cVar7 = iVar19 < 0;
    lStack_140 = 0;
    ppuStack_138 = (undefined **)0x0;
    func_0x00010831f1ec();
    if (bVar9 || cVar7 != cVar8) goto code_r0x00010831c828;
    func_0x00010831f110();
    func_0x00010831f3a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&stack0xfffffffffffffeb8,param_1);
    func_0x00010831f398();
    if (*(char *)(lVar11 + 0x54) == '%') {
      alStack_f8[2] = lStack_140;
      alStack_f8[1] = 0;
      ppuStack_e0 = ppuStack_138;
      lStack_140 = 0;
      ppuStack_138 = (undefined **)0x0;
      (**(code **)(*(long *)unaff_x19[4] + 0x68))(alStack_b0,(long *)unaff_x19[4],alStack_f8 + 1);
      func_0x00010831f11c();
      func_0x00010831f100();
      (*extraout_x8_12)();
      func_0x00010831f22c();
      plVar18 = alStack_f8 + 1;
    }
    else {
      if (*(char *)(lVar11 + 0x54) != '\\') goto code_r0x00010831c828;
      lStack_c8 = lStack_140;
      lStack_d0 = 0;
      ppuStack_c0 = ppuStack_138;
      lStack_140 = 0;
      ppuStack_138 = (undefined **)0x0;
      (**(code **)(*(long *)unaff_x19[4] + 0x60))(alStack_b0,(long *)unaff_x19[4],&lStack_d0);
      func_0x00010831f11c();
      func_0x00010831f100();
      (*extraout_x8_03)();
      func_0x00010831f22c();
      plVar18 = &lStack_d0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar18);
    plVar18 = (long *)&stack0xfffffffffffffeb8;
    goto code_r0x00010831c7bc;
  case 0xf:
    func_0x00010831f158();
    func_0x00010831f100();
    func_0x00010831f18c();
    func_0x00010831f110();
    func_0x00010831f130();
    goto code_r0x00010831c038;
  case 0x10:
  case 0x15:
    func_0x00010831f44c(alStack_b0);
    func_0x00010831f11c();
    func_0x00010831f100();
    (*extraout_x8_01)();
    break;
  case 0x13:
    if (param_3 < 3) {
      func_0x00010831f0e4();
      func_0x00010831f158();
      func_0x00010831f1b4((char)unaff_x20[4]);
      func_0x00010831f100();
      func_0x00010831f28c();
      goto code_r0x00010831c02c;
    }
    func_0x00010831f158();
    func_0x00010831f1b4((char)unaff_x20[4]);
    func_0x00010831f100();
    pcVar6 = extraout_x8_07;
    goto code_r0x00010831c804;
  case 0x14:
    if (3 < param_3) goto code_r0x00010831bf48;
    func_0x00010831f0e4();
    func_0x00010831f1b4((char)unaff_x20[3]);
    func_0x00010831f100();
    func_0x00010831f28c();
    FUN_10831bed8();
    goto code_r0x00010831c02c;
  case 0x16:
    func_0x00010831f158();
    func_0x00010831f100();
    func_0x00010831f18c();
    FUN_1083ec36c(alStack_b0,unaff_x20 + 4);
    func_0x00010831f11c();
    func_0x00010831f100();
    (*extraout_x8_02)();
    break;
  case 0x17:
    param_2 = UNRECOVERED_JUMPTABLE;
    if (param_3 < 0x10) {
      func_0x00010831f0e4();
      param_2 = UNRECOVERED_JUMPTABLE;
    }
    func_0x00010831f26c();
    func_0x00010831f100();
    func_0x00010831f3c4();
    func_0x00010831f26c();
    func_0x00010831f100();
    func_0x00010831f3c4();
    func_0x00010831f26c();
    if (0xf < param_3) {
      return;
    }
    goto code_r0x00010831c02c;
  case 0x19:
    lVar17 = unaff_x20[3];
    lVar11 = unaff_x19[0x13];
    alStack_b0[0] = lVar17;
    if (lVar11 == 0) {
code_r0x00010831c2a4:
      uVar10 = (uint)alStack_b0;
      func_0x00010831e65c();
      uVar4 = *(uint *)((long)unaff_x19 + 0x5c);
      uVar13 = uVar4 - 1 & uVar10;
      uVar1 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      goto joined_r0x00010831c2c4;
    }
    FUN_10831cd40();
    if (lVar17 == lVar11) {
      lVar11 = unaff_x19[1];
    }
    else {
      lVar11 = unaff_x19[0x13];
      if (lVar11 == 0) goto code_r0x00010831c2a4;
      func_0x00010831cd64();
      if (lVar17 == lVar11) {
        lVar11 = unaff_x19[2];
      }
      else {
        lVar11 = unaff_x19[0x13];
        if ((lVar11 == 0) || (func_0x00010831cd88(), lVar17 != lVar11)) goto code_r0x00010831c2a4;
        lVar11 = unaff_x19[3];
      }
    }
    _strlen(lVar11);
    func_0x00010831f100();
    pcVar6 = extraout_x8_14;
    goto code_r0x00010831c804;
  }
  plVar18 = alStack_b0;
  goto code_r0x00010831c7bc;
joined_r0x00010831c2c4:
  if (uVar1 == 0) goto code_r0x00010831c308;
  puVar15 = (uint *)(unaff_x19[0xc] + (long)(int)uVar13 * 0x28);
  uVar5 = *puVar15;
  if ((uVar5 == 0) || ((uVar10 == uVar5 && (alStack_b0[0] == *(long *)(puVar15 + 2)))))
  goto code_r0x00010831c308;
  uVar5 = 0;
  if ((int)uVar13 < 1) {
    uVar5 = uVar4;
  }
  uVar13 = (uVar13 + uVar5) - 1;
  uVar1 = uVar1 - 1;
  goto joined_r0x00010831c2c4;
code_r0x00010831c308:
  func_0x00010831f100();
  pcVar6 = extraout_x8_06;
  goto code_r0x00010831c804;
code_r0x00010831bf48:
  func_0x00010831f1b4((char)unaff_x20[3]);
  UNRECOVERED_JUMPTABLE = param_2;
  func_0x00010831f100();
  func_0x00010831f28c();
  unaff_x20 = (long *)unaff_x20[4];
  param_3 = 3;
  goto code_r0x00010831bf0c;
code_r0x00010831c4d0:
  if ((long)(int)unaff_x20[7] <= (long)uVar20) {
    func_0x00010831f100();
    func_0x00010831f3f4();
    func_0x00010831f18c();
    func_0x0001082908e4(&lStack_140);
    return;
  }
  if ((*(uint *)(lStack_140 + (uVar20 >> 5) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) == 0) {
    func_0x00010831f100();
    (*extraout_x8_11)();
    if ((long)(int)unaff_x20[7] <= (long)uVar20) goto code_r0x00010831c828;
    func_0x00010831f110();
  }
  uVar20 = uVar20 + 1;
  goto code_r0x00010831c4d0;
code_r0x00010831c5e4:
  bVar9 = plVar18 == *(long **)(lVar17 + 0x40);
  cVar7 = bVar9 && SBORROW8((long)plVar14,(long)plVar3);
  cVar8 = bVar9 && (long)plVar14 - (long)plVar3 < 0;
  if (bVar9 && plVar14 == plVar3) goto code_r0x00010831c644;
  plVar2 = plVar18;
  if (plVar14 != plVar3) {
    plVar2 = plVar14;
  }
  if (*(int *)(*plVar2 + 0xc) == 3) {
    lVar16 = *(long *)(*(long *)(*plVar2 + 0x10) + 0x10);
    cVar7 = SBORROW8(lVar16,alStack_f8[0]);
    cVar8 = lVar16 - alStack_f8[0] < 0;
    if (lVar16 == alStack_f8[0]) goto code_r0x00010831c644;
    if (*(byte *)(*(long *)(lVar16 + 0x20) + 0x2c) - 0xd < 3) {
      iVar19 = iVar19 + 1;
    }
  }
  lVar16 = 8;
  if (plVar14 != plVar3) {
    lVar16 = 0;
  }
  plVar18 = (long *)((long)plVar18 + lVar16);
  lVar16 = 0;
  if (plVar14 != plVar3) {
    lVar16 = 8;
  }
  plVar14 = (long *)((long)plVar14 + lVar16);
  goto code_r0x00010831c5e4;
code_r0x00010831c644:
  bVar9 = true;
  lStack_d0 = 0;
  lStack_c8 = 0;
  ppuStack_c0 = (undefined **)0x0;
  func_0x00010831f1ec();
  if (bVar9 || cVar8 != cVar7) {
code_r0x00010831c828:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10831c82c);
    (*pcVar6)();
  }
  func_0x00010831f110();
  cVar8 = *(char *)(*(long *)(unaff_x20[3] + 0x20) + 0x2c);
  if (cVar8 == '\r') {
    func_0x00010831f3a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_f8 + 1,lVar11);
    func_0x00010831f304();
  }
  else {
    if (cVar8 != '\x0e') {
      if (cVar8 == '\x0f') {
        pppuVar12 = &ppuStack_138;
        ppuStack_138 = &PTR_FUN_110a3c120;
        ppuStack_130 = &PTR_FUN_110a403f8;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        lStack_140 = unaff_x19[0x11];
        unaff_x19[0x11] = (long)pppuVar12;
        if ((int)unaff_x20[7] < 2) goto code_r0x00010831c828;
        func_0x00010831f110();
        plVar18 = (long *)unaff_x19[4];
        func_0x00010831f3a8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,lVar11)
        ;
        FUN_10831c910(pppuVar12);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_178,pppuVar12);
        (**(code **)(*plVar18 + 0x58))(alStack_f8 + 1,plVar18,iVar19,auStack_160,auStack_178);
        func_0x000107c27b9c(&lStack_d0,alStack_f8 + 1);
        func_0x00010831f474();
        func_0x00010831f17c();
        func_0x00010831f224();
        func_0x00010831e0e4(&stack0xfffffffffffffeb8);
      }
      goto code_r0x00010831c790;
    }
    func_0x00010831f3a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_f8 + 1,lVar11);
    func_0x00010831f304();
  }
  func_0x000107c27b9c(&lStack_d0,&stack0xfffffffffffffeb8);
  func_0x00010831f2e8();
  func_0x00010831f474();
code_r0x00010831c790:
  func_0x00010831f398();
  func_0x00010831f100();
  (*extraout_x8_13)();
  plVar18 = &lStack_d0;
code_r0x00010831c7bc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar18);
  return;
code_r0x00010831c210:
  alStack_b0[0] = CONCAT71(alStack_b0[0]._1_7_,(char)unaff_x20[4]);
  uVar13 = (uint)alStack_b0;
  FUN_1083cb220();
  if (uVar13 < param_3) {
    func_0x00010831f348();
    FUN_1083cb27c(alStack_b0);
    _strlen();
    func_0x00010831f100();
    (*extraout_x8_05)();
    func_0x00010831f358();
    return;
  }
  func_0x00010831f0e4();
  func_0x00010831f348();
  FUN_1083cb27c(alStack_b0);
  _strlen();
  func_0x00010831f100();
  (*extraout_x8_08)();
  func_0x00010831f358();
  func_0x00010831f100();
  func_0x00010831f3f4();
  pcVar6 = extraout_x8_09;
code_r0x00010831c804:
  (*pcVar6)();
LAB_10831c808:
  return;
}



/* Entry: 10831c910; end: 10831c98b;  */

long FUN_10831c910(long param_1)

{
  undefined1 auStack_40 [24];
  long lStack_28;
  
  if (*(char *)(param_1 + 0x3f) < '\0') {
    if (*(long *)(param_1 + 0x30) != 0) goto LAB_10831c970;
  }
  else if (*(char *)(param_1 + 0x3f) != '\0') goto LAB_10831c970;
  FUN_1083a05b4(&lStack_28,param_1 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (auStack_40,*(undefined8 *)(lStack_28 + 0x18),*(undefined8 *)(lStack_28 + 0x20));
  func_0x000107c27b9c(param_1 + 0x28,auStack_40);
  func_0x00010831f318();
  func_0x0001078bddf8(&lStack_28);
LAB_10831c970:
  return param_1 + 0x28;
}



/* Entry: 10831c98c; end: 10831cc8f;  */

long * FUN_10831c98c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined ***param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  ulong extraout_x9;
  undefined **extraout_x10;
  long lVar12;
  ulong uVar13;
  ulong extraout_x11;
  undefined8 *puVar14;
  uint extraout_w12;
  undefined8 uVar15;
  undefined8 extraout_x13;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  undefined ***unaff_x21;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [24];
  long *plStack_e0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***apppuStack_a0 [2];
  char cStack_89;
  undefined **ppuStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 ***pppuStack_68;
  long lStack_60;
  undefined ***pppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010831f260();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar5 = *(char *)((long)param_3 + 0x56) == '\x01';
  if (bVar5) {
    unaff_x19 = *(long **)(unaff_x20 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x19 + 0x10);
    func_0x00010831f298(uStack_48);
    param_4 = unaff_x21;
    if (bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010831c9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return unaff_x19;
    }
  }
  else {
    bVar5 = *(char *)((long)param_3 + 0x54) != -1;
    bVar6 = *(char *)((long)param_3 + 0x55) == '\x02';
    uVar7 = bVar5 || bVar6;
    if (bVar5 || bVar6) {
      pppuStack_68 = (undefined8 ***)param_3[3];
      ppuStack_70 = (undefined **)param_3[2];
      func_0x000107c27958();
      param_4 = unaff_x21;
    }
    else {
      uStack_80 = (uint)param_4;
      pppuVar9 = &ppuStack_88;
      ppuStack_88 = param_3;
      FUN_10831e678();
      uVar1 = *(uint *)(unaff_x20 + 0x7c);
      uVar11 = (ulong)(uVar1 - 1 & (uint)pppuVar9);
      uVar13 = (ulong)uStack_80;
      uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      uVar15 = 0x30;
      ppuVar4 = ppuStack_88;
      while (uVar1 != 0) {
        piVar16 = (int *)(*(long *)(unaff_x20 + 0x80) + (long)(int)uVar11 * (long)(int)uVar15);
        if (*piVar16 == 0) break;
        if ((((int)pppuVar9 == *piVar16) && (ppuVar4 == *(undefined ***)(piVar16 + 2))) &&
           (uVar7 = (int)uVar13 == piVar16[4], (bool)uVar7)) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          goto LAB_10831cc04;
        }
        func_0x00010831f400();
        uVar11 = extraout_x9;
        uVar13 = extraout_x11;
        uVar15 = extraout_x13;
        ppuVar4 = extraout_x10;
        uVar1 = extraout_w12;
      }
      pppuStack_68 = (undefined8 ***)param_3[3];
      ppuStack_70 = (undefined **)param_3[2];
      func_0x000107c27958(apppuStack_a0,&ppuStack_70);
      ppuStack_70 = &PTR_FUN_110a3bf00;
      pppuStack_68 = apppuStack_a0;
      pppuStack_58 = &ppuStack_70;
      FUN_1083d80fc(param_3,unaff_x20 + 0x28,param_4,&ppuStack_70);
      FUN_10831e7c8(&ppuStack_70);
      if (-1 < cStack_89) {
        apppuStack_a0[0] = apppuStack_a0;
      }
      (**(code **)(**(long **)(unaff_x20 + 0x20) + 0x18))
                (*(long **)(unaff_x20 + 0x20),apppuStack_a0[0]);
      ppuVar4 = ppuStack_88;
      puVar3 = (undefined *)CONCAT44(uStack_7c,uStack_80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_b8);
      ppuStack_70 = ppuVar4;
      param_4 = &ppuStack_70;
      pppuStack_58 = (undefined ***)uStack_b0;
      lStack_60 = lStack_b8;
      uStack_50 = uStack_a8;
      lStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uVar1 = *(uint *)(unaff_x20 + 0x7c);
      iVar8 = *(int *)(unaff_x20 + 0x78) * 4;
      uVar7 = uVar1 * 3 == iVar8;
      pppuStack_68 = (undefined8 ***)puVar3;
      if ((int)(uVar1 * 3) <= iVar8) {
        uVar2 = uVar1 << 1;
        if ((int)uVar1 < 1) {
          uVar2 = 4;
        }
        uVar11 = (ulong)uVar2;
        *(undefined4 *)(unaff_x20 + 0x78) = 0;
        *(uint *)(unaff_x20 + 0x7c) = uVar2;
        lStack_78 = *(long *)(unaff_x20 + 0x80);
        *(undefined8 *)(unaff_x20 + 0x80) = 0;
        puVar10 = (undefined8 *)((uVar11 + (ulong)uVar2 * 2 >> 1 & 0xffffffff) << 5 | 0x10);
        __Znam();
        *puVar10 = 0x30;
        puVar10[1] = uVar11;
        if (uVar2 != 0) {
          lVar12 = uVar11 * 0x30;
          puVar14 = puVar10 + 2;
          do {
            *(undefined4 *)puVar14 = 0;
            lVar12 = lVar12 + -0x30;
            puVar14 = puVar14 + 6;
          } while (lVar12 != 0);
        }
        *(undefined8 **)(unaff_x20 + 0x80) = puVar10 + 2;
        for (lVar12 = 0;
            uVar7 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x30 - lVar12 == 0,
            !(bool)uVar7; lVar12 = lVar12 + 0x30) {
          if (*(int *)(lStack_78 + lVar12) != 0) {
            func_0x00010831e804(unaff_x20 + 0x78,lStack_78 + lVar12 + 8);
          }
        }
        func_0x00010831e1a0(&lStack_78);
      }
      func_0x00010831e804(unaff_x20 + 0x78,&ppuStack_70);
      unaff_x19 = &lStack_60;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010831f17c();
      func_0x00010831f224();
    }
LAB_10831cc04:
    func_0x00010831f298(uStack_48);
    if ((bool)uVar7) {
      return unaff_x19;
    }
  }
  ___stack_chk_fail();
  func_0x00010831e1a0(&lStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_4 + 2);
  func_0x00010831f17c();
  func_0x00010831f368();
  func_0x00010831f224();
  func_0x00010831f2e0();
  if ((bRam0000000113254de0 & 1) == 0) {
    iVar8 = 0x13254de0;
    plStack_e0 = unaff_x19;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      func_0x000107c278b8(auStack_f8,&DAT_10f68f19e);
      FUN_10831e10c(0x113254db0,&uStack_110);
      func_0x00010831e144(&uStack_110);
      ___cxa_guard_release(0x113254de0);
    }
  }
  return (long *)0x1;
}



/* Entry: 10831cc90; end: 10831cd3f;  */

undefined8 FUN_10831cc90(void)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  if ((bRam0000000113254de0 & 1) == 0) {
    iVar1 = 0x13254de0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      func_0x000107c278b8(auStack_38,&DAT_10f68f19e);
      FUN_10831e10c(0x113254db0,&uStack_50);
      FUN_10831e144(&uStack_50);
      ___cxa_guard_release(0x113254de0);
    }
  }
  return 1;
}



/* Entry: 10831cd40; end: 10831cdb3;  */

undefined8 FUN_10831cd40(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x57) != '\x01') {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    return **(undefined8 **)(param_1 + 0x38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10831cd64);
  (*pcVar1)();
}



/* Entry: 10831cdb4; end: 10831d277;  */

void FUN_10831cdb4(void)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
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
  code *extraout_x8_10;
  long unaff_x19;
  long unaff_x20;
  bool bVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_78 [24];
  
  func_0x00010831f260();
code_r0x00010831ce10:
  switch(*(int *)(unaff_x20 + 0xc) + -0xc) {
  case 0:
    goto code_r0x00010831d190;
  case 1:
    func_0x00010831f130();
    goto code_r0x00010831d1d4;
  case 2:
    func_0x00010831f130();
    goto code_r0x00010831d1d4;
  default:
    return;
  case 4:
    func_0x00010831f100();
    func_0x00010831f3c4();
    func_0x00010831f2d8();
    func_0x00010831f100();
    (*extraout_x8_09)();
    func_0x00010831f110();
    func_0x00010831f130();
    goto code_r0x00010831d1d4;
  case 5:
    FUN_10831bed8();
    break;
  case 6:
    if (((*(long *)(unaff_x20 + 0x28) == 0) && (*(long *)(unaff_x20 + 0x30) != 0)) &&
       (*(long *)(unaff_x20 + 0x38) == 0)) {
      func_0x00010831f100();
      (*extraout_x8_02)();
code_r0x00010831cf00:
      func_0x00010831f110();
    }
    else {
      func_0x00010831f100();
      (*extraout_x8)();
      uVar1 = *(ulong *)(unaff_x20 + 0x28);
      if (uVar1 == 0) {
code_r0x00010831ce5c:
        func_0x00010831f100();
        func_0x00010831f370();
      }
      else {
        func_0x00010831f168();
        (*extraout_x8_00)();
        if ((uVar1 & 1) != 0) goto code_r0x00010831ce5c;
        func_0x00010831f2d8();
      }
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        func_0x00010831f110();
      }
      func_0x00010831f100();
      func_0x00010831f370();
      if (*(long *)(unaff_x20 + 0x38) != 0) goto code_r0x00010831cf00;
    }
    func_0x00010831f100();
    func_0x00010831f370();
    plVar3 = (long *)(unaff_x20 + 0x40);
    goto code_r0x00010831cf14;
  case 7:
    func_0x00010831f100();
    (*extraout_x8_01)();
    func_0x00010831f110();
    func_0x00010831f100();
    func_0x00010831f370();
    func_0x00010831f2d8();
    plVar3 = (long *)(unaff_x20 + 0x20);
    if (*plVar3 == 0) {
      return;
    }
    func_0x00010831f100();
    func_0x00010831f43c();
code_r0x00010831cf14:
    unaff_x20 = *plVar3;
    goto code_r0x00010831ce10;
  case 8:
    break;
  case 9:
    func_0x00010831f100();
    func_0x00010831f43c();
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x00010831f100();
      func_0x00010831f18c();
      if (*(char *)(unaff_x19 + 0x90) == '\x01') {
        func_0x00010831f100();
        func_0x00010831f43c();
      }
      func_0x00010831f110();
      if (*(char *)(unaff_x19 + 0x90) == '\x01') {
        func_0x00010831f100();
        func_0x00010831f3f4();
        func_0x00010831f18c();
      }
    }
    break;
  case 10:
    func_0x00010831f100();
    (*extraout_x8_03)();
    func_0x00010831f110();
    FUN_10831be84();
    plVar3 = *(long **)(*(long *)(unaff_x20 + 0x18) + 0x28);
    for (lVar5 = (long)*(int *)(*(long *)(unaff_x20 + 0x18) + 0x30) << 3; lVar5 != 0;
        lVar5 = lVar5 + -8) {
      lVar6 = *plVar3;
      if ((*(byte *)(lVar6 + 0x10) & 1) == 0) {
        func_0x00010831f100();
        (*extraout_x8_04)();
        __ZNSt3__19to_stringEx(auStack_78,*(undefined8 *)(lVar6 + 0x18));
        func_0x00010831f2ac();
        func_0x00010831f100();
        (*extraout_x8_05)();
        func_0x00010831f17c();
      }
      FUN_10831be84();
      uVar1 = *(ulong *)(lVar6 + 0x20);
      func_0x00010831f168();
      (*extraout_x8_06)();
      if ((uVar1 & 1) == 0) {
        func_0x00010831f2d8();
        func_0x00010831f194();
      }
      plVar3 = plVar3 + 1;
    }
    func_0x00010831f194();
    func_0x00010831f100();
code_r0x00010831d0a0:
    func_0x00010831f18c();
    return;
  case 0xc:
    FUN_10831d5f0(auStack_78,*(undefined4 *)(*(long *)(unaff_x20 + 0x10) + 0x30));
    func_0x00010831f2ac();
    func_0x00010831f100();
    (*extraout_x8_07)();
    func_0x00010831f17c();
    FUN_10831d668(auStack_78);
    func_0x00010831f2ac();
    func_0x00010831f100();
    (*extraout_x8_08)();
    func_0x00010831f17c();
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      func_0x00010831f100();
      func_0x00010831f3c4();
      func_0x00010831f110();
    }
    func_0x00010831f100();
    goto code_r0x00010831d0a0;
  }
  func_0x00010831f130();
  goto code_r0x00010831d1d4;
code_r0x00010831d190:
  if ((*(int *)(unaff_x20 + 0x38) == 1) || (lVar5 = unaff_x20, FUN_10831d998(), (int)lVar5 != 0)) {
    bVar2 = true;
    FUN_10831be84();
  }
  else {
    bVar2 = false;
  }
  puVar4 = *(ulong **)(unaff_x20 + 0x28);
  for (lVar5 = (long)*(int *)(unaff_x20 + 0x30) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar1 = *puVar4;
    func_0x00010831f168();
    (*extraout_x8_10)();
    if ((uVar1 & 1) == 0) {
      func_0x00010831f2d8();
      func_0x00010831f194();
    }
    puVar4 = puVar4 + 1;
  }
  if (!bVar2) {
    return;
  }
  func_0x00010831f130();
code_r0x00010831d1d4:
                    /* WARNING: Could not recover jumptable at 0x00010831d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10831d278; end: 10831d317;  */

void FUN_10831d278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  plVar3 = (long *)(param_1 + 0x28);
  uStack_48 = param_2;
  FUN_10831d7b8(plVar3,&uStack_48);
  if (plVar3 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x50) = 0;
    func_0x000104c003e8(param_3);
  }
  else {
    uVar4 = 0;
    while (*(uint *)(param_1 + 0x48) = uVar4, (int)uVar4 < (int)plVar3[1]) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10831d318);
        (*pcVar2)();
      }
      *(ulong *)(param_1 + 0x50) = *plVar3 + (ulong)uVar4 * 0x10;
      func_0x000104c003e8(param_3);
      uVar4 = *(int *)(param_1 + 0x48) + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  return;
}



/* Entry: 10831d318; end: 10831d4fb;  */

void FUN_10831d318(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long alStack_98 [3];
  undefined8 ***apppuStack_80 [2];
  char cStack_69;
  undefined1 auStack_68 [24];
  
  func_0x00010831f260();
  FUN_10831d4fc(apppuStack_80);
  FUN_10831c98c(alStack_98);
  uVar5 = 0;
  FUN_1083d4028(auStack_68);
  func_0x00010831f2d0();
  func_0x00010831f1e4();
  FUN_10831cc90();
  plVar6 = *(long **)(param_3 + 0x38);
  for (lVar4 = (long)*(int *)(param_3 + 0x40) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    alStack_98[0] = *plVar6;
    lVar3 = *(long *)(unaff_x20 + 0x50);
    if ((lVar3 == 0) || (FUN_10831bec0(lVar3,alStack_98), lVar3 == 0)) {
      uVar1 = 0x113254db0;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0x113254dc8;
      }
      func_0x0001004c3ca0(auStack_68,uVar1);
      FUN_10831d5f0(apppuStack_80,*(undefined4 *)(alStack_98[0] + 0x30));
      func_0x0001004c3ca0(auStack_68,apppuStack_80);
      func_0x00010831f1e4();
      FUN_10831d668(apppuStack_80);
      ppppuVar2 = (undefined8 ****)apppuStack_80[0];
      if (-1 < cStack_69) {
        ppppuVar2 = apppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (auStack_68,ppppuVar2);
      func_0x00010831f1e4();
      uVar5 = 0;
    }
    plVar6 = plVar6 + 1;
  }
  func_0x00010831f3f4();
  func_0x000100456794(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10831d4fc; end: 10831d5ef;  */

void FUN_10831d4fc(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *aplStack_50 [4];
  
  (**(code **)(*param_3 + 0x30))();
  func_0x00010831f4c0();
  plVar1 = param_3;
  (**(code **)(*param_3 + 0xe0))();
  if ((int)plVar1 == 0) {
    param_2 = param_2 + 0x68;
    aplStack_50[0] = param_3;
    FUN_10831d980(param_2,aplStack_50);
    if (param_2 == 0) {
      func_0x00010831f388(param_3[2]);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2);
    }
  }
  else {
    func_0x00010831f378();
    FUN_10831d4fc(param_1,param_2,plVar1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x5b);
    func_0x00010831f444(*(undefined8 *)(*param_3 + 0x60));
    __ZNSt3__19to_stringEi(aplStack_50);
    func_0x0001004c3ca0(param_1,aplStack_50);
    func_0x00010831f318();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_1,0x5d);
  }
  return;
}



/* Entry: 10831d5f0; end: 10831d667;  */

void FUN_10831d5f0(undefined8 *param_1)

{
  uint unaff_w20;
  
  func_0x00010831f260();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((unaff_w20 >> 2 & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  }
  if (((unaff_w20 >> 4 & 1) != 0) || ((unaff_w20 >> 5 & 1) != 0)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc();
  }
  return;
}



/* Entry: 10831d668; end: 10831d7b7;  */

void FUN_10831d668(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  (**(code **)(*param_3 + 0xe0))();
  plVar4 = param_3;
  if ((int)plVar2 != 0) {
    func_0x00010831f378();
    plVar4 = plVar2;
  }
  FUN_10831d4fc(auStack_70,param_2,plVar4);
  func_0x00010831f4b4();
  func_0x000107c27958(auStack_88,&uStack_40);
  puVar3 = auStack_58;
  func_0x00010533a9c0(param_1,puVar3,auStack_88);
  iVar1 = (int)puVar3;
  func_0x00010831f17c();
  func_0x00010831f2e8();
  func_0x00010831f224();
  func_0x00010831f444(*(undefined8 *)(*param_3 + 0xe0));
  if (iVar1 != 0) {
    func_0x00010831f444(*(undefined8 *)(*param_3 + 0x60));
    __ZNSt3__19to_stringEi(auStack_88);
    func_0x0001004c3cd0(auStack_70,&DAT_10f62a9e8,auStack_88);
    func_0x00010831f4b4();
    func_0x0001004c3ca0(param_1,auStack_58);
    func_0x00010831f2e8();
    func_0x00010831f224();
    func_0x00010831f17c();
  }
  return;
}



/* Entry: 10831d7b8; end: 10831d7cf;  */

void FUN_10831d7b8(void)

{
  FUN_10831ebe4();
  func_0x00010831f3e4();
  return;
}



/* Entry: 10831d7d0; end: 10831d8f7;  */

void FUN_10831d7d0(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_40 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar1 = param_1[1];
  uStack_58 = param_2;
  if ((int)(uVar1 * 3) <= *param_1 * 4) {
    uVar2 = uVar1 << 1;
    if ((int)uVar1 < 1) {
      uVar2 = 4;
    }
    *param_1 = 0;
    param_1[1] = uVar2;
    lStack_38 = *(long *)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    puVar3 = (undefined8 *)((ulong)uVar2 * 0x28 + 0x10);
    __Znam();
    *puVar3 = 0x28;
    puVar3[1] = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar4 = (ulong)uVar2 * 0x28;
      puVar5 = puVar3 + 2;
      do {
        *(undefined4 *)puVar5 = 0;
        lVar4 = lVar4 + -0x28;
        puVar5 = puVar5 + 5;
      } while (lVar4 != 0);
    }
    *(undefined8 **)(param_1 + 2) = puVar3 + 2;
    for (lVar4 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x28 - lVar4 != 0;
        lVar4 = lVar4 + 0x28) {
      if (*(int *)(lStack_38 + lVar4) != 0) {
        FUN_10831eca0(param_1,lStack_38 + lVar4 + 8);
      }
    }
    func_0x00010831e2f0(&lStack_38);
  }
  FUN_10831eca0(param_1,&uStack_58);
  func_0x00010831f3b0();
  return;
}



/* Entry: 10831d8f8; end: 10831d927;  */

void FUN_10831d8f8(long param_1)

{
  func_0x00010831f4c0();
  func_0x00010831f388(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10831d928; end: 10831d97f;  */

long FUN_10831d928(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3[1];
  uStack_38 = *param_3;
  uStack_28 = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uStack_40 = param_2;
  FUN_10831ed50(param_1,&uStack_40);
  func_0x00010831f3b0();
  return param_1 + 8;
}



/* Entry: 10831d980; end: 10831d997;  */

void FUN_10831d980(void)

{
  FUN_10831efa8();
  func_0x00010831f3e4();
  return;
}



/* Entry: 10831d998; end: 10831d9df;  */

bool FUN_10831d998(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *extraout_x8;
  ulong *puVar4;
  
  lVar1 = (long)*(int *)(param_1 + 0x30) << 3;
  puVar4 = *(ulong **)(param_1 + 0x28);
  do {
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    uVar2 = *puVar4;
    func_0x00010831f168();
    (*extraout_x8)();
    lVar1 = lVar3 + -8;
    puVar4 = puVar4 + 1;
  } while ((uVar2 & 1) != 0);
  return lVar3 == 0;
}



/* Entry: 10831d9e0; end: 10831dfd7;  */

void FUN_10831d9e0(undefined *******param_1,undefined8 param_2,undefined8 param_3,
                  undefined *******param_4,undefined *******param_5)

{
  undefined8 uVar1;
  undefined *****pppppuVar2;
  undefined *******pppppppuVar3;
  undefined *******pppppppuVar4;
  undefined *****pppppuVar5;
  undefined *****pppppuVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined *******pppppppuVar11;
  undefined *****pppppuVar12;
  undefined *******pppppppuVar13;
  char *pcVar14;
  undefined *******pppppppuVar15;
  undefined *******pppppppuVar16;
  undefined ******ppppppuVar17;
  undefined8 extraout_x8;
  undefined *******extraout_x8_00;
  undefined8 extraout_x9;
  undefined *******extraout_x9_00;
  undefined *******pppppppuVar18;
  undefined ******ppppppuVar19;
  long lVar20;
  undefined *****pppppuVar21;
  undefined *******pppppppuVar22;
  undefined ******ppppppuStack_200;
  undefined ******ppppppuStack_1f8;
  undefined ******ppppppuStack_1f0;
  undefined ******ppppppuStack_1e8;
  undefined ******ppppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined ******ppppppuStack_160;
  undefined ******ppppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined ******ppppppuStack_138;
  undefined ******ppppppuStack_130;
  undefined ******ppppppuStack_128;
  undefined ******ppppppuStack_120;
  undefined1 auStack_118 [24];
  undefined ******ppppppuStack_100;
  undefined ******ppppppuStack_f8;
  undefined ******ppppppuStack_f0;
  undefined ******ppppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined ******ppppppuStack_d0;
  undefined ******ppppppuStack_c0;
  undefined ******ppppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined ******ppppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar15 = param_1 + 5;
  ppppppuStack_a8 = (undefined ******)&ppppppuStack_c0;
  ppppppuStack_c0 = (undefined ******)&PTR_FUN_110a3c090;
  pppppppuVar16 = &ppppppuStack_c0;
  FUN_1083d7df8(*param_1);
  pppppppuVar11 = &ppppppuStack_c0;
  FUN_10831f0a8();
  ppppppuStack_120 = (undefined ******)(param_1 + 0xb);
  ppppppuVar17 = *param_1;
  pppppppuVar18 = (undefined *******)ppppppuVar17[7];
  pppppppuVar3 = (undefined *******)ppppppuVar17[8];
  pppppppuVar13 = (undefined *******)ppppppuVar17[10];
  pppppppuVar4 = (undefined *******)ppppppuVar17[0xb];
  ppppppuStack_128 = (undefined ******)&ppppppuStack_b0;
  ppppppuStack_130 = (undefined ******)&PTR_FUN_110a3c120;
  ppppppuStack_138 = (undefined ******)&PTR_FUN_110a403f8;
  do {
    if (pppppppuVar18 == pppppppuVar3 && pppppppuVar13 == pppppppuVar4) {
      ppppppuVar17 = *param_1;
      pppppuVar21 = ppppppuVar17[7];
      pppppuVar5 = ppppppuVar17[8];
      pppppuVar6 = ppppppuVar17[0xb];
      for (pppppuVar12 = ppppppuVar17[10];
          bVar8 = pppppuVar21 == pppppuVar5 && pppppuVar12 == pppppuVar6,
          pppppuVar21 != pppppuVar5 || pppppuVar12 != pppppuVar6;
          pppppuVar12 = (undefined *****)((long)pppppuVar12 + lVar20)) {
        pppppuVar2 = pppppuVar21;
        if (pppppuVar12 != pppppuVar6) {
          pppppuVar2 = pppppuVar12;
        }
        ppppppuVar17 = (undefined ******)*pppppuVar2;
        if ((*(int *)((long)ppppppuVar17 + 0xc) == 1) &&
           (pppppppuVar18 = (undefined *******)ppppppuVar17[2],
           *(char *)((long)pppppppuVar18 + 0x55) != '\x02')) {
          param_1[0x13] = (undefined ******)pppppppuVar18;
          if ((*(char *)((long)pppppppuVar18 + 0x56) == '\x01') &&
             (1 < *(byte *)((long)(*param_1)[1] + 1) - 0xd)) {
            *(undefined1 *)(param_1 + 0x12) = 1;
          }
          pppppppuVar13 = (undefined *******)0x20;
          __Znwm();
          *pppppppuVar13 = (undefined ******)&PTR_FUN_110a3bf90;
          pppppppuVar13[1] = (undefined ******)param_1;
          pppppppuVar13[2] = ppppppuVar17;
          pppppppuVar13[3] = (undefined ******)pppppppuVar18;
          pppppppuVar16 = &ppppppuStack_c0;
          pppppppuVar11 = param_1;
          pppppppuVar15 = pppppppuVar18;
          ppppppuStack_a8 = (undefined ******)pppppppuVar13;
          FUN_10831d278();
          func_0x00010831f460();
          if (*(char *)((long)pppppppuVar18 + 0x56) == '\x01') {
            *(undefined1 *)(param_1 + 0x12) = 0;
          }
          param_1[0x13] = (undefined ******)0x0;
        }
        lVar20 = 8;
        if (pppppuVar12 != pppppuVar6) {
          lVar20 = 0;
        }
        pppppuVar21 = (undefined *****)((long)pppppuVar21 + lVar20);
        lVar20 = 0;
        if (pppppuVar12 != pppppuVar6) {
          lVar20 = 8;
        }
      }
      func_0x00010831f298(uStack_70);
      if (bVar8) {
        return;
      }
      ___stack_chk_fail();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_c0);
      pppppppuVar13 = &ppppppuStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010831f184();
      pcStack_148 = FUN_10831dfd8;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c0 = 0;
      uStack_1c8 = 0;
      uStack_1b8 = 0xffffffff;
      uStack_168 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_170 = 0;
      ppppppuStack_200 = (undefined ******)pppppppuVar13;
      ppppppuStack_1f8 = (undefined ******)pppppppuVar15;
      ppppppuStack_1f0 = (undefined ******)pppppppuVar16;
      ppppppuStack_1e8 = (undefined ******)param_4;
      ppppppuStack_1e0 = (undefined ******)param_5;
      ppppppuStack_160 = (undefined ******)pppppppuVar18;
      ppppppuStack_158 = (undefined ******)pppppppuVar11;
      puStack_150 = &stack0xfffffffffffffff0;
      FUN_10831d9e0(&ppppppuStack_200);
      func_0x00010831e164(&ppppppuStack_200);
      return;
    }
    pppppppuVar22 = pppppppuVar18;
    if (pppppppuVar13 != pppppppuVar4) {
      pppppppuVar22 = pppppppuVar13;
    }
    ppppppuVar17 = *pppppppuVar22;
    iVar7 = *(int *)((long)ppppppuVar17 + 0xc);
    if (iVar7 == 1) {
      pppppppuVar15 = (undefined *******)ppppppuVar17[2];
      if (((*(byte *)((long)pppppppuVar15 + 0x56) & 1) == 0) &&
         (*(char *)((long)pppppppuVar15 + 0x55) != '\x02')) {
        ppppppuStack_c0 = (undefined ******)&PTR_DAT_110a3c010;
        ppppppuStack_a8 = (undefined ******)&ppppppuStack_c0;
        pppppppuVar16 = &ppppppuStack_c0;
        pppppppuVar11 = param_1;
        ppppppuStack_b8 = (undefined ******)param_1;
        ppppppuStack_b0 = (undefined ******)pppppppuVar15;
        FUN_10831d278();
        func_0x00010831f460();
      }
    }
    else {
      cVar9 = SBORROW4(iVar7,6);
      cVar10 = iVar7 + -6 < 0;
      if (iVar7 == 6) {
        pppppuVar21 = ppppppuVar17[2];
        ppppppuVar17 = param_1[4];
        FUN_10831d8f8(&ppppppuStack_e0,pppppuVar21);
        func_0x00010831f514();
        uVar1 = extraout_x9;
        if (cVar10 == cVar9) {
          uVar1 = extraout_x8;
        }
        (*(code *)(*ppppppuVar17)[3])(&ppppppuStack_c0,ppppppuVar17,uVar1);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_e0);
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&ppppppuStack_100,&UNK_10f48d203,&ppppppuStack_c0);
        pcVar14 = " {\n";
        func_0x00010048a6c8(&ppppppuStack_e0,&ppppppuStack_100);
        func_0x00010831f1e4();
        pppppuVar12 = pppppuVar21;
        (*(code *)(*pppppuVar21)[0x12])();
        for (lVar20 = (long)pcVar14 * 0x58; lVar20 != 0; lVar20 = lVar20 + -0x58) {
          param_5 = (undefined *******)pppppuVar12[9];
          param_4 = (undefined *******)pppppuVar12[8];
          func_0x00010831f430();
          func_0x00010048a6c8(&ppppppuStack_100,auStack_118,&UNK_10f480bab);
          func_0x0001004c3ca0(&ppppppuStack_e0,&ppppppuStack_100);
          func_0x00010831f1e4();
          func_0x00010831f2d0();
          pppppuVar12 = pppppuVar12 + 0xb;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&ppppppuStack_e0,&UNK_10f48d20b);
        ppppppuStack_f8 = ppppppuStack_b8;
        ppppppuStack_100 = ppppppuStack_c0;
        ppppppuStack_f0 = ppppppuStack_b0;
        ppppppuStack_b8 = (undefined ******)0x0;
        ppppppuStack_b0 = (undefined ******)0x0;
        ppppppuStack_c0 = (undefined ******)0x0;
        pppppppuVar16 = &ppppppuStack_100;
        FUN_10831d928(param_1 + 0xd,pppppuVar21);
        func_0x00010831f1e4();
        ppppppuVar17 = param_1[4];
        func_0x00010831f514();
        pppppppuVar22 = extraout_x9_00;
        if (cVar10 == cVar9) {
          pppppppuVar22 = extraout_x8_00;
        }
        (*(code *)(*ppppppuVar17)[6])();
LAB_10831dd54:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_e0);
        pppppppuVar11 = &ppppppuStack_c0;
LAB_10831dd60:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        pppppppuVar15 = pppppppuVar22;
      }
      else if (iVar7 == 3) {
        pppppppuVar22 = (undefined *******)ppppppuVar17[2];
        ppppppuVar17 = pppppppuVar22[2];
        if (((*(byte *)((long)ppppppuVar17 + 0x39) & 1) == 0) &&
           (0xf < *(byte *)((long)ppppppuVar17[4] + 0x2c) ||
            (1 << (ulong)(*(byte *)((long)ppppppuVar17[4] + 0x2c) & 0x1f) & 0xe4c2U) == 0)) {
          if ((*(byte *)(ppppppuVar17 + 6) >> 3 & 1) != 0) {
            (*(code *)(*param_1[4])[8])(&ppppppuStack_c0);
            ppppppuStack_d8 = ppppppuStack_b8;
            ppppppuStack_e0 = ppppppuStack_c0;
            ppppppuStack_d0 = ppppppuStack_b0;
            ppppppuStack_b8 = (undefined ******)0x0;
            ppppppuStack_b0 = (undefined ******)0x0;
            ppppppuStack_c0 = (undefined ******)0x0;
            pppppppuVar16 = &ppppppuStack_e0;
            func_0x00010831f4e4();
            goto LAB_10831dd54;
          }
          ppppppuVar19 = param_1[4];
          ppppppuStack_f8 = (undefined ******)ppppppuVar17[3];
          ppppppuStack_100 = (undefined ******)ppppppuVar17[2];
          func_0x000107c27958(&ppppppuStack_c0,&ppppppuStack_100);
          pppppppuVar11 = (undefined *******)ppppppuStack_c0;
          if (-1 < (long)ppppppuStack_b0) {
            pppppppuVar11 = &ppppppuStack_c0;
          }
          (*(code *)(*ppppppuVar19)[3])(&ppppppuStack_e0,ppppppuVar19,pppppppuVar11);
          func_0x00010831f3a0();
          FUN_10831d5f0(&ppppppuStack_c0,*(undefined4 *)(ppppppuVar17 + 6));
          param_5 = (undefined *******)ppppppuStack_d8;
          param_4 = (undefined *******)ppppppuStack_e0;
          if (-1 < (long)ppppppuStack_d0) {
            param_5 = (undefined *******)((ulong)ppppppuStack_d0 >> 0x38);
            param_4 = &ppppppuStack_e0;
          }
          func_0x00010831f430();
          func_0x00010533a9c0(&ppppppuStack_100,&ppppppuStack_c0,auStack_118);
          func_0x00010831f2d0();
          func_0x00010831f3a0();
          if (pppppppuVar22[5] != (undefined ******)0x0) {
            ppppppuStack_b0 = ppppppuStack_130;
            ppppppuStack_a8 = ppppppuStack_138;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            ppppppuStack_b8 = param_1[0x11];
            param_1[0x11] = ppppppuStack_128;
            ppppppuStack_c0 = (undefined ******)param_1;
            func_0x00010831f110();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (&ppppppuStack_100,&UNK_10f48d1ff);
            pppppppuVar11 = (undefined *******)ppppppuStack_128;
            FUN_10831c910(ppppppuStack_128);
            func_0x0001004c3ca0(&ppppppuStack_100,pppppppuVar11);
            func_0x00010831e0e4(&ppppppuStack_c0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                    (&ppppppuStack_100,&UNK_10f480bab);
          pppppppuVar22 = (undefined *******)ppppppuStack_100;
          if (-1 < (long)ppppppuStack_f0) {
            pppppppuVar22 = &ppppppuStack_100;
          }
          (*(code *)(*param_1[4])[7])();
          ppppppuStack_b8 = ppppppuStack_d8;
          ppppppuStack_c0 = ppppppuStack_e0;
          ppppppuStack_b0 = ppppppuStack_d0;
          ppppppuStack_d8 = (undefined ******)0x0;
          ppppppuStack_d0 = (undefined ******)0x0;
          ppppppuStack_e0 = (undefined ******)0x0;
          pppppppuVar16 = &ppppppuStack_c0;
          func_0x00010831f4e4();
          func_0x00010831f3a0();
          func_0x00010831f1e4();
          pppppppuVar11 = &ppppppuStack_e0;
          goto LAB_10831dd60;
        }
      }
    }
    lVar20 = 8;
    if (pppppppuVar13 != pppppppuVar4) {
      lVar20 = 0;
    }
    pppppppuVar18 = (undefined *******)((long)pppppppuVar18 + lVar20);
    lVar20 = 0;
    if (pppppppuVar13 != pppppppuVar4) {
      lVar20 = 8;
    }
    pppppppuVar13 = (undefined *******)((long)pppppppuVar13 + lVar20);
  } while( true );
}



/* Entry: 10831dfd8; end: 10831e043;  */

void FUN_10831dfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0xffffffff;
  uStack_28 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_c0 = param_1;
  uStack_b8 = param_2;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  uStack_a0 = param_5;
  FUN_10831d9e0(&uStack_c0);
  func_0x00010831e164(&uStack_c0);
  return;
}



/* Entry: 10831e044; end: 10831e04b;  */

undefined8 FUN_10831e044(void)

{
  return 1;
}



/* Entry: 10831e04c; end: 10831e07b;  */

void FUN_10831e04c(long param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))((long *)(param_1 + 8),&uStack_11,1);
  return;
}



/* Entry: 10831e07c; end: 10831e08f;  */

void FUN_10831e07c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
                    /* WARNING: Could not recover jumptable at 0x000108186664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))((long *)(param_1 + 8),param_2,uVar1);
  return;
}



/* Entry: 10831e090; end: 10831e0a3;  */

void FUN_10831e090(void)

{
  FUN_10831e0a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10831e0a4; end: 10831e10b;  */

undefined8 * FUN_10831e0a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3c120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  FUN_1083a02a4(param_1 + 1);
  return param_1;
}



/* Entry: 10831e10c; end: 10831e143;  */

void FUN_10831e10c(long param_1)

{
  long unaff_x20;
  
  func_0x00010831f260();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 10831e144; end: 10831e1bf;  */

void FUN_10831e144(void)

{
  func_0x00010831f4cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10831e1c0; end: 10831e1d3;  */

void FUN_10831e1c0(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      lVar2 = extraout_x8 * -0x30;
      lVar1 = lVar1 + extraout_x8 * 0x30;
      do {
        lVar1 = lVar1 + -0x30;
        FUN_10831e228(lVar1);
        lVar2 = lVar2 + 0x30;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e1d4; end: 10831e227;  */

void FUN_10831e1d4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  
  if (param_2 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      lVar1 = extraout_x8 * -0x30;
      param_2 = param_2 + extraout_x8 * 0x30;
      do {
        param_2 = param_2 + -0x30;
        FUN_10831e228(param_2);
        lVar1 = lVar1 + 0x30;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e228; end: 10831e26f;  */

void FUN_10831e228(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010831f4cc();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10831e270; end: 10831e283;  */

void FUN_10831e270(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      func_0x00010831f418();
      do {
        FUN_10831e2c8(unaff_x20);
        unaff_x20 = unaff_x20 + -0x28;
        unaff_x21 = unaff_x21 + 0x28;
      } while (unaff_x21 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e284; end: 10831e2c7;  */

void FUN_10831e284(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      func_0x00010831f418();
      do {
        FUN_10831e2c8(unaff_x20);
        unaff_x20 = unaff_x20 + -0x28;
        unaff_x21 = unaff_x21 + 0x28;
      } while (unaff_x21 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e2c8; end: 10831e30f;  */

void FUN_10831e2c8(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010831f4d8();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10831e310; end: 10831e323;  */

void FUN_10831e310(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      func_0x00010831f418();
      do {
        FUN_10831e368(unaff_x20);
        unaff_x20 = unaff_x20 + -0x28;
        unaff_x21 = unaff_x21 + 0x28;
      } while (unaff_x21 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e324; end: 10831e367;  */

void FUN_10831e324(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      func_0x00010831f418();
      do {
        FUN_10831e368(unaff_x20);
        unaff_x20 = unaff_x20 + -0x28;
        unaff_x21 = unaff_x21 + 0x28;
      } while (unaff_x21 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e368; end: 10831e3db;  */

void FUN_10831e368(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010831f4d8();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10831e3dc; end: 10831e423;  */

void FUN_10831e3dc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 5;
      do {
        if (*(int *)(lVar1 + -0x20 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x20 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10831e424; end: 10831e443;  */

void FUN_10831e424(void)

{
  func_0x00010831f3b8();
  FUN_10831e444();
  return;
}



/* Entry: 10831e444; end: 10831e457;  */

void FUN_10831e444(long *param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      lVar2 = extraout_x8 * -0x20;
      lVar1 = lVar1 + extraout_x8 * 0x20;
      do {
        lVar1 = lVar1 + -0x20;
        FUN_10831e4a4(lVar1);
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e458; end: 10831e4a3;  */

void FUN_10831e458(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  
  if (param_2 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      lVar1 = extraout_x8 * -0x20;
      param_2 = param_2 + extraout_x8 * 0x20;
      do {
        param_2 = param_2 + -0x20;
        FUN_10831e4a4(param_2);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831e4a4; end: 10831e4d3;  */

void FUN_10831e4a4(int *param_1)

{
  if (*param_1 != 0) {
    FUN_10831e4d4(param_1 + 4);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10831e4d4; end: 10831e507;  */

undefined8 * FUN_10831e4d4(undefined8 *param_1)

{
  FUN_10831e508();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10831e508; end: 10831e563;  */

void FUN_10831e508(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      func_0x00010831e544(uVar2 + 8);
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10831e564; end: 10831e5af;  */

void FUN_10831e564(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10831e5b0; end: 10831e617;  */

int * FUN_10831e5b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint extraout_w8;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x10;
  long extraout_x10_00;
  uint extraout_w11;
  undefined8 uVar4;
  undefined8 extraout_x12;
  int *piVar5;
  long unaff_x19;
  
  func_0x00010831f260();
  FUN_10831e618();
  func_0x00010831f278();
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar4 = 0x18;
  iVar2 = extraout_w9;
  lVar3 = extraout_x10;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(unaff_x19 + 8) + (long)iVar2 * (long)(int)uVar4);
    if (*piVar5 == 0) break;
    if (((int)param_2 == *piVar5) && (lVar3 == *(long *)(piVar5 + 2))) {
      return piVar5 + 2;
    }
    func_0x00010831f140();
    uVar4 = extraout_x12;
    iVar2 = extraout_w9_00;
    lVar3 = extraout_x10_00;
    uVar1 = extraout_w11;
  }
  return (int *)0x0;
}



/* Entry: 10831e618; end: 10831e677;  */

void FUN_10831e618(void)

{
  func_0x00010831e630();
  func_0x00010831f4fc();
  return;
}



/* Entry: 10831e678; end: 10831e6c3;  */

uint FUN_10831e678(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  puVar2 = &uStack_21;
  FUN_10831e6c4(puVar2,param_1);
  puVar3 = &uStack_22;
  FUN_108156ba4(puVar3,param_1 + 8);
  uVar1 = (uint)puVar3 ^ (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10831e6c4; end: 10831e6d7;  */

void FUN_10831e6c4(void)

{
  func_0x00010831f1a4();
  return;
}



/* Entry: 10831e6d8; end: 10831e6df;  */

void FUN_10831e6d8(void)

{
  return;
}



/* Entry: 10831e6e0; end: 10831e70f;  */

void FUN_10831e6e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a3bf00;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10831e710; end: 10831e733;  */

void FUN_10831e710(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3bf00;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10831e734; end: 10831e793;  */

void FUN_10831e734(long param_1)

{
  undefined1 auStack_38 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (*(undefined8 *)(param_1 + 8),0x5f);
  func_0x00010831f44c(auStack_38);
  func_0x0001004c3ca0(*(undefined8 *)(param_1 + 8),auStack_38);
  func_0x00010831f17c();
  return;
}



/* Entry: 10831e794; end: 10831e7bb;  */

void FUN_10831e794(undefined8 param_1)

{
  func_0x00010831f4f0();
  func_0x00010831f3cc(param_1,&PTR_DAT_110a3bf70);
  func_0x00010831f2c0();
  return;
}



/* Entry: 10831e7bc; end: 10831e7c7;  */

undefined ** FUN_10831e7bc(void)

{
  return &PTR_DAT_110a3bf70;
}



/* Entry: 10831e7c8; end: 10831e89f;  */

long FUN_10831e7c8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010831f49c(uVar1);
  return param_1;
}



/* Entry: 10831e8a0; end: 10831e8e7;  */

void FUN_10831e8a0(void)

{
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  undefined4 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010831f3d4();
  FUN_10831e228();
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x21 + 4) = unaff_x20[1];
  *(undefined8 *)(unaff_x21 + 2) = uVar1;
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2];
  *(undefined8 *)(unaff_x21 + 10) = unaff_x20[4];
  *(undefined8 *)(unaff_x21 + 8) = uVar2;
  *(undefined8 *)(unaff_x21 + 6) = uVar1;
  unaff_x20[3] = 0;
  unaff_x20[4] = 0;
  unaff_x20[2] = 0;
  *unaff_x21 = unaff_w19;
  return;
}



/* Entry: 10831e8e8; end: 10831e8ef;  */

void FUN_10831e8e8(void)

{
  return;
}



/* Entry: 10831e8f0; end: 10831e92b;  */

void FUN_10831e8f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110a3bf90;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10831e92c; end: 10831e95b;  */

void FUN_10831e92c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a3bf90;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10831e95c; end: 10831ea8b;  */

void FUN_10831e95c(long param_1)

{
  undefined ***pppuVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  long lStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pppuVar4 = &ppuStack_80;
  ppuStack_80 = &PTR_FUN_110a3c120;
  ppuStack_78 = &PTR_FUN_110a403f8;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar2 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  uStack_88 = *(undefined8 *)(lVar2 + 0x88);
  *(undefined ****)(lVar2 + 0x88) = pppuVar4;
  lVar5 = *(long *)(lVar7 + 0x18);
  lStack_90 = lVar2;
  puVar3 = *(undefined8 **)(lVar5 + 0x28);
  for (lVar7 = (long)*(int *)(lVar5 + 0x30) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    FUN_10831cdb4(lVar2,*puVar3);
    FUN_10831be84(lVar2,0,0);
    puVar3 = puVar3 + 1;
  }
  plVar6 = *(long **)(lVar2 + 0x20);
  FUN_10831d318(appuStack_a8,lVar2,*(undefined8 *)(param_1 + 0x18));
  FUN_10831c910();
  if (-1 < cStack_91) {
    appuStack_a8[0] = appuStack_a8;
  }
  pppuVar1 = (undefined ***)*pppuVar4;
  if (-1 < *(char *)((long)pppuVar4 + 0x17)) {
    pppuVar1 = pppuVar4;
  }
  (**(code **)(*plVar6 + 0x20))
            (plVar6,appuStack_a8[0],pppuVar1,*(undefined1 *)(*(long *)(param_1 + 0x18) + 0x56));
  func_0x00010831f17c();
  func_0x00010831e0e4(&lStack_90);
  return;
}



/* Entry: 10831ea8c; end: 10831eab3;  */

void FUN_10831ea8c(undefined8 param_1)

{
  func_0x00010831f4f0();
  func_0x00010831f3cc(param_1,&PTR_DAT_110a3bff0);
  func_0x00010831f2c0();
  return;
}



/* Entry: 10831eab4; end: 10831eac7;  */

undefined ** FUN_10831eab4(void)

{
  return &PTR_DAT_110a3bff0;
}



/* Entry: 10831eac8; end: 10831eafb;  */

void FUN_10831eac8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110a3c010;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10831eafc; end: 10831eb23;  */

void FUN_10831eafc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110a3c010;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10831eb24; end: 10831ebaf;  */

void FUN_10831eb24(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_10831d318(auStack_50,lVar1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107525ea8(appuStack_38,auStack_50,0x3b);
  func_0x00010831f318();
  plVar2 = *(long **)(lVar1 + 0x20);
  if (-1 < cStack_21) {
    appuStack_38[0] = appuStack_38;
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,appuStack_38[0]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_38);
  return;
}



/* Entry: 10831ebb0; end: 10831ebd7;  */

void FUN_10831ebb0(undefined8 param_1)

{
  func_0x00010831f4f0();
  func_0x00010831f3cc(param_1,&PTR_DAT_110a3c070);
  func_0x00010831f2c0();
  return;
}



/* Entry: 10831ebd8; end: 10831ebe3;  */

undefined ** FUN_10831ebd8(void)

{
  return &PTR_DAT_110a3c070;
}



/* Entry: 10831ebe4; end: 10831ec67;  */

uint * FUN_10831ebe4(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010831f260();
  FUN_10831ec68();
  uVar5 = *(uint *)(unaff_x19 + 4);
  uVar2 = uVar5 - 1 & param_2;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 0x20);
    if (*puVar1 == 0) break;
    if ((param_2 == *puVar1) && (*unaff_x20 == *(long *)(puVar1 + 2))) {
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar5;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 10831ec68; end: 10831ec9f;  */

void FUN_10831ec68(void)

{
  func_0x00010831ec80();
  func_0x00010831f4fc();
  return;
}



/* Entry: 10831eca0; end: 10831ed2b;  */

int * FUN_10831eca0(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int iVar5;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  
  func_0x00010831e65c(param_2);
  func_0x00010831f320();
  iVar1 = extraout_w9;
  lVar2 = extraout_x10;
  iVar3 = extraout_w12;
  iVar5 = extraout_w11;
  while( true ) {
    if (iVar5 == 0) {
      return (int *)0x0;
    }
    piVar4 = (int *)(*(long *)(param_1 + 2) + (long)iVar1 * (long)iVar3);
    if (*piVar4 == 0) break;
    if ((param_3 == *piVar4) && (lVar2 == *(long *)(piVar4 + 2))) {
      FUN_10831ed2c(piVar4,param_2);
      return piVar4 + 2;
    }
    func_0x00010831f140();
    iVar1 = extraout_w9_00;
    lVar2 = extraout_x10_00;
    iVar3 = extraout_w12_00;
    iVar5 = extraout_w11_00;
  }
  FUN_10831ed2c(piVar4,param_2);
  *param_1 = *param_1 + 1;
  return piVar4 + 2;
}



/* Entry: 10831ed2c; end: 10831ed4f;  */

void FUN_10831ed2c(void)

{
  func_0x00010831f3d4();
  FUN_10831e368();
  func_0x00010831f234();
  return;
}



/* Entry: 10831ed50; end: 10831ed9f;  */

int * FUN_10831ed50(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int iVar4;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *piVar5;
  
  iVar1 = param_1[1];
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar4 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar4 = 4;
    }
    FUN_10831eda0(param_1,iVar4);
  }
  FUN_10831ef38(param_2);
  func_0x00010831f320();
  uVar2 = extraout_x9;
  lVar3 = extraout_x10;
  iVar1 = extraout_w12;
  iVar4 = extraout_w11;
  while( true ) {
    if (iVar4 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * (long)iVar1);
    if (*piVar5 == 0) break;
    if ((param_3 == *piVar5) && (lVar3 == *(long *)(piVar5 + 2))) {
      func_0x00010831f4a8();
      return piVar5 + 2;
    }
    func_0x00010831f140();
    uVar2 = extraout_x9_00;
    lVar3 = extraout_x10_00;
    iVar1 = extraout_w12_00;
    iVar4 = extraout_w11_00;
  }
  func_0x00010831f4a8();
  *param_1 = *param_1 + 1;
  return piVar5 + 2;
}



/* Entry: 10831eda0; end: 10831ee97;  */

void FUN_10831eda0(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lStack_48;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  plVar7 = (long *)(param_1 + 2);
  lStack_48 = *plVar7;
  *plVar7 = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar6 = ((-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar6 + 0x10);
  if (0xffffffffffffffef < uVar6 || SUB168(auVar2 * ZEXT816(0x28),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x28;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar5 = uVar8 * 0x28;
    puVar3 = puVar3 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar5 = lVar5 + -0x28;
      puVar3 = puVar3 + 5;
    } while (lVar5 != 0);
  }
  FUN_10831ef20(plVar7);
  for (lVar5 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x28 - lVar5 != 0;
      lVar5 = lVar5 + 0x28) {
    if (*(int *)(lStack_48 + lVar5) != 0) {
      FUN_10831ee98(param_1,lStack_48 + lVar5 + 8);
    }
  }
  func_0x00010831e250(&lStack_48);
  return;
}



/* Entry: 10831ee98; end: 10831ef1f;  */

int * FUN_10831ee98(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w11;
  int iVar4;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int *piVar5;
  
  FUN_10831ef38(param_2);
  func_0x00010831f320();
  iVar1 = extraout_w9;
  lVar2 = extraout_x10;
  iVar3 = extraout_w12;
  iVar4 = extraout_w11;
  while( true ) {
    if (iVar4 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(param_1 + 2) + (long)iVar1 * (long)iVar3);
    if (*piVar5 == 0) break;
    if ((param_3 == *piVar5) && (lVar2 == *(long *)(piVar5 + 2))) {
      func_0x00010831f4a8();
      return piVar5 + 2;
    }
    func_0x00010831f140();
    iVar1 = extraout_w9_00;
    lVar2 = extraout_x10_00;
    iVar3 = extraout_w12_00;
    iVar4 = extraout_w11_00;
  }
  func_0x00010831f4a8();
  *param_1 = *param_1 + 1;
  return piVar5 + 2;
}



/* Entry: 10831ef20; end: 10831ef37;  */

void FUN_10831ef20(long *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    func_0x00010831f508();
    if (extraout_x8 != 0) {
      func_0x00010831f418();
      do {
        FUN_10831e2c8(unaff_x20);
        unaff_x20 = unaff_x20 + -0x28;
        unaff_x21 = unaff_x21 + 0x28;
      } while (unaff_x21 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10831ef38; end: 10831ef4f;  */

void FUN_10831ef38(void)

{
  FUN_10831ef74();
  func_0x00010831f4fc();
  return;
}



/* Entry: 10831ef50; end: 10831ef73;  */

void FUN_10831ef50(void)

{
  func_0x00010831f3d4();
  FUN_10831e2c8();
  func_0x00010831f234();
  return;
}



/* Entry: 10831ef74; end: 10831efa7;  */

void FUN_10831ef74(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010831ef94(&uStack_11,param_1);
  return;
}



/* Entry: 10831efa8; end: 10831f00f;  */

int * FUN_10831efa8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint extraout_w8;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x10;
  long extraout_x10_00;
  uint extraout_w11;
  undefined8 uVar4;
  undefined8 extraout_x12;
  int *piVar5;
  long unaff_x19;
  
  func_0x00010831f260();
  FUN_10831ef38();
  func_0x00010831f278();
  uVar1 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU);
  uVar4 = 0x28;
  iVar2 = extraout_w9;
  lVar3 = extraout_x10;
  while( true ) {
    if (uVar1 == 0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(*(long *)(unaff_x19 + 8) + (long)iVar2 * (long)(int)uVar4);
    if (*piVar5 == 0) break;
    if (((int)param_2 == *piVar5) && (lVar3 == *(long *)(piVar5 + 2))) {
      return piVar5 + 2;
    }
    func_0x00010831f140();
    uVar4 = extraout_x12;
    iVar2 = extraout_w9_00;
    lVar3 = extraout_x10_00;
    uVar1 = extraout_w11;
  }
  return (int *)0x0;
}



/* Entry: 10831f010; end: 10831f017;  */

void FUN_10831f010(void)

{
  return;
}



/* Entry: 10831f018; end: 10831f03b;  */

void FUN_10831f018(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a3c090;
  return;
}



/* Entry: 10831f03c; end: 10831f073;  */

void FUN_10831f03c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a3c090;
  return;
}


