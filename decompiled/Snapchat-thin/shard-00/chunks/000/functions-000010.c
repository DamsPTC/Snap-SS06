/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100068c54; end: 100068c6b;  */

void FUN_100068c54(void)

{
  return;
}



/* Entry: 100068c6c; end: 100068ca3;  */

void FUN_100068c6c(void)

{
  long unaff_x21;
  
  FUN_100067480();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -0x20) {
    func_0x000100067498();
    FUN_100068ca4();
  }
  return;
}



/* Entry: 100068ca4; end: 100068ca7;  */

void FUN_100068ca4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_2 + 2);
  return;
}



/* Entry: 100068ca8; end: 100068d7b;  */

void FUN_100068ca8(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int extraout_w8;
  int extraout_w8_00;
  long *unaff_x19;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  FUN_1000675b0();
  if (extraout_w8 == 0) {
    if (*(char *)(param_1 + 10) != '\0') {
      plVar6 = (long *)*unaff_x19;
      do {
        func_0x000107c31684();
        FUN_1000675b0();
      } while (extraout_w8_00 == 0);
      uVar7 = (ulong)*(byte *)(unaff_x19 + 1);
      lVar4 = *unaff_x19;
      do {
        lVar2 = lVar4;
        func_0x000107c3168c();
        plVar5 = *(long **)(lVar2 + uVar7 * 8);
        cVar3 = '\0';
        if (*(char *)((long)plVar5 + 0xb) == '\0') {
          while (cVar3 == '\0') {
            func_0x000107c31684();
            cVar3 = *(char *)((long)plVar5 + 0xb);
          }
          uVar7 = (ulong)*(byte *)(plVar5 + 1);
          lVar4 = *plVar5;
        }
        FUN_100068d7c(plVar5,*(undefined1 *)((long)plVar5 + 10));
        func_0x000107c3a860();
        if (*(byte *)(lVar4 + 10) <= uVar7) {
          do {
            func_0x000107c3a838();
            FUN_100068d7c();
            func_0x000107c3a8b8();
            bVar1 = plVar6 <= plVar5;
            if (plVar5 == plVar6) {
              return;
            }
            func_0x000107c3a890();
          } while (bVar1);
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
  else {
    FUN_100068d7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100068d7c; end: 100068dab;  */

void FUN_100068d7c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x18;
  uVar2 = (param_2 & 0xffffffff) << 5;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    func_0x000107c60ca0(param_1);
    param_1 = param_1 + 0x20;
    uVar2 = uVar2 - 0x20;
    uVar1 = uVar2;
  }
  return;
}



/* Entry: 100068dac; end: 100068de3;  */

void FUN_100068dac(void)

{
  long unaff_x21;
  
  FUN_100067630();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + 0x20) {
    func_0x000100067498();
    FUN_100068ca4();
  }
  return;
}



/* Entry: 100068de4; end: 100068e5b;  */

void FUN_100068de4(long param_1)

{
  undefined1 in_w8;
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  
  uVar1 = unaff_x19[2];
  lVar2 = *unaff_x19;
  *(undefined1 *)(lVar2 + param_1) = in_w8;
  *(undefined1 *)(lVar2 + (param_1 - 7U & uVar1) + (uVar1 & 7)) = in_w8;
  return;
}



/* Entry: 100068e5c; end: 100068f57;  */

undefined2 *
FUN_100068e5c(undefined2 *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined2 *extraout_x8_02;
  undefined2 *extraout_x8_03;
  short *unaff_x21;
  undefined2 *unaff_x23;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_stack_00000008;
  undefined2 *in_stack_00000050;
  
  func_0x000100068e40();
  FUN_100068f58();
  uVar4 = (param_4 & 0xff) == 0;
  uVar3 = 0;
  if (!(bool)uVar4) {
    func_0x0001000690cc();
    func_0x000100064c34();
    uVar6 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = param_2[2];
        if ((char)bVar1 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x000100064e38(param_1);
              goto DAT_10b4c5d10;
            }
            func_0x000107c39ba4();
            uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar6 = (uVar6 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar6 = uVar6 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar6 = uVar6 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar5 = in_stack_00000050;
    FUN_100064d5c(in_stack_00000050,uVar6 >> 3 & 0x1fffffff);
    if (puVar5 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000050 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)(ushort)puVar5[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar5;
  }
  func_0x000100068f70();
  if (extraout_x8_00 != 0) {
    func_0x000107c39988();
    func_0x000107c39a24();
    if (((bool)uVar4) && (func_0x000107c39a20(), (int)param_1 != 0)) {
      do {
        FUN_100064b58((long)unaff_x23 + 1);
        if (in_stack_00000008 == 0) goto LAB_100068f40;
        func_0x000107c39b74();
        if (extraout_x8_01 == 0) {
          func_0x000107c39b04();
          uVar2 = uVar4;
        }
        else {
          func_0x000107c399a4();
          uVar2 = uVar4;
        }
        func_0x000107c3997c();
        func_0x000107c399d0();
        if (param_1 == (undefined2 *)0x0) goto LAB_100068f40;
        func_0x000100069094();
        if ((bool)uVar3) goto LAB_100068f28;
        func_0x0001000690a4();
        uVar4 = 1;
        puVar5 = extraout_x8_02;
      } while ((bool)uVar2);
      goto LAB_100068f0c;
    }
  }
  do {
    uVar2 = uVar4;
    func_0x000100068f7c();
    func_0x00010006908c();
    if (param_1 == (undefined2 *)0x0) goto LAB_100068f40;
    func_0x000100069094();
    if ((bool)uVar3) goto LAB_100068f28;
    func_0x0001000690a4();
    uVar4 = 1;
    puVar5 = extraout_x8_03;
  } while ((bool)uVar2);
LAB_100068f0c:
  if (unaff_x23 < puVar5) {
    func_0x0001000690b0(*unaff_x23);
    func_0x0001000690cc();
                    /* WARNING: Could not recover jumptable at 0x0001000690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  }
LAB_100068f28:
  if (*unaff_x21 != 0) {
    func_0x000107c39a40();
  }
  return unaff_x23;
LAB_100068f40:
  func_0x000107c39a10();
DAT_10b4c5d10:
  if (*param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (undefined2 *)0x0;
}



/* Entry: 100068f58; end: 100068f83;  */

void FUN_100068f58(void)

{
  return;
}



/* Entry: 100068f84; end: 100069033;  */

void FUN_100068f84(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  int extraout_w8;
  int iVar4;
  int extraout_w8_00;
  int *extraout_x9;
  int *piVar5;
  int *extraout_x9_00;
  int iVar6;
  int extraout_w10;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    FUN_1000640a4();
    FUN_100069034();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        FUN_1000640a4();
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        FUN_100069034();
        *puVar2 = (ulong)puVar3;
        FUN_10006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        piVar5 = extraout_x9;
        iVar6 = extraout_w8;
        iVar4 = extraout_w8;
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
        piVar5 = extraout_x9_00;
        iVar6 = extraout_w10;
        iVar4 = extraout_w8_00;
      }
      *piVar5 = iVar6 + 1;
      *(int *)(param_1 + 1) = iVar4 + 1;
      FUN_100069034();
      *(ulong **)(piVar5 + (long)iVar4 * 2 + 2) = puVar2;
    }
  }
  return;
}



/* Entry: 100069034; end: 10006903b;  */

void FUN_100069034(void)

{
  FUN_10006903c(&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10006903c; end: 10006908b;  */

void FUN_10006903c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    FUN_100063c9c();
  }
  else {
    func_0x000107c303ec();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10006908c; end: 1000690ff;  */

void FUN_10006908c(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  lStack_28 = param_2;
  FUN_100063bf4(&lStack_28);
  if (lStack_28 != 0) {
    FUN_100063cb0();
  }
  return;
}



/* Entry: 100069100; end: 10006916b;  */

void FUN_100069100(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1[2] == 0) {
    puVar2 = param_1;
    func_0x00010006818c();
    puVar1 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar1 = (ulong *)(*param_1 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      FUN_10006916c(*puVar1,0);
      puVar1 = puVar1 + 1;
    }
    if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(*param_1 - 1);
      return;
    }
  }
  return;
}



/* Entry: 10006916c; end: 10006918b;  */

void FUN_10006916c(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  if (param_1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10006918c; end: 1000691af;  */

void FUN_10006918c(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  uint6 uVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 uVar16;
  byte bVar22;
  undefined1 auStack_90 [16];
  
  puVar3 = &DAT_1134051e8;
  if ((DAT_1134051e8 & 1) != 0) {
    return;
  }
  DAT_1134051e8 = 1;
  FUN_1000624c8();
  func_0x0001000624e0();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 8) {
    if (*(long *)(lRam0000000113405208 + unaff_x20) != 0) {
      FUN_100062458();
    }
  }
  FUN_100062594(PTR_DAT_1134051f0,uRam00000001134051ec);
  puVar2 = puVar3;
  FUN_100068580();
  puVar11 = (ulong *)(puVar2 + 8);
  Hint_Prefetch(*puVar11,0,2,0);
  FUN_1000687ec(*puVar11);
  lVar13 = 0;
  uVar9 = *puVar11;
  uVar10 = *(ulong *)(puVar2 + 0x18);
  uVar6 = uVar9 >> 0xc ^ (ulong)puVar3 >> 7;
  bVar1 = (byte)puVar3;
  uVar15 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar6 = uVar6 & uVar10;
    uVar16 = *(undefined8 *)(uVar9 + uVar6);
    cVar17 = (char)((ulong)uVar16 >> 8);
    cVar18 = (char)((ulong)uVar16 >> 0x10);
    cVar19 = (char)((ulong)uVar16 >> 0x18);
    cVar20 = (char)((ulong)uVar16 >> 0x20);
    cVar21 = (char)((ulong)uVar16 >> 0x28);
    bVar14 = (byte)((ulong)uVar16 >> 0x30);
    bVar22 = (byte)((ulong)uVar16 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar22 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar14 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar21 == (char)(uVar15 >> 0x28)),
                                            CONCAT14(-(cVar20 == (char)(uVar15 >> 0x20)),
                                                     CONCAT13(-(cVar19 == (char)(uVar15 >> 0x18)),
                                                              CONCAT12(-(cVar18 ==
                                                                        (char)(uVar15 >> 0x10)),
                                                                       CONCAT11(-(cVar17 ==
                                                                                 (char)(uVar15 >> 8)
                                                                                 ),-((char)uVar16 ==
                                                                                    (char)uVar15))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar4 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar7 = *(undefined **)
                (*(long *)(puVar2 + 0x10) +
                (uVar6 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar10) * 8);
      if (puVar7 == &DAT_1134051e8) {
LAB_10006877c:
        func_0x000107c3a910();
        func_0x000107c2b93c();
        func_0x000107c303f8(auStack_90,&UNK_10f836050);
        func_0x000107c303fc();
        func_0x000107c3a8f4();
        return;
      }
      uVar12 = *(ulong *)(puVar7 + 0x10);
      uVar4 = uVar12;
      func_0x000107c613d0(uVar12);
      puVar7 = PTR_DAT_1134051f8;
      puVar5 = PTR_DAT_1134051f8;
      func_0x000107c613d0(PTR_DAT_1134051f8);
      FUN_1000633dc(uVar12,uVar4,puVar7,puVar5);
      if ((uVar12 & 1) != 0) goto LAB_10006877c;
    }
    bVar14 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                 CONCAT16(-(bVar14 == 0x80),
                                          CONCAT15(-(cVar21 == -0x80),
                                                   CONCAT14(-(cVar20 == -0x80),
                                                            CONCAT13(-(cVar19 == -0x80),
                                                                     CONCAT12(-(cVar18 == -0x80),
                                                                              CONCAT11(-(cVar17 ==
                                                                                        -0x80),-((
                                                  char)uVar16 == -0x80)))))))),1);
    if ((bVar14 & 1) != 0) {
      FUN_100068864(puVar11,puVar3);
      *(byte **)(*(long *)(puVar2 + 0x10) + (long)puVar11 * 8) = &DAT_1134051e8;
      return;
    }
    lVar13 = lVar13 + 8;
    uVar6 = lVar13 + uVar6;
  } while( true );
}



/* Entry: 1000691b0; end: 10006941f;  */

void FUN_1000691b0(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar8;
  long extraout_x8;
  long lVar9;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar10;
  long unaff_x23;
  uint uVar11;
  long unaff_x24;
  
  FUN_100066f6c();
  FUN_1000678d4();
  if ((bool)in_ZR) {
    FUN_100069420(0);
    func_0x000100067964();
    FUN_100069460();
    *unaff_x22 = unaff_x23;
    unaff_x21 = (long *)*unaff_x19;
LAB_100069334:
    func_0x0001000679f0();
    if (extraout_w8_01 == 0) {
      unaff_x20 = (long *)(ulong)((uint)unaff_x21 & 0xff);
      FUN_100069420(unaff_x20,unaff_x23);
      func_0x000107c3a7cc();
      FUN_1000694bc();
    }
    else {
      FUN_100066298(7);
      FUN_100066350();
      func_0x000100067a00();
      FUN_1000694bc();
      func_0x000100067bd8();
      if ((bool)in_ZR) {
        unaff_x22[2] = (long)unaff_x20;
      }
    }
  }
  else {
    bVar3 = *(byte *)(unaff_x21 + 1);
    uVar11 = (uint)unaff_x24;
    if (bVar3 != 0) {
      unaff_x20 = (long *)(ulong)(bVar3 - 1);
      func_0x000107c3168c();
      func_0x000100067c54();
      if (*(byte *)((long)unaff_x20 + 10) < 7) {
        func_0x000100067d24();
        cVar6 = uVar11 > extraout_w10 && (int)((extraout_w9 & 0xff) - 6) < 0;
        if (uVar11 <= extraout_w10 || (extraout_w9 & 0xff) < 7) {
          func_0x000100067ce4(unaff_x20 + extraout_x8 * 4);
          FUN_100068ca4();
          func_0x000100067d3c();
          FUN_100068c6c();
          func_0x000100067ce4(*unaff_x20 + (ulong)*(byte *)(unaff_x20 + 1) * 0x20);
          FUN_100068ca4();
          func_0x000100067d5c();
          FUN_100068c6c();
          if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
            func_0x000107c3a808();
            lVar9 = 0;
            while( true ) {
              cVar5 = SBORROW8(unaff_x24,lVar9);
              cVar6 = unaff_x24 - lVar9 < 0;
              if (unaff_x24 == lVar9) break;
              func_0x000107c3a7b8();
              FUN_100069460();
              lVar9 = unaff_x23;
            }
            while (func_0x000107c3a88c(), cVar6 == cVar5) {
              func_0x000107c3a7f0();
              FUN_100069460();
            }
          }
          func_0x000100067d78();
          *(undefined4 *)(unaff_x19 + 1) = extraout_w8;
          if (!(bool)cVar6) {
            return;
          }
          func_0x0001000695e8();
          iVar8 = extraout_w8_00;
          goto LAB_10006938c;
        }
      }
    }
    bVar4 = *(byte *)(unaff_x23 + 10);
    if ((uint)bVar4 <= (uint)bVar3) {
LAB_1000692fc:
      in_OV = SBORROW4((uint)bVar4,7);
      in_NG = (int)(bVar4 - 7) < 0;
      in_ZR = bVar4 == 7;
      if ((bool)in_ZR) {
        func_0x000107c3a850();
        FUN_1000691b0();
        unaff_x21 = (long *)*unaff_x19;
        unaff_x23 = *unaff_x21;
      }
      goto LAB_100069334;
    }
    unaff_x20 = (long *)(ulong)(bVar3 + 1);
    func_0x000107c3168c();
    func_0x000100067c54();
    uVar7 = (ulong)*(byte *)((long)unaff_x20 + 10);
    cVar5 = SBORROW8(uVar7,6);
    cVar6 = (long)(uVar7 - 6) < 0;
    if (6 < uVar7) goto LAB_1000692fc;
    func_0x000100067c60(7);
    uVar10 = extraout_w10_00 & 0xff;
    bVar1 = cVar6 != cVar5;
    in_OV = bVar1 && SBORROW4(uVar10,6);
    in_ZR = bVar1 && uVar10 == 6;
    in_NG = bVar1 && (int)(uVar10 - 6) < 0;
    if ((bVar1 && 5 < uVar10) && (!bVar1 || uVar10 != 6)) goto LAB_1000692fc;
    func_0x000100067c94();
    FUN_100068dac();
    func_0x000100067ca8();
    FUN_100068ca4();
    func_0x000100067cc8();
    FUN_100068c6c();
    func_0x000100067ce4(*unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x20);
    FUN_100068ca4();
    if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
      func_0x000107c3a814();
      if (unaff_x23 != 0) {
        do {
          func_0x000107c3a894();
          func_0x000107c3168c();
          func_0x000107c3a830();
          FUN_100069460();
        } while (bVar3 != 0);
      }
      func_0x000107c3a808();
      uVar10 = 1;
      while( true ) {
        uVar2 = uVar10 & 0xff;
        in_OV = SBORROW4(uVar11,uVar2);
        in_NG = (int)(uVar11 - uVar2) < 0;
        in_ZR = uVar11 == uVar2;
        if (uVar11 < uVar2) break;
        func_0x000107c3a7a0();
        FUN_100069460();
        uVar10 = uVar10 + 1;
      }
    }
    func_0x000100067cf0();
    func_0x000100067d00();
  }
  func_0x000100067be8();
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  iVar8 = extraout_w8_02 + ~extraout_w9_00;
LAB_10006938c:
  *(int *)(unaff_x19 + 1) = iVar8;
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 100069420; end: 10006945f;  */

void FUN_100069420(void)

{
  FUN_100067930(1,4);
  FUN_100066300();
  FUN_100066350();
  func_0x000100067944();
  return;
}



/* Entry: 100069460; end: 100069483;  */

void FUN_100069460(void)

{
  FUN_100067998();
  FUN_100069484();
  FUN_1000679e0();
  return;
}



/* Entry: 100069484; end: 1000694bb;  */

long FUN_100069484(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100067930(1,4);
  func_0x0001000662fc();
  return param_1 + lVar1;
}



/* Entry: 1000694bc; end: 1000695af;  */

void FUN_1000694bc(long param_1,int param_2)

{
  uint uVar1;
  int extraout_w8;
  int extraout_w8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar2;
  long unaff_x22;
  uint uVar3;
  
  FUN_100067b18();
  if (param_2 == 7) {
    uVar3 = 0;
  }
  else if (param_2 == 0) {
    uVar3 = *(byte *)(unaff_x20 + 10) - 1;
  }
  else {
    uVar3 = (uint)(*(byte *)(unaff_x20 + 10) >> 1);
  }
  func_0x000100067b24(uVar3);
  FUN_100068c6c();
  func_0x000100067b4c();
  uVar3 = (int)unaff_x20 + extraout_w8 * 0x20;
  if ((uint)unaff_x22 < (uint)*(byte *)(unaff_x21 + 10)) {
    FUN_1000695b0();
    FUN_100068dac();
  }
  func_0x000100067b68(unaff_x21 + unaff_x22 * 0x20);
  func_0x000100067b8c();
  if ((extraout_w8_00 == 0) && (uVar1 = (uint)unaff_x22 + 1, uVar1 < (uVar3 & 0xff))) {
    while (uVar1 < (uVar3 & 0xff)) {
      func_0x000107c3a808();
      func_0x0001000695c4();
      FUN_100069484();
      func_0x0001000695d8();
    }
  }
  func_0x000100067ba0();
  func_0x000100067bb0();
  FUN_100069484();
  *(long *)(param_1 + unaff_x21 * 8) = unaff_x19;
  if (*(char *)(unaff_x20 + 0xb) == '\0') {
    func_0x000107c3168c();
    for (bVar2 = 0; bVar2 <= *(byte *)(unaff_x19 + 10); bVar2 = bVar2 + 1) {
      func_0x000107c3a7f8();
      FUN_100069460();
    }
  }
  return;
}



/* Entry: 1000695b0; end: 1000695f7;  */

void FUN_1000695b0(void)

{
  return;
}



/* Entry: 1000695f8; end: 10006962b;  */

void FUN_1000695f8(undefined8 param_1)

{
  func_0x000107c6124c(param_1,0);
  FUN_100069664();
  func_0x00010006970c();
  return;
}



/* Entry: 10006962c; end: 100069663;  */

void FUN_10006962c(void)

{
  FUN_1000695f8(0x1137fe298);
  FUN_1000695f8(0x113847398);
  func_0x000107c6124c(0x1137fe2a0,0);
  FUN_100069664();
  func_0x00010006970c();
  return;
}



/* Entry: 100069664; end: 1000696b3;  */

undefined1 * FUN_100069664(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  func_0x000100069674(param_2,&PTR_PTR_113289a30);
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 1000696b4; end: 1000696ff;  */

undefined8 * FUN_1000696b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_2;
  func_0x000100069674(param_2,param_3);
  *(int *)param_1 = (int)param_2;
  uVar1 = 2;
  if ((int)uVar2 != 0) {
    uVar1 = 3;
  }
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 100069700; end: 10006971f;  */

void FUN_100069700(void)

{
  return;
}



/* Entry: 100069720; end: 10006974b;  */

ulong FUN_100069720(ulong param_1)

{
  int *unaff_x20;
  
  func_0x000100069714();
  FUN_10006974c();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x000107c316e0();
  if ((*(ulong *)(unaff_x20 + 4) & 1) == 0) {
    return 0;
  }
  if (*(ulong *)(unaff_x20 + 4) == 1) {
    return (ulong)(*unaff_x20 != 0);
  }
  return 1;
}



/* Entry: 10006974c; end: 1000697a3;  */

bool FUN_10006974c(int *param_1)

{
  if ((*(ulong *)(param_1 + 4) & 1) == 0) {
    return false;
  }
  if (*(ulong *)(param_1 + 4) == 1) {
    return *param_1 != 0;
  }
  return true;
}



/* Entry: 1000697a4; end: 10006988b;  */

void FUN_1000697a4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uStack_28;
  
  if ((bRam00000001137fe2b8 & 1) == 0) {
    iVar4 = 0x137fe2b8;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      uVar5 = 1;
      func_0x000107c60e20();
      puVar6 = (undefined8 *)0x20;
      uRam00000001137fe2a8 = uVar5;
      uStack_28 = uVar5;
      func_0x000107c60e20();
      *puVar6 = &PTR_DAT_110d9e700;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = uVar5;
      uStack_28 = 0;
      puRam00000001137fe2b0 = puVar6;
      FUN_10006988c(&uStack_28);
      func_0x000107c60e4c(0x1137fe2b8);
    }
  }
  puVar6 = puRam00000001137fe2b0;
  *param_1 = uRam00000001137fe2a8;
  param_1[1] = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = puVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10006988c; end: 1000698b7;  */

long * FUN_10006988c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1000698b8; end: 1000698bf;  */

void FUN_1000698b8(void)

{
  return;
}



/* Entry: 1000698c0; end: 10006991f;  */

void FUN_1000698c0(void)

{
  if (PTR__objc_setHook_getClass_11034d308 != (undefined *)0x0) {
    func_0x000107c6118c(0x10007421c,0x1137fe8e0);
  }
  return;
}



/* Entry: 100069920; end: 1000699ff;  */

undefined8 entry(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  
  pcVar1 = "ActivePrewarm";
  func_0x000107c60ffc();
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '1')) {
    uRam0000000113839536 = 1;
  }
  func_0x000107c5afe4(PTR_PTR_1126ae4e0);
  if (lRam0000000113818120 != -1) {
    FUN_10002a2fc(0x113818120,&PTR___NSConcreteGlobalBlock_110871948);
  }
  puVar2 = PTR_PTR_1126ae538;
  FUN_100069c04();
  FUN_100073f50();
  func_0x000107c40170(puVar2);
  func_0x000107c6110c();
  func_0x000107c60ba0(param_1,param_2,&PTR____CFConstantStringClassReference_110daaef8,
                      &PTR____CFConstantStringClassReference_110daaf18);
  func_0x000107c61108(puVar2);
  return param_1;
}



/* Entry: 100069a00; end: 100069a03; +[SCAppLaunchSignaler signalMain] */

void FUN_100069a00(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [6];
  
  lVar3 = 0;
  func_0x000107c5f13c();
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_70 + lVar1 + 0x10);
  func_0x000107c60034();
  if (lRam000000011307c818 != -1) {
    func_0x000107c61568(0x11307c818,FUN_1000285f8);
  }
  uVar2 = uRam0000000113813650;
  func_0x000107c5f138(puVar5);
  *(undefined **)((long)auStack_70 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  auStack_78[lVar1] = 2;
  *(undefined8 *)((long)&uStack_80 + lVar1) = 6;
  func_0x000107c5f128(lVar4,0x100000000,uVar2,"main",4,2,puVar5,"main()");
  (**(code **)(lVar7 + 8))(puVar5,lVar3);
  func_0x000107c6106c();
  puRam0000000113813740 = puVar5;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = uRam0000000113813748;
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  FUN_100069b5c(uVar2);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100069a04; end: 100069b5b;  */

void FUN_100069a04(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 auStack_70 [6];
  
  lVar3 = 0;
  func_0x000107c5f13c();
  lVar7 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_70 + lVar1 + 0x10);
  func_0x000107c60034();
  if (lRam000000011307c818 != -1) {
    func_0x000107c61568(0x11307c818,FUN_1000285f8);
  }
  uVar2 = uRam0000000113813650;
  func_0x000107c5f138(puVar5);
  *(undefined **)((long)auStack_70 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  auStack_78[lVar1] = 2;
  *(undefined8 *)((long)&uStack_80 + lVar1) = 6;
  func_0x000107c5f128(lVar4,0x100000000,uVar2,"main",4,2,puVar5,"main()");
  (**(code **)(lVar7 + 8))(puVar5,lVar3);
  func_0x000107c6106c();
  puRam0000000113813740 = puVar5;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = uRam0000000113813748;
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  FUN_100069b5c(uVar2);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100069b5c; end: 100069c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100069b5c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    lVar1 = unaff_x20 + _DAT_11309bf58;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c427e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 100069c04; end: 100069c43;  */

undefined1 FUN_100069c04(void)

{
  if (lRam00000001137fc0f0 != -1) {
    FUN_10002a2fc(0x1137fc0f0,&PTR___NSConcreteGlobalBlock_110d66538);
  }
  return uRam00000001137fc00a;
}



/* Entry: 100069c44; end: 100069cc7;  */

undefined * FUN_100069c44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1960;
  func_0x000107c61174(0);
  func_0x000107c61174(param_1);
  func_0x000107c5a9f0(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(0);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100069cc8; end: 100069cef;  */

void FUN_100069cc8(void)

{
  undefined1 uVar1;
  
  uVar1 = 0xf8;
  FUN_100069c44(&PTR____CFConstantStringClassReference_110f986f8,0);
  uRam00000001137fc00a = uVar1;
  return;
}



/* Entry: 100069cf0; end: 100069d43; +[SCAppStartExperimentReader sharedInstance] */

void FUN_100069cf0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc1f0 != -1) {
    FUN_10002a2fc(0x1137fc1f0,&PTR___NSConcreteGlobalBlock_110d668d8);
  }
  uVar1 = uRam00000001137fc1e8;
  func_0x000107c61174(uRam00000001137fc1e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100069d44; end: 100069e3b;  */

/* WARNING: Possible PIC construction at 0x000100069e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100069e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100069e0c) */
/* WARNING: Removing unreachable block (ram,0x000100069e1c) */

void FUN_100069d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126e1960;
  func_0x000107c610f4();
  puVar3 = PTR_PTR_1126b7870;
  func_0x000107c44354(PTR_PTR_1126b7870);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110d668f8);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126b6ac8;
  func_0x000107c5a9bc(PTR_PTR_1126b6ac8);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae4f8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4f8);
  func_0x000107c61180();
  func_0x000107c46928(puVar2,param_2,puVar3,puVar4,&PTR____CFConstantStringClassReference_110f9c798,
                      puVar5,puVar6);
  uVar1 = puRam00000001137fc1e8;
  puRam00000001137fc1e8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100069e3c; end: 100069f2b; +[SCAppStartExperimentReaderConstants getURLForAppStartExperimentReader] */

void FUN_100069e3c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc208 != -1) {
    FUN_10002a2fc(0x1137fc208,&PTR___NSConcreteGlobalBlock_110d669a8);
  }
  uVar1 = uRam00000001137fc200;
  func_0x000107c61174(uRam00000001137fc200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100069f2c; end: 100069f77; +[SCLazy automaticCreationWithInitializationBlock:] */

void FUN_100069f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c46ea8();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100069f78; end: 10006a003; -[SCLazy initWithInitializationBlock:isAutoCreation:] */

undefined1 *
FUN_100069f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e728;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10006a004; end: 10006a087; +[SCConfigHeuristicRecoveryManagerImpl shared] */

void FUN_10006a004(void)

{
  if (lRam0000000113084228 != -1) {
    func_0x000107c61568(0x113084228,0x10006a064);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813c18);
  return;
}



/* Entry: 10006a088; end: 10006a1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a088(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_113084288) = 1;
  func_0x000107c61614(unaff_x20 + _DAT_113084218,0);
  *(undefined1 *)(unaff_x20 + _DAT_113084220) = 0;
  lVar2 = _DAT_113084248;
  lVar3 = 0;
  FUN_10006a210();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0xf000000000000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  uVar4 = 1;
  func_0x000107c60f6c();
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  lVar1 = _DAT_113084098;
  lVar5 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar3 + lVar1,1,1,lVar5);
  *(long *)(unaff_x20 + lVar2) = lVar3;
  lVar5 = _DAT_113084250;
  uVar4 = 0;
  func_0x000107c60f6c();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  lVar5 = unaff_x20 + _DAT_113084278;
  *(undefined8 *)(lVar5 + 8) = 0;
  func_0x000107c61614(lVar5,0);
  *(undefined **)(unaff_x20 + _DAT_113084280) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar5 = _DAT_113084270;
  uVar4 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar5) = uVar4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10006a1f0; end: 10006a20f; -[SCConfigHeuristicRecoveryManagerImpl init] */

void FUN_10006a1f0(void)

{
  FUN_10006a088();
  return;
}



/* Entry: 10006a210; end: 10006a247;  */

void FUN_10006a210(undefined8 param_1)

{
  if (lRam00000001130840c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e812f8c);
  return;
}



/* Entry: 10006a248; end: 10006a33f;  */

void FUN_10006a248(long param_1)

{
  long lVar1;
  
  if (lRam0000000112d71bb8 == 0) {
    lVar1 = 0x112d36580;
    FUN_10002969c(0x112d36580,&UNK_10d9016d0);
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112d71bb8 = param_1;
    }
  }
  return;
}



/* Entry: 10006a340; end: 10006a35f;  */

void FUN_10006a340(void)

{
  func_0x000107c61168(&PTR_PTR_113097628);
  return;
}



/* Entry: 10006a360; end: 10006a413;  */

void FUN_10006a360(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar1 = (undefined4 *)0x4;
  func_0x000107c6158c(4,0xffffffffffffffff);
  *(undefined4 **)(unaff_x20 + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8;
    func_0x000107c40f44(PTR__OBJC_CLASS___NSAssertionHandler_1126ddfe8);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c445f8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  *puVar1 = 0;
  return;
}



/* Entry: 10006a414; end: 10006a41b;  */

void FUN_10006a414(void)

{
  if (lRam0000000113084408 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e8132c0);
  return;
}



/* Entry: 10006a41c; end: 10006a453;  */

void FUN_10006a41c(undefined8 param_1)

{
  if (lRam0000000113084408 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e8132c0);
  return;
}



/* Entry: 10006a454; end: 10006a4eb;  */

void FUN_10006a454(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBoWV_11034d678 + 0x40;
  lVar2 = 0x13f;
  puStack_50 = puVar1;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = &UNK_10dd15918;
    puStack_28 = &UNK_10dd15918;
    puStack_38 = puVar1;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 10006a4ec; end: 10006a52b; +[SCStartupJournalManager shared] */

void FUN_10006a4ec(void)

{
  if (lRam00000001130843b8 != -1) {
    func_0x000107c61568(0x1130843b8,FUN_10006a52c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001130843c0);
  return;
}



/* Entry: 10006a52c; end: 10006a5e7;  */

void FUN_10006a52c(void)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar1);
  FUN_10006a41c(0);
  func_0x000107c610f8();
  uVar2 = 0xd000000000000013;
  FUN_10006a5e8(0xd000000000000013,0x800000010ef3eb80,&stack0xffffffffffffffd0 + -extraout_x8);
  uRam00000001130843c0 = uVar2;
  return;
}



/* Entry: 10006a5e8; end: 10006ad1f;  */

/* WARNING: Removing unreachable block (ram,0x00010006abc4) */
/* WARNING: Removing unreachable block (ram,0x00010006abf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006a5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 **ppuVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  undefined1 *puVar20;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long alStack_130 [2];
  undefined8 uStack_120;
  undefined1 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = param_1;
  uStack_f8 = param_2;
  func_0x000107c614f0();
  lVar3 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar23 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar23 - extraout_x12;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  puVar20 = (undefined1 *)(lVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_118 = puVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)puVar20 - extraout_x12_00;
  lVar5 = 0;
  lStack_110 = lVar19;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar3 = _DAT_1130843d8;
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar19);
  func_0x000107c5ee8c();
  (**(code **)(lVar21 + 8))(lVar19,lVar5);
  *(ulong *)(unaff_x20 + lVar3) =
       CONCAT17(in_register_00005007,
                CONCAT16(in_register_00005006,
                         CONCAT15(in_register_00005005,
                                  CONCAT14(in_register_00005004,
                                           CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
                                 )));
  lVar3 = _DAT_1130843d0;
  uVar6 = 0;
  FUN_10006ad20();
  func_0x000107c613fc();
  FUN_10006ad40();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar6;
  *(undefined1 *)(unaff_x20 + _DAT_1130843a8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_1130843b0) = 2;
  uStack_108 = param_3;
  FUN_100029394(param_3,lVar23);
  pcVar22 = *(code **)(lVar24 + 0x30);
  lVar5 = lVar23;
  (*pcVar22)(lVar23,1,lVar4);
  if ((int)lVar5 == 1) {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3ac48();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar8;
    func_0x000107c5fc54(puVar8,lVar4);
    func_0x000107c61170(puVar8);
    lVar5 = *(long *)(puVar7 + 0x10);
    if (lVar5 != 0) {
      (**(code **)(lVar24 + 0x10))
                (lVar25,puVar7 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)),lVar4);
    }
    func_0x000107c6142c(puVar7);
    (**(code **)(lVar24 + 0x38))(lVar25,lVar5 == 0,1,lVar4);
    lVar5 = lVar23;
    (*pcVar22)(lVar23,1,lVar4);
    if ((int)lVar5 != 1) {
      FUN_10006c168(lVar23,0x112d36580,&UNK_10d9016d0);
    }
  }
  else {
    (**(code **)(lVar24 + 0x20))(lVar25,lVar23,lVar4);
    (**(code **)(lVar24 + 0x38))(lVar25,0,1,lVar4);
  }
  lVar5 = lVar25;
  (*pcVar22)(lVar25,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_10006c168(uStack_108,0x112d36580,&UNK_10d9016d0);
    func_0x000107c6142c(uStack_f8);
    FUN_10006c168(lVar25,0x112d36580,&UNK_10d9016d0);
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar3));
    func_0x000107c61464();
    puVar20 = (undefined1 *)0x0;
    goto LAB_10006aca8;
  }
  (**(code **)(lVar24 + 0x20))(lStack_110,lVar25,lVar4);
  uVar6 = uStack_f8;
  puVar20 = puStack_118;
  func_0x000107c5ed9c(puStack_118,uStack_120,uStack_f8);
  func_0x000107c6142c(uVar6);
  lVar3 = lVar4;
  (**(code **)(lVar24 + 0x10))(unaff_x20 + _DAT_1130843c8,puVar20);
  uVar15 = 0;
  puVar9 = puVar20;
  func_0x000107c5ede8();
  uStack_90 = 0;
  uStack_a8 = 0;
  puStack_b0 = (undefined1 *)0x0;
  uStack_98 = 0;
  lStack_a0 = 0;
  puVar10 = puVar9;
  uVar16 = uVar15;
  func_0x00010006ad78();
  uVar2 = (uint)(uVar15 >> 0x20);
  uVar18 = uVar2 >> 0x1e;
  puVar13 = puVar10;
  if (uVar2 >> 0x1e < 2) {
    if (uVar18 == 0) {
      auStack_f0[0] = SUB81(puVar9,0);
      auStack_f0[1] = (undefined1)((ulong)puVar9 >> 8);
      auStack_f0[2] = (undefined1)((ulong)puVar9 >> 0x10);
      auStack_f0[3] = (undefined1)((ulong)puVar9 >> 0x18);
      auStack_f0[4] = (undefined1)((ulong)puVar9 >> 0x20);
      auStack_f0[5] = (undefined1)((ulong)puVar9 >> 0x28);
      auStack_f0[6] = (undefined1)((ulong)puVar9 >> 0x30);
      auStack_f0[7] = (undefined1)((ulong)puVar9 >> 0x38);
      auStack_f0[8] = (undefined1)uVar15;
      auStack_f0[9] = (undefined1)(uVar15 >> 8);
      auStack_f0[10] = (undefined1)(uVar15 >> 0x10);
      auStack_f0[0xb] = (undefined1)(uVar15 >> 0x18);
      auStack_f0[0xc] = (undefined1)(uVar15 >> 0x20);
      auStack_f0[0xd] = (undefined1)(uVar15 >> 0x28);
      puVar17 = auStack_f0 + (uVar15 >> 0x30 & 0xff);
      FUN_10006ad8c();
      puVar11 = auStack_f0;
    }
    else {
      lVar5 = (long)(int)puVar9;
      puVar20 = (undefined1 *)(((long)puVar9 >> 0x20) - lVar5);
      if ((long)puVar9 >> 0x20 < lVar5) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10006ad10);
        (*pcVar22)();
      }
      puVar12 = puVar10;
      func_0x000107c5ec30();
      if (puVar12 == (undefined1 *)0x0) {
        func_0x000107c5ec38();
        puVar11 = (undefined1 *)0x0;
        puVar13 = puVar12;
        puVar17 = (undefined1 *)0x0;
      }
      else {
        puVar13 = puVar12;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar5,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10006ad1c);
          (*pcVar22)();
        }
        puVar12 = puVar12 + (lVar5 - (long)puVar13);
        func_0x000107c5ec38();
        puVar1 = puVar13;
        if ((long)puVar20 <= (long)puVar13) {
          puVar1 = puVar20;
        }
        puVar11 = (undefined1 *)0x0;
        if (puVar12 != (undefined1 *)0x0) {
          puVar11 = puVar12;
        }
        puVar17 = (undefined1 *)0x0;
        if (puVar12 != (undefined1 *)0x0) {
          puVar17 = puVar1 + (long)puVar12;
        }
      }
LAB_10006ab88:
      puVar20 = puStack_118;
      FUN_10006ad8c();
    }
  }
  else {
    if (uVar18 == 2) {
      lVar5 = *(long *)(puVar9 + 0x10);
      lVar21 = *(long *)(puVar9 + 0x18);
      puVar11 = puVar10;
      func_0x000107c5ec30();
      puVar13 = puVar11;
      if (puVar11 != (undefined1 *)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar5,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x10006ad18);
          (*pcVar22)();
        }
        puVar11 = puVar11 + (lVar5 - (long)puVar13);
      }
      puVar20 = (undefined1 *)(lVar21 - lVar5);
      if (SBORROW8(lVar21,lVar5)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x10006ad14);
        (*pcVar22)();
      }
      func_0x000107c5ec38();
      if (puVar11 == (undefined1 *)0x0) {
        puVar17 = (undefined1 *)0x0;
      }
      else {
        puVar17 = puVar13;
        if ((long)puVar20 <= (long)puVar13) {
          puVar17 = puVar20;
        }
        puVar17 = puVar17 + (long)puVar11;
      }
      goto LAB_10006ab88;
    }
    FUN_10006ad8c();
    auStack_f0[0] = 0;
    auStack_f0[1] = 0;
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    auStack_f0[4] = 0;
    auStack_f0[5] = 0;
    auStack_f0[6] = 0;
    auStack_f0[7] = 0;
    auStack_f0[8] = 0;
    auStack_f0[9] = 0;
    auStack_f0[10] = 0;
    auStack_f0[0xb] = 0;
    auStack_f0[0xc] = 0;
    auStack_f0[0xd] = 0;
    puVar11 = auStack_f0;
    puVar17 = auStack_f0;
  }
  FUN_10006ae80(puVar11,puVar17,&puStack_b0,0,100,0,&UNK_110785fd0,puVar13);
  func_0x00010006c090(puVar9,uVar15);
  FUN_10006c168(&puStack_b0,0x112d49548,&UNK_10d90fde0);
  puStack_b0 = puVar10;
  uStack_a8 = uVar16;
  lStack_a0 = lVar3;
  FUN_1000285a8(0x113084458,&UNK_10dd15960);
  func_0x000107c613fc();
  ppuVar14 = &puStack_b0;
  FUN_10006c248();
  pcVar22 = *(code **)(lVar24 + 8);
  (*pcVar22)(puVar20,lVar4);
  (*pcVar22)(lStack_110,lVar4);
  *(undefined1 ***)(unaff_x20 + _DAT_1130843a0) = ppuVar14;
  puVar20 = &stack0xffffffffffffff20;
  func_0x000107c61154(puVar20,PTR_s_init_1125d9248);
  FUN_10006c168(uStack_108,0x112d36580,&UNK_10d9016d0);
LAB_10006aca8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78(puVar20);
  *(undefined1 **)(lVar19 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar19 + -8) = FUN_10006ad20;
  func_0x000107c61168(&PTR_PTR_113084530);
  return;
}



/* Entry: 10006ad20; end: 10006ad3f;  */

void FUN_10006ad20(void)

{
  func_0x000107c61168(&PTR_PTR_113084530);
  return;
}



/* Entry: 10006ad40; end: 10006ad8b;  */

void FUN_10006ad40(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 1;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined4 *)(unaff_x20 + 0x1c) = 2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000001d;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f207920;
  return;
}



/* Entry: 10006ad8c; end: 10006ae0b;  */

void FUN_10006ad8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd16398;
  func_0x000107c61520(&DAT_10dd16398,&UNK_110785fd0);
  puRam0000000113084430 = puVar1;
  return;
}



/* Entry: 10006ae0c; end: 10006ae7f;  */

void FUN_10006ae0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010006adcc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10006ae80; end: 10006afaf;  */

void FUN_10006ae80(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  byte param_6,undefined1 *param_7,long param_8)

{
  long unaff_x21;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((param_1 != 0) && (param_2 - param_1 != 0)) {
    uStack_d0 = 1;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_90 = 1;
    uStack_68 = 0xf000000000000000;
    uStack_70 = 0;
    uStack_58 = 0xf000000000000000;
    uStack_60 = 0;
    uStack_d8 = 0;
    lStack_f0 = param_1;
    lStack_e8 = param_2 - param_1;
    lStack_e0 = param_1;
    func_0x00010006ae30(param_3,&uStack_c0);
    bStack_80 = param_6 & 1;
    uStack_88 = param_5;
    uStack_78 = param_5;
    FUN_10006afb0();
    func_0x00010006c134(&lStack_f0);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((param_4 & 1) == 0) &&
     ((**(code **)(param_8 + 0x20))(param_7,param_8), ((ulong)param_7 & 1) == 0)) {
    func_0x00010454d3c4();
    func_0x000107c613f8(&UNK_110786678,param_7,0,0);
    *param_7 = 4;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 10006afb0; end: 10006b153;  */

void FUN_10006afb0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auStack_70 [32];
  
  lVar1 = *(long *)(unaff_x20 + 0x78) + -1;
  if (SBORROW8(*(long *)(unaff_x20 + 0x78),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b104);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x78) = lVar1;
  if (lVar1 < 0) {
    uVar3 = 6;
  }
  else {
    param_1 = unaff_x20;
    (**(code **)(param_3 + 0x40))();
    if (unaff_x21 != 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x78) + 1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x78),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b108);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x78) = lVar1;
    if (*(long *)(unaff_x20 + 0x68) < lVar1) {
      func_0x000107c60450("Fatal error",0xb,2,0xd00000000000003b,0x800000010f207d10,
                          "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b154);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + 8) == 0) {
      uVar5 = *(ulong *)(unaff_x20 + 0x88);
      if (0xe < uVar5 >> 0x3c) {
        return;
      }
      uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
      pcVar6 = *(code **)(param_3 + 0x38);
      FUN_10006c00c(uVar4,uVar5);
      pcVar2 = (code *)auStack_70;
      (*pcVar6)(pcVar2,param_2,param_3);
      func_0x000107c5ee44(uVar4,uVar5);
      (*pcVar2)(auStack_70,0);
      FUN_1000b44c0(uVar4,uVar5);
      return;
    }
    uVar3 = 0;
  }
  func_0x00010454d3c4();
  func_0x000107c613f8(&UNK_110786678,param_1,0,0);
  *param_1 = uVar3;
  func_0x000107c61654();
  return;
}



/* Entry: 10006b154; end: 10006b50b;  */

void FUN_10006b154(undefined1 *param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  byte *pbVar11;
  
  if (0 < unaff_x20[5]) {
    uVar10 = unaff_x20[0x13];
    if (uVar10 >> 0x3c < 0xf) {
      lVar4 = unaff_x20[0x12];
      lVar7 = unaff_x20[0x10];
      uVar6 = unaff_x20[0x11];
      func_0x000100de78a0(lVar4,uVar10);
      func_0x000100de78a0(lVar7,uVar6);
      FUN_1000b44c0(lVar7,uVar6);
      if (uVar6 >> 0x3c < 0xf) {
        FUN_1000b44c0(0,0xf000000000000000);
        if (0xe < (ulong)unaff_x20[0x11] >> 0x3c) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b504);
          (*pcVar2)();
        }
        func_0x000107c5ee44(lVar4,uVar10);
        FUN_1000b44c0(lVar4,uVar10);
      }
      else {
        FUN_1000b44c0(unaff_x20[0x10],unaff_x20[0x11]);
        unaff_x20[0x10] = lVar4;
        unaff_x20[0x11] = uVar10;
      }
      FUN_1000b44c0(unaff_x20[0x12],unaff_x20[0x13]);
      unaff_x20[0x13] = -0x1000000000000000;
      unaff_x20[0x12] = 0;
    }
    else if ((*(byte *)(unaff_x20 + 4) & 1) == 0) {
      if ((char)unaff_x20[0xe] == '\x01') {
        if (unaff_x20[3] == 0) {
          lVar7 = *unaff_x20 - unaff_x20[2];
          if (SCARRY8(unaff_x20[1],lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b500);
            (*pcVar2)();
          }
          *unaff_x20 = unaff_x20[2];
          unaff_x20[1] = unaff_x20[1] + lVar7;
          func_0x00010454c42c();
          if (unaff_x21 != 0) {
            return;
          }
          if (((ulong)param_1 & 0xff00000000) == 0x100000000) {
            uVar9 = 1;
            goto LAB_10006b2ec;
          }
          func_0x00010454c1a4();
          unaff_x20[3] = *unaff_x20;
        }
        else {
          *unaff_x20 = unaff_x20[3];
        }
      }
      else {
        func_0x000104544464();
        if (unaff_x21 != 0) {
          return;
        }
        if (unaff_x20[3] == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b508);
          (*pcVar2)();
        }
        lVar4 = unaff_x20[2];
        lVar5 = unaff_x20[3] - lVar4;
        FUN_1008aa3d0();
        lVar7 = unaff_x20[0x10];
        uVar10 = unaff_x20[0x11];
        func_0x000100de78a0(lVar7,uVar10);
        FUN_1000b44c0(lVar7,uVar10);
        if (uVar10 >> 0x3c < 0xf) {
          FUN_1000b44c0(0,0xf000000000000000);
          if (0xe < (ulong)unaff_x20[0x11] >> 0x3c) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b50c);
            (*pcVar2)();
          }
          func_0x000107c5ee44(lVar4,lVar5);
          func_0x00010006c090(lVar4,lVar5);
        }
        else {
          FUN_1000b44c0(unaff_x20[0x10],unaff_x20[0x11]);
          unaff_x20[0x10] = lVar4;
          unaff_x20[0x11] = lVar5;
        }
      }
    }
  }
  uVar10 = unaff_x20[1];
  if (uVar10 == 0) {
    return;
  }
  pbVar11 = (byte *)*unaff_x20;
  unaff_x20[2] = (long)pbVar11;
  unaff_x20[3] = 0;
  bVar1 = *pbVar11;
  param_1 = (undefined1 *)(ulong)(bVar1 & 7);
  FUN_10006b5e8();
  uVar3 = (uint)param_1;
  if ((uVar3 & 0xff) != 6) {
    *(char *)((long)unaff_x20 + 0x21) = (char)param_1;
    if ((char)bVar1 < '\0') {
      uVar6 = (ulong)(bVar1 >> 3 & 0xf);
      unaff_x20[5] = uVar6;
      if (1 < (long)uVar10) {
        uVar8 = (ulong)(char)pbVar11[1];
        if (-1 < (long)uVar8) {
          *unaff_x20 = (long)(pbVar11 + 2);
          unaff_x20[1] = uVar10 - 2;
          param_1 = (undefined1 *)(uVar6 | uVar8 << 4);
          goto LAB_10006b29c;
        }
        uVar6 = uVar6 | (uVar8 & 0x7f) << 4;
        unaff_x20[5] = uVar6;
        if (uVar10 != 2) {
          bVar1 = pbVar11[2];
          param_1 = (undefined1 *)(uVar6 | (ulong)((int)(char)bVar1 & 0x7f) << 0xb);
          unaff_x20[5] = (long)param_1;
          if (-1 < (char)bVar1) {
            pbVar11 = pbVar11 + 3;
            lVar7 = uVar10 - 3;
LAB_10006b43c:
            *unaff_x20 = (long)pbVar11;
            unaff_x20[1] = lVar7;
            goto LAB_10006b2a0;
          }
          if (3 < uVar10) {
            bVar1 = pbVar11[3];
            param_1 = (undefined1 *)((ulong)param_1 | (ulong)((int)(char)bVar1 & 0x7f) << 0x12);
            unaff_x20[5] = (long)param_1;
            if (-1 < (char)bVar1) {
              *unaff_x20 = (long)(pbVar11 + 4);
              unaff_x20[1] = uVar10 - 4;
              goto LAB_10006b2a0;
            }
            if ((uVar10 != 4) && ((ulong)pbVar11[4] < 0x10)) {
              param_1 = (undefined1 *)((ulong)param_1 | (ulong)pbVar11[4] << 0x19);
              unaff_x20[5] = (long)param_1;
              pbVar11 = pbVar11 + 5;
              lVar7 = uVar10 - 5;
              goto LAB_10006b43c;
            }
          }
        }
      }
    }
    else {
      *unaff_x20 = (long)(pbVar11 + 1);
      if (SBORROW8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10006b4fc);
        (*pcVar2)();
      }
      unaff_x20[1] = uVar10 - 1;
      param_1 = (undefined1 *)(ulong)(bVar1 >> 3);
LAB_10006b29c:
      unaff_x20[5] = (long)param_1;
LAB_10006b2a0:
      if (param_1 != (undefined1 *)0x0) {
        *(undefined1 *)(unaff_x20 + 4) = 0;
        if ((uVar3 & 0xff) != 4) {
          return;
        }
        if (((char)unaff_x20[0xc] != '\x01') && ((undefined1 *)unaff_x20[0xb] == param_1)) {
          return;
        }
      }
    }
  }
  uVar9 = 3;
LAB_10006b2ec:
  func_0x00010454d3c4();
  func_0x000107c613f8(&UNK_110786678,param_1,0,0);
  *param_1 = uVar9;
  func_0x000107c61654();
  return;
}



/* Entry: 10006b50c; end: 10006b51f;  */

void FUN_10006b50c(void)

{
  FUN_10006b154();
  return;
}



/* Entry: 10006b520; end: 10006b5d3;  */

/* WARNING: Removing unreachable block (ram,0x00010006b5d0) */

void FUN_10006b520(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 6) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10006b5fc();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10006b5d4; end: 10006b5e7;  */

void FUN_10006b5d4(void)

{
  FUN_10006b520();
  return;
}



/* Entry: 10006b5e8; end: 10006b5fb;  */

byte FUN_10006b5e8(byte param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 10006b5fc; end: 10006b67b;  */

void FUN_10006b5fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd162c0;
  func_0x000107c61520(&DAT_10dd162c0,&UNK_110785f30);
  puRam0000000113084ad0 = puVar1;
  return;
}



/* Entry: 10006b67c; end: 10006b69f;  */

void FUN_10006b67c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010006b63c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10006b6a0; end: 10006b86f;  */

/* WARNING: Removing unreachable block (ram,0x00010006b7e0) */

void FUN_10006b6a0(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_120 [8];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar5 - extraout_x12;
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_58 = 0;
    puVar2 = &uStack_58;
    FUN_10006b958();
    if (unaff_x21 == 0) {
      (**(code **)(param_3 + 0x10))(lVar4,param_2,param_3);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar1 = *(undefined1 *)(unaff_x20 + 0x70);
      uStack_e8 = 1;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_b0 = 0;
      uStack_a8 = 1;
      uStack_80 = 0xf000000000000000;
      uStack_88 = 0;
      uStack_70 = 0xf000000000000000;
      uStack_78 = 0;
      uStack_100 = uStack_58;
      uStack_f0 = 0;
      puStack_108 = puVar2;
      puStack_f8 = puVar2;
      func_0x00010006ae30(unaff_x20 + 0x30,&uStack_d8);
      uStack_90 = *(undefined8 *)(unaff_x20 + 0x78);
      uStack_a0 = uVar3;
      uStack_98 = uVar1;
      FUN_10006afb0(lVar4,param_2,param_3);
      (**(code **)(lVar6 + 0x10))(puVar5,lVar4,param_2);
      uVar3 = 0;
      func_0x000107c5fc80(0,param_2);
      func_0x000107c5fc78(puVar5,uVar3);
      (**(code **)(lVar6 + 8))(lVar4,param_2);
      func_0x00010006c134(&puStack_108);
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 10006b870; end: 10006b883;  */

void FUN_10006b870(void)

{
  FUN_10006b6a0();
  return;
}



/* Entry: 10006b884; end: 10006b957;  */

void FUN_10006b884(undefined1 *param_1)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined1 uVar6;
  
  lVar4 = unaff_x20[1];
  uVar2 = lVar4 - 1;
  if (lVar4 < 1) {
    uVar6 = 1;
  }
  else {
    pcVar3 = (char *)*unaff_x20;
    param_1 = (undefined1 *)(long)*pcVar3;
    if (-1 < (long)param_1) {
      *unaff_x20 = pcVar3 + 1;
LAB_10006b8b0:
      unaff_x20[1] = uVar2;
      return;
    }
    if (lVar4 == 1) {
      uVar6 = 3;
    }
    else {
      param_1 = (undefined1 *)((ulong)param_1 & 0x7f);
      pcVar3 = pcVar3 + 2;
      uVar6 = 3;
      uVar5 = 7;
      do {
        param_1 = (undefined1 *)
                  (((ulong)(byte)pcVar3[-1] & 0x7f) << (uVar5 & 0x3f) | (ulong)param_1);
        if (-1 < pcVar3[-1]) {
          uVar2 = uVar2 - 1;
          *unaff_x20 = pcVar3;
          goto LAB_10006b8b0;
        }
        if (uVar2 < 2) break;
        pcVar3 = pcVar3 + 1;
        uVar2 = uVar2 - 1;
        bVar1 = uVar5 < 0x39;
        uVar5 = uVar5 + 7;
      } while (bVar1);
    }
  }
  func_0x00010454d3c4();
  func_0x000107c613f8(&UNK_110786678,param_1,0,0);
  *param_1 = uVar6;
  func_0x000107c61654();
  return;
}



/* Entry: 10006b958; end: 10006b9fb;  */

long FUN_10006b958(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long extraout_x8_00;
  undefined1 uVar5;
  long *unaff_x20;
  long unaff_x21;
  
  puVar2 = param_1;
  FUN_10006b884();
  if (unaff_x21 != 0) {
    return extraout_x8;
  }
  if (puVar2 < (ulong *)0x7fffffff) {
    uVar3 = unaff_x20[1];
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10006b9fc);
      (*pcVar1)();
    }
    if (uVar3 == 0) {
      if (puVar2 != (ulong *)0x0) goto LAB_10006b9b4;
    }
    else if (uVar3 < puVar2) {
LAB_10006b9b4:
      uVar5 = 1;
      goto LAB_10006b9b8;
    }
    *param_1 = (ulong)puVar2;
    lVar4 = *unaff_x20;
    *unaff_x20 = lVar4 + (long)puVar2;
    unaff_x20[1] = uVar3 - (long)puVar2;
  }
  else {
    uVar5 = 3;
LAB_10006b9b8:
    func_0x00010454d3c4();
    func_0x000107c613f8(&UNK_110786678,puVar2,0,0);
    *(undefined1 *)puVar2 = uVar5;
    func_0x000107c61654();
    lVar4 = extraout_x8_00;
  }
  return lVar4;
}



/* Entry: 10006b9fc; end: 10006ba2f;  */

void FUN_10006b9fc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 10006ba30; end: 10006bb93;  */

/* WARNING: Removing unreachable block (ram,0x00010006bb78) */

void FUN_10006ba30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x15) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x90);
            lVar1 = unaff_x20 + 0x18;
          }
          else {
            if (lVar1 != 4) goto LAB_10006baa8;
            pcVar3 = *(code **)(param_3 + 0x90);
            lVar1 = unaff_x20 + 0x20;
          }
          goto LAB_10006ba98;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x00010006bba8();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_10006ba98;
        }
      }
      else {
        if (lVar1 < 0x66) {
          if (lVar1 == 0x15) {
            pcVar3 = *(code **)(param_3 + 0x78);
            lVar1 = unaff_x20 + 0x28;
          }
          else {
            if (lVar1 != 0x65) goto LAB_10006baa8;
            pcVar3 = *(code **)(param_3 + 0x90);
            lVar1 = unaff_x20 + 0x30;
          }
        }
        else if (lVar1 == 0x66) {
          pcVar3 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x38;
        }
        else {
          if (lVar1 != 0x67) goto LAB_10006baa8;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x40;
        }
LAB_10006ba98:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_10006baa8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10006bb94; end: 10006bbe7;  */

void FUN_10006bb94(void)

{
  FUN_10006ba30();
  return;
}



/* Entry: 10006bbe8; end: 10006bbfb;  */

void FUN_10006bbe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10006bc2c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10006bcb0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10006bbfc; end: 10006bc2b;  */

void FUN_10006bbfc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10006bc2c; end: 10006bc6b;  */

void FUN_10006bc2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16248;
  func_0x000107c61520(&UNK_10dd16248,&UNK_110785eb8);
  puRam0000000113084ae0 = puVar1;
  return;
}



/* Entry: 10006bc6c; end: 10006bc6f;  */

void FUN_10006bc6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16288;
  func_0x000107c61520(&UNK_10dd16288,&UNK_110785eb8);
  puRam0000000113084b00 = puVar1;
  return;
}



/* Entry: 10006bc70; end: 10006bcef;  */

void FUN_10006bc70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16288;
  func_0x000107c61520(&UNK_10dd16288,&UNK_110785eb8);
  puRam0000000113084b00 = puVar1;
  return;
}



/* Entry: 10006bcf0; end: 10006be4b;  */

void FUN_10006bcf0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  
  lVar1 = 0;
  func_0x000107c60188();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  lVar7 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    lVar2 = lVar1;
    FUN_10006b884();
    if (unaff_x21 == 0) {
      (**(code **)(param_3 + 0x20))(puVar4,(long)(int)lVar2,param_2,param_3);
      puVar3 = puVar4;
      (**(code **)(lVar7 + 0x30))(puVar4,1,param_2);
      if ((int)puVar3 == 1) {
        (**(code **)(lVar8 + 8))(puVar4,lVar1);
      }
      else {
        (**(code **)(lVar7 + 8))(param_1,param_2);
        pcVar6 = *(code **)(lVar7 + 0x20);
        (*pcVar6)(lVar5,puVar4,param_2);
        (*pcVar6)(param_1,lVar5,param_2);
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
    }
  }
  return;
}



/* Entry: 10006be4c; end: 10006be5f;  */

void FUN_10006be4c(void)

{
  FUN_10006bcf0();
  return;
}



/* Entry: 10006be60; end: 10006be6b;  */

void FUN_10006be60(void)

{
  return;
}



/* Entry: 10006be6c; end: 10006be9b;  */

void FUN_10006be6c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10006be60();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10006be9c; end: 10006bed3;  */

int FUN_10006be9c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10006bed4; end: 10006bf0b;  */

void FUN_10006bed4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(char *)(unaff_x20 + 0x21) == '\0') && (puVar1 = param_1, FUN_10006b884(), unaff_x21 == 0))
  {
    *param_1 = puVar1;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
  }
  return;
}



/* Entry: 10006bf0c; end: 10006bf33;  */

void FUN_10006bf0c(void)

{
  FUN_10006bed4();
  return;
}



/* Entry: 10006bf34; end: 10006bf6b;  */

void FUN_10006bf34(undefined4 *param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = SUB84(param_1,0);
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    FUN_10006b884();
    if (unaff_x21 == 0) {
      *param_1 = uVar1;
      *(undefined1 *)(unaff_x20 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 10006bf6c; end: 10006bf93;  */

void FUN_10006bf6c(void)

{
  FUN_10006bf34();
  return;
}



/* Entry: 10006bf94; end: 10006c00b;  */

undefined8 * FUN_10006bf94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[10];
  uVar1 = param_2[0xb];
  func_0x000107c61434();
  FUN_10006c00c(uVar2,uVar1);
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 10006c00c; end: 10006c04b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10006c00c(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 10006c04c; end: 10006c067;  */

void FUN_10006c04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Entry: 10006c068; end: 10006c15f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10006c068(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x58) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x58) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10006c160; end: 10006c167;  */

undefined8 FUN_10006c160(void)

{
  return 1;
}



/* Entry: 10006c168; end: 10006c1a7;  */

undefined8 FUN_10006c168(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10006c1a8; end: 10006c1c7;  */

undefined1  [16] FUN_10006c1a8(void)

{
  return ZEXT816(0x110785fd0);
}



/* Entry: 10006c1c8; end: 10006c247;  */

void FUN_10006c1c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61524(param_1,0,2,&puStack_30,param_1 + 0x58);
  }
  return;
}


