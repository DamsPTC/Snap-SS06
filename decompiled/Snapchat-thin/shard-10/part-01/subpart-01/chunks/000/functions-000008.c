/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077fdd2c; end: 1077fdde7;  */

void FUN_1077fdd2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x0001077fbeb0(param_2,param_7 + 0x18);
  func_0x000107812ea4(param_1,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5,param_6,param_7,
                      param_8,param_9);
  return;
}



/* Entry: 1077fe1b8; end: 1077fe1ef;  */

void FUN_1077fe1b8(long *param_1,long param_2)

{
  func_0x000107808f04();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x00010780910c();
  return;
}



/* Entry: 1077fe4a0; end: 1077fe577;  */

long * FUN_1077fe4a0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001077fe47c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077fea78; end: 1077fea9f;  */

undefined8 * FUN_1077fea78(undefined8 *param_1)

{
  func_0x0001077ff688(param_1 + 0x1b);
  func_0x0001077feacc(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    func_0x0001077feb80(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1077febf8; end: 1077fec0b;  */

void FUN_1077febf8(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = (undefined8 *)&DAT_10f2fca96;
  func_0x000104c03f28();
  if (0x7ffffffffffffff6 < param_3) {
    func_0x000107407b68();
    plVar4 = param_2 + 1;
    lVar5 = *plVar4;
    *puVar1 = *param_2;
    plVar6 = puVar1 + 1;
    *plVar6 = lVar5;
    lVar7 = param_2[2];
    puVar1[2] = lVar7;
    if (lVar7 == 0) {
      *puVar1 = plVar6;
      return;
    }
    *(long **)(lVar5 + 0x10) = plVar6;
    *param_2 = plVar4;
    *plVar4 = 0;
    param_2[2] = 0;
    return;
  }
  puVar2 = puVar1;
  if (param_3 < 0xb) {
    *(char *)((long)puVar1 + 0x17) = (char)param_3;
    if (param_3 == 0) goto code_r0x0001077fec84;
  }
  else {
    uVar3 = 0xd;
    if ((param_3 | 3) != 0xb) {
      uVar3 = (param_3 | 3) + 1;
    }
    func_0x000107407b7c();
    puVar1[1] = param_3;
    puVar1[2] = uVar3 | 0x8000000000000000;
    *puVar1 = puVar2;
  }
  _memmove(puVar2,param_2,param_3 << 1);
  puVar1 = puVar2;
code_r0x0001077fec84:
  *(undefined2 *)((long)puVar1 + param_3 * 2) = 0;
  return;
}



/* Entry: 1077fee60; end: 1077feecb;  */

void FUN_1077fee60(long param_1)

{
  func_0x0001077fec94();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1077ff0b4; end: 1077ff0d3;  */

void FUN_1077ff0b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x88;
    func_0x0001074058d8();
  }
  return;
}



/* Entry: 1077ff304; end: 1077ff30b;  */

void FUN_1077ff304(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107808f04(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x30) {
    func_0x000107405908(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1077ff5d0; end: 1077ff5f7;  */

undefined8 FUN_1077ff5d0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001077ff5f8(&uStack_18);
  return uStack_18;
}



/* Entry: 1077ff7a8; end: 1077ff8bf;  */

undefined8 * FUN_1077ff7a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0001077ff808(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1077ffb6c; end: 1077ffb7f;  */

void FUN_1077ffb6c(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077ffcd8; end: 1077ffd0b;  */

undefined8 * FUN_1077ffcd8(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    func_0x0001077ffd0c(param_1[2],param_1);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 1078010f4; end: 1078010f7;  */

bool FUN_1078010f4(double *param_1,double *param_2)

{
  return *param_2 < *param_1;
}



/* Entry: 107801af8; end: 107801b5f;  */

void FUN_107801af8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  float *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107808810();
  func_0x000107801aac();
  uVar1 = *param_5 < *unaff_x22;
  if ((bool)uVar1) {
    func_0x0001078090e8();
    func_0x0001078094c4();
    if ((bool)uVar1) {
      func_0x000107808c74();
      func_0x0001078094b4();
      if ((bool)uVar1) {
        func_0x000107808c9c();
        func_0x0001078096c4();
        if ((bool)uVar1) {
          func_0x0001078093b4();
          uVar3 = param_1[1];
          uVar2 = *param_1;
          uVar4 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar4;
          param_2[1] = uVar3;
          *param_2 = uVar2;
          uVar2 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = uVar2;
          uVar2 = param_1[3];
          param_1[3] = param_2[3];
          param_2[3] = uVar2;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 1078024f0; end: 1078025af;  */

void FUN_1078024f0(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar5;
  long extraout_x12;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (1 < param_2) {
    uVar3 = param_2 - 2U >> 1;
    lVar4 = (long)param_3 - param_1 >> 5;
    cVar1 = SBORROW8(uVar3,lVar4);
    cVar2 = (long)(uVar3 - lVar4) < 0;
    if (lVar4 <= (long)uVar3) {
      func_0x0001078097f8();
      lVar4 = extraout_x10;
      if ((cVar2 != cVar1) && (*(float *)(extraout_x10 + 8) < *(float *)(extraout_x10 + 0x28))) {
        lVar4 = extraout_x10 + 0x20;
      }
      fVar6 = *(float *)(param_3 + 1);
      cVar2 = NAN(*(float *)(lVar4 + 8)) || NAN(fVar6);
      cVar1 = *(float *)(lVar4 + 8) < fVar6;
      if (!(bool)cVar1) {
        uVar7 = *(undefined4 *)((long)param_3 + 0xc);
        uVar9 = param_3[3];
        uVar8 = param_3[2];
        do {
          func_0x00010780a1f4();
          uVar5 = extraout_x11;
          if (cVar1 != cVar2) break;
          func_0x00010780966c();
          lVar4 = param_1 + extraout_x10_00 * 0x20;
          if ((extraout_x12 + 2 < param_2) && (*(float *)(lVar4 + 8) < *(float *)(lVar4 + 0x28))) {
            lVar4 = lVar4 + 0x20;
          }
          cVar2 = NAN(*(float *)(lVar4 + 8)) || NAN(fVar6);
          cVar1 = *(float *)(lVar4 + 8) < fVar6;
          uVar5 = extraout_x11_00;
        } while (!(bool)cVar1);
        *param_3 = uVar5;
        *(float *)(param_3 + 1) = fVar6;
        *(undefined4 *)((long)param_3 + 0xc) = uVar7;
        param_3[3] = uVar9;
        param_3[2] = uVar8;
      }
    }
  }
  return;
}



/* Entry: 107803450; end: 1078034b7;  */

void FUN_107803450(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107808810();
  func_0x000107803404();
  uVar1 = *(float *)(param_5 + 0xc) < *(float *)(unaff_x22 + 0xc);
  if ((bool)uVar1) {
    func_0x0001078090e8();
    func_0x000107809464();
    if ((bool)uVar1) {
      func_0x000107808c74();
      func_0x000107809524();
      if ((bool)uVar1) {
        func_0x000107808c9c();
        func_0x000107809534();
        if ((bool)uVar1) {
          func_0x0001078093b4();
          uVar3 = param_1[1];
          uVar2 = *param_1;
          uVar4 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar4;
          param_2[1] = uVar3;
          *param_2 = uVar2;
          uVar2 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = uVar2;
          uVar2 = param_1[3];
          param_1[3] = param_2[3];
          param_2[3] = uVar2;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 107803e78; end: 107803f3f;  */

void FUN_107803e78(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  undefined8 uVar3;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  undefined8 uVar5;
  
  puVar2 = param_5;
  func_0x000107809198();
  (*(code *)*puVar2)();
  iVar1 = (int)param_3;
  func_0x0001078093b4(*param_5);
  (*extraout_x8)();
  if ((param_3 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x000107808f8c();
      unaff_x20[1] = in_register_00005008;
      *unaff_x20 = param_1;
      unaff_x20[2] = extraout_x8_00;
      func_0x0001078092c0(*param_5);
      (*extraout_x8_01)();
      if (iVar1 != 0) {
        func_0x0001078097d4();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x0001078097d4();
      func_0x0001078093b4(*param_5);
      (*extraout_x8_02)();
      if (iVar1 == 0) {
        return;
      }
      func_0x000107808f8c();
      uVar3 = extraout_x8_03;
    }
    else {
      uVar3 = unaff_x21[2];
      in_register_00005008 = unaff_x21[1];
      param_1 = *unaff_x21;
      uVar4 = unaff_x20[2];
      uVar5 = *unaff_x20;
      unaff_x21[1] = unaff_x20[1];
      *unaff_x21 = uVar5;
      unaff_x21[2] = uVar4;
    }
    unaff_x20[1] = in_register_00005008;
    *unaff_x20 = param_1;
    unaff_x20[2] = uVar3;
  }
  return;
}



/* Entry: 107805478; end: 1078054db;  */

void FUN_107805478(void)

{
  undefined1 uVar1;
  float *in_x4;
  float *unaff_x22;
  
  func_0x000107808810();
  func_0x000107805430();
  uVar1 = *in_x4 < *unaff_x22;
  if ((bool)uVar1) {
    func_0x000107808a7c();
    func_0x0001078094c4();
    if ((bool)uVar1) {
      func_0x0001078087a0();
      func_0x0001078094b4();
      if ((bool)uVar1) {
        func_0x00010780877c();
        func_0x0001078096c4();
        if ((bool)uVar1) {
          func_0x000107808758();
        }
      }
    }
  }
  return;
}



/* Entry: 107805e7c; end: 107805f57;  */

/* WARNING: Possible PIC construction at 0x000107805fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078060fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107805fc0) */
/* WARNING: Removing unreachable block (ram,0x000107805fd4) */
/* WARNING: Removing unreachable block (ram,0x000107805fe4) */
/* WARNING: Removing unreachable block (ram,0x000107805fec) */
/* WARNING: Removing unreachable block (ram,0x000107805ff0) */
/* WARNING: Removing unreachable block (ram,0x000107806108) */
/* WARNING: Removing unreachable block (ram,0x000107806118) */
/* WARNING: Removing unreachable block (ram,0x00010780611c) */
/* WARNING: Removing unreachable block (ram,0x00010780613c) */
/* WARNING: Removing unreachable block (ram,0x000107806140) */
/* WARNING: Removing unreachable block (ram,0x00010780614c) */
/* WARNING: Removing unreachable block (ram,0x000107806154) */
/* WARNING: Removing unreachable block (ram,0x000107806158) */
/* WARNING: Removing unreachable block (ram,0x000107806120) */
/* WARNING: Removing unreachable block (ram,0x000107806124) */
/* WARNING: Removing unreachable block (ram,0x00010780612c) */
/* WARNING: Removing unreachable block (ram,0x000107806130) */
/* WARNING: Removing unreachable block (ram,0x000107806138) */
/* WARNING: Removing unreachable block (ram,0x00010780615c) */
/* WARNING: Removing unreachable block (ram,0x000107806168) */
/* WARNING: Removing unreachable block (ram,0x00010780616c) */
/* WARNING: Removing unreachable block (ram,0x000107806174) */
/* WARNING: Removing unreachable block (ram,0x000107806178) */
/* WARNING: Removing unreachable block (ram,0x000107806180) */
/* WARNING: Removing unreachable block (ram,0x0001078061d4) */
/* WARNING: Removing unreachable block (ram,0x000107806184) */
/* WARNING: Removing unreachable block (ram,0x0001078061b4) */
/* WARNING: Removing unreachable block (ram,0x0001078061bc) */
/* WARNING: Removing unreachable block (ram,0x0001078061c0) */
/* WARNING: Removing unreachable block (ram,0x0001078061c4) */
/* WARNING: Removing unreachable block (ram,0x0001078061cc) */
/* WARNING: Removing unreachable block (ram,0x0001078061d0) */
/* WARNING: Removing unreachable block (ram,0x0001078061dc) */
/* WARNING: Removing unreachable block (ram,0x0001078061e8) */
/* WARNING: Removing unreachable block (ram,0x0001078061f8) */
/* WARNING: Removing unreachable block (ram,0x000107805fdc) */
/* WARNING: Removing unreachable block (ram,0x000107805ff4) */
/* WARNING: Removing unreachable block (ram,0x000107806004) */
/* WARNING: Removing unreachable block (ram,0x000107806010) */
/* WARNING: Removing unreachable block (ram,0x000107806014) */
/* WARNING: Removing unreachable block (ram,0x000107806018) */
/* WARNING: Removing unreachable block (ram,0x000107806034) */
/* WARNING: Removing unreachable block (ram,0x000107806038) */
/* WARNING: Removing unreachable block (ram,0x00010780604c) */
/* WARNING: Removing unreachable block (ram,0x000107806040) */
/* WARNING: Removing unreachable block (ram,0x000107806048) */
/* WARNING: Removing unreachable block (ram,0x000107806028) */
/* WARNING: Removing unreachable block (ram,0x000107806030) */
/* WARNING: Removing unreachable block (ram,0x000107806050) */
/* WARNING: Removing unreachable block (ram,0x000107806058) */
/* WARNING: Removing unreachable block (ram,0x0001078060b4) */
/* WARNING: Removing unreachable block (ram,0x0001078060bc) */
/* WARNING: Removing unreachable block (ram,0x0001078060cc) */
/* WARNING: Removing unreachable block (ram,0x0001078060e0) */
/* WARNING: Removing unreachable block (ram,0x00010780620c) */
/* WARNING: Removing unreachable block (ram,0x000107806214) */
/* WARNING: Removing unreachable block (ram,0x0001078060f4) */
/* WARNING: Removing unreachable block (ram,0x0001078060f8) */
/* WARNING: Removing unreachable block (ram,0x000107806060) */
/* WARNING: Removing unreachable block (ram,0x000107806090) */
/* WARNING: Removing unreachable block (ram,0x000107806098) */
/* WARNING: Removing unreachable block (ram,0x00010780609c) */
/* WARNING: Removing unreachable block (ram,0x0001078060a0) */
/* WARNING: Removing unreachable block (ram,0x0001078060a8) */
/* WARNING: Removing unreachable block (ram,0x0001078060ac) */
/* WARNING: Removing unreachable block (ram,0x0001078060b0) */
/* WARNING: Removing unreachable block (ram,0x000107805fb8) */
/* WARNING: Removing unreachable block (ram,0x000107805fb0) */
/* WARNING: Removing unreachable block (ram,0x000107805fa8) */
/* WARNING: Removing unreachable block (ram,0x000107806100) */
/* WARNING: Removing unreachable block (ram,0x000107806374) */
/* WARNING: Removing unreachable block (ram,0x000107806378) */
/* WARNING: Removing unreachable block (ram,0x000107806380) */
/* WARNING: Removing unreachable block (ram,0x000107806384) */
/* WARNING: Removing unreachable block (ram,0x0001078063a8) */
/* WARNING: Removing unreachable block (ram,0x00010780638c) */
/* WARNING: Removing unreachable block (ram,0x000107806394) */
/* WARNING: Removing unreachable block (ram,0x000107806398) */
/* WARNING: Removing unreachable block (ram,0x00010780639c) */
/* WARNING: Removing unreachable block (ram,0x0001078063a0) */
/* WARNING: Removing unreachable block (ram,0x0001078063ac) */
/* WARNING: Removing unreachable block (ram,0x0001078063b4) */
/* WARNING: Removing unreachable block (ram,0x000107806428) */
/* WARNING: Removing unreachable block (ram,0x0001078063bc) */
/* WARNING: Removing unreachable block (ram,0x0001078063c4) */
/* WARNING: Removing unreachable block (ram,0x0001078063d4) */
/* WARNING: Removing unreachable block (ram,0x0001078063d8) */
/* WARNING: Removing unreachable block (ram,0x0001078063dc) */
/* WARNING: Removing unreachable block (ram,0x0001078063e8) */
/* WARNING: Removing unreachable block (ram,0x000107806404) */
/* WARNING: Removing unreachable block (ram,0x000107806410) */
/* WARNING: Removing unreachable block (ram,0x000107806414) */
/* WARNING: Removing unreachable block (ram,0x000107806418) */
/* WARNING: Removing unreachable block (ram,0x000107806434) */

long FUN_107805e7c(long param_1,long param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  char in_NG;
  char cVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar8;
  long extraout_x10;
  long extraout_x10_00;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong extraout_x11;
  ulong extraout_x11_00;
  undefined8 uVar14;
  long extraout_x12;
  long extraout_x13;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar15;
  float fVar16;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uStack_18;
  ulong uVar17;
  
  func_0x000107808a58();
  func_0x000107809938();
  if ((in_NG == in_OV) && (func_0x000107808d30(), in_NG == in_OV)) {
    func_0x000107808ae8();
    lVar9 = extraout_x10;
    if ((in_NG != in_OV) && (*(float *)(extraout_x10 + 8) < *(float *)(extraout_x10 + 0x20))) {
      lVar9 = extraout_x10 + 0x18;
    }
    fVar19 = *(float *)(lVar9 + 8);
    fVar16 = *(float *)(param_3 + 1);
    uVar17 = (ulong)(uint)fVar16;
    cVar4 = NAN(fVar19) || NAN(fVar16);
    in_CY = fVar16 <= fVar19;
    in_ZR = fVar19 == fVar16;
    cVar3 = fVar19 < fVar16;
    if (!(bool)cVar3) {
      uVar14 = *(undefined8 *)((long)param_3 + 0xc);
      uVar20 = *(undefined4 *)((long)param_3 + 0x14);
      do {
        func_0x0001078098ac();
        fVar16 = (float)uVar17;
        uVar18 = extraout_x11;
        if (cVar3 != cVar4) break;
        func_0x00010780966c();
        fVar16 = (float)uVar17;
        lVar9 = param_1 + extraout_x10_00 * extraout_x12;
        if ((extraout_x13 + 2 < param_2) && (*(float *)(lVar9 + 8) < *(float *)(lVar9 + 0x20))) {
          lVar9 = lVar9 + 0x18;
        }
        fVar19 = *(float *)(lVar9 + 8);
        cVar4 = NAN(fVar19) || NAN(fVar16);
        in_CY = fVar16 <= fVar19;
        in_ZR = fVar19 == fVar16;
        cVar3 = fVar19 < fVar16;
        uVar18 = extraout_x11_00;
      } while (!(bool)cVar3);
      *param_3 = uVar18;
      *(float *)(param_3 + 1) = fVar16;
      *(undefined8 *)((long)param_3 + 0xc) = uVar14;
      *(undefined4 *)((long)param_3 + 0x14) = uVar20;
    }
  }
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_107806230 + (ulong)(byte)(&UNK_10dea61f4)[unaff_x26] * 4))();
    return param_1;
  }
  bVar5 = 0x23e < extraout_x8_00;
  if ((long)extraout_x8_00 < 0x240) {
    uVar6 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar7 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar7) {
        while (func_0x000107809f1c(), !(bool)uVar7) {
          fVar16 = (float)unaff_x20[7];
          func_0x000107809744();
          if ((bool)uVar6) {
            uVar20 = unaff_x20[6];
            uVar21 = *(undefined8 *)(unaff_x20 + 10);
            uVar14 = *(undefined8 *)(unaff_x20 + 8);
            puVar1 = extraout_x8_01;
            do {
              puVar13 = puVar1;
              puVar13[1] = puVar13[-2];
              *puVar13 = puVar13[-3];
              puVar13[2] = puVar13[-1];
              uVar7 = fVar16 == *(float *)((long)puVar13 + -0x2c);
              puVar1 = puVar13 + -3;
            } while (fVar16 < *(float *)((long)puVar13 + -0x2c));
            *(undefined4 *)(puVar13 + -3) = uVar20;
            *(float *)((long)puVar13 + -0x14) = fVar16;
            puVar13[-1] = uVar21;
            puVar13[-2] = uVar14;
          }
          uVar6 = 0;
          func_0x000107809f8c();
        }
      }
    }
    else if (!(bool)uVar7) {
      lVar9 = 0;
      puVar10 = unaff_x20;
      while( true ) {
        uVar7 = 1;
        if (puVar10 + 6 == unaff_x19) break;
        fVar16 = (float)puVar10[7];
        if (fVar16 < (float)puVar10[1]) {
          uVar20 = puVar10[6];
          uVar21 = *(undefined8 *)(puVar10 + 10);
          uVar14 = *(undefined8 *)(puVar10 + 8);
          lVar2 = lVar9;
          do {
            lVar11 = lVar2;
            puVar1 = (undefined8 *)((long)unaff_x20 + lVar11);
            puVar1[4] = puVar1[1];
            puVar1[3] = *puVar1;
            puVar1[5] = puVar1[2];
            puVar12 = unaff_x20;
            if (lVar11 == 0) goto code_r0x00010780633c;
            lVar2 = lVar11 + -0x18;
          } while (fVar16 < *(float *)((long)puVar1 + -0x14));
          puVar12 = (undefined4 *)((long)unaff_x20 + lVar11);
code_r0x00010780633c:
          *puVar12 = uVar20;
          puVar12[1] = fVar16;
          *(undefined8 *)(puVar12 + 4) = uVar21;
          *(undefined8 *)(puVar12 + 2) = uVar14;
        }
        lVar9 = lVar9 + 0x18;
        puVar10 = puVar10 + 6;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar5) {
        func_0x000107808e08();
        puVar15 = &UNK_107805fa8;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar15 = &UNK_107805fd4;
      }
      goto code_r0x0001078064a0;
    }
    uVar7 = unaff_x20 == unaff_x19;
    if (!(bool)uVar7) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x00010780671c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar7) {
    return param_1;
  }
  puVar15 = &UNK_1078064a0;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x0001078064a0:
  fVar16 = *(float *)(param_2 + 4);
  uVar17 = (ulong)(uint)fVar16;
  uVar18 = 0;
  if (*(float *)(param_1 + 4) <= fVar16) {
    if (fVar16 <= *(float *)((long)unaff_x21 + 4)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar18;
    *unaff_x21 = uVar17;
    unaff_x21[2] = extraout_x8_03;
    if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar16 <= *(float *)((long)unaff_x21 + 4)) {
      func_0x000107808e40();
      uVar17 = (ulong)(uint)*(float *)((long)unaff_x21 + 4);
      uVar18 = 0;
      if (*(float *)(param_2 + 4) <= *(float *)((long)unaff_x21 + 4)) {
        return 1;
      }
      func_0x000107809398(puVar15);
      uVar8 = extraout_x8_04;
    }
    else {
      func_0x000107809bf8();
      uVar8 = extraout_x8_02;
    }
    unaff_x21[1] = uVar18;
    *unaff_x21 = uVar17;
    unaff_x21[2] = uVar8;
  }
  return 1;
}



/* Entry: 107806cc0; end: 107806d6b;  */

undefined8 FUN_107806cc0(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar1;
  undefined8 unaff_x30;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  uVar3 = 0;
  uVar4 = 0;
  if (*(float *)(param_1 + 0xc) <= fVar2) {
    if (fVar2 <= *(float *)((long)param_3 + 0xc)) {
      return 0;
    }
    func_0x000107809398();
    param_3[1] = uVar4;
    *param_3 = CONCAT44(uVar3,fVar2);
    param_3[2] = extraout_x8_00;
    if (*(float *)(param_2 + 0xc) < *(float *)(param_1 + 0xc)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar2 <= *(float *)((long)param_3 + 0xc)) {
      func_0x000107808e40();
      fVar2 = *(float *)((long)param_3 + 0xc);
      uVar3 = 0;
      uVar4 = 0;
      if (*(float *)(param_2 + 0xc) <= fVar2) {
        return 1;
      }
      func_0x000107809398(unaff_x30);
      uVar1 = extraout_x8_01;
    }
    else {
      func_0x000107809bf8();
      uVar1 = extraout_x8;
    }
    param_3[1] = uVar4;
    *param_3 = CONCAT44(uVar3,fVar2);
    param_3[2] = uVar1;
  }
  return 1;
}



/* Entry: 107807380; end: 1078076df;  */

double * FUN_107807380(undefined8 param_1,double *param_2,double *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 extraout_x8;
  double *pdVar5;
  undefined8 *extraout_x8_00;
  ulong uVar6;
  long lVar7;
  undefined8 *extraout_x9;
  double *pdVar8;
  long lVar9;
  long extraout_x10;
  double *pdVar10;
  long extraout_x11;
  double *pdVar11;
  double dVar12;
  ulong uVar13;
  double *pdVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long lStack_230;
  double adStack_228 [12];
  double adStack_1c8 [56];
  undefined8 uStack_8;
  
  func_0x00010780a21c();
  func_0x000107808a28();
  uStack_8 = extraout_x8;
  func_0x0001078098ec(param_4 + param_5 * 0x18);
  lStack_230 = 0;
  pdVar5 = param_3 + 1;
  dVar16 = *param_3;
  if (((long)dVar16 * 3 & 0x1fffffffffffffffU) != 0) {
    do {
      uVar6 = (ulong)(uint)((*(float *)pdVar5 + *(float *)(pdVar5 + 1)) * (float)param_1);
      func_0x0001078098cc();
      extraout_x9[-1] = uVar6;
      uVar18 = *extraout_x8_00;
      extraout_x9[1] = extraout_x8_00[1];
      *extraout_x9 = uVar18;
      extraout_x9[2] = extraout_x8_00[2];
      pdVar5 = (double *)(extraout_x8_00 + 3);
      lStack_230 = extraout_x11;
    } while (extraout_x10 != 0x18);
  }
  lVar15 = 1;
  do {
    func_0x000107809474();
    func_0x0001078076e4();
    lVar15 = lVar15 + -1;
  } while (-1 < lVar15);
  pdVar5 = adStack_1c8 + 4;
  pdVar10 = adStack_1c8 + 5;
  lVar15 = (long)dVar16 * 0x20 + -0x80;
  dVar16 = adStack_228[1];
  dVar20 = adStack_228[2];
  dVar12 = adStack_228[3];
  for (; adStack_228[1] = dVar16, adStack_228[2] = dVar20, adStack_228[3] = dVar12, lVar15 != 0;
      lVar15 = lVar15 + -0x20) {
    dVar17 = pdVar10[-1];
    if (adStack_228[0] < dVar17) {
      pdVar10[-1] = adStack_228[0];
      adStack_228[0] = dVar17;
      adStack_228[3] = pdVar10[2];
      adStack_228[2] = pdVar10[1];
      adStack_228[1] = *pdVar10;
      pdVar10[1] = dVar20;
      *pdVar10 = dVar16;
      pdVar10[2] = dVar12;
      func_0x000107809474();
      func_0x0001078076e4();
    }
    pdVar10 = pdVar10 + 4;
    dVar16 = adStack_228[1];
    dVar20 = adStack_228[2];
    dVar12 = adStack_228[3];
  }
  uVar6 = 4;
  pdVar10 = pdVar5;
  do {
    dVar17 = adStack_228[3];
    dVar12 = adStack_228[2];
    dVar20 = adStack_228[1];
    dVar16 = adStack_228[0];
    if (uVar6 < 2) {
      lVar15 = 8;
      for (lVar9 = 0x10; bVar4 = lVar9 == 0x90, !bVar4; lVar9 = lVar9 + 0x20) {
        puVar2 = (undefined8 *)((long)unaff_x20 + lVar15);
        uVar18 = *(undefined8 *)((long)&lStack_230 + lVar9);
        puVar2[1] = *(undefined8 *)((long)adStack_228 + lVar9);
        *puVar2 = uVar18;
        puVar2[2] = *(undefined8 *)((long)adStack_228 + lVar9 + 8);
        lVar15 = lVar15 + 0x18;
      }
      *unaff_x20 = 4;
      *unaff_x19 = 0;
      lVar15 = 1;
      lVar9 = 8;
      for (lVar7 = lStack_230 * 0x20 + -0x80; lVar7 != 0; lVar7 = lVar7 + -0x20) {
        pdVar10 = (double *)((long)unaff_x19 + lVar9);
        dVar16 = pdVar5[1];
        pdVar10[1] = pdVar5[2];
        *pdVar10 = dVar16;
        pdVar10[2] = pdVar5[3];
        *unaff_x19 = lVar15;
        pdVar5 = pdVar5 + 4;
        lVar15 = lVar15 + 1;
        lVar9 = lVar9 + 0x18;
      }
      func_0x0001078087c4(uStack_8);
      if (bVar4) {
        return param_2;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      return (double *)(ulong)(*param_3 < *param_2);
    }
    uVar13 = 0;
    pdVar11 = adStack_228;
    do {
      pdVar14 = pdVar11 + uVar13 * 4 + 4;
      uVar3 = uVar13 << 1 | 1;
      uVar1 = uVar13 * 2 + 2;
      if ((long)uVar1 < (long)uVar6) {
        dVar19 = pdVar11[uVar13 * 4 + 8];
        lVar15 = uVar13 * 4;
        pdVar8 = pdVar11 + uVar13 * 4 + 8;
        uVar13 = uVar1;
        if (pdVar11[lVar15 + 4] <= dVar19) {
          pdVar8 = pdVar14;
          uVar13 = uVar3;
          dVar19 = pdVar11[lVar15 + 4];
        }
      }
      else {
        pdVar8 = pdVar14;
        uVar13 = uVar3;
        dVar19 = *pdVar14;
      }
      *pdVar11 = dVar19;
      dVar21 = pdVar8[2];
      dVar19 = pdVar8[1];
      pdVar11[3] = pdVar8[3];
      pdVar11[2] = dVar21;
      pdVar11[1] = dVar19;
      pdVar11 = pdVar8;
    } while ((long)uVar13 <= (long)(uVar6 - 2 >> 1));
    if (pdVar8 == pdVar10 + -4) {
      *pdVar8 = dVar16;
      pdVar8[3] = dVar17;
      pdVar8[2] = dVar12;
      pdVar8[1] = dVar20;
    }
    else {
      *pdVar8 = pdVar10[-4];
      dVar21 = pdVar10[-2];
      dVar19 = pdVar10[-3];
      pdVar8[3] = pdVar10[-1];
      pdVar8[2] = dVar21;
      pdVar8[1] = dVar19;
      pdVar10[-4] = dVar16;
      pdVar10[-2] = dVar12;
      pdVar10[-3] = dVar20;
      pdVar10[-1] = dVar17;
      lVar15 = (long)pdVar8 + (0x20 - (long)adStack_228) >> 5;
      if (1 < lVar15) {
        uVar13 = lVar15 - 2U >> 1;
        pdVar11 = adStack_228 + uVar13 * 4;
        dVar20 = *pdVar11;
        dVar16 = *pdVar8;
        if (dVar16 < dVar20) {
          dVar19 = pdVar8[2];
          dVar17 = pdVar8[1];
          dVar12 = pdVar8[3];
          do {
            pdVar14 = pdVar11;
            *pdVar8 = dVar20;
            dVar21 = pdVar14[2];
            dVar20 = pdVar14[1];
            pdVar8[3] = pdVar14[3];
            pdVar8[2] = dVar21;
            pdVar8[1] = dVar20;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            pdVar11 = adStack_228 + uVar13 * 4;
            dVar20 = *pdVar11;
            pdVar8 = pdVar14;
          } while (dVar16 < dVar20);
          *pdVar14 = dVar16;
          pdVar14[2] = dVar19;
          pdVar14[1] = dVar17;
          pdVar14[3] = dVar12;
        }
      }
    }
    uVar6 = uVar6 - 1;
    pdVar10 = pdVar10 + -4;
  } while( true );
}



/* Entry: 107807b00; end: 107807b23;  */

void FUN_107807b00(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000107809590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 107807eb4; end: 107807f8f;  */

/* WARNING: Possible PIC construction at 0x000107807f60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107807f64) */

void FUN_107807eb4(long *param_1)

{
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  byte unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001078087f8();
  func_0x000100061de0();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (*(char *)(lVar2 + (long)param_1) != -2)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    if ((!bVar1) || (func_0x00010780a02c(), !bVar1)) goto code_r0x000107807f90;
    param_1 = unaff_x19;
    func_0x00010ae6c914();
    func_0x000107809314();
    func_0x000100061de0();
    lVar2 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar1 = *(char *)(lVar2 + (long)param_1) == -0x80;
  *(ulong *)(lVar2 + -8) = *(long *)(lVar2 + -8) - (ulong)bVar1;
  uVar3 = unaff_x19[2];
  *(byte *)(lVar2 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar2 + (uVar3 & (long)param_1 - 7U) + (uVar3 & 7)) = unaff_w20 & 0x7f;
  func_0x0001078087c4(extraout_x8);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107807f90:
  func_0x00010780a21c();
  func_0x00010780a198();
  func_0x00010726d624();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x000107809dec();
      func_0x0001078092c0();
      func_0x000100061de0();
      func_0x000107809320();
      func_0x000107808004();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 1078080c4; end: 1078080e7;  */

void FUN_1078080c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109dfb98;
  return;
}



/* Entry: 10780836c; end: 10780837f;  */

void FUN_10780836c(void)

{
  func_0x000107808340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107809ec0; end: 107809ee7;  */

undefined8 FUN_107809ec0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078036f0(unaff_x20 + 8 + param_1 * 0x18,unaff_x19 + 8);
  return *(undefined8 *)(unaff_x19 + 0x48);
}



/* Entry: 10780af18; end: 10780af43;  */

long * FUN_10780af18(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10780bb58; end: 10780bbf3;  */

void FUN_10780bb58(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x9;
  long lVar10;
  
  lVar9 = *param_2;
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar9 + 0xc) + *(int *)(lVar9 + 8);
  iVar3 = iVar1 * 2;
  iVar2 = *(int *)(lVar8 + 0xc) + *(int *)(lVar8 + 8);
  lVar10 = *param_3;
  iVar4 = (*(int *)(lVar10 + 0xc) + *(int *)(lVar10 + 8)) * 2;
  if (iVar2 * 2 < iVar3) {
    if (iVar3 < iVar4) {
      *param_1 = lVar10;
    }
    else {
      *param_1 = lVar9;
      *param_2 = lVar8;
      lVar9 = *param_3;
      if ((*(int *)(lVar9 + 0xc) + *(int *)(lVar9 + 8)) * 2 <= iVar2 * 2) {
        return;
      }
      *param_2 = lVar9;
    }
    *param_3 = lVar8;
  }
  else {
    cVar5 = SBORROW4(iVar4,iVar3);
    cVar6 = iVar4 + iVar1 * -2 < 0;
    bVar7 = iVar4 == iVar3;
    if (iVar3 < iVar4) {
      *param_2 = lVar10;
      *param_3 = lVar9;
      FUN_10780d768(*param_2);
      if (!bVar7 && cVar6 == cVar5) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10780c448; end: 10780c53f;  */

void FUN_10780c448(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  long extraout_x8;
  long extraout_x11;
  long lVar4;
  long extraout_x11_00;
  long extraout_x11_01;
  int extraout_w12;
  long extraout_x13;
  int extraout_w15;
  int extraout_w16;
  long unaff_x20;
  
  func_0x00010780d854();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780c478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea660e)[extraout_x8] * 4 + 0x10780c47c))(1);
    return;
  }
  func_0x00010780d8fc();
  func_0x00010780c2e4();
  func_0x00010780da80();
  lVar4 = extraout_x11;
  do {
    if (lVar4 == unaff_x20) {
      return;
    }
    func_0x00010780da70();
    iVar2 = *(int *)(extraout_x11_00 + 8);
    if (*(int *)(extraout_x11_00 + 8) <= *(int *)(extraout_x11_00 + 0xc)) {
      iVar2 = *(int *)(extraout_x11_00 + 0xc);
    }
    iVar1 = *(int *)(extraout_x13 + 8);
    if (*(int *)(extraout_x13 + 8) <= *(int *)(extraout_x13 + 0xc)) {
      iVar1 = *(int *)(extraout_x13 + 0xc);
    }
    bVar3 = iVar2 == iVar1;
    if (iVar1 < iVar2) {
      do {
        func_0x00010780dca8();
        if (bVar3) {
          bVar3 = true;
          break;
        }
        func_0x00010780dbe4();
        iVar2 = extraout_w15;
        if (extraout_w15 <= extraout_w16) {
          iVar2 = extraout_w16;
        }
        bVar3 = extraout_w12 == iVar2;
      } while (!bVar3 && iVar2 <= extraout_w12);
      func_0x00010780da40();
      if (bVar3) {
        func_0x00010780da10();
        return;
      }
    }
    func_0x00010780da20();
    lVar4 = extraout_x11_01;
  } while( true );
}



/* Entry: 10780d0f0; end: 10780d137;  */

void FUN_10780d0f0(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010780d818();
  func_0x00010780d070();
  func_0x00010780db1c();
  func_0x00010780d9bc();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x00010780d804();
    func_0x00010780d9bc();
    if (!(bool)in_ZR && in_NG == in_OV) {
      func_0x00010780d7f0();
      func_0x00010780d9bc();
      if (!(bool)in_ZR && in_NG == in_OV) {
        func_0x00010780db28();
      }
    }
  }
  return;
}



/* Entry: 10780d768; end: 10780dde3;  */

void FUN_10780d768(void)

{
  return;
}



/* Entry: 10780ec28; end: 10780ee0f;  */

void FUN_10780ec28(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int extraout_w10;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 uStack_89;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar7 = param_1 + 1;
  *puVar7 = 0;
  param_1[2] = 0;
  *param_1 = puVar7;
  puVar9 = (undefined8 *)*param_3;
  while (puVar9 != param_3 + 1) {
    puVar1 = &uStack_89;
    func_0x00010786e8ec(puVar1,puVar9 + 4);
    puVar2 = param_1;
    puStack_88 = puVar1;
    func_0x0001078119d0(param_1,&uStack_68,&puStack_88);
    puVar10 = (undefined8 *)*puVar2;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = puVar2;
      func_0x0001078124d8();
      uStack_70 = 1;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[4] = puStack_88;
      puVar10[5] = puVar10 + 6;
      puStack_78 = puVar7;
      func_0x000107811a1c(param_1,uStack_68,puVar2,puVar10);
      uStack_80 = 0;
      func_0x000107811a44(&uStack_80);
    }
    lVar3 = param_2 + 0x38;
    puVar2 = puVar9 + 4;
    func_0x00010780e8c0();
    puVar11 = (undefined8 *)puVar9[6];
    while (puVar11 != puVar9 + 7) {
      if (lVar3 == 0) {
        func_0x0001078124c4();
      }
      else {
        puVar4 = puVar2 + 5;
        func_0x0001078101b0(puVar4,*(undefined2 *)((long)puVar11 + 0x1a));
        if (puVar2 + 6 == puVar4) {
          func_0x0001078124c4();
        }
        else {
          plVar5 = puVar10 + 5;
          func_0x000107811ac0(plVar5,&uStack_68,puVar4 + 4);
          if (*plVar5 == 0) {
            plVar6 = plVar5;
            func_0x0001078124d8();
            uStack_70 = 1;
            *(undefined2 *)(plVar6 + 4) = *(undefined2 *)(puVar4 + 4);
            lVar8 = puVar4[6];
            lVar12 = puVar4[5];
            plVar6[6] = puVar4[6];
            plVar6[5] = lVar12;
            puStack_78 = puVar10 + 6;
            if (lVar8 != 0) {
              do {
                func_0x000107812250();
              } while (extraout_w10 != 0);
            }
            *(undefined1 *)(plVar6 + 7) = 1;
            func_0x000107811b0c(puVar10 + 5,uStack_68,plVar5);
            uStack_80 = 0;
            func_0x000107811b34(&uStack_80);
          }
        }
      }
      func_0x00010002c7d4();
    }
    func_0x00010002c7d4();
  }
  return;
}



/* Entry: 10780f500; end: 10780f50b;  */

void FUN_10780f500(void)

{
  return;
}



/* Entry: 10780f81c; end: 10780f837;  */

void FUN_10780f81c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *extraout_x8;
  long extraout_x9;
  undefined8 extraout_x10;
  long extraout_x11;
  
  func_0x000107812600();
  if (extraout_x11 != 0) {
    *(undefined8 *)(extraout_x9 + 0x10) = extraout_x10;
    *param_2 = extraout_x8;
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return;
  }
  *param_1 = extraout_x10;
  return;
}



/* Entry: 10780fbf0; end: 10780fc6b;  */

void FUN_10780fbf0(void)

{
  long lVar1;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x000107812290();
  func_0x00010780fbbc();
  func_0x0001078124a0();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x20;
      func_0x00010780fc6c(unaff_x20);
      func_0x0001078121e8();
      func_0x000107812174(unaff_w21 & 0x7f);
      func_0x00010780fca0(unaff_x25 + lVar1 * 0x28,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x28;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10780fe34; end: 10780fe7f;  */

void FUN_10780fe34(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109dfcc8)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 107810000; end: 107810003;  */

void FUN_107810000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dfce8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107810298; end: 107810343;  */

void FUN_107810298(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x0001078122d4();
  func_0x000100061de0();
  func_0x000107812464();
  lVar1 = extraout_x8;
  if ((extraout_x9 == 0) && (func_0x000107812494(), lVar1 = extraout_x8_00, !(bool)in_ZR)) {
    func_0x000107812458();
    if (((bool)in_CY) && (func_0x0001078121f8(), (bool)in_CY)) {
      func_0x000107812398();
    }
    else {
      func_0x0001078122ac();
      func_0x00010780fd10();
    }
    func_0x00010781220c();
    lVar1 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar1 + -8) = *(long *)(lVar1 + -8) - (ulong)(*(char *)(lVar1 + param_1) == -0x80);
  uVar2 = unaff_x19[2];
  *(byte *)(lVar1 + param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar1 + (uVar2 & param_1 - 7U) + (uVar2 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 1078106e4; end: 107810707;  */

void FUN_1078106e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x00010781078c(&uStack_18);
  return;
}



/* Entry: 1078108f0; end: 107810903;  */

void FUN_1078108f0(void)

{
  func_0x0001078108c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107810bd8; end: 107810d1f;  */

void FUN_107810bd8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_107810c50;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_107810c50:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107810f74; end: 107810f9f;  */

long FUN_107810f74(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong *unaff_x20;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined8 uVar8;
  byte bVar14;
  
  func_0x0001078122e0();
  func_0x000107812548();
  lVar1 = 0;
  uVar2 = *unaff_x20;
  uVar4 = uVar2 >> 0xc ^ param_1 >> 7;
  bVar3 = (byte)param_1 & 0x7f;
  while( true ) {
    uVar4 = uVar4 & unaff_x20[2];
    uVar8 = *(undefined8 *)(uVar2 + uVar4);
    bVar7 = (byte)((ulong)uVar8 >> 8);
    bVar9 = (byte)((ulong)uVar8 >> 0x10);
    bVar10 = (byte)((ulong)uVar8 >> 0x18);
    bVar11 = (byte)((ulong)uVar8 >> 0x20);
    bVar12 = (byte)((ulong)uVar8 >> 0x28);
    bVar13 = (byte)((ulong)uVar8 >> 0x30);
    bVar14 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar14 == bVar3),
                          CONCAT16(-(bVar13 == bVar3),
                                   CONCAT15(-(bVar12 == bVar3),
                                            CONCAT14(-(bVar11 == bVar3),
                                                     CONCAT13(-(bVar10 == bVar3),
                                                              CONCAT12(-(bVar9 == bVar3),
                                                                       CONCAT11(-(bVar7 == bVar3),
                                                                                -((byte)uVar8 ==
                                                                                 bVar3)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar6 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar4 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & unaff_x20[2];
      if (*(long *)(unaff_x20[1] + uVar6 * 0x18) == *unaff_x19) {
        return uVar2 + uVar6;
      }
    }
    bVar7 = NEON_umaxv(CONCAT17(-(bVar14 == 0x80),
                                CONCAT16(-(bVar13 == 0x80),
                                         CONCAT15(-(bVar12 == 0x80),
                                                  CONCAT14(-(bVar11 == 0x80),
                                                           CONCAT13(-(bVar10 == 0x80),
                                                                    CONCAT12(-(bVar9 == 0x80),
                                                                             CONCAT11(-(bVar7 == 
                                                  0x80),-((byte)uVar8 == 0x80)))))))),1);
    if ((bVar7 & 1) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
  return 0;
}



/* Entry: 107811170; end: 1078111a3;  */

long * FUN_107811170(long *param_1)

{
  param_1[1] = param_1[1] + 2;
  *param_1 = *param_1 + 1;
  func_0x000107811134();
  return param_1;
}



/* Entry: 10781132c; end: 10781191b;  */

void FUN_10781132c(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long ****pppplVar4;
  undefined2 uVar5;
  long ***ppplVar6;
  code *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long **pplVar20;
  long *plVar21;
  long ***ppplVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar17 = *(long *)(param_1 + 8);
  if (*(long *)(param_2 + 0x10) == 0) {
    if ((*(byte *)(param_2 + 0x19) & 1) == 0) {
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      lStack_a8 = lVar17 + 0x78;
      uStack_a0 = 1;
      __ZNSt3__119__shared_mutex_base4lockEv();
      puVar8 = (undefined1 *)(lVar17 + 0x38);
      func_0x00010780e8ec(puVar8,param_1 + 0x10);
      puVar9 = puVar8;
      func_0x00010780ea08();
      if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
        ppplStack_c0 = (long ***)0x0;
        ppplStack_b8 = (long ***)0x0;
        lStack_b0 = 0;
        func_0x000107812624(&ppplStack_80,param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
        if (ppplStack_c0 != (long ***)0x0) {
          func_0x00010780fe8c(&ppplStack_c0);
          __ZdlPv(ppplStack_c0);
        }
        ppplStack_b8 = ppplStack_78;
        ppplStack_c0 = ppplStack_80;
        lStack_b0 = lStack_70;
        ppplStack_78 = (long ***)0x0;
        lStack_70 = 0;
        ppplStack_80 = (long ***)0x0;
        func_0x00010780fed4(&ppplStack_80);
        ppplVar6 = ppplStack_b8;
        for (ppplVar22 = ppplStack_c0; ppplVar22 != ppplVar6; ppplVar22 = ppplVar22 + 7) {
          uVar5 = *(undefined2 *)ppplVar22;
          plVar18 = *(long **)(lVar17 + 0x130);
          (**(code **)(*plVar18 + 0x10))(plVar18,param_1 + 0x10,uVar5);
          if (((ulong)plVar18 & 1) == 0) {
            ppplVar10 = (long ***)(puVar8 + 0x18);
            func_0x0001078101b0(ppplVar10,uVar5);
            if ((long ***)(puVar8 + 0x20) != ppplVar10) {
              ppplVar11 = ppplVar10;
              func_0x00010002c7d4();
              if (*(long ****)(puVar8 + 0x18) == ppplVar10) {
                *(long ****)(puVar8 + 0x18) = ppplVar11;
              }
              *(long *)(puVar8 + 0x28) = *(long *)(puVar8 + 0x28) + -1;
              func_0x00010530d618(*(undefined8 *)(puVar8 + 0x20),ppplVar10);
              func_0x00010780f690(ppplVar10 + 5);
              __ZdlPv(ppplVar10);
            }
            func_0x00010780f1d8(&uStack_d0,ppplVar22);
            plVar18 = (long *)(puVar8 + 0x18);
            func_0x0001078111d8(plVar18,&uStack_68,uVar5);
            if (*plVar18 == 0) {
              lVar12 = 0x38;
              __Znwm();
              lStack_70 = 1;
              *(undefined2 *)(lVar12 + 0x20) = uVar5;
              *(undefined8 *)(lVar12 + 0x30) = uStack_c8;
              *(undefined8 *)(lVar12 + 0x28) = uStack_d0;
              uStack_d0 = 0;
              uStack_c8 = 0;
              ppplStack_78 = (long ***)(puVar8 + 0x20);
              func_0x000107811224(puVar8 + 0x18,uStack_68,plVar18,lVar12);
              ppplStack_80 = (long ***)0x0;
              func_0x00010781124c(&ppplStack_80);
            }
            func_0x00010780fe0c(&uStack_d0);
          }
        }
        func_0x0001078124d0();
      }
      *puVar9 = 1;
      plVar15 = (long *)(puVar9 + 0x10);
      ppplStack_78 = *(long ****)(puVar9 + 0x18);
      ppplStack_80 = (long ***)*plVar15;
      func_0x00010781198c(&ppplStack_80);
      plVar18 = (long *)0x0;
      plVar23 = (long *)0x0;
      plVar24 = (long *)0x0;
      ppplVar22 = ppplStack_78;
      ppplStack_c0 = ppplStack_80;
      while (ppplStack_b8 = ppplVar22, (long ****)ppplStack_c0 != (long ****)0x0) {
        if ((ppplVar22[2] != (long **)0x0) && (ppplVar22[2][1] == (long *)0x0)) {
          FUN_10780ec28(&ppplStack_80,lVar17,ppplVar22[1]);
          pplVar20 = *ppplVar22;
          if (plVar24 < plVar23) {
            *plVar24 = (long)pplVar20;
            plVar24[1] = (long)ppplStack_80;
            pplVar20 = (long **)(plVar24 + 2);
            *pplVar20 = (long *)ppplStack_78;
            plVar24[3] = lStack_70;
            if (lStack_70 == 0) {
              plVar24[1] = (long)pplVar20;
            }
            else {
              ppplStack_78[2] = pplVar20;
              ppplStack_78 = (long ***)0x0;
              lStack_70 = 0;
              ppplStack_80 = (long ***)&ppplStack_78;
            }
          }
          else {
            lVar19 = (long)plVar24 - (long)plVar18;
            lVar12 = lVar19 >> 5;
            uVar16 = lVar12 + 1;
            if (uVar16 >> 0x3b != 0) {
              func_0x0001078119c4();
LAB_107811820:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x107811824);
              (*pcVar7)();
            }
            uVar14 = (long)plVar23 - (long)plVar18 >> 4;
            if (uVar14 <= uVar16) {
              uVar14 = uVar16;
            }
            if (0x7fffffffffffffdf < (ulong)((long)plVar23 - (long)plVar18)) {
              uVar14 = 0x7ffffffffffffff;
            }
            if (uVar14 >> 0x3b != 0) {
              func_0x000104bd35f4();
              goto LAB_107811820;
            }
            lVar13 = uVar14 << 5;
            __Znwm();
            plVar1 = (long *)(lVar13 + lVar19);
            *plVar1 = (long)pplVar20;
            plVar1[1] = (long)ppplStack_80;
            pplVar20 = (long **)(plVar1 + 2);
            *pplVar20 = (long *)ppplStack_78;
            plVar1[3] = lStack_70;
            if (lStack_70 == 0) {
              plVar1[1] = (long)pplVar20;
            }
            else {
              ppplStack_78[2] = pplVar20;
              ppplStack_78 = (long ***)0x0;
              lStack_70 = 0;
              ppplStack_80 = (long ***)&ppplStack_78;
            }
            plVar21 = plVar1 + lVar12 * -4;
            lVar12 = lVar13 + lVar19 + lVar12 * -0x20 + 8;
            for (plVar23 = plVar18; plVar23 != plVar24; plVar23 = plVar23 + 4) {
              *(long *)(lVar12 + -8) = *plVar23;
              FUN_10780f81c(lVar12,plVar23 + 1);
              lVar12 = lVar12 + 0x20;
            }
            for (; plVar18 != plVar24; plVar18 = plVar18 + 4) {
              func_0x0001078108a4(plVar18 + 1);
            }
            plVar23 = (long *)(lVar13 + uVar14 * 0x20);
            bVar2 = plStack_98 != (long *)0x0;
            plVar18 = plVar21;
            plVar24 = plVar1;
            plStack_98 = plVar21;
            plStack_88 = plVar23;
            if (bVar2) {
              __ZdlPv();
            }
          }
          plVar24 = plVar24 + 4;
          plStack_90 = plVar24;
          func_0x0001078123e4();
        }
        ppplStack_c0 = (long ***)((long)ppplStack_c0 + 1);
        ppplStack_b8 = ppplVar22 + 3;
        func_0x00010781198c(&ppplStack_c0);
        ppplVar22 = ppplStack_b8;
      }
      uVar16 = *(ulong *)(puVar9 + 0x20);
      if (uVar16 != 0) {
        func_0x00010780f53c(plVar15);
        func_0x00010ae6cbe8(plVar15,&UNK_1109dfda8,uVar16 < 0x80);
      }
      func_0x0001078124f0();
      for (plVar18 = plVar18 + 2; plVar18 + -2 != plVar24; plVar18 = plVar18 + 4) {
        puVar3 = (undefined8 *)plVar18[-2];
        pppplVar4 = (long ****)plVar18[-1];
        ppplStack_b8 = (long ***)*plVar18;
        lStack_b0 = plVar18[1];
        ppplStack_c0 = (long ***)&ppplStack_b8;
        ppplStack_78 = ppplStack_b8;
        lStack_70 = lStack_b0;
        if (lStack_b0 != 0) {
          *plVar18 = 0;
          plVar18[1] = 0;
          plVar18[-1] = (long)plVar18;
          ppplStack_b8[2] = (long **)&ppplStack_b8;
          ppplStack_78 = (long ***)0x0;
          lStack_70 = 0;
          ppplStack_c0 = (long ***)pppplVar4;
        }
        ppplStack_80 = (long ***)&ppplStack_78;
        (**(code **)*puVar3)(puVar3,&ppplStack_c0);
        func_0x0001078108a4(&ppplStack_c0);
        func_0x0001078123e4();
      }
      (**(code **)(**(long **)(lVar17 + 0x120) + 0x10))
                (*(long **)(lVar17 + 0x120),param_1 + 0x10,param_1 + 0x20);
      func_0x00010780ff34(&plStack_98);
    }
  }
  else {
    plVar18 = *(long **)(lVar17 + 0x120);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (&ppplStack_80,*(long *)(param_2 + 0x10) + 8);
    func_0x0001052b2bd0(&plStack_98,&ppplStack_80);
    (**(code **)(*plVar18 + 0x18))(plVar18,param_1 + 0x10,param_1 + 0x20,&plStack_98);
    __ZNSt13exception_ptrD1Ev(&plStack_98);
    __ZNSt13runtime_errorD1Ev(&ppplStack_80);
  }
  return;
}



/* Entry: 107811a68; end: 107811a7f;  */

void FUN_107811a68(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010780f7a4(lVar1 + 0x28);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107811c18; end: 107811c7f;  */

/* WARNING: Possible PIC construction at 0x000107811c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107811c74) */

void FUN_107811c18(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x0001078124b8();
      func_0x0001078122e0();
      lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
      func_0x000107811d88(param_1 + 2,*param_1,param_1[1],lVar1);
      unaff_x19[1] = lVar1;
      uVar2 = *unaff_x20;
      unaff_x20[1] = uVar2;
      *unaff_x20 = unaff_x19[1];
      unaff_x19[1] = uVar2;
      uVar2 = unaff_x20[1];
      unaff_x20[1] = unaff_x19[2];
      unaff_x19[2] = uVar2;
      uVar2 = unaff_x20[2];
      unaff_x20[2] = unaff_x19[3];
      unaff_x19[3] = uVar2;
      *unaff_x19 = unaff_x19[1];
      return;
    }
    func_0x000107811d00(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x00010781250c();
    func_0x0001078123bc();
  }
  return;
}



/* Entry: 107811ebc; end: 107811f17;  */

undefined8 FUN_107811ebc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 8);
  while( true ) {
    do {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return 0;
      }
      uVar1 = param_2;
      func_0x000107405ae0(param_2,plVar3 + 4);
    } while ((uVar1 & 1) != 0);
    lVar2 = (long)(plVar3 + 4);
    func_0x000107405ae0(lVar2,param_2);
    if ((int)lVar2 == 0) break;
    plVar3 = plVar3 + 1;
  }
  return 1;
}



/* Entry: 1078120f0; end: 1078120f7;  */

void FUN_1078120f0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078122e0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010726b09c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107812b58; end: 107812baf;  */

void FUN_107812b58(void)

{
  func_0x000104c34718(&stack0x00000058);
  return;
}



/* Entry: 107813244; end: 10781327b;  */

void FUN_107813244(long *param_1,long param_2)

{
  func_0x0001078138fc();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000107813840();
  return;
}



/* Entry: 107813364; end: 107813453;  */

/* WARNING: Possible PIC construction at 0x0001078133c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078133c4) */
/* WARNING: Removing unreachable block (ram,0x0001078133f8) */
/* WARNING: Removing unreachable block (ram,0x0001078133e4) */

undefined2 *
FUN_107813364(double param_1,double param_2,double param_3,undefined2 *param_4,undefined2 param_5,
             byte param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
             undefined8 param_10)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [56];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_9[1];
  uVar2 = *param_9;
  uVar1 = *(undefined4 *)(param_9 + 2);
  auStack_68[0] = 0;
  uStack_30 = 0;
  *param_4 = param_5;
  *(float *)(param_4 + 2) = (float)param_1;
  *(float *)(param_4 + 4) = (float)param_2;
  *(byte *)(param_4 + 6) = param_6 & 1;
  *(undefined8 *)(param_4 + 8) = param_7;
  *(float *)(param_4 + 0xc) = (float)param_3;
  *(undefined8 *)(param_4 + 0xe) = param_8;
  *(undefined4 *)(param_4 + 0x1a) = uVar1;
  *(undefined8 *)(param_4 + 0x16) = uVar3;
  *(undefined8 *)(param_4 + 0x12) = uVar2;
  func_0x0001072649c8(param_4 + 0x1c,auStack_68);
  *(undefined8 *)(param_4 + 0x3c) = param_10;
  return param_4;
}



/* Entry: 107813678; end: 1078136a7;  */

long FUN_107813678(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x0001078136a8(param_1);
  }
  return param_1;
}



/* Entry: 1078139a8; end: 107813b7b;  */

undefined *** FUN_1078139a8(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long **pplVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined **ppuVar10;
  int extraout_w10;
  long unaff_x19;
  undefined ***unaff_x20;
  undefined **unaff_x21;
  long *plVar11;
  undefined ***unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *plVar12;
  undefined **appuStack_170 [3];
  long *plStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined ***pppuStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a0;
  short sStack_98;
  undefined ***pppuStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  func_0x000107821e20();
  uStack_48 = extraout_x8;
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    func_0x0001078221e8();
    unaff_x23 = (long *)(param_1 + 8);
    plVar7 = unaff_x23;
    plVar11 = unaff_x23;
    while (plVar12 = (long *)*plVar7, plVar12 != (long *)0x0) {
      iVar1 = (int)plVar12 + 0x20;
      func_0x000104c2fc44();
      lVar3 = 8;
      if (iVar1 == 0) {
        lVar3 = 0;
      }
      plVar7 = (long *)((long)plVar12 + lVar3);
      if (iVar1 == 0) {
        plVar11 = plVar12;
      }
    }
    in_ZR = unaff_x23 == plVar11;
    if ((bool)in_ZR) {
LAB_107813a30:
      sStack_98 = *(short *)(unaff_x19 + 0x18) + 1;
      *(short *)(unaff_x19 + 0x18) = sStack_98;
      ppuStack_a0 = &PTR_DAT_1109e0150;
      pppuStack_88 = &ppuStack_a0;
      uStack_80 = 1;
      uStack_78 = CONCAT62(uStack_78._2_6_,sStack_98);
      unaff_x24 = &uStack_78;
      pplVar2 = &plStack_70;
      func_0x00010781bb58(pplVar2,&ppuStack_a0);
      func_0x000107822eec();
      if (*pplVar2 == (long *)0x0) {
        lVar3 = 0x88;
        __Znwm(0x88);
        uStack_b0 = 1;
        plStack_b8 = unaff_x23;
        func_0x000107822ecc();
        func_0x00010781c7c0(lVar3 + 0x58,&uStack_78);
        func_0x00010781f770();
        uStack_c0 = 0;
        func_0x00010781f7bc(&uStack_c0);
      }
      func_0x0001077f79bc(&plStack_70);
      unaff_x20 = &ppuStack_a0;
      func_0x0001077f79bc();
    }
    else {
      func_0x000104c2fc44();
      unaff_x24 = (undefined8 *)0x0;
      if ((int)unaff_x20 != 0) goto LAB_107813a30;
    }
    func_0x000107822eec();
    unaff_x21 = *unaff_x20;
    if (unaff_x21 == (undefined **)0x0) {
      unaff_x21 = (undefined **)0x88;
      __Znwm();
      uStack_68 = 1;
      plStack_70 = unaff_x23;
      func_0x000107822ecc();
      *(undefined2 *)(unaff_x21 + 0xb) = 0;
      *(undefined1 *)(unaff_x21 + 0xc) = 0;
      *(undefined1 *)(unaff_x21 + 0x10) = 0;
      func_0x00010781f770();
      uStack_78 = 0;
      func_0x00010781f7bc(&uStack_78);
    }
    pppuVar4 = (undefined ***)(unaff_x21 + 0xb);
  }
  else {
    pppuVar4 = (undefined ***)0x113726350;
    unaff_x20 = unaff_x22;
  }
  func_0x000107821dac(uStack_48);
  if ((bool)in_ZR) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x0001077f79bc(unaff_x24 + 1);
  pppuVar4 = &ppuStack_a0;
  func_0x0001077f79bc();
  func_0x000107822028();
  puStack_100 = unaff_x24;
  plStack_f8 = unaff_x23;
  pppuStack_f0 = unaff_x20;
  ppuStack_e8 = unaff_x21;
  func_0x000107821e20();
  ppuVar5 = (undefined **)0x128;
  uStack_108 = extraout_x8_00;
  __Znwm();
  ppuVar5[1] = (undefined *)0x0;
  ppuVar5[2] = (undefined *)0x0;
  *ppuVar5 = (undefined *)&PTR_DAT_1109e01d0;
  pppuStack_138 = &ppuStack_150;
  appuStack_170[0] = &PTR_DAT_1109e0300;
  ppuStack_150 = &PTR_DAT_1109e0220;
  plStack_158 = (long *)appuStack_170;
  __ZNSt3__119__shared_mutex_baseC1Ev(ppuVar5 + 3);
  ppuVar5[0x19] = (undefined *)0x1;
  ppuVar5[0x18] = (undefined *)0x2;
  pppuVar6 = pppuStack_138;
  if (pppuStack_138 == (undefined ***)0x0) {
code_r0x000107813c1c:
    ppuVar5[0x1d] = (undefined *)pppuVar6;
  }
  else {
    in_ZR = pppuStack_138 == &ppuStack_150;
    if (!(bool)in_ZR) {
      (*(code *)(*pppuStack_138)[2])();
      goto code_r0x000107813c1c;
    }
    ppuVar5[0x1d] = (undefined *)(ppuVar5 + 0x1a);
    func_0x000107822650();
    (*extraout_x8_01)();
  }
  plVar7 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    in_ZR = (undefined ***)plStack_158 == appuStack_170;
    if ((bool)in_ZR) {
      ppuVar5[0x21] = (undefined *)(ppuVar5 + 0x1e);
      func_0x000107822650();
      (*extraout_x8_02)();
      goto code_r0x000107813c70;
    }
    (**(code **)(*plStack_158 + 0x10))();
  }
  ppuVar5[0x21] = (undefined *)plVar7;
code_r0x000107813c70:
  ppuVar5[0x22] = (undefined *)0x0;
  ppuVar5[0x23] = (undefined *)0x0;
  ppuVar5[0x24] = (undefined *)0x0;
  ppuStack_110 = ppuVar5 + 0x24;
  ppuVar8 = (undefined **)0x20;
  __Znwm();
  ppuStack_118 = ppuVar8 + 4;
  ppuStack_128 = ppuVar8;
  ppuStack_120 = ppuVar8;
  func_0x00010781bde0(ppuVar5 + 0x22,&uStack_130);
  func_0x00010781be00(&uStack_130);
  func_0x00010781bea4(appuStack_170);
  func_0x00010781bee0(&ppuStack_150);
  *pppuVar4 = ppuVar5 + 3;
  pppuVar4[1] = ppuVar5;
  func_0x00010781bf28(0);
  func_0x000107822e34(&uStack_130);
  ppuVar8 = ppuStack_120;
  ppuVar10 = pppuVar4[1];
  ppuStack_148 = pppuVar4[1];
  ppuStack_150 = *pppuVar4;
  ppuStack_120[1] = (undefined *)0x0;
  ppuStack_120[2] = (undefined *)0x0;
  *ppuStack_120 = (undefined *)&PTR_DAT_1109e04f0;
  if (ppuVar10 != (undefined **)0x0) {
    do {
      func_0x000107821f0c();
    } while (extraout_w10 != 0);
  }
  func_0x0001078144f4(ppuVar8 + 3,&ppuStack_150);
  func_0x0001078221d8();
  ppuVar8 = ppuStack_120;
  ppuStack_120 = (undefined **)0x0;
  func_0x00010781f874(&uStack_130);
  uStack_130 = 0;
  ppuStack_128 = (undefined **)0x0;
  puVar9 = &uStack_130;
  func_0x0001074f6448();
  pppuVar4[2] = ppuVar8 + 3;
  pppuVar4[3] = ppuVar8;
  func_0x000107822064();
  *(undefined1 *)(pppuVar4 + 4) = 0;
  *(undefined4 *)(pppuVar4 + 10) = 1;
  *(undefined1 *)(pppuVar4 + 0xb) = 0;
  *(undefined4 *)(pppuVar4 + 0x11) = 1;
  pppuVar4[0x13] = (undefined **)0x1c9c380;
  pppuVar4[0x12] = (undefined **)0x11e1a300;
  *(undefined1 *)(pppuVar4 + 0x17) = 0;
  pppuVar4[0x14] = (undefined **)0x1c9c380;
  pppuVar4[0x15] = (undefined **)0x0;
  *(undefined1 *)(pppuVar4 + 0x16) = 0;
  func_0x000107821dac(uStack_108);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010781bee0(ppuVar5 + 0x1a);
    func_0x000107276ba4(ppuVar8 + 3);
    func_0x00010781bea4(appuStack_170);
    func_0x00010781bee0(&ppuStack_150);
    __ZNSt3__119__shared_weak_countD2Ev(ppuVar8);
    func_0x00010781bf28();
    __Unwind_Resume();
    pppuVar4 = (undefined ***)(puVar9 + 2);
    func_0x00010781bf34(pppuVar4);
    if (*(char *)(puVar9 + 0x17) == '\x01') {
      *(undefined1 *)(puVar9 + 0x17) = 0;
    }
    *(int *)(puVar9 + 0x15) = *(int *)(puVar9 + 0x15) + 1;
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 10781409c; end: 1078143fb;  */

long FUN_10781409c(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar4 = param_2[1];
  lVar6 = *param_2;
  lVar3 = param_1;
  func_0x000107822a84();
  *(long *)(lVar3 + 0x10) = lVar4;
  *(long *)(lVar3 + 8) = lVar6;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(lVar3 + 0x18) = param_5;
  uVar5 = *param_3;
  *(undefined8 *)(lVar3 + 0x28) = param_3[1];
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x0001078143fc(lVar3 + 0x30,*(undefined8 *)(lVar3 + 0x20));
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  lVar6 = param_1 + 0x40;
  func_0x0001077f51c8(lVar6,*(long *)(param_1 + 8) + 0x20,
                      *(undefined4 *)(*(long *)(param_1 + 8) + 4),&uStack_70,
                      *(undefined8 *)(param_1 + 0x18));
  lVar4 = *(long *)(param_1 + 8);
  uVar5 = *(undefined8 *)(lVar4 + 0xeb0);
  uVar9 = *(undefined8 *)(lVar4 + 0xea8);
  uVar7 = *(undefined8 *)(lVar4 + 0xea0);
  uVar10 = *(undefined8 *)(lVar4 + 0xe90);
  *(undefined8 *)(param_1 + 0x1118) = *(undefined8 *)(lVar4 + 0xe98);
  *(undefined8 *)(param_1 + 0x1110) = uVar10;
  *(undefined8 *)(param_1 + 0x1128) = uVar9;
  *(undefined8 *)(param_1 + 0x1120) = uVar7;
  *(undefined8 *)(param_1 + 0x1130) = uVar5;
  *(undefined8 *)(param_1 + 0x1138) = 0;
  *(undefined8 *)(param_1 + 0x1140) = *(undefined8 *)(lVar4 + 0x18);
  dVar8 = *(double *)(lVar4 + 0x98);
  _log2();
  *(float *)(param_1 + 0x1148) = (float)dVar8;
  *(undefined1 *)(lVar3 + 0x1168) = 0;
  *(undefined8 *)(param_1 + 0x114c) = 0;
  *(undefined8 *)(param_1 + 0x1151) = 0;
  if (*(char *)(param_4 + 2) == '\x01') {
    uVar5 = *param_4;
    *(undefined8 *)(lVar3 + 0x1160) = param_4[1];
    *(undefined8 *)(lVar3 + 0x1158) = uVar5;
    *param_4 = 0;
    param_4[1] = 0;
    *(undefined1 *)(lVar3 + 0x1168) = 1;
  }
  func_0x00010785f1f4();
  uVar1 = *(uint *)(*(long *)(lVar3 + 8) + 0xc);
  uStack_61 = 1;
  lVar6 = lVar6 + 0x760;
  func_0x00010724e2c8(lVar6,&uStack_61);
  *(byte *)(lVar3 + 0x1170) = (byte)lVar6 & (byte)((uVar1 & 0x10) >> 4);
  uVar2 = *(undefined1 *)(*(long *)(param_1 + 8) + 0xfda);
  uVar5 = 0;
  uVar7 = 0;
  *(undefined8 *)(param_1 + 0x1188) = 0;
  *(undefined8 *)(param_1 + 0x1180) = 0;
  *(long *)(param_1 + 0x1178) = param_1 + 0x1180;
  *(undefined2 *)(param_1 + 0x1190) = 0;
  *(undefined1 *)(lVar3 + 0x1192) = uVar2;
  *(undefined8 *)(param_1 + 0x11b8) = 0;
  *(undefined8 *)(param_1 + 0x11a0) = 0;
  *(undefined8 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0x11b0) = 0;
  *(undefined8 *)(param_1 + 0x11a8) = 0;
  *(undefined4 *)(param_1 + 0x11b8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x11e0) = 0;
  *(undefined8 *)(param_1 + 0x11d8) = 0;
  *(undefined8 *)(param_1 + 0x11d0) = 0;
  *(undefined8 *)(param_1 + 0x11c8) = 0;
  *(undefined8 *)(param_1 + 0x11c0) = 0;
  *(undefined4 *)(param_1 + 0x11e0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1208) = 0;
  *(undefined8 *)(param_1 + 0x11f0) = 0;
  *(undefined8 *)(param_1 + 0x11e8) = 0;
  *(undefined8 *)(param_1 + 0x1200) = 0;
  *(undefined8 *)(param_1 + 0x11f8) = 0;
  *(undefined4 *)(param_1 + 0x1208) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1230) = 0;
  *(undefined8 *)(param_1 + 0x1228) = 0;
  *(undefined8 *)(param_1 + 0x1220) = 0;
  *(undefined8 *)(param_1 + 0x1218) = 0;
  *(undefined8 *)(param_1 + 0x1210) = 0;
  *(undefined4 *)(param_1 + 0x1230) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1258) = 0;
  *(undefined8 *)(param_1 + 0x1240) = 0;
  *(undefined8 *)(param_1 + 0x1238) = 0;
  *(undefined8 *)(param_1 + 0x1250) = 0;
  *(undefined8 *)(param_1 + 0x1248) = 0;
  *(undefined4 *)(param_1 + 0x1258) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1278) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1260) = 0;
  *(undefined4 *)(param_1 + 0x1280) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x12d8) = 0;
  *(undefined8 *)(param_1 + 0x12c0) = 0;
  *(undefined8 *)(param_1 + 0x12b8) = 0;
  *(undefined8 *)(param_1 + 0x12d0) = 0;
  *(undefined8 *)(param_1 + 0x12c8) = 0;
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  *(undefined8 *)(param_1 + 0x1298) = 0;
  *(undefined8 *)(param_1 + 0x12b0) = 0;
  *(undefined8 *)(param_1 + 0x12a8) = 0;
  *(undefined8 *)(param_1 + 0x1290) = 0;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *(undefined4 *)(param_1 + 0x12d8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1308) = 0;
  *(undefined8 *)(param_1 + 0x1300) = 0;
  *(undefined8 *)(param_1 + 0x12f8) = 0;
  *(undefined8 *)(param_1 + 0x12f0) = 0;
  *(undefined8 *)(param_1 + 0x12e8) = 0;
  *(undefined8 *)(param_1 + 0x12e0) = 0;
  func_0x00010782268c();
  *(undefined8 *)(param_1 + 0x1360) = 0;
  *(undefined8 *)(param_1 + 0x1358) = uVar7;
  *(undefined8 *)(param_1 + 0x1350) = uVar5;
  func_0x000107822a0c();
  if (*(char *)(lVar3 + 0x1168) == '\x01') {
    func_0x000107822fc4(*(undefined8 *)(lVar3 + 0x1158));
  }
  func_0x00010781fa1c((undefined8 *)(param_1 + 0x1198));
  func_0x00010781fb4c(param_1 + 0x11c0);
  func_0x00010781fc7c((undefined8 *)(param_1 + 0x11e8));
  func_0x00010781fc90(param_1 + 0x1210);
  func_0x00010781fca4((undefined8 *)(param_1 + 0x1238));
  func_0x00010781fdd4((undefined8 *)(param_1 + 0x1288));
  func_0x00010781fdd4(param_1 + 0x12a0);
  func_0x00010781fe54(param_1 + 0x12b8);
  func_0x000107822134(0x12e0);
  func_0x000107822134(0x12f8);
  func_0x0001078229e4();
  func_0x000107822f80();
  func_0x000107822f6c();
  return param_1;
}



/* Entry: 107814cb8; end: 1078150a3;  */

void FUN_107814cb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined1 uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  ulong extraout_x8_00;
  ulong uVar6;
  code *extraout_x9;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint *unaff_x19;
  long unaff_x20;
  float fVar12;
  float fVar13;
  undefined8 uStack_318;
  undefined4 uStack_310;
  ulong uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [56];
  long alStack_250 [7];
  long *plStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [256];
  undefined8 uStack_8;
  
  func_0x0001078227a0();
  func_0x0001078221e8();
  func_0x000107821e20();
  uStack_2f8 = CONCAT44(uStack_2f8._4_4_,0x90);
  uStack_2e0 = (ulong)uStack_2e0._4_4_ << 0x20;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  ppuStack_2d8 = &PTR_DAT_110996720;
  uStack_2d0 = 0;
  uStack_2b8 = 0x90;
  uStack_2b0 = 0;
  uStack_2ac = 1;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_2a8 = 0;
  uStack_8 = extraout_x8;
  func_0x00010743cc34(&plStack_218,&uStack_2f8,7);
  func_0x00010743d7bc(auStack_110,&plStack_218);
  func_0x000107288cd8(&plStack_218);
  func_0x000107262330(&uStack_2f8);
  func_0x000104c2fe00(alStack_250,*(long *)(param_3 + 0x18) + 0x40);
  func_0x000107371bc4(auStack_108,"source",alStack_250);
  plVar4 = alStack_250;
  func_0x000104c2f714();
  lStack_2e8 = unaff_x20 + 0x40;
  uStack_2e0 = unaff_x20 + 0x1260;
  uStack_2f8 = param_4;
  uStack_2f0 = param_5;
  func_0x000107822958();
  (*extraout_x9)();
  func_0x000107822388();
  plVar1 = (long *)(unaff_x20 + 0x1398);
  uStack_208 = 1;
  plStack_218 = plVar4;
  plStack_210 = plVar1;
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = param_3;
  lVar9 = unaff_x20 + 0x13a0;
  func_0x0001074faff4(lVar9,param_3);
  plVar4[1] = lVar9;
  uVar6 = unaff_x20 + 0x13a0;
  func_0x0001074faff4(uVar6,plVar4[2]);
  plVar4[1] = uVar6;
  uVar5 = *(ulong *)(unaff_x20 + 0x1390);
  if (uVar5 != 0) {
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar7 & uVar6;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar6 - uVar5) < 0;
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar10 = *(long **)(*(long *)(unaff_x20 + 5000) + uVar8 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_107814e80;
          uVar11 = plVar10[1];
          if (uVar11 != uVar6) break;
          in_NG = plVar10[2] - plVar4[2] < 0;
          if (plVar10[2] == plVar4[2]) {
            uVar3 = true;
            goto LAB_107814f70;
          }
        }
        if ((uVar5 & uVar7) == 0) {
          uVar11 = uVar11 & uVar7;
        }
        else if (uVar5 <= uVar11) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = uVar11 / uVar5;
          }
          uVar11 = uVar11 - uVar2 * uVar5;
        }
        in_NG = (long)(uVar11 - uVar8) < 0;
      } while (uVar11 == uVar8);
    }
  }
LAB_107814e80:
  fVar12 = (float)(*(long *)(unaff_x20 + 0x13a0) + 1);
  fVar13 = *(float *)(unaff_x20 + 0x13a8);
  uVar7 = 0;
  if ((uVar5 == 0) ||
     (func_0x000107822234(fVar12,fVar13,(float)uVar5), uVar5 = extraout_x8_00,
     uVar7 = extraout_x8_00, (bool)in_NG)) {
    uVar6 = 1;
    if (2 < uVar7) {
      uVar6 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar6 = uVar6 | uVar7 << 1;
    if (uVar6 <= (ulong)(long)(fVar12 / fVar13)) {
      uVar6 = (long)(fVar12 / fVar13);
    }
    func_0x00010781fffc(unaff_x20 + 5000,uVar6);
    uVar5 = *(ulong *)(unaff_x20 + 0x1390);
    uVar6 = plVar4[1];
  }
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar6 = uVar7 & uVar6;
    uVar3 = true;
  }
  else {
    uVar3 = uVar6 == uVar5;
    if (uVar5 <= uVar6) {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar8 * uVar5;
    }
  }
  lVar9 = *(long *)(unaff_x20 + 5000);
  plVar10 = *(long **)(lVar9 + uVar6 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar4 = *plVar1;
    *plVar1 = (long)plVar4;
    *(long **)(lVar9 + uVar6 * 8) = plVar1;
    if (*plVar4 != 0) {
      uVar6 = *(ulong *)(*plVar4 + 8);
      if ((uVar5 & uVar7) == 0) {
        uVar6 = uVar6 & uVar7;
        uVar3 = true;
      }
      else {
        uVar3 = uVar6 == uVar5;
        if (uVar5 <= uVar6) {
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar6 / uVar5;
          }
          uVar6 = uVar6 - uVar7 * uVar5;
        }
      }
      *(long **)(lVar9 + uVar6 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar10;
    *plVar10 = (long)plVar4;
  }
  *(long *)(unaff_x20 + 0x13a0) = *(long *)(unaff_x20 + 0x13a0) + 1;
  plStack_218 = (long *)0x0;
LAB_107814f70:
  func_0x0001078201b0(&plStack_218);
  plStack_218 = (long *)CONCAT44(plStack_218._4_4_,0x91);
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  ppuStack_1f8 = &PTR_DAT_110996720;
  uStack_1f0 = 0;
  uStack_1d8 = 0x91;
  uStack_1d0 = 0;
  uStack_1cc = 1;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1c8 = 0;
  func_0x000104c2fe00(auStack_288,*(long *)(param_3 + 0x18) + 0x40);
  func_0x000107371bc4(&plStack_218,"source",auStack_288);
  func_0x000104c2f714(auStack_288);
  uStack_308 = (ulong)*unaff_x19;
  uStack_300 = 3;
  uStack_318 = **(undefined8 **)(unaff_x20 + 0x18);
  uStack_310 = 3;
  func_0x00010743fa44(*(undefined8 **)(unaff_x20 + 0x18),&plStack_218,&uStack_308,&uStack_318,7);
  func_0x000107262330(&plStack_218);
  func_0x00010743d7e4(auStack_110);
  func_0x000107821dac(uStack_8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001078201b0(&plStack_218);
  func_0x0001074cfe98();
  func_0x00010743d7e4(auStack_110);
  do {
    func_0x000107822108();
    func_0x000107262330(&uStack_2f8);
  } while( true );
}



/* Entry: 107817500; end: 1078175ef;  */

long * FUN_107817500(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar7 = lVar2 - lVar1;
  lVar5 = *param_1;
  if ((ulong)(param_1[2] - lVar5) < uVar7) {
    if (lVar5 != 0) {
      param_1[1] = lVar5;
      __ZdlPv(lVar5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    plVar3 = param_1;
    func_0x0001077f8164(param_1,(long)uVar7 / 0x14);
    func_0x0001074c30d4(param_1,plVar3);
    lVar5 = param_1[1];
  }
  else {
    lVar6 = param_1[1];
    uVar4 = lVar6 - lVar5;
    if (uVar4 < uVar7) {
      if (lVar6 != lVar5) {
        func_0x000107822958(param_1,param_2,uVar4 - 3);
        _memmove();
        lVar6 = param_1[1];
      }
      lVar2 = lVar2 - (lVar1 + uVar4);
      if (lVar2 != 0) {
        _memmove(lVar6,lVar1 + uVar4,lVar2 + -3);
      }
      lVar5 = lVar6 + lVar2;
      goto LAB_1078175e0;
    }
  }
  if (lVar2 != lVar1) {
    func_0x000107822958();
    _memmove();
  }
  lVar5 = lVar5 + uVar7;
LAB_1078175e0:
  param_1[1] = lVar5;
  return param_1;
}



/* Entry: 107818ff0; end: 10781906b;  */

void FUN_107818ff0(long param_1)

{
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x25;
  long lVar1;
  ulong uVar2;
  
  func_0x0001078227a0();
  func_0x00010782259c();
  while (func_0x000107823058(), !(bool)in_CY) {
    lVar1 = extraout_x8 + unaff_x22 * unaff_x25;
    if (((*(byte *)(lVar1 + 0x78) & 1) == 0) &&
       ((((*(byte *)(lVar1 + 0x8d) & 1) != 0 || ((*(byte *)(unaff_x21 + 0xa60) & 1) == 0)) &&
        (func_0x000107822f34(), param_1 != 0)))) {
      uVar2 = 0;
      while( true ) {
        in_CY = 1;
        if ((ulong)(*(long *)(lVar1 + 0x68) - *(long *)(lVar1 + 0x60) >> 2) <= uVar2) break;
        func_0x000107822920();
        uVar2 = uVar2 + 1;
      }
    }
    else {
      func_0x000107822710();
    }
    unaff_x22 = unaff_x22 + 1;
  }
  return;
}



/* Entry: 107819ef8; end: 107819fd3;  */

undefined1  [16] FUN_107819ef8(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 0;
  uVar3 = 0;
  if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
    func_0x0001078220d8();
    if (*(char *)(param_1 + 0x20) == '\x01') {
      lVar1 = *unaff_x20 + 0x11e8;
      func_0x0001073be570(lVar1,unaff_x20[2] + 0x658);
      if (lVar1 != 0) {
        uVar2 = (ulong)*(uint *)(lVar1 + 0x1c);
        uVar3 = (ulong)*(uint *)(lVar1 + 0x20);
        func_0x00010781d7bc(uVar2,uVar3,*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0x18),
                            *(undefined4 *)(lVar1 + 0x28),(float)*(double *)(unaff_x20[3] + 0x70),
                            *(undefined1 *)(lVar1 + 0x24),*(undefined1 *)((long)unaff_x20 + 0x21),
                            *(undefined1 *)((long)unaff_x20 + 0x22));
      }
    }
    func_0x000107822724(*(undefined8 *)(unaff_x20[1] + 0xa40));
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10781a5b4; end: 10781a5db;  */

long FUN_10781a5b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x1198;
  func_0x000107820434();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x14;
  }
  return lVar1;
}



/* Entry: 10781b11c; end: 10781b1db;  */

void FUN_10781b11c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 in_b0;
  undefined1 uVar1;
  undefined1 in_register_00005001;
  undefined1 uVar2;
  undefined1 in_register_00005002;
  undefined1 uVar3;
  undefined1 in_register_00005003;
  undefined1 uVar4;
  undefined1 auStack_3d8 [808];
  undefined8 uStack_b0;
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
  
  func_0x0001078221e8();
  *param_4 = param_6;
  param_4[1] = param_7;
  *(uint *)(param_4 + 2) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  *(undefined4 *)((long)param_4 + 0x14) = param_1;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  param_4[0x65] = 0;
  param_4[100] = 0;
  param_4[0x67] = 0;
  param_4[0x66] = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  func_0x000107415eec();
  func_0x000107416bf8();
  func_0x000107877034(&uStack_b0,unaff_x20 + 0x180,&uStack_b0);
  func_0x00010740b5f8(auStack_3d8,&uStack_b0);
  func_0x000107822e14(unaff_x19 + 0x18,auStack_3d8);
  func_0x0001077f54e4();
  *(uint *)(unaff_x19 + 0x340) = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
  *(undefined4 *)(unaff_x19 + 0x344) = param_1;
  *(undefined4 *)(unaff_x19 + 0x348) = param_2;
  *(undefined4 *)(unaff_x19 + 0x34c) = param_3;
  return;
}



/* Entry: 10781b6ec; end: 10781b73f;  */

void FUN_10781b6ec(void)

{
  func_0x00010782302c();
  func_0x0001078219a8();
  func_0x0001078220c4();
  func_0x00010781f634();
  return;
}



/* Entry: 10781bab8; end: 10781bae7;  */

void FUN_10781bab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001078228c4();
  *puVar1 = &PTR_DAT_1109e0150;
  *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_1 + 1);
  return;
}



/* Entry: 10781bc08; end: 10781bc1b;  */

void FUN_10781bc08(void)

{
  FUN_10781bf1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781bd34; end: 10781bd5b;  */

void FUN_10781bd34(long param_1)

{
  *(undefined8 *)(param_1 + 0x400018) = 0;
  return;
}



/* Entry: 10781bf1c; end: 10781bf33;  */

void FUN_10781bf1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e01d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10781c354; end: 10781c3f7;  */

long FUN_10781c354(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x0001072d6da0();
  *(undefined4 *)(lVar1 + 0x18) = *param_3;
  func_0x0001074cfecc(lVar1 + 0x20,param_3 + 2);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_3 + 8);
  func_0x0001074c31d0(param_1 + 0x40,param_3 + 10);
  uVar3 = *(undefined8 *)(param_3 + 0x12);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x16);
  uVar4 = *(undefined8 *)(param_3 + 0x14);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  func_0x000107270b5c(param_1 + 0x80,param_3 + 0x1a);
  *(undefined4 *)(param_1 + 0xa8) = param_3[0x24];
  return param_1;
}



/* Entry: 10781cb58; end: 10781cb6f;  */

void FUN_10781cb58(long *param_1,long param_2)

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



/* Entry: 10781ce1c; end: 10781ce3f;  */

void FUN_10781ce1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e0390;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10781cffc; end: 10781d01f;  */

void FUN_10781cffc(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001078221e8(param_2,param_1 + 8);
  *param_2 = &PTR_DAT_1109e0410;
  FUN_1077f795c(param_2 + 1);
  FUN_1077f795c(param_2 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 10781d854; end: 10781d957;  */

/* WARNING: Possible PIC construction at 0x00010781d89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781d944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781d8a0) */
/* WARNING: Removing unreachable block (ram,0x00010781d8a4) */
/* WARNING: Removing unreachable block (ram,0x00010781d8b4) */
/* WARNING: Removing unreachable block (ram,0x00010781d8bc) */
/* WARNING: Removing unreachable block (ram,0x00010781d8c4) */
/* WARNING: Removing unreachable block (ram,0x00010781d8cc) */
/* WARNING: Removing unreachable block (ram,0x00010781d8d4) */
/* WARNING: Removing unreachable block (ram,0x00010781d8ec) */
/* WARNING: Removing unreachable block (ram,0x00010781d8dc) */
/* WARNING: Removing unreachable block (ram,0x00010781d8e4) */
/* WARNING: Removing unreachable block (ram,0x00010781d8f0) */
/* WARNING: Removing unreachable block (ram,0x00010781d8f8) */
/* WARNING: Removing unreachable block (ram,0x00010781d908) */
/* WARNING: Removing unreachable block (ram,0x00010781d90c) */
/* WARNING: Removing unreachable block (ram,0x00010781d900) */
/* WARNING: Removing unreachable block (ram,0x00010781d8ac) */
/* WARNING: Removing unreachable block (ram,0x00010781d948) */

void FUN_10781d854(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781d958;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781d958:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781db84; end: 10781dbf3;  */

void FUN_10781db84(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x0001078230e4();
  func_0x00010726d624();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x000107822f40();
      func_0x0001078229c4();
      func_0x0001078222a8();
      func_0x00010781dbf4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10781ddb0; end: 10781de43;  */

undefined * FUN_10781ddb0(undefined *param_1,undefined *param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *unaff_x19;
  undefined *puVar3;
  
  func_0x0001078221e8();
  func_0x000107821e20();
  func_0x000100061de0();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = param_1[lVar2] == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x000107822514(), bVar1)) {
      param_2 = &UNK_1109e04a0;
      func_0x0001078223f0();
    }
    else {
      func_0x000107822ad4();
      func_0x0001074f6c20();
    }
    func_0x0001078224d4();
    lVar2 = *unaff_x19;
  }
  func_0x000107821e80(lVar2);
  func_0x000107821dac(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined **)(param_2 + 0x30);
  if (puVar3 == (undefined *)0xffffffffffffffff) {
    puVar3 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(puVar3,puVar3 + (long)param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar3;
}



/* Entry: 10781e194; end: 10781e28b;  */

long * FUN_10781e194(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  
  bVar3 = param_2 <= param_1;
  bVar4 = param_1 == param_2;
  if (!bVar4) {
    func_0x0001078227f8();
    if (!bVar3 || bVar4) {
      unaff_x22 = param_1[1];
      uVar6 = unaff_x22 - unaff_x23;
      if (uVar6 < unaff_x21) {
        if (unaff_x22 != unaff_x23) {
          func_0x000107822dec();
          unaff_x22 = param_1[1];
        }
        lVar1 = unaff_x25 - (unaff_x20 + uVar6);
        if (lVar1 != 0) {
          func_0x000107822904(unaff_x22);
          _memmove();
        }
        unaff_x22 = unaff_x22 + lVar1;
      }
      else {
        if (unaff_x25 != unaff_x20) {
          func_0x000107822110();
        }
        unaff_x22 = unaff_x23 + unaff_x21;
      }
    }
    else {
      if (unaff_x23 != 0) {
        func_0x000107822d80();
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      plVar5 = param_1;
      func_0x00010740a268(param_1,(long)unaff_x21 >> 2);
      if ((ulong)plVar5 >> 0x3e != 0) {
        func_0x000107409f14();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10781e288);
        (*pcVar2)();
      }
      func_0x000107409f84();
      *param_1 = unaff_x22;
      param_1[1] = unaff_x22;
      param_1[2] = unaff_x22 + (long)plVar5 * 4;
      if (unaff_x25 != unaff_x20) {
        func_0x000107822110(unaff_x22);
      }
      unaff_x22 = unaff_x22 + unaff_x21;
    }
    param_1[1] = unaff_x22;
  }
  return param_1;
}



/* Entry: 10781e518; end: 10781e77b;  */

/* WARNING: Possible PIC construction at 0x00010781e59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e5f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ecec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781efb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ebb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ea14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781efa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ef80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e8d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781e894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781eda8) */
/* WARNING: Removing unreachable block (ram,0x00010781edb4) */
/* WARNING: Removing unreachable block (ram,0x00010781e8d8) */
/* WARNING: Removing unreachable block (ram,0x00010781e8e4) */
/* WARNING: Removing unreachable block (ram,0x00010781e8f4) */
/* WARNING: Removing unreachable block (ram,0x00010781e910) */
/* WARNING: Removing unreachable block (ram,0x00010781e904) */
/* WARNING: Removing unreachable block (ram,0x00010781e958) */
/* WARNING: Removing unreachable block (ram,0x00010781e964) */
/* WARNING: Removing unreachable block (ram,0x00010781e974) */
/* WARNING: Removing unreachable block (ram,0x00010781e984) */
/* WARNING: Removing unreachable block (ram,0x00010781e940) */
/* WARNING: Removing unreachable block (ram,0x00010781e99c) */
/* WARNING: Removing unreachable block (ram,0x00010781e94c) */
/* WARNING: Removing unreachable block (ram,0x00010781ef84) */
/* WARNING: Removing unreachable block (ram,0x00010781efa4) */
/* WARNING: Removing unreachable block (ram,0x00010781ea18) */
/* WARNING: Removing unreachable block (ram,0x00010781ea3c) */
/* WARNING: Removing unreachable block (ram,0x00010781ea1c) */
/* WARNING: Removing unreachable block (ram,0x00010781ea30) */
/* WARNING: Removing unreachable block (ram,0x00010781ea40) */
/* WARNING: Removing unreachable block (ram,0x00010781ebb4) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781efbc) */
/* WARNING: Removing unreachable block (ram,0x00010781efd0) */
/* WARNING: Removing unreachable block (ram,0x00010781efd8) */
/* WARNING: Removing unreachable block (ram,0x00010781f038) */
/* WARNING: Removing unreachable block (ram,0x00010781efe8) */
/* WARNING: Removing unreachable block (ram,0x00010781eff0) */
/* WARNING: Removing unreachable block (ram,0x00010781eed8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef08) */
/* WARNING: Removing unreachable block (ram,0x00010781eeec) */
/* WARNING: Removing unreachable block (ram,0x00010781ede4) */
/* WARNING: Removing unreachable block (ram,0x00010781ee08) */
/* WARNING: Removing unreachable block (ram,0x00010781ee38) */
/* WARNING: Removing unreachable block (ram,0x00010781ee4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee64) */
/* WARNING: Removing unreachable block (ram,0x00010781ee58) */
/* WARNING: Removing unreachable block (ram,0x00010781ee60) */
/* WARNING: Removing unreachable block (ram,0x00010781ee74) */
/* WARNING: Removing unreachable block (ram,0x00010781ee7c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeb0) */
/* WARNING: Removing unreachable block (ram,0x00010781eec4) */
/* WARNING: Removing unreachable block (ram,0x00010781eebc) */
/* WARNING: Removing unreachable block (ram,0x00010781ee84) */
/* WARNING: Removing unreachable block (ram,0x00010781ee88) */
/* WARNING: Removing unreachable block (ram,0x00010781ee98) */
/* WARNING: Removing unreachable block (ram,0x00010781eeac) */
/* WARNING: Removing unreachable block (ram,0x00010781edf8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecd4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca4) */
/* WARNING: Removing unreachable block (ram,0x00010781eca8) */
/* WARNING: Removing unreachable block (ram,0x00010781ecc8) */
/* WARNING: Removing unreachable block (ram,0x00010781ec30) */
/* WARNING: Removing unreachable block (ram,0x00010781ec40) */
/* WARNING: Removing unreachable block (ram,0x00010781ece4) */
/* WARNING: Removing unreachable block (ram,0x00010781ec4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ec6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ecf0) */
/* WARNING: Removing unreachable block (ram,0x00010781ec88) */
/* WARNING: Removing unreachable block (ram,0x00010781ec94) */
/* WARNING: Removing unreachable block (ram,0x00010781e5f4) */
/* WARNING: Removing unreachable block (ram,0x00010781e65c) */
/* WARNING: Removing unreachable block (ram,0x00010781e61c) */
/* WARNING: Removing unreachable block (ram,0x00010781e66c) */
/* WARNING: Removing unreachable block (ram,0x00010781e678) */
/* WARNING: Removing unreachable block (ram,0x00010781e634) */
/* WARNING: Removing unreachable block (ram,0x00010781e5e0) */
/* WARNING: Removing unreachable block (ram,0x00010781e5f8) */
/* WARNING: Removing unreachable block (ram,0x00010781e654) */
/* WARNING: Removing unreachable block (ram,0x00010781e5e4) */
/* WARNING: Removing unreachable block (ram,0x00010781e604) */
/* WARNING: Removing unreachable block (ram,0x00010781e63c) */
/* WARNING: Removing unreachable block (ram,0x00010781e660) */
/* WARNING: Removing unreachable block (ram,0x00010781e614) */
/* WARNING: Removing unreachable block (ram,0x00010781ef0c) */
/* WARNING: Removing unreachable block (ram,0x00010781ef38) */
/* WARNING: Removing unreachable block (ram,0x00010781efa8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef44) */
/* WARNING: Removing unreachable block (ram,0x00010781ef88) */
/* WARNING: Removing unreachable block (ram,0x00010781f048) */
/* WARNING: Removing unreachable block (ram,0x00010781ef74) */
/* WARNING: Removing unreachable block (ram,0x00010781ef60) */
/* WARNING: Removing unreachable block (ram,0x00010781ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010781f05c) */
/* WARNING: Removing unreachable block (ram,0x00010781f060) */
/* WARNING: Removing unreachable block (ram,0x00010781f094) */
/* WARNING: Removing unreachable block (ram,0x00010781f06c) */
/* WARNING: Removing unreachable block (ram,0x00010781e5c8) */
/* WARNING: Removing unreachable block (ram,0x00010781e5a0) */
/* WARNING: Removing unreachable block (ram,0x00010781e898) */
/* WARNING: Removing unreachable block (ram,0x00010781e8a0) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * FUN_10781e518(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar9;
  code *extraout_x8_04;
  undefined8 *puVar10;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar11;
  undefined8 *unaff_x30;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *******in_stack_00000050;
  undefined1 auStack_760 [1800];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 ******appppppuStack_10 [2];
  
  func_0x0001078227a0();
  puVar10 = param_2 + -0xe1;
  param_3 = 1 - param_3;
  uVar8 = (long)param_2 - (long)param_1;
  puVar2 = (undefined1 *)register0x00000008;
  in_stack_00000050 = unaff_x29;
  switch((long)uVar8 / 0x708) {
  case 0:
  case 1:
    return param_1;
  case 2:
    puVar7 = puVar10;
    puVar5 = param_2;
    func_0x000107822170();
    if ((int)puVar7 == 0) {
      return puVar7;
    }
    func_0x000107822958();
    func_0x00010782233c();
    goto code_r0x00010781f098;
  case 3:
    puVar6 = param_1 + 0xe1;
    func_0x00010782233c(param_1,puVar6,puVar10);
    goto code_r0x00010781e840;
  case 4:
    puVar6 = param_1 + 0xe1;
    puVar7 = param_1 + 0x1c2;
    puVar12 = puVar10;
    func_0x00010782233c(param_1);
    break;
  case 5:
    puVar6 = param_1 + 0xe1;
    puVar5 = param_1 + 0x1c2;
    param_4 = param_1 + 0x2a3;
    func_0x00010782233c(param_1);
    pppppppuVar11 = appppppuStack_10;
    puVar7 = puVar5;
    puVar12 = param_4;
    appppppuStack_10[0] = unaff_x29;
    func_0x0001078220d8();
    unaff_x30 = (undefined8 *)&UNK_10781e940;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    param_1 = puVar5;
    unaff_x29 = pppppppuVar11;
    break;
  default:
    puVar7 = param_2;
    puVar5 = param_1;
    if ((long)uVar8 < 0xa8c0) {
      func_0x000107822444();
      if (((ulong)param_4 & 1) == 0) {
        func_0x00010782233c();
        puVar6 = unaff_x30;
      }
      else {
        func_0x00010782233c();
        uStack_50 = 0x708;
        appppppuStack_10[0] = in_stack_00000050;
        pppppppuVar11 = appppppuStack_10;
        puVar3 = auStack_760;
        register0x00000008 = (BADSPACEBASE *)auStack_760;
        lStack_48 = param_3;
        func_0x000107821e20();
        bVar4 = puVar5 == puVar7;
        uStack_58 = extraout_x8;
        if (!bVar4) {
          func_0x0001078220d8();
          param_4 = (undefined8 *)0x0;
          puVar7 = puVar5;
          while( true ) {
            param_1 = puVar7 + 0xe1;
            bVar4 = true;
            if (param_1 == param_2) break;
            puVar5 = param_1;
            func_0x00010781e77c();
            if ((int)puVar5 != 0) {
              func_0x000107822eac();
              puVar5 = (undefined8 *)((long)puVar10 + (long)param_4);
              puVar6 = puVar5 + 0xe1;
              puVar13 = &UNK_10781ea18;
              goto code_r0x00010781f0f0;
            }
            param_4 = param_4 + 0xe1;
            puVar7 = param_1;
          }
        }
        func_0x000107821dac(uStack_58);
        if (bVar4) {
          return puVar5;
        }
        ___stack_chk_fail();
        in_stack_00000050 = pppppppuVar11;
        puVar6 = (undefined8 *)&LAB_10781ea84;
      }
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0x708;
      *(long *)((long)register0x00000008 + -0x38) = param_3;
      *(undefined8 **)((long)register0x00000008 + -0x30) = param_4;
      *(undefined8 **)((long)register0x00000008 + -0x28) = param_1;
      *(undefined8 **)((long)register0x00000008 + -0x20) = puVar10;
      *(undefined8 **)((long)register0x00000008 + -0x18) = param_2;
      *(undefined8 ********)((long)register0x00000008 + -0x10) = in_stack_00000050;
      *(undefined8 **)((long)register0x00000008 + -8) = puVar6;
      pppppppuVar11 = (undefined8 *******)((long)register0x00000008 + -0x10);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x750);
      func_0x000107821e20();
      *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_x8_00;
      bVar4 = puVar5 == puVar7;
      if (!bVar4) {
        func_0x0001078220d8();
        while( true ) {
          param_1 = puVar10;
          puVar10 = param_1 + 0xe1;
          bVar4 = true;
          param_4 = (undefined8 *)((long)register0x00000008 + -0x750);
          if (puVar10 == param_2) break;
          puVar5 = puVar10;
          func_0x000107822170();
          if ((int)puVar5 != 0) {
            func_0x0001078220fc();
            do {
              puVar5 = param_1 + 0xe1;
              func_0x000107822910();
              func_0x000107822140();
            } while (((ulong)puVar5 & 1) != 0);
            func_0x000107822e98(param_1 + 0xe1);
            puVar5 = (undefined8 *)((long)register0x00000008 + -0xc0);
            func_0x0001077f79bc();
          }
        }
      }
      func_0x000107821dac(*(undefined8 *)((long)register0x00000008 + -0x48));
      if (bVar4) {
        return puVar5;
      }
      puVar12 = (undefined8 *)&LAB_10781eb20;
      ___stack_chk_fail();
      puVar6 = puVar10;
    }
    else {
      if (param_3 != 1) {
        puVar6 = param_2;
        unaff_x29 = &stack0x00000050;
        if (uVar8 < 0x38401) {
          func_0x000107822904(param_1 + ((ulong)((long)uVar8 / 0x708) >> 1) * 0xe1);
          unaff_x30 = (undefined8 *)0x10781e5f4;
        }
        else {
          func_0x00010782308c();
          unaff_x30 = (undefined8 *)0x10781e5a0;
        }
        goto code_r0x00010781e840;
      }
      func_0x000107822444();
      puVar6 = param_2;
      puVar12 = unaff_x30;
      func_0x00010782233c();
      unaff_x30 = puVar6;
      puVar6 = puVar10;
      pppppppuVar11 = in_stack_00000050;
    }
    func_0x0001078227a0();
    *(undefined8 ********)(puVar2 + 0x50) = pppppppuVar11;
    *(undefined8 **)(puVar2 + 0x58) = puVar12;
    pppppppuVar11 = (undefined8 *******)(puVar2 + 0x50);
    puVar3 = puVar2 + -0xe20;
    func_0x000107821e20();
    *(undefined8 *)(puVar2 + -0x10) = extraout_x8_01;
    bVar4 = true;
    if (puVar5 == puVar7) {
code_r0x00010781ed04:
      func_0x000107821dac(*(undefined8 *)(puVar2 + -0x10));
      if (bVar4) {
        return puVar5;
      }
      ___stack_chk_fail();
      *(undefined8 **)(puVar2 + -0xe50) = param_4;
      *(undefined8 **)(puVar2 + -0xe48) = param_1;
      *(undefined8 **)(puVar2 + -0xe40) = puVar6;
      *(undefined8 **)(puVar2 + -0xe38) = param_2;
      *(undefined8 ********)(puVar2 + -0xe30) = pppppppuVar11;
      *(undefined **)(puVar2 + -0xe28) = &SUB_10781ed20;
      pppppppuVar11 = (undefined8 *******)(puVar2 + -0xe30);
      puVar3 = puVar2 + -0x1560;
      puVar7 = (undefined8 *)(puVar2 + -0x1560);
      func_0x000107822830();
      func_0x000107821e20();
      *(undefined8 *)(puVar2 + -0xe58) = extraout_x8_02;
      func_0x00010781f1f0(puVar2 + -0x1560,param_2);
      puVar5 = param_1 + -0xe1;
      func_0x00010781e77c();
      puVar10 = param_2;
      if (((ulong)puVar7 & 1) == 0) {
        do {
          puVar10 = puVar10 + 0xe1;
          if (param_1 <= puVar10) break;
          func_0x0001078224a4();
        } while ((int)puVar7 == 0);
      }
      else {
        do {
          puVar10 = puVar10 + 0xe1;
          func_0x0001078224a4();
        } while (((ulong)puVar7 & 1) == 0);
      }
      if (puVar10 < param_1) {
        do {
          func_0x000107822140();
        } while (((ulong)puVar7 & 1) != 0);
      }
      if (puVar10 < param_1) {
        func_0x00010782289c();
        register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x1560);
        in_stack_00000050 = pppppppuVar11;
        unaff_x30 = (undefined8 *)&UNK_10781eda8;
        goto code_r0x00010781f098;
      }
      param_1 = puVar10 + -0xe1;
      puVar6 = puVar7;
      if (param_2 != param_1) {
        func_0x000107822910();
        puVar6 = param_2;
      }
      func_0x000107822c2c();
      puVar13 = &UNK_10781ede4;
      param_2 = (undefined8 *)(puVar2 + -0x1560);
    }
    else {
      func_0x0001078220d8();
      param_1 = (undefined8 *)(((long)puVar7 - (long)puVar5) / 0x708);
      if (0x708 < (long)puVar7 - (long)puVar5) {
        uVar8 = (ulong)((long)param_1 + -2) >> 1;
        do {
          func_0x00010782289c();
          func_0x00010781f27c();
          uVar8 = uVar8 - 1;
          puVar7 = param_2;
        } while (-1 < (long)uVar8);
      }
      for (; puVar10 = puVar6, puVar7 != unaff_x30; puVar7 = puVar7 + 0xe1) {
        puVar5 = puVar7;
        func_0x0001078224fc();
        if ((int)puVar5 != 0) {
          register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xe20);
          puVar5 = puVar6;
          param_4 = unaff_x30;
          in_stack_00000050 = pppppppuVar11;
          unaff_x30 = (undefined8 *)&UNK_10781ebb4;
          goto code_r0x00010781f098;
        }
      }
      param_4 = (undefined8 *)((long)param_1 + -2);
      bVar4 = param_4 == (undefined8 *)0x0;
      if ((long)param_1 < 2) goto code_r0x00010781ed04;
      func_0x0001078220fc();
      puVar7 = puVar6 + 0xe1;
      puVar5 = puVar7;
      if (2 < (long)param_1) {
        puVar12 = puVar7;
        func_0x00010781e77c(puVar7,puVar6 + 0x1c2);
        puVar5 = puVar6 + 0x1c2;
        if ((int)puVar12 == 0) {
          puVar5 = puVar7;
        }
      }
      puVar13 = &UNK_10781ec30;
      param_4 = puVar5;
    }
    goto code_r0x00010781f0f0;
  }
  *(undefined8 **)((long)register0x00000008 + -0x30) = param_4;
  *(undefined8 **)((long)register0x00000008 + -0x28) = param_1;
  *(undefined8 **)((long)register0x00000008 + -0x20) = puVar10;
  *(undefined8 **)((long)register0x00000008 + -0x18) = param_2;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x10);
  func_0x0001078220d8();
  unaff_x30 = (undefined8 *)&UNK_10781e8d8;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x30);
  param_1 = puVar7;
  param_4 = puVar12;
code_r0x00010781e840:
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
  *(undefined8 **)(puVar2 + -0x30) = param_4;
  *(undefined8 **)(puVar2 + -0x28) = param_1;
  *(undefined8 **)(puVar2 + -0x20) = puVar10;
  *(undefined8 **)(puVar2 + -0x18) = param_2;
  *(undefined8 ********)(puVar2 + -0x10) = unaff_x29;
  *(undefined8 **)(puVar2 + -8) = unaff_x30;
  func_0x000107822a74();
  puVar5 = puVar6;
  func_0x000107822170();
  puVar7 = puVar6;
  func_0x0001078224f0();
  if (((ulong)puVar6 & 1) == 0) {
    if ((int)puVar7 == 0) {
      return puVar7;
    }
    func_0x000107822f04();
    func_0x000107822170();
    if ((int)param_2 == 0) {
      return param_2;
    }
    func_0x000107822444();
    param_1 = param_2;
    puVar10 = puVar5;
code_r0x00010781e8a8:
    puVar5 = puVar10;
    unaff_x30 = *(undefined8 **)(puVar2 + -8);
    puVar10 = *(undefined8 **)(puVar2 + -0x20);
    param_2 = *(undefined8 **)(puVar2 + -0x18);
    register0x00000008 = (BADSPACEBASE *)puVar2;
    puVar7 = param_1;
    param_1 = *(undefined8 **)(puVar2 + -0x28);
    param_4 = *(undefined8 **)(puVar2 + -0x30);
    in_stack_00000050 = *(undefined8 ********)(puVar2 + -0x10);
  }
  else {
    if ((int)puVar7 != 0) goto code_r0x00010781e8a8;
    func_0x000107822444();
    unaff_x30 = (undefined8 *)&UNK_10781e898;
    param_4 = puVar6;
    in_stack_00000050 = (undefined8 *******)(puVar2 + -0x10);
  }
code_r0x00010781f098:
  puVar6 = puVar7;
  *(undefined8 **)((long)register0x00000008 + -0x30) = param_4;
  *(undefined8 **)((long)register0x00000008 + -0x28) = param_1;
  *(undefined8 **)((long)register0x00000008 + -0x20) = puVar10;
  *(undefined8 **)((long)register0x00000008 + -0x18) = param_2;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = in_stack_00000050;
  *(undefined8 **)((long)register0x00000008 + -8) = unaff_x30;
  pppppppuVar11 = (undefined8 *******)((long)register0x00000008 + -0x10);
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x740);
  param_1 = (undefined8 *)((long)register0x00000008 + -0x740);
  func_0x0001078220d8();
  func_0x000107821e20();
  *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8_03;
  func_0x0001078220fc();
  func_0x00010782265c();
  puVar13 = &UNK_10781f0c8;
code_r0x00010781f0f0:
  *(undefined8 **)(puVar3 + -0x30) = param_4;
  *(undefined8 **)(puVar3 + -0x28) = param_1;
  *(undefined8 **)(puVar3 + -0x20) = puVar10;
  *(undefined8 **)(puVar3 + -0x18) = param_2;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar11;
  *(undefined **)(puVar3 + -8) = puVar13;
  func_0x0001078221e8();
  *puVar6 = *puVar5;
  func_0x000107822eb8(puVar6 + 1,puVar5 + 1);
  *(undefined2 *)(param_2 + 0xd1) = *(undefined2 *)(puVar10 + 0xd1);
  puVar5 = param_2 + 0xd2;
  cVar1 = *(char *)(param_2 + 0xd6);
  if (cVar1 != *(char *)(puVar10 + 0xd6)) {
    if (cVar1 == '\0') {
      func_0x00010781bb90(puVar5,puVar10 + 0xd2);
    }
    else {
      FUN_1077f828c();
      *(undefined1 *)(param_2 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar1 == '\0') goto code_r0x00010781f1b0;
  puVar7 = (undefined8 *)param_2[0xd5];
  param_2[0xd5] = 0;
  if (puVar7 == puVar5) {
    uVar9 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar9);
  }
  else if (puVar7 != (undefined8 *)0x0) {
    uVar9 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar7 = (undefined8 *)puVar10[0xd5];
  if (puVar7 == (undefined8 *)0x0) {
    param_2[0xd5] = 0;
  }
  else if (puVar7 == puVar10 + 0xd2) {
    param_2[0xd5] = puVar5;
    func_0x000107822650(puVar10[0xd5]);
    (*extraout_x8_04)();
  }
  else {
    param_2[0xd5] = puVar7;
    puVar10[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar14 = puVar10[0xd8];
  uVar9 = puVar10[0xd7];
  uVar16 = puVar10[0xda];
  uVar15 = puVar10[0xd9];
  uVar18 = puVar10[0xdc];
  uVar17 = puVar10[0xdb];
  uVar19 = *(undefined8 *)((long)puVar10 + 0x6e1);
  *(undefined8 *)((long)param_2 + 0x6e9) = *(undefined8 *)((long)puVar10 + 0x6e9);
  *(undefined8 *)((long)param_2 + 0x6e1) = uVar19;
  param_2[0xda] = uVar16;
  param_2[0xd9] = uVar15;
  param_2[0xdc] = uVar18;
  param_2[0xdb] = uVar17;
  param_2[0xd8] = uVar14;
  param_2[0xd7] = uVar9;
  uVar9 = puVar10[0xdf];
  param_2[0xe0] = puVar10[0xe0];
  param_2[0xdf] = uVar9;
  return param_2;
}



/* Entry: 10781ee0c; end: 10781ef0b;  */

/* WARNING: Possible PIC construction at 0x00010781eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781eed8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef08) */
/* WARNING: Removing unreachable block (ram,0x00010781ef38) */
/* WARNING: Removing unreachable block (ram,0x00010781efa8) */
/* WARNING: Removing unreachable block (ram,0x00010781efd0) */
/* WARNING: Removing unreachable block (ram,0x00010781efd8) */
/* WARNING: Removing unreachable block (ram,0x00010781f038) */
/* WARNING: Removing unreachable block (ram,0x00010781efe8) */
/* WARNING: Removing unreachable block (ram,0x00010781eff0) */
/* WARNING: Removing unreachable block (ram,0x00010781ef44) */
/* WARNING: Removing unreachable block (ram,0x00010781ef88) */
/* WARNING: Removing unreachable block (ram,0x00010781f048) */
/* WARNING: Removing unreachable block (ram,0x00010781ef74) */
/* WARNING: Removing unreachable block (ram,0x00010781ef60) */
/* WARNING: Removing unreachable block (ram,0x00010781ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010781f05c) */
/* WARNING: Removing unreachable block (ram,0x00010781f060) */
/* WARNING: Removing unreachable block (ram,0x00010781f094) */
/* WARNING: Removing unreachable block (ram,0x00010781f06c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * FUN_10781ee0c(void)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_750 [226];
  
  puVar6 = auStack_750;
  func_0x0001078220d8();
  func_0x000107821e20();
  func_0x0001078220fc();
  lVar7 = 0;
  do {
    lVar7 = lVar7 + 0x708;
    puVar3 = (undefined8 *)(lVar7 + (long)unaff_x20);
    puVar4 = auStack_750;
    func_0x00010781e77c();
  } while (((ulong)puVar3 & 1) != 0);
  puVar1 = (undefined8 *)((long)unaff_x20 + lVar7);
  puVar8 = puVar1;
  puVar9 = unaff_x19;
  if (lVar7 == 0x708) {
    do {
      if (unaff_x19 <= puVar1) break;
      func_0x0001078229f4();
    } while (((ulong)puVar3 & 1) == 0);
  }
  else {
    do {
      func_0x0001078229f4();
    } while ((int)puVar3 == 0);
  }
  while (puVar8 < puVar9) {
    func_0x000107822450();
    do {
      puVar8 = puVar8 + 0xe1;
      func_0x000107822c2c();
      func_0x00010781e77c();
    } while (((ulong)puVar3 & 1) != 0);
    do {
      puVar9 = puVar9 + -0xe1;
      puVar3 = puVar9;
      puVar4 = auStack_750;
      func_0x00010781e77c();
    } while (((ulong)puVar3 & 1) == 0);
  }
  if (unaff_x20 == puVar8 + -0xe1) {
    unaff_x19 = (undefined8 *)(ulong)(unaff_x19 <= puVar1);
    func_0x000107822c2c();
  }
  else {
    func_0x00010782289c();
    puVar6 = unaff_x20;
  }
  func_0x0001078221e8();
  *puVar3 = *puVar4;
  func_0x000107822eb8(puVar3 + 1,puVar4 + 1);
  *(undefined2 *)(unaff_x19 + 0xd1) = *(undefined2 *)(puVar6 + 0xd1);
  puVar3 = unaff_x19 + 0xd2;
  cVar2 = *(char *)(unaff_x19 + 0xd6);
  if (cVar2 != *(char *)(puVar6 + 0xd6)) {
    if (cVar2 == '\0') {
      func_0x00010781bb90(puVar3,puVar6 + 0xd2);
    }
    else {
      FUN_1077f828c();
      *(undefined1 *)(unaff_x19 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar2 == '\0') goto code_r0x00010781f1b0;
  puVar4 = (undefined8 *)unaff_x19[0xd5];
  unaff_x19[0xd5] = 0;
  if (puVar4 == puVar3) {
    uVar5 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar5);
  }
  else if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar4 = (undefined8 *)puVar6[0xd5];
  if (puVar4 == (undefined8 *)0x0) {
    unaff_x19[0xd5] = 0;
  }
  else if (puVar4 == puVar6 + 0xd2) {
    unaff_x19[0xd5] = puVar3;
    func_0x000107822650(puVar6[0xd5]);
    (*extraout_x8)();
  }
  else {
    unaff_x19[0xd5] = puVar4;
    puVar6[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar10 = puVar6[0xd8];
  uVar5 = puVar6[0xd7];
  uVar12 = puVar6[0xda];
  uVar11 = puVar6[0xd9];
  uVar14 = puVar6[0xdc];
  uVar13 = puVar6[0xdb];
  uVar15 = *(undefined8 *)((long)puVar6 + 0x6e1);
  *(undefined8 *)((long)unaff_x19 + 0x6e9) = *(undefined8 *)((long)puVar6 + 0x6e9);
  *(undefined8 *)((long)unaff_x19 + 0x6e1) = uVar15;
  unaff_x19[0xda] = uVar12;
  unaff_x19[0xd9] = uVar11;
  unaff_x19[0xdc] = uVar14;
  unaff_x19[0xdb] = uVar13;
  unaff_x19[0xd8] = uVar10;
  unaff_x19[0xd7] = uVar5;
  uVar5 = puVar6[0xdf];
  unaff_x19[0xe0] = puVar6[0xe0];
  unaff_x19[0xdf] = uVar5;
  return unaff_x19;
}



/* Entry: 10781f538; end: 10781f543;  */

void FUN_10781f538(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822090();
  func_0x0001078230cc();
  while (func_0x00010782300c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x708;
    func_0x0001077f79bc(extraout_x8 + -0x78);
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781f84c; end: 10781f85f;  */

void FUN_10781f84c(void)

{
  func_0x00010781f868();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781fb34; end: 10781fb5f;  */

void FUN_10781fb34(long *param_1,long param_2)

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



/* Entry: 10781ff6c; end: 10781ff83;  */

void FUN_10781ff6c(long *param_1,long param_2)

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



/* Entry: 1078201d4; end: 1078202bf;  */

undefined8 FUN_1078201d4(long param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  while( true ) {
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    } while (param_2 < *(uint *)((long)plVar1 + 0x1c));
    if (param_2 <= *(uint *)((long)plVar1 + 0x1c)) break;
    plVar1 = plVar1 + 1;
  }
  return 1;
}



/* Entry: 107820928; end: 107820b0f;  */

/* WARNING: Possible PIC construction at 0x000107821108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010782110c) */

void FUN_107820928(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                  ulong *param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *extraout_x8;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar23;
  
  func_0x0001078227a0();
  if (param_4 < 2) {
    return;
  }
  if (param_4 == 2) {
    uVar17 = param_2[-1];
    uVar20 = *param_1;
    uVar4 = *param_3;
    func_0x000107820b4c(uVar4,*(undefined4 *)(uVar17 + 0x658),*(undefined4 *)(uVar20 + 0x658));
    if ((int)uVar4 == 0) {
      return;
    }
    *param_1 = uVar17;
    param_2[-1] = uVar20;
    return;
  }
  if (0x80 < (long)param_4) {
    uVar4 = param_4 >> 1;
    puVar22 = param_1 + uVar4;
    puVar21 = (ulong *)(param_4 - (param_4 >> 1));
    if ((long)param_4 <= (long)param_6) {
      func_0x000107820bdc(param_1,puVar22,param_3,uVar4);
      puVar21 = param_5 + uVar4;
      func_0x000107822904(puVar22);
      func_0x000107820bdc();
      puVar22 = param_5 + param_4;
      puVar16 = puVar21;
      while( true ) {
        if (param_5 == puVar21) {
          for (; puVar16 != puVar22; puVar16 = puVar16 + 1) {
            *param_1 = *puVar16;
            param_1 = param_1 + 1;
          }
          return;
        }
        if (puVar16 == puVar22) break;
        uVar4 = *puVar16;
        uVar17 = *param_5;
        iVar3 = (int)*param_3;
        func_0x000107822cc8();
        bVar2 = iVar3 == 0;
        lVar18 = 0;
        if (bVar2) {
          lVar18 = 8;
        }
        param_5 = (ulong *)((long)param_5 + lVar18);
        lVar18 = 8;
        if (bVar2) {
          lVar18 = 0;
        }
        puVar16 = (ulong *)((long)puVar16 + lVar18);
        if (bVar2) {
          uVar4 = uVar17;
        }
        *param_1 = uVar4;
        param_1 = param_1 + 1;
      }
      for (; param_5 != puVar21; param_5 = param_5 + 1) {
        *param_1 = *param_5;
        param_1 = param_1 + 1;
      }
      return;
    }
    FUN_107820928();
    func_0x000107822904(puVar22);
    FUN_107820928();
    puVar16 = param_1;
    puVar6 = puVar22;
    puVar19 = param_2;
    puVar7 = param_3;
    uVar17 = uVar4;
    puVar10 = puVar21;
    puVar8 = param_5;
    puVar9 = param_6;
    func_0x00010782233c(unaff_x30);
    puVar1 = (undefined1 *)register0x00000008;
    puVar23 = extraout_x8;
    do {
      *(ulong **)(puVar1 + -0x60) = unaff_x28;
      *(ulong **)(puVar1 + -0x58) = puVar22;
      *(ulong *)(puVar1 + -0x50) = uVar4;
      *(ulong *)(puVar1 + -0x48) = param_4;
      *(ulong **)(puVar1 + -0x40) = puVar21;
      *(ulong **)(puVar1 + -0x38) = param_6;
      *(ulong **)(puVar1 + -0x30) = param_5;
      *(ulong **)(puVar1 + -0x28) = param_2;
      *(ulong **)(puVar1 + -0x20) = param_3;
      *(ulong **)(puVar1 + -0x18) = param_1;
      *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
      *(undefined **)(puVar1 + -8) = puVar23;
      unaff_x29 = puVar1 + -0x10;
      *(ulong **)(puVar1 + -0x78) = puVar19;
      *(ulong **)(puVar1 + -0x70) = puVar7;
      puVar22 = puVar16;
      puVar21 = puVar6;
      while( true ) {
        *(ulong **)(puVar1 + -0x68) = puVar10;
        if (puVar10 == (ulong *)0x0) {
          return;
        }
        if (*(long *)(puVar1 + -0x68) <= (long)puVar9 || (long)uVar17 <= (long)puVar9) {
          if ((long)uVar17 <= *(long *)(puVar1 + -0x68)) {
            lVar18 = -(long)puVar8;
            puVar6 = puVar8;
            for (puVar16 = puVar22; puVar16 != puVar21; puVar16 = puVar16 + 1) {
              *puVar6 = *puVar16;
              lVar18 = lVar18 + -8;
              puVar6 = puVar6 + 1;
            }
            while( true ) {
              if (puVar6 == puVar8) {
                return;
              }
              if (puVar21 == *(ulong **)(puVar1 + -0x78)) break;
              uVar4 = *puVar21;
              uVar17 = *puVar8;
              iVar3 = (int)**(undefined8 **)(puVar1 + -0x70);
              func_0x00010782237c();
              bVar2 = iVar3 == 0;
              lVar14 = 8;
              if (bVar2) {
                lVar14 = 0;
              }
              puVar21 = (ulong *)((long)puVar21 + lVar14);
              lVar14 = 0;
              if (bVar2) {
                lVar14 = 8;
              }
              puVar8 = (ulong *)((long)puVar8 + lVar14);
              if (bVar2) {
                uVar4 = uVar17;
              }
              *puVar22 = uVar4;
              puVar22 = puVar22 + 1;
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(puVar22,puVar8,-((long)puVar8 + lVar18));
            return;
          }
          puVar16 = *(ulong **)(puVar1 + -0x78);
          for (lVar18 = 0; (ulong *)((long)puVar21 + lVar18) != puVar16; lVar18 = lVar18 + 8) {
            *(ulong *)((long)puVar8 + lVar18) = *(ulong *)((long)puVar21 + lVar18);
          }
          puVar6 = (ulong *)((long)puVar8 + lVar18);
          while( true ) {
            puVar16 = puVar16 + -1;
            if (puVar6 == puVar8) {
              return;
            }
            if (puVar21 == puVar22) break;
            uVar17 = puVar6[-1];
            uVar4 = puVar21[-1];
            uVar5 = **(undefined8 **)(puVar1 + -0x70);
            func_0x000107820b4c(uVar5,*(undefined4 *)(uVar17 + 0x658),*(undefined4 *)(uVar4 + 0x658)
                               );
            puVar19 = puVar21 + -1;
            if ((int)uVar5 == 0) {
              uVar4 = uVar17;
              puVar6 = puVar6 + -1;
              puVar19 = puVar21;
            }
            puVar21 = puVar19;
            *puVar16 = uVar4;
          }
          while (puVar6 != puVar8) {
            puVar6 = puVar6 + -1;
            *puVar16 = *puVar6;
            puVar16 = puVar16 + -1;
          }
          return;
        }
        param_6 = (ulong *)0x0;
        lVar18 = -uVar17;
        puVar19 = puVar16;
        while( true ) {
          if (lVar18 == 0) {
            return;
          }
          uVar4 = *puVar21;
          uVar17 = *(ulong *)((long)puVar22 + (long)param_6);
          func_0x000107822e00();
          if (((ulong)puVar19 & 1) != 0) break;
          param_6 = param_6 + 1;
          lVar18 = lVar18 + 1;
        }
        puVar16 = (ulong *)((long)puVar22 + (long)param_6);
        *(ulong **)(puVar1 + -0x88) = puVar9;
        *(ulong **)(puVar1 + -0x80) = puVar8;
        if (-lVar18 < *(long *)(puVar1 + -0x68)) {
          lVar14 = *(long *)(puVar1 + -0x68) / 2;
          *(long *)(puVar1 + -0xa0) = lVar14;
          *(long *)(puVar1 + -0x98) = lVar18;
          unaff_x28 = puVar21 + lVar14;
          puVar6 = puVar16;
          uVar4 = (long)puVar21 + (-(long)param_6 - (long)puVar22) >> 3;
          while (uVar4 != 0) {
            uVar20 = uVar4 >> 1;
            func_0x000107822e00();
            uVar17 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
            uVar4 = uVar20;
            if ((int)puVar19 == 0) {
              puVar6 = puVar6 + uVar20 + 1;
              uVar4 = uVar17;
            }
          }
          *(long *)(puVar1 + -0x90) = (long)puVar6 + (-(long)param_6 - (long)puVar22) >> 3;
          puVar10 = *(ulong **)(puVar1 + -0xa0);
          lVar18 = *(long *)(puVar1 + -0x98);
        }
        else {
          if (lVar18 == -1) {
            *(ulong *)((long)puVar22 + (long)param_6) = uVar4;
            *puVar21 = uVar17;
            return;
          }
          lVar14 = -lVar18 / 2;
          *(ulong **)(puVar1 + -0x98) = puVar16;
          *(long *)(puVar1 + -0x90) = lVar14;
          puVar6 = (ulong *)((long)(puVar22 + lVar14) + (long)param_6);
          uVar4 = *(long *)(puVar1 + -0x78) - (long)puVar21 >> 3;
          puVar16 = puVar21;
          while (unaff_x28 = puVar16, uVar4 != 0) {
            uVar17 = uVar4 >> 1;
            func_0x000107822e00();
            uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
            puVar16 = unaff_x28 + uVar17 + 1;
            if ((int)puVar19 == 0) {
              uVar4 = uVar17;
              puVar16 = unaff_x28;
            }
          }
          puVar10 = (ulong *)((long)unaff_x28 - (long)puVar21 >> 3);
          puVar16 = *(ulong **)(puVar1 + -0x98);
        }
        puVar19 = unaff_x28;
        if ((puVar6 != puVar21) && (puVar19 = puVar6, puVar21 != unaff_x28)) {
          if (puVar6 + 1 == puVar21) {
            uVar4 = *puVar6;
            _memmove(puVar6,puVar6 + 1,(long)unaff_x28 - (long)puVar21);
            puVar19 = (ulong *)((long)puVar6 + ((long)unaff_x28 - (long)puVar21));
            *puVar19 = uVar4;
          }
          else if (puVar21 + 1 == unaff_x28) {
            puVar21 = unaff_x28 + -1;
            uVar4 = *puVar21;
            puVar19 = (ulong *)((long)unaff_x28 - ((long)puVar21 - (long)puVar6));
            if ((long)puVar21 - (long)puVar6 != 0) {
              _memmove(puVar19,puVar6,(long)puVar21 - (long)puVar6);
            }
            *puVar6 = uVar4;
          }
          else {
            lVar11 = (long)puVar21 - (long)puVar6;
            lVar12 = lVar11 >> 3;
            lVar14 = (long)unaff_x28 - (long)puVar21 >> 3;
            puVar8 = puVar21;
            puVar9 = puVar6;
            lVar15 = lVar12;
            if (lVar12 == lVar14) {
              for (; puVar19 = puVar21, puVar9 != puVar21 && puVar8 != unaff_x28;
                  puVar9 = puVar9 + 1) {
                uVar4 = *puVar9;
                *puVar9 = *puVar8;
                *puVar8 = uVar4;
                puVar8 = puVar8 + 1;
              }
            }
            else {
              do {
                lVar13 = lVar14;
                lVar14 = 0;
                if (lVar13 != 0) {
                  lVar14 = lVar15 / lVar13;
                }
                lVar14 = lVar15 - lVar14 * lVar13;
                lVar15 = lVar13;
              } while (lVar14 != 0);
              puVar19 = puVar6 + lVar13;
              while (puVar19 != puVar6) {
                puVar19 = puVar19 + -1;
                uVar4 = *puVar19;
                puVar8 = (ulong *)(lVar11 + (long)puVar19);
                puVar9 = puVar19;
                do {
                  puVar7 = puVar8;
                  *puVar9 = *puVar7;
                  lVar14 = (long)unaff_x28 - (long)puVar7 >> 3;
                  puVar8 = (ulong *)((long)puVar7 + lVar11);
                  if (lVar14 <= lVar12) {
                    puVar8 = puVar6 + (lVar12 - lVar14);
                  }
                  puVar9 = puVar7;
                } while (puVar8 != puVar19);
                *puVar7 = uVar4;
              }
              puVar19 = (ulong *)(((long)unaff_x28 - (long)puVar21) + (long)puVar6);
            }
          }
        }
        param_4 = *(long *)(puVar1 + -0x68) - (long)puVar10;
        uVar17 = *(ulong *)(puVar1 + -0x90);
        if ((long)(uVar17 + (long)puVar10) <
            (long)((*(long *)(puVar1 + -0x68) - (uVar17 + (long)puVar10)) - lVar18)) break;
        puVar9 = *(ulong **)(puVar1 + -0x88);
        puVar8 = *(ulong **)(puVar1 + -0x80);
        puVar16 = puVar19;
        func_0x000107820dc0(puVar19,unaff_x28,*(undefined8 *)(puVar1 + -0x78),
                            *(undefined8 *)(puVar1 + -0x70),-(uVar17 + lVar18),param_4,puVar8,puVar9
                           );
        puVar22 = (ulong *)((long)puVar22 + (long)param_6);
        *(ulong **)(puVar1 + -0x78) = puVar19;
        puVar21 = puVar6;
      }
      puVar22 = (ulong *)-(uVar17 + lVar18);
      puVar7 = *(ulong **)(puVar1 + -0x70);
      puVar9 = *(ulong **)(puVar1 + -0x88);
      puVar8 = *(ulong **)(puVar1 + -0x80);
      puVar23 = &UNK_10782110c;
      puVar1 = puVar1 + -0xa0;
      param_1 = puVar10;
      param_3 = puVar8;
      param_2 = puVar9;
      param_5 = puVar19;
      puVar21 = puVar6;
      uVar4 = uVar17;
    } while( true );
  }
  if (param_1 == param_2) {
    return;
  }
  lVar18 = 0;
  puVar22 = param_1;
  do {
    if (puVar22 + 1 == param_2) {
      return;
    }
    uVar4 = *puVar22;
    uVar17 = puVar22[1];
    iVar3 = (int)*param_3;
    func_0x00010782237c();
    lVar14 = lVar18;
    if (iVar3 != 0) {
      do {
        lVar15 = lVar14;
        *(ulong *)((long)param_1 + lVar15 + 8) = uVar4;
        puVar21 = param_1;
        if (lVar15 == 0) goto LAB_1078209f0;
        uVar4 = *(ulong *)((long)param_1 + lVar15 + -8);
        uVar20 = *param_3;
        func_0x00010782237c();
        lVar14 = lVar15 + -8;
      } while ((uVar20 & 1) != 0);
      puVar21 = (ulong *)((long)param_1 + lVar15);
LAB_1078209f0:
      *puVar21 = uVar17;
    }
    lVar18 = lVar18 + 8;
    puVar22 = puVar22 + 1;
  } while( true );
}



/* Entry: 1078214bc; end: 10782155f;  */

void FUN_1078214bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 *puStack_48;
  
  func_0x0001078221e8();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    lVar2 = unaff_x20[1];
    uVar3 = *unaff_x20;
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x000107822390();
        puVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar1 = puVar1 + 2;
  }
  else {
    func_0x000107822940((long)puVar1 - *unaff_x19);
    func_0x000107822160();
    func_0x000107822930();
    lVar2 = unaff_x20[1];
    uVar3 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x000107822390();
      } while (extraout_w11_00 != 0);
    }
    func_0x000107822438();
    puVar1 = (undefined8 *)unaff_x19[1];
    func_0x000107822e6c();
  }
  unaff_x19[1] = (long)puVar1;
  return;
}



/* Entry: 107821734; end: 10782175b;  */

void FUN_107821734(void)

{
  func_0x000107822c38();
  func_0x00010782175c();
  return;
}



/* Entry: 1078218cc; end: 1078218df;  */

void FUN_1078218cc(void)

{
  func_0x00010782198c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107821a64; end: 107821a8f;  */

undefined8 * FUN_107821a64(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xc8b90a95c20ef) {
    puVar1 = (undefined8 *)(param_2 * 0x1468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e0590;
  func_0x000107821ae8(param_1 + 3);
  return param_1;
}



/* Entry: 107821c78; end: 107821ce7;  */

/* WARNING: Possible PIC construction at 0x000107821ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107821cac) */
/* WARNING: Removing unreachable block (ram,0x000107821cd0) */
/* WARNING: Removing unreachable block (ram,0x000107821ce4) */
/* WARNING: Removing unreachable block (ram,0x000107821cc0) */

undefined8 FUN_107821c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  func_0x000107821e20();
  func_0x000107822e34(auStack_40);
  func_0x000107822c38(uStack_30,param_3);
  func_0x000107821d10();
  return param_1;
}



/* Entry: 107823b48; end: 107824023;  */

void FUN_107823b48(long *param_1,float param_2,float param_3,undefined8 *param_4,long param_5,
                  int param_6,long param_7,long param_8,int param_9)

{
  int iVar1;
  long *plVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  byte *pbVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  
  fVar18 = -2.854354e-18;
  fVar5 = *(float *)(param_5 + 0x17c) * 0.017453292;
  bVar6 = *(char *)(param_5 + 0x180) == '\0';
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar10 = (long *)*param_4;
  plVar2 = (long *)param_4[1];
  iVar1 = param_9;
  if (param_6 != 0 && bVar6) {
    iVar1 = 1;
  }
  fVar16 = fVar5;
  ___sincosf_stret();
  do {
    if (plVar10 == plVar2) {
      return;
    }
    lVar12 = *plVar10;
    pbVar3 = (byte *)plVar10[1];
    for (pbVar11 = (byte *)(lVar12 + 0x70); pbVar11 + -0x70 != pbVar3; pbVar11 = pbVar11 + 0x80) {
      if ((*(short *)(pbVar11 + -0x50) != 0) && (*(short *)(pbVar11 + -0x4e) != 0)) {
        if (iVar1 == 0) {
          bVar14 = 0;
        }
        else {
          bVar14 = pbVar11[-100];
        }
        uVar22 = *(undefined4 *)(pbVar11 + -0x3c);
        fVar21 = *(float *)(pbVar11 + -0x58);
        if ((param_9 == 0) || ((*(byte *)((long)param_4 + 0x29) & 1) == 0)) {
          pbVar15 = (byte *)(lVar12 + 0x70);
          fVar19 = 0.0;
          if (*pbVar11 == 1) goto LAB_107823cac;
          fVar23 = 4.0;
        }
        else {
          fVar19 = (float)NEON_ucvtf(*(undefined4 *)(pbVar11 + -0x4c));
          fVar19 = (24.0 - fVar21 * fVar19) * -0.5;
          if (*pbVar11 == 0) {
            fVar19 = (fVar21 + -1.0) * 24.0;
          }
          fVar19 = *(float *)(plVar10 + 3) * 0.5 - fVar19;
          pbVar15 = pbVar11;
          if ((*pbVar11 & 1) == 0) {
            fVar23 = 4.0;
          }
          else {
LAB_107823cac:
            lVar13 = param_8;
            func_0x0001073f9894(param_8,pbVar11 + -0x38);
            if (param_8 + 8 == lVar13) goto LAB_107823fc4;
            fVar23 = *(float *)(lVar13 + 0x58);
            lVar13 = param_7;
            func_0x000107409864(param_7,pbVar11 + -0x38);
            fVar23 = 1.0 / fVar23;
            if (lVar13 != 0) {
              func_0x0001077819bc(*(undefined8 *)(lVar13 + 0x48));
            }
          }
        }
        fVar17 = (float)NEON_ucvtf(uVar22);
        fVar21 = fVar21 * fVar17 * 0.5;
        if (param_6 != 0 && bVar6) {
          fVar17 = 0.0;
          fVar19 = 0.0;
        }
        else {
          fVar17 = param_2 + fVar21 + *(float *)(pbVar11 + -0x6c);
          fVar19 = (param_3 + *(float *)(pbVar11 + -0x68)) - fVar19;
        }
        bVar7 = (bVar14 & 1) != 0;
        fVar24 = 0.0;
        if (bVar7) {
          fVar24 = fVar17;
        }
        fVar20 = fVar19;
        fVar4 = 0.0;
        if (bVar7) {
          fVar17 = 0.0;
          fVar20 = 0.0;
          fVar4 = fVar19;
        }
        fVar17 = fVar17 + (((float)*(int *)(pbVar11 + -0x44) - fVar23) * *(float *)(pbVar11 + -0x58)
                          - fVar21);
        fVar20 = fVar20 + *(float *)(pbVar11 + -0x58) * ((float)-*(int *)(pbVar11 + -0x40) - fVar23)
        ;
        NEON_ucvtf((uint)*(ushort *)(pbVar11 + -0x50));
        NEON_ucvtf((uint)*(ushort *)(pbVar11 + -0x4e));
        if ((bVar14 & 1) != 0) {
          fVar19 = -(12.0 - fVar21);
          if (*pbVar15 == 0) {
            fVar19 = -0.0;
          }
          fVar23 = fVar21 + fVar17;
          fVar20 = fVar20 - (fVar21 + 17.0);
          fVar17 = fVar24 + (22.0 - (12.0 - fVar21)) + ((fVar20 + fVar23 * -4.371139e-08) - fVar21);
          fVar20 = fVar4 + fVar21 + 17.0 + (fVar20 * -4.371139e-08 - fVar23) + fVar19;
        }
        if (fVar5 != 0.0) {
          fVar21 = fVar20 * -fVar16;
          fVar20 = fVar18 * fVar20 + fVar17 * fVar16;
          fVar17 = fVar21 + fVar17 * fVar18;
        }
        uVar8 = param_1[1];
        if (uVar8 < (ulong)param_1[2]) {
          func_0x0001078243b4();
          func_0x000107824420(fVar17);
          func_0x000107824358();
          lVar13 = uVar8 + 0x58;
        }
        else {
          plVar9 = param_1;
          func_0x0001078241a8(param_1,(long)(uVar8 - *param_1) / 0x58 + 1);
          func_0x000107824298(auStack_d0,plVar9,(param_1[1] - *param_1) / 0x58,param_1 + 2);
          lVar13 = lStack_c0;
          func_0x0001078243b4();
          func_0x000107824420(fVar17,fVar20);
          func_0x000107824358();
          lStack_c0 = lVar13 + 0x58;
          FUN_107824208(param_1,auStack_d0);
          lVar13 = param_1[1];
          func_0x000107824314(auStack_d0);
        }
        param_1[1] = lVar13;
      }
LAB_107823fc4:
      lVar12 = lVar12 + 0x80;
    }
    plVar10 = plVar10 + 4;
  } while( true );
}



/* Entry: 107824208; end: 10782428b;  */

void FUN_107824208(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58;
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



/* Entry: 107824e78; end: 107824f6b;  */

long FUN_107824e78(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar8 = param_2;
  func_0x000104c2fe38(*param_1);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ uVar8 >> 7;
  bVar3 = (byte)uVar8;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      lVar4 = uVar1 + uVar9 * 0x40;
      func_0x000104c32db4(lVar4,param_2);
      if ((int)lVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 10782535c; end: 107825387;  */

void FUN_10782535c(long param_1,long param_2)

{
  undefined1 uStack_21;
  
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107825ae8; end: 107825c33;  */

void FUN_107825ae8(long *param_1,undefined2 *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_98 [16];
  long lStack_88;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x000107827910(*param_3,uVar3,*param_2,param_3,*param_5);
    func_0x000107826a0c();
    lVar2 = uVar3 + 0x80;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    func_0x000107813454(param_1,((long)(uVar3 - *param_1) >> 7) + 1);
    func_0x0001078134d8(auStack_98,plVar1,param_1[1] - *param_1 >> 7,param_1 + 2);
    func_0x000107827910(*param_3,lStack_88,*param_2);
    func_0x000107826a0c();
    lStack_88 = lStack_88 + 0x80;
    func_0x000107813494(param_1,auStack_98);
    lVar2 = param_1[1];
    func_0x0001078136fc(auStack_98);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 107826c64; end: 107826cd7;  */

undefined8 * FUN_107826c64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107278b70(param_1 + 3,param_2 + 3);
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  func_0x000107263b58(param_1 + 8,param_2 + 8);
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  return param_1;
}



/* Entry: 107826f44; end: 107826f73;  */

void FUN_107826f44(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xa8) {
    func_0x000107405490();
  }
  return;
}



/* Entry: 107827134; end: 10782713f;  */

long * FUN_107827134(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107827864();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x333333333333333 < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x50;
        func_0x00010740553c();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x50;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x50;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x50;
  return param_1;
}



/* Entry: 107827514; end: 10782751b;  */

void FUN_107827514(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078278bc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    func_0x0001074055b8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107827ae8; end: 107827b23;  */

long FUN_107827ae8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107828384();
    lVar2 = uVar1 + 0xa8;
  }
  else {
    lVar2 = param_1;
    FUN_1078283bc();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xa8;
}



/* Entry: 107827e28; end: 107827f53;  */

void FUN_107827e28(long *param_1,ulong param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long extraout_x8;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x12;
  long lVar5;
  long *plVar6;
  
  func_0x0001078286ac();
  if (!(bool)in_CY || (bool)in_ZR) {
    plVar6 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar6 = (long *)*param_1;
    }
    bVar2 = param_3 + param_2 == param_2 * 2;
    func_0x0001078286d4();
    uVar1 = extraout_x12;
    if (!bVar2) {
      uVar1 = extraout_x11 + 1;
    }
    uVar4 = 0xb;
    if (10 < extraout_x10) {
      uVar4 = uVar1;
    }
    if (extraout_x9 < param_2) {
      uVar4 = extraout_x8 + 1;
    }
    plVar3 = param_1;
    func_0x000107407b7c();
    if (param_5 != 0) {
      _memmove(plVar3,plVar6,param_5 << 1);
    }
    lVar5 = (long)plVar3 + param_5 * 2;
    if (param_7 != 0) {
      _memmove(lVar5,param_8,param_7 << 1);
    }
    param_4 = param_4 - (param_6 + param_5);
    if (param_4 != 0) {
      _memmove(lVar5 + param_7 * 2,(long)plVar6 + param_6 * 2 + param_5 * 2,param_4 * 2);
    }
    if (param_2 != 10) {
      __ZdlPv(plVar6);
    }
    param_4 = param_7 + param_5 + param_4;
    *param_1 = (long)plVar3;
    param_1[1] = param_4;
    param_1[2] = uVar4 | 0x8000000000000000;
    *(undefined2 *)((long)plVar3 + param_4 * 2) = 0;
    return;
  }
  func_0x000107407b68();
  lVar5 = param_1[1];
  func_0x000107828058(lVar5);
  param_1[1] = lVar5 + 0xa8;
  return;
}



/* Entry: 1078283bc; end: 10782844f;  */

long FUN_1078283bc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_48;
  
  func_0x000107826d3c(param_1,(param_1[1] - *param_1) / 0xa8 + 1);
  func_0x000107828674();
  func_0x000107828450(uStack_48,param_2);
  func_0x000107828650();
  func_0x000107826d94();
  lVar1 = param_1[1];
  func_0x000107828614();
  return lVar1;
}



/* Entry: 10782871c; end: 1078288b7;  */

/* WARNING: Possible PIC construction at 0x000107828824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107828828) */
/* WARNING: Removing unreachable block (ram,0x000107828830) */
/* WARNING: Removing unreachable block (ram,0x000107828838) */

void FUN_10782871c(undefined8 param_1,ulong param_2,long param_3)

{
  undefined ***pppuVar1;
  undefined **ppuStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [504];
  long lStack_58;
  
  pppuVar1 = &ppuStack_270;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_268 = auStack_250;
  ppuStack_270 = &PTR_DAT_11099bc38;
  uStack_258 = 500;
  uStack_260 = 0;
  if (param_2 + param_3 <= param_2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
              (param_1,puStack_268,0);
    func_0x0001003ac644(&ppuStack_270);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001003ac644(&ppuStack_270);
    __Unwind_Resume(pppuVar1);
  }
  func_0x0001078289e4();
  return;
}



/* Entry: 107828bfc; end: 107828c27;  */

undefined8 * FUN_107828bfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_40 [2];
  
  puVar1 = param_1;
  func_0x00010782a318();
  func_0x0001073ada2c(puVar1[0x75]);
  if (*(int *)(param_1 + 0x74) == 0) {
    func_0x00010782a404();
    func_0x00010782a3ec(alStack_40);
    if (alStack_40[0] != 0) {
      uVar2 = param_1[0x71];
      uVar3 = param_1[0x6d];
      puVar1 = (undefined8 *)0x38;
      __Znwm();
      uVar4 = *(undefined8 *)((long)param_1 + 0xc);
      puVar1[5] = *(undefined8 *)((long)param_1 + 0x14);
      puVar1[4] = uVar4;
      puVar1[6] = uVar3;
      *puVar1 = &PTR_DAT_1109e0800;
      puVar1[1] = uVar2;
      puVar1[2] = &UNK_107565e44;
      puVar1[3] = 0;
      func_0x00010782a3f4();
      func_0x00010782a40c();
      if (puVar1 != (undefined8 *)0x0) {
        func_0x00010782a2f0();
      }
    }
    func_0x00010724bcd8(alStack_40);
  }
  else {
    func_0x00010782a3fc();
    func_0x000107565e44(param_1[0x71],(long)param_1 + 0xc,param_1[0x6d]);
  }
  func_0x00010725b238(param_1 + 0x7a);
  func_0x00010724ae28(param_1 + 0x78);
  func_0x00010724b54c(param_1 + 0x75);
  func_0x00010750b930(param_1 + 0x71);
  func_0x00010750bd10(param_1 + 0x6f);
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}


