/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a14ca80; end: 10a14cbcb;  */

void FUN_10a14ca80(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6
                  )

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = (ulong)*(uint *)(param_5 + 0xbc);
  fVar3 = *(float *)(param_5 + 0xac);
  uVar4 = *(undefined8 *)(param_5 + 0xb0);
  func_0x0001096bb814(param_5 + 0x110);
  fVar2 = param_4 * param_4 + param_1 * param_1 + param_2 * param_2 + param_3 * param_3;
  if (fVar2 == 0.0) {
    param_4 = 1.0;
    param_1 = 0.0;
    param_2 = 0.0;
    param_3 = 0.0;
  }
  else {
    fVar2 = 1.0 / SQRT(fVar2);
    param_4 = param_4 * fVar2;
    param_1 = param_1 * fVar2;
    param_2 = param_2 * fVar2;
    param_3 = param_3 * fVar2;
  }
  fVar2 = (float)uVar4;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  _atan2f(uVar1,fVar3);
  uStack_ac = *(undefined4 *)(param_5 + 0xb8);
  uStack_a8 = *(undefined4 *)(param_5 + 200);
  uStack_a4 = *(undefined4 *)(param_5 + 0xd8);
  fStack_a0 = param_1;
  fStack_9c = param_2;
  fStack_98 = param_3;
  fStack_94 = param_4;
  func_0x0001096db124(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5),&uStack_90,&fStack_a0,
                      &uStack_ac);
  *(undefined8 *)(param_6 + 0x14) = uStack_88;
  *(undefined8 *)(param_6 + 0xc) = uStack_90;
  *(undefined8 *)(param_6 + 0x24) = uStack_78;
  *(undefined8 *)(param_6 + 0x1c) = uStack_80;
  *(undefined8 *)(param_6 + 0x34) = uStack_68;
  *(undefined8 *)(param_6 + 0x2c) = uStack_70;
  *(undefined8 *)(param_6 + 0x119c) = *(undefined8 *)(param_5 + 0x180);
  FUN_10a14c934(uVar1,param_6,*(long *)(param_5 + 0xe0),
                *(long *)(param_5 + 0xe8) - *(long *)(param_5 + 0xe0) >> 2,*(long *)(param_5 + 0xf8)
                ,*(long *)(param_5 + 0x100) - *(long *)(param_5 + 0xf8) >> 2);
  return;
}



/* Entry: 10a14cbcc; end: 10a14cd17;  */

void FUN_10a14cbcc(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  float *pfVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar16 = *(undefined8 *)(param_1 + 0x44);
  uVar15 = *(undefined8 *)(param_1 + 0x3c);
  uVar19 = *(undefined8 *)(param_1 + 0x54);
  uVar18 = *(undefined8 *)(param_1 + 0x4c);
  uVar20 = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_2 + 0x2c) = uVar20;
  *(undefined8 *)(param_2 + 0x24) = uVar19;
  *(undefined8 *)(param_2 + 0x1c) = uVar18;
  *(undefined8 *)(param_2 + 0x14) = uVar16;
  *(undefined8 *)(param_2 + 0xc) = uVar15;
  FUN_10a14a824(param_2,*(long *)(param_1 + 0x70),
                *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 2);
  lVar5 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90) - lVar5 >> 2;
  if (lVar3 == 0) {
    _memcpy(param_2 + 0x654,param_2 + 0xf0,0x564);
  }
  else {
    lVar4 = 0;
    do {
      if (lVar4 == 0xf) goto LAB_10a14aae0;
      *(undefined4 *)(param_2 + 0x111c + lVar4 * 4) = *(undefined4 *)(lVar5 + lVar4 * 4);
      lVar4 = lVar4 + 1;
    } while (lVar3 != lVar4);
    _memcpy(param_2 + 0x654,param_2 + 0xf0,0x564);
    lVar4 = 0;
    lVar6 = *(long *)(param_2 + 0x58);
    lVar7 = 0x24;
    lVar8 = 0x8c;
    do {
      if (lVar4 == lVar6) goto LAB_10a14aae0;
      lVar12 = *(long *)(param_2 + 0x50);
      lVar9 = lVar12 + lVar4 * 0x1b8;
      if (0 < *(int *)(lVar9 + 0x20)) {
        lVar10 = 0;
        pfVar13 = (float *)(lVar12 + lVar8);
        puVar11 = (uint *)(lVar12 + lVar7);
        do {
          if (lVar10 == 0x18) goto LAB_10a14aae0;
          if (0x72 < *puVar11) goto LAB_10a14aae0;
          puVar2 = (undefined8 *)(param_2 + 0x654 + (ulong)*puVar11 * 0xc);
          fVar14 = *(float *)(lVar5 + lVar4 * 4);
          fVar17 = *pfVar13;
          *puVar2 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar13 + -2) >> 0x20) * fVar14 +
                             (float)((ulong)*puVar2 >> 0x20),
                             (float)*(undefined8 *)(pfVar13 + -2) * fVar14 + (float)*puVar2);
          *(float *)(puVar2 + 1) = fVar14 * fVar17 + *(float *)(puVar2 + 1);
          lVar10 = lVar10 + 1;
          pfVar13 = pfVar13 + 3;
          puVar11 = puVar11 + 1;
        } while (lVar10 < *(int *)(lVar9 + 0x20));
      }
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + 0x1b8;
      lVar8 = lVar8 + 0x1b8;
    } while (lVar4 != lVar3);
  }
  if ((*(char *)(param_2 + 0x1188) == '\x01') && (lVar5 = *(long *)(param_2 + 0x40), lVar5 != 0)) {
    puVar2 = (undefined8 *)(param_2 + 3000);
    lVar3 = 0x73;
    do {
      if (lVar3 == 0) {
LAB_10a14aae0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14aae4);
        (*pcVar1)();
      }
      *puVar2 = *(undefined8 *)((long)puVar2 + -0x564);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((long)puVar2 + -0x55c);
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      lVar3 = lVar3 + -1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10a14cd18; end: 10a14cdf7;  */

void FUN_10a14cd18(float param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = 0xfffffffffffffffc;
  puVar2 = (undefined8 *)(param_2 + 0x110);
  do {
    puVar2[1] = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * param_1,(float)puVar2[1] * param_1);
    *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * param_1,(float)*puVar2 * param_1);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 8);
  uVar3 = 0xfffffffffffffffc;
  puVar2 = (undefined8 *)(param_2 + 0xac);
  do {
    puVar2[1] = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * param_1,(float)puVar2[1] * param_1);
    *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * param_1,(float)*puVar2 * param_1);
    uVar3 = uVar3 + 4;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 8);
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  for (puVar2 = *(undefined8 **)(param_2 + 0x10); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * param_1,(float)*puVar2 * param_1);
  }
  *(ulong *)(param_2 + 0x180) =
       CONCAT44((int)(param_1 * (float)*(int *)(param_2 + 0x184)),
                (int)(param_1 * (float)*(int *)(param_2 + 0x180)));
  return;
}



/* Entry: 10a14cdf8; end: 10a14ce3b;  */

void FUN_10a14cdf8(long param_1)

{
  float fStack_18;
  float fStack_14;
  
  fStack_18 = (float)*(int *)(param_1 + 0x180);
  fStack_14 = (float)*(int *)(param_1 + 0x184);
  func_0x00010a14cda0(*(long *)(param_1 + 0x10),
                      *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3,&fStack_18);
  return;
}



/* Entry: 10a14ce3c; end: 10a14d0b3;  */

void FUN_10a14ce3c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined1 uStack_79;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  long *plStack_40;
  byte bStack_38;
  
  (**(code **)(*param_2 + 0x1d8))(&lStack_48,param_2,&PTR_DAT_110ba7c00);
  if ((bStack_38 & 1) == 0) {
    uStack_79 = 9;
    uStack_90 = 0x6b72616d646e616c;
    uStack_88 = 0x73;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_78,&UNK_10f63b9fc,&uStack_90);
    FUN_10a012db0(auStack_60,auStack_78,&UNK_10f63ba05);
    FUN_10a0029c0(auStack_60);
  }
  else {
    uVar6 = (ulong)plStack_40 >> 3;
    if (((ulong)plStack_40 & 7) != 0) {
      uVar6 = uVar6 + 1;
    }
    func_0x0001096b5544(param_1 + 0x10,uVar6);
    if ((bStack_38 & 1) != 0) {
      _memcpy(*(undefined8 *)(param_1 + 0x10),lStack_48,plStack_40);
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110ba7c20,0);
      *(char *)(param_1 + 0x28) = (char)plVar5;
      (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110ba7c40,param_1 + 0x30);
      FUN_10a14d0b4(param_1 + 0x30);
      (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110ba7c60,param_1 + 0xa0);
      FUN_10a14d0b4(param_1 + 0xa0);
      FUN_10a14be60(param_1);
      (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110ba7c80,param_1 + 0x140);
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110ba82d8);
      if ((int)plVar5 == 0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = param_2;
        FUN_10a1030d8(param_2,&PTR_DAT_110ba82d8);
      }
      *(long **)(param_1 + 0x180) = plVar5;
      lStack_48 = param_1 + 0x188;
      plStack_40 = (long *)0x2;
      FUN_10a0ff254(param_2,&PTR_DAT_110ba7ca0,&lStack_48,FUN_10a14f6c4);
      lStack_48 = param_1 + 400;
      plStack_40 = (long *)0x2;
      FUN_10a0ff254(param_2,&PTR_DAT_110ba7cc0,&lStack_48,FUN_10a14f6c4);
      lStack_48 = 0;
      plStack_40 = (long *)0x0;
      func_0x00010a14ccb4(param_1 + 0x198,&lStack_48);
      plVar5 = plStack_40;
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a14d068);
  (*pcVar4)();
}



/* Entry: 10a14d0b4; end: 10a14d0e7;  */

ulong * FUN_10a14d0b4(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long unaff_x22;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar3 = (ulong *)(param_1 + 0x58);
  uVar4 = *puVar3;
  if ((uVar4 == *(ulong *)(param_1 + 0x60)) ||
     (uVar7 = *(ulong *)(param_1 + 0x60) - uVar4, uVar7 == 0x38)) {
    return puVar3;
  }
  if (uVar7 < 0x2d) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14d0e8);
    (*pcVar2)();
  }
  puVar5 = (ulong *)(uVar4 + 0x2c);
  puVar6 = (ulong *)(uVar4 + 0x2c);
  puVar9 = *(ulong **)(param_1 + 0x60);
  if (puVar9 < *(ulong **)(param_1 + 0x68)) {
    puVar10 = puVar5;
    if (puVar5 == puVar9) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar6;
      *(undefined4 **)(param_1 + 0x60) = (undefined4 *)((long)puVar9 + 4);
    }
    else {
      puVar3 = puVar9;
      if ((ulong *)((long)puVar9 - 4U) < puVar9) {
        *(int *)puVar9 = (int)*(ulong *)((long)puVar9 - 4U);
        puVar3 = (ulong *)((long)puVar9 + 4);
      }
      *(ulong **)(param_1 + 0x60) = puVar3;
      if (puVar9 != (ulong *)(uVar4 + 0x30)) {
        _memmove((ulong *)(uVar4 + 0x30),puVar5);
        puVar3 = *(ulong **)(param_1 + 0x60);
      }
      if (puVar3 < puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14d414);
        (*pcVar2)();
      }
      lVar11 = 4;
      if (puVar3 <= puVar6) {
        lVar11 = 0;
      }
      *(undefined4 *)puVar5 = *(undefined4 *)((long)puVar6 + lVar11);
    }
  }
  else {
    puVar12 = (ulong *)*puVar3;
    uVar4 = ((long)puVar9 - (long)puVar12 >> 2) + 1;
    if (uVar4 >> 0x3e != 0) {
      FUN_10a001cf8();
      if (unaff_x22 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar9 = extraout_x8;
      FUN_10a05077c();
      if (puVar5 != (ulong *)0x0) {
        puVar12 = (ulong *)0x0;
        uVar14 = NEON_scvtf(puVar6,4);
        uVar15 = NEON_fmov(0x3f800000,4);
        do {
          if ((ulong *)((long)(puVar9[1] - *puVar9) >> 3) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14d4a8);
            (*pcVar2)();
          }
          *(ulong *)(*puVar9 + (long)puVar12 * 8) =
               CONCAT44(((float)((ulong)uVar15 >> 0x20) / (float)((ulong)uVar14 >> 0x20)) *
                        (float)(puVar3[(long)puVar12] >> 0x20),
                        ((float)uVar15 / (float)uVar14) * (float)puVar3[(long)puVar12]);
          puVar12 = (ulong *)((long)puVar12 + 1);
        } while (puVar5 != puVar12);
      }
      return puVar9;
    }
    uVar13 = (long)puVar5 - (long)puVar12;
    uVar8 = (long)*(ulong **)(param_1 + 0x68) - (long)puVar12;
    uVar7 = (long)uVar8 >> 1;
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar9 = (ulong *)0x0;
      uVar7 = 0;
    }
    else {
      puVar9 = puVar3;
      FUN_10a001d0c();
      uVar7 = uVar7 << 2;
    }
    puVar10 = (ulong *)((long)puVar9 + uVar13);
    lVar11 = (long)puVar9 + uVar7;
    if (uVar13 == uVar7) {
      if ((long)uVar13 < 1) {
        uVar13 = (long)uVar13 >> 1;
        if (puVar5 == puVar12) {
          uVar13 = 1;
        }
        puVar12 = puVar3;
        uVar4 = uVar13;
        FUN_10a001d0c();
        puVar10 = (ulong *)((long)puVar12 + (uVar13 & 0xfffffffffffffffc));
        lVar11 = (long)puVar12 + uVar4 * 4;
        if (puVar9 != (ulong *)0x0) {
          __ZdlPv(puVar9);
        }
      }
      else {
        puVar10 = (ulong *)((long)puVar10 - ((uVar13 >> 1) + 2 & 0xfffffffffffffffc));
      }
    }
    *(undefined4 *)puVar10 = *(undefined4 *)puVar6;
    _memcpy((undefined4 *)((long)puVar10 + 4U),puVar5,*(long *)(param_1 + 0x60) - (long)puVar5);
    lVar1 = *(long *)(param_1 + 0x60);
    *(ulong **)(param_1 + 0x60) = puVar5;
    uVar7 = (long)puVar10 - ((long)puVar5 - *puVar3);
    _memcpy(uVar7);
    uVar4 = *puVar3;
    *puVar3 = uVar7;
    *(long *)(param_1 + 0x60) = (long)((long)puVar10 + 4U) + (lVar1 - (long)puVar5);
    *(long *)(param_1 + 0x68) = lVar11;
    if (uVar4 != 0) {
      __ZdlPv();
    }
  }
  return puVar10;
}



/* Entry: 10a14d0e8; end: 10a14d233;  */

void FUN_10a14d0e8(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110ba7c00,*(long *)(param_1 + 0x10),
             *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110ba7c20,*(undefined1 *)(param_1 + 0x28));
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110ba7c40,param_1 + 0x30);
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110ba7c60,param_1 + 0xa0);
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110ba7c80,param_1 + 0x140);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110ba82d8);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_width_110ba82b8,*(undefined4 *)(param_1 + 0x180));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_height_110ba8298,*(undefined4 *)(param_1 + 0x184));
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110ba7ca0,param_1 + 0x188,8);
                    /* WARNING: Could not recover jumptable at 0x00010a14d230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110ba7cc0,param_1 + 400,8);
  return;
}



/* Entry: 10a14d234; end: 10a14d42f;  */

long * FUN_10a14d234(ulong *param_1,long *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long *extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x22;
  ulong *puVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  plVar4 = (long *)param_1[1];
  if (plVar4 < (long *)param_1[2]) {
    plVar10 = param_2;
    if (param_2 == plVar4) {
      *(int *)plVar4 = (int)*param_3;
      param_1[1] = (ulong)((long)plVar4 + 4);
    }
    else {
      plVar8 = plVar4;
      if ((long *)((long)plVar4 - 4U) < plVar4) {
        *(int *)plVar4 = (int)*(long *)((long)plVar4 - 4U);
        plVar8 = (long *)((long)plVar4 + 4);
      }
      param_1[1] = (ulong)plVar8;
      if (plVar4 != (long *)((long)param_2 + 4U)) {
        _memmove((long *)((long)param_2 + 4U),param_2);
        plVar8 = (long *)param_1[1];
      }
      if (plVar8 < param_2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14d414);
        (*pcVar2)();
      }
      lVar1 = 4;
      if (plVar8 <= param_3 || param_3 < param_2) {
        lVar1 = 0;
      }
      *(undefined4 *)param_2 = *(undefined4 *)((long)param_3 + lVar1);
    }
  }
  else {
    plVar8 = (long *)*param_1;
    uVar5 = ((long)plVar4 - (long)plVar8 >> 2) + 1;
    if (uVar5 >> 0x3e != 0) {
      FUN_10a001cf8();
      if (unaff_x22 != 0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      plVar4 = extraout_x8;
      FUN_10a05077c();
      if (param_2 != (long *)0x0) {
        plVar8 = (long *)0x0;
        uVar12 = NEON_scvtf(param_3,4);
        uVar13 = NEON_fmov(0x3f800000,4);
        do {
          if ((long *)(plVar4[1] - *plVar4 >> 3) <= plVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a14d4a8);
            (*pcVar2)();
          }
          *(ulong *)(*plVar4 + (long)plVar8 * 8) =
               CONCAT44(((float)((ulong)uVar13 >> 0x20) / (float)((ulong)uVar12 >> 0x20)) *
                        (float)(param_1[(long)plVar8] >> 0x20),
                        ((float)uVar13 / (float)uVar12) * (float)param_1[(long)plVar8]);
          plVar8 = (long *)((long)plVar8 + 1);
        } while (param_2 != plVar8);
      }
      return plVar4;
    }
    uVar11 = (long)param_2 - (long)plVar8;
    uVar6 = (long)param_1[2] - (long)plVar8;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar9 = (ulong *)0x0;
      uVar7 = 0;
    }
    else {
      puVar9 = param_1;
      FUN_10a001d0c();
      uVar7 = uVar7 << 2;
    }
    plVar10 = (long *)((long)puVar9 + uVar11);
    uVar5 = (long)puVar9 + uVar7;
    if (uVar11 == uVar7) {
      if ((long)uVar11 < 1) {
        uVar11 = (long)uVar11 >> 1;
        if (param_2 == plVar8) {
          uVar11 = 1;
        }
        puVar3 = param_1;
        uVar5 = uVar11;
        FUN_10a001d0c();
        plVar10 = (long *)((long)puVar3 + (uVar11 & 0xfffffffffffffffc));
        uVar5 = (long)puVar3 + uVar5 * 4;
        if (puVar9 != (ulong *)0x0) {
          __ZdlPv(puVar9);
        }
      }
      else {
        plVar10 = (long *)((long)plVar10 - ((uVar11 >> 1) + 2 & 0xfffffffffffffffc));
      }
    }
    *(int *)plVar10 = (int)*param_3;
    _memcpy((undefined4 *)((long)plVar10 + 4U),param_2,param_1[1] - (long)param_2);
    uVar7 = param_1[1];
    param_1[1] = (ulong)param_2;
    uVar6 = (long)plVar10 - ((long)param_2 - *param_1);
    _memcpy(uVar6);
    uVar11 = *param_1;
    *param_1 = uVar6;
    param_1[1] = (long)((long)plVar10 + 4U) + (uVar7 - (long)param_2);
    param_1[2] = uVar5;
    if (uVar11 != 0) {
      __ZdlPv();
    }
  }
  return plVar10;
}



/* Entry: 10a14d430; end: 10a14d4a7;  */

void FUN_10a14d430(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_10a05077c();
  if (param_3 != 0) {
    uVar2 = 0;
    uVar3 = NEON_scvtf(param_4,4);
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      if ((ulong)(param_1[1] - *param_1 >> 3) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14d4a8);
        (*pcVar1)();
      }
      uVar5 = *(undefined8 *)(param_2 + uVar2 * 8);
      *(ulong *)(*param_1 + uVar2 * 8) =
           CONCAT44(((float)((ulong)uVar4 >> 0x20) / (float)((ulong)uVar3 >> 0x20)) *
                    (float)((ulong)uVar5 >> 0x20),((float)uVar4 / (float)uVar3) * (float)uVar5);
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}



/* Entry: 10a14d4a8; end: 10a14d6af;  */

void FUN_10a14d4a8(long param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_69;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_transform_110ba7ce0);
  func_0x00010aac2ce4(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x220))(param_2);
  (**(code **)(*param_2 + 0x1d8))(&uStack_38,param_2,&PTR_DAT_110ba7d00);
  if ((bStack_28 & 1) == 0) {
    uStack_69 = 10;
    uStack_78 = 0x7374;
    uStack_80 = 0x6e556570616873;
    uStack_79 = 0x69;
    uStack_76 = 0;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_68,&UNK_10f63b9fc,&uStack_80);
    FUN_10a012db0(auStack_50,auStack_68,&UNK_10f63ba05);
    FUN_10a0029c0(auStack_50);
  }
  else {
    uVar2 = uStack_30 >> 2;
    if ((uStack_30 & 3) != 0) {
      uVar2 = uVar2 + 1;
    }
    func_0x00010742a308(param_1 + 0x40,uVar2);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*(undefined8 *)(param_1 + 0x40),uStack_38,uStack_30);
      (**(code **)(*param_2 + 0x1d8))(&uStack_38,param_2,&PTR_DAT_110ba7d20);
      if ((bStack_28 & 1) == 0) {
        uStack_69 = 0xb;
        uStack_78 = 0x7469;
        uStack_76 = 0x73;
        uStack_80 = 0x556e6f69746361;
        uStack_79 = 0x6e;
        uStack_75 = 0;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_68,&UNK_10f63b9fc,&uStack_80);
        FUN_10a012db0(auStack_50,auStack_68,&UNK_10f63ba05);
        FUN_10a0029c0(auStack_50);
      }
      else {
        uVar2 = uStack_30 >> 2;
        if ((uStack_30 & 3) != 0) {
          uVar2 = uVar2 + 1;
        }
        func_0x00010742a308(param_1 + 0x58,uVar2);
        if ((bStack_28 & 1) != 0) {
          _memcpy(*(undefined8 *)(param_1 + 0x58),uStack_38,uStack_30);
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14d658);
  (*pcVar1)();
}



/* Entry: 10a14d6b0; end: 10a14d73f;  */

void FUN_10a14d6b0(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_transform_110ba7ce0);
  func_0x00010aac2d6c(param_2,param_1 + 0xc);
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110ba7d00,*(long *)(param_1 + 0x40),
             *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010a14d73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110ba7d20,*(long *)(param_1 + 0x58),
             *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58));
  return;
}



/* Entry: 10a14d740; end: 10a14d743;  */

void FUN_10a14d740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a14d744; end: 10a14d7e7;  */

void FUN_10a14d744(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba8440;
  puStack_28 = param_1 + 5;
  FUN_10a0426d8(&puStack_28);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 10a14d7e8; end: 10a14d7eb;  */

undefined8 * FUN_10a14d7e8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba8488;
  func_0x00010a14e208(param_1 + 0x33);
  param_1[0x28] = &PTR_FUN_110ba8440;
  puStack_28 = param_1 + 0x2d;
  FUN_10a0426d8(&puStack_28);
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  param_1[0x14] = &PTR_SUB_110ba84d0;
  if (param_1[0x1f] != 0) {
    param_1[0x20] = param_1[0x1f];
    __ZdlPv();
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  param_1[6] = &PTR_SUB_110ba84d0;
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a14d7ec; end: 10a14d7ff;  */

void FUN_10a14d7ec(void)

{
  FUN_10a14e140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a14d800; end: 10a14d943;  */

void FUN_10a14d800(void)

{
  return;
}



/* Entry: 10a14d944; end: 10a14d9b3;  */

void FUN_10a14d944(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_109ffe268(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a14d9b4; end: 10a14d9c7;  */

void FUN_10a14d9b4(undefined8 param_1,ulong param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar2 = 0x48;
  __Znwm();
  *plVar1 = lVar2;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2 + 0x48;
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    _memmove(lVar2,param_2,param_3);
  }
  plVar1[1] = lVar2 + param_3;
  return;
}



/* Entry: 10a14d9c8; end: 10a14d9fb;  */

void FUN_10a14d9c8(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x48;
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    _memmove(lVar1,param_2,param_3);
  }
  param_1[1] = lVar1 + param_3;
  return;
}



/* Entry: 10a14d9fc; end: 10a14da7b;  */

void FUN_10a14d9fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x48;
  param_3 = param_3 - param_2;
  if (param_3 != 0) {
    _memmove(lVar1,param_2,param_3);
  }
  param_1[1] = lVar1 + param_3;
  return;
}



/* Entry: 10a14da7c; end: 10a14dc9f;  */

long * FUN_10a14da7c(long *param_1,long *param_2,long *param_3,ulong param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  plVar3 = param_2;
  if (0 < param_5) {
    plVar1 = (long *)param_1[1];
    if (param_1[2] - (long)plVar1 >> 3 < param_5) {
      lVar10 = *param_1;
      uVar8 = param_5 + ((long)plVar1 - lVar10 >> 3);
      if (uVar8 >> 0x3d != 0) {
        FUN_10a050828();
        uVar8 = param_1[2];
        plVar1 = (long *)*param_1;
        plVar3 = param_1;
        if ((ulong)((long)(uVar8 - (long)plVar1) >> 3) < param_4) {
          plVar16 = param_1;
          plVar14 = param_2;
          plVar5 = param_3;
          uVar11 = param_4;
          if (plVar1 != (long *)0x0) {
            param_1[1] = (long)plVar1;
            __ZdlPv();
            uVar8 = 0;
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            plVar16 = plVar1;
          }
          if (param_4 >> 0x3d != 0) {
            FUN_10a050828();
            uVar8 = plVar16[2];
            plVar1 = (long *)*plVar16;
            plVar3 = plVar16;
            if ((ulong)((long)(uVar8 - (long)plVar1) >> 2) < uVar11) {
              plVar15 = plVar16;
              plVar4 = plVar14;
              plVar6 = plVar5;
              uVar7 = uVar11;
              if (plVar1 != (long *)0x0) {
                plVar16[1] = (long)plVar1;
                __ZdlPv();
                uVar8 = 0;
                *plVar16 = 0;
                plVar16[1] = 0;
                plVar16[2] = 0;
                plVar15 = plVar1;
              }
              if (uVar11 >> 0x3e != 0) {
                FUN_10a001cf8();
                uVar8 = plVar15[2];
                plVar1 = (long *)*plVar15;
                plVar3 = plVar15;
                if ((ulong)((long)(uVar8 - (long)plVar1) >> 4) < uVar7) {
                  plVar16 = plVar15;
                  plVar14 = plVar4;
                  plVar5 = plVar6;
                  uVar11 = uVar7;
                  if (plVar1 != (long *)0x0) {
                    plVar15[1] = (long)plVar1;
                    __ZdlPv();
                    uVar8 = 0;
                    *plVar15 = 0;
                    plVar15[1] = 0;
                    plVar15[2] = 0;
                    plVar16 = plVar1;
                  }
                  if (uVar7 >> 0x3c != 0) {
                    FUN_10a14d9b4();
                    if ((ulong)plVar14 >> 0x3c == 0) {
                      plVar3 = plVar16;
                      FUN_10a14d9c8();
                      *plVar16 = (long)plVar3;
                      plVar16[1] = (long)plVar3;
                      plVar16[2] = (long)(plVar3 + (long)plVar14 * 2);
                      return plVar3;
                    }
                    FUN_10a14d9b4();
                    plVar3 = plVar16;
                    if (uVar11 != 0) {
                      FUN_10a0ca600();
                      puVar9 = (undefined4 *)plVar16[1];
                      for (; plVar14 != plVar5; plVar14 = (long *)((long)plVar14 + 4)) {
                        *puVar9 = (int)*plVar14;
                        puVar9 = puVar9 + 1;
                      }
                      plVar16[1] = (long)puVar9;
                    }
                    return plVar3;
                  }
                  uVar11 = (long)uVar8 >> 3;
                  if ((ulong)((long)uVar8 >> 3) <= uVar7) {
                    uVar11 = uVar7;
                  }
                  if (0x7fffffffffffffef < uVar8) {
                    uVar11 = 0xfffffffffffffff;
                  }
                  FUN_10a14e018(plVar15,uVar11);
                  plVar1 = (long *)plVar15[1];
                  lVar10 = (long)plVar6 - (long)plVar4;
                  if (lVar10 != 0) {
                    plVar3 = plVar1;
                    _memmove(plVar1,plVar4,lVar10);
                  }
                  lVar10 = (long)plVar1 + lVar10;
                }
                else {
                  plVar16 = (long *)plVar15[1];
                  if ((ulong)((long)plVar16 - (long)plVar1 >> 4) < uVar7) {
                    lVar2 = (long)plVar4 + ((long)plVar16 - (long)plVar1);
                    if (plVar16 != plVar1) {
                      _memmove(plVar1,plVar4);
                      plVar16 = (long *)plVar15[1];
                      plVar3 = plVar1;
                    }
                    lVar10 = (long)plVar6 - lVar2;
                    if (lVar10 != 0) {
                      plVar3 = plVar16;
                      _memmove(plVar16,lVar2,lVar10);
                    }
                    lVar10 = (long)plVar16 + lVar10;
                  }
                  else {
                    lVar10 = (long)plVar6 - (long)plVar4;
                    if (lVar10 != 0) {
                      plVar3 = plVar1;
                      _memmove(plVar1,plVar4,lVar10);
                    }
                    lVar10 = (long)plVar1 + lVar10;
                  }
                }
                plVar15[1] = lVar10;
                return plVar3;
              }
              uVar7 = (long)uVar8 >> 1;
              if ((ulong)((long)uVar8 >> 1) <= uVar11) {
                uVar7 = uVar11;
              }
              if (0x7ffffffffffffffb < uVar8) {
                uVar7 = 0x3fffffffffffffff;
              }
              FUN_10a0ca600(plVar16,uVar7);
              plVar1 = (long *)plVar16[1];
              lVar10 = (long)plVar5 - (long)plVar14;
              if (lVar10 != 0) {
                plVar3 = plVar1;
                _memmove(plVar1,plVar14,lVar10);
              }
              lVar10 = (long)plVar1 + lVar10;
            }
            else {
              plVar15 = (long *)plVar16[1];
              if ((ulong)((long)plVar15 - (long)plVar1 >> 2) < uVar11) {
                lVar2 = (long)plVar14 + ((long)plVar15 - (long)plVar1);
                if (plVar15 != plVar1) {
                  _memmove(plVar1,plVar14);
                  plVar15 = (long *)plVar16[1];
                  plVar3 = plVar1;
                }
                lVar10 = (long)plVar5 - lVar2;
                if (lVar10 != 0) {
                  plVar3 = plVar15;
                  _memmove(plVar15,lVar2,lVar10);
                }
                lVar10 = (long)plVar15 + lVar10;
              }
              else {
                lVar10 = (long)plVar5 - (long)plVar14;
                if (lVar10 != 0) {
                  plVar3 = plVar1;
                  _memmove(plVar1,plVar14,lVar10);
                }
                lVar10 = (long)plVar1 + lVar10;
              }
            }
            plVar16[1] = lVar10;
            return plVar3;
          }
          uVar11 = (long)uVar8 >> 2;
          if ((ulong)((long)uVar8 >> 2) <= param_4) {
            uVar11 = param_4;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar11 = 0x1fffffffffffffff;
          }
          FUN_10a0507f0(param_1,uVar11);
          plVar1 = (long *)param_1[1];
          lVar10 = (long)param_3 - (long)param_2;
          if (lVar10 != 0) {
            plVar3 = plVar1;
            _memmove(plVar1,param_2,lVar10);
          }
          lVar10 = (long)plVar1 + lVar10;
        }
        else {
          plVar16 = (long *)param_1[1];
          if ((ulong)((long)plVar16 - (long)plVar1 >> 3) < param_4) {
            lVar2 = (long)param_2 + ((long)plVar16 - (long)plVar1);
            if (plVar16 != plVar1) {
              _memmove(plVar1,param_2);
              plVar16 = (long *)param_1[1];
              plVar3 = plVar1;
            }
            lVar10 = (long)param_3 - lVar2;
            if (lVar10 != 0) {
              plVar3 = plVar16;
              _memmove(plVar16,lVar2,lVar10);
            }
            lVar10 = (long)plVar16 + lVar10;
          }
          else {
            lVar10 = (long)param_3 - (long)param_2;
            if (lVar10 != 0) {
              plVar3 = plVar1;
              _memmove(plVar1,param_2,lVar10);
            }
            lVar10 = (long)plVar1 + lVar10;
          }
        }
        param_1[1] = lVar10;
        return plVar3;
      }
      uVar7 = param_1[2] - lVar10;
      uVar11 = (long)uVar7 >> 2;
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 == 0) {
        plVar1 = (long *)0x0;
      }
      else {
        plVar1 = param_1;
        FUN_10a05083c();
      }
      plVar3 = (long *)((long)plVar1 + ((long)param_2 - lVar10));
      lVar10 = param_5 << 3;
      plVar16 = plVar3;
      do {
        *plVar16 = *param_3;
        lVar10 = lVar10 + -8;
        plVar16 = plVar16 + 1;
        param_3 = param_3 + 1;
      } while (lVar10 != 0);
      _memcpy(plVar3 + param_5,param_2,param_1[1] - (long)param_2);
      lVar10 = param_1[1];
      param_1[1] = (long)param_2;
      lVar13 = (long)plVar3 - ((long)param_2 - *param_1);
      _memcpy(lVar13);
      lVar2 = *param_1;
      *param_1 = lVar13;
      param_1[1] = (long)(plVar3 + param_5) + (lVar10 - (long)param_2);
      param_1[2] = (long)(plVar1 + uVar11);
      if (lVar2 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar10 = (long)plVar1 - (long)param_2;
      if (lVar10 >> 3 < param_5) {
        lVar2 = param_4 - (lVar10 + (long)param_3);
        if (lVar2 != 0) {
          _memmove(plVar1,lVar10 + (long)param_3,lVar2);
        }
        plVar16 = (long *)((long)plVar1 + lVar2);
        param_1[1] = (long)plVar16;
        if (lVar10 >> 3 < 1) {
          return param_2;
        }
        plVar14 = plVar16;
        if (plVar16 + -param_5 < plVar1) {
          lVar12 = -(long)param_3;
          lVar13 = param_4 + (long)param_2;
          lVar2 = lVar13 + param_5 * -8;
          do {
            *(undefined8 *)(lVar13 + lVar12) = *(undefined8 *)(lVar2 + lVar12);
            lVar2 = lVar2 + 8;
            lVar13 = lVar13 + 8;
          } while ((long *)(lVar2 + lVar12) < plVar1);
          plVar14 = (long *)(lVar13 - (long)param_3);
        }
        param_1[1] = (long)plVar14;
        if (plVar16 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        if (plVar1 == param_2) {
          return param_2;
        }
      }
      else {
        plVar16 = plVar1;
        for (plVar14 = plVar1 + -param_5; plVar14 < plVar1; plVar14 = plVar14 + 1) {
          *plVar16 = *plVar14;
          plVar16 = plVar16 + 1;
        }
        param_1[1] = (long)plVar16;
        if (plVar1 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
        lVar10 = param_5 << 3;
      }
      _memmove(param_2,param_3,lVar10);
    }
  }
  return plVar3;
}



/* Entry: 10a14dca0; end: 10a14e017;  */

void FUN_10a14dca0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,ulong param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar8 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar8 - (long)puVar10) >> 3) < param_4) {
    puVar12 = param_1;
    puVar2 = param_2;
    puVar4 = param_3;
    uVar6 = param_4;
    if (puVar10 != (undefined8 *)0x0) {
      param_1[1] = puVar10;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar12 = puVar10;
    }
    if (param_4 >> 0x3d != 0) {
      FUN_10a050828();
      uVar8 = puVar12[2];
      puVar10 = (undefined8 *)*puVar12;
      if ((ulong)((long)(uVar8 - (long)puVar10) >> 2) < uVar6) {
        puVar11 = puVar12;
        puVar3 = puVar2;
        puVar5 = puVar4;
        uVar7 = uVar6;
        if (puVar10 != (undefined8 *)0x0) {
          puVar12[1] = puVar10;
          __ZdlPv();
          uVar8 = 0;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar11 = puVar10;
        }
        if (uVar6 >> 0x3e != 0) {
          FUN_10a001cf8();
          uVar8 = puVar11[2];
          puVar10 = (undefined8 *)*puVar11;
          if ((ulong)((long)(uVar8 - (long)puVar10) >> 4) < uVar7) {
            puVar12 = puVar11;
            puVar2 = puVar3;
            puVar4 = puVar5;
            uVar6 = uVar7;
            if (puVar10 != (undefined8 *)0x0) {
              puVar11[1] = puVar10;
              __ZdlPv();
              uVar8 = 0;
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar12 = puVar10;
            }
            if (uVar7 >> 0x3c != 0) {
              FUN_10a14d9b4();
              if ((ulong)puVar2 >> 0x3c == 0) {
                puVar10 = puVar12;
                FUN_10a14d9c8();
                *puVar12 = puVar10;
                puVar12[1] = puVar10;
                puVar12[2] = puVar10 + (long)puVar2 * 2;
                return;
              }
              FUN_10a14d9b4();
              if (uVar6 != 0) {
                FUN_10a0ca600();
                puVar3 = (undefined4 *)puVar12[1];
                for (; puVar2 != puVar4; puVar2 = puVar2 + 1) {
                  *puVar3 = *puVar2;
                  puVar3 = puVar3 + 1;
                }
                puVar12[1] = puVar3;
              }
              return;
            }
            uVar6 = (long)uVar8 >> 3;
            if ((ulong)((long)uVar8 >> 3) <= uVar7) {
              uVar6 = uVar7;
            }
            if (0x7fffffffffffffef < uVar8) {
              uVar6 = 0xfffffffffffffff;
            }
            FUN_10a14e018(puVar11,uVar6);
            lVar9 = puVar11[1];
            lVar1 = (long)puVar5 - (long)puVar3;
            if (lVar1 != 0) {
              _memmove(lVar9,puVar3,lVar1);
            }
            lVar9 = lVar9 + lVar1;
          }
          else {
            puVar12 = (undefined8 *)puVar11[1];
            if ((ulong)((long)puVar12 - (long)puVar10 >> 4) < uVar7) {
              lVar1 = (long)puVar3 + ((long)puVar12 - (long)puVar10);
              if (puVar12 != puVar10) {
                _memmove(puVar10,puVar3);
                puVar12 = (undefined8 *)puVar11[1];
              }
              lVar9 = (long)puVar5 - lVar1;
              if (lVar9 != 0) {
                _memmove(puVar12,lVar1,lVar9);
              }
              lVar9 = (long)puVar12 + lVar9;
            }
            else {
              lVar9 = (long)puVar5 - (long)puVar3;
              if (lVar9 != 0) {
                _memmove(puVar10,puVar3,lVar9);
              }
              lVar9 = (long)puVar10 + lVar9;
            }
          }
          puVar11[1] = lVar9;
          return;
        }
        uVar7 = (long)uVar8 >> 1;
        if ((ulong)((long)uVar8 >> 1) <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar7 = 0x3fffffffffffffff;
        }
        FUN_10a0ca600(puVar12,uVar7);
        lVar9 = puVar12[1];
        lVar1 = (long)puVar4 - (long)puVar2;
        if (lVar1 != 0) {
          _memmove(lVar9,puVar2,lVar1);
        }
        lVar9 = lVar9 + lVar1;
      }
      else {
        puVar11 = (undefined8 *)puVar12[1];
        if ((ulong)((long)puVar11 - (long)puVar10 >> 2) < uVar6) {
          lVar1 = (long)puVar2 + ((long)puVar11 - (long)puVar10);
          if (puVar11 != puVar10) {
            _memmove(puVar10,puVar2);
            puVar11 = (undefined8 *)puVar12[1];
          }
          lVar9 = (long)puVar4 - lVar1;
          if (lVar9 != 0) {
            _memmove(puVar11,lVar1,lVar9);
          }
          lVar9 = (long)puVar11 + lVar9;
        }
        else {
          lVar9 = (long)puVar4 - (long)puVar2;
          if (lVar9 != 0) {
            _memmove(puVar10,puVar2,lVar9);
          }
          lVar9 = (long)puVar10 + lVar9;
        }
      }
      puVar12[1] = lVar9;
      return;
    }
    uVar6 = (long)uVar8 >> 2;
    if ((ulong)((long)uVar8 >> 2) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_10a0507f0(param_1,uVar6);
    lVar9 = param_1[1];
    lVar1 = (long)param_3 - (long)param_2;
    if (lVar1 != 0) {
      _memmove(lVar9,param_2,lVar1);
    }
    lVar9 = lVar9 + lVar1;
  }
  else {
    puVar12 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar12 - (long)puVar10 >> 3) < param_4) {
      lVar1 = (long)param_2 + ((long)puVar12 - (long)puVar10);
      if (puVar12 != puVar10) {
        _memmove(puVar10,param_2);
        puVar12 = (undefined8 *)param_1[1];
      }
      lVar9 = (long)param_3 - lVar1;
      if (lVar9 != 0) {
        _memmove(puVar12,lVar1,lVar9);
      }
      lVar9 = (long)puVar12 + lVar9;
    }
    else {
      lVar9 = (long)param_3 - (long)param_2;
      if (lVar9 != 0) {
        _memmove(puVar10,param_2,lVar9);
      }
      lVar9 = (long)puVar10 + lVar9;
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10a14e018; end: 10a14e04f;  */

void FUN_10a14e018(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a14d9c8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 2);
    return;
  }
  FUN_10a14d9b4();
  if (param_4 != 0) {
    FUN_10a0ca600();
    puVar2 = (undefined4 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (long)puVar2;
  }
  return;
}



/* Entry: 10a14e050; end: 10a14e0bf;  */

void FUN_10a14e050(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a0ca600(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a14e0c0; end: 10a14e13f;  */

undefined8 * FUN_10a14e0c0(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a0ca600(param_1);
    puVar1 = (undefined4 *)param_1[1];
    lVar3 = param_2 << 2;
    uVar4 = *param_3;
    puVar2 = puVar1;
    do {
      *puVar2 = uVar4;
      lVar3 = lVar3 + -4;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
    param_1[1] = puVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a14e140; end: 10a14e25f;  */

undefined8 * FUN_10a14e140(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110ba8488;
  func_0x00010a14e208(param_1 + 0x33);
  param_1[0x28] = &PTR_FUN_110ba8440;
  puStack_28 = param_1 + 0x2d;
  FUN_10a0426d8(&puStack_28);
  if (param_1[0x2a] != 0) {
    param_1[0x2b] = param_1[0x2a];
    __ZdlPv();
  }
  param_1[0x14] = &PTR_SUB_110ba84d0;
  if (param_1[0x1f] != 0) {
    param_1[0x20] = param_1[0x1f];
    __ZdlPv();
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    __ZdlPv();
  }
  param_1[6] = &PTR_SUB_110ba84d0;
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a14e260; end: 10a14e2b7;  */

void FUN_10a14e260(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x11c0;
  __Znwm();
  FUN_10a14e2b8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a14e2b8; end: 10a14e303;  */

undefined8 * FUN_10a14e2b8(undefined8 *param_1,undefined1 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba8518;
  FUN_10a14a504(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a14e304; end: 10a14e313;  */

void FUN_10a14e304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a14e314; end: 10a14e333;  */

void FUN_10a14e314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8518;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a14e334; end: 10a14e343;  */

void FUN_10a14e334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a14e33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a14e344; end: 10a14e50b;  */

void FUN_10a14e344(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a14e38c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a14e50c; end: 10a14e517;  */

void FUN_10a14e50c(void)

{
  return;
}



/* Entry: 10a14e518; end: 10a14e52b;  */

void FUN_10a14e518(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a14e52c; end: 10a14e573;  */

void FUN_10a14e52c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    pbVar6 = *(byte **)(param_1 + 0x20);
    do {
      bVar2 = *pbVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar6,0x10);
      if (bVar4) {
        *pbVar6 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while ((cVar3 != '\0') || ((bVar2 & 1) != 0));
    pbVar1 = pbVar6 + 8;
    if (*(long *)(pbVar6 + 0x10) != 0) {
      pbVar1 = (byte *)(*(long *)(pbVar6 + 0x10) + 0x11a8);
    }
    *(long *)pbVar1 = lVar5;
    *(long *)(pbVar6 + 0x10) = lVar5;
    *pbVar6 = 0;
  }
  return;
}



/* Entry: 10a14e574; end: 10a14e5af;  */

long FUN_10a14e574(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba83a8);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a14e5b0; end: 10a14e5b3;  */

void FUN_10a14e5b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a14e5b4; end: 10a14e66f;  */

void FUN_10a14e5b4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a14e670(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = *param_2;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a14e670; end: 10a14e6b3;  */

undefined8 * FUN_10a14e670(undefined8 *param_1)

{
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110ba83c8) {
    return param_1 + 1;
  }
  func_0x00010988bd28(&UNK_10f685496);
  return (undefined8 *)0x0;
}



/* Entry: 10a14e6b4; end: 10a14e6df;  */

undefined8 FUN_10a14e6b4(void)

{
  return 0;
}



/* Entry: 10a14e6e0; end: 10a14e79b;  */

void FUN_10a14e6e0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a14e670(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)((long)param_2 + 4);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a14e79c; end: 10a14e88b;  */

void FUN_10a14e79c(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a14e88c(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a14e878);
    (*pcVar3)();
  }
  fVar2 = (float)*(double *)(param_4 + 2);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
    fVar2 = 0.0;
  }
  *(float *)((long)param_2 + 4) = fVar2;
  *param_1 = 0;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a14e88c; end: 10a14e8cf;  */

long * FUN_10a14e88c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lStack_60;
  undefined4 uStack_58;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110ba83c8) {
    return param_1 + 1;
  }
  plVar1 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x58))();
  if ((ulong)plVar2[0x59] < 8) {
    plVar2[plVar2[0x59] + 0x4e] = plVar2[0x5a];
    plVar2[0x59] = plVar2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar2 + 0x4b);
  }
  plVar3 = plVar1;
  FUN_10a14e670(plVar1,param_2);
  FUN_10a052e3c(param_4);
  uStack_58 = (undefined4)plVar3[2];
  lStack_60 = plVar3[1];
  FUN_10a065390(extraout_x8,plVar1,&lStack_60);
  plVar2 = plVar2 + 0x4b;
  func_0x00010988c170(plVar2);
  return plVar2;
}



/* Entry: 10a14e8d0; end: 10a14e9a3;  */

void FUN_10a14e8d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lStack_50;
  undefined4 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a14e670(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = (undefined4)plVar2[2];
  lStack_50 = plVar2[1];
  FUN_10a065390(param_1,param_2,&lStack_50);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a14e9a4; end: 10a14ea6f;  */

void FUN_10a14e9a4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a14e88c(param_2,param_3);
  FUN_10a0655b4(param_5);
  func_0x00010a0655d8(param_2,param_4);
  lVar5 = param_2[1];
  plVar4[1] = *param_2;
  *(int *)(plVar4 + 2) = (int)lVar5;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a14ea70; end: 10a14edab;  */

void FUN_10a14ea70(void)

{
  code *pcVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long ****pppplStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long ****pppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char acStack_71 [9];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(&pppplStack_d0,&UNK_10f63ed44);
  func_0x000107c2b054(auStack_b8,&UNK_10f63ed57);
  func_0x000107c2b054(auStack_a0,&UNK_10f63ed6a);
  func_0x000107c2b054(auStack_88,&UNK_10f63ed7e);
  FUN_10a14edac(0x1137ea630,&pppplStack_d0,acStack_71 + 1);
  lVar7 = 0;
  do {
    if (acStack_71[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar7));
    }
    lVar7 = lVar7 + -0x18;
  } while (lVar7 != -0x60);
  puVar11 = (ulong *)&UNK_110ba7dc0;
  lVar7 = 0x198;
  do {
    uVar9 = *puVar11;
    if (0x7ffffffffffffff7 < uVar9) {
      func_0x000109ffde50();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14ed08);
      (*pcVar1)();
    }
    uVar10 = puVar11[-1];
    if (uVar9 < 0x17) {
      uStack_d8 = CONCAT17((char)uVar9,(undefined7)uStack_d8);
      ppppplVar2 = &pppplStack_e8;
      if (uVar9 != 0) goto LAB_10a14eba8;
    }
    else {
      ppppplVar3 = (long *****)0x19;
      if ((uVar9 | 7) != 0x17) {
        ppppplVar3 = (long *****)((uVar9 | 7) + 1);
      }
      ppppplVar2 = ppppplVar3;
      __Znwm();
      uStack_d8 = (ulong)ppppplVar3 | 0x8000000000000000;
      pppplStack_e8 = (long ****)ppppplVar2;
      uStack_e0 = uVar9;
LAB_10a14eba8:
      _memmove(ppppplVar2,uVar10,uVar9);
    }
    *(undefined1 *)((long)ppppplVar2 + uVar9) = 0;
    ppppplVar3 = &pppplStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppplVar3,&UNK_10f63edb0,9);
    ppplStack_c8 = (long ***)ppppplVar3[1];
    pppplStack_d0 = *ppppplVar3;
    ppplStack_c0 = (long ***)ppppplVar3[2];
    ppppplVar3[1] = (long ****)0x0;
    ppppplVar3[2] = (long ****)0x0;
    *ppppplVar3 = (long ****)0x0;
    func_0x00010726db4c(0x1137ea630,&pppplStack_d0,&pppplStack_d0);
    if ((long)ppplStack_c0 < 0) {
      __ZdlPv(pppplStack_d0);
    }
    if ((long)uStack_d8 < 0) {
      __ZdlPv(pppplStack_e8);
    }
    if (uVar9 < 0x17) {
      uStack_d8 = CONCAT17((char)uVar9,(undefined7)uStack_d8);
      ppppplVar2 = &pppplStack_e8;
      if (uVar9 != 0) goto LAB_10a14ec50;
    }
    else {
      ppppplVar3 = (long *****)0x19;
      if ((uVar9 | 7) != 0x17) {
        ppppplVar3 = (long *****)((uVar9 | 7) + 1);
      }
      ppppplVar2 = ppppplVar3;
      __Znwm();
      uStack_d8 = (ulong)ppppplVar3 | 0x8000000000000000;
      pppplStack_e8 = (long ****)ppppplVar2;
      uStack_e0 = uVar9;
LAB_10a14ec50:
      _memmove(ppppplVar2,uVar10,uVar9);
    }
    *(undefined1 *)((long)ppppplVar2 + uVar9) = 0;
    ppppplVar3 = &pppplStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppplVar3,&UNK_10f63edba,0xb);
    ppplStack_c8 = (long ***)ppppplVar3[1];
    pppplStack_d0 = *ppppplVar3;
    ppplStack_c0 = (long ***)ppppplVar3[2];
    ppppplVar3[1] = (long ****)0x0;
    ppppplVar3[2] = (long ****)0x0;
    *ppppplVar3 = (long ****)0x0;
    ppppplVar3 = &pppplStack_d0;
    ppppplVar2 = &pppplStack_d0;
    ppppplVar4 = (long *****)0x1137ea630;
    func_0x00010726db4c();
    if ((long)ppplStack_c0 < 0) {
      ppppplVar4 = (long *****)pppplStack_d0;
      __ZdlPv();
    }
    if ((long)uStack_d8 < 0) {
      ppppplVar4 = (long *****)pppplStack_e8;
      __ZdlPv();
    }
    puVar11 = puVar11 + 3;
    lVar7 = lVar7 + -0x18;
    if (lVar7 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      lVar7 = -0x60;
      pcVar8 = (char *)0x1137ea68f;
      do {
        if (*pcVar8 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar8 + -0x17));
        }
        lVar7 = lVar7 + 0x18;
        pcVar8 = pcVar8 + -0x18;
      } while (lVar7 != 0);
      __Unwind_Resume();
      pppplVar5 = ppppplVar4[1];
      if (pppplVar5 != (long ****)0x0) {
        pppplVar6 = (long ****)0x0;
        do {
          (*ppppplVar4)[(long)pppplVar6] = (long ***)0x0;
          pppplVar6 = (long ****)((long)pppplVar6 + 1);
        } while (pppplVar5 != pppplVar6);
        pppplVar5 = ppppplVar4[2];
        ppppplVar4[2] = (long ****)0x0;
        ppppplVar4[3] = (long ****)0x0;
        if ((ppppplVar3 != ppppplVar2) && (pppplVar6 = pppplVar5, pppplVar5 != (long ****)0x0)) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (pppplVar6 + 2,ppppplVar3);
            pppplVar5 = (long ****)*pppplVar6;
            func_0x0001072d8bb4(ppppplVar4,pppplVar6);
            ppppplVar3 = ppppplVar3 + 3;
            pppplVar6 = pppplVar5;
          } while (pppplVar5 != (long ****)0x0 && ppppplVar3 != ppppplVar2);
        }
        func_0x000107c28270(ppppplVar4,pppplVar5);
      }
      for (; ppppplVar3 != ppppplVar2; ppppplVar3 = ppppplVar3 + 3) {
        func_0x000107c2827c(ppppplVar4,ppppplVar3,ppppplVar3);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a14edac; end: 10a14eea7;  */

void FUN_10a14edac(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 != param_3) && (plVar4 = plVar3, plVar3 != (long *)0x0)) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 2,param_2)
        ;
        plVar3 = (long *)*plVar4;
        func_0x0001072d8bb4(param_1,plVar4);
        param_2 = param_2 + 0x18;
        plVar4 = plVar3;
      } while (plVar3 != (long *)0x0 && param_2 != param_3);
    }
    func_0x000107c28270(param_1,plVar3);
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c2827c(param_1,param_2,param_2);
  }
  return;
}



/* Entry: 10a14eea8; end: 10a14efdf;  */

long FUN_10a14eea8(ulong param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_298 [264];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [264];
  char cStack_78;
  
  uVar5 = param_1 >> 4;
  if ((param_1 & 0xf) != 0) {
    uVar5 = uVar5 + 1;
  }
  lVar9 = *param_2;
  lVar8 = param_2[1];
  lVar12 = lVar8 - lVar9;
  uVar11 = lVar12 >> 4;
  if (uVar11 < uVar5) {
    uVar10 = uVar5 - uVar11;
    if ((ulong)(param_2[2] - lVar8 >> 4) < uVar10) {
      if (uVar5 >> 0x3c != 0) {
        FUN_10a14d9b4();
        FUN_10a14f0ac(auStack_190);
        func_0x00010a0ec6dc(auStack_298,1);
        if (cStack_78 == '\x01') {
          _memcpy(auStack_180,auStack_298,0x104);
        }
        else {
          _memcpy(auStack_180,auStack_298,0x108);
          cStack_78 = '\x01';
        }
        puVar3 = (undefined8 *)0x120;
        ___cxa_allocate_exception();
        puVar4 = puVar3;
        __ZNSt13runtime_errorC2ERKS_();
        *puVar4 = &PTR_FUN_110b99e98;
        _memcpy(puVar4 + 2,auStack_180,0x110);
        *puVar3 = &PTR_FUN_110ba8418;
        ___cxa_throw(puVar3,&PTR_DAT_110ba83f0,FUN_10a14f0a8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14f090);
        (*pcVar1)();
      }
      uVar6 = param_2[2] - lVar9;
      uVar7 = (long)uVar6 >> 3;
      if (uVar7 <= uVar5) {
        uVar7 = uVar5;
      }
      if (0x7fffffffffffffef < uVar6) {
        uVar7 = 0xfffffffffffffff;
      }
      plVar2 = param_2;
      FUN_10a14d9c8();
      puVar4 = (undefined8 *)((long)plVar2 + lVar12 + 8);
      lVar8 = uVar5 * 0x10 + uVar11 * -0x10;
      do {
        *puVar4 = 0;
        puVar4[-1] = 0x100000011;
        puVar4 = puVar4 + 2;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
      lVar9 = (long)plVar2 + (lVar12 - (param_2[1] - *param_2));
      _memcpy(lVar9);
      lVar8 = *param_2;
      *param_2 = lVar9;
      param_2[1] = (long)plVar2 + uVar10 * 0x10 + lVar12;
      param_2[2] = (long)(plVar2 + uVar7 * 2);
      if (lVar8 != 0) {
        __ZdlPv();
      }
      goto LAB_10a14efc4;
    }
    lVar9 = lVar8 + uVar10 * 0x10;
    lVar12 = uVar10 * 0x10;
    lVar8 = lVar8 + 0xc;
    do {
      *(undefined8 *)(lVar8 + -4) = 0;
      *(undefined8 *)(lVar8 + -0xc) = 0x100000011;
      lVar8 = lVar8 + 0x10;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  else {
    if (uVar11 <= uVar5) goto LAB_10a14efc4;
    lVar9 = lVar9 + uVar5 * 0x10;
  }
  param_2[1] = lVar9;
LAB_10a14efc4:
  return *param_2;
}



/* Entry: 10a14efe0; end: 10a14f0a7;  */

void FUN_10a14efe0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a14f0ac(auStack_150);
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110ba8418;
  ___cxa_throw(puVar2,&PTR_DAT_110ba83f0,FUN_10a14f0a8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a14f090);
  (*pcVar1)();
}



/* Entry: 10a14f0a8; end: 10a14f0ab;  */

void FUN_10a14f0a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a14f0ac; end: 10a14f127;  */

undefined8 * FUN_10a14f0ac(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f63edc6);
  FUN_10a002a94(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110ba8418;
  return param_1;
}



/* Entry: 10a14f128; end: 10a14f13b;  */

void FUN_10a14f128(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a14f13c; end: 10a14f1d7;  */

void FUN_10a14f13c(void)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c2b054(auStack_58,&UNK_10f63edda);
  FUN_10a14f1d8(&uStack_40,auStack_58);
  if (lRam0000000113834e10 != 0) {
    lRam0000000113834e18 = lRam0000000113834e10;
    __ZdlPv();
  }
  lRam0000000113834e18 = uStack_38;
  lRam0000000113834e10 = uStack_40;
  uRam0000000113834e20 = uStack_30;
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a14f1d8; end: 10a14f473;  */

/* WARNING: Removing unreachable block (ram,0x00010a14f3a8) */

void FUN_10a14f1d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined ******ppppppuVar4;
  short *psVar5;
  short *psStack_1a8;
  short *psStack_1a0;
  undefined8 uStack_198;
  undefined ****ppppuStack_190;
  undefined ****ppppuStack_188;
  undefined ****ppppuStack_180;
  undefined2 uStack_172;
  undefined *****apppppuStack_170 [2];
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [56];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 auStack_58 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = param_1;
  func_0x00010ad03330();
  uVar2 = puVar3[1];
  if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)puVar3 + 0x17);
  }
  FUN_10a003c90(apppppuStack_170,uVar2 + 10,auStack_58);
  ppppppuVar4 = (undefined ******)apppppuStack_170[0];
  if (-1 < (long)uStack_160) {
    ppppppuVar4 = apppppuStack_170;
  }
  if (uVar2 != 0) {
    puVar1 = (undefined8 *)*puVar3;
    if (-1 < *(char *)((long)puVar3 + 0x17)) {
      puVar1 = puVar3;
    }
    _memmove(ppppppuVar4,puVar1,uVar2);
  }
  puVar3 = (undefined8 *)((long)ppppppuVar4 + uVar2);
  *puVar3 = 0x6b72616d646e614c;
  *(undefined2 *)(puVar3 + 1) = 0x2f73;
  *(undefined1 *)((long)puVar3 + 10) = 0;
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  ppppppuVar4 = apppppuStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar4,puVar3,uVar2);
  ppppuStack_188 = (undefined ****)ppppppuVar4[1];
  ppppuStack_190 = (undefined ****)*ppppppuVar4;
  ppppuStack_180 = (undefined ****)ppppppuVar4[2];
  ppppppuVar4[1] = (undefined *****)0x0;
  ppppppuVar4[2] = (undefined *****)0x0;
  *ppppppuVar4 = (undefined *****)0x0;
  if (uStack_160._7_1_ < '\0') {
    __ZdlPv(apppppuStack_170[0]);
  }
  FUN_10ad01b0c(auStack_58,&ppppuStack_190);
  FUN_10a108878(apppppuStack_170,auStack_58,0x18);
  psStack_1a8 = (short *)0x0;
  psStack_1a0 = (short *)0x0;
  uStack_198 = 0;
  uStack_172 = 0;
  while( true ) {
    ppppppuVar4 = apppppuStack_170;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERt(ppppppuVar4,&uStack_172);
    if ((*(byte *)((long)ppppppuVar4 + (long)((*ppppppuVar4)[-3] + 4)) & 5) != 0) break;
    FUN_10a14f474(&psStack_1a8,&uStack_172);
  }
  apppppuStack_170[0] = (undefined *****)&PTR_SUB_1108a5a38;
  uStack_160 = &PTR_DAT_1108a5a60;
  appuStack_f0[0] = &PTR_DAT_1108a5a88;
  ppuStack_158 = &PTR_DAT_11088d7b0;
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  ppuStack_158 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_150);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apppppuStack_170,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  *param_1 = psStack_1a8;
  param_1[2] = uStack_198;
  param_1[1] = psStack_1a0;
  for (psVar5 = psStack_1a8; psVar5 != psStack_1a0; psVar5 = psVar5 + 1) {
    *psVar5 = *psVar5 + -1;
  }
  if ((long)ppppuStack_180 < 0) {
    __ZdlPv(ppppuStack_190);
  }
  return;
}



/* Entry: 10a14f474; end: 10a14f533;  */

void FUN_10a14f474(long *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 *puStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar1 = (undefined2 *)param_1[1];
  if (puVar1 < (undefined2 *)param_1[2]) {
    puVar7 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    lVar6 = (long)puVar1 - *param_1;
    lVar5 = lVar6 >> 1;
    if (lVar5 < -1) {
      func_0x00010a0446d4();
      pcStack_38 = FUN_10a14f534;
      puStack_50 = param_2;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x000107c2b054(auStack_88,&UNK_10f63edf7);
      FUN_10a14f1d8(&uStack_70,auStack_88);
      if (lRam0000000113834e40 != 0) {
        lRam0000000113834e48 = lRam0000000113834e40;
        __ZdlPv();
      }
      lRam0000000113834e48 = uStack_68;
      lRam0000000113834e40 = uStack_70;
      uRam0000000113834e50 = uStack_60;
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar3 = uVar4;
    if (uVar4 <= lVar5 + 1U) {
      uVar3 = lVar5 + 1;
    }
    if (0x7ffffffffffffffd < uVar4) {
      uVar3 = 0x7fffffffffffffff;
    }
    plVar2 = param_1;
    FUN_10a0446e8();
    lVar5 = *param_1;
    puVar1 = (undefined2 *)((long)plVar2 + lVar6);
    lVar6 = (long)puVar1 - (param_1[1] - lVar5);
    puVar7 = puVar1 + 1;
    *puVar1 = *param_2;
    _memcpy(lVar6,lVar5);
    lVar5 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)plVar2 + uVar3 * 2;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a14f534; end: 10a14f5cf;  */

void FUN_10a14f534(void)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c2b054(auStack_58,&UNK_10f63edf7);
  FUN_10a14f1d8(&uStack_40,auStack_58);
  if (lRam0000000113834e40 != 0) {
    lRam0000000113834e48 = lRam0000000113834e40;
    __ZdlPv();
  }
  lRam0000000113834e48 = uStack_38;
  lRam0000000113834e40 = uStack_40;
  uRam0000000113834e50 = uStack_30;
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a14f5d0; end: 10a14f68f;  */

long * FUN_10a14f5d0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  long lVar9;
  long lVar10;
  undefined2 *puVar11;
  long lStack_d0;
  long *plStack_c8;
  long *aplStack_c0 [2];
  char cStack_a9;
  long *aplStack_a8 [2];
  char cStack_91;
  
  puVar1 = (undefined2 *)param_1[1];
  if (puVar1 < (undefined2 *)param_1[2]) {
    puVar11 = puVar1 + 1;
    *puVar1 = *(undefined2 *)param_2;
    plVar4 = param_1;
  }
  else {
    lVar10 = (long)puVar1 - *param_1;
    lVar9 = lVar10 >> 1;
    if (lVar9 < -1) {
      func_0x00010a0446d4();
      if (-1 < (long)param_2) {
        plVar6 = param_1;
        FUN_10a0446e8();
        *param_1 = (long)plVar6;
        param_1[1] = (long)plVar6;
        param_1[2] = (long)plVar6 + (long)param_2 * 2;
        return plVar6;
      }
      func_0x00010a0446d4();
      if (((ulong)param_2[1] >> 0x3e == 0) && (param_1 == (long *)(param_2[1] * 4))) {
        return (long *)*param_2;
      }
      puVar5 = &UNK_10f63ee14;
      FUN_10a00946c(&UNK_10f63ee14);
      FUN_10a1513b8(aplStack_c0,param_2,param_3);
      FUN_10a151e50(&lStack_d0,puVar5,aplStack_c0);
      plVar6 = *(long **)(lStack_d0 + 0x18);
      func_0x0001092beca0(extraout_x8,plVar6,aplStack_a8);
      if (plStack_c8 != (long *)0x0) {
        plVar4 = plStack_c8 + 1;
        do {
          lVar9 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
          plVar6 = plStack_c8;
        }
      }
      if (cStack_91 < '\0') {
        __ZdlPv(aplStack_a8[0]);
        plVar6 = aplStack_a8[0];
      }
      if (cStack_a9 < '\0') {
        __ZdlPv(aplStack_c0[0]);
        plVar6 = aplStack_c0[0];
      }
      return plVar6;
    }
    uVar8 = param_1[2] - *param_1;
    uVar7 = uVar8;
    if (uVar8 <= lVar9 + 1U) {
      uVar7 = lVar9 + 1;
    }
    if (0x7ffffffffffffffd < uVar8) {
      uVar7 = 0x7fffffffffffffff;
    }
    plVar6 = param_1;
    FUN_10a0446e8();
    lVar9 = *param_1;
    puVar1 = (undefined2 *)((long)plVar6 + lVar10);
    lVar10 = (long)puVar1 - (param_1[1] - lVar9);
    puVar11 = puVar1 + 1;
    *puVar1 = *(undefined2 *)param_2;
    _memcpy(lVar10,lVar9);
    plVar4 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)plVar6 + uVar7 * 2;
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return plVar4;
}



/* Entry: 10a14f690; end: 10a14f6c3;  */

long * FUN_10a14f690(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lStack_a0;
  long *plStack_98;
  long *aplStack_90 [2];
  char cStack_79;
  long *aplStack_78 [2];
  char cStack_61;
  
  if (-1 < (long)param_2) {
    plVar5 = param_1;
    FUN_10a0446e8();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)plVar5 + (long)param_2 * 2;
    return plVar5;
  }
  func_0x00010a0446d4();
  if (((ulong)param_2[1] >> 0x3e == 0) && (param_1 == (long *)(param_2[1] * 4))) {
    return (long *)*param_2;
  }
  puVar4 = &UNK_10f63ee14;
  FUN_10a00946c(&UNK_10f63ee14);
  FUN_10a1513b8(aplStack_90,param_2,param_3);
  FUN_10a151e50(&lStack_a0,puVar4,aplStack_90);
  plVar5 = *(long **)(lStack_a0 + 0x18);
  func_0x0001092beca0(extraout_x8,plVar5,aplStack_78);
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
      plVar5 = plStack_98;
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(aplStack_78[0]);
    plVar5 = aplStack_78[0];
  }
  if (cStack_79 < '\0') {
    __ZdlPv(aplStack_90[0]);
    plVar5 = aplStack_90[0];
  }
  return plVar5;
}



/* Entry: 10a14f6c4; end: 10a14f6f7;  */

long * FUN_10a14f6c4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lStack_80;
  long *plStack_78;
  long *aplStack_70 [2];
  char cStack_59;
  long *aplStack_58 [2];
  char cStack_41;
  
  if (((ulong)param_2[1] >> 0x3e == 0) && (param_1 == param_2[1] * 4)) {
    return (long *)*param_2;
  }
  puVar4 = &UNK_10f63ee14;
  FUN_10a00946c(&UNK_10f63ee14);
  FUN_10a1513b8(aplStack_70,param_2,param_3);
  FUN_10a151e50(&lStack_80,puVar4,aplStack_70);
  plVar5 = *(long **)(lStack_80 + 0x18);
  func_0x0001092beca0(extraout_x8,plVar5,aplStack_58);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      plVar5 = plStack_78;
    }
  }
  if (cStack_41 < '\0') {
    __ZdlPv(aplStack_58[0]);
    plVar5 = aplStack_58[0];
  }
  if (cStack_59 < '\0') {
    __ZdlPv(aplStack_70[0]);
    plVar5 = aplStack_70[0];
  }
  return plVar5;
}



/* Entry: 10a14f6f8; end: 10a14f7db;  */

void FUN_10a14f6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_70;
  long *plStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10a1513b8(auStack_60,param_3,param_4);
  FUN_10a151e50(&lStack_70,param_2,auStack_60);
  func_0x0001092beca0(param_1,*(undefined8 *)(lStack_70 + 0x18),auStack_48);
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return;
}



/* Entry: 10a14f7dc; end: 10a14f9c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a14f950) */

undefined8 FUN_10a14f7dc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lStack_a0;
  long *plStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    lStack_50 = param_2[2];
  }
  FUN_10ad03508(&ppuStack_48,&uStack_60);
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_10a1513b8(auStack_90,ppuStack_48,uStack_40);
  FUN_10a151e50(&lStack_a0,param_1,auStack_90);
  puVar9 = *(undefined8 **)(lStack_a0 + 0x18);
  func_0x0001092bce90(puVar9);
  puVar6 = (ulong *)*puVar9;
  (**(code **)(*puVar6 + 0x50))();
  uVar10 = *puVar6;
  uVar3 = puVar6[1];
  if (uVar10 != uVar3) {
    uVar2 = uStack_70;
    if (-1 < (char)bStack_61) {
      uVar2 = (ulong)bStack_61;
    }
    do {
      uVar7 = (ulong)*(char *)(uVar10 + 0x17);
      if ((long)uVar7 < 0) {
        uVar7 = *(ulong *)(uVar10 + 8);
      }
      if ((uVar2 < uVar7) && (uVar7 = uVar10, FUN_10a1520c4(uVar10,&uStack_78), (uVar7 & 1) != 0)) {
        uVar11 = 1;
        goto LAB_10a14f8f0;
      }
      uVar10 = uVar10 + 0x28;
    } while (uVar10 != uVar3);
  }
  uVar11 = 0;
LAB_10a14f8f0:
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(uStack_78);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  return uVar11;
}



/* Entry: 10a14f9c4; end: 10a14fc3f;  */

bool FUN_10a14f9c4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 **ppuStack_78;
  long *plStack_70;
  byte bStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_90,*param_2,param_2[1]);
  }
  else {
    uStack_88 = param_2[1];
    uStack_90 = *param_2;
    lStack_80 = param_2[2];
  }
  FUN_10ad03508(&ppuStack_78,&uStack_90);
  plVar9 = plStack_70;
  pppuVar6 = (undefined8 ***)ppuStack_78;
  if (-1 < (char)bStack_61) {
    plVar9 = (long *)(ulong)bStack_61;
    pppuVar6 = &ppuStack_78;
  }
  FUN_10a1513b8(auStack_60,pppuVar6,plVar9);
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  FUN_10a151e50(&ppuStack_78,param_1,auStack_60);
  ppuVar13 = (undefined8 **)ppuStack_78[3];
  func_0x0001092bce90(ppuVar13);
  plVar9 = *ppuVar13;
  (**(code **)(*plVar9 + 0x58))();
  if ((int)plVar9 == 1) {
    ppuVar13 = (undefined8 **)ppuStack_78[3];
    func_0x0001092bce90(ppuVar13);
    plVar9 = *ppuVar13;
    (**(code **)(*plVar9 + 0x50))();
    puVar14 = (undefined8 *)*plVar9;
    puVar2 = (undefined8 *)plVar9[1];
    if (puVar14 != puVar2) {
      uVar7 = uStack_40;
      pppuVar6 = (undefined8 ***)ppuStack_48;
      if (-1 < (char)bStack_31) {
        uVar7 = (ulong)bStack_31;
        pppuVar6 = &ppuStack_48;
      }
      do {
        bVar3 = *(byte *)((long)puVar14 + 0x17);
        uVar1 = puVar14[1];
        if (-1 < (char)bVar3) {
          uVar1 = (ulong)bVar3;
        }
        if (uVar1 == uVar7) {
          puVar10 = (undefined8 *)*puVar14;
          if (-1 < (char)bVar3) {
            puVar10 = puVar14;
          }
          _memcmp(puVar10,pppuVar6,uVar7);
          if ((int)puVar10 == 0) {
            bVar8 = true;
            goto LAB_10a14fb74;
          }
        }
        puVar14 = puVar14 + 5;
      } while (puVar14 != puVar2);
    }
    bVar8 = false;
  }
  else {
    func_0x0001092beca0(&plStack_98,ppuStack_78[3],&ppuStack_48);
    plVar9 = plStack_98;
    bVar8 = plStack_98 != (long *)0x0;
    plStack_98 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x40))();
      }
      __ZdlPv(plVar9);
    }
  }
LAB_10a14fb74:
  if (plStack_70 != (long *)0x0) {
    plVar9 = plStack_70 + 1;
    do {
      lVar12 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  if ((char)bStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return bVar8;
}



/* Entry: 10a14fc40; end: 10a14ff57;  */

/* WARNING: Removing unreachable block (ram,0x00010a14fcc0) */
/* WARNING: Removing unreachable block (ram,0x00010a14fd2c) */

undefined8 FUN_10a14fc40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *****ppppplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long ****pppplStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_90,*param_2,param_2[1]);
  }
  else {
    uStack_88 = param_2[1];
    uStack_90 = *param_2;
    lStack_80 = param_2[2];
  }
  FUN_10ad03508(&pppplStack_48,&uStack_90);
  ppppplVar4 = (long *****)pppplStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppppplVar4 = &pppplStack_48;
  }
  FUN_10a1513b8(auStack_78,ppppplVar4,uStack_40);
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  FUN_10a151e50(&lStack_a0,param_1,auStack_78);
  if (*(int *)(lStack_a0 + 0x28) == 1) {
    uVar8 = *(undefined8 *)(lStack_a0 + 0x18);
    FUN_10a09d9a0(&pppplStack_48,param_3,0);
    func_0x0001092bee64(uVar8,auStack_60,&pppplStack_48);
    param_3 = 1;
  }
  else {
    func_0x0001092beca0(&pppplStack_48,*(undefined8 *)(lStack_a0 + 0x18),auStack_60);
    if ((long *****)pppplStack_48 == (long *****)0x0) {
      param_3 = 0;
    }
    else {
      pppplVar5 = (long ****)*pppplStack_48;
      (*(code *)**pppplVar5)();
      pppplVar6 = (long ****)*pppplStack_48;
      (*(code *)(*pppplVar6)[3])();
      FUN_10ad00d7c(param_3,pppplVar5,pppplVar6);
      pppplVar5 = pppplStack_48;
      pppplStack_48 = (long ****)0x0;
      if ((long *****)pppplVar5 != (long *****)0x0) {
        pppplVar6 = (long ****)*pppplVar5;
        *pppplVar5 = (long ***)0x0;
        if (pppplVar6 != (long ****)0x0) {
          (*(code *)(*pppplVar6)[8])();
        }
        __ZdlPv(pppplVar5);
      }
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
    }
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return param_3;
}



/* Entry: 10a14ff58; end: 10a1502ff;  */

undefined8 FUN_10a14ff58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long alStack_f0 [2];
  char cStack_d9;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined1 uStack_51;
  
  uVar10 = param_1;
  FUN_10a14f7dc();
  if (((int)uVar10 == 0) ||
     ((puVar11 = param_3, FUN_10ad015f0(param_3,0x4000), ((ulong)puVar11 & 1) == 0 &&
      (puVar11 = param_3, FUN_10ad00cf8(), (int)puVar11 == 0)))) {
    uVar10 = 0;
  }
  else {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_c0,*param_2,param_2[1]);
    }
    else {
      uStack_b8 = param_2[1];
      uStack_c0 = *param_2;
      lStack_b0 = param_2[2];
    }
    FUN_10ad03508(&pppuStack_a0,&uStack_c0);
    uVar1 = uStack_98;
    ppppuVar7 = (undefined8 ****)pppuStack_a0;
    if (-1 < (long)uStack_90) {
      uVar1 = uStack_90 >> 0x38;
      ppppuVar7 = &pppuStack_a0;
    }
    FUN_10a1513b8(auStack_88,ppppuVar7,uVar1);
    if ((long)uStack_90 < 0) {
      __ZdlPv(pppuStack_a0);
    }
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    FUN_10a151e50(&lStack_d0,param_1,auStack_88);
    puVar11 = *(undefined8 **)(lStack_d0 + 0x18);
    func_0x0001092bce90(puVar11);
    plVar5 = (long *)*puVar11;
    (**(code **)(*plVar5 + 0x50))();
    lVar2 = plVar5[1];
    for (lVar9 = *plVar5; lVar9 != lVar2; lVar9 = lVar9 + 0x28) {
      lVar6 = lVar9;
      FUN_10a1520c4(lVar9,&uStack_70);
      if ((int)lVar6 != 0) {
        func_0x0001092beca0(&plStack_d8,*(undefined8 *)(lStack_d0 + 0x18),lVar9);
        uVar1 = uStack_68;
        if (-1 < (char)bStack_59) {
          uVar1 = (ulong)bStack_59;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (alStack_f0,lVar9,uVar1,0xffffffffffffffff,&uStack_51);
        uVar1 = param_3[1];
        puVar11 = (undefined8 *)*param_3;
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
          puVar11 = param_3;
        }
        plVar5 = alStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (alStack_f0,0,puVar11,uVar1);
        uStack_98 = plVar5[1];
        pppuStack_a0 = (undefined8 ***)*plVar5;
        uStack_90 = plVar5[2];
        plVar5[1] = 0;
        plVar5[2] = 0;
        *plVar5 = 0;
        if (cStack_d9 < '\0') {
          __ZdlPv(alStack_f0[0]);
        }
        if (plStack_d8 == (long *)0x0) {
          if ((long)uStack_90 < 0) {
            __ZdlPv(pppuStack_a0);
            plVar5 = plStack_d8;
            plStack_d8 = (long *)0x0;
            if (plVar5 != (long *)0x0) {
              plVar8 = (long *)*plVar5;
              *plVar5 = 0;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x40))();
              }
              __ZdlPv(plVar5);
            }
          }
        }
        else {
          puVar11 = (undefined8 *)*plStack_d8;
          (**(code **)*puVar11)();
          plVar5 = (long *)*plStack_d8;
          (**(code **)(*plVar5 + 0x18))();
          ppppuVar7 = &pppuStack_a0;
          FUN_10ad00d7c(ppppuVar7,puVar11,plVar5);
          if ((long)uStack_90 < 0) {
            __ZdlPv(pppuStack_a0);
          }
          plVar5 = plStack_d8;
          plStack_d8 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            plVar8 = (long *)*plVar5;
            *plVar5 = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x40))();
            }
            __ZdlPv(plVar5);
          }
          if (((ulong)ppppuVar7 & 1) != 0) goto LAB_10a15017c;
        }
        uVar10 = 0;
        goto LAB_10a1501d0;
      }
LAB_10a15017c:
    }
    uVar10 = 1;
LAB_10a1501d0:
    if (plStack_c8 != (long *)0x0) {
      plVar5 = plStack_c8 + 1;
      do {
        lVar9 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      }
    }
    if ((char)bStack_59 < '\0') {
      __ZdlPv(uStack_70);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
  }
  return uVar10;
}



/* Entry: 10a150300; end: 10a1503cf;  */

void FUN_10a150300(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  long lVar13;
  undefined **ppuVar14;
  long *extraout_x8;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  long *plVar23;
  long *plVar24;
  undefined8 **ppuVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 **ppuVar28;
  undefined8 uVar29;
  long *plVar30;
  long *plVar31;
  undefined **ppuVar32;
  int iVar33;
  undefined8 **ppuVar34;
  ulong uVar35;
  long lVar36;
  long *plStack_340;
  long *plStack_338;
  char acStack_330 [2];
  undefined2 uStack_32e;
  int iStack_32c;
  undefined8 **ppuStack_328;
  long *plStack_320;
  undefined1 uStack_318;
  long *plStack_310;
  undefined8 **ppuStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined7 uStack_2f0;
  char cStack_2e9;
  undefined8 uStack_2e8;
  char cStack_2d1;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined4 uStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined8 *apuStack_288 [7];
  undefined8 *puStack_250;
  undefined **ppuStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 **ppuStack_208;
  undefined *puStack_200;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *apuStack_1b8 [7];
  undefined *puStack_180;
  undefined **appuStack_178 [7];
  undefined *puStack_140;
  undefined **appuStack_138 [7];
  long lStack_100;
  undefined8 uStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = *param_2;
  uStack_88 = *param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_80,param_5 + 1);
  puVar21 = &uStack_88;
  FUN_10a1503d0(param_1,uVar29,param_3,param_4);
  ppuVar8 = apuStack_80;
  (*(code *)*apuStack_80[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*apuStack_80[0])(apuStack_80);
  __Unwind_Resume();
  lStack_100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1513b8(&lStack_300,param_3,param_4);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  __ZNSt3__15mutex4lockEv(ppuVar8 + 0xf);
  ppuVar34 = ppuVar8 + 0xc;
  ppuVar28 = ppuVar8 + 10;
  ppuVar16 = (undefined8 **)*ppuVar34;
  while (ppuVar16 != (undefined8 **)0x0) {
    if ((ppuVar16[6] == (undefined8 *)0x0) || (ppuVar16[6][1] == -1)) {
      puVar17 = ppuVar8[0xb];
      puVar18 = ppuVar16[1];
      uVar35 = (long)puVar17 - 1;
      if (((ulong)puVar17 & uVar35) == 0) {
        puVar18 = (undefined8 *)(uVar35 & (ulong)puVar18);
      }
      else if (puVar17 <= puVar18) {
        uVar3 = 0;
        if (puVar17 != (undefined8 *)0x0) {
          uVar3 = (ulong)puVar18 / (ulong)puVar17;
        }
        puVar18 = (undefined8 *)((long)puVar18 - uVar3 * (long)puVar17);
      }
      ppuVar15 = (undefined8 **)*ppuVar16;
      ppuVar9 = (undefined8 **)(*ppuVar28)[(long)puVar18];
      do {
        ppuVar22 = ppuVar9;
        ppuVar9 = (undefined8 **)*ppuVar22;
      } while ((undefined8 **)*ppuVar22 != ppuVar16);
      ppuVar9 = ppuVar15;
      if (ppuVar22 == ppuVar34) {
LAB_10a1504d4:
        if (ppuVar15 == (undefined8 **)0x0) {
LAB_10a15050c:
          (*ppuVar28)[(long)puVar18] = 0;
          ppuVar9 = (undefined8 **)*ppuVar16;
          goto LAB_10a150514;
        }
        puVar26 = ppuVar15[1];
        if (((ulong)puVar17 & uVar35) == 0) {
          puVar27 = (undefined8 *)((ulong)puVar26 & uVar35);
        }
        else {
          puVar27 = puVar26;
          if (puVar17 <= puVar26) {
            uVar3 = 0;
            if (puVar17 != (undefined8 *)0x0) {
              uVar3 = (ulong)puVar26 / (ulong)puVar17;
            }
            puVar27 = (undefined8 *)((long)puVar26 - uVar3 * (long)puVar17);
          }
        }
        if (puVar27 != puVar18) goto LAB_10a15050c;
LAB_10a15051c:
        if (((ulong)puVar17 & uVar35) == 0) {
          puVar26 = (undefined8 *)((ulong)puVar26 & uVar35);
        }
        else if (puVar17 <= puVar26) {
          uVar35 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar35 = (ulong)puVar26 / (ulong)puVar17;
          }
          puVar26 = (undefined8 *)((long)puVar26 - uVar35 * (long)puVar17);
        }
        if (puVar26 != puVar18) {
          (*ppuVar28)[(long)puVar26] = ppuVar22;
          ppuVar9 = (undefined8 **)*ppuVar16;
        }
      }
      else {
        puVar26 = ppuVar22[1];
        if (((ulong)puVar17 & uVar35) == 0) {
          puVar26 = (undefined8 *)((ulong)puVar26 & uVar35);
        }
        else if (puVar17 <= puVar26) {
          uVar3 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar3 = (ulong)puVar26 / (ulong)puVar17;
          }
          puVar26 = (undefined8 *)((long)puVar26 - uVar3 * (long)puVar17);
        }
        if (puVar26 != puVar18) goto LAB_10a1504d4;
LAB_10a150514:
        if (ppuVar9 != (undefined8 **)0x0) {
          puVar26 = ppuVar9[1];
          goto LAB_10a15051c;
        }
      }
      *ppuVar22 = ppuVar9;
      *ppuVar16 = (undefined8 *)0x0;
      ppuVar8[0xd] = (undefined8 *)((long)ppuVar8[0xd] + -1);
      func_0x00010a152330(ppuVar16 + 2);
      __ZdlPv(ppuVar16);
      ppuVar16 = ppuVar15;
    }
    else {
      ppuVar16 = (undefined8 **)*ppuVar16;
    }
  }
  ppuVar16 = ppuVar28;
  FUN_10a151f88(ppuVar28,&lStack_300);
  if (ppuVar16 != (undefined8 **)0x0) {
    plStack_210 = (long *)0x0;
    ppuStack_208 = (undefined8 **)0x0;
    ppuVar9 = (undefined8 **)ppuVar16[6];
    if ((ppuVar9 != (undefined8 **)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_208 = ppuVar9,
       ppuVar9 != (undefined8 **)0x0)) {
      plStack_210 = ppuVar16[5];
    }
    FUN_10a152118(extraout_x8,&plStack_210);
    ppuVar16 = ppuStack_208;
    if (ppuStack_208 != (undefined8 **)0x0) {
      ppuVar9 = ppuStack_208 + 1;
      do {
        puVar18 = *ppuVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar2) {
          *ppuVar9 = (undefined8 *)((long)puVar18 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar18 == (undefined8 *)0x0) {
        (*(code *)(*ppuStack_208)[2])(ppuStack_208);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
      }
    }
  }
  if (*extraout_x8 == 0) {
    __ZNSt3__15mutex4lockEv(ppuVar8 + 2);
    plVar30 = ppuVar8[1];
    if (plVar30 == (long *)0x0) {
      __ZNSt3__15mutex6unlockEv(ppuVar8 + 2);
LAB_10a150688:
      plStack_310 = (long *)0x0;
      ppuStack_308 = (undefined8 **)0x0;
    }
    else {
      puVar18 = *ppuVar8;
      plVar31 = plVar30 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar2) {
          *plVar31 = *plVar31 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__15mutex6unlockEv(ppuVar8 + 2);
      plVar31 = plVar30;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar31 == (long *)0x0) goto LAB_10a150688;
      if (puVar18 == (undefined8 *)0x0) {
        plStack_310 = (long *)0x0;
        ppuStack_308 = (undefined8 **)0x0;
      }
      else {
        func_0x00010a152370(&plStack_210,puVar18);
        plStack_310 = (long *)0x0;
        ppuStack_308 = (undefined8 **)0x0;
        if (ppuStack_208 != (undefined8 **)0x0) {
          ppuVar16 = ppuStack_208;
          __ZNSt3__119__shared_weak_count4lockEv();
          if (ppuVar16 != (undefined8 **)0x0) {
            plStack_310 = plStack_210;
          }
          ppuStack_308 = ppuVar16;
          if (ppuStack_208 != (undefined8 **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      plVar12 = plVar31 + 1;
      do {
        lVar19 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    puVar20 = PTR___tlv_bootstrap_11340d750;
    ppuVar14 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar32 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar10 = ppuVar32;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
      ppuVar10 = ppuVar14;
      (*(code *)puVar20)();
      *(undefined1 *)ppuVar10 = 1;
    }
    puVar6 = PTR___tlv_bootstrap_11340d738;
    ppuVar10 = ppuVar32;
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    FUN_10a15217c();
    ppuVar11 = ppuVar14;
    (*(code *)puVar20)();
    if (((ulong)*ppuVar11 & 1) == 0) {
      ppuVar11 = ppuVar32;
      (*(code *)puVar6)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
      (*(code *)puVar20)();
      *(undefined1 *)ppuVar14 = 1;
    }
    puVar18 = (undefined8 *)ppuVar10[2];
    if (puVar18 == (undefined8 *)0x0) {
      acStack_330[0] = '\0';
      plStack_320 = (long *)0x0;
      uStack_318 = 0;
    }
    else {
      cVar1 = *(char *)(puVar18[1] + 0x17);
      uStack_32e = 7;
      ppuVar14 = &PTR___tlv_bootstrap_11340dd08;
      acStack_330[0] = cVar1;
      (*(code *)PTR___tlv_bootstrap_11340dd08)();
      iVar33 = *(int *)ppuVar14;
      if (*(int *)ppuVar14 == 0) {
        plStack_210 = (long *)0x0;
        _pthread_threadid_np(0,&plStack_210);
        *(int *)ppuVar14 = (int)plStack_210;
        ppuVar32 = ppuVar14;
        iVar33 = (int)plStack_210;
      }
      plStack_320 = (long *)0x0;
      uStack_318 = 0;
      iStack_32c = iVar33;
      if (cVar1 != '\0') {
        lVar19 = puVar18[1];
        bVar5 = *(byte *)(lVar19 + 0x42) | *(byte *)(lVar19 + 0x43);
        if (((bVar5 & 1) != 0) || (*(char *)(lVar19 + 0x40) == '\x01')) {
          uVar35 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          ppuVar32 = (undefined **)cntvct_el0;
          if (uVar35 != 1000000000) {
            uVar3 = 0;
            if (uVar35 != 0) {
              uVar3 = (ulong)ppuVar32 / uVar35;
            }
            uVar4 = 0;
            if (uVar35 != 0) {
              uVar4 = (((long)ppuVar32 - uVar3 * uVar35) * 1000000000) / uVar35;
            }
            ppuVar32 = (undefined **)(uVar4 + uVar3 * 1000000000);
          }
          ppuStack_328 = (undefined8 **)ppuVar32;
          if (((bVar5 & 1) != 0) &&
             (puVar17 = puVar18, FUN_10a1333cc(), puVar17 != (undefined8 *)0x0)) {
            *puVar17 = &UNK_10f63ef3a;
            puVar17[1] = 0;
            puVar17[2] = ppuVar32;
            *(int *)(puVar17 + 3) = iVar33;
            *(undefined2 *)((long)puVar17 + 0x1c) = 7;
            *(undefined1 *)((long)puVar17 + 0x1e) = 3;
            if ((*(byte *)(puVar18 + 0x38) & 1) == 0) goto LAB_10a1510d8;
            puVar18[0x18] = puVar18[0x18] + 1;
          }
        }
        if (*(char *)(puVar18[1] + 0x41) == '\x01') {
          plVar31 = (long *)puVar18[0xb];
          if (plVar31 != (long *)0x0) {
            plVar12 = plVar31;
            (**(code **)(*plVar31 + 0x10))(plVar31,&UNK_10f63ef3a);
            plStack_320 = plVar12;
          }
          uStack_318 = plVar31 != (long *)0x0;
        }
      }
    }
    uStack_290 = *puVar21;
    (**(code **)(puVar21[1] + 0x10))(apuStack_288,puVar21 + 1);
    if (*(char *)(apuStack_288[0] + 1) == '\x01') {
      plStack_210 = (long *)&UNK_1092b3618;
      ppuStack_208 = (undefined8 **)&PTR_DAT_110ae88b8;
      puStack_200 = &UNK_1092b46b0;
      uStack_1d0 = 0;
      plStack_1c8 = (long *)0x0;
      uStack_1c0 = uStack_290;
      (*(code *)apuStack_288[0][2])(apuStack_1b8,apuStack_288);
      puStack_180 = &UNK_1092b363c;
      appuStack_178[0] = &PTR_DAT_110ae88d0;
      puStack_140 = &UNK_1092b3664;
      appuStack_138[0] = &PTR_DAT_110ae88f0;
      func_0x0001092b2ffc(&plStack_298,&plStack_210);
      (*(code *)*appuStack_138[0])(appuStack_138);
      (*(code *)*appuStack_178[0])(appuStack_178);
      (*(code *)*apuStack_1b8[0])(apuStack_1b8);
      plVar31 = plStack_1c8;
      if (plStack_1c8 != (long *)0x0) {
        plVar12 = plStack_1c8 + 1;
        do {
          lVar19 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      (*(code *)*ppuStack_208)(&ppuStack_208);
      uStack_2a0 = 0;
      uStack_2c0 = 0;
      plStack_2b8 = (long *)0x0;
      uStack_2a8 = 1;
      plStack_2b0 = plStack_298;
      puVar18 = (undefined8 *)0x68;
      __Znwm();
      puVar18[1] = 0;
      puVar18[2] = 0;
      *puVar18 = &PTR_FUN_110ba8568;
      puVar21 = puVar18 + 3;
      puStack_250 = (undefined8 *)0x0;
      ppuStack_248 = (undefined **)0x0;
      uStack_2c0 = 0;
      plStack_2b8 = (long *)0x0;
      uStack_238 = CONCAT71(uStack_2a7,uStack_2a8);
      plStack_240 = plStack_2b0;
      uStack_230 = CONCAT44(uStack_230._4_4_,uStack_2a0);
      func_0x0001092bcda8(puVar21,&puStack_250);
      ppuVar14 = ppuStack_248;
      if (ppuStack_248 != (undefined **)0x0) {
        ppuVar32 = ppuStack_248 + 1;
        do {
          puVar20 = *ppuVar32;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar32,0x10);
          if (bVar2) {
            *ppuVar32 = puVar20 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_248 + 0x10))(ppuStack_248);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
        }
      }
      uStack_238 = 0;
      plStack_240 = (long *)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      ppuVar32 = (undefined **)&puStack_250;
      puStack_250 = (undefined8 *)&UNK_1069b161c;
      ppuStack_248 = &PTR_DAT_110950c70;
      puStack_2d0 = puVar21;
      puStack_2c8 = puVar18;
      func_0x0001092bd244(puVar21,&lStack_300,&puStack_250,0x201);
      (*(code *)*ppuStack_248)(&ppuStack_248);
      func_0x0001092beb88(puVar21);
      plVar12 = (long *)0x48;
      __Znwm();
      plVar31 = plStack_298;
      plVar12[1] = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_DAT_110ba85b8;
      plStack_298 = (long *)0x0;
      plStack_340 = plVar12 + 3;
      *plStack_340 = 0;
      plVar12[4] = 0;
      plVar12[5] = (long)plVar31;
      plVar12[6] = (long)puVar21;
      plVar12[7] = (long)puVar18;
      *(undefined4 *)(plVar12 + 8) = 1;
      plStack_338 = plVar12;
      FUN_10a1534d4();
      plVar31 = plStack_2b8;
      if (plStack_2b8 != (long *)0x0) {
        plVar12 = plStack_2b8 + 1;
        do {
          lVar19 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar19 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
        }
      }
      plVar31 = plStack_298;
      plStack_298 = (long *)0x0;
      if (plVar31 != (long *)0x0) {
        (**(code **)(*plVar31 + 8))();
      }
    }
    else {
      FUN_10a1535d4(&puStack_250);
      puVar21 = puStack_250;
      FUN_10ad03f74(&plStack_210);
      func_0x0001092bd244(puVar21,&lStack_300,&plStack_210,0x201);
      (*(code *)*ppuStack_208)(&ppuStack_208);
      func_0x0001092beb88(puVar21);
      plVar31 = (long *)0x48;
      __Znwm();
      plVar31[1] = 0;
      plVar31[2] = 0;
      *plVar31 = (long)&PTR_DAT_110ba85b8;
      plStack_340 = plVar31 + 3;
      *plStack_340 = 0;
      plVar31[4] = 0;
      plVar31[5] = 0;
      plVar31[6] = (long)puVar21;
      plVar31[7] = (long)ppuStack_248;
      *(undefined4 *)(plVar31 + 8) = 0;
      plStack_338 = plVar31;
      FUN_10a1534d4();
    }
    FUN_10a152118(extraout_x8,&plStack_340);
    plVar31 = plStack_338;
    if (plStack_338 != (long *)0x0) {
      plVar12 = plStack_338 + 1;
      do {
        lVar19 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = lVar19 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar19 == 0) {
        (**(code **)(*plStack_338 + 0x10))(plStack_338);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
      }
    }
    (*(code *)*apuStack_288[0])(apuStack_288);
    ppuVar16 = ppuVar28;
    func_0x000107c2b05c(ppuVar28,&lStack_300);
    ppuVar9 = (undefined8 **)ppuVar8[0xb];
    if (ppuVar9 != (undefined8 **)0x0) {
      uVar35 = (long)ppuVar9 - 1;
      if (((ulong)ppuVar9 & uVar35) == 0) {
        ppuVar32 = (undefined **)(uVar35 & (ulong)ppuVar16);
      }
      else {
        ppuVar32 = (undefined **)ppuVar16;
        if (ppuVar9 <= ppuVar16) {
          uVar3 = 0;
          if (ppuVar9 != (undefined8 **)0x0) {
            uVar3 = (ulong)ppuVar16 / (ulong)ppuVar9;
          }
          ppuVar32 = (undefined **)((long)ppuVar16 - uVar3 * (long)ppuVar9);
        }
      }
      if ((undefined8 *)(*ppuVar28)[(long)ppuVar32] != (undefined8 *)0x0) {
        for (plVar31 = *(long **)(*ppuVar28)[(long)ppuVar32]; plVar31 != (long *)0x0;
            plVar31 = (long *)*plVar31) {
          ppuVar15 = (undefined8 **)plVar31[1];
          if (ppuVar15 == ppuVar16) {
            ppuVar15 = ppuVar28;
            func_0x000107c2b068(ppuVar28,plVar31 + 2,&lStack_300);
            if (((ulong)ppuVar15 & 1) != 0) goto LAB_10a150f44;
          }
          else {
            if (((ulong)ppuVar9 & uVar35) == 0) {
              ppuVar15 = (undefined8 **)((ulong)ppuVar15 & uVar35);
            }
            else if (ppuVar9 <= ppuVar15) {
              uVar3 = 0;
              if (ppuVar9 != (undefined8 **)0x0) {
                uVar3 = (ulong)ppuVar15 / (ulong)ppuVar9;
              }
              ppuVar15 = (undefined8 **)((long)ppuVar15 - uVar3 * (long)ppuVar9);
            }
            if (ppuVar15 != (undefined8 **)ppuVar32) break;
          }
        }
      }
    }
    plVar31 = (long *)0x38;
    __Znwm();
    puStack_200 = (undefined *)0x0;
    *plVar31 = 0;
    plVar31[1] = (long)ppuVar16;
    plStack_210 = plVar31;
    ppuStack_208 = ppuVar28;
    if (cStack_2e9 < '\0') {
      func_0x000107c3192c(plVar31 + 2,lStack_300,lStack_2f8);
    }
    else {
      plVar31[3] = lStack_2f8;
      plVar31[2] = lStack_300;
      plVar31[4] = CONCAT17(cStack_2e9,uStack_2f0);
    }
    plVar31[5] = 0;
    plVar31[6] = 0;
    puStack_200 = (undefined *)CONCAT71(puStack_200._1_7_,1);
    if ((ppuVar9 != (undefined8 **)0x0) &&
       ((float)((long)ppuVar8[0xd] + 1) <= *(float *)(ppuVar8 + 0xe) * (float)ppuVar9)) {
LAB_10a150ecc:
      puVar21 = *ppuVar28;
      plVar12 = (long *)puVar21[(long)ppuVar32];
      if (plVar12 == (long *)0x0) {
        *plVar31 = (long)*ppuVar34;
        *ppuVar34 = plVar31;
        puVar21[(long)ppuVar32] = ppuVar34;
        if (*plVar31 != 0) {
          ppuVar16 = *(undefined8 ***)(*plVar31 + 8);
          if (((ulong)ppuVar9 & (long)ppuVar9 - 1U) == 0) {
            ppuVar16 = (undefined8 **)((ulong)ppuVar16 & (long)ppuVar9 - 1U);
          }
          else if (ppuVar9 <= ppuVar16) {
            uVar35 = 0;
            if (ppuVar9 != (undefined8 **)0x0) {
              uVar35 = (ulong)ppuVar16 / (ulong)ppuVar9;
            }
            ppuVar16 = (undefined8 **)((long)ppuVar16 - uVar35 * (long)ppuVar9);
          }
          (*ppuVar28)[(long)ppuVar16] = plVar31;
        }
      }
      else {
        *plVar31 = *plVar12;
        *plVar12 = (long)plVar31;
      }
      ppuVar8[0xd] = (undefined8 *)((long)ppuVar8[0xd] + 1);
LAB_10a150f44:
      lVar36 = extraout_x8[1];
      lVar19 = *extraout_x8;
      if (extraout_x8[1] != 0) {
        plVar12 = (long *)(extraout_x8[1] + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar13 = plVar31[6];
      plVar31[6] = lVar36;
      plVar31[5] = lVar19;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a153698(acStack_330);
      ppuVar16 = ppuStack_308;
      if (ppuStack_308 != (undefined8 **)0x0) {
        ppuVar28 = ppuStack_308 + 1;
        do {
          puVar21 = *ppuVar28;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
          if (bVar2) {
            *ppuVar28 = (undefined8 *)((long)puVar21 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar21 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_308)[2])(ppuStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
        }
      }
      if (plVar30 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar30);
      }
      goto LAB_10a150fc0;
    }
    uVar35 = 1;
    if ((undefined8 **)0x2 < ppuVar9) {
      uVar35 = (ulong)(((ulong)ppuVar9 & (long)ppuVar9 - 1U) != 0);
    }
    ppuVar15 = (undefined8 **)(uVar35 | (long)ppuVar9 << 1);
    ppuVar9 = (undefined8 **)(long)((float)((long)ppuVar8[0xd] + 1) / *(float *)(ppuVar8 + 0xe));
    if (ppuVar15 <= ppuVar9) {
      ppuVar15 = ppuVar9;
    }
    if ((long)ppuVar15 - 1U == 0) {
      ppuVar15 = (undefined8 **)0x2;
    }
    else if (((ulong)ppuVar15 & (long)ppuVar15 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    ppuVar9 = (undefined8 **)ppuVar8[0xb];
    if (ppuVar15 <= ppuVar9) {
      if (ppuVar15 < ppuVar9) {
        ppuVar22 = (undefined8 **)(long)((float)ppuVar8[0xd] / *(float *)(ppuVar8 + 0xe));
        if ((ppuVar9 < (undefined8 **)0x3) || (((ulong)ppuVar9 & (long)ppuVar9 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined8 **)0x1 < ppuVar22) {
          ppuVar22 = (undefined8 **)(1L << (-LZCOUNT((long)ppuVar22 + -1) & 0x3fU));
        }
        if (ppuVar15 <= ppuVar22) {
          ppuVar15 = ppuVar22;
        }
        if (ppuVar15 < ppuVar9) {
          if (ppuVar15 != (undefined8 **)0x0) goto LAB_10a150d58;
          puVar21 = *ppuVar28;
          *ppuVar28 = (undefined8 *)0x0;
          if (puVar21 != (undefined8 *)0x0) {
            __ZdlPv();
          }
          ppuVar8[0xb] = (undefined8 *)0x0;
          ppuVar9 = (undefined8 **)0x0;
        }
        else {
          ppuVar9 = (undefined8 **)ppuVar8[0xb];
        }
      }
LAB_10a150ea0:
      if (((ulong)ppuVar9 & (long)ppuVar9 - 1U) == 0) {
        ppuVar32 = (undefined **)((long)ppuVar9 - 1U & (ulong)ppuVar16);
      }
      else {
        ppuVar32 = (undefined **)ppuVar16;
        if (ppuVar9 <= ppuVar16) {
          uVar35 = 0;
          if (ppuVar9 != (undefined8 **)0x0) {
            uVar35 = (ulong)ppuVar16 / (ulong)ppuVar9;
          }
          ppuVar32 = (undefined **)((long)ppuVar16 - uVar35 * (long)ppuVar9);
        }
      }
      goto LAB_10a150ecc;
    }
LAB_10a150d58:
    if ((ulong)ppuVar15 >> 0x3d == 0) {
      puVar21 = (undefined8 *)((long)ppuVar15 << 3);
      __Znwm();
      puVar18 = *ppuVar28;
      *ppuVar28 = puVar21;
      if (puVar18 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      ppuVar9 = (undefined8 **)0x0;
      ppuVar8[0xb] = ppuVar15;
      do {
        (*ppuVar28)[(long)ppuVar9] = 0;
        ppuVar9 = (undefined8 **)((long)ppuVar9 + 1);
      } while (ppuVar15 != ppuVar9);
      plVar12 = *ppuVar34;
      ppuVar9 = ppuVar15;
      if (plVar12 != (long *)0x0) {
        ppuVar22 = (undefined8 **)plVar12[1];
        uVar35 = (long)ppuVar15 - 1;
        if (((ulong)ppuVar15 & uVar35) == 0) {
          ppuVar22 = (undefined8 **)((ulong)ppuVar22 & uVar35);
        }
        else if (ppuVar15 <= ppuVar22) {
          uVar3 = 0;
          if (ppuVar15 != (undefined8 **)0x0) {
            uVar3 = (ulong)ppuVar22 / (ulong)ppuVar15;
          }
          ppuVar22 = (undefined8 **)((long)ppuVar22 - uVar3 * (long)ppuVar15);
        }
        (*ppuVar28)[(long)ppuVar22] = ppuVar34;
        plVar23 = (long *)*plVar12;
        while (plVar23 != (long *)0x0) {
          ppuVar25 = (undefined8 **)plVar23[1];
          if (((ulong)ppuVar15 & uVar35) == 0) {
            ppuVar25 = (undefined8 **)((ulong)ppuVar25 & uVar35);
          }
          else if (ppuVar15 <= ppuVar25) {
            uVar3 = 0;
            if (ppuVar15 != (undefined8 **)0x0) {
              uVar3 = (ulong)ppuVar25 / (ulong)ppuVar15;
            }
            ppuVar25 = (undefined8 **)((long)ppuVar25 - uVar3 * (long)ppuVar15);
          }
          plVar24 = plVar23;
          if (ppuVar25 != ppuVar22) {
            puVar21 = *ppuVar28;
            if (puVar21[(long)ppuVar25] == 0) {
              puVar21[(long)ppuVar25] = plVar12;
              ppuVar22 = ppuVar25;
            }
            else {
              *plVar12 = *plVar23;
              *plVar23 = *(undefined8 *)puVar21[(long)ppuVar25];
              *(long **)puVar21[(long)ppuVar25] = plVar23;
              plVar24 = plVar12;
            }
          }
          plVar12 = plVar24;
          plVar23 = (long *)*plVar24;
        }
      }
      goto LAB_10a150ea0;
    }
  }
  else {
LAB_10a150fc0:
    __ZNSt3__15mutex6unlockEv(ppuVar8 + 0xf);
    if (cStack_2d1 < '\0') {
      __ZdlPv(uStack_2e8);
    }
    if (cStack_2e9 < '\0') {
      __ZdlPv(lStack_300);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109ffded8();
LAB_10a1510d8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a1510dc);
  (*pcVar7)();
}



/* Entry: 10a1503d0; end: 10a151213;  */

void FUN_10a1503d0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined **ppuVar17;
  ulong uVar18;
  ulong uVar19;
  undefined **ppuVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  undefined **ppuVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  long *plStack_2b0;
  long *plStack_2a8;
  char acStack_2a0 [2];
  undefined2 uStack_29e;
  int iStack_29c;
  undefined **ppuStack_298;
  long *plStack_290;
  undefined1 uStack_288;
  long *plStack_280;
  undefined **ppuStack_278;
  long lStack_270;
  long lStack_268;
  undefined7 uStack_260;
  char cStack_259;
  undefined8 uStack_258;
  char cStack_241;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined4 uStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 *apuStack_1f8 [7];
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 *apuStack_128 [7];
  undefined *puStack_f0;
  undefined **appuStack_e8 [7];
  undefined *puStack_b0;
  undefined **appuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1513b8(&lStack_270,param_3,param_4);
  *param_1 = 0;
  param_1[1] = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 0xf);
  plVar27 = param_2 + 0xc;
  ppuVar20 = (undefined **)(param_2 + 10);
  plVar21 = (long *)*plVar27;
  while (plVar21 != (long *)0x0) {
    if ((plVar21[6] == 0) || (*(long *)(plVar21[6] + 8) == -1)) {
      uVar12 = param_2[0xb];
      uVar28 = plVar21[1];
      uVar14 = uVar12 - 1;
      if ((uVar12 & uVar14) == 0) {
        uVar28 = uVar14 & uVar28;
      }
      else if (uVar12 <= uVar28) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = uVar28 / uVar12;
        }
        uVar28 = uVar28 - uVar18 * uVar12;
      }
      plVar7 = (long *)*plVar21;
      plVar23 = *(long **)(*ppuVar20 + uVar28 * 8);
      do {
        plVar15 = plVar23;
        plVar23 = (long *)*plVar15;
      } while ((long *)*plVar15 != plVar21);
      plVar23 = plVar7;
      if (plVar15 == plVar27) {
LAB_10a1504d4:
        if (plVar7 == (long *)0x0) {
LAB_10a15050c:
          *(undefined8 *)(*ppuVar20 + uVar28 * 8) = 0;
          plVar23 = (long *)*plVar21;
          goto LAB_10a150514;
        }
        uVar18 = plVar7[1];
        if ((uVar12 & uVar14) == 0) {
          uVar19 = uVar18 & uVar14;
        }
        else {
          uVar19 = uVar18;
          if (uVar12 <= uVar18) {
            uVar19 = 0;
            if (uVar12 != 0) {
              uVar19 = uVar18 / uVar12;
            }
            uVar19 = uVar18 - uVar19 * uVar12;
          }
        }
        if (uVar19 != uVar28) goto LAB_10a15050c;
LAB_10a15051c:
        if ((uVar12 & uVar14) == 0) {
          uVar18 = uVar18 & uVar14;
        }
        else if (uVar12 <= uVar18) {
          uVar14 = 0;
          if (uVar12 != 0) {
            uVar14 = uVar18 / uVar12;
          }
          uVar18 = uVar18 - uVar14 * uVar12;
        }
        if (uVar18 != uVar28) {
          *(long **)(*ppuVar20 + uVar18 * 8) = plVar15;
          plVar23 = (long *)*plVar21;
        }
      }
      else {
        uVar18 = plVar15[1];
        if ((uVar12 & uVar14) == 0) {
          uVar18 = uVar18 & uVar14;
        }
        else if (uVar12 <= uVar18) {
          uVar19 = 0;
          if (uVar12 != 0) {
            uVar19 = uVar18 / uVar12;
          }
          uVar18 = uVar18 - uVar19 * uVar12;
        }
        if (uVar18 != uVar28) goto LAB_10a1504d4;
LAB_10a150514:
        if (plVar23 != (long *)0x0) {
          uVar18 = plVar23[1];
          goto LAB_10a15051c;
        }
      }
      *plVar15 = (long)plVar23;
      *plVar21 = 0;
      param_2[0xd] = param_2[0xd] + -1;
      func_0x00010a152330(plVar21 + 2);
      __ZdlPv(plVar21);
      plVar21 = plVar7;
    }
    else {
      plVar21 = (long *)*plVar21;
    }
  }
  ppuVar11 = ppuVar20;
  FUN_10a151f88(ppuVar20,&lStack_270);
  if (ppuVar11 != (undefined **)0x0) {
    plStack_180 = (long *)0x0;
    ppuStack_178 = (undefined **)0x0;
    ppuVar5 = (undefined **)ppuVar11[6];
    if ((ppuVar5 != (undefined **)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_178 = ppuVar5,
       ppuVar5 != (undefined **)0x0)) {
      plStack_180 = (long *)ppuVar11[5];
    }
    FUN_10a152118(param_1,&plStack_180);
    ppuVar11 = ppuStack_178;
    if (ppuStack_178 != (undefined **)0x0) {
      ppuVar5 = ppuStack_178 + 1;
      do {
        puVar13 = *ppuVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar2) {
          *ppuVar5 = puVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar13 == (undefined *)0x0) {
        (**(code **)(*ppuStack_178 + 0x10))(ppuStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
      }
    }
  }
  if (*param_1 == 0) {
    __ZNSt3__15mutex4lockEv(param_2 + 2);
    plVar21 = (long *)param_2[1];
    if (plVar21 == (long *)0x0) {
      __ZNSt3__15mutex6unlockEv(param_2 + 2);
LAB_10a150688:
      plStack_280 = (long *)0x0;
      ppuStack_278 = (undefined **)0x0;
    }
    else {
      lVar24 = *param_2;
      plVar23 = plVar21 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar2) {
          *plVar23 = *plVar23 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__15mutex6unlockEv(param_2 + 2);
      plVar23 = plVar21;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar23 == (long *)0x0) goto LAB_10a150688;
      if (lVar24 == 0) {
        plStack_280 = (long *)0x0;
        ppuStack_278 = (undefined **)0x0;
      }
      else {
        func_0x00010a152370(&plStack_180,lVar24);
        plStack_280 = (long *)0x0;
        ppuStack_278 = (undefined **)0x0;
        if (ppuStack_178 != (undefined **)0x0) {
          ppuVar11 = ppuStack_178;
          __ZNSt3__119__shared_weak_count4lockEv();
          if (ppuVar11 != (undefined **)0x0) {
            plStack_280 = plStack_180;
          }
          ppuStack_278 = ppuVar11;
          if (ppuStack_178 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      plVar7 = plVar23 + 1;
      do {
        lVar24 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar24 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    puVar13 = PTR___tlv_bootstrap_11340d750;
    ppuVar11 = &PTR___tlv_bootstrap_11340d750;
    ppuVar26 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar5 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar26 & 1) == 0) {
      ppuVar26 = ppuVar5;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar26,0x100000000);
      ppuVar26 = ppuVar11;
      (*(code *)puVar13)();
      *(undefined1 *)ppuVar26 = 1;
    }
    puVar8 = PTR___tlv_bootstrap_11340d738;
    ppuVar26 = ppuVar5;
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    FUN_10a15217c();
    ppuVar10 = ppuVar11;
    (*(code *)puVar13)();
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar10 = ppuVar5;
      (*(code *)puVar8)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
      (*(code *)puVar13)();
      *(undefined1 *)ppuVar11 = 1;
    }
    puVar22 = (undefined8 *)ppuVar26[2];
    if (puVar22 == (undefined8 *)0x0) {
      acStack_2a0[0] = '\0';
      plStack_290 = (long *)0x0;
      uStack_288 = 0;
    }
    else {
      cVar1 = *(char *)(puVar22[1] + 0x17);
      uStack_29e = 7;
      ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
      acStack_2a0[0] = cVar1;
      (*(code *)PTR___tlv_bootstrap_11340dd08)();
      iVar25 = *(int *)ppuVar11;
      if (*(int *)ppuVar11 == 0) {
        plStack_180 = (long *)0x0;
        _pthread_threadid_np(0,&plStack_180);
        *(int *)ppuVar11 = (int)plStack_180;
        ppuVar5 = ppuVar11;
        iVar25 = (int)plStack_180;
      }
      plStack_290 = (long *)0x0;
      uStack_288 = 0;
      iStack_29c = iVar25;
      if (cVar1 != '\0') {
        lVar24 = puVar22[1];
        bVar3 = *(byte *)(lVar24 + 0x42) | *(byte *)(lVar24 + 0x43);
        if (((bVar3 & 1) != 0) || (*(char *)(lVar24 + 0x40) == '\x01')) {
          uVar28 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          ppuVar5 = (undefined **)cntvct_el0;
          if (uVar28 != 1000000000) {
            uVar12 = 0;
            if (uVar28 != 0) {
              uVar12 = (ulong)ppuVar5 / uVar28;
            }
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = (((long)ppuVar5 - uVar12 * uVar28) * 1000000000) / uVar28;
            }
            ppuVar5 = (undefined **)(uVar14 + uVar12 * 1000000000);
          }
          ppuStack_298 = ppuVar5;
          if (((bVar3 & 1) != 0) && (puVar6 = puVar22, FUN_10a1333cc(), puVar6 != (undefined8 *)0x0)
             ) {
            *puVar6 = &UNK_10f63ef3a;
            puVar6[1] = 0;
            puVar6[2] = ppuVar5;
            *(int *)(puVar6 + 3) = iVar25;
            *(undefined2 *)((long)puVar6 + 0x1c) = 7;
            *(undefined1 *)((long)puVar6 + 0x1e) = 3;
            if ((*(byte *)(puVar22 + 0x38) & 1) == 0) goto LAB_10a1510d8;
            puVar22[0x18] = puVar22[0x18] + 1;
          }
        }
        if (*(char *)(puVar22[1] + 0x41) == '\x01') {
          plVar23 = (long *)puVar22[0xb];
          if (plVar23 != (long *)0x0) {
            plVar7 = plVar23;
            (**(code **)(*plVar23 + 0x10))(plVar23,&UNK_10f63ef3a);
            plStack_290 = plVar7;
          }
          uStack_288 = plVar23 != (long *)0x0;
        }
      }
    }
    uStack_200 = *param_5;
    (**(code **)(param_5[1] + 0x10))(apuStack_1f8,param_5 + 1);
    if (*(char *)(apuStack_1f8[0] + 1) == '\x01') {
      plStack_180 = (long *)&UNK_1092b3618;
      ppuStack_178 = &PTR_DAT_110ae88b8;
      puStack_170 = &UNK_1092b46b0;
      uStack_140 = 0;
      plStack_138 = (long *)0x0;
      uStack_130 = uStack_200;
      (*(code *)apuStack_1f8[0][2])(apuStack_128,apuStack_1f8);
      puStack_f0 = &UNK_1092b363c;
      appuStack_e8[0] = &PTR_DAT_110ae88d0;
      puStack_b0 = &UNK_1092b3664;
      appuStack_a8[0] = &PTR_DAT_110ae88f0;
      func_0x0001092b2ffc(&plStack_208,&plStack_180);
      (*(code *)*appuStack_a8[0])(appuStack_a8);
      (*(code *)*appuStack_e8[0])(appuStack_e8);
      (*(code *)*apuStack_128[0])(apuStack_128);
      plVar23 = plStack_138;
      if (plStack_138 != (long *)0x0) {
        plVar7 = plStack_138 + 1;
        do {
          lVar24 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar24 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      (*(code *)*ppuStack_178)(&ppuStack_178);
      uStack_210 = 0;
      uStack_230 = 0;
      plStack_228 = (long *)0x0;
      uStack_218 = 1;
      plStack_220 = plStack_208;
      puVar6 = (undefined8 *)0x68;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110ba8568;
      puVar22 = puVar6 + 3;
      puStack_1c0 = (undefined *)0x0;
      ppuStack_1b8 = (undefined **)0x0;
      uStack_230 = 0;
      plStack_228 = (long *)0x0;
      uStack_1a8 = CONCAT71(uStack_217,uStack_218);
      plStack_1b0 = plStack_220;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uStack_210);
      func_0x0001092bcda8(puVar22,&puStack_1c0);
      ppuVar11 = ppuStack_1b8;
      if (ppuStack_1b8 != (undefined **)0x0) {
        ppuVar5 = ppuStack_1b8 + 1;
        do {
          puVar13 = *ppuVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar2) {
            *ppuVar5 = puVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
        }
      }
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      ppuVar5 = &puStack_1c0;
      puStack_1c0 = &UNK_1069b161c;
      ppuStack_1b8 = &PTR_DAT_110950c70;
      puStack_240 = puVar22;
      puStack_238 = puVar6;
      func_0x0001092bd244(puVar22,&lStack_270,&puStack_1c0,0x201);
      (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
      func_0x0001092beb88(puVar22);
      plVar7 = (long *)0x48;
      __Znwm();
      plVar23 = plStack_208;
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_DAT_110ba85b8;
      plStack_208 = (long *)0x0;
      plStack_2b0 = plVar7 + 3;
      *plStack_2b0 = 0;
      plVar7[4] = 0;
      plVar7[5] = (long)plVar23;
      plVar7[6] = (long)puVar22;
      plVar7[7] = (long)puVar6;
      *(undefined4 *)(plVar7 + 8) = 1;
      plStack_2a8 = plVar7;
      FUN_10a1534d4();
      plVar23 = plStack_228;
      if (plStack_228 != (long *)0x0) {
        plVar7 = plStack_228 + 1;
        do {
          lVar24 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar24 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_228 + 0x10))(plStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      plVar23 = plStack_208;
      plStack_208 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 8))();
      }
    }
    else {
      FUN_10a1535d4(&puStack_1c0);
      puVar13 = puStack_1c0;
      FUN_10ad03f74(&plStack_180);
      func_0x0001092bd244(puVar13,&lStack_270,&plStack_180,0x201);
      (*(code *)*ppuStack_178)(&ppuStack_178);
      func_0x0001092beb88(puVar13);
      plVar23 = (long *)0x48;
      __Znwm();
      plVar23[1] = 0;
      plVar23[2] = 0;
      *plVar23 = (long)&PTR_DAT_110ba85b8;
      plStack_2b0 = plVar23 + 3;
      *plStack_2b0 = 0;
      plVar23[4] = 0;
      plVar23[5] = 0;
      plVar23[6] = (long)puVar13;
      plVar23[7] = (long)ppuStack_1b8;
      *(undefined4 *)(plVar23 + 8) = 0;
      plStack_2a8 = plVar23;
      FUN_10a1534d4();
    }
    FUN_10a152118(param_1,&plStack_2b0);
    plVar23 = plStack_2a8;
    if (plStack_2a8 != (long *)0x0) {
      plVar7 = plStack_2a8 + 1;
      do {
        lVar24 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar24 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    (*(code *)*apuStack_1f8[0])(apuStack_1f8);
    ppuVar11 = ppuVar20;
    func_0x000107c2b05c(ppuVar20,&lStack_270);
    ppuVar26 = (undefined **)param_2[0xb];
    if (ppuVar26 != (undefined **)0x0) {
      uVar28 = (long)ppuVar26 - 1;
      if (((ulong)ppuVar26 & uVar28) == 0) {
        ppuVar5 = (undefined **)(uVar28 & (ulong)ppuVar11);
      }
      else {
        ppuVar5 = ppuVar11;
        if (ppuVar26 <= ppuVar11) {
          uVar12 = 0;
          if (ppuVar26 != (undefined **)0x0) {
            uVar12 = (ulong)ppuVar11 / (ulong)ppuVar26;
          }
          ppuVar5 = (undefined **)((long)ppuVar11 - uVar12 * (long)ppuVar26);
        }
      }
      if (*(undefined8 **)(*ppuVar20 + (long)ppuVar5 * 8) != (undefined8 *)0x0) {
        for (plVar23 = (long *)**(undefined8 **)(*ppuVar20 + (long)ppuVar5 * 8);
            plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
          ppuVar10 = (undefined **)plVar23[1];
          if (ppuVar10 == ppuVar11) {
            ppuVar10 = ppuVar20;
            func_0x000107c2b068(ppuVar20,plVar23 + 2,&lStack_270);
            if (((ulong)ppuVar10 & 1) != 0) goto LAB_10a150f44;
          }
          else {
            if (((ulong)ppuVar26 & uVar28) == 0) {
              ppuVar10 = (undefined **)((ulong)ppuVar10 & uVar28);
            }
            else if (ppuVar26 <= ppuVar10) {
              uVar12 = 0;
              if (ppuVar26 != (undefined **)0x0) {
                uVar12 = (ulong)ppuVar10 / (ulong)ppuVar26;
              }
              ppuVar10 = (undefined **)((long)ppuVar10 - uVar12 * (long)ppuVar26);
            }
            if (ppuVar10 != ppuVar5) break;
          }
        }
      }
    }
    plVar23 = (long *)0x38;
    __Znwm();
    puStack_170 = (undefined *)0x0;
    *plVar23 = 0;
    plVar23[1] = (long)ppuVar11;
    plStack_180 = plVar23;
    ppuStack_178 = ppuVar20;
    if (cStack_259 < '\0') {
      func_0x000107c3192c(plVar23 + 2,lStack_270,lStack_268);
    }
    else {
      plVar23[3] = lStack_268;
      plVar23[2] = lStack_270;
      plVar23[4] = CONCAT17(cStack_259,uStack_260);
    }
    plVar23[5] = 0;
    plVar23[6] = 0;
    puStack_170 = (undefined *)CONCAT71(puStack_170._1_7_,1);
    if ((ppuVar26 != (undefined **)0x0) &&
       ((float)(param_2[0xd] + 1) <= *(float *)(param_2 + 0xe) * (float)ppuVar26)) {
LAB_10a150ecc:
      puVar13 = *ppuVar20;
      plVar7 = *(long **)(puVar13 + (long)ppuVar5 * 8);
      if (plVar7 == (long *)0x0) {
        *plVar23 = *plVar27;
        *plVar27 = (long)plVar23;
        *(long **)(puVar13 + (long)ppuVar5 * 8) = plVar27;
        if (*plVar23 != 0) {
          ppuVar11 = *(undefined ***)(*plVar23 + 8);
          if (((ulong)ppuVar26 & (long)ppuVar26 - 1U) == 0) {
            ppuVar11 = (undefined **)((ulong)ppuVar11 & (long)ppuVar26 - 1U);
          }
          else if (ppuVar26 <= ppuVar11) {
            uVar28 = 0;
            if (ppuVar26 != (undefined **)0x0) {
              uVar28 = (ulong)ppuVar11 / (ulong)ppuVar26;
            }
            ppuVar11 = (undefined **)((long)ppuVar11 - uVar28 * (long)ppuVar26);
          }
          *(long **)(*ppuVar20 + (long)ppuVar11 * 8) = plVar23;
        }
      }
      else {
        *plVar23 = *plVar7;
        *plVar7 = (long)plVar23;
      }
      param_2[0xd] = param_2[0xd] + 1;
LAB_10a150f44:
      lVar29 = param_1[1];
      lVar24 = *param_1;
      if (param_1[1] != 0) {
        plVar27 = (long *)(param_1[1] + 0x10);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar2) {
            *plVar27 = *plVar27 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar9 = plVar23[6];
      plVar23[6] = lVar29;
      plVar23[5] = lVar24;
      if (lVar9 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a153698(acStack_2a0);
      ppuVar20 = ppuStack_278;
      if (ppuStack_278 != (undefined **)0x0) {
        ppuVar11 = ppuStack_278 + 1;
        do {
          puVar13 = *ppuVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar2) {
            *ppuVar11 = puVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar13 == (undefined *)0x0) {
          (**(code **)(*ppuStack_278 + 0x10))(ppuStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
        }
      }
      if (plVar21 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
      }
      goto LAB_10a150fc0;
    }
    uVar28 = 1;
    if ((undefined **)0x2 < ppuVar26) {
      uVar28 = (ulong)(((ulong)ppuVar26 & (long)ppuVar26 - 1U) != 0);
    }
    ppuVar5 = (undefined **)(uVar28 | (long)ppuVar26 << 1);
    ppuVar26 = (undefined **)(long)((float)(param_2[0xd] + 1) / *(float *)(param_2 + 0xe));
    if (ppuVar5 <= ppuVar26) {
      ppuVar5 = ppuVar26;
    }
    if ((long)ppuVar5 - 1U == 0) {
      ppuVar5 = (undefined **)0x2;
    }
    else if (((ulong)ppuVar5 & (long)ppuVar5 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    ppuVar26 = (undefined **)param_2[0xb];
    if (ppuVar5 <= ppuVar26) {
      if (ppuVar5 < ppuVar26) {
        ppuVar10 = (undefined **)(long)((float)(ulong)param_2[0xd] / *(float *)(param_2 + 0xe));
        if ((ppuVar26 < (undefined **)0x3) || (((ulong)ppuVar26 & (long)ppuVar26 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((undefined **)0x1 < ppuVar10) {
          ppuVar10 = (undefined **)(1L << (-LZCOUNT((long)ppuVar10 + -1) & 0x3fU));
        }
        if (ppuVar5 <= ppuVar10) {
          ppuVar5 = ppuVar10;
        }
        if (ppuVar5 < ppuVar26) {
          if (ppuVar5 != (undefined **)0x0) goto LAB_10a150d58;
          puVar13 = *ppuVar20;
          *ppuVar20 = (undefined *)0x0;
          if (puVar13 != (undefined *)0x0) {
            __ZdlPv();
          }
          param_2[0xb] = 0;
          ppuVar26 = (undefined **)0x0;
        }
        else {
          ppuVar26 = (undefined **)param_2[0xb];
        }
      }
LAB_10a150ea0:
      if (((ulong)ppuVar26 & (long)ppuVar26 - 1U) == 0) {
        ppuVar5 = (undefined **)((long)ppuVar26 - 1U & (ulong)ppuVar11);
      }
      else {
        ppuVar5 = ppuVar11;
        if (ppuVar26 <= ppuVar11) {
          uVar28 = 0;
          if (ppuVar26 != (undefined **)0x0) {
            uVar28 = (ulong)ppuVar11 / (ulong)ppuVar26;
          }
          ppuVar5 = (undefined **)((long)ppuVar11 - uVar28 * (long)ppuVar26);
        }
      }
      goto LAB_10a150ecc;
    }
LAB_10a150d58:
    if ((ulong)ppuVar5 >> 0x3d == 0) {
      puVar13 = (undefined *)((long)ppuVar5 << 3);
      __Znwm();
      puVar8 = *ppuVar20;
      *ppuVar20 = puVar13;
      if (puVar8 != (undefined *)0x0) {
        __ZdlPv();
      }
      ppuVar26 = (undefined **)0x0;
      param_2[0xb] = (long)ppuVar5;
      do {
        *(undefined8 *)(*ppuVar20 + (long)ppuVar26 * 8) = 0;
        ppuVar26 = (undefined **)((long)ppuVar26 + 1);
      } while (ppuVar5 != ppuVar26);
      plVar7 = (long *)*plVar27;
      ppuVar26 = ppuVar5;
      if (plVar7 != (long *)0x0) {
        ppuVar10 = (undefined **)plVar7[1];
        uVar28 = (long)ppuVar5 - 1;
        if (((ulong)ppuVar5 & uVar28) == 0) {
          ppuVar10 = (undefined **)((ulong)ppuVar10 & uVar28);
        }
        else if (ppuVar5 <= ppuVar10) {
          uVar12 = 0;
          if (ppuVar5 != (undefined **)0x0) {
            uVar12 = (ulong)ppuVar10 / (ulong)ppuVar5;
          }
          ppuVar10 = (undefined **)((long)ppuVar10 - uVar12 * (long)ppuVar5);
        }
        *(long **)(*ppuVar20 + (long)ppuVar10 * 8) = plVar27;
        plVar15 = (long *)*plVar7;
        while (plVar15 != (long *)0x0) {
          ppuVar17 = (undefined **)plVar15[1];
          if (((ulong)ppuVar5 & uVar28) == 0) {
            ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar28);
          }
          else if (ppuVar5 <= ppuVar17) {
            uVar12 = 0;
            if (ppuVar5 != (undefined **)0x0) {
              uVar12 = (ulong)ppuVar17 / (ulong)ppuVar5;
            }
            ppuVar17 = (undefined **)((long)ppuVar17 - uVar12 * (long)ppuVar5);
          }
          plVar16 = plVar15;
          if (ppuVar17 != ppuVar10) {
            puVar13 = *ppuVar20;
            if (*(long *)(puVar13 + (long)ppuVar17 * 8) == 0) {
              *(long **)(puVar13 + (long)ppuVar17 * 8) = plVar7;
              ppuVar10 = ppuVar17;
            }
            else {
              *plVar7 = *plVar15;
              *plVar15 = **(undefined8 **)(puVar13 + (long)ppuVar17 * 8);
              **(long **)(puVar13 + (long)ppuVar17 * 8) = (long)plVar15;
              plVar16 = plVar7;
            }
          }
          plVar7 = plVar16;
          plVar15 = (long *)*plVar16;
        }
      }
      goto LAB_10a150ea0;
    }
  }
  else {
LAB_10a150fc0:
    __ZNSt3__15mutex6unlockEv(param_2 + 0xf);
    if (cStack_241 < '\0') {
      __ZdlPv(uStack_258);
    }
    if (cStack_259 < '\0') {
      __ZdlPv(lStack_270);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109ffded8();
LAB_10a1510d8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1510dc);
  (*pcVar4)();
}



/* Entry: 10a151214; end: 10a151323;  */

undefined8 FUN_10a151214(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113834e68 & 1) == 0) {
    iVar1 = 0x13834e68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0xb8;
      __Znwm();
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[2] = 0x32aaaba7;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *(undefined4 *)(puVar2 + 0xe) = 0x3f800000;
      puVar2[0xf] = 0x32aaaba7;
      puVar2[0x16] = 0;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0;
      puVar2[0x14] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puRam0000000113834e60 = puVar2;
      ___cxa_guard_release(0x113834e68);
    }
  }
  return 0x113834e60;
}



/* Entry: 10a151324; end: 10a1513b7;  */

void FUN_10a151324(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,param_3 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f63eef0,6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,param_2,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&UNK_10f63ef48,2);
  return;
}



/* Entry: 10a1513b8; end: 10a15151f;  */

void FUN_10a1513b8(ulong *param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long *plVar8;
  ulong *puVar9;
  long lStack_70;
  undefined1 *puStack_68;
  
  plVar8 = &lStack_70;
  lStack_70 = param_2;
  puStack_68 = param_3;
  FUN_10a0ee2b4(&lStack_70,&UNK_10f63ef48,2,0);
  puVar6 = puStack_68;
  lVar5 = lStack_70;
  puVar3 = (undefined1 *)((long)plVar8 + -6);
  if ((long)puVar3 < 0) goto LAB_10a151500;
  puVar1 = (undefined1 *)((long)plVar8 + 2);
  uVar4 = (long)puStack_68 - (long)puVar1;
  if ((long)uVar4 < 0) goto LAB_10a151500;
  if (puVar3 < (undefined1 *)0x7ffffffffffffff8) {
    if (puVar3 < (undefined1 *)0x17) {
      *(char *)((long)param_1 + 0x17) = (char)puVar3;
      puVar9 = param_1;
      if (puVar3 != (undefined1 *)0x0) goto LAB_10a151464;
    }
    else {
      puVar2 = (ulong *)0x19;
      if (((ulong)puVar3 | 7) != 0x17) {
        puVar2 = (ulong *)(((ulong)puVar3 | 7) + 1);
      }
      puVar9 = puVar2;
      __Znwm();
      param_1[1] = (ulong)puVar3;
      param_1[2] = (ulong)puVar2 | 0x8000000000000000;
      *param_1 = (ulong)puVar9;
LAB_10a151464:
      _memmove(puVar9,lVar5 + 6,puVar3);
    }
    *(undefined1 *)((long)puVar9 + (long)puVar3) = 0;
    if (uVar4 < 0x7ffffffffffffff8) {
      if (uVar4 < 0x17) {
        puVar9 = param_1 + 3;
        *(char *)((long)param_1 + 0x2f) = (char)uVar4;
        if (puVar6 == puVar1) goto LAB_10a1514d4;
      }
      else {
        puVar2 = (ulong *)0x19;
        if ((uVar4 | 7) != 0x17) {
          puVar2 = (ulong *)((uVar4 | 7) + 1);
        }
        puVar9 = puVar2;
        __Znwm();
        param_1[4] = uVar4;
        param_1[5] = (ulong)puVar2 | 0x8000000000000000;
        param_1[3] = (ulong)puVar9;
      }
      _memmove(puVar9,puVar1 + lVar5,uVar4);
LAB_10a1514d4:
      *(undefined1 *)((long)puVar9 + uVar4) = 0;
      return;
    }
  }
  else {
    func_0x000109ffde50();
  }
  func_0x000109ffde50();
LAB_10a151500:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a151504);
  (*pcVar7)();
}



/* Entry: 10a151520; end: 10a1515a7;  */

undefined1 * FUN_10a151520(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *****pppppuStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 ****ppppuStack_250;
  undefined8 ****ppppuStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 *****pppppuStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  char cStack_201;
  undefined8 *****pppppuStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 *apuStack_1c8 [7];
  undefined1 auStack_190 [72];
  long lStack_148;
  undefined1 auStack_e0 [72];
  long lStack_98;
  undefined1 auStack_70 [72];
  long lStack_28;
  
  puVar17 = auStack_70;
  puVar11 = auStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_70);
  func_0x0001092bcfc4(auStack_70);
  FUN_10a09a0e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar17;
  }
  ___stack_chk_fail();
  FUN_10a09a0e4(auStack_70);
  __Unwind_Resume(puVar11);
  puVar17 = auStack_e0;
  puVar11 = auStack_e0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_e0);
  func_0x0001092bd0ac(auStack_e0);
  FUN_10a09a0e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return puVar17;
  }
  ___stack_chk_fail();
  FUN_10a09a0e4(auStack_e0);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_190);
  iVar9 = (int)auStack_190;
  func_0x0001092bcfc4();
  if (iVar9 != 0) {
    uVar10 = (uint)auStack_190;
    func_0x0001092bd0ac();
    if (2 < uVar10) {
      FUN_10a1535d4(&puStack_1e0);
      puVar18 = puStack_1e0;
      puVar17 = puVar11;
      func_0x00010a1512bc(puVar11,param_2);
      if ((int)puVar17 == 0) {
        if (param_2 < 0x7ffffffffffffff8) {
          if (param_2 < 0x17) {
            uStack_1f0 = CONCAT17((char)param_2,(undefined7)uStack_1f0);
            ppppppuVar12 = &pppppuStack_200;
            if (param_2 != 0) goto LAB_10a151730;
          }
          else {
            ppppppuVar13 = (undefined8 ******)0x19;
            if ((param_2 | 7) != 0x17) {
              ppppppuVar13 = (undefined8 ******)((param_2 | 7) + 1);
            }
            ppppppuVar12 = ppppppuVar13;
            __Znwm();
            uStack_1f0 = (ulong)ppppppuVar13 | 0x8000000000000000;
            pppppuStack_200 = ppppppuVar12;
            uStack_1f8 = param_2;
LAB_10a151730:
            _memmove(ppppppuVar12,puVar11,param_2);
          }
          *(undefined1 *)((long)ppppppuVar12 + param_2) = 0;
          goto LAB_10a151744;
        }
      }
      else {
        FUN_10a1513b8(&pppppuStack_230,puVar11,param_2);
        uStack_1f8 = uStack_228;
        pppppuStack_200 = pppppuStack_230;
        uStack_1f0 = uStack_220;
        uStack_228 = 0;
        uStack_220 = 0;
        pppppuStack_230 = (undefined8 ******)0x0;
LAB_10a151744:
        FUN_10ad03f74(auStack_1d0);
        func_0x0001092bd244(puVar18,&pppppuStack_200,auStack_1d0,0);
        (*(code *)*apuStack_1c8[0])(apuStack_1c8);
        if ((long)uStack_1f0 < 0) {
          __ZdlPv(pppppuStack_200);
        }
        if ((int)puVar17 != 0) {
          if (cStack_201 < '\0') {
            __ZdlPv(uStack_218);
          }
          if ((long)uStack_220 < 0) {
            __ZdlPv(pppppuStack_230);
          }
        }
        if (0x7ffffffffffffff7 < param_4) {
          func_0x000109ffde50();
          goto LAB_10a1519a8;
        }
        if (param_4 < 0x17) {
          uStack_258 = CONCAT17((char)param_4,(undefined7)uStack_258);
          ppppppuVar12 = &pppppuStack_268;
          if (param_4 != 0) goto LAB_10a1517f8;
        }
        else {
          ppppppuVar13 = (undefined8 ******)0x19;
          if ((param_4 | 7) != 0x17) {
            ppppppuVar13 = (undefined8 ******)((param_4 | 7) + 1);
          }
          ppppppuVar12 = ppppppuVar13;
          __Znwm();
          uStack_258 = (ulong)ppppppuVar13 | 0x8000000000000000;
          pppppuStack_268 = ppppppuVar12;
          uStack_260 = param_4;
LAB_10a1517f8:
          _memmove(ppppppuVar12,param_3,param_4);
        }
        *(undefined1 *)((long)ppppppuVar12 + param_4) = 0;
        ppppppuVar13 = &pppppuStack_268;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppppppuVar13,0,"/",1);
        ppppuStack_248 = ppppppuVar13[1];
        ppppuStack_250 = *ppppppuVar13;
        ppppuStack_240 = ppppppuVar13[2];
        ppppppuVar13[1] = (undefined8 *****)0x0;
        ppppppuVar13[2] = (undefined8 *****)0x0;
        *ppppppuVar13 = (undefined8 *****)0x0;
        FUN_10ad03508(&pppppuStack_200,&ppppuStack_250);
        if ((long)ppppuStack_240 < 0) {
          __ZdlPv(ppppuStack_250);
        }
        if ((long)uStack_258 < 0) {
          __ZdlPv(pppppuStack_268);
        }
        func_0x0001092bce90(puStack_1e0);
        plVar14 = (long *)*puStack_1e0;
        (**(code **)(*plVar14 + 0x50))();
        uVar7 = uStack_1f0;
        puVar18 = (undefined8 *)*plVar14;
        puVar2 = (undefined8 *)plVar14[1];
        if (puVar18 != puVar2) {
          uVar6 = uStack_1f8;
          ppppppuVar13 = (undefined8 ******)pppppuStack_200;
          if (-1 < (long)uStack_1f0) {
            uVar6 = uStack_1f0 >> 0x38;
            ppppppuVar13 = &pppppuStack_200;
          }
          do {
            bVar3 = *(byte *)((long)puVar18 + 0x17);
            uVar1 = puVar18[1];
            if (-1 < (char)bVar3) {
              uVar1 = (ulong)bVar3;
            }
            if (uVar1 == uVar6) {
              puVar15 = (undefined8 *)*puVar18;
              if (-1 < (char)bVar3) {
                puVar15 = puVar18;
              }
              _memcmp(puVar15,ppppppuVar13,uVar6);
              if ((int)puVar15 == 0) {
                puVar17 = (undefined1 *)0x1;
                goto joined_r0x00010a151980;
              }
            }
            puVar18 = puVar18 + 5;
          } while (puVar18 != puVar2);
        }
        puVar17 = (undefined1 *)0x0;
joined_r0x00010a151980:
        if ((long)uVar7 < 0) {
          __ZdlPv(pppppuStack_200);
        }
        if (plStack_1d8 != (long *)0x0) {
          plVar14 = plStack_1d8 + 1;
          do {
            lVar16 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
          }
        }
        FUN_10a09a0e4(auStack_190);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
          return puVar17;
        }
        ___stack_chk_fail();
      }
      func_0x000109ffde50();
      goto LAB_10a1519a8;
    }
  }
  FUN_10a00946c(&UNK_10f63ef4b);
LAB_10a1519a8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1519ac);
  (*pcVar8)();
}



/* Entry: 10a1515a8; end: 10a15162f;  */

undefined1 * FUN_10a1515a8(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *****pppppuStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined8 ****ppppuStack_1d0;
  undefined8 *****pppppuStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  char cStack_191;
  undefined8 *****pppppuStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_170;
  long *plStack_168;
  undefined1 auStack_160 [8];
  undefined8 *apuStack_158 [7];
  undefined1 auStack_120 [72];
  long lStack_d8;
  undefined1 auStack_70 [72];
  long lStack_28;
  
  puVar17 = auStack_70;
  puVar11 = auStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_70);
  func_0x0001092bd0ac(auStack_70);
  FUN_10a09a0e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar17;
  }
  ___stack_chk_fail();
  FUN_10a09a0e4(auStack_70);
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_120);
  iVar9 = (int)auStack_120;
  func_0x0001092bcfc4();
  if (iVar9 != 0) {
    uVar10 = (uint)auStack_120;
    func_0x0001092bd0ac();
    if (2 < uVar10) {
      FUN_10a1535d4(&puStack_170);
      puVar18 = puStack_170;
      puVar17 = puVar11;
      func_0x00010a1512bc(puVar11,param_2);
      if ((int)puVar17 == 0) {
        if (param_2 < 0x7ffffffffffffff8) {
          if (param_2 < 0x17) {
            uStack_180 = CONCAT17((char)param_2,(undefined7)uStack_180);
            ppppppuVar12 = &pppppuStack_190;
            if (param_2 != 0) goto LAB_10a151730;
          }
          else {
            ppppppuVar13 = (undefined8 ******)0x19;
            if ((param_2 | 7) != 0x17) {
              ppppppuVar13 = (undefined8 ******)((param_2 | 7) + 1);
            }
            ppppppuVar12 = ppppppuVar13;
            __Znwm();
            uStack_180 = (ulong)ppppppuVar13 | 0x8000000000000000;
            pppppuStack_190 = ppppppuVar12;
            uStack_188 = param_2;
LAB_10a151730:
            _memmove(ppppppuVar12,puVar11,param_2);
          }
          *(undefined1 *)((long)ppppppuVar12 + param_2) = 0;
          goto LAB_10a151744;
        }
      }
      else {
        FUN_10a1513b8(&pppppuStack_1c0,puVar11,param_2);
        uStack_188 = uStack_1b8;
        pppppuStack_190 = pppppuStack_1c0;
        uStack_180 = uStack_1b0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        pppppuStack_1c0 = (undefined8 ******)0x0;
LAB_10a151744:
        FUN_10ad03f74(auStack_160);
        func_0x0001092bd244(puVar18,&pppppuStack_190,auStack_160,0);
        (*(code *)*apuStack_158[0])(apuStack_158);
        if ((long)uStack_180 < 0) {
          __ZdlPv(pppppuStack_190);
        }
        if ((int)puVar17 != 0) {
          if (cStack_191 < '\0') {
            __ZdlPv(uStack_1a8);
          }
          if ((long)uStack_1b0 < 0) {
            __ZdlPv(pppppuStack_1c0);
          }
        }
        if (0x7ffffffffffffff7 < param_4) {
          func_0x000109ffde50();
          goto LAB_10a1519a8;
        }
        if (param_4 < 0x17) {
          uStack_1e8 = CONCAT17((char)param_4,(undefined7)uStack_1e8);
          ppppppuVar12 = &pppppuStack_1f8;
          if (param_4 != 0) goto LAB_10a1517f8;
        }
        else {
          ppppppuVar13 = (undefined8 ******)0x19;
          if ((param_4 | 7) != 0x17) {
            ppppppuVar13 = (undefined8 ******)((param_4 | 7) + 1);
          }
          ppppppuVar12 = ppppppuVar13;
          __Znwm();
          uStack_1e8 = (ulong)ppppppuVar13 | 0x8000000000000000;
          pppppuStack_1f8 = ppppppuVar12;
          uStack_1f0 = param_4;
LAB_10a1517f8:
          _memmove(ppppppuVar12,param_3,param_4);
        }
        *(undefined1 *)((long)ppppppuVar12 + param_4) = 0;
        ppppppuVar13 = &pppppuStack_1f8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppppppuVar13,0,"/",1);
        ppppuStack_1d8 = ppppppuVar13[1];
        ppppuStack_1e0 = *ppppppuVar13;
        ppppuStack_1d0 = ppppppuVar13[2];
        ppppppuVar13[1] = (undefined8 *****)0x0;
        ppppppuVar13[2] = (undefined8 *****)0x0;
        *ppppppuVar13 = (undefined8 *****)0x0;
        FUN_10ad03508(&pppppuStack_190,&ppppuStack_1e0);
        if ((long)ppppuStack_1d0 < 0) {
          __ZdlPv(ppppuStack_1e0);
        }
        if ((long)uStack_1e8 < 0) {
          __ZdlPv(pppppuStack_1f8);
        }
        func_0x0001092bce90(puStack_170);
        plVar14 = (long *)*puStack_170;
        (**(code **)(*plVar14 + 0x50))();
        uVar7 = uStack_180;
        puVar18 = (undefined8 *)*plVar14;
        puVar2 = (undefined8 *)plVar14[1];
        if (puVar18 != puVar2) {
          uVar6 = uStack_188;
          ppppppuVar13 = (undefined8 ******)pppppuStack_190;
          if (-1 < (long)uStack_180) {
            uVar6 = uStack_180 >> 0x38;
            ppppppuVar13 = &pppppuStack_190;
          }
          do {
            bVar3 = *(byte *)((long)puVar18 + 0x17);
            uVar1 = puVar18[1];
            if (-1 < (char)bVar3) {
              uVar1 = (ulong)bVar3;
            }
            if (uVar1 == uVar6) {
              puVar15 = (undefined8 *)*puVar18;
              if (-1 < (char)bVar3) {
                puVar15 = puVar18;
              }
              _memcmp(puVar15,ppppppuVar13,uVar6);
              if ((int)puVar15 == 0) {
                puVar17 = (undefined1 *)0x1;
                goto joined_r0x00010a151980;
              }
            }
            puVar18 = puVar18 + 5;
          } while (puVar18 != puVar2);
        }
        puVar17 = (undefined1 *)0x0;
joined_r0x00010a151980:
        if ((long)uVar7 < 0) {
          __ZdlPv(pppppuStack_190);
        }
        if (plStack_168 != (long *)0x0) {
          plVar14 = plStack_168 + 1;
          do {
            lVar16 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_168 + 0x10))(plStack_168);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
          }
        }
        FUN_10a09a0e4(auStack_120);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
          return puVar17;
        }
        ___stack_chk_fail();
      }
      func_0x000109ffde50();
      goto LAB_10a1519a8;
    }
  }
  FUN_10a00946c(&UNK_10f63ef4b);
LAB_10a1519a8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1519ac);
  (*pcVar8)();
}



/* Entry: 10a151630; end: 10a151a6b;  */

undefined8 FUN_10a151630(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *****pppppuStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 *****pppppuStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  char cStack_121;
  undefined8 *****pppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [8];
  undefined8 *apuStack_e8 [7];
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1538ec(auStack_b0);
  iVar9 = (int)auStack_b0;
  func_0x0001092bcfc4();
  if (iVar9 != 0) {
    uVar10 = (uint)auStack_b0;
    func_0x0001092bd0ac();
    if (2 < uVar10) {
      FUN_10a1535d4(&puStack_100);
      puVar17 = puStack_100;
      uVar16 = param_1;
      func_0x00010a1512bc(param_1,param_2);
      if ((int)uVar16 == 0) {
        if (param_2 < 0x7ffffffffffffff8) {
          if (param_2 < 0x17) {
            uStack_110 = CONCAT17((char)param_2,(undefined7)uStack_110);
            ppppppuVar11 = &pppppuStack_120;
            if (param_2 != 0) goto LAB_10a151730;
          }
          else {
            ppppppuVar12 = (undefined8 ******)0x19;
            if ((param_2 | 7) != 0x17) {
              ppppppuVar12 = (undefined8 ******)((param_2 | 7) + 1);
            }
            ppppppuVar11 = ppppppuVar12;
            __Znwm();
            uStack_110 = (ulong)ppppppuVar12 | 0x8000000000000000;
            pppppuStack_120 = ppppppuVar11;
            uStack_118 = param_2;
LAB_10a151730:
            _memmove(ppppppuVar11,param_1,param_2);
          }
          *(undefined1 *)((long)ppppppuVar11 + param_2) = 0;
          goto LAB_10a151744;
        }
      }
      else {
        FUN_10a1513b8(&pppppuStack_150,param_1,param_2);
        uStack_118 = uStack_148;
        pppppuStack_120 = pppppuStack_150;
        uStack_110 = uStack_140;
        uStack_148 = 0;
        uStack_140 = 0;
        pppppuStack_150 = (undefined8 ******)0x0;
LAB_10a151744:
        FUN_10ad03f74(auStack_f0);
        func_0x0001092bd244(puVar17,&pppppuStack_120,auStack_f0,0);
        (*(code *)*apuStack_e8[0])(apuStack_e8);
        if ((long)uStack_110 < 0) {
          __ZdlPv(pppppuStack_120);
        }
        if ((int)uVar16 != 0) {
          if (cStack_121 < '\0') {
            __ZdlPv(uStack_138);
          }
          if ((long)uStack_140 < 0) {
            __ZdlPv(pppppuStack_150);
          }
        }
        if (0x7ffffffffffffff7 < param_4) {
          func_0x000109ffde50();
          goto LAB_10a1519a8;
        }
        if (param_4 < 0x17) {
          uStack_178 = CONCAT17((char)param_4,(undefined7)uStack_178);
          ppppppuVar11 = &pppppuStack_188;
          if (param_4 != 0) goto LAB_10a1517f8;
        }
        else {
          ppppppuVar12 = (undefined8 ******)0x19;
          if ((param_4 | 7) != 0x17) {
            ppppppuVar12 = (undefined8 ******)((param_4 | 7) + 1);
          }
          ppppppuVar11 = ppppppuVar12;
          __Znwm();
          uStack_178 = (ulong)ppppppuVar12 | 0x8000000000000000;
          pppppuStack_188 = ppppppuVar11;
          uStack_180 = param_4;
LAB_10a1517f8:
          _memmove(ppppppuVar11,param_3,param_4);
        }
        *(undefined1 *)((long)ppppppuVar11 + param_4) = 0;
        ppppppuVar12 = &pppppuStack_188;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (ppppppuVar12,0,"/",1);
        ppppuStack_168 = ppppppuVar12[1];
        ppppuStack_170 = *ppppppuVar12;
        ppppuStack_160 = ppppppuVar12[2];
        ppppppuVar12[1] = (undefined8 *****)0x0;
        ppppppuVar12[2] = (undefined8 *****)0x0;
        *ppppppuVar12 = (undefined8 *****)0x0;
        FUN_10ad03508(&pppppuStack_120,&ppppuStack_170);
        if ((long)ppppuStack_160 < 0) {
          __ZdlPv(ppppuStack_170);
        }
        if ((long)uStack_178 < 0) {
          __ZdlPv(pppppuStack_188);
        }
        func_0x0001092bce90(puStack_100);
        plVar13 = (long *)*puStack_100;
        (**(code **)(*plVar13 + 0x50))();
        uVar7 = uStack_110;
        puVar17 = (undefined8 *)*plVar13;
        puVar2 = (undefined8 *)plVar13[1];
        if (puVar17 != puVar2) {
          uVar6 = uStack_118;
          ppppppuVar12 = (undefined8 ******)pppppuStack_120;
          if (-1 < (long)uStack_110) {
            uVar6 = uStack_110 >> 0x38;
            ppppppuVar12 = &pppppuStack_120;
          }
          do {
            bVar3 = *(byte *)((long)puVar17 + 0x17);
            uVar1 = puVar17[1];
            if (-1 < (char)bVar3) {
              uVar1 = (ulong)bVar3;
            }
            if (uVar1 == uVar6) {
              puVar14 = (undefined8 *)*puVar17;
              if (-1 < (char)bVar3) {
                puVar14 = puVar17;
              }
              _memcmp(puVar14,ppppppuVar12,uVar6);
              if ((int)puVar14 == 0) {
                uVar16 = 1;
                goto joined_r0x00010a151980;
              }
            }
            puVar17 = puVar17 + 5;
          } while (puVar17 != puVar2);
        }
        uVar16 = 0;
joined_r0x00010a151980:
        if ((long)uVar7 < 0) {
          __ZdlPv(pppppuStack_120);
        }
        if (plStack_f8 != (long *)0x0) {
          plVar13 = plStack_f8 + 1;
          do {
            lVar15 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
          }
        }
        FUN_10a09a0e4(auStack_b0);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return uVar16;
        }
        ___stack_chk_fail();
      }
      func_0x000109ffde50();
      goto LAB_10a1519a8;
    }
  }
  FUN_10a00946c(&UNK_10f63ef4b);
LAB_10a1519a8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a1519ac);
  (*pcVar8)();
}



/* Entry: 10a151a6c; end: 10a151daf;  */

/* WARNING: Removing unreachable block (ram,0x00010a151ccc) */
/* WARNING: Removing unreachable block (ram,0x00010a151abc) */
/* WARNING: Removing unreachable block (ram,0x00010a151cbc) */
/* WARNING: Removing unreachable block (ram,0x00010a151cdc) */

void FUN_10a151a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puStack_120;
  ulong uStack_118;
  byte bStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_99;
  char cStack_91;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_49;
  undefined1 uStack_41;
  
  FUN_10a1513b8(&pppuStack_78,param_2,param_3);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  cStack_99 = cStack_49;
  FUN_10ad03508(&pppuStack_90,&uStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(uStack_b0);
  }
  lVar7 = (long)(char)bStack_79;
  if (lVar7 < 0) {
    if ((uStack_88 == 0) || (*(char *)((long)pppuStack_90 + (uStack_88 - 1)) != '/'))
    goto LAB_10a151b3c;
    uVar8 = uStack_88 - 1;
    uStack_88 = uVar8;
  }
  else {
    if ((bStack_79 == 0) || ((&cStack_91)[lVar7] != '/')) goto LAB_10a151b3c;
    uVar8 = lVar7 - 1;
    bStack_79 = (byte)uVar8;
    pppuStack_90 = &pppuStack_90;
  }
  *(undefined1 *)((long)pppuStack_90 + uVar8) = 0;
LAB_10a151b3c:
  FUN_10a151e50(&lStack_c0,param_1,&pppuStack_78);
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    pppuStack_78 = &pppuStack_78;
  }
  FUN_10a151324(auStack_d8,pppuStack_78,uStack_70);
  puVar9 = *(undefined8 **)(lStack_c0 + 0x18);
  func_0x0001092bce90(puVar9);
  plVar5 = (long *)*puVar9;
  (**(code **)(*plVar5 + 0x50))();
  lVar1 = plVar5[1];
  for (lVar7 = *plVar5; lVar7 != lVar1; lVar7 = lVar7 + 0x28) {
    lVar6 = lVar7;
    FUN_10a1520c4(lVar7,&pppuStack_90);
    if ((int)lVar6 != 0) {
      FUN_10a0b4df8(auStack_108,auStack_d8,&uStack_60);
      uVar8 = uStack_88;
      if (-1 < (char)bStack_79) {
        uVar8 = (ulong)bStack_79;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&puStack_120,lVar7,uVar8,0xffffffffffffffff,&uStack_41);
      uVar8 = uStack_118;
      ppuVar4 = (undefined1 **)puStack_120;
      if (-1 < (char)bStack_109) {
        uVar8 = (ulong)bStack_109;
        ppuVar4 = &puStack_120;
      }
      puVar9 = auStack_108;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar9,ppuVar4,uVar8);
      uStack_e8 = puVar9[1];
      uStack_f0 = *puVar9;
      lStack_e0 = puVar9[2];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
      (*(code *)*param_4)(&uStack_f0,param_4);
      if (lStack_e0 < 0) {
        __ZdlPv(uStack_f0);
      }
      if ((char)bStack_109 < '\0') {
        __ZdlPv(puStack_120);
      }
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
    }
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (plStack_b8 != (long *)0x0) {
    plVar5 = plStack_b8 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return;
}



/* Entry: 10a151db0; end: 10a151e0b;  */

void FUN_10a151db0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar1 = *param_1;
  lStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a151e0c(uVar1,&uStack_30);
  if (lStack_28 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10a151e0c; end: 10a151e4f;  */

void FUN_10a151e0c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 2);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = param_1[1];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 2);
  return;
}



/* Entry: 10a151e50; end: 10a151f47;  */

void FUN_10a151e50(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x78);
  lVar3 = param_2 + 0x50;
  FUN_10a151f88(lVar3,param_3);
  if (lVar3 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    lVar2 = *(long *)(lVar3 + 0x30);
    if (lVar2 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = lVar2;
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar3 + 0x28);
        *param_1 = lVar3;
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2 + 0x78);
          return;
        }
      }
    }
    FUN_10a15206c(param_1);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_60,&UNK_10f63eef7,param_3);
  FUN_10a012db0(auStack_48,auStack_60,&UNK_10f63ef18);
  FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a151f04);
  (*pcVar1)();
}



/* Entry: 10a151f48; end: 10a151f87;  */

undefined8 * FUN_10a151f48(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a151f88; end: 10a15206b;  */

long FUN_10a151f88(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a15206c; end: 10a1520c3;  */

long FUN_10a15206c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a1520c4; end: 10a152117;  */

bool FUN_10a1520c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  
  cVar4 = *(char *)((long)param_1 + 0x17);
  puVar6 = (undefined8 *)*param_1;
  if (-1 < (long)cVar4) {
    puVar6 = param_1;
  }
  cVar5 = *(char *)((long)param_2 + 0x17);
  puVar1 = (undefined8 *)*param_2;
  if (-1 < (long)cVar5) {
    puVar1 = param_2;
  }
  uVar2 = param_1[1];
  if (-1 < cVar4) {
    uVar2 = (long)cVar4;
  }
  uVar3 = param_2[1];
  if (-1 < cVar5) {
    uVar3 = (long)cVar5;
  }
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  _strncmp(puVar6,puVar1,uVar3);
  return (int)puVar6 == 0;
}



/* Entry: 10a152118; end: 10a15217b;  */

undefined8 * FUN_10a152118(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a15217c; end: 10a1522e7;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ****** FUN_10a15217c(undefined8 ******param_1,long *param_2,undefined8 *****param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 ******ppppppuVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined8 *******pppppppuStack_8e8;
  undefined8 ******ppppppuStack_8e0;
  undefined8 ******ppppppuStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined8 *******pppppppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  pppppuVar7 = *param_1;
  if ((undefined8 *****)*param_2 == pppppuVar7) {
    if ((-1 < (long)param_1[3]) && (param_3 <= param_1[3])) {
      return param_1;
    }
    ppppppuVar3 = param_1;
    if (param_1[2] != (undefined8 *****)0x0) {
      ppppppuVar3 = (undefined8 ******)pppppuVar7[2];
      FUN_10a132b84(ppppppuVar3);
      param_1[2] = (undefined8 *****)0x0;
      param_1[3] = (undefined8 *****)0xffffffffffffffff;
      pppppuVar7 = *param_1;
    }
    if (pppppuVar7 == (undefined8 *****)0x0) {
      return ppppppuVar3;
    }
    pppppuVar7 = (undefined8 *****)pppppuVar7[2];
    FUN_10a1524b4(pppppuVar7,param_3);
    param_1[2] = pppppuVar7;
    if (pppppuVar7 == (undefined8 *****)0x0) {
      pppppuVar7 = (undefined8 *****)0xffffffffffffffff;
    }
    else {
      pppppuVar7 = (undefined8 *****)pppppuVar7[7];
    }
    param_1[3] = pppppuVar7;
    ppuVar5 = &PTR_PTR_113300050;
    goto LAB_10a1522a0;
  }
  if (pppppuVar7 != (undefined8 *****)0x0) {
    FUN_10a132b84(pppppuVar7[2]);
    ppuVar5 = &PTR_PTR_1133000b0;
    FUN_10ae079a0(0,&PTR_PTR_1133000b0);
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_1133000b0);
  }
  ppppppuVar3 = param_1;
  func_0x00010a152438(param_1,param_2);
  param_1[2] = (undefined8 *****)0x0;
  param_1[3] = (undefined8 *****)0xffffffffffffffff;
  if (*param_1 == (undefined8 *****)0x0) {
    return ppppppuVar3;
  }
  pppppuVar7 = (undefined8 *****)(*param_1)[2];
  FUN_10a15335c();
  param_1[2] = pppppuVar7;
  if (pppppuVar7 == (undefined8 *****)0x0) {
    pppppuVar7 = (undefined8 *****)(*param_1)[2];
    FUN_10a1524b4(pppppuVar7,param_3);
    param_1[2] = pppppuVar7;
    if (pppppuVar7 != (undefined8 *****)0x0) goto LAB_10a152218;
    pppppuVar7 = (undefined8 *****)0xffffffffffffffff;
  }
  else {
LAB_10a152218:
    pppppuVar7 = (undefined8 *****)pppppuVar7[7];
  }
  param_1[3] = pppppuVar7;
  ppuVar5 = &PTR_PTR_1133000f0;
LAB_10a1522a0:
  func_0x00010ae02f94(0,param_3);
  func_0x00010ae02ef0();
  pppppppuVar6 = (undefined8 *******)ppuVar5;
  FUN_10ae079a0();
  func_0x00010ae02fa4();
  func_0x00010ae02f00();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar3 = (undefined8 ******)0x0;
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,pppppppuVar6[0x13],
                  pppppppuVar6[0xf],pppppppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    ppppppuVar9 = pppppppuVar6[0x12];
    ppppppuVar8 = pppppppuVar6[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    pppppppuStack_8e8 = pppppppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(pppppppuVar6 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    pppppppuStack_8b0 = pppppppuVar6 + 0x10;
    ppppppuVar3 = *pppppppuVar6;
    ppuVar5 = (undefined **)&pppppppuStack_8e8;
    uStack_8f0 = uStack_898;
    ppppppuStack_8e0 = ppppppuVar8;
    ppppppuStack_8d8 = ppppppuVar9;
    uStack_8d0 = (ulong)(ppppppuVar9 != (undefined8 ******)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(ppppppuVar3,ppuVar5,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppppuVar3;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(ppppppuVar3);
  return ppppppuVar3;
}



/* Entry: 10a1522e8; end: 10a1524b3;  */

void FUN_10a1522e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a152330(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a1524b4; end: 10a152657;  */

undefined8 FUN_10a1524b4(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_69;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_1 + 0x148;
  uStack_60 = param_2;
  __ZNSt3__15mutex4lockEv();
  if ((*(byte *)(param_1 + 0x209) & 1) != 0) {
    _pthread_self();
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_69 = 1;
    lStack_68 = lVar4;
    FUN_10a152658(&uStack_58,*(undefined8 *)(param_1 + 0x78),param_1,param_1 + 0x228,
                  *(undefined8 *)(param_1 + 0x78),param_1 + 0x1ef4,param_1 + 0x1ef8,param_1 + 0x1f00
                  ,&uStack_69,&uStack_60,param_1 + 0x1ef0);
    uVar5 = uStack_58;
    uStack_58 = 0;
    func_0x00010a132d7c(&uStack_40,uVar5);
    uStack_30 = uStack_48;
    uStack_38 = uStack_50;
    func_0x00010a132d7c(&uStack_58,0);
    uVar5 = uStack_40;
    FUN_10a1527ac(param_1 + 0x188,&lStack_68);
    FUN_10a15288c(param_1 + 0x1b0,&uStack_40);
    uStack_58 = CONCAT71(uStack_58._1_7_,1);
    FUN_10a1528dc(param_1 + 0x1d8,&uStack_58);
    piVar1 = (int *)(param_1 + 0x218);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    while( true ) {
      param_2 = 0;
      func_0x00010a132d7c(&uStack_40);
LAB_10a1525c8:
      lVar4 = param_1 + 0x148;
      __ZNSt3__15mutex6unlockEv(lVar4);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) break;
      ___stack_chk_fail();
      while ((int)param_2 == 0) {
        __Unwind_Resume(lVar4);
        func_0x000104bd46a0();
      }
      ___cxa_begin_catch(lVar4);
      ___cxa_end_catch();
      uVar5 = 0;
    }
    return uVar5;
  }
  uVar5 = 0;
  goto LAB_10a1525c8;
}



/* Entry: 10a152658; end: 10a1527ab;  */

void FUN_10a152658(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 in_x5;
  undefined8 in_x6;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *in_stack_00000000;
  undefined4 *in_stack_00000008;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = &lStack_78;
  lStack_70 = param_2;
  FUN_10a1529cc(plVar6,1);
  uStack_90 = *in_stack_00000000;
  uStack_88 = *in_stack_00000008;
  plVar7 = plVar6;
  FUN_10a152b30();
  *param_1 = (long)plVar6;
  param_1[2] = lStack_70;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_3 != 0) {
    ___cxa_begin_catch(plVar7);
    uStack_80 = 0x200;
    FUN_10a152adc(&uStack_80);
    plVar7 = (long *)(lStack_70 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + -0x200;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZdlPvSt11align_val_t(plVar6,0x40);
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a152784);
    (*pcVar5)();
  }
  plVar8 = plVar7;
  __Unwind_Resume();
  pcStack_98 = FUN_10a1527ac;
  puVar2 = (undefined8 *)plVar8[1];
  if (puVar2 < (undefined8 *)plVar8[2]) {
    puVar12 = puVar2 + 1;
    *puVar2 = *param_3;
  }
  else {
    lVar13 = (long)puVar2 - *plVar8;
    uVar1 = (lVar13 >> 3) + 1;
    uStack_c0 = in_x5;
    uStack_b8 = in_x6;
    plStack_b0 = plVar7;
    plStack_a8 = plVar6;
    puStack_a0 = &stack0xfffffffffffffff0;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a152dd8();
      puVar2 = (undefined8 *)plVar8[1];
      if (puVar2 < (undefined8 *)plVar8[2]) {
        uVar11 = *param_3;
        *param_3 = 0;
        *puVar2 = uVar11;
        puVar2[2] = param_3[2];
        plVar6 = puVar2 + 3;
      }
      else {
        plVar6 = plVar8;
        FUN_10a152f64();
      }
      plVar8[1] = (long)plVar6;
      return;
    }
    uVar9 = plVar8[2] - *plVar8;
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    plVar6 = plVar8 + 3;
    plStack_c8 = plVar6;
    FUN_10a152dec(plVar6,uVar10);
    puVar2 = (undefined8 *)((long)plVar6 + lVar13);
    puVar12 = puVar2 + 1;
    *puVar2 = *param_3;
    lVar13 = (long)puVar2 - (plVar8[1] - *plVar8);
    _memcpy(lVar13);
    lStack_e8 = *plVar8;
    *plVar8 = lVar13;
    plVar8[1] = (long)puVar12;
    lStack_d0 = plVar8[2];
    plVar8[2] = (long)(plVar6 + uVar10);
    lStack_e0 = lStack_e8;
    lStack_d8 = lStack_e8;
    FUN_10a152ef8(&lStack_e8);
  }
  plVar8[1] = (long)puVar12;
  return;
}



/* Entry: 10a1527ac; end: 10a15288b;  */

void FUN_10a1527ac(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar7 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a152dd8();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        uVar6 = *param_2;
        *param_2 = 0;
        *puVar2 = uVar6;
        puVar2[2] = param_2[2];
        plVar3 = puVar2 + 3;
      }
      else {
        plVar3 = param_1;
        FUN_10a152f64();
      }
      param_1[1] = (long)plVar3;
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar3 = param_1 + 3;
    plStack_38 = plVar3;
    FUN_10a152dec(plVar3,uVar5);
    puVar2 = (undefined8 *)((long)plVar3 + lVar8);
    puVar7 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar8 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar5);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a152ef8(&lStack_58);
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a15288c; end: 10a1528db;  */

void FUN_10a15288c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar2;
    puVar1[2] = param_2[2];
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = param_1;
    FUN_10a152f64();
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a1528dc; end: 10a1529cb;  */

void FUN_10a1528dc(long *param_1,undefined1 *param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lStack_58;
  undefined1 *puStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar8 = (undefined1 *)param_1[1];
  if (puVar8 < (undefined1 *)param_1[2]) {
    puVar13 = puVar8 + 1;
    *puVar8 = *param_2;
  }
  else {
    lVar14 = (long)puVar8 - *param_1;
    uVar12 = lVar14 + 1;
    if ((long)uVar12 < 0) {
      plVar6 = param_1;
      puVar8 = param_2;
      FUN_10a15324c();
      pcStack_38 = FUN_10a1529cc;
      puVar10 = (ulong *)plVar6[1];
      lVar14 = (long)puVar8 * 0x200;
      uVar12 = puVar10[1] + (long)puVar8 * 0x200;
      puStack_50 = param_2;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      if (uVar12 <= *puVar10) {
        puVar1 = puVar10 + 1;
        uVar11 = puVar10[1];
        do {
          uVar9 = *puVar1;
          if (uVar9 == uVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_10a152a6c;
          }
          else {
            ClearExclusiveLocal();
          }
          uVar12 = uVar9 + lVar14;
          uVar11 = uVar9;
        } while (uVar12 <= *puVar10);
      }
      lStack_58 = lVar14;
      func_0x0001098c692c(&lStack_58);
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      puVar8 = PTR___ZTISt9bad_alloc_110346a68;
      ___cxa_throw();
LAB_10a152a6c:
      if ((ulong)puVar8 >> 0x37 == 0) {
        __ZnwmSt11align_val_t(lVar14,0x40);
        return;
      }
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a152ac8);
      (*pcVar5)();
    }
    uVar9 = param_1[2] - *param_1;
    uVar11 = uVar9 * 2;
    if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
      uVar11 = uVar12;
    }
    if (0x3ffffffffffffffe < uVar9) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1 + 3;
      FUN_10a153260(plVar6,uVar11);
    }
    puVar8 = (undefined1 *)((long)plVar6 + lVar14);
    puVar13 = puVar8 + 1;
    *puVar8 = *param_2;
    lVar14 = *param_1;
    lVar2 = param_1[1];
    _memcpy(puVar8 + (lVar14 - lVar2),lVar14,lVar2 - lVar14);
    lVar7 = *param_1;
    *param_1 = (long)(puVar8 + (lVar14 - lVar2));
    param_1[1] = (long)puVar13;
    lVar14 = param_1[2];
    param_1[2] = (long)plVar6 + uVar11;
    if (lVar7 != 0) {
      plVar6 = (long *)(param_1[4] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 - (lVar14 - lVar7);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar13;
  return;
}



/* Entry: 10a1529cc; end: 10a152adb;  */

void FUN_10a1529cc(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 0x200;
  uVar6 = puVar5[1] + (long)param_2 * 0x200;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a152a6c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a152a6c:
  if ((ulong)param_2 >> 0x37 == 0) {
    __ZnwmSt11align_val_t(lVar9,0x40);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a152ac8);
  (*pcVar4)();
}



/* Entry: 10a152adc; end: 10a152b2f;  */

undefined * FUN_10a152adc(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  func_0x00010ae02f94(0,*param_1);
  ppuVar6 = &PTR_PTR_1132ffff0;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  func_0x00010ae02fa4();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a152b30; end: 10a152be3;  */

undefined8 *
FUN_10a152b30(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined4 param_10)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 6) = param_8;
  *(undefined4 *)((long)param_1 + 0x34) = param_10;
  param_1[7] = param_9;
  if (*(long *)(param_2 + 0x70) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a152be4(param_1 + 0x10,param_1);
  return param_1;
}



/* Entry: 10a152be4; end: 10a152cc7;  */

void FUN_10a152be4(undefined8 *param_1,undefined1 *param_2,undefined *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *unaff_x20;
  undefined8 uVar11;
  long lStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((*(byte *)(*(long *)(param_2 + 8) + 0x42) | *(byte *)(*(long *)(param_2 + 8) + 0x43)) & 1) ==
      0) {
    uVar5 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    if (param_3 < (undefined *)0x40) {
      unaff_x20 = (undefined *)0x1;
    }
    else {
      uVar6 = (ulong)param_3 >> 6 | (ulong)param_3 >> 5;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      unaff_x20 = (undefined *)((uVar6 >> 0x21 | uVar6 >> 1) + 1);
    }
    param_2 = auStack_48;
    param_3 = unaff_x20;
    uStack_40 = uVar11;
    FUN_10a152cc8();
    *param_1 = uVar11;
    param_1[1] = param_2;
    param_1[2] = unaff_x20;
    param_1[8] = 0;
    param_1[0x10] = 0;
    param_1[0x18] = 0;
    uVar5 = 1;
    param_1[0x20] = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_58 = FUN_10a152cc8;
  puVar7 = *(ulong **)(param_2 + 8);
  lVar10 = (long)param_3 * 0x20;
  uVar6 = puVar7[1] + (long)param_3 * 0x20;
  puStack_70 = unaff_x20;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (uVar6 <= *puVar7) {
    puVar1 = puVar7 + 1;
    uVar9 = puVar7[1];
    do {
      uVar8 = *puVar1;
      if (uVar8 == uVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a152d68;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar8 + lVar10;
      uVar9 = uVar8;
    } while (uVar6 <= *puVar7);
  }
  lStack_78 = lVar10;
  func_0x0001098c692c(&lStack_78);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_3 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a152d68:
  if ((ulong)param_3 >> 0x3b == 0) {
    __ZnwmSt11align_val_t(lVar10,0x20);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a152dc4);
  (*pcVar4)();
}



/* Entry: 10a152cc8; end: 10a152dd7;  */

void FUN_10a152cc8(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 0x20;
  uVar6 = puVar5[1] + (long)param_2 * 0x20;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a152d68;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a152d68:
  if ((ulong)param_2 >> 0x3b == 0) {
    __ZnwmSt11align_val_t(lVar9,0x20);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a152dc4);
  (*pcVar4)();
}



/* Entry: 10a152dd8; end: 10a152deb;  */

void FUN_10a152dd8(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lStack_38;
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  puVar6 = *(ulong **)(puVar5 + 8);
  lVar10 = (long)param_2 * 8;
  uVar7 = puVar6[1] + (long)param_2 * 8;
  if (uVar7 <= *puVar6) {
    puVar1 = puVar6 + 1;
    uVar9 = puVar6[1];
    do {
      uVar8 = *puVar1;
      if (uVar8 == uVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a152e8c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar7 = uVar8 + lVar10;
      uVar9 = uVar8;
    } while (uVar7 <= *puVar6);
  }
  lStack_38 = lVar10;
  func_0x0001098c692c(&lStack_38);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a152e8c:
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm(lVar10);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a152ee4);
  (*pcVar4)();
}



/* Entry: 10a152dec; end: 10a152ef7;  */

void FUN_10a152dec(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 8;
  uVar6 = puVar5[1] + (long)param_2 * 8;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a152e8c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a152e8c:
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm(lVar9);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a152ee4);
  (*pcVar4)();
}



/* Entry: 10a152ef8; end: 10a152f63;  */

long * FUN_10a152ef8(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = param_1[2];
  if (lVar5 != param_1[1]) {
    param_1[2] = lVar5 + ((param_1[1] - lVar5) + 7U & 0xfffffffffffffff8);
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar2 = param_1[3];
    plVar1 = (long *)(*(long *)(param_1[4] + 8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 - (lVar2 - lVar5);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a152f64; end: 10a1530ab;  */

undefined8 * FUN_10a152f64(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puStack_a8;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar18 = param_1[1] - *param_1;
  uVar12 = (lVar18 >> 3) * -0x5555555555555555 + 1;
  if (uVar12 < 0xaaaaaaaaaaaaaab) {
    lVar10 = param_1[2] - *param_1 >> 3;
    uVar14 = lVar10 * 0x5555555555555556;
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      uVar14 = uVar12;
    }
    if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar14 = 0xaaaaaaaaaaaaaaa;
    }
    plVar7 = param_1 + 3;
    plStack_48 = plVar7;
    FUN_10a1530c0(plVar7,uVar14);
    puStack_68 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)plVar7 + lVar18);
    plStack_50 = plVar7 + uVar14 * 3;
    uVar13 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar13;
    puVar2[2] = param_2[2];
    puStack_58 = puVar2 + 3;
    puVar2 = (undefined8 *)((long)puVar2 + ((long)puStack_68 - (long)puVar3));
    puVar16 = puStack_68;
    puVar11 = puVar2;
    puVar17 = puStack_58;
    if ((long)puStack_68 - (long)puVar3 != 0) {
      do {
        uVar13 = *puVar16;
        *puVar16 = 0;
        *puVar11 = uVar13;
        puVar11[2] = puVar16[2];
        puVar16 = puVar16 + 3;
        puVar11 = puVar11 + 3;
      } while (puVar16 != puVar3);
      do {
        func_0x00010a132d7c(puStack_68,0);
        puStack_68 = puStack_68 + 3;
      } while (puStack_68 != puVar3);
      puStack_68 = (undefined8 *)*param_1;
      puVar17 = puStack_58;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar17;
    lVar18 = param_1[2];
    param_1[2] = (long)plStack_50;
    puStack_60 = puStack_68;
    puStack_58 = puStack_68;
    plStack_50 = (long *)lVar18;
    FUN_10a1531dc(&puStack_68);
    return puVar17;
  }
  FUN_10a1530ac();
  puVar8 = &DAT_10f62a4d8;
  FUN_109ffde64();
  puVar9 = *(ulong **)(puVar8 + 8);
  puVar16 = (undefined8 *)((long)param_2 * 0x18);
  uVar12 = puVar9[1] + (long)param_2 * 0x18;
  if (uVar12 <= *puVar9) {
    puVar1 = puVar9 + 1;
    uVar14 = puVar9[1];
    do {
      uVar15 = *puVar1;
      if (uVar15 == uVar14) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_10a153164;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar12 = uVar15 + (long)puVar16;
      uVar14 = uVar15;
    } while (uVar12 <= *puVar9);
  }
  puStack_a8 = puVar16;
  func_0x0001098c692c(&puStack_a8);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a153164:
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    __Znwm(puVar16);
    return puVar16;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1531c8);
  (*pcVar6)();
}



/* Entry: 10a1530ac; end: 10a1530bf;  */

void FUN_10a1530ac(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lStack_38;
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64();
  puVar6 = *(ulong **)(puVar5 + 8);
  lVar10 = (long)param_2 * 0x18;
  uVar7 = puVar6[1] + (long)param_2 * 0x18;
  if (uVar7 <= *puVar6) {
    puVar1 = puVar6 + 1;
    uVar9 = puVar6[1];
    do {
      uVar8 = *puVar1;
      if (uVar8 == uVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a153164;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar7 = uVar8 + lVar10;
      uVar9 = uVar8;
    } while (uVar7 <= *puVar6);
  }
  lStack_38 = lVar10;
  func_0x0001098c692c(&lStack_38);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a153164:
  if (param_2 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm(lVar10);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1531c8);
  (*pcVar4)();
}



/* Entry: 10a1530c0; end: 10a1531db;  */

void FUN_10a1530c0(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 0x18;
  uVar6 = puVar5[1] + (long)param_2 * 0x18;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10a153164;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10a153164:
  if (param_2 < (undefined *)0xaaaaaaaaaaaaaab) {
    __Znwm(lVar9);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1531c8);
  (*pcVar4)();
}



/* Entry: 10a1531dc; end: 10a15324b;  */

long * FUN_10a1531dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar4) {
    param_1[2] = lVar5 + -0x18;
    func_0x00010a132d7c(lVar5 + -0x18,0);
    lVar5 = param_1[2];
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = param_1[3];
    plVar1 = (long *)(*(long *)(param_1[4] + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 - (lVar5 - lVar4);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZdlPv();
  }
  return param_1;
}


