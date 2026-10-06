/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098374c0; end: 1098374cb;  */

undefined8 FUN_1098374c0(void)

{
  return 2;
}



/* Entry: 1098374cc; end: 10983752f;  */

void FUN_1098374cc(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (0 < *(int *)(param_2 + 0x1b4)) {
    lVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_2 + 0x1c0) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x1b4));
  }
  return;
}



/* Entry: 109837530; end: 1098375bf;  */

undefined8 * FUN_109837530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b14790;
  FUN_109833fe0(param_1 + 0xf);
  FUN_1098079e0(param_1 + 0xb);
  FUN_10980b2c4(param_1 + 7);
  return param_1;
}



/* Entry: 1098375c0; end: 1098379e3;  */

void FUN_1098375c0(long param_1,long param_2,ulong param_3,long param_4,ulong param_5,int param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  code *pcVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_6 < 0) {
    plVar1 = *(long **)(param_1 + 0x10);
    plVar12 = *(long **)(param_1 + 0x18);
    uVar14 = (ulong)*(uint *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    pcVar11 = *(code **)(*plVar1 + 0x18);
    goto LAB_1098376f4;
  }
  uVar13 = *(uint *)(param_1 + 0x20);
  if ((int)uVar13 < 1) {
    uVar9 = 0;
    plVar12 = (long *)0x0;
LAB_109837674:
    if ((int)uVar13 <= (int)uVar9) goto LAB_1098376b8;
    uVar14 = 0;
    lVar6 = (ulong)uVar13 - (uVar9 & 0xffffffff);
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + (uVar9 & 0xffffffff) * 8);
    do {
      iVar10 = *(int *)(*(long *)(*plVar1 + 0x28) + 0xec);
      if (iVar10 < 0) {
        iVar10 = *(int *)(*(long *)(*plVar1 + 0x30) + 0xec);
      }
      uVar13 = (uint)uVar14;
      if (iVar10 == param_6) {
        uVar13 = uVar13 + 1;
      }
      uVar14 = (ulong)uVar13;
      lVar6 = lVar6 + -1;
      plVar1 = plVar1 + 1;
    } while (lVar6 != 0);
  }
  else {
    uVar9 = 0;
    plVar12 = *(long **)(param_1 + 0x18);
    do {
      iVar10 = *(int *)(*(long *)(*plVar12 + 0x28) + 0xec);
      if (iVar10 < 0) {
        iVar10 = *(int *)(*(long *)(*plVar12 + 0x30) + 0xec);
      }
      if (iVar10 == param_6) goto LAB_109837674;
      uVar9 = uVar9 + 1;
      plVar12 = plVar12 + 1;
    } while (uVar13 != uVar9);
    plVar12 = (long *)0x0;
LAB_1098376b8:
    uVar14 = 0;
  }
  lVar6 = *(long *)(param_1 + 8);
  if (1 < *(int *)(lVar6 + 0x60)) {
    if (0 < (int)param_3) {
      uVar9 = 0;
      uVar13 = *(uint *)(param_1 + 0x3c);
      uVar8 = (ulong)*(uint *)(param_1 + 0x40);
      do {
        uVar7 = (uint)uVar8;
        uVar2 = (ulong)uVar13;
        if (uVar13 == uVar7) {
          uVar13 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar13 = 1;
          }
          uVar2 = uVar8;
          if ((int)uVar13 <= (int)uVar7) goto LAB_109837768;
          if (uVar13 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3;
            FUN_1098256f4(uVar2,0x10);
            uVar8 = (ulong)*(uint *)(param_1 + 0x3c);
          }
          if (0 < (int)uVar8) {
            lVar6 = 0;
            do {
              *(undefined8 *)(uVar2 + lVar6) = *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar6);
              lVar6 = lVar6 + 8;
            } while (uVar8 << 3 != lVar6);
          }
          if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
            FUN_109825740();
            uVar8 = (ulong)*(uint *)(param_1 + 0x3c);
          }
          iVar10 = (int)uVar8;
          *(undefined1 *)(param_1 + 0x50) = 1;
          *(ulong *)(param_1 + 0x48) = uVar2;
          *(uint *)(param_1 + 0x40) = uVar13;
          uVar8 = (ulong)uVar13;
        }
        else {
LAB_109837768:
          iVar10 = (int)uVar2;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar10 * 8) =
             *(undefined8 *)(param_2 + uVar9 * 8);
        uVar13 = iVar10 + 1;
        *(uint *)(param_1 + 0x3c) = uVar13;
        uVar9 = uVar9 + 1;
      } while (uVar9 != (param_3 & 0xffffffff));
    }
    if (0 < (int)param_5) {
      uVar9 = 0;
      uVar13 = *(uint *)(param_1 + 0x5c);
      uVar8 = (ulong)*(uint *)(param_1 + 0x60);
      do {
        uVar7 = (uint)uVar8;
        uVar2 = (ulong)uVar13;
        if (uVar13 == uVar7) {
          uVar13 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar13 = 1;
          }
          uVar2 = uVar8;
          if ((int)uVar13 <= (int)uVar7) goto LAB_109837844;
          if (uVar13 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3;
            FUN_1098256f4(uVar2,0x10);
            uVar8 = (ulong)*(uint *)(param_1 + 0x5c);
          }
          if (0 < (int)uVar8) {
            lVar6 = 0;
            do {
              *(undefined8 *)(uVar2 + lVar6) = *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar6);
              lVar6 = lVar6 + 8;
            } while (uVar8 << 3 != lVar6);
          }
          if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x70) == '\x01')) {
            FUN_109825740();
            uVar8 = (ulong)*(uint *)(param_1 + 0x5c);
          }
          iVar10 = (int)uVar8;
          *(undefined1 *)(param_1 + 0x70) = 1;
          *(ulong *)(param_1 + 0x68) = uVar2;
          *(uint *)(param_1 + 0x60) = uVar13;
          uVar8 = (ulong)uVar13;
        }
        else {
LAB_109837844:
          iVar10 = (int)uVar2;
        }
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar10 * 8) =
             *(undefined8 *)(param_4 + uVar9 * 8);
        uVar13 = iVar10 + 1;
        *(uint *)(param_1 + 0x5c) = uVar13;
        uVar9 = uVar9 + 1;
      } while (uVar9 != (param_5 & 0xffffffff));
    }
    if ((int)uVar14 < 1) {
      uVar13 = *(uint *)(param_1 + 0x7c);
    }
    else {
      uVar9 = 0;
      uVar13 = *(uint *)(param_1 + 0x7c);
      uVar8 = (ulong)*(uint *)(param_1 + 0x80);
      do {
        uVar7 = (uint)uVar8;
        uVar2 = (ulong)uVar13;
        if (uVar13 == uVar7) {
          uVar13 = uVar7 << 1;
          if (uVar7 == 0) {
            uVar13 = 1;
          }
          uVar2 = uVar8;
          if ((int)uVar13 <= (int)uVar7) goto LAB_10983791c;
          if (uVar13 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar13 << 3;
            FUN_1098256f4(uVar2,0x10);
            uVar8 = (ulong)*(uint *)(param_1 + 0x7c);
          }
          if (0 < (int)uVar8) {
            lVar6 = 0;
            do {
              *(undefined8 *)(uVar2 + lVar6) = *(undefined8 *)(*(long *)(param_1 + 0x88) + lVar6);
              lVar6 = lVar6 + 8;
            } while (uVar8 << 3 != lVar6);
          }
          if ((*(long *)(param_1 + 0x88) != 0) && (*(char *)(param_1 + 0x90) == '\x01')) {
            FUN_109825740();
            uVar8 = (ulong)*(uint *)(param_1 + 0x7c);
          }
          iVar10 = (int)uVar8;
          *(undefined1 *)(param_1 + 0x90) = 1;
          *(ulong *)(param_1 + 0x88) = uVar2;
          *(uint *)(param_1 + 0x80) = uVar13;
          uVar8 = (ulong)uVar13;
        }
        else {
LAB_10983791c:
          iVar10 = (int)uVar2;
        }
        *(long *)(*(long *)(param_1 + 0x88) + (long)iVar10 * 8) = plVar12[uVar9];
        uVar13 = iVar10 + 1;
        *(uint *)(param_1 + 0x7c) = uVar13;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar14);
    }
    if ((int)(*(int *)(param_1 + 0x5c) + uVar13) <= *(int *)(*(long *)(param_1 + 8) + 0x60)) {
      return;
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x68);
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x88);
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
              (*(long **)(param_1 + 0x10),uVar3,*(int *)(param_1 + 0x3c),uVar4,
               *(int *)(param_1 + 0x5c),uVar5,*(int *)(param_1 + 0x7c),*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),unaff_x20,unaff_x19,
               unaff_x29,unaff_x30);
    lVar6 = (long)*(int *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x3c) < 0) {
      if (*(int *)(param_1 + 0x40) < 0) {
        if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(param_1 + 0x50) == '\x01')) {
          FUN_109825740();
        }
        *(undefined1 *)(param_1 + 0x50) = 1;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    lVar6 = (long)*(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) < 0) {
      if (*(int *)(param_1 + 0x60) < 0) {
        if ((*(long *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x70) == '\x01')) {
          FUN_109825740();
        }
        *(undefined1 *)(param_1 + 0x70) = 1;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    lVar6 = (long)*(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x7c) < 0) {
      if (*(int *)(param_1 + 0x80) < 0) {
        if ((*(long *)(param_1 + 0x88) != 0) && (*(char *)(param_1 + 0x90) == '\x01')) {
          FUN_109825740();
        }
        *(undefined1 *)(param_1 + 0x90) = 1;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x88) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 != 0);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  pcVar11 = *(code **)(*plVar1 + 0x18);
LAB_1098376f4:
  (*pcVar11)(plVar1,param_2,param_3,param_4,param_5,plVar12,uVar14,lVar6,uVar3,uVar4);
  return;
}



/* Entry: 1098379e4; end: 1098379e7;  */

void FUN_1098379e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098379e8; end: 109837aaf;  */

long * FUN_1098379e8(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (((*param_2 != *(long *)(param_1 + 0x68)) &&
      ((*(uint *)(param_1 + 0x10) & *(uint *)(param_2 + 1)) != 0)) &&
     ((*(uint *)((long)param_2 + 0xc) & *(uint *)(param_1 + 0xc)) != 0)) {
    plVar1 = *(long **)(param_1 + 0x78);
    (**(code **)(*plVar1 + 0x58))();
    if (plVar1 != (long *)0x0) {
      plVar1 = *(long **)(param_1 + 0x78);
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x68) + 200))
      ;
      if ((int)plVar1 == 0) {
        return (long *)0x0;
      }
    }
    lVar2 = *param_2;
    plVar1 = *(long **)(param_1 + 0x80);
    (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined8 *)(param_1 + 0x68),lVar2);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000109837a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined8 *)(param_1 + 0x68),lVar2);
      return plVar1;
    }
  }
  return (long *)0x0;
}



/* Entry: 109837ab0; end: 109837b6b;  */

void FUN_109837ab0(long param_1,long *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = *param_2;
  if (((lVar4 != *(long *)(param_1 + 0x68)) && ((*(byte *)(lVar4 + 0xe8) >> 2 & 1) == 0)) &&
     (auVar5._0_4_ = (float)param_2[2] *
                     (*(float *)(param_1 + 0x30) - (float)*(undefined8 *)(param_1 + 0x20)),
     auVar5._4_4_ = (float)((ulong)param_2[2] >> 0x20) *
                    (*(float *)(param_1 + 0x34) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20)),
     auVar5._8_4_ = (float)param_2[3] *
                    (*(float *)(param_1 + 0x38) - (float)*(undefined8 *)(param_1 + 0x28)),
     auVar5._12_4_ = (float)((ulong)param_2[3] >> 0x20) * 0.0, auVar7 = NEON_ext(auVar5,auVar5,8,1),
     auVar5._0_4_ + auVar5._4_4_ + auVar7._0_4_ < -*(float *)(param_1 + 0x70))) {
    *(int *)(param_1 + 8) = (int)param_2[6];
    *(long *)(param_1 + 0x60) = lVar4;
    if (param_3 == 0) {
      fVar13 = *(float *)(param_2 + 2);
      fVar14 = *(float *)((long)param_2 + 0x14);
      fVar15 = *(float *)(param_2 + 3);
      auVar8._0_4_ = *(float *)(lVar4 + 0x10) * fVar13;
      auVar8._4_4_ = *(float *)(lVar4 + 0x14) * fVar14;
      auVar8._8_4_ = *(float *)(lVar4 + 0x18) * fVar15;
      auVar8._12_4_ = *(float *)(lVar4 + 0x1c) * *(float *)((long)param_2 + 0x1c);
      fVar9 = fVar13 * (float)*(undefined8 *)(lVar4 + 0x20);
      fVar10 = fVar14 * (float)((ulong)*(undefined8 *)(lVar4 + 0x20) >> 0x20);
      fVar11 = fVar15 * (float)*(undefined8 *)(lVar4 + 0x28);
      fVar12 = *(float *)((long)param_2 + 0x1c) *
               (float)((ulong)*(undefined8 *)(lVar4 + 0x28) >> 0x20);
      fVar13 = fVar13 * (float)*(undefined8 *)(lVar4 + 0x30);
      fVar14 = fVar14 * (float)((ulong)*(undefined8 *)(lVar4 + 0x30) >> 0x20);
      fVar15 = fVar15 * (float)*(undefined8 *)(lVar4 + 0x38);
      auVar5 = NEON_ext(auVar8,auVar8,8,1);
      auVar7._4_4_ = fVar10;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = fVar11;
      auVar7._12_4_ = fVar12;
      auVar1._4_4_ = fVar10;
      auVar1._0_4_ = fVar9;
      auVar1._8_4_ = fVar11;
      auVar1._12_4_ = fVar12;
      auVar7 = NEON_ext(auVar7,auVar1,8,1);
      auVar6._0_4_ = auVar8._0_4_ + auVar8._4_4_ + auVar5._0_4_;
      auVar6._4_4_ = fVar9 + fVar10 + auVar7._0_4_;
      auVar2._4_4_ = fVar14;
      auVar2._0_4_ = fVar13;
      auVar2._8_4_ = fVar15;
      auVar2._12_4_ = 0;
      auVar3._4_4_ = fVar14;
      auVar3._0_4_ = fVar13;
      auVar3._8_4_ = fVar15;
      auVar3._12_4_ = 0;
      auVar5 = NEON_ext(auVar2,auVar3,8,1);
      auVar6._8_4_ = fVar13 + fVar14 + auVar5._0_4_ + auVar5._4_4_;
      auVar6._12_4_ = 0;
    }
    else {
      auVar6 = *(undefined1 (*) [16])(param_2 + 2);
    }
    *(long *)(param_1 + 0x48) = auVar6._8_8_;
    *(long *)(param_1 + 0x40) = auVar6._0_8_;
    lVar4 = param_2[4];
    *(long *)(param_1 + 0x58) = param_2[5];
    *(long *)(param_1 + 0x50) = lVar4;
  }
  return;
}



/* Entry: 109837b6c; end: 109837bb7;  */

long FUN_109837b6c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109837bb8; end: 109837c03;  */

long FUN_109837bb8(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109837c04; end: 109837d1b;  */

void FUN_109837c04(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  
  do {
    iVar12 = (int)param_2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + (long)((iVar12 + param_3) / 2) * 8);
    iVar2 = param_3;
    do {
      lVar8 = *(long *)(param_1 + 0x10);
      iVar1 = *(int *)(*(long *)(lVar3 + 0x28) + 0xec);
      param_2 = (long)(int)param_2;
      do {
        uVar13 = param_2;
        iVar5 = iVar1;
        if (iVar1 < 0) {
          iVar5 = *(int *)(*(long *)(lVar3 + 0x30) + 0xec);
        }
        lVar4 = *(long *)(lVar8 + uVar13 * 8);
        iVar6 = *(int *)(*(long *)(lVar4 + 0x28) + 0xec);
        if (iVar6 < 0) {
          iVar6 = *(int *)(*(long *)(lVar4 + 0x30) + 0xec);
        }
        param_2 = uVar13 + 1;
      } while (iVar6 < iVar5);
      lVar7 = (long)iVar2 + 1;
      plVar9 = (long *)(lVar8 + (long)iVar2 * 8);
      do {
        iVar6 = iVar2;
        lVar10 = *plVar9;
        iVar5 = *(int *)(*(long *)(lVar10 + 0x28) + 0xec);
        if (iVar5 < 0) {
          iVar5 = *(int *)(*(long *)(lVar10 + 0x30) + 0xec);
        }
        iVar11 = iVar1;
        if (iVar1 < 0) {
          iVar11 = *(int *)(*(long *)(lVar3 + 0x30) + 0xec);
        }
        lVar7 = lVar7 + -1;
        iVar2 = iVar6 + -1;
        plVar9 = plVar9 + -1;
      } while (iVar11 < iVar5);
      if (lVar7 < (long)uVar13) {
        param_2 = (ulong)((int)param_2 - 1);
        iVar2 = iVar6;
      }
      else {
        *(long *)(lVar8 + param_2 * 8 + -8) = lVar10;
        *(long *)(*(long *)(param_1 + 0x10) + lVar7 * 8) = lVar4;
      }
    } while ((int)param_2 <= iVar2);
    if (iVar12 < iVar2) {
      FUN_109837c04(param_1);
    }
  } while ((int)param_2 < param_3);
  return;
}



/* Entry: 109837d1c; end: 109837d93;  */

undefined8 * FUN_109837d1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_109807a2c();
  *puVar1 = &PTR_FUN_110b14840;
  *(undefined1 *)(puVar1 + 0x4f) = 1;
  puVar1[0x4e] = 0;
  *(undefined8 *)((long)puVar1 + 0x264) = 0;
  FUN_109837d94();
  return param_1;
}



/* Entry: 109837d94; end: 109837f0b;  */

void FUN_109837d94(long *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  unkbyte9 Var7;
  long *plVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  ulong uVar26;
  long lVar27;
  long lVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  
  *(undefined4 *)(param_1 + 0x23) = 2;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x57] = 0x3f800000;
  param_1[0x56] = 0x3f8000003f800000;
  uVar26 = NEON_fmov(0x3f800000,4);
  param_1[0x3c] = uVar26;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  uVar4 = *(ulong *)(param_2 + 0x70);
  fVar3 = (float)(uVar4 >> 0x20);
  uVar26 = uVar26 ^ (uVar26 ^ uVar4) &
                    ~CONCAT44(-(uint)((float)(uVar26 >> 0x20) < fVar3),
                              -(uint)((float)uVar26 < (float)uVar4));
  iVar2 = -(uint)((float)uVar4 < 0.0);
  iVar5 = -(uint)(fVar3 < 0.0);
  param_1[0x48] =
       CONCAT17((byte)(uVar26 >> 0x38) & ~(byte)((uint)iVar5 >> 0x18),
                CONCAT16((byte)(uVar26 >> 0x30) & ~(byte)((uint)iVar5 >> 0x10),
                         CONCAT15((byte)(uVar26 >> 0x28) & ~(byte)((uint)iVar5 >> 8),
                                  CONCAT14((byte)(uVar26 >> 0x20) & ~(byte)iVar5,
                                           CONCAT13((byte)(uVar26 >> 0x18) &
                                                    ~(byte)((uint)iVar2 >> 0x18),
                                                    CONCAT12((byte)(uVar26 >> 0x10) &
                                                             ~(byte)((uint)iVar2 >> 0x10),
                                                             CONCAT11((byte)(uVar26 >> 8) &
                                                                      ~(byte)((uint)iVar2 >> 8),
                                                                      (byte)uVar26 & ~(byte)iVar2)))
                                          ))));
  fVar3 = *(float *)(param_2 + 0x78);
  fVar25 = fVar3 * fVar3;
  uVar12 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if (0.0 < fVar3) {
    uVar9 = SUB41(fVar25,0);
    uVar10 = (undefined1)((uint)fVar25 >> 8);
    uVar11 = (undefined1)((uint)fVar25 >> 0x10);
    uVar12 = (undefined1)((uint)fVar25 >> 0x18);
  }
  *(uint *)(param_1 + 0x49) = CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9)));
  *(undefined8 *)((long)param_1 + 0x24c) = *(undefined8 *)(param_2 + 0x8c);
  plVar8 = *(long **)(param_2 + 8);
  param_1[0x4b] = (long)plVar8;
  param_1[0x5e] = 0;
  if (plVar8 == (long *)0x0) {
    lVar30 = *(long *)(param_2 + 0x18);
    uVar17 = (undefined1)lVar30;
    uVar18 = (undefined1)((ulong)lVar30 >> 8);
    uVar19 = (undefined1)((ulong)lVar30 >> 0x10);
    uVar20 = (undefined1)((ulong)lVar30 >> 0x18);
    uVar21 = (undefined1)((ulong)lVar30 >> 0x20);
    uVar22 = (undefined1)((ulong)lVar30 >> 0x28);
    uVar23 = (undefined1)((ulong)lVar30 >> 0x30);
    uVar24 = (undefined1)((ulong)lVar30 >> 0x38);
    lVar27 = *(long *)(param_2 + 0x10);
    uVar9 = (undefined1)lVar27;
    uVar10 = (undefined1)((ulong)lVar27 >> 8);
    uVar11 = (undefined1)((ulong)lVar27 >> 0x10);
    uVar12 = (undefined1)((ulong)lVar27 >> 0x18);
    uVar13 = (undefined1)((ulong)lVar27 >> 0x20);
    uVar14 = (undefined1)((ulong)lVar27 >> 0x28);
    uVar15 = (undefined1)((ulong)lVar27 >> 0x30);
    uVar16 = (undefined1)((ulong)lVar27 >> 0x38);
    param_1[3] = lVar30;
    param_1[2] = lVar27;
    lVar27 = *(long *)(param_2 + 0x20);
    lVar30 = *(long *)(param_2 + 0x28);
    param_1[5] = lVar30;
    param_1[4] = lVar27;
    lVar32 = *(long *)(param_2 + 0x38);
    lVar31 = *(long *)(param_2 + 0x30);
    param_1[7] = lVar32;
    param_1[6] = lVar31;
    lVar34 = *(long *)(param_2 + 0x48);
    lVar33 = *(long *)(param_2 + 0x40);
    param_1[9] = lVar34;
    param_1[8] = lVar33;
  }
  else {
    (**(code **)(*plVar8 + 0x10))(plVar8,param_1 + 2);
    lVar27 = param_1[3];
    uVar17 = (undefined1)lVar27;
    uVar18 = (undefined1)((ulong)lVar27 >> 8);
    uVar19 = (undefined1)((ulong)lVar27 >> 0x10);
    uVar20 = (undefined1)((ulong)lVar27 >> 0x18);
    uVar21 = (undefined1)((ulong)lVar27 >> 0x20);
    uVar22 = (undefined1)((ulong)lVar27 >> 0x28);
    uVar23 = (undefined1)((ulong)lVar27 >> 0x30);
    uVar24 = (undefined1)((ulong)lVar27 >> 0x38);
    lVar27 = param_1[2];
    uVar9 = (undefined1)lVar27;
    uVar10 = (undefined1)((ulong)lVar27 >> 8);
    uVar11 = (undefined1)((ulong)lVar27 >> 0x10);
    uVar12 = (undefined1)((ulong)lVar27 >> 0x18);
    uVar13 = (undefined1)((ulong)lVar27 >> 0x20);
    uVar14 = (undefined1)((ulong)lVar27 >> 0x28);
    uVar15 = (undefined1)((ulong)lVar27 >> 0x30);
    uVar16 = (undefined1)((ulong)lVar27 >> 0x38);
    lVar27 = param_1[4];
    lVar30 = param_1[5];
    lVar32 = param_1[7];
    lVar31 = param_1[6];
    lVar34 = param_1[9];
    lVar33 = param_1[8];
  }
  param_1[0xb] = CONCAT17(uVar24,CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14(uVar21,CONCAT13(uVar20,
                                                  CONCAT12(uVar19,CONCAT11(uVar18,uVar17)))))));
  param_1[10] = CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,
                                                  CONCAT12(uVar11,CONCAT11(uVar10,uVar9)))))));
  param_1[0xd] = lVar30;
  param_1[0xc] = lVar27;
  param_1[0xf] = lVar32;
  param_1[0xe] = lVar31;
  param_1[0x11] = lVar34;
  param_1[0x10] = lVar33;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  uVar6 = *(undefined8 *)(param_2 + 0x84);
  Var7 = *(unkbyte9 *)(param_2 + 0x7c);
  uVar1 = (undefined4)uVar6;
  auVar28._4_4_ = uVar1;
  auVar28._0_4_ = uVar1;
  auVar28._8_4_ = uVar1;
  auVar28._12_4_ = uVar1;
  auVar29[9] = (char)((ulong)uVar6 >> 8);
  auVar29._0_9_ = *(unkbyte9 *)(param_2 + 0x7c);
  auVar29[10] = (char)((ulong)uVar6 >> 0x10);
  auVar29[0xb] = (char)((ulong)uVar6 >> 0x18);
  auVar29[0xc] = (char)((ulong)uVar6 >> 0x20);
  auVar29[0xd] = (char)((ulong)uVar6 >> 0x28);
  auVar29[0xe] = (char)((ulong)uVar6 >> 0x30);
  auVar29[0xf] = (char)((ulong)uVar6 >> 0x38);
  auVar29 = NEON_ext(auVar29,auVar28,0xc,1);
  param_1[0x21] =
       CONCAT17(auVar29[7],
                CONCAT16(auVar29[6],
                         CONCAT15(auVar29[5],CONCAT14(auVar29[4],(int)((unkuint9)Var7 >> 0x20)))));
  param_1[0x20] =
       CONCAT17(auVar29[3],CONCAT16(auVar29[2],CONCAT15(auVar29[1],CONCAT14(auVar29[0],(int)Var7))))
  ;
  (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(param_2 + 0x50));
  iVar2 = iRam00000001137365ac + 1;
  *(int *)((long)param_1 + 0x284) = iRam00000001137365ac;
  iRam00000001137365ac = iVar2;
  FUN_109838028(param_1,param_2 + 0x60);
  func_0x0001098380a8(param_1);
  *(undefined4 *)(param_1 + 0x50) = 8;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  fVar25 = *(float *)(param_1 + 0x3a);
  fVar3 = (float)((ulong)param_1[0x3c] >> 0x20) * fVar25;
  param_1[0x59] = (ulong)(uint)((float)param_1[0x3d] * fVar25);
  param_1[0x58] =
       CONCAT17((char)((uint)fVar3 >> 0x18),
                CONCAT16((char)((uint)fVar3 >> 0x10),
                         CONCAT15((char)((uint)fVar3 >> 8),
                                  CONCAT14(SUB41(fVar3,0),(float)param_1[0x3c] * fVar25))));
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  return;
}



/* Entry: 109837f0c; end: 109838027;  */

undefined8 *
FUN_109837f0c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 auStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_48;
  
  puVar3 = (undefined8 *)auStack_f0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  FUN_109807a2c();
  *puVar2 = &PTR_FUN_110b14840;
  *(undefined1 *)(puVar2 + 0x4f) = 1;
  puVar2[0x4e] = 0;
  *(undefined8 *)((long)puVar2 + 0x264) = 0;
  uStack_a8 = 0;
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  uStack_78 = 0x3f00000000000000;
  uStack_80 = 0;
  uStack_68 = 0x3f4ccccd00000000;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  uStack_d8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_c8 = 0;
  uStack_d0 = 0x3f80000000000000;
  fVar4 = 0.0;
  uStack_b8 = 0x3f800000;
  uStack_c0 = 0;
  uStack_b0 = 0;
  auStack_f0[0] = param_1;
  uStack_e8 = param_3;
  uStack_a0 = param_4;
  FUN_109837d94();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_109833fe0(param_2 + 0x4c);
    *param_2 = &PTR_FUN_110b122a8;
    FUN_109807e94(param_2 + 0x29);
    __Unwind_Resume();
    fVar7 = 1.0 / fVar4;
    uVar1 = *(uint *)(puVar2 + 0x1d) & 0xfffffffe;
    if (fVar4 == 0.0) {
      fVar7 = 0.0;
      uVar1 = *(uint *)(puVar2 + 0x1d) | 1;
    }
    *(uint *)(puVar2 + 0x1d) = uVar1;
    *(float *)(puVar2 + 0x3a) = fVar7;
    puVar2[0x3f] = (ulong)(uint)((float)puVar2[0x41] * fVar4);
    puVar2[0x3e] = CONCAT44((float)((ulong)puVar2[0x40] >> 0x20) * fVar4,(float)puVar2[0x40] * fVar4
                           );
    fVar4 = 1.0 / *(float *)(puVar3 + 1);
    if (*(float *)(puVar3 + 1) == 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = (float)*puVar3;
    iVar8 = -(uint)(fVar5 == 0.0);
    fVar6 = (float)((ulong)*puVar3 >> 0x20);
    iVar9 = -(uint)(fVar6 == 0.0);
    uVar10 = NEON_fmov(0x3f800000,4);
    fVar5 = (float)uVar10 / fVar5;
    fVar6 = (float)((ulong)uVar10 >> 0x20) / fVar6;
    puVar2[0x42] = CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                            CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10),
                                     CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar9 >> 8),
                                              CONCAT14(SUB41(fVar6,0) & ~(byte)iVar9,
                                                       CONCAT13((byte)((uint)fVar5 >> 0x18) &
                                                                ~(byte)((uint)iVar8 >> 0x18),
                                                                CONCAT12((byte)((uint)fVar5 >> 0x10)
                                                                         & ~(byte)((uint)iVar8 >>
                                                                                  0x10),
                                                                         CONCAT11((byte)((uint)fVar5
                                                                                        >> 8) &
                                                                                  ~(byte)((uint)
                                                  iVar8 >> 8),SUB41(fVar5,0) & ~(byte)iVar8)))))));
    *(float *)(puVar2 + 0x43) = fVar4;
    *(undefined4 *)((long)puVar2 + 0x21c) = 0;
    puVar2[0x59] = (ulong)(uint)((float)puVar2[0x3d] * fVar7);
    puVar2[0x58] = CONCAT44((float)((ulong)puVar2[0x3c] >> 0x20) * fVar7,(float)puVar2[0x3c] * fVar7
                           );
    return puVar2;
  }
  return param_2;
}



/* Entry: 109838028; end: 109838113;  */

void FUN_109838028(float param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  fVar5 = 1.0 / param_1;
  uVar1 = *(uint *)(param_2 + 0xe8) & 0xfffffffe;
  if (param_1 == 0.0) {
    fVar5 = 0.0;
    uVar1 = *(uint *)(param_2 + 0xe8) | 1;
  }
  *(uint *)(param_2 + 0xe8) = uVar1;
  *(float *)(param_2 + 0x1d0) = fVar5;
  *(ulong *)(param_2 + 0x1f8) = (ulong)(uint)((float)*(undefined8 *)(param_2 + 0x208) * param_1);
  *(ulong *)(param_2 + 0x1f0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x200) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0x200) * param_1);
  fVar2 = 1.0 / *(float *)(param_3 + 1);
  if (*(float *)(param_3 + 1) == 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = (float)*param_3;
  iVar6 = -(uint)(fVar3 == 0.0);
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  iVar7 = -(uint)(fVar4 == 0.0);
  uVar8 = NEON_fmov(0x3f800000,4);
  fVar3 = (float)uVar8 / fVar3;
  fVar4 = (float)((ulong)uVar8 >> 0x20) / fVar4;
  *(ulong *)(param_2 + 0x210) =
       CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                         CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                  CONCAT14(SUB41(fVar4,0) & ~(byte)iVar7,
                                           CONCAT13((byte)((uint)fVar3 >> 0x18) &
                                                    ~(byte)((uint)iVar6 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                                             ~(byte)((uint)iVar6 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar3 >> 8) &
                                                                      ~(byte)((uint)iVar6 >> 8),
                                                                      SUB41(fVar3,0) & ~(byte)iVar6)
                                                            ))))));
  *(float *)(param_2 + 0x218) = fVar2;
  *(undefined4 *)(param_2 + 0x21c) = 0;
  *(ulong *)(param_2 + 0x2c8) = (ulong)(uint)((float)*(undefined8 *)(param_2 + 0x1e8) * fVar5);
  *(ulong *)(param_2 + 0x2c0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x1e0) >> 0x20) * fVar5,
                (float)*(undefined8 *)(param_2 + 0x1e0) * fVar5);
  return;
}



/* Entry: 109838114; end: 109838283;  */

void FUN_109838114(float param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fStack_44;
  undefined1 auStack_40 [8];
  float fStack_38;
  
  if (param_1 != 0.0) {
    plVar1 = *(long **)(param_2 + 600);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2 + 0x10);
    }
    param_1 = 1.0 / param_1;
    *(ulong *)(param_2 + 0x1b8) =
         (ulong)(uint)(((float)*(undefined8 *)(param_2 + 0x48) -
                       (float)*(undefined8 *)(param_2 + 0x88)) * param_1);
    *(ulong *)(param_2 + 0x1b0) =
         CONCAT44(((float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20)) * param_1,
                  ((float)*(undefined8 *)(param_2 + 0x40) - (float)*(undefined8 *)(param_2 + 0x80))
                  * param_1);
    func_0x00010980abd0(param_2 + 0x50,param_2 + 0x10,auStack_40,&fStack_44);
    uVar2 = CONCAT44(auStack_40._4_4_ * fStack_44 * param_1,auStack_40._0_4_ * fStack_44 * param_1);
    uVar3 = (ulong)(uint)(fStack_38 * fStack_44 * param_1);
    *(ulong *)(param_2 + 0x1c8) = uVar3;
    *(undefined8 *)(param_2 + 0x1c0) = uVar2;
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x1b8);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0x1b0);
    *(ulong *)(param_2 + 0xa8) = uVar3;
    *(undefined8 *)(param_2 + 0xa0) = uVar2;
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x40);
  }
  return;
}



/* Entry: 109838284; end: 10983841b;  */

void FUN_109838284(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if ((*(byte *)(param_1 + 0xe8) >> 1 & 1) == 0) {
    uVar12 = *param_2;
    *(undefined8 *)(param_1 + 0x58) = param_2[1];
    *(undefined8 *)(param_1 + 0x50) = uVar12;
    uVar12 = param_2[2];
    *(undefined8 *)(param_1 + 0x68) = param_2[3];
    *(undefined8 *)(param_1 + 0x60) = uVar12;
    puVar5 = param_2 + 4;
    puVar6 = param_2 + 6;
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x20);
    puVar5 = (undefined8 *)(param_1 + 0x30);
    puVar6 = (undefined8 *)(param_1 + 0x40);
  }
  uVar12 = *puVar5;
  *(undefined8 *)(param_1 + 0x78) = puVar5[1];
  *(undefined8 *)(param_1 + 0x70) = uVar12;
  uVar12 = *puVar6;
  *(undefined8 *)(param_1 + 0x88) = puVar6[1];
  *(undefined8 *)(param_1 + 0x80) = uVar12;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x1c0);
  uVar12 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  uVar12 = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[3];
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  uVar12 = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  uVar12 = param_2[6];
  *(undefined8 *)(param_1 + 0x48) = param_2[7];
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  uVar12 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x10);
  auVar3 = *(undefined1 (*) [12])(param_1 + 0x10);
  fVar15 = (float)((ulong)uVar12 >> 0x20);
  uVar1 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x20);
  auVar4 = *(undefined1 (*) [12])(param_1 + 0x20);
  fVar17 = (float)((ulong)uVar1 >> 0x20);
  uVar2 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x30);
  fVar20 = (float)uVar2;
  fVar21 = (float)((ulong)uVar2 >> 0x20);
  fVar7 = auVar3._0_4_;
  fVar8 = auVar3._8_4_;
  fVar9 = auVar4._0_4_;
  fVar10 = auVar4._8_4_;
  fVar22 = SUB124(*(undefined1 (*) [12])(param_1 + 0x30),8);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x210);
  fVar23 = fVar11 * fVar20;
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20);
  fVar24 = fVar13 * fVar21;
  fVar14 = (float)*(undefined8 *)(param_1 + 0x218);
  fVar25 = fVar14 * (float)*(undefined8 *)(param_1 + 0x38);
  fVar16 = fVar11 * (float)uVar1;
  fVar18 = fVar13 * fVar17;
  fVar19 = fVar14 * (float)*(undefined8 *)(param_1 + 0x28);
  fVar11 = (float)uVar12 * fVar11;
  fVar13 = fVar15 * fVar13;
  fVar14 = (float)*(undefined8 *)(param_1 + 0x18) * fVar14;
  *(ulong *)(param_1 + 0x188) =
       CONCAT44(fVar11 * 0.0 + fVar13 * 0.0 + fVar14 * 0.0,
                fVar20 * fVar11 + fVar21 * fVar13 + fVar22 * fVar14);
  *(ulong *)(param_1 + 0x180) =
       CONCAT44(fVar9 * fVar11 + fVar17 * fVar13 + fVar10 * fVar14,
                fVar7 * fVar11 + fVar15 * fVar13 + fVar8 * fVar14);
  *(ulong *)(param_1 + 0x198) =
       CONCAT44(fVar16 * 0.0 + fVar18 * 0.0 + fVar19 * 0.0,
                fVar20 * fVar16 + fVar21 * fVar18 + fVar22 * fVar19);
  *(ulong *)(param_1 + 400) =
       CONCAT44(fVar9 * fVar16 + fVar17 * fVar18 + fVar10 * fVar19,
                fVar7 * fVar16 + fVar15 * fVar18 + fVar8 * fVar19);
  *(ulong *)(param_1 + 0x1a8) =
       CONCAT44(fVar23 * 0.0 + fVar24 * 0.0 + fVar25 * 0.0,
                fVar20 * fVar23 + fVar21 * fVar24 + fVar22 * fVar25);
  *(ulong *)(param_1 + 0x1a0) =
       CONCAT44(fVar9 * fVar23 + fVar17 * fVar24 + fVar10 * fVar25,
                fVar7 * fVar23 + fVar15 * fVar24 + fVar8 * fVar25);
  return;
}



/* Entry: 10983841c; end: 1098387ab;  */

void FUN_10983841c(undefined8 *param_1,float param_2,long param_3)

{
  unkbyte9 *pVar1;
  unkbyte9 Var2;
  unkbyte9 Var3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  undefined1 auVar9 [12];
  float fVar20;
  undefined1 auVar10 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar8 [12];
  undefined1 auVar19 [16];
  float fVar21;
  float fVar33;
  float fVar34;
  undefined1 auVar23 [12];
  ulong uVar22;
  undefined1 auVar25 [16];
  float fVar35;
  undefined1 auVar27 [16];
  undefined1 auVar24 [12];
  undefined1 auVar29 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  float fVar54;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  
  fVar6 = 1.0 / *(float *)(param_3 + 0x210);
  if (*(float *)(param_3 + 0x210) == 0.0) {
    fVar6 = 0.0;
  }
  fVar40 = 1.0 / *(float *)(param_3 + 0x214);
  if (*(float *)(param_3 + 0x214) == 0.0) {
    fVar40 = 0.0;
  }
  fVar5 = 1.0 / *(float *)(param_3 + 0x218);
  if (*(float *)(param_3 + 0x218) == 0.0) {
    fVar5 = 0.0;
  }
  pVar1 = (unkbyte9 *)(param_3 + 0x1c0);
  uVar44 = *(undefined8 *)pVar1;
  uVar36 = *(undefined8 *)(param_3 + 0x1c8);
  Var3 = *pVar1;
  Var2 = *pVar1;
  fStack_78 = (float)uVar36;
  fStack_80 = (float)uVar44;
  fStack_7c = (float)((ulong)uVar44 >> 0x20);
  FUN_10980adc4(param_3 + 0x10,auStack_30);
  fVar4 = auStack_30._0_4_;
  uVar22 = auStack_30._0_8_;
  auVar25._0_8_ = uVar22 ^ 0x8000000080000000;
  auVar25[8] = auStack_30[8];
  auVar25[9] = auStack_30[9];
  auVar25[10] = auStack_30[10];
  auVar25[0xb] = auStack_30[0xb] ^ 0x80;
  auVar25[0xc] = auStack_30[0xc];
  auVar25[0xd] = auStack_30[0xd];
  auVar25[0xe] = auStack_30[0xe];
  auVar25[0xf] = auStack_30[0xf];
  auVar37 = NEON_ext(auVar25,auVar25,8,1);
  uVar39 = NEON_ext(auVar37._0_8_,auVar25._0_8_,4,1);
  uVar46 = (undefined1)((ulong)uVar36 >> 8);
  uVar47 = (undefined1)((ulong)uVar36 >> 0x10);
  uVar48 = (undefined1)((ulong)uVar36 >> 0x18);
  uVar49 = (undefined1)((ulong)uVar36 >> 0x20);
  uVar50 = (undefined1)((ulong)uVar36 >> 0x28);
  uVar51 = (undefined1)((ulong)uVar36 >> 0x30);
  uVar52 = (undefined1)((ulong)uVar36 >> 0x38);
  auVar41[9] = uVar46;
  auVar41._0_9_ = Var2;
  auVar41[10] = uVar47;
  auVar41[0xb] = uVar48;
  auVar41[0xc] = uVar49;
  auVar41[0xd] = uVar50;
  auVar41[0xe] = uVar51;
  auVar41[0xf] = uVar52;
  auVar38[9] = uVar46;
  auVar38._0_9_ = Var3;
  auVar38[10] = uVar47;
  auVar38[0xb] = uVar48;
  auVar38[0xc] = uVar49;
  auVar38[0xd] = uVar50;
  auVar38[0xe] = uVar51;
  auVar38[0xf] = uVar52;
  auVar41 = NEON_ext(auVar41,auVar38,8,1);
  fVar20 = auVar41._0_4_;
  uVar36 = NEON_ext(auVar25._0_8_,auVar37._0_8_,4,1);
  uVar44 = NEON_ext(uVar44,auVar41._0_8_,4,1);
  fVar53 = (float)((ulong)uVar36 >> 0x20);
  fVar21 = fStack_80 * auVar25._12_4_ + fVar20 * (float)uVar36;
  fVar33 = fStack_7c * auVar25._12_4_ + fStack_80 * fVar53;
  fVar34 = fStack_7c * -fVar4 + fVar20 * (float)uVar39;
  fVar35 = fStack_7c * (float)(auVar25._0_8_ >> 0x20) + fStack_80 * (float)((ulong)uVar39 >> 0x20);
  auVar23._0_8_ =
       CONCAT17((char)((uint)fVar33 >> 0x18),
                CONCAT16((char)((uint)fVar33 >> 0x10),
                         CONCAT15((char)((uint)fVar33 >> 8),CONCAT14(SUB41(fVar33,0),fVar21))));
  auVar23[8] = SUB41(fVar34,0);
  auVar23[9] = (undefined1)((uint)fVar34 >> 8);
  auVar23[10] = (undefined1)((uint)fVar34 >> 0x10);
  auVar23[0xb] = (undefined1)((uint)fVar34 >> 0x18);
  auVar26[0xc] = SUB41(fVar35,0);
  auVar26._0_12_ = auVar23;
  auVar26[0xd] = (undefined1)((uint)fVar35 >> 8);
  auVar26[0xe] = (undefined1)((uint)fVar35 >> 0x10);
  auVar26[0xf] = (byte)((uint)fVar35 >> 0x18) ^ 0x80;
  auVar27._0_4_ = fVar21 - (float)uVar44 * auVar37._0_4_;
  auVar27._4_4_ = (float)((ulong)auVar23._0_8_ >> 0x20) - (float)((ulong)uVar44 >> 0x20) * -fVar4;
  auVar27._8_4_ = auVar23._8_4_ - fStack_80 * (float)uVar36;
  auVar27._12_4_ = auVar26._12_4_ - fVar20 * fVar53;
  auVar38 = NEON_ext(auVar27,auVar27,8,1);
  auVar37 = NEON_ext(auStack_30,auStack_30,8,1);
  uVar44 = NEON_ext(auVar37._0_8_,uVar22,4,1);
  auVar42 = NEON_ext(auVar27,auVar27,4,1);
  uVar36 = NEON_ext(uVar22,auVar37._0_8_,4,1);
  auVar11._4_4_ = auStack_30._4_4_;
  auVar12._12_4_ = auStack_30._12_4_;
  auVar10._4_12_ = auStack_30._4_12_;
  auVar10._0_4_ = auVar11._4_4_;
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_4_ = auVar12._12_4_;
  auVar11._8_8_ = auVar12._8_8_;
  auVar11._0_4_ = auVar11._4_4_;
  auVar13._0_12_ = auVar11._0_12_;
  auVar13._12_4_ = auVar12._12_4_;
  auVar41 = NEON_ext(auVar13,auVar13,8,1);
  fVar33 = auVar41._0_4_ * auVar27._0_4_ + auVar37._0_4_ * auVar42._0_4_;
  fVar20 = auVar41._4_4_ * auVar27._4_4_ + fVar4 * auVar42._4_4_;
  fVar21 = auVar41._8_4_ * auVar27._0_4_ + (float)uVar44 * auVar38._0_4_;
  fVar34 = auVar41._12_4_ * auVar27._4_4_ + (float)((ulong)uVar44 >> 0x20) * auVar27._0_4_;
  auVar7._0_8_ = CONCAT17((char)((uint)fVar20 >> 0x18),
                          CONCAT16((char)((uint)fVar20 >> 0x10),
                                   CONCAT15((char)((uint)fVar20 >> 8),
                                            CONCAT14(SUB41(fVar20,0),fVar33))));
  auVar7[8] = SUB41(fVar21,0);
  auVar7[9] = (undefined1)((uint)fVar21 >> 8);
  auVar7[10] = (undefined1)((uint)fVar21 >> 0x10);
  auVar7[0xb] = (undefined1)((uint)fVar21 >> 0x18);
  auVar14[0xc] = SUB41(fVar34,0);
  auVar14._0_12_ = auVar7;
  auVar14[0xd] = (undefined1)((uint)fVar34 >> 8);
  auVar14[0xe] = (undefined1)((uint)fVar34 >> 0x10);
  auVar14[0xf] = (byte)((uint)fVar34 >> 0x18) ^ 0x80;
  fVar33 = (fVar4 * auVar27._12_4_ - (float)uVar36 * auVar38._0_4_) + fVar33;
  fVar35 = (auVar11._4_4_ * auVar27._12_4_ - (float)((ulong)uVar36 >> 0x20) * auVar27._0_4_) +
           (float)((ulong)auVar7._0_8_ >> 0x20);
  fVar53 = (auStack_30._8_4_ * auVar27._12_4_ - fVar4 * auVar42._0_4_) + auVar7._8_4_;
  fVar54 = (auVar12._12_4_ * auVar27._12_4_ - auVar37._0_4_ * auVar42._4_4_) + auVar14._12_4_;
  auVar15._0_4_ = fVar6 * fVar33;
  auVar15._4_4_ = fVar35 * 0.0;
  auVar15._8_4_ = fVar53 * 0.0;
  auVar15._12_4_ = 0;
  auVar43._0_4_ = fVar33 * 0.0;
  auVar43._4_4_ = fVar40 * fVar35;
  auVar43._8_4_ = fVar53 * 0.0;
  auVar43._12_4_ = 0;
  auVar45._0_4_ = fVar33 * 0.0;
  auVar45._4_4_ = fVar35 * 0.0;
  auVar45._8_4_ = fVar5 * fVar53;
  auVar41 = NEON_ext(auVar15,auVar15,8,1);
  auVar38 = NEON_ext(auVar43,auVar43,8,1);
  auVar45._12_4_ = 0;
  fVar21 = auVar15._0_4_ + auVar15._4_4_ + auVar41._0_4_;
  fVar34 = auVar43._0_4_ + auVar43._4_4_ + auVar38._0_4_;
  auVar41 = NEON_ext(auVar45,auVar45,8,1);
  fVar4 = auVar45._0_4_ + auVar45._4_4_ + auVar41._0_4_ + auVar41._4_4_;
  uVar44 = NEON_ext(CONCAT44(fVar34,fVar21),(ulong)(uint)fVar4,4,1);
  fVar20 = -fVar35;
  auVar37._4_4_ = fVar35;
  auVar37._0_4_ = fVar33;
  auVar37._8_4_ = fVar53;
  auVar37._12_4_ = fVar54;
  auVar42._4_4_ = fVar35;
  auVar42._0_4_ = fVar33;
  auVar42._8_4_ = fVar53;
  auVar42._12_4_ = fVar54;
  auVar41 = NEON_ext(auVar37,auVar42,4,1);
  auVar16._0_4_ = (float)uVar44 * fVar33 - auVar41._0_4_ * fVar21;
  auVar16._4_4_ = (float)((ulong)uVar44 >> 0x20) * fVar35 - auVar41._4_4_ * fVar34;
  auVar16._8_4_ = fVar21 * fVar53 - fVar4 * fVar33;
  auVar16._12_4_ = fVar34 * 0.0 - fVar35 * 0.0;
  auVar41 = NEON_ext(auVar16,auVar16,0xc,1);
  NEON_ext(auVar41,auVar16,8,1);
  uStack_40 = CONCAT44(((fVar20 * 0.0 + fVar40 * fVar33 + 0.0) - fVar21) * param_2 + 0.0,
                       ((fVar6 * fVar20 + fVar33 * 0.0 + 0.0) - -fVar34) * param_2 + 0.0);
  uStack_38 = CONCAT44(((fVar20 * 0.0 + fVar33 * 0.0 + 0.0) - 0.0) * param_2 + 0.0,
                       ((fVar20 * 0.0 + fVar33 * 0.0 + fVar5 * 0.0) - 0.0) * param_2 + fVar5);
  fStack_50 = (((fVar6 * fVar53 + 0.0) - fVar33 * 0.0) - fVar4) * param_2 + 0.0;
  fStack_4c = (((fVar53 * 0.0 + fVar40 * 0.0) - fVar33 * 0.0) - 0.0) * param_2 + fVar40;
  fStack_48 = (((fVar53 * 0.0 + 0.0) - fVar5 * fVar33) - -fVar21) * param_2 + 0.0;
  fStack_44 = (((fVar53 * 0.0 + 0.0) - fVar33 * 0.0) - 0.0) * param_2 + 0.0;
  fStack_60 = (((fVar6 * 0.0 - fVar53 * 0.0) + fVar35 * 0.0) - 0.0) * param_2 + fVar6;
  fStack_5c = (((0.0 - fVar40 * fVar53) + fVar35 * 0.0) - -fVar4) * param_2 + 0.0;
  fStack_58 = (((0.0 - fVar53 * 0.0) + fVar5 * fVar35) - fVar34) * param_2 + 0.0;
  fStack_54 = (((0.0 - fVar53 * 0.0) + fVar35 * 0.0) - 0.0) * param_2 + 0.0;
  FUN_1098387ac(&fStack_70,&fStack_60);
  fVar33 = fVar33 - fStack_70;
  fVar35 = fVar35 - fStack_6c;
  auVar17._0_8_ = CONCAT44(fVar35,fVar33);
  auVar17._8_4_ = fVar53 - fStack_68;
  auVar17._12_4_ = 0;
  auVar41 = NEON_ext(auStack_30,auStack_30,8,1);
  uVar22 = auStack_30._0_8_;
  uVar44 = NEON_ext(auVar41._0_8_,uVar22,4,1);
  auVar38 = NEON_ext(auVar17,auVar17,8,1);
  fVar6 = auVar38._0_4_;
  fVar40 = auStack_30._0_4_;
  uVar36 = NEON_ext(uVar22,auVar41._0_8_,4,1);
  uVar39 = NEON_ext(auVar17._0_8_,auVar38._0_8_,4,1);
  fVar34 = (float)((ulong)uVar36 >> 0x20);
  fVar5 = auStack_30._12_4_ * fVar33 + (float)uVar36 * fVar6;
  fVar20 = auStack_30._12_4_ * fVar35 + fVar34 * fVar33;
  fVar4 = fVar40 * fVar35 + (float)uVar44 * fVar6;
  fVar21 = auStack_30._4_4_ * fVar35 + (float)((ulong)uVar44 >> 0x20) * fVar33;
  uVar44 = CONCAT17((char)((uint)fVar20 >> 0x18),
                    CONCAT16((char)((uint)fVar20 >> 0x10),
                             CONCAT15((char)((uint)fVar20 >> 8),CONCAT14(SUB41(fVar20,0),fVar5))));
  auVar8[8] = SUB41(fVar4,0);
  auVar8._0_8_ = uVar44;
  auVar8[9] = (undefined1)((uint)fVar4 >> 8);
  auVar8[10] = (undefined1)((uint)fVar4 >> 0x10);
  auVar8[0xb] = (undefined1)((uint)fVar4 >> 0x18);
  auVar18[0xc] = SUB41(fVar21,0);
  auVar18._0_12_ = auVar8;
  auVar18[0xd] = (undefined1)((uint)fVar21 >> 8);
  auVar18[0xe] = (undefined1)((uint)fVar21 >> 0x10);
  auVar18[0xf] = (byte)((uint)fVar21 >> 0x18) ^ 0x80;
  auVar19._0_4_ = fVar5 - auVar41._0_4_ * (float)uVar39;
  auVar19._4_4_ = (float)((ulong)uVar44 >> 0x20) - fVar40 * (float)((ulong)uVar39 >> 0x20);
  auVar19._8_4_ = auVar8._8_4_ - (float)uVar36 * fVar33;
  auVar19._12_4_ = auVar18._12_4_ - fVar34 * fVar6;
  fVar40 = -fVar40;
  auVar24._0_8_ = uVar22 ^ 0x8000000080000000;
  auVar24[8] = auStack_30[8];
  auVar24[9] = auStack_30[9];
  auVar24[10] = auStack_30[10];
  auVar24[0xb] = auStack_30[0xb] ^ 0x80;
  auVar28[0xc] = auStack_30[0xc];
  auVar28._0_12_ = auVar24;
  auVar28[0xd] = auStack_30[0xd];
  auVar28[0xe] = auStack_30[0xe];
  auVar28[0xf] = auStack_30[0xf];
  auVar38 = NEON_ext(auVar19,auVar19,8,1);
  auVar37 = NEON_ext(auVar28,auVar28,8,1);
  uVar44 = NEON_ext(auVar37._0_8_,auVar24._0_8_,4,1);
  auVar42 = NEON_ext(auVar19,auVar19,4,1);
  uVar36 = NEON_ext(auVar24._0_8_,auVar37._0_8_,4,1);
  auVar30._4_4_ = (float)(auVar24._0_8_ >> 0x20);
  auVar31._12_4_ = auVar28._12_4_;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = auVar30._4_4_;
  auVar31._0_8_ = auVar29._0_8_;
  auVar31._8_4_ = auVar31._12_4_;
  auVar30._8_8_ = auVar31._8_8_;
  auVar30._0_4_ = auVar30._4_4_;
  auVar32._0_12_ = auVar30._0_12_;
  auVar32._12_4_ = auVar31._12_4_;
  auVar41 = NEON_ext(auVar32,auVar32,8,1);
  fVar6 = auVar41._0_4_ * auVar19._0_4_ + auVar37._0_4_ * auVar42._0_4_;
  fVar5 = auVar41._4_4_ * auVar19._4_4_ + fVar40 * auVar42._4_4_;
  fVar20 = auVar41._8_4_ * auVar19._0_4_ + (float)uVar44 * auVar38._0_4_;
  uVar44 = CONCAT17((char)((uint)fVar5 >> 0x18),
                    CONCAT16((char)((uint)fVar5 >> 0x10),
                             CONCAT15((char)((uint)fVar5 >> 8),CONCAT14(SUB41(fVar5,0),fVar6))));
  auVar9[8] = SUB41(fVar20,0);
  auVar9._0_8_ = uVar44;
  auVar9[9] = (undefined1)((uint)fVar20 >> 8);
  auVar9[10] = (undefined1)((uint)fVar20 >> 0x10);
  auVar9[0xb] = (undefined1)((uint)fVar20 >> 0x18);
  param_1[1] = (ulong)(uint)(((auVar24._8_4_ * auVar19._12_4_ - fVar40 * auVar42._0_4_) +
                             auVar9._8_4_) - fStack_78);
  *param_1 = CONCAT44(((auVar30._4_4_ * auVar19._12_4_ -
                       (float)((ulong)uVar36 >> 0x20) * auVar19._0_4_) +
                      (float)((ulong)uVar44 >> 0x20)) - fStack_7c,
                      ((fVar40 * auVar19._12_4_ - (float)uVar36 * auVar38._0_4_) + fVar6) -
                      fStack_80);
  return;
}



/* Entry: 1098387ac; end: 1098388cf;  */

void FUN_1098387ac(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 in_q0 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar12;
  undefined8 uVar9;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  fVar4 = *param_2;
  fVar5 = param_2[4];
  fVar6 = param_2[8];
  fVar8 = param_2[1];
  fVar12 = param_2[5];
  auVar7._8_4_ = param_2[9];
  auVar7._0_8_ = CONCAT44(fVar12,fVar8);
  auVar7._12_4_ = 0;
  fVar14 = param_2[2];
  fVar16 = param_2[6];
  auVar17._8_4_ = param_2[10];
  auVar17._0_8_ = CONCAT44(fVar16,fVar14);
  auVar17._12_4_ = 0;
  auVar19 = NEON_ext(auVar7,auVar7,8,1);
  uVar18 = NEON_ext(CONCAT44(fVar12,fVar8),auVar19._0_8_,4,1);
  auVar19 = NEON_ext(auVar17,auVar17,8,1);
  uVar9 = NEON_ext(CONCAT44(fVar16,fVar14),auVar19._0_8_,4,1);
  fVar13 = (float)((ulong)uVar9 >> 0x20);
  fVar20 = (float)((ulong)uVar18 >> 0x20);
  auVar19._0_4_ = fVar8 * (float)uVar9 - (float)uVar18 * fVar14;
  auVar19._4_4_ = fVar12 * fVar13 - fVar20 * fVar16;
  auVar19._8_4_ = auVar7._8_4_ * fVar14 - fVar8 * auVar17._8_4_;
  auVar19._12_4_ = fVar16 * 0.0 - fVar12 * 0.0;
  auVar23 = NEON_ext(auVar19,auVar19,0xc,1);
  auVar19 = NEON_ext(auVar23,auVar19,8,1);
  auVar23._0_4_ = fVar4 * auVar19._0_4_;
  auVar23._4_4_ = fVar5 * auVar19._4_4_;
  auVar23._8_4_ = fVar6 * auVar19._8_4_;
  auVar23._12_4_ = 0;
  auVar24 = NEON_ext(auVar23,auVar23,8,1);
  fVar21 = auVar23._0_4_ + auVar23._4_4_ + auVar24._0_4_;
  fVar22 = 1.0 / fVar21;
  if (ABS(fVar21) <= 1.1920929e-07) {
    fVar22 = fVar21;
  }
  fVar21 = in_q0._0_4_;
  auVar15._0_4_ = fVar21 * auVar19._0_4_;
  fVar1 = in_q0._4_4_;
  auVar15._4_4_ = fVar1 * auVar19._4_4_;
  fVar2 = in_q0._8_4_;
  auVar15._8_4_ = fVar2 * auVar19._8_4_;
  fVar3 = in_q0._12_4_;
  auVar15._12_4_ = fVar3 * 0.0;
  auVar23 = NEON_ext(auVar15,auVar15,8,1);
  auVar19 = NEON_ext(in_q0,in_q0,0xc,1);
  auVar25 = NEON_ext(auVar19,in_q0,8,1);
  auVar10._0_4_ = fVar21 * (float)uVar9 - auVar25._0_4_ * fVar14;
  auVar10._4_4_ = fVar1 * fVar13 - auVar25._4_4_ * fVar16;
  auVar10._8_4_ = fVar2 * fVar14 - auVar25._8_4_ * auVar17._8_4_;
  auVar10._12_4_ = fVar3 * fVar16 - auVar25._12_4_ * 0.0;
  auVar19 = NEON_ext(auVar10,auVar10,0xc,1);
  auVar19 = NEON_ext(auVar19,auVar10,8,1);
  auVar11._0_4_ = fVar4 * auVar19._0_4_;
  auVar11._4_4_ = fVar5 * auVar19._4_4_;
  auVar11._8_4_ = fVar6 * auVar19._8_4_;
  auVar11._12_4_ = 0;
  auVar19 = NEON_ext(auVar11,auVar11,8,1);
  *param_1 = CONCAT44((auVar11._0_4_ + auVar11._4_4_ + auVar19._0_4_) * fVar22,
                      (auVar15._0_4_ + auVar15._4_4_ + auVar23._0_4_) * fVar22);
  auVar24._0_4_ = auVar25._0_4_ * fVar8 - fVar21 * (float)uVar18;
  auVar24._4_4_ = auVar25._4_4_ * fVar12 - fVar1 * fVar20;
  auVar24._8_4_ = auVar25._8_4_ * auVar7._8_4_ - fVar2 * fVar8;
  auVar24._12_4_ = auVar25._12_4_ * 0.0 - fVar3 * fVar12;
  auVar7 = NEON_ext(auVar24,auVar24,0xc,1);
  auVar7 = NEON_ext(auVar7,auVar24,8,1);
  auVar25._0_4_ = fVar4 * auVar7._0_4_;
  auVar25._4_4_ = fVar5 * auVar7._4_4_;
  auVar25._8_4_ = fVar6 * auVar7._8_4_;
  auVar25._12_4_ = 0;
  auVar7 = NEON_ext(auVar25,auVar25,8,1);
  *(float *)(param_1 + 1) = fVar22 * (auVar25._0_4_ + auVar25._4_4_ + auVar7._0_4_);
  return;
}



/* Entry: 1098388d0; end: 109838acb;  */

void FUN_1098388d0(undefined8 *param_1,float param_2,long param_3)

{
  undefined1 (*pauVar1) [12];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar34;
  int iVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_60 [8];
  float fStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar9 = (float)*(undefined8 *)(param_3 + 0x218);
  fVar37 = (float)*(undefined8 *)(param_3 + 0x210);
  fVar40 = (float)((ulong)*(undefined8 *)(param_3 + 0x210) >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_3 + 0x1c0);
  fVar43 = (float)*(undefined8 *)(param_3 + 0x1c8);
  fVar44 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c8) >> 0x20);
  fVar41 = (float)*(undefined8 *)*pauVar1;
  fVar42 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar3 = *(undefined8 *)*(undefined1 (*) [12])(param_3 + 0x10);
  auVar8 = *(undefined1 (*) [12])(param_3 + 0x10);
  fVar27 = (float)((ulong)uVar3 >> 0x20);
  uVar35 = *(undefined8 *)*(undefined1 (*) [12])(param_3 + 0x20);
  auVar7 = *(undefined1 (*) [12])(param_3 + 0x20);
  fVar29 = (float)((ulong)uVar35 >> 0x20);
  uVar2 = *(undefined8 *)*(undefined1 (*) [12])(param_3 + 0x30);
  fVar22 = (float)uVar2;
  fVar24 = (float)((ulong)uVar2 >> 0x20);
  fVar11 = auVar8._0_4_;
  fVar15 = auVar8._8_4_;
  fVar18 = auVar7._0_4_;
  fVar28 = auVar7._8_4_;
  iVar34 = -(uint)(fVar37 == 0.0);
  iVar36 = -(uint)(fVar40 == 0.0);
  auVar38 = NEON_fmov(0x3f800000,4);
  fVar37 = auVar38._0_4_ / fVar37;
  fVar40 = auVar38._4_4_ / fVar40;
  fVar10 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                           CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                                    CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                             SUB41(fVar37,0) & ~(byte)iVar34)));
  fVar37 = 1.0 / fVar9;
  if (fVar9 == 0.0) {
    fVar37 = 0.0;
  }
  fVar9 = fVar22 * fVar10;
  fVar14 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                            CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                     CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar36 >> 8)
                                              ,CONCAT14(SUB41(fVar40,0) & ~(byte)iVar36,fVar10))))
                  >> 0x20);
  fVar12 = fVar24 * fVar14;
  fVar16 = (float)*(undefined8 *)(param_3 + 0x38) * fVar37;
  fVar33 = SUB124(*(undefined1 (*) [12])(param_3 + 0x30),8);
  fVar23 = fVar11 * fVar9 + fVar27 * fVar12 + fVar15 * fVar16;
  fVar25 = fVar18 * fVar9 + fVar29 * fVar12 + fVar28 * fVar16;
  fVar26 = fVar22 * fVar9 + fVar24 * fVar12 + fVar33 * fVar16;
  fVar40 = (float)uVar35 * fVar10;
  fVar13 = fVar29 * fVar14;
  fVar17 = (float)*(undefined8 *)(param_3 + 0x28) * fVar37;
  fVar19 = fVar11 * fVar40 + fVar27 * fVar13 + fVar15 * fVar17;
  fVar20 = fVar18 * fVar40 + fVar29 * fVar13 + fVar28 * fVar17;
  fVar21 = fVar22 * fVar40 + fVar24 * fVar13 + fVar33 * fVar17;
  fVar40 = fVar40 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fVar10 = (float)uVar3 * fVar10;
  fVar14 = fVar27 * fVar14;
  fVar37 = (float)*(undefined8 *)(param_3 + 0x18) * fVar37;
  fVar27 = fVar11 * fVar10 + fVar27 * fVar14 + fVar15 * fVar37;
  fVar28 = fVar18 * fVar10 + fVar29 * fVar14 + fVar28 * fVar37;
  fVar29 = fVar22 * fVar10 + fVar24 * fVar14 + fVar33 * fVar37;
  fVar37 = fVar10 * 0.0 + fVar14 * 0.0 + fVar37 * 0.0;
  fVar11 = fVar41 * fVar27;
  fVar15 = fVar42 * fVar28;
  fVar18 = fVar44 * fVar37;
  auVar30._0_4_ = fVar41 * fVar19;
  auVar30._4_4_ = fVar42 * fVar20;
  auVar30._8_4_ = fVar43 * fVar21;
  auVar30._12_4_ = fVar44 * fVar40;
  auVar31._0_4_ = fVar41 * fVar23;
  auVar31._4_4_ = fVar42 * fVar25;
  auVar31._8_4_ = fVar43 * fVar26;
  auVar38._4_4_ = fVar15;
  auVar38._0_4_ = fVar11;
  auVar38._8_4_ = fVar43 * fVar29;
  auVar38._12_4_ = fVar18;
  auVar39._4_4_ = fVar15;
  auVar39._0_4_ = fVar11;
  auVar39._8_4_ = fVar43 * fVar29;
  auVar39._12_4_ = fVar18;
  auVar38 = NEON_ext(auVar38,auVar39,8,1);
  auVar39 = NEON_ext(auVar30,auVar30,8,1);
  auVar31._12_4_ = 0;
  fVar15 = fVar11 + fVar15 + auVar38._0_4_;
  fVar18 = auVar30._0_4_ + auVar30._4_4_ + auVar39._0_4_;
  auVar38 = NEON_ext(auVar31,auVar31,8,1);
  fVar11 = auVar31._0_4_ + auVar31._4_4_ + auVar38._0_4_ + auVar38._4_4_;
  auVar4._12_4_ = fVar44;
  auVar4._0_12_ = *pauVar1;
  auVar5._12_4_ = fVar44;
  auVar5._0_12_ = *pauVar1;
  auVar38 = NEON_ext(auVar4,auVar5,0xc,1);
  auVar6._12_4_ = fVar44;
  auVar6._0_12_ = *pauVar1;
  auVar38 = NEON_ext(auVar38,auVar6,8,1);
  uVar35 = NEON_ext(CONCAT44(fVar18,fVar15),(ulong)(uint)fVar11,4,1);
  fVar10 = -fVar42;
  auVar32._0_4_ = fVar41 * (float)uVar35 - auVar38._0_4_ * fVar15;
  auVar32._4_4_ = fVar42 * (float)((ulong)uVar35 >> 0x20) - auVar38._4_4_ * fVar18;
  auVar32._8_4_ = fVar43 * fVar15 - auVar38._8_4_ * fVar11;
  auVar32._12_4_ = fVar44 * fVar18 - auVar38._12_4_ * 0.0;
  auVar38 = NEON_ext(auVar32,auVar32,0xc,1);
  auVar38 = NEON_ext(auVar38,auVar32,8,1);
  uStack_50 = CONCAT44(fVar28 + (((fVar28 * 0.0 - fVar20 * fVar43) + fVar25 * fVar42) - -fVar11) *
                                param_2,
                       fVar27 + (((fVar27 * 0.0 - fVar19 * fVar43) + fVar23 * fVar42) - 0.0) *
                                param_2);
  uStack_48 = CONCAT44(fVar37 + (((0.0 - fVar43 * 0.0) + fVar42 * 0.0) - 0.0) * param_2,
                       fVar29 + (((fVar29 * 0.0 - fVar21 * fVar43) + fVar26 * fVar42) - fVar18) *
                                param_2);
  uStack_38 = CONCAT44(fVar40 + (((fVar43 * 0.0 + 0.0) - fVar41 * 0.0) - 0.0) * param_2,
                       fVar21 + (((fVar29 * fVar43 + fVar21 * 0.0) - fVar26 * fVar41) - -fVar15) *
                                param_2);
  uStack_40 = CONCAT44(fVar20 + (((fVar28 * fVar43 + fVar20 * 0.0) - fVar25 * fVar41) - 0.0) *
                                param_2,
                       fVar19 + (((fVar27 * fVar43 + fVar19 * 0.0) - fVar23 * fVar41) - fVar11) *
                                param_2);
  uStack_28 = CONCAT44(fVar9 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0 +
                       ((fVar10 * 0.0 + fVar41 * 0.0 + 0.0) - 0.0) * param_2,
                       fVar26 + ((fVar29 * fVar10 + fVar21 * fVar41 + fVar26 * 0.0) - 0.0) * param_2
                      );
  uStack_30 = CONCAT44(fVar25 + ((fVar28 * fVar10 + fVar20 * fVar41 + fVar25 * 0.0) - fVar15) *
                                param_2,
                       fVar23 + ((fVar27 * fVar10 + fVar19 * fVar41 + fVar23 * 0.0) - -fVar18) *
                                param_2);
  FUN_1098387ac(CONCAT44((fVar18 + auVar38._4_4_ * param_2) - (fVar18 + param_2 * 0.0),
                         (fVar15 + auVar38._0_4_ * param_2) - (fVar15 + param_2 * 0.0)),auStack_60,
                &uStack_50);
  param_1[1] = (ulong)(uint)((fVar43 - fStack_58) - fVar43);
  *param_1 = CONCAT44((fVar42 - auStack_60._4_4_) - fVar42,(fVar41 - auStack_60._0_4_) - fVar41);
  return;
}



/* Entry: 109838acc; end: 109838dbf;  */

/* WARNING: Removing unreachable block (ram,0x000109838c5c) */

void FUN_109838acc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 0x264);
  uVar6 = (ulong)uVar5;
  if (0 < (int)uVar5) {
    plVar7 = *(long **)(param_1 + 0x270);
    uVar2 = uVar6;
    do {
      if (*plVar7 == param_2) {
        if ((int)uVar2 != 0) {
          return;
        }
        break;
      }
      uVar2 = uVar2 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar2 != 0);
  }
  if (uVar5 == *(uint *)(param_1 + 0x268)) {
    uVar1 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar5 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar6 = (ulong)*(uint *)(param_1 + 0x264);
      }
      if (0 < (int)uVar6) {
        lVar8 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar8) = *(undefined8 *)(*(long *)(param_1 + 0x270) + lVar8);
          lVar8 = lVar8 + 8;
        } while (uVar6 << 3 != lVar8);
      }
      if ((*(long *)(param_1 + 0x270) != 0) && (*(char *)(param_1 + 0x278) == '\x01')) {
        FUN_109825740();
        uVar6 = (ulong)*(uint *)(param_1 + 0x264);
      }
      uVar5 = (uint)uVar6;
      *(undefined1 *)(param_1 + 0x278) = 1;
      *(ulong *)(param_1 + 0x270) = uVar2;
      *(uint *)(param_1 + 0x268) = uVar1;
    }
  }
  *(long *)(*(long *)(param_1 + 0x270) + (long)(int)uVar5 * 8) = param_2;
  *(uint *)(param_1 + 0x264) = uVar5 + 1;
  lVar8 = *(long *)(param_2 + 0x28);
  lVar4 = *(long *)(param_2 + 0x30);
  lVar3 = lVar8;
  if (lVar8 != param_1) {
    lVar3 = lVar4;
    lVar4 = lVar8;
  }
  uVar5 = *(uint *)(lVar3 + 0x14c);
  if (uVar5 == *(uint *)(lVar3 + 0x150)) {
    uVar1 = uVar5 << 1;
    if (uVar5 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar5 < (int)uVar1) {
      if (uVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
        FUN_1098256f4(uVar6,0x10);
        uVar5 = *(uint *)(lVar3 + 0x14c);
      }
      if (0 < (int)uVar5) {
        lVar8 = 0;
        do {
          *(undefined8 *)(uVar6 + lVar8) = *(undefined8 *)(*(long *)(lVar3 + 0x158) + lVar8);
          lVar8 = lVar8 + 8;
        } while ((ulong)uVar5 << 3 != lVar8);
      }
      if ((*(long *)(lVar3 + 0x158) != 0) && (*(char *)(lVar3 + 0x160) == '\x01')) {
        FUN_109825740();
        uVar5 = *(uint *)(lVar3 + 0x14c);
      }
      *(undefined1 *)(lVar3 + 0x160) = 1;
      *(ulong *)(lVar3 + 0x158) = uVar6;
      *(uint *)(lVar3 + 0x150) = uVar1;
    }
  }
  *(long *)(*(long *)(lVar3 + 0x158) + (long)(int)uVar5 * 8) = lVar4;
  *(uint *)(lVar3 + 0x14c) = uVar5 + 1;
  *(uint *)(lVar3 + 0x140) = (uint)(0 < (int)(uVar5 + 1));
  return;
}



/* Entry: 109838dc0; end: 109838dc7;  */

undefined8 FUN_109838dc0(void)

{
  return 0x208;
}



/* Entry: 109838dc8; end: 109838f6f;  */

undefined * FUN_109838dc8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_109807b68();
  lVar1 = 0;
  lVar2 = param_1 + 0x180;
  lVar3 = param_2 + 0x120;
  do {
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0x10);
    lVar1 = lVar1 + 1;
    lVar3 = lVar3 + 0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar1 != 3);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x150 + lVar2) = *(undefined4 *)(param_1 + 0x1b0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x160 + lVar2) = *(undefined4 *)(param_1 + 0x1c0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_1 + 0x1d0);
  do {
    *(undefined4 *)(param_2 + 0x170 + lVar2) = *(undefined4 *)(param_1 + 0x2b0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x180 + lVar2) = *(undefined4 *)(param_1 + 0x1e0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 400 + lVar2) = *(undefined4 *)(param_1 + 0x1f0 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x1a0 + lVar2) = *(undefined4 *)(param_1 + 0x200 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x1b0 + lVar2) = *(undefined4 *)(param_1 + 0x210 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x1c0 + lVar2) = *(undefined4 *)(param_1 + 0x220 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x1d0 + lVar2) = *(undefined4 *)(param_1 + 0x230 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  *(undefined8 *)(param_2 + 0x1e4) = *(undefined8 *)(param_1 + 0x240);
  *(undefined4 *)(param_2 + 0x1fc) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)(param_2 + 0x200) = *(undefined4 *)(param_1 + 0x250);
  return &UNK_10f580c8a;
}



/* Entry: 109838f70; end: 109838ff7;  */

void FUN_109838f70(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x20))();
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x20))(param_2,(long)(int)plVar1,1);
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x28))(param_1,plVar2[1],param_2);
                    /* WARNING: Could not recover jumptable at 0x000109838ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,plVar2,plVar1,0x59444252,param_1);
  return;
}



/* Entry: 109838ff8; end: 109839047;  */

void FUN_109838ff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b14840;
  FUN_109833fe0(param_1 + 0x4c);
  *param_1 = &PTR_FUN_110b122a8;
  FUN_109807e94(param_1 + 0x29);
  FUN_109825740(param_1);
  return;
}



/* Entry: 109839048; end: 1098390a3;  */

void FUN_109839048(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    do {
      if (*(long *)(lVar3 + uVar2 * 8) == *param_2) {
        if ((int)uVar1 <= (int)uVar2) {
          return;
        }
        uVar1 = uVar1 - 1;
        uVar4 = *(undefined8 *)(lVar3 + uVar2 * 8);
        *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar3 + (ulong)uVar1 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8) = uVar4;
        *(uint *)(param_1 + 4) = uVar1;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



/* Entry: 1098390a4; end: 1098390fb;  */

ulong FUN_1098390a4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  byte *pbVar6;
  
  if ((param_4 & 1) != 0) {
    return param_1;
  }
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f580c9f);
  pbVar2 = &UNK_10f580ccc;
  plVar4 = (long *)&UNK_10f580cd6;
  ___assert_rtn(&UNK_10f580ccc,&UNK_10f580cd6,0x1d,&UNK_10f580ce0);
  FUN_10945a99c(plVar4);
  uVar5 = 0;
  pbVar6 = pbVar2;
  do {
    while( true ) {
      if ((*(byte *)((long)plVar4 + *(long *)(*plVar4 + -0x18) + 0x20) & 7) != 0 || *pbVar6 == 0) {
        return (ulong)(*pbVar6 == 0);
      }
      plVar3 = plVar4;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
      uVar1 = uVar5;
      if ((uint)plVar3 != 0xffffffff) {
        uVar1 = (uint)plVar3;
      }
      uVar5 = (uint)(char)uVar1;
      if ((uint)*pbVar6 != (uVar1 & 0xff)) break;
      pbVar6 = pbVar6 + 1;
    }
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE7putbackEc(plVar4,uVar5);
    plVar3 = plVar4;
    FUN_1098391c4();
  } while (((ulong)plVar3 & 1) != 0);
  while (pbVar2 < pbVar6) {
    pbVar6 = pbVar6 + -1;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE7putbackEc(plVar4,(long)(char)*pbVar6);
  }
  return 0;
}



/* Entry: 1098390fc; end: 1098391c3;  */

bool FUN_1098390fc(byte *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  byte *pbVar4;
  
  FUN_10945a99c(param_2);
  uVar3 = 0;
  pbVar4 = param_1;
  do {
    while( true ) {
      if ((*(byte *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) & 7) != 0 || *pbVar4 == 0)
      {
        return *pbVar4 == 0;
      }
      plVar2 = param_2;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
      uVar1 = uVar3;
      if ((uint)plVar2 != 0xffffffff) {
        uVar1 = (uint)plVar2;
      }
      uVar3 = (uint)(char)uVar1;
      if ((uint)*pbVar4 != (uVar1 & 0xff)) break;
      pbVar4 = pbVar4 + 1;
    }
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE7putbackEc(param_2,uVar3);
    plVar2 = param_2;
    FUN_1098391c4();
  } while (((ulong)plVar2 & 1) != 0);
  while (param_1 < pbVar4) {
    pbVar4 = pbVar4 + -1;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE7putbackEc(param_2,(long)(char)*pbVar4);
  }
  return false;
}



/* Entry: 1098391c4; end: 1098392f3;  */

undefined8 FUN_1098391c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (((*(byte *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) >> 1 & 1) == 0) &&
     (plVar1 = param_1, __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv(),
     (int)plVar1 == 0x2f)) {
    plVar1 = param_1;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
    if ((*(byte *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) >> 1 & 1) == 0) {
      plVar2 = param_1;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
      if ((((uint)plVar2 != 0xffffffff) && (((uint)plVar1 & 0xff) == 0x2f)) &&
         (((uint)plVar2 & 0xff) == 0x2f)) {
        lVar3 = *(long *)(*param_1 + -0x18);
        if ((*(byte *)((long)param_1 + lVar3 + 0x20) >> 1 & 1) == 0) {
          do {
            plVar1 = param_1;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
            if (((int)plVar1 == 0xd) ||
               (plVar1 = param_1, __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv(),
               (int)plVar1 == 10)) break;
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv(param_1);
          } while ((*(byte *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) >> 1 & 1) == 0);
          lVar3 = *(long *)(*param_1 + -0x18);
        }
        if ((*(byte *)((long)param_1 + lVar3 + 0x20) >> 1 & 1) == 0) {
          FUN_10945a99c(param_1);
        }
        return 1;
      }
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5ungetEv(param_1);
      __ZNSt3__18ios_base5clearEj((long)param_1 + *(long *)(*param_1 + -0x18),0);
    }
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5ungetEv(param_1);
    __ZNSt3__18ios_base5clearEj((long)param_1 + *(long *)(*param_1 + -0x18),0);
  }
  return 0;
}



/* Entry: 1098392f4; end: 109839667;  */

bool FUN_1098392f4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  char cVar11;
  undefined **appuStack_188 [2];
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  int iStack_70;
  undefined1 auStack_69 [9];
  
  uVar4 = 0;
  FUN_1098390fc(&DAT_10f3b3c06,param_1);
  if ((uVar4 & 1) == 0) {
    plVar8 = param_1;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
    if ((int)plVar8 != 0x27) {
      return false;
    }
    plVar8 = param_1;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
    uVar2 = 0;
    if ((uint)plVar8 != 0xffffffff) {
      uVar2 = (uint)plVar8;
    }
    plVar8 = (long *)(ulong)uVar2;
    cVar11 = '\'';
  }
  else {
    plVar8 = (long *)0x0;
    cVar11 = '\"';
  }
  cVar7 = (char)plVar8;
  lVar6 = *(long *)(*param_1 + -0x18);
  if (*(int *)((long)param_1 + lVar6 + 0x20) == 0) {
    puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
    do {
      plVar9 = param_1;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
      iVar3 = (int)plVar8;
      if ((int)plVar9 != -1) {
        iVar3 = (int)plVar9;
      }
      cVar7 = (char)iVar3;
      plVar9 = (long *)(ulong)(uint)(int)cVar7;
      if (cVar11 == cVar7) {
        lVar6 = *(long *)(*param_1 + -0x18);
        break;
      }
      plVar8 = plVar9;
      if ((int)cVar7 == 0x5c) {
        plVar10 = param_1;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
        if ((uint)plVar10 == 0xffffffff) {
          plVar10 = (long *)0x5c;
LAB_1098393fc:
          plVar9 = (long *)(ulong)(uint)(int)(char)plVar10;
          plVar8 = plVar10;
          goto LAB_109839550;
        }
        uVar2 = (uint)plVar10 & 0xff;
        if (uVar2 < 0x6e) {
          if (uVar2 < 0x62) {
            if ((uVar2 != 0x2f) && (uVar2 != 0x5c)) {
LAB_109839530:
              plVar9 = (long *)(ulong)(uint)(int)(char)plVar10;
              plVar8 = plVar9;
              if (cVar11 != (char)plVar10) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_2,0x5c);
              }
              goto LAB_109839550;
            }
            goto LAB_1098393fc;
          }
          if (uVar2 == 0x62) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,8);
            plVar8 = (long *)0x62;
          }
          else {
            if (uVar2 != 0x66) goto LAB_109839530;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,0xc);
            plVar8 = (long *)0x66;
          }
        }
        else if (uVar2 < 0x74) {
          if (uVar2 == 0x6e) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,10)
            ;
            plVar8 = (long *)0x6e;
          }
          else {
            if (uVar2 != 0x72) goto LAB_109839530;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,0xd);
            plVar8 = (long *)0x72;
          }
        }
        else if (uVar2 == 0x74) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,9);
          plVar8 = (long *)0x74;
        }
        else {
          if (uVar2 != 0x75) goto LAB_109839530;
          FUN_1092a988c(appuStack_188);
          iStack_70 = 0;
          uVar2 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20);
          if ((uVar2 >> 1 & 1) == 0) {
            plVar8 = (long *)0x75;
            do {
              if ((uVar2 != 0) || (3 < iStack_70)) {
                if (uVar2 == 0) {
                  pppuVar5 = appuStack_188;
                  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(pppuVar5,&iStack_70);
                  if ((*(byte *)((long)pppuVar5 + (long)((*pppuVar5)[-3] + 0x20)) & 5) == 0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,(undefined1)iStack_70);
                  }
                }
                break;
              }
              plVar9 = param_1;
              __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
              uVar2 = (uint)plVar8;
              if ((uint)plVar9 != 0xffffffff) {
                uVar2 = (uint)plVar9;
              }
              plVar8 = (long *)(ulong)uVar2;
              *(uint *)(auStack_168 + (long)(ppuStack_178[-3] + -8)) =
                   *(uint *)(auStack_168 + (long)(ppuStack_178[-3] + -8)) & 0xffffffb5 | 8;
              auStack_69[0] = (undefined1)uVar2;
              FUN_1092b4db8(&ppuStack_178,auStack_69,1);
              iStack_70 = iStack_70 + 1;
              uVar2 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20);
            } while ((uVar2 >> 1 & 1) == 0);
          }
          else {
            plVar8 = (long *)0x75;
          }
          appuStack_188[0] = &PTR_SUB_1108a5a38;
          ppuStack_178 = &PTR_DAT_1108a5a60;
          ppuStack_170 = &PTR_DAT_11088d7b0;
          appuStack_108[0] = &PTR_DAT_1108a5a88;
          if (cStack_119 < '\0') {
            __ZdlPv(uStack_130);
          }
          ppuStack_170 = (undefined **)puVar1;
          __ZNSt3__16localeD1Ev(auStack_168);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_188,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
        }
      }
      else {
LAB_109839550:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,plVar9)
        ;
      }
      cVar7 = (char)plVar8;
      lVar6 = *(long *)(*param_1 + -0x18);
    } while (*(int *)((long)param_1 + lVar6 + 0x20) == 0);
  }
  return (*(byte *)((long)param_1 + lVar6 + 0x20) & 5) == 0 && cVar11 == cVar7;
}



/* Entry: 109839668; end: 1098396a7;  */

long FUN_109839668(long param_1)

{
  FUN_1098396a8();
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x00010983b50c(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 1098396a8; end: 10983973f;  */

void FUN_1098396a8(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)*param_1;
  while (plVar4 != param_1 + 1) {
    lVar3 = plVar4[7];
    if (lVar3 != 0) {
      FUN_109839960(lVar3);
      __ZdlPv(lVar3);
    }
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  func_0x00010983b50c(param_1,param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  return;
}



/* Entry: 109839740; end: 10983995f;  */

undefined * FUN_109839740(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_69;
  undefined8 *puStack_68;
  
  FUN_1098396a8(param_2);
  iVar5 = 0xf2da0fd;
  FUN_1098390fc(&DAT_10f2da0fd,param_1);
  if (iVar5 == 0) {
LAB_1098398fc:
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_10f2da10d;
    FUN_1098390fc(&DAT_10f2da10d,param_1);
    puVar6 = (undefined *)0x1;
    if (((ulong)puVar1 & 1) == 0) {
      do {
        uStack_88 = 0;
        uStack_80 = 0;
        lStack_78 = 0;
        uVar2 = param_1;
        FUN_1098392f4(param_1,&uStack_88);
        if ((uVar2 & 1) == 0) {
          uVar2 = param_1;
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
          iVar5 = 1;
          if ((int)uVar2 == 0x7d) {
            iVar5 = 2;
          }
        }
        else {
          iVar5 = 0xf20818c;
          FUN_1098390fc(":",param_1);
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          else {
            puVar3 = (undefined4 *)0x10;
            __Znwm();
            *puVar3 = 6;
            uVar2 = param_1;
            FUN_1098399e4(param_1,puVar3);
            if ((uVar2 & 1) == 0) {
              FUN_109839960(puVar3);
              __ZdlPv(puVar3);
              iVar5 = 2;
            }
            else {
              lVar7 = param_2;
              FUN_10983b55c(param_2,&uStack_88);
              puStack_68 = &uStack_88;
              lVar4 = param_2;
              if (param_2 + 8 == lVar7) {
                FUN_10983b5d8(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
              }
              else {
                lVar7 = param_2;
                FUN_10983b5d8(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
                lVar7 = *(long *)(lVar7 + 0x38);
                if (lVar7 != 0) {
                  FUN_109839960(lVar7);
                  __ZdlPv(lVar7);
                }
                puStack_68 = &uStack_88;
                FUN_10983b5d8(param_2,&uStack_88,&UNK_10dd5b8f9,&puStack_68,&uStack_69);
              }
              iVar5 = 0;
              *(undefined4 **)(lVar4 + 0x38) = puVar3;
            }
          }
        }
        if (lStack_78 < 0) {
          __ZdlPv(uStack_88);
        }
        if (iVar5 != 0) {
          if (iVar5 == 1) goto LAB_1098398fc;
          break;
        }
        uVar2 = 0;
        FUN_1098390fc(&UNK_10f580ce2,param_1);
      } while ((uVar2 & 1) != 0);
      puVar6 = &DAT_10f2da10d;
      FUN_1098390fc(&DAT_10f2da10d,param_1);
    }
  }
  return puVar6;
}



/* Entry: 109839960; end: 1098399e3;  */

void FUN_109839960(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 5) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1098399d4;
    FUN_109839668(puVar2);
  }
  else if (iVar1 == 4) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1098399d4;
    FUN_109839c54(puVar2);
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (puVar2 == (undefined8 *)0x0) goto LAB_1098399d4;
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      __ZdlPv(*puVar2);
    }
  }
  __ZdlPv(puVar2);
LAB_1098399d4:
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1098399e4; end: 109839c53;  */

long * FUN_1098399e4(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109839960(param_2);
  plStack_168 = (long *)0x0;
  lStack_160 = 0;
  lStack_158 = 0;
  plVar1 = param_1;
  FUN_1098392f4(param_1,&plStack_168);
  if ((int)plVar1 != 0) {
    plVar1 = (long *)0x18;
    __Znwm();
    *(long **)(param_2 + 2) = plVar1;
    plVar1[1] = lStack_160;
    *plVar1 = (long)plStack_168;
    plVar1[2] = lStack_158;
    plStack_168 = (long *)0x0;
    lStack_160 = 0;
    lStack_158 = 0;
    plVar6 = (long *)0x1;
    *param_2 = 1;
    goto LAB_109839b2c;
  }
  FUN_10945a99c(param_1);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(&uStack_c0,param_1);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERe(param_1,param_2 + 2);
  plVar1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  if ((*(byte *)(plVar1 + 4) & 5) == 0) {
    *param_2 = 0;
  }
  else {
    __ZNSt3__18ios_base5clearEj(plVar1,0);
    uStack_d8 = uStack_48;
    uStack_e0 = uStack_50;
    uStack_d0 = uStack_40;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
              (param_1,&uStack_150);
    pcVar2 = "true";
    FUN_1098390fc("true",param_1);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = &DAT_10f6842c6;
      FUN_1098390fc(&DAT_10f6842c6,param_1);
      if ((int)pcVar2 != 0) {
        uVar4 = 0;
        goto LAB_109839b1c;
      }
      pcVar2 = "null";
      FUN_1098390fc("null",param_1);
      if ((((ulong)pcVar2 & 1) == 0) &&
         (pcVar2 = (char *)param_1, __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv(),
         (int)pcVar2 != 0x2c)) {
        plVar1 = param_1;
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4peekEv();
        if ((int)plVar1 == 0x5b) {
          puVar3 = (undefined8 *)0x18;
          __Znwm();
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *(undefined8 **)(param_2 + 2) = puVar3;
          plVar1 = param_1;
          func_0x000109839ce8();
          if ((int)plVar1 != 0) {
            uVar5 = 4;
            param_1 = plVar1;
            goto LAB_109839b24;
          }
          if (*(long *)(param_2 + 2) != 0) {
            FUN_109839c54();
            __ZdlPv();
          }
        }
        puVar3 = (undefined8 *)0x30;
        __Znwm();
        puVar3[1] = 0;
        *puVar3 = puVar3 + 1;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(undefined8 **)(param_2 + 2) = puVar3;
        FUN_109839740();
        if ((int)param_1 == 0) {
          plVar1 = *(long **)(param_2 + 2);
          if (plVar1 != (long *)0x0) {
            FUN_109839668();
            __ZdlPv();
          }
          plVar6 = (long *)0x0;
          goto LAB_109839b2c;
        }
        uVar5 = 5;
      }
      else {
        uVar5 = 3;
        param_1 = (long *)pcVar2;
      }
    }
    else {
      uVar4 = 1;
LAB_109839b1c:
      *(undefined1 *)(param_2 + 2) = uVar4;
      uVar5 = 2;
      param_1 = (long *)pcVar2;
    }
LAB_109839b24:
    *param_2 = uVar5;
    plVar1 = param_1;
  }
  plVar6 = (long *)0x1;
LAB_109839b2c:
  if (lStack_158 < 0) {
    plVar1 = plStack_168;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar6;
  }
  ___stack_chk_fail();
  if (lStack_158 < 0) {
    __ZdlPv(plStack_168);
  }
  __Unwind_Resume();
  FUN_109839c88();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109839c54; end: 109839c87;  */

long * FUN_109839c54(long *param_1)

{
  FUN_109839c88();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109839c88; end: 109839e83;  */

void FUN_109839c88(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar3 != plVar1) {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        FUN_109839960(lVar2);
        __ZdlPv(lVar2);
        plVar1 = (long *)param_1[1];
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    plVar3 = (long *)*param_1;
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 109839e84; end: 109839f23;  */

void FUN_109839e84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  
  auStack_30[0] = 5;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_28 = param_2;
  FUN_109839f24(auStack_48,0,&uStack_60,auStack_30);
  uStack_28 = 0;
  FUN_10983a5ec(param_1,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  FUN_109839960(auStack_30);
  return;
}



/* Entry: 109839f24; end: 10983a5eb;  */

void FUN_109839f24(undefined8 *param_1,int param_2,long param_3,int *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 ***pppuVar16;
  undefined8 ***apppuStack_1d0 [2];
  char cStack_1b9;
  long alStack_1b8 [3];
  undefined8 ***pppuStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 ***pppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined8 auStack_150 [7];
  undefined8 uStack_118;
  char cStack_101;
  undefined **appuStack_f0 [19];
  undefined1 uStack_51;
  
  FUN_1092a988c(appuStack_170);
  func_0x000104c59120(&pppuStack_188,param_2,9);
  uVar3 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar3 = (ulong)*(byte *)(param_3 + 0x17);
  }
  pppuVar10 = &ppuStack_160;
  uVar2 = uStack_180;
  ppppuVar11 = (undefined8 ****)pppuStack_188;
  if (-1 < (char)bStack_171) {
    uVar2 = (ulong)bStack_171;
    ppppuVar11 = &pppuStack_188;
  }
  if (uVar3 == 0) {
    FUN_1092b4db8(pppuVar10,ppppuVar11,uVar2);
  }
  else {
    pppuVar9 = pppuVar10;
    FUN_1092b4db8(pppuVar10,ppppuVar11,uVar2);
    pppuStack_1a0 = (undefined8 ***)CONCAT71(pppuStack_1a0._1_7_,0x22);
    FUN_1092b4db8();
    FUN_10983ae98(&pppuStack_1a0,param_3);
    uVar3 = uStack_198;
    ppppuVar11 = (undefined8 ****)pppuStack_1a0;
    if (-1 < (long)uStack_190) {
      uVar3 = uStack_190 >> 0x38;
      ppppuVar11 = &pppuStack_1a0;
    }
    FUN_1092b4db8(pppuVar9,ppppuVar11,uVar3);
    alStack_1b8[0]._0_1_ = 0x22;
    FUN_1092b4db8();
    alStack_1b8[0]._0_1_ = 0x3a;
    FUN_1092b4db8();
    alStack_1b8[0] = CONCAT71(alStack_1b8[0]._1_7_,0x20);
    FUN_1092b4db8();
    if ((long)uStack_190 < 0) {
      __ZdlPv(pppuStack_1a0);
    }
  }
  iVar6 = *param_4;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      *(undefined8 *)((long)auStack_150 + (long)ppuStack_160[-3]) = 0x10;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEe(*(undefined8 *)(param_4 + 2),pppuVar10);
      FUN_10926dc5c(&pppuStack_1a0,&ppuStack_158,alStack_1b8);
      ppppuVar11 = &pppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar11,&DAT_10f56e05b,2);
    }
    else if (iVar6 == 1) {
      pppuStack_1a0 = (undefined8 ***)CONCAT71(pppuStack_1a0._1_7_,0x22);
      FUN_1092b4db8(pppuVar10,&pppuStack_1a0,1);
      FUN_10983ae98(&pppuStack_1a0,*(undefined8 *)(param_4 + 2));
      uVar3 = uStack_198;
      ppppuVar11 = (undefined8 ****)pppuStack_1a0;
      if (-1 < (long)uStack_190) {
        uVar3 = uStack_190 >> 0x38;
        ppppuVar11 = &pppuStack_1a0;
      }
      FUN_1092b4db8(pppuVar10,ppppuVar11,uVar3);
      alStack_1b8[0] = CONCAT71(alStack_1b8[0]._1_7_,0x22);
      FUN_1092b4db8();
      if ((long)uStack_190 < 0) {
        __ZdlPv(pppuStack_1a0);
      }
      FUN_10926dc5c(&pppuStack_1a0,&ppuStack_158,alStack_1b8);
      ppppuVar11 = &pppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar11,&DAT_10f56e05b,2);
    }
    else {
LAB_10983a40c:
      FUN_1092b4db8(pppuVar10,"null",4);
      FUN_10926dc5c(&pppuStack_1a0,&ppuStack_158,alStack_1b8);
      ppppuVar11 = &pppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar11,&DAT_10f56e05b,2);
    }
LAB_10983a448:
    pppuVar16 = *ppppuVar11;
    param_1[1] = ppppuVar11[1];
    *param_1 = pppuVar16;
    param_1[2] = ppppuVar11[2];
    ppppuVar11[1] = (undefined8 ***)0x0;
    ppppuVar11[2] = (undefined8 ***)0x0;
    *ppppuVar11 = (undefined8 ***)0x0;
    apppuStack_1d0[0] = pppuStack_1a0;
    if (-1 < (long)uStack_190) goto LAB_10983a470;
  }
  else {
    if (iVar6 == 2) {
      bVar8 = (char)param_4[2] == '\0';
      pcVar4 = "true";
      if (bVar8) {
        pcVar4 = "false";
      }
      uVar1 = 4;
      if (bVar8) {
        uVar1 = 5;
      }
      FUN_1092b4db8(pppuVar10,pcVar4,uVar1);
      FUN_10926dc5c(&pppuStack_1a0,&ppuStack_158,alStack_1b8);
      ppppuVar11 = &pppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar11,&DAT_10f56e05b,2);
      goto LAB_10983a448;
    }
    if (iVar6 == 4) {
      FUN_1092b4db8(pppuVar10,&UNK_10f56e061,2);
      puVar13 = (undefined8 *)**(long **)(param_4 + 2);
      puVar5 = (undefined8 *)(*(long **)(param_4 + 2))[1];
      if (puVar13 != puVar5) {
        do {
          alStack_1b8[0] = 0;
          alStack_1b8[1] = 0;
          alStack_1b8[2] = 0;
          FUN_109839f24(&pppuStack_1a0,param_2 + 1,alStack_1b8,*puVar13);
          uVar3 = uStack_198;
          ppppuVar11 = (undefined8 ****)pppuStack_1a0;
          if (-1 < (long)uStack_190) {
            uVar3 = uStack_190 >> 0x38;
            ppppuVar11 = &pppuStack_1a0;
          }
          FUN_1092b4db8(pppuVar10,ppppuVar11,uVar3);
          if ((long)uStack_190 < 0) {
            __ZdlPv(pppuStack_1a0);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar5);
      }
      FUN_10926dc5c(apppuStack_1d0,&ppuStack_158,&uStack_51);
      FUN_10983a5ec(alStack_1b8,apppuStack_1d0);
      ppppuVar11 = (undefined8 ****)pppuStack_188;
      if (-1 < (char)bStack_171) {
        uStack_180 = (ulong)bStack_171;
        ppppuVar11 = &pppuStack_188;
      }
      plVar14 = alStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar14,ppppuVar11,uStack_180);
      uStack_198 = plVar14[1];
      pppuStack_1a0 = (undefined8 ***)*plVar14;
      uStack_190 = plVar14[2];
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = 0;
      ppppuVar11 = &pppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar11,&UNK_10f56e06f,3);
    }
    else {
      if (iVar6 != 5) goto LAB_10983a40c;
      FUN_1092b4db8(pppuVar10,&DAT_10f38bea1,2);
      plVar12 = *(undefined8 **)(param_4 + 2) + 1;
      plVar14 = (long *)**(undefined8 **)(param_4 + 2);
      if (plVar14 != plVar12) {
        do {
          FUN_109839f24(&pppuStack_1a0,param_2 + 1,plVar14 + 4,plVar14[7]);
          uVar3 = uStack_198;
          ppppuVar11 = (undefined8 ****)pppuStack_1a0;
          if (-1 < (long)uStack_190) {
            uVar3 = uStack_190 >> 0x38;
            ppppuVar11 = &pppuStack_1a0;
          }
          FUN_1092b4db8(pppuVar10,ppppuVar11,uVar3);
          if ((long)uStack_190 < 0) {
            __ZdlPv(pppuStack_1a0);
          }
          plVar7 = (long *)plVar14[1];
          plVar15 = plVar14;
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar15[2];
              bVar8 = (long *)*plVar14 != plVar15;
              plVar15 = plVar14;
            } while (bVar8);
          }
          else {
            do {
              plVar14 = plVar7;
              plVar7 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        } while (plVar14 != plVar12);
      }
      FUN_10926dc5c(apppuStack_1d0,&ppuStack_158,&uStack_51);
      FUN_10983a5ec(alStack_1b8,apppuStack_1d0);
      ppppuVar11 = (undefined8 ****)pppuStack_188;
      if (-1 < (char)bStack_171) {
        uStack_180 = (ulong)bStack_171;
        ppppuVar11 = &pppuStack_188;
      }
      plVar14 = alStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar14,ppppuVar11,uStack_180);
      uStack_198 = plVar14[1];
      pppuStack_1a0 = (undefined8 ***)*plVar14;
      uStack_190 = plVar14[2];
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = 0;
      ppppuVar11 = &pppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar11,&UNK_10f580d7d,3);
    }
    pppuVar16 = *ppppuVar11;
    param_1[1] = ppppuVar11[1];
    *param_1 = pppuVar16;
    param_1[2] = ppppuVar11[2];
    ppppuVar11[1] = (undefined8 ***)0x0;
    ppppuVar11[2] = (undefined8 ***)0x0;
    *ppppuVar11 = (undefined8 ***)0x0;
    if ((long)uStack_190 < 0) {
      __ZdlPv(pppuStack_1a0);
    }
    if (alStack_1b8[2] < 0) {
      __ZdlPv(alStack_1b8[0]);
    }
    if (-1 < cStack_1b9) goto LAB_10983a470;
  }
  __ZdlPv(apppuStack_1d0[0]);
LAB_10983a470:
  if ((char)bStack_171 < '\0') {
    __ZdlPv(pppuStack_188);
  }
  appuStack_170[0] = &PTR_SUB_1108a5a38;
  ppuStack_160 = &PTR_DAT_1108a5a60;
  appuStack_f0[0] = &PTR_DAT_1108a5a88;
  ppuStack_158 = &PTR_DAT_11088d7b0;
  if (cStack_101 < '\0') {
    __ZdlPv(uStack_118);
  }
  ppuStack_158 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_150);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  return;
}



/* Entry: 10983a5ec; end: 10983a66f;  */

void FUN_10983a5ec(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    param_1[2] = param_2[2];
  }
  bVar3 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (2 < uVar1) {
    plVar2 = (long *)*param_1;
    if (-1 < (char)bVar3) {
      plVar2 = param_1;
    }
    if (*(char *)((long)plVar2 + (uVar1 - 2)) == ',') {
      *(undefined1 *)((long)plVar2 + (uVar1 - 2)) = 0x20;
    }
  }
  return;
}



/* Entry: 10983a670; end: 10983a6df;  */

undefined8 * FUN_10983a670(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10983a6e0();
  return param_1;
}



/* Entry: 10983a6e0; end: 10983a84b;  */

void FUN_10983a6e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *aplStack_88 [6];
  undefined1 uStack_51;
  
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    *(undefined1 *)param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((long)param_1 + 0x2f) = 0;
  }
  if (param_1 == param_2) {
    FUN_10983a670(aplStack_88,param_1);
    FUN_10983a6e0(param_1,aplStack_88);
    FUN_109839668(aplStack_88);
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 != param_2 + 1) {
      do {
        plVar1 = plVar6 + 4;
        puVar3 = param_1;
        FUN_10983b55c(param_1,plVar1);
        if ((param_1 + 1 != puVar3) && (lVar5 = puVar3[7], lVar5 != 0)) {
          FUN_109839960(lVar5);
          __ZdlPv(lVar5);
        }
        puVar4 = (undefined4 *)0x10;
        __Znwm();
        *puVar4 = 6;
        FUN_10983acf8();
        puVar3 = param_1;
        aplStack_88[0] = plVar1;
        FUN_10983b5d8(param_1,plVar1,&UNK_10dd5b8f9,aplStack_88,&uStack_51);
        puVar3[7] = puVar4;
        plVar1 = (long *)plVar6[1];
        plVar7 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar2 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar2);
        }
        else {
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      } while (plVar6 != param_2 + 1);
    }
  }
  return;
}



/* Entry: 10983a84c; end: 10983a923;  */

void FUN_10983a84c(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    **(undefined1 **)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  lVar2 = param_1;
  FUN_10983b55c(param_1,param_2);
  if ((param_1 + 8 != lVar2) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
    FUN_109839960(lVar2);
    __ZdlPv(lVar2);
  }
  puVar1 = (undefined4 *)0x10;
  __Znwm();
  *puVar1 = 6;
  FUN_10983acf8();
  uStack_38 = param_2;
  FUN_10983b5d8(param_1,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return;
}



/* Entry: 10983a924; end: 10983a983;  */

long FUN_10983a924(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    **(undefined1 **)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (param_1 != param_2) {
    FUN_1098396a8(param_1);
    FUN_10983a6e0(param_1,param_2);
  }
  return param_1;
}



/* Entry: 10983a984; end: 10983aa57;  */

undefined1 * FUN_10983a984(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **appuStack_140 [2];
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  pppuVar1 = appuStack_140;
  FUN_1093f2800(appuStack_140,param_2,8);
  FUN_109839740(appuStack_140,param_1);
  appuStack_c8[0] = &PTR_DAT_1108df740;
  appuStack_140[0] = &PTR_DAT_1108df718;
  ppuStack_130 = &PTR_DAT_11088d7b0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_140,&PTR_PTR_1108df758);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return (undefined1 *)pppuVar1;
}



/* Entry: 10983aa58; end: 10983aa9f;  */

undefined8 * FUN_10983aa58(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10983aaa0();
  return param_1;
}



/* Entry: 10983aaa0; end: 10983ab63;  */

void FUN_10983aaa0(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *apuStack_58 [3];
  
  if (param_1 == param_2) {
    FUN_10983aa58(apuStack_58,param_1);
    FUN_10983aaa0(param_1,apuStack_58);
    FUN_109839c54(apuStack_58);
  }
  else {
    lVar1 = param_2[1];
    for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 8) {
      puVar2 = (undefined4 *)0x10;
      __Znwm();
      *puVar2 = 6;
      FUN_10983acf8();
      apuStack_58[0] = puVar2;
      FUN_10983ab64(param_1,apuStack_58);
    }
  }
  return;
}



/* Entry: 10983ab64; end: 10983ac23;  */

long * FUN_10983ab64(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined **appuStack_170 [2];
  undefined **ppuStack_160;
  undefined1 auStack_158 [56];
  undefined8 uStack_120;
  char cStack_109;
  undefined **appuStack_f8 [19];
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar3 = param_1;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10983ae50();
      pppuVar4 = appuStack_170;
      FUN_1093f2800(appuStack_170);
      func_0x000109839ce8(appuStack_170,param_1);
      appuStack_f8[0] = &PTR_DAT_1108df740;
      appuStack_170[0] = &PTR_DAT_1108df718;
      ppuStack_160 = &PTR_DAT_11088d7b0;
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      ppuStack_160 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(auStack_158);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_170,&PTR_PTR_1108df758);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f8);
      return (long *)pppuVar4;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    puVar5 = param_2;
    FUN_10983ae64();
    puVar2 = (undefined8 *)(uVar7 + lVar8);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar8 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = uVar7 + (long)puVar5 * 8;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10983ac24; end: 10983acf7;  */

undefined1 * FUN_10983ac24(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **appuStack_140 [2];
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  pppuVar1 = appuStack_140;
  FUN_1093f2800(appuStack_140,param_2,8);
  func_0x000109839ce8(appuStack_140,param_1);
  appuStack_c8[0] = &PTR_DAT_1108df740;
  appuStack_140[0] = &PTR_DAT_1108df718;
  ppuStack_130 = &PTR_DAT_11088d7b0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_140,&PTR_PTR_1108df758);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return (undefined1 *)pppuVar1;
}



/* Entry: 10983acf8; end: 10983ae4f;  */

undefined4 ** FUN_10983acf8(undefined4 **param_1,undefined4 **param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *apuStack_58 [3];
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar5 = *(int *)param_2;
  if (iVar5 < 3) {
    if (iVar5 == 0) {
      ppuVar3 = param_1;
      FUN_109839960(param_1);
      *(int *)param_1 = 0;
      param_1[1] = param_2[1];
      return ppuVar3;
    }
    if (iVar5 == 1) goto LAB_10983ade8;
    if (iVar5 == 2) {
      ppuVar3 = param_1;
      FUN_109839960(param_1);
      *(int *)param_1 = 2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
      return ppuVar3;
    }
  }
  else {
    ppuVar3 = param_1;
    if (iVar5 < 5) {
      if (iVar5 == 3) {
        FUN_109839960(param_1);
        iVar5 = 3;
LAB_10983ae24:
        *(int *)param_1 = iVar5;
        return ppuVar3;
      }
      if (iVar5 == 4) {
        ppuVar4 = (undefined4 **)param_2[1];
        FUN_109839960();
        *(int *)param_1 = 4;
        ppuVar3 = (undefined4 **)0x18;
        __Znwm();
        ppuVar3[1] = (undefined4 *)0x0;
        ppuVar3[2] = (undefined4 *)0x0;
        *ppuVar3 = (undefined4 *)0x0;
        param_1[1] = (undefined4 *)ppuVar3;
        if (ppuVar3 == ppuVar4) {
          return ppuVar3;
        }
        FUN_109839c88();
        if (ppuVar3 == ppuVar4) {
          FUN_10983aa58(apuStack_58,ppuVar3);
          FUN_10983aaa0(ppuVar3,apuStack_58);
          ppuVar4 = apuStack_58;
          FUN_109839c54(ppuVar4);
        }
        else {
          puVar1 = ppuVar4[1];
          puVar6 = *ppuVar4;
          ppuVar4 = ppuVar3;
          for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
            puVar2 = (undefined4 *)0x10;
            __Znwm();
            *puVar2 = 6;
            FUN_10983acf8();
            ppuVar4 = ppuVar3;
            apuStack_58[0] = puVar2;
            FUN_10983ab64(ppuVar3,apuStack_58);
          }
        }
        return ppuVar4;
      }
    }
    else {
      if (iVar5 == 5) {
        ppuVar4 = (undefined4 **)param_2[1];
        FUN_109839960();
        *(int *)param_1 = 5;
        ppuVar3 = (undefined4 **)0x30;
        __Znwm();
        ppuVar3[2] = (undefined4 *)0x0;
        ppuVar3[3] = (undefined4 *)0x0;
        ppuVar3[1] = (undefined4 *)0x0;
        *ppuVar3 = (undefined4 *)(ppuVar3 + 1);
        ppuVar3[4] = (undefined4 *)0x0;
        ppuVar3[5] = (undefined4 *)0x0;
        param_1[1] = (undefined4 *)ppuVar3;
        if (*(char *)((long)ppuVar3 + 0x2f) < '\0') {
          *(undefined1 *)ppuVar3[3] = 0;
          ppuVar3[4] = (undefined4 *)0x0;
        }
        else {
          *(undefined1 *)(ppuVar3 + 3) = 0;
          *(undefined1 *)((long)ppuVar3 + 0x2f) = 0;
        }
        if (ppuVar3 != ppuVar4) {
          FUN_1098396a8(ppuVar3);
          FUN_10983a6e0(ppuVar3,ppuVar4);
        }
        return ppuVar3;
      }
      if (iVar5 == 6) goto LAB_10983ae24;
    }
  }
  _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f580c9f);
  ___assert_rtn(&UNK_10f580ccc,&UNK_10f580cd6,0x1d,&UNK_10f580ce0);
LAB_10983ade8:
  FUN_109839960();
  *(int *)param_1 = 1;
  ppuVar3 = (undefined4 **)0x18;
  __Znwm();
  ppuVar3[1] = (undefined4 *)0x0;
  ppuVar3[2] = (undefined4 *)0x0;
  *ppuVar3 = (undefined4 *)0x0;
  param_1[1] = (undefined4 *)ppuVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return ppuVar3;
}



/* Entry: 10983ae50; end: 10983ae63;  */

void FUN_10983ae50(undefined8 param_1,byte *param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined7 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined2 *puVar15;
  long lVar16;
  long lVar17;
  undefined **ppuStack_1d8;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  char cStack_169;
  undefined **appuStack_158 [19];
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined6 uStack_b7;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  long lStack_a0;
  
  puVar13 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar13 >> 0x3d == 0) {
    __Znwm((long)puVar13 << 3);
    return;
  }
  func_0x000104c4f740();
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113737db0 & 1) == 0) {
    iVar10 = 0x13737db0;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      ___cxa_atexit(0x10983b838,0,0x100000000);
      ___cxa_guard_release(0x113737db0);
    }
  }
  if (lRam0000000113737db8 == 0) {
    lVar17 = 0;
    puVar12 = (undefined8 *)0x1137365b0;
    do {
      ppuStack_1d8 = (undefined **)0x0;
      uStack_1d0 = 0;
      uStack_1c9 = 0;
      uStack_1c8._0_7_ = 0;
      uStack_1c8._7_1_ = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&ppuStack_1d8,(int)(char)lVar17);
      uVar9 = uStack_1c8._7_1_;
      uVar8 = (undefined7)uStack_1c8;
      uVar7 = uStack_1c9;
      uVar6 = uStack_1d0;
      ppuVar1 = ppuStack_1d8;
      uStack_b8 = (undefined1)uStack_1d0;
      uStack_b7 = (undefined6)((uint7)uStack_1d0 >> 8);
      uStack_b1 = uStack_1c9;
      uStack_b0 = (undefined7)uStack_1c8;
      ppuStack_1d8 = (undefined **)0x0;
      uStack_1d0 = 0;
      uStack_1c9 = 0;
      uStack_1c8._0_7_ = 0;
      uStack_1c8._7_1_ = '\0';
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
        *puVar12 = ppuVar1;
        puVar12[1] = CONCAT17(uStack_b1,CONCAT61(uStack_b7,uStack_b8));
        *(ulong *)((long)puVar12 + 0xf) = CONCAT71(uStack_b0,uStack_b1);
        *(undefined1 *)((long)puVar12 + 0x17) = uVar9;
        if (uStack_1c8._7_1_ < '\0') {
          __ZdlPv(ppuStack_1d8);
        }
      }
      else {
        *puVar12 = ppuVar1;
        puVar12[1] = CONCAT17(uVar7,uVar6);
        *(ulong *)((long)puVar12 + 0xf) = CONCAT71(uVar8,uVar7);
        *(undefined1 *)((long)puVar12 + 0x17) = uVar9;
      }
      lVar17 = lVar17 + 1;
      puVar12 = puVar12 + 3;
    } while (lVar17 != 0x100);
    lVar17 = 0;
    puVar12 = (undefined8 *)0x1137365b0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      FUN_1092a988c(&ppuStack_1d8);
      plVar11 = &uStack_1c8;
      FUN_1092b4db8(plVar11,&UNK_10f580d6d,2);
      lVar14 = *plVar11;
      lVar16 = *(long *)(lVar14 + -0x18);
      *(uint *)((long)plVar11 + lVar16 + 8) = *(uint *)((long)plVar11 + lVar16 + 8) & 0xffffffb5 | 8
      ;
      *(undefined8 *)((long)plVar11 + *(long *)(lVar14 + -0x18) + 0x18) = 4;
      uStack_b8 = 0x30;
      FUN_1092bf390();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_10926dc5c(&uStack_b8,&ppuStack_1c0,&uStack_b9);
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        __ZdlPv(*puVar12);
      }
      puVar12[1] = CONCAT17(uStack_a9,uStack_b0);
      *puVar12 = CONCAT17(uStack_b1,CONCAT61(uStack_b7,uStack_b8));
      puVar12[2] = uStack_a8;
      ppuStack_1d8 = &PTR_SUB_1108a5a38;
      uStack_1c8._0_7_ = 0x1108a5a60;
      uStack_1c8._7_1_ = '\0';
      ppuStack_1c0 = &PTR_DAT_11088d7b0;
      appuStack_158[0] = &PTR_DAT_1108a5a88;
      if (cStack_169 < '\0') {
        __ZdlPv(uStack_180);
      }
      ppuStack_1c0 = ppuVar1;
      __ZNSt3__16localeD1Ev(auStack_1b8);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1d8,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_158);
      lVar17 = lVar17 + 1;
      puVar12 = puVar12 + 3;
    } while (lVar17 != 0x20);
    if (cRam00000001137368f7 < '\0') {
      uRam00000001137368e8 = 2;
      puVar15 = puRam00000001137368e0;
    }
    else {
      cRam00000001137368f7 = '\x02';
      puVar15 = (undefined2 *)0x1137368e0;
    }
    *puVar15 = 0x225c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam0000000113736e67 < '\0') {
      uRam0000000113736e58 = 2;
      puVar15 = puRam0000000113736e50;
    }
    else {
      cRam0000000113736e67 = '\x02';
      puVar15 = (undefined2 *)0x113736e50;
    }
    *puVar15 = 0x5c5c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam0000000113736a2f < '\0') {
      uRam0000000113736a20 = 2;
      puVar15 = puRam0000000113736a18;
    }
    else {
      cRam0000000113736a2f = '\x02';
      puVar15 = (undefined2 *)0x113736a18;
    }
    *puVar15 = 0x2f5c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam0000000113736687 < '\0') {
      uRam0000000113736678 = 2;
      puVar15 = puRam0000000113736670;
    }
    else {
      cRam0000000113736687 = '\x02';
      puVar15 = (undefined2 *)0x113736670;
    }
    *puVar15 = 0x625c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam00000001137366e7 < '\0') {
      uRam00000001137366d8 = 2;
      puVar15 = puRam00000001137366d0;
    }
    else {
      cRam00000001137366e7 = '\x02';
      puVar15 = (undefined2 *)0x1137366d0;
    }
    *puVar15 = 0x665c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam00000001137366b7 < '\0') {
      uRam00000001137366a8 = 2;
      puVar15 = puRam00000001137366a0;
    }
    else {
      cRam00000001137366b7 = '\x02';
      puVar15 = (undefined2 *)0x1137366a0;
    }
    *puVar15 = 0x6e5c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam00000001137366ff < '\0') {
      uRam00000001137366f0 = 2;
      puVar15 = puRam00000001137366e8;
    }
    else {
      cRam00000001137366ff = '\x02';
      puVar15 = (undefined2 *)0x1137366e8;
    }
    *puVar15 = 0x725c;
    *(undefined1 *)(puVar15 + 1) = 0;
    if (cRam000000011373669f < '\0') {
      uRam0000000113736690 = 2;
      puVar15 = puRam0000000113736688;
    }
    else {
      cRam000000011373669f = '\x02';
      puVar15 = (undefined2 *)0x113736688;
    }
    *puVar15 = 0x745c;
    *(undefined1 *)(puVar15 + 1) = 0;
    lRam0000000113737db8 = 0x1137365b0;
  }
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  uVar2 = *(ulong *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    uVar2 = (ulong)param_2[0x17];
  }
  puVar12 = puVar13;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(puVar13,uVar2 * 2 + 2);
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar5 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar2 = (ulong)param_2[0x17];
    pbVar5 = param_2;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar17 = (ulong)*pbVar5 * 0x18;
    uVar3 = *(ulong *)(lVar17 + 0x1137365b8);
    puVar4 = *(undefined8 **)(lVar17 + 0x1137365b0);
    if (-1 < (char)*(byte *)(lVar17 + 0x1137365c7)) {
      uVar3 = (ulong)*(byte *)(lVar17 + 0x1137365c7);
      puVar4 = (undefined8 *)(lVar17 + 0x1137365b0);
    }
    puVar12 = puVar13;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar13,puVar4,uVar3);
    pbVar5 = pbVar5 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)puVar13 + 0x17) < '\0') {
    __ZdlPv(*puVar13);
  }
  __Unwind_Resume();
  FUN_109839960();
  *(undefined4 *)puVar12 = 1;
  puVar13 = (undefined8 *)0x18;
  __Znwm();
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  puVar12[1] = puVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return;
}



/* Entry: 10983ae64; end: 10983ae97;  */

void FUN_10983ae64(undefined8 *param_1,byte *param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined2 *puVar14;
  long lVar15;
  long lVar16;
  undefined **ppuStack_1c8;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [56];
  undefined8 uStack_170;
  char cStack_159;
  undefined **appuStack_148 [19];
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined6 uStack_a7;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined8 uStack_98;
  long lStack_90;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113737db0 & 1) == 0) {
    iVar9 = 0x13737db0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      ___cxa_atexit(0x10983b838,0,0x100000000);
      ___cxa_guard_release(0x113737db0);
    }
  }
  if (lRam0000000113737db8 == 0) {
    lVar16 = 0;
    puVar11 = (undefined8 *)0x1137365b0;
    do {
      ppuStack_1c8 = (undefined **)0x0;
      uStack_1c0 = 0;
      uStack_1b9 = 0;
      uStack_1b8._0_7_ = 0;
      uStack_1b8._7_1_ = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&ppuStack_1c8,(int)(char)lVar16);
      uVar8 = uStack_1b8._7_1_;
      uVar7 = (undefined7)uStack_1b8;
      uVar6 = uStack_1b9;
      uVar5 = uStack_1c0;
      ppuVar1 = ppuStack_1c8;
      uStack_a8 = (undefined1)uStack_1c0;
      uStack_a7 = (undefined6)((uint7)uStack_1c0 >> 8);
      uStack_a1 = uStack_1b9;
      uStack_a0 = (undefined7)uStack_1b8;
      ppuStack_1c8 = (undefined **)0x0;
      uStack_1c0 = 0;
      uStack_1b9 = 0;
      uStack_1b8._0_7_ = 0;
      uStack_1b8._7_1_ = '\0';
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
        *puVar11 = ppuVar1;
        puVar11[1] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
        *(ulong *)((long)puVar11 + 0xf) = CONCAT71(uStack_a0,uStack_a1);
        *(undefined1 *)((long)puVar11 + 0x17) = uVar8;
        if (uStack_1b8._7_1_ < '\0') {
          __ZdlPv(ppuStack_1c8);
        }
      }
      else {
        *puVar11 = ppuVar1;
        puVar11[1] = CONCAT17(uVar6,uVar5);
        *(ulong *)((long)puVar11 + 0xf) = CONCAT71(uVar7,uVar6);
        *(undefined1 *)((long)puVar11 + 0x17) = uVar8;
      }
      lVar16 = lVar16 + 1;
      puVar11 = puVar11 + 3;
    } while (lVar16 != 0x100);
    lVar16 = 0;
    puVar11 = (undefined8 *)0x1137365b0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      FUN_1092a988c(&ppuStack_1c8);
      plVar10 = &uStack_1b8;
      FUN_1092b4db8(plVar10,&UNK_10f580d6d,2);
      lVar13 = *plVar10;
      lVar15 = *(long *)(lVar13 + -0x18);
      *(uint *)((long)plVar10 + lVar15 + 8) = *(uint *)((long)plVar10 + lVar15 + 8) & 0xffffffb5 | 8
      ;
      *(undefined8 *)((long)plVar10 + *(long *)(lVar13 + -0x18) + 0x18) = 4;
      uStack_a8 = 0x30;
      FUN_1092bf390();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_10926dc5c(&uStack_a8,&ppuStack_1b0,&uStack_a9);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[1] = CONCAT17(uStack_99,uStack_a0);
      *puVar11 = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
      puVar11[2] = uStack_98;
      ppuStack_1c8 = &PTR_SUB_1108a5a38;
      uStack_1b8._0_7_ = 0x1108a5a60;
      uStack_1b8._7_1_ = '\0';
      ppuStack_1b0 = &PTR_DAT_11088d7b0;
      appuStack_148[0] = &PTR_DAT_1108a5a88;
      if (cStack_159 < '\0') {
        __ZdlPv(uStack_170);
      }
      ppuStack_1b0 = ppuVar1;
      __ZNSt3__16localeD1Ev(auStack_1a8);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1c8,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_148);
      lVar16 = lVar16 + 1;
      puVar11 = puVar11 + 3;
    } while (lVar16 != 0x20);
    if (cRam00000001137368f7 < '\0') {
      uRam00000001137368e8 = 2;
      puVar14 = puRam00000001137368e0;
    }
    else {
      cRam00000001137368f7 = '\x02';
      puVar14 = (undefined2 *)0x1137368e0;
    }
    *puVar14 = 0x225c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam0000000113736e67 < '\0') {
      uRam0000000113736e58 = 2;
      puVar14 = puRam0000000113736e50;
    }
    else {
      cRam0000000113736e67 = '\x02';
      puVar14 = (undefined2 *)0x113736e50;
    }
    *puVar14 = 0x5c5c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam0000000113736a2f < '\0') {
      uRam0000000113736a20 = 2;
      puVar14 = puRam0000000113736a18;
    }
    else {
      cRam0000000113736a2f = '\x02';
      puVar14 = (undefined2 *)0x113736a18;
    }
    *puVar14 = 0x2f5c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam0000000113736687 < '\0') {
      uRam0000000113736678 = 2;
      puVar14 = puRam0000000113736670;
    }
    else {
      cRam0000000113736687 = '\x02';
      puVar14 = (undefined2 *)0x113736670;
    }
    *puVar14 = 0x625c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam00000001137366e7 < '\0') {
      uRam00000001137366d8 = 2;
      puVar14 = puRam00000001137366d0;
    }
    else {
      cRam00000001137366e7 = '\x02';
      puVar14 = (undefined2 *)0x1137366d0;
    }
    *puVar14 = 0x665c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam00000001137366b7 < '\0') {
      uRam00000001137366a8 = 2;
      puVar14 = puRam00000001137366a0;
    }
    else {
      cRam00000001137366b7 = '\x02';
      puVar14 = (undefined2 *)0x1137366a0;
    }
    *puVar14 = 0x6e5c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam00000001137366ff < '\0') {
      uRam00000001137366f0 = 2;
      puVar14 = puRam00000001137366e8;
    }
    else {
      cRam00000001137366ff = '\x02';
      puVar14 = (undefined2 *)0x1137366e8;
    }
    *puVar14 = 0x725c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam000000011373669f < '\0') {
      uRam0000000113736690 = 2;
      puVar14 = puRam0000000113736688;
    }
    else {
      cRam000000011373669f = '\x02';
      puVar14 = (undefined2 *)0x113736688;
    }
    *puVar14 = 0x745c;
    *(undefined1 *)(puVar14 + 1) = 0;
    lRam0000000113737db8 = 0x1137365b0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *(ulong *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    uVar2 = (ulong)param_2[0x17];
  }
  puVar11 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar2 * 2 + 2);
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar2 = (ulong)param_2[0x17];
    pbVar4 = param_2;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar16 = (ulong)*pbVar4 * 0x18;
    uVar3 = *(ulong *)(lVar16 + 0x1137365b8);
    puVar12 = *(undefined8 **)(lVar16 + 0x1137365b0);
    if (-1 < (char)*(byte *)(lVar16 + 0x1137365c7)) {
      uVar3 = (ulong)*(byte *)(lVar16 + 0x1137365c7);
      puVar12 = (undefined8 *)(lVar16 + 0x1137365b0);
    }
    puVar11 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar12,uVar3);
    pbVar4 = pbVar4 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  FUN_109839960();
  *(undefined4 *)puVar11 = 1;
  puVar12 = (undefined8 *)0x18;
  __Znwm();
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar11[1] = puVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return;
}



/* Entry: 10983ae98; end: 10983b407;  */

void FUN_10983ae98(undefined8 *param_1,byte *param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined7 uVar5;
  undefined1 uVar6;
  undefined7 uVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined2 *puVar14;
  long lVar15;
  long lVar16;
  undefined **ppuStack_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  char cStack_139;
  undefined **appuStack_128 [19];
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined6 uStack_87;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113737db0 & 1) == 0) {
    iVar9 = 0x13737db0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      ___cxa_atexit(0x10983b838,0,0x100000000);
      ___cxa_guard_release(0x113737db0);
    }
  }
  if (lRam0000000113737db8 == 0) {
    lVar16 = 0;
    puVar11 = (undefined8 *)0x1137365b0;
    do {
      ppuStack_1a8 = (undefined **)0x0;
      uStack_1a0 = 0;
      uStack_199 = 0;
      uStack_198._0_7_ = 0;
      uStack_198._7_1_ = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&ppuStack_1a8,(int)(char)lVar16);
      uVar8 = uStack_198._7_1_;
      uVar7 = (undefined7)uStack_198;
      uVar6 = uStack_199;
      uVar5 = uStack_1a0;
      ppuVar1 = ppuStack_1a8;
      uStack_88 = (undefined1)uStack_1a0;
      uStack_87 = (undefined6)((uint7)uStack_1a0 >> 8);
      uStack_81 = uStack_199;
      uStack_80 = (undefined7)uStack_198;
      ppuStack_1a8 = (undefined **)0x0;
      uStack_1a0 = 0;
      uStack_199 = 0;
      uStack_198._0_7_ = 0;
      uStack_198._7_1_ = '\0';
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
        *puVar11 = ppuVar1;
        puVar11[1] = CONCAT17(uStack_81,CONCAT61(uStack_87,uStack_88));
        *(ulong *)((long)puVar11 + 0xf) = CONCAT71(uStack_80,uStack_81);
        *(undefined1 *)((long)puVar11 + 0x17) = uVar8;
        if (uStack_198._7_1_ < '\0') {
          __ZdlPv(ppuStack_1a8);
        }
      }
      else {
        *puVar11 = ppuVar1;
        puVar11[1] = CONCAT17(uVar6,uVar5);
        *(ulong *)((long)puVar11 + 0xf) = CONCAT71(uVar7,uVar6);
        *(undefined1 *)((long)puVar11 + 0x17) = uVar8;
      }
      lVar16 = lVar16 + 1;
      puVar11 = puVar11 + 3;
    } while (lVar16 != 0x100);
    lVar16 = 0;
    puVar11 = (undefined8 *)0x1137365b0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      FUN_1092a988c(&ppuStack_1a8);
      plVar10 = &uStack_198;
      FUN_1092b4db8(plVar10,&UNK_10f580d6d,2);
      lVar13 = *plVar10;
      lVar15 = *(long *)(lVar13 + -0x18);
      *(uint *)((long)plVar10 + lVar15 + 8) = *(uint *)((long)plVar10 + lVar15 + 8) & 0xffffffb5 | 8
      ;
      *(undefined8 *)((long)plVar10 + *(long *)(lVar13 + -0x18) + 0x18) = 4;
      uStack_88 = 0x30;
      FUN_1092bf390();
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      FUN_10926dc5c(&uStack_88,&ppuStack_190,&uStack_89);
      if (*(char *)((long)puVar11 + 0x17) < '\0') {
        __ZdlPv(*puVar11);
      }
      puVar11[1] = CONCAT17(uStack_79,uStack_80);
      *puVar11 = CONCAT17(uStack_81,CONCAT61(uStack_87,uStack_88));
      puVar11[2] = uStack_78;
      ppuStack_1a8 = &PTR_SUB_1108a5a38;
      uStack_198._0_7_ = 0x1108a5a60;
      uStack_198._7_1_ = '\0';
      ppuStack_190 = &PTR_DAT_11088d7b0;
      appuStack_128[0] = &PTR_DAT_1108a5a88;
      if (cStack_139 < '\0') {
        __ZdlPv(uStack_150);
      }
      ppuStack_190 = ppuVar1;
      __ZNSt3__16localeD1Ev(auStack_188);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1a8,&PTR_PTR_1108a5aa0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_128);
      lVar16 = lVar16 + 1;
      puVar11 = puVar11 + 3;
    } while (lVar16 != 0x20);
    if (cRam00000001137368f7 < '\0') {
      uRam00000001137368e8 = 2;
      puVar14 = puRam00000001137368e0;
    }
    else {
      cRam00000001137368f7 = '\x02';
      puVar14 = (undefined2 *)0x1137368e0;
    }
    *puVar14 = 0x225c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam0000000113736e67 < '\0') {
      uRam0000000113736e58 = 2;
      puVar14 = puRam0000000113736e50;
    }
    else {
      cRam0000000113736e67 = '\x02';
      puVar14 = (undefined2 *)0x113736e50;
    }
    *puVar14 = 0x5c5c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam0000000113736a2f < '\0') {
      uRam0000000113736a20 = 2;
      puVar14 = puRam0000000113736a18;
    }
    else {
      cRam0000000113736a2f = '\x02';
      puVar14 = (undefined2 *)0x113736a18;
    }
    *puVar14 = 0x2f5c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam0000000113736687 < '\0') {
      uRam0000000113736678 = 2;
      puVar14 = puRam0000000113736670;
    }
    else {
      cRam0000000113736687 = '\x02';
      puVar14 = (undefined2 *)0x113736670;
    }
    *puVar14 = 0x625c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam00000001137366e7 < '\0') {
      uRam00000001137366d8 = 2;
      puVar14 = puRam00000001137366d0;
    }
    else {
      cRam00000001137366e7 = '\x02';
      puVar14 = (undefined2 *)0x1137366d0;
    }
    *puVar14 = 0x665c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam00000001137366b7 < '\0') {
      uRam00000001137366a8 = 2;
      puVar14 = puRam00000001137366a0;
    }
    else {
      cRam00000001137366b7 = '\x02';
      puVar14 = (undefined2 *)0x1137366a0;
    }
    *puVar14 = 0x6e5c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam00000001137366ff < '\0') {
      uRam00000001137366f0 = 2;
      puVar14 = puRam00000001137366e8;
    }
    else {
      cRam00000001137366ff = '\x02';
      puVar14 = (undefined2 *)0x1137366e8;
    }
    *puVar14 = 0x725c;
    *(undefined1 *)(puVar14 + 1) = 0;
    if (cRam000000011373669f < '\0') {
      uRam0000000113736690 = 2;
      puVar14 = puRam0000000113736688;
    }
    else {
      cRam000000011373669f = '\x02';
      puVar14 = (undefined2 *)0x113736688;
    }
    *puVar14 = 0x745c;
    *(undefined1 *)(puVar14 + 1) = 0;
    lRam0000000113737db8 = 0x1137365b0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *(ulong *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    uVar2 = (ulong)param_2[0x17];
  }
  puVar11 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1,uVar2 * 2 + 2);
  uVar2 = *(ulong *)(param_2 + 8);
  pbVar4 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar2 = (ulong)param_2[0x17];
    pbVar4 = param_2;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar16 = (ulong)*pbVar4 * 0x18;
    uVar3 = *(ulong *)(lVar16 + 0x1137365b8);
    puVar12 = *(undefined8 **)(lVar16 + 0x1137365b0);
    if (-1 < (char)*(byte *)(lVar16 + 0x1137365c7)) {
      uVar3 = (ulong)*(byte *)(lVar16 + 0x1137365c7);
      puVar12 = (undefined8 *)(lVar16 + 0x1137365b0);
    }
    puVar11 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,puVar12,uVar3);
    pbVar4 = pbVar4 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  FUN_109839960();
  *(undefined4 *)puVar11 = 1;
  puVar12 = (undefined8 *)0x18;
  __Znwm();
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar11[1] = puVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return;
}



/* Entry: 10983b408; end: 10983b44b;  */

void FUN_10983b408(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  FUN_109839960();
  *param_1 = 1;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined8 **)(param_1 + 2) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return;
}



/* Entry: 10983b44c; end: 10983b4bb;  */

void FUN_10983b44c(undefined4 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *apuStack_58 [3];
  
  FUN_109839960();
  *param_1 = 4;
  plVar3 = (long *)0x18;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  *(long **)(param_1 + 2) = plVar3;
  if (plVar3 != param_2) {
    FUN_109839c88();
    if (plVar3 == param_2) {
      FUN_10983aa58(apuStack_58,plVar3);
      FUN_10983aaa0(plVar3,apuStack_58);
      FUN_109839c54(apuStack_58);
    }
    else {
      lVar1 = param_2[1];
      for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 8) {
        puVar2 = (undefined4 *)0x10;
        __Znwm();
        *puVar2 = 6;
        FUN_10983acf8();
        apuStack_58[0] = puVar2;
        FUN_10983ab64(plVar3,apuStack_58);
      }
    }
    return;
  }
  return;
}



/* Entry: 10983b4bc; end: 10983b55b;  */

undefined8 * FUN_10983b4bc(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  FUN_109839960();
  *param_1 = 5;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = puVar1 + 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 **)(param_1 + 2) = puVar1;
  if (*(char *)((long)puVar1 + 0x2f) < '\0') {
    *(undefined1 *)puVar1[3] = 0;
    puVar1[4] = 0;
  }
  else {
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((long)puVar1 + 0x2f) = 0;
  }
  if (puVar1 != param_2) {
    FUN_1098396a8(puVar1);
    FUN_10983a6e0(puVar1,param_2);
  }
  return puVar1;
}



/* Entry: 10983b55c; end: 10983b5d7;  */

long * FUN_10983b55c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10983b5d8; end: 10983b66b;  */

undefined1  [16]
FUN_10983b5d8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10983b66c(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10983b6f0(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10983b794(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10983b66c; end: 10983b6ef;  */

long * FUN_10983b66c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10983b6d8;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10983b6d8:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10983b6f0; end: 10983b793;  */

void FUN_10983b6f0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10983b794; end: 10983b87b;  */

void FUN_10983b794(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10983b87c; end: 10983b89f;  */

undefined * FUN_10983b87c(uint param_1)

{
  if (param_1 < 0xc) {
    return (&PTR_DAT_110b14890)[param_1];
  }
  return &UNK_10f580e7a;
}



/* Entry: 10983b8a0; end: 10983b93f;  */

long ** FUN_10983b8a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long **pplVar2;
  long lVar3;
  long *plStack_28;
  
  plVar1 = (long *)0x20;
  __Znwm();
  *plVar1 = (long)&PTR_FUN_110b14a90;
  lVar3 = *param_1;
  plVar1[2] = param_1[1];
  plVar1[1] = lVar3;
  plVar1[3] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pplVar2 = &plStack_28;
  plStack_28 = plVar1;
  FUN_10983b940(pplVar2,param_2);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  return pplVar2;
}



/* Entry: 10983b940; end: 10983c0f3;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_10983b940(ulong *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined3 uStack_2f3;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  ulong uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  ulong uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  char cStack_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  uint uStack_174;
  uint uStack_170;
  undefined1 uStack_16c;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  char cStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  char cStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char cStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  char cStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  char cStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  
  plVar15 = (long *)*param_1;
  if (plVar15 == (long *)0x0) {
    return (long *)0x8;
  }
  plVar18 = param_2;
  (**(code **)(*plVar15 + 0x18))();
  if (((ulong)plVar18 & 1) == 0) {
    return (long *)0xa;
  }
  uStack_1d0 = uStack_1d0 & 0xffffffffffffff00;
  cStack_1b8 = '\0';
  uStack_1b0 = uStack_1b0 & 0xffffff00;
  uStack_1ac = uStack_1ac & 0xffffff00;
  uStack_1a8 = uStack_1a8 & 0xffffff00;
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  uStack_1a0 = 0;
  uStack_190 = uStack_190 & 0xffffff00;
  uStack_18c = uStack_18c & 0xffffff00;
  uStack_174 = uStack_174 & 0xffffff00;
  uStack_170 = uStack_170 & 0xffffff00;
  uStack_16c = 0;
  uStack_168 = uStack_168 & 0xffffffffffffff00;
  cStack_150 = '\0';
  uStack_148 = uStack_148 & 0xffffffffffffff00;
  cStack_130 = '\0';
  uStack_128 = uStack_128 & 0xffffffffffffff00;
  cStack_110 = '\0';
  uStack_108 = uStack_108 & 0xffffffffffffff00;
  cStack_f0 = '\0';
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  cStack_d0 = '\0';
  uStack_c8 = 0;
  uStack_c4 = 0;
  puStack_b8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_200 = 0;
  uStack_1f8 = uStack_1f8 & 0xffffff00;
  uStack_1ec = 0;
  uStack_1e8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1dc = 0;
  uStack_1e4 = 0;
  uStack_1e0 = 0;
  uStack_a8 = 1;
  lStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  lStack_90 = 0;
  plVar21 = (long *)*param_1;
  plVar18 = plVar15;
  if ((long *)0xffff < plVar15) {
    plVar18 = (long *)0x10000;
  }
  plStack_80 = (long *)0x0;
  uStack_78 = 0;
  plVar20 = plVar21;
  (**(code **)(*plVar21 + 0x10))(plVar21,0,plVar18,&plStack_80);
  iVar14 = (int)plVar20;
  plVar16 = plStack_80;
  while (plStack_80 = plVar16, iVar14 == 0) {
    FUN_10983f72c(plVar16,uStack_78,&uStack_200);
    puVar8 = puStack_b8;
    puVar7 = puStack_c0;
    if ((int)plVar16 != 1) {
      plVar20 = plVar16;
      if ((int)plVar16 == 0) {
        plVar18 = plStack_a0;
        if (puStack_c0 == puStack_b8) goto LAB_10983bc00;
        plVar20 = (long *)0x1;
        puVar17 = puStack_c0;
        goto LAB_10983bbd4;
      }
      break;
    }
    if (plVar15 <= plVar18) {
      plVar20 = (long *)0x1;
      break;
    }
    plVar18 = (long *)((long)plVar18 << 1);
    if (plVar15 <= plVar18) {
      plVar18 = plVar15;
    }
    plStack_80 = (long *)0x0;
    uStack_78 = 0;
    plVar20 = plVar21;
    (**(code **)(*plVar21 + 0x10))(plVar21,0,plVar18,&plStack_80);
    plVar16 = plStack_80;
    iVar14 = (int)plVar20;
  }
  goto LAB_10983ba4c;
  while( true ) {
    bVar13 = CARRY8(puVar17[1],(ulong)plVar18);
    plVar18 = (long *)(puVar17[1] + (long)plVar18);
    if ((bVar13) || (plVar15 < plVar18)) goto LAB_10983ba4c;
    puVar17 = puVar17 + 3;
    if (puVar17 == puStack_b8) break;
LAB_10983bbd4:
    if ((long *)*puVar17 != plVar18) goto LAB_10983bc10;
  }
LAB_10983bc00:
  if ((plVar15 == (long *)0xffffffffffffffff) || (plVar18 == plVar15)) {
    puVar17 = (undefined8 *)0x6280;
    __Znwm();
    uVar12 = uStack_88;
    lVar11 = lStack_90;
    lVar10 = lStack_98;
    uVar9 = uStack_b0;
    cVar6 = cStack_d0;
    cVar5 = cStack_f0;
    cVar4 = cStack_110;
    cVar3 = cStack_130;
    cVar2 = cStack_150;
    cVar1 = cStack_1b8;
    uVar19 = *param_1;
    *param_1 = 0;
    uStack_350 = uStack_350 & 0xffffffffffffff00;
    if (cStack_1b8 == '\x01') {
      uStack_348 = uStack_1c8;
      uStack_350 = uStack_1d0;
      lStack_340 = lStack_1c0;
      uStack_1c8 = 0;
      lStack_1c0 = 0;
      uStack_1d0 = 0;
    }
    uStack_2f3 = (undefined3)(uStack_174 >> 8);
    uStack_2e8 = uStack_2e8 & 0xffffffffffffff00;
    if (cStack_150 == '\x01') {
      uStack_2e0 = uStack_160;
      uStack_2e8 = uStack_168;
      lStack_2d8 = lStack_158;
      uStack_160 = 0;
      lStack_158 = 0;
      uStack_168 = 0;
    }
    uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
    if (cStack_130 == '\x01') {
      uStack_2c0 = uStack_140;
      uStack_2c8 = uStack_148;
      lStack_2b8 = lStack_138;
      uStack_140 = 0;
      lStack_138 = 0;
      uStack_148 = 0;
    }
    uStack_2a8 = uStack_2a8 & 0xffffffffffffff00;
    if (cStack_110 == '\x01') {
      uStack_2a0 = uStack_120;
      uStack_2a8 = uStack_128;
      lStack_298 = lStack_118;
      uStack_120 = 0;
      lStack_118 = 0;
      uStack_128 = 0;
    }
    uStack_288 = uStack_288 & 0xffffffffffffff00;
    if (cStack_f0 == '\x01') {
      uStack_280 = uStack_100;
      uStack_288 = uStack_108;
      lStack_278 = lStack_f8;
      uStack_100 = 0;
      lStack_f8 = 0;
      uStack_108 = 0;
    }
    uStack_268 = uStack_268 & 0xffffffffffffff00;
    if (cStack_d0 == '\x01') {
      uStack_260 = uStack_e0;
      uStack_268 = uStack_e8;
      lStack_258 = lStack_d8;
      uStack_e0 = 0;
      lStack_d8 = 0;
      uStack_e8 = 0;
    }
    puVar17[4] = CONCAT44(uStack_1f4,uStack_1f8);
    puVar17[3] = uStack_200;
    puStack_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    puStack_c0 = (undefined8 *)0x0;
    lStack_90 = 0;
    lStack_98 = 0;
    uStack_88 = 0;
    *puVar17 = &PTR_DAT_110b14918;
    puVar17[1] = &PTR_FUN_110b14980;
    puVar17[2] = uVar19;
    puVar17[6] = CONCAT44(uStack_1e4,uStack_1e8);
    puVar17[5] = CONCAT44(uStack_1ec,uStack_1f0);
    *(undefined8 *)((long)puVar17 + 0x3c) = uStack_1dc;
    *(ulong *)((long)puVar17 + 0x34) = CONCAT44(uStack_1e0,uStack_1e4);
    *(undefined1 *)(puVar17 + 9) = 0;
    *(undefined1 *)(puVar17 + 0xc) = 0;
    if (cStack_1b8 != '\0') {
      puVar17[10] = uStack_348;
      puVar17[9] = uStack_350;
      puVar17[0xb] = lStack_340;
      lStack_340 = 0;
      uStack_350 = 0;
      *(undefined1 *)(puVar17 + 0xc) = 1;
    }
    *(undefined1 *)(puVar17 + 0x16) = 0;
    puVar17[0x10] = uStack_198;
    puVar17[0xf] = CONCAT71(uStack_19f,uStack_1a0);
    puVar17[0x12] = uStack_188;
    puVar17[0x11] = CONCAT44(uStack_18c,uStack_190);
    puVar17[0x14] = CONCAT44(uStack_174,uStack_178);
    puVar17[0x13] = uStack_180;
    *(ulong *)((long)puVar17 + 0xa5) = CONCAT17(uStack_16c,CONCAT43(uStack_170,uStack_2f3));
    puVar17[0xe] = CONCAT44(uStack_1a4,uStack_1a8);
    puVar17[0xd] = CONCAT44(uStack_1ac,uStack_1b0);
    *(undefined1 *)(puVar17 + 0x19) = 0;
    if (cStack_150 != '\0') {
      puVar17[0x17] = uStack_2e0;
      puVar17[0x16] = uStack_2e8;
      puVar17[0x18] = lStack_2d8;
      lStack_2d8 = 0;
      uStack_2e8 = 0;
      *(undefined1 *)(puVar17 + 0x19) = 1;
    }
    *(undefined1 *)(puVar17 + 0x1a) = 0;
    *(undefined1 *)(puVar17 + 0x1d) = 0;
    if (cStack_130 != '\0') {
      puVar17[0x1b] = uStack_2c0;
      puVar17[0x1a] = uStack_2c8;
      puVar17[0x1c] = lStack_2b8;
      lStack_2b8 = 0;
      uStack_2c8 = 0;
      *(undefined1 *)(puVar17 + 0x1d) = 1;
    }
    *(undefined1 *)(puVar17 + 0x1e) = 0;
    *(undefined1 *)(puVar17 + 0x21) = 0;
    if (cStack_110 != '\0') {
      puVar17[0x1f] = uStack_2a0;
      puVar17[0x1e] = uStack_2a8;
      puVar17[0x20] = lStack_298;
      lStack_298 = 0;
      uStack_2a8 = 0;
      *(undefined1 *)(puVar17 + 0x21) = 1;
    }
    *(undefined1 *)(puVar17 + 0x22) = 0;
    *(undefined1 *)(puVar17 + 0x25) = 0;
    if (cStack_f0 != '\0') {
      puVar17[0x23] = uStack_280;
      puVar17[0x22] = uStack_288;
      puVar17[0x24] = lStack_278;
      lStack_278 = 0;
      uStack_288 = 0;
      *(undefined1 *)(puVar17 + 0x25) = 1;
    }
    *(undefined1 *)(puVar17 + 0x26) = 0;
    *(undefined1 *)(puVar17 + 0x29) = 0;
    if (cStack_d0 != '\0') {
      puVar17[0x27] = uStack_260;
      puVar17[0x26] = uStack_268;
      puVar17[0x28] = lStack_258;
      lStack_258 = 0;
      uStack_268 = 0;
      *(undefined1 *)(puVar17 + 0x29) = 1;
    }
    *(undefined4 *)(puVar17 + 0x2a) = uStack_c8;
    *(undefined1 *)((long)puVar17 + 0x154) = uStack_c4;
    puVar17[0x2b] = puVar7;
    puVar17[0x2c] = puVar8;
    puVar17[0x2d] = uVar9;
    puVar17[0x2f] = plStack_a0;
    puVar17[0x2e] = CONCAT44(uStack_a4,uStack_a8);
    puVar17[0x30] = lVar10;
    puVar17[0x31] = lVar11;
    puVar17[0x32] = uVar12;
    FUN_10983c894(puVar17 + 0x33,puVar17 + 3);
    puVar17[0xc48] = 0x32aaaba7;
    puVar17[0xc4f] = 0;
    puVar17[0xc4a] = 0;
    puVar17[0xc49] = 0;
    puVar17[0xc4c] = 0;
    puVar17[0xc4b] = 0;
    puVar17[0xc4e] = 0;
    puVar17[0xc4d] = 0;
    plVar15 = (long *)*param_2;
    *param_2 = (long)puVar17;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    if ((cVar6 != '\0') && (lStack_258 < 0)) {
      __ZdlPv(uStack_268);
    }
    if ((cVar5 != '\0') && (lStack_278 < 0)) {
      __ZdlPv(uStack_288);
    }
    if ((cVar4 != '\0') && (lStack_298 < 0)) {
      __ZdlPv(uStack_2a8);
    }
    if ((cVar3 != '\0') && (lStack_2b8 < 0)) {
      __ZdlPv(uStack_2c8);
    }
    if ((cVar2 != '\0') && (lStack_2d8 < 0)) {
      __ZdlPv(uStack_2e8);
    }
    plVar20 = (long *)0x0;
    if ((cVar1 != '\0') && (lStack_340 < 0)) {
      __ZdlPv(uStack_350);
      plVar20 = (long *)0x0;
    }
  }
  else {
LAB_10983bc10:
    plVar20 = (long *)0x5;
  }
LAB_10983ba4c:
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (puStack_c0 != (undefined8 *)0x0) {
    puStack_b8 = puStack_c0;
    __ZdlPv();
  }
  if ((cStack_d0 == '\x01') && (lStack_d8 < 0)) {
    __ZdlPv(uStack_e8);
  }
  if ((cStack_f0 == '\x01') && (lStack_f8 < 0)) {
    __ZdlPv(uStack_108);
  }
  if ((cStack_110 == '\x01') && (lStack_118 < 0)) {
    __ZdlPv(uStack_128);
  }
  if ((cStack_130 == '\x01') && (lStack_138 < 0)) {
    __ZdlPv(uStack_148);
  }
  if ((cStack_150 == '\x01') && (lStack_158 < 0)) {
    __ZdlPv(uStack_168);
  }
  if ((cStack_1b8 == '\x01') && (lStack_1c0 < 0)) {
    __ZdlPv(uStack_1d0);
  }
  return plVar20;
}



/* Entry: 10983c0f4; end: 10983c223;  */

long FUN_10983c0f4(long param_1)

{
  if (*(long *)(param_1 + 0x168) != 0) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x140);
    __ZdlPv();
  }
  FUN_10983d280(param_1 + 0x30);
  return param_1;
}



/* Entry: 10983c224; end: 10983c29f;  */

void FUN_10983c224(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}



/* Entry: 10983c2a0; end: 10983c427;  */

/* WARNING: Removing unreachable block (ram,0x00010983c484) */
/* WARNING: Removing unreachable block (ram,0x00010983c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010983c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010983c498) */

long FUN_10983c2a0(long param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined **ppuStack_58;
  long lStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  plVar3 = &lStack_c0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  plVar2 = param_3;
  __ZNSt3__15mutex4lockEv(param_1 + 0x6240);
  if ((uint)param_2 < *(uint *)(param_1 + 0x170)) {
    lStack_98 = param_3[5];
    lStack_a0 = param_3[4];
    lStack_88 = param_3[7];
    lStack_90 = param_3[6];
    lStack_78 = param_3[9];
    lStack_80 = param_3[8];
    lStack_68 = param_3[0xb];
    lStack_70 = param_3[10];
    lStack_b8 = param_3[1];
    lStack_c0 = *param_3;
    lStack_a8 = param_3[3];
    lStack_b0 = param_3[2];
    ppuStack_58 = &PTR_FUN_110b14a00;
    lVar5 = param_1 + 0x198;
    lStack_50 = param_1;
    pppuStack_40 = &ppuStack_58;
    FUN_10983e568(lVar5,param_2,&lStack_c0,&ppuStack_58);
    if (pppuStack_40 == &ppuStack_58) {
      lVar4 = 0x20;
    }
    else {
      uVar1 = param_2;
      plVar2 = plVar3;
      if (pppuStack_40 == (undefined ***)0x0) goto LAB_10983c35c;
      lVar4 = 0x28;
    }
    (**(code **)((long)*pppuStack_40 + lVar4))();
    uVar1 = param_2;
    plVar2 = plVar3;
  }
  else {
    lVar5 = 8;
  }
LAB_10983c35c:
  do {
    lVar4 = param_1 + 0x6240;
    __ZNSt3__15mutex6unlockEv();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return lVar5;
    }
    ___stack_chk_fail();
    iVar6 = (int)uVar1;
    if (iVar6 == 0) {
      __Unwind_Resume();
      if ((uint)uVar1 < *(uint *)(lVar4 + 0x170)) {
        FUN_10983cfc0(plVar2,*(undefined4 *)
                              (*(long *)(lVar4 + 0x158) + (uVar1 & 0xffffffff) * 0x18 + 0x10));
        lStack_160 = *plVar2;
        lStack_158 = (plVar2[1] - lStack_160 >> 2) * -0x5555555555555555;
        lStack_150 = plVar2[3];
        lStack_148 = plVar2[4] - lStack_150 >> 4;
        lStack_140 = plVar2[6];
        lStack_138 = (plVar2[7] - lStack_140 >> 2) * -0x5555555555555555;
        lStack_130 = plVar2[9];
        lStack_128 = plVar2[10] - lStack_130 >> 4;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        FUN_10983c2a0(lVar4,uVar1,&lStack_160);
      }
      else {
        lVar4 = 8;
      }
      return lVar4;
    }
    if (pppuStack_40 == &ppuStack_58) {
      lVar5 = 0x20;
LAB_10983c3c4:
      (**(code **)((long)*pppuStack_40 + lVar5))();
    }
    else if (pppuStack_40 != (undefined ***)0x0) {
      lVar5 = 0x28;
      goto LAB_10983c3c4;
    }
    if (iVar6 == 3) {
      ___cxa_begin_catch(lVar4);
      ___cxa_end_catch();
      lVar5 = 7;
    }
    else {
      ___cxa_begin_catch(lVar4);
      if (iVar6 == 2) {
        ___cxa_end_catch();
      }
      else {
        ___cxa_end_catch();
      }
      lVar5 = 6;
    }
  } while( true );
}



/* Entry: 10983c428; end: 10983c42f;  */

/* WARNING: Removing unreachable block (ram,0x00010983c484) */
/* WARNING: Removing unreachable block (ram,0x00010983c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010983c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010983c498) */

void FUN_10983c428(long param_1,ulong param_2,long *param_3)

{
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x170)) {
    FUN_10983cfc0(param_3,*(undefined4 *)
                           (*(long *)(param_1 + 0x158) + (param_2 & 0xffffffff) * 0x18 + 0x10));
    lStack_a0 = *param_3;
    lStack_98 = (param_3[1] - lStack_a0 >> 2) * -0x5555555555555555;
    lStack_90 = param_3[3];
    lStack_88 = param_3[4] - lStack_90 >> 4;
    lStack_80 = param_3[6];
    lStack_78 = (param_3[7] - lStack_80 >> 2) * -0x5555555555555555;
    lStack_70 = param_3[9];
    lStack_68 = param_3[10] - lStack_70 >> 4;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10983c2a0(param_1,param_2,&lStack_a0);
  }
  return;
}



/* Entry: 10983c430; end: 10983c563;  */

void FUN_10983c430(long param_1,ulong param_2,long *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((uint)param_2 < *(uint *)(param_1 + 0x170)) {
    uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 0x158) + (param_2 & 0xffffffff) * 0x18 + 0x10);
    FUN_10983cfc0(param_3,uVar3);
    if ((param_4 & 1) != 0) {
      lVar1 = param_3[0xf];
      uVar2 = param_3[0x10] - lVar1;
      if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
        if (uVar3 < uVar2) {
          param_3[0x10] = lVar1 + uVar3;
        }
      }
      else {
        func_0x000107c27d58(param_3 + 0xf,uVar3 - uVar2);
      }
    }
    lStack_a0 = *param_3;
    lStack_98 = (param_3[1] - lStack_a0 >> 2) * -0x5555555555555555;
    lStack_90 = param_3[3];
    lStack_88 = param_3[4] - lStack_90 >> 4;
    lStack_80 = param_3[6];
    lStack_78 = (param_3[7] - lStack_80 >> 2) * -0x5555555555555555;
    lStack_70 = param_3[9];
    lStack_68 = param_3[10] - lStack_70 >> 4;
    uStack_60 = 0;
    uStack_58 = 0;
    lStack_50 = param_3[0xf];
    lStack_48 = param_3[0x10] - lStack_50;
    if ((param_4 & 1) == 0) {
      lStack_48 = 0;
      lStack_50 = 0;
    }
    FUN_10983c2a0(param_1,param_2,&lStack_a0);
  }
  return;
}



/* Entry: 10983c564; end: 10983c5a3;  */

void FUN_10983c564(long param_1,undefined8 param_2,undefined8 param_3)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x6240);
  *(undefined8 *)(param_1 + 0x1a0) = param_2;
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x6240);
  return;
}



/* Entry: 10983c5a4; end: 10983c79f;  */

long * FUN_10983c5a4(long param_1,uint param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined1 *puVar11;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x6240);
  if (param_2 < *(uint *)(param_1 + 0x170)) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x158) + (ulong)param_2 * 0x18);
    uVar5 = puVar4[1];
    puStack_60 = (undefined1 *)0x0;
    uStack_58 = 0;
    plVar3 = *(long **)(param_1 + 0x10);
    (**(code **)(*plVar3 + 0x10))(plVar3,*puVar4,uVar5,&puStack_60);
    uVar8 = uStack_58;
    puVar10 = puStack_60;
    if ((int)plVar3 == 0) {
      if (uStack_58 < uVar5) {
        plVar3 = (long *)0x1;
      }
      else {
        uVar5 = param_3[2];
        puVar9 = (undefined1 *)*param_3;
        if (uVar5 - (long)puVar9 < uStack_58) {
          if (puVar9 != (undefined1 *)0x0) {
            param_3[1] = puVar9;
            __ZdlPv(puVar9);
            uVar5 = 0;
            *param_3 = 0;
            param_3[1] = 0;
            param_3[2] = 0;
          }
          if ((long)uVar8 < 0) {
            FUN_1092bf280();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10983c768);
            (*pcVar2)();
          }
          uVar7 = uVar5 * 2;
          if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
            uVar7 = uVar8;
          }
          if (0x3ffffffffffffffe < uVar5) {
            uVar7 = 0x7fffffffffffffff;
          }
          FUN_1092bf244(param_3,uVar7);
          puVar6 = (undefined1 *)param_3[1];
          do {
            puVar9 = puVar6 + 1;
            *puVar6 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar6 = puVar9;
            puVar10 = puVar10 + 1;
          } while (uVar8 != 0);
        }
        else {
          puVar6 = (undefined1 *)param_3[1];
          if ((ulong)((long)puVar6 - (long)puVar9) < uStack_58) {
            puVar1 = puStack_60 + uStack_58;
            puVar11 = puStack_60 + ((long)puVar6 - (long)puVar9);
            if (puVar6 != puVar9) {
              _memmove(puVar9,puStack_60);
              puVar6 = (undefined1 *)param_3[1];
            }
            puVar9 = puVar6;
            if (puVar11 != puVar1) {
              puVar9 = puVar6 + uVar8 + (long)puVar10 + -(long)puVar11;
              do {
                puVar10 = puVar11 + 1;
                *puVar6 = *puVar11;
                puVar6 = puVar6 + 1;
                puVar11 = puVar10;
              } while (puVar10 != puVar1);
            }
          }
          else {
            if (uStack_58 != 0) {
              _memmove(puVar9,puStack_60,uStack_58);
            }
            puVar9 = puVar9 + uVar8;
          }
        }
        plVar3 = (long *)0x0;
        param_3[1] = puVar9;
      }
    }
  }
  else {
    plVar3 = (long *)0x8;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x6240);
  return plVar3;
}



/* Entry: 10983c7a0; end: 10983c88b;  */

void FUN_10983c7a0(long param_1)

{
  long *plVar1;
  
  __ZNSt3__15mutexD1Ev(param_1 + 0x6238);
  func_0x00010983cddc(param_1 + 400);
  if (*(long *)(param_1 + 0x178) != 0) {
    *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x178);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x150);
    __ZdlPv();
  }
  FUN_10983d280(param_1 + 0x40);
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010983c808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 10983c88c; end: 10983c893;  */

long * FUN_10983c88c(long param_1,uint param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puStack_60;
  ulong uStack_58;
  undefined1 *puVar11;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x6238);
  if (param_2 < *(uint *)(param_1 + 0x168)) {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x150) + (ulong)param_2 * 0x18);
    uVar5 = puVar4[1];
    puStack_60 = (undefined1 *)0x0;
    uStack_58 = 0;
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x10))(plVar3,*puVar4,uVar5,&puStack_60);
    uVar8 = uStack_58;
    puVar10 = puStack_60;
    if ((int)plVar3 == 0) {
      if (uStack_58 < uVar5) {
        plVar3 = (long *)0x1;
      }
      else {
        uVar5 = param_3[2];
        puVar9 = (undefined1 *)*param_3;
        if (uVar5 - (long)puVar9 < uStack_58) {
          if (puVar9 != (undefined1 *)0x0) {
            param_3[1] = puVar9;
            __ZdlPv(puVar9);
            uVar5 = 0;
            *param_3 = 0;
            param_3[1] = 0;
            param_3[2] = 0;
          }
          if ((long)uVar8 < 0) {
            FUN_1092bf280();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10983c768);
            (*pcVar2)();
          }
          uVar7 = uVar5 * 2;
          if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
            uVar7 = uVar8;
          }
          if (0x3ffffffffffffffe < uVar5) {
            uVar7 = 0x7fffffffffffffff;
          }
          FUN_1092bf244(param_3,uVar7);
          puVar6 = (undefined1 *)param_3[1];
          do {
            puVar9 = puVar6 + 1;
            *puVar6 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar6 = puVar9;
            puVar10 = puVar10 + 1;
          } while (uVar8 != 0);
        }
        else {
          puVar6 = (undefined1 *)param_3[1];
          if ((ulong)((long)puVar6 - (long)puVar9) < uStack_58) {
            puVar1 = puStack_60 + uStack_58;
            puVar11 = puStack_60 + ((long)puVar6 - (long)puVar9);
            if (puVar6 != puVar9) {
              _memmove(puVar9,puStack_60);
              puVar6 = (undefined1 *)param_3[1];
            }
            puVar9 = puVar6;
            if (puVar11 != puVar1) {
              puVar9 = puVar6 + uVar8 + (long)puVar10 + -(long)puVar11;
              do {
                puVar10 = puVar11 + 1;
                *puVar6 = *puVar11;
                puVar6 = puVar6 + 1;
                puVar11 = puVar10;
              } while (puVar10 != puVar1);
            }
          }
          else {
            if (uStack_58 != 0) {
              _memmove(puVar9,puStack_60,uStack_58);
            }
            puVar9 = puVar9 + uVar8;
          }
        }
        plVar3 = (long *)0x0;
        param_3[1] = puVar9;
      }
    }
  }
  else {
    plVar3 = (long *)0x8;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x6238);
  return plVar3;
}



/* Entry: 10983c894; end: 10983ca2b;  */

long * FUN_10983c894(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  _bzero(param_1 + 4,0x6f4);
  lVar2 = -0x5828;
  do {
    _bzero((long)param_1 + lVar2 + 0x6000,0x604);
    *(undefined8 *)((long)param_1 + lVar2 + 0x66b0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x66a8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x66c0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x66b8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6690) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6688) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x66a0) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6698) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6670) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6668) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6680) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6678) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6650) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6648) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6660) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6658) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6630) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6628) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6640) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6638) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6610) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6608) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6620) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x6618) = 0;
    lVar2 = lVar2 + 0x6c8;
  } while (lVar2 != 0);
  param_1[0xc14] = 0;
  param_1[0xc13] = 0;
  param_1[0xc12] = 0;
  param_1[0xc11] = 0;
  param_1[0xc10] = 0;
  param_1[0xc0f] = 0;
  param_1[0xc0e] = 0;
  param_1[0xc0d] = 0;
  param_1[0xc0c] = 0;
  param_1[0xc0b] = 0;
  param_1[0xc0a] = 0;
  param_1[0xc09] = 0;
  param_1[0xc08] = 0;
  param_1[0xc07] = 0;
  param_1[0xc06] = 0;
  param_1[0xc05] = 0;
  param_1[0xc04] = 0;
  param_1[0xc03] = 0;
  param_1[0xc02] = 0;
  param_1[0xc01] = 0;
  param_1[0xc00] = 0;
  lVar2 = *(long *)(param_2 + 0x140);
  if (*(long *)(param_2 + 0x148) == lVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if (uVar1 <= *(uint *)(lVar2 + 0x10)) {
        uVar1 = *(uint *)(lVar2 + 0x10);
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *(long *)(param_2 + 0x148));
  }
  FUN_10983ca2c(param_1 + 4,uVar1);
  func_0x00010983cad8(param_1 + 7,uVar1);
  FUN_10983ca2c(param_1 + 10,uVar1);
  func_0x00010742a338(param_1 + 0xd,uVar1);
  return param_1;
}



/* Entry: 10983ca2c; end: 10983cb63;  */

long * FUN_10983ca2c(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 2) * -0x5555555555555555) < param_2) {
    if (0x1555555555555555 < param_2) {
      FUN_1094ccafc();
      lVar3 = *param_1;
      if ((ulong)(param_1[2] - lVar3 >> 4) < param_2) {
        if (param_2 >> 0x3c != 0) {
          FUN_10983cbe4();
          if (param_1[0xf] != 0) {
            param_1[0x10] = param_1[0xf];
            __ZdlPv();
          }
          if (param_1[0xc] != 0) {
            param_1[0xd] = param_1[0xc];
            __ZdlPv();
          }
          if (param_1[9] != 0) {
            param_1[10] = param_1[9];
            __ZdlPv();
          }
          if (param_1[6] != 0) {
            param_1[7] = param_1[6];
            __ZdlPv();
          }
          if (param_1[3] != 0) {
            param_1[4] = param_1[3];
            __ZdlPv();
          }
          if (*param_1 != 0) {
            param_1[1] = *param_1;
            __ZdlPv();
          }
          return param_1;
        }
        lVar4 = param_1[1];
        plVar2 = param_1;
        FUN_10983cbf8();
        lVar3 = (long)plVar2 + (lVar4 - lVar3);
        lVar4 = lVar3 - (param_1[1] - *param_1);
        _memcpy(lVar4);
        plVar1 = (long *)*param_1;
        *param_1 = lVar4;
        param_1[1] = lVar3;
        param_1[2] = (long)(plVar2 + param_2 * 2);
        param_1 = (long *)0x0;
        if (plVar1 != (long *)0x0) goto code_r0x00010bdbd7ac;
      }
      return param_1;
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    FUN_1094ccb10();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar4 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    plVar1 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    param_1[2] = (long)plVar2 + param_2 * 0xc;
    param_1 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar1;
    }
  }
  return param_1;
}



/* Entry: 10983cb64; end: 10983cbe3;  */

long * FUN_10983cb64(long *param_1)

{
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10983cbe4; end: 10983cbf7;  */

undefined1  [16] FUN_10983cbe4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104c4f740();
  if (*(long *)(puVar2 + 0x5f80) != 0) {
    *(long *)(puVar2 + 0x5f88) = *(long *)(puVar2 + 0x5f80);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f68) != 0) {
    *(long *)(puVar2 + 0x5f70) = *(long *)(puVar2 + 0x5f68);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f50) != 0) {
    *(long *)(puVar2 + 0x5f58) = *(long *)(puVar2 + 0x5f50);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f38) != 0) {
    *(long *)(puVar2 + 0x5f40) = *(long *)(puVar2 + 0x5f38);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f20) != 0) {
    *(long *)(puVar2 + 0x5f28) = *(long *)(puVar2 + 0x5f20);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f08) != 0) {
    *(long *)(puVar2 + 0x5f10) = *(long *)(puVar2 + 0x5f08);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5ef0) != 0) {
    *(long *)(puVar2 + 0x5ef8) = *(long *)(puVar2 + 0x5ef0);
    __ZdlPv();
  }
  puVar3 = puVar2 + 0x5828;
  lVar1 = -0x5828;
  do {
    if (*(long *)(puVar3 + 0x6b0) != 0) {
      *(long *)(puVar3 + 0x6b8) = *(long *)(puVar3 + 0x6b0);
      __ZdlPv();
    }
    FUN_10983cd4c(puVar3);
    puVar3 = puVar3 + -0x6c8;
    lVar1 = lVar1 + 0x6c8;
  } while (lVar1 != 0);
  if (*(long *)(puVar2 + 0x6b0) != 0) {
    *(long *)(puVar2 + 0x6b8) = *(long *)(puVar2 + 0x6b0);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x698) != 0) {
    *(long *)(puVar2 + 0x6a0) = *(long *)(puVar2 + 0x698);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x680) != 0) {
    *(long *)(puVar2 + 0x688) = *(long *)(puVar2 + 0x680);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x668) != 0) {
    *(long *)(puVar2 + 0x670) = *(long *)(puVar2 + 0x668);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x650) != 0) {
    *(long *)(puVar2 + 0x658) = *(long *)(puVar2 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x638) != 0) {
    *(long *)(puVar2 + 0x640) = *(long *)(puVar2 + 0x638);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x620) != 0) {
    *(long *)(puVar2 + 0x628) = *(long *)(puVar2 + 0x620);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x608) != 0) {
    *(long *)(puVar2 + 0x610) = *(long *)(puVar2 + 0x608);
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10983cbf8; end: 10983cc2b;  */

undefined1  [16] FUN_10983cbf8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104c4f740();
  if (*(long *)(puVar2 + 0x5f80) != 0) {
    *(long *)(puVar2 + 0x5f88) = *(long *)(puVar2 + 0x5f80);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f68) != 0) {
    *(long *)(puVar2 + 0x5f70) = *(long *)(puVar2 + 0x5f68);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f50) != 0) {
    *(long *)(puVar2 + 0x5f58) = *(long *)(puVar2 + 0x5f50);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f38) != 0) {
    *(long *)(puVar2 + 0x5f40) = *(long *)(puVar2 + 0x5f38);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f20) != 0) {
    *(long *)(puVar2 + 0x5f28) = *(long *)(puVar2 + 0x5f20);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5f08) != 0) {
    *(long *)(puVar2 + 0x5f10) = *(long *)(puVar2 + 0x5f08);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x5ef0) != 0) {
    *(long *)(puVar2 + 0x5ef8) = *(long *)(puVar2 + 0x5ef0);
    __ZdlPv();
  }
  puVar3 = puVar2 + 0x5828;
  lVar1 = -0x5828;
  do {
    if (*(long *)(puVar3 + 0x6b0) != 0) {
      *(long *)(puVar3 + 0x6b8) = *(long *)(puVar3 + 0x6b0);
      __ZdlPv();
    }
    FUN_10983cd4c(puVar3);
    puVar3 = puVar3 + -0x6c8;
    lVar1 = lVar1 + 0x6c8;
  } while (lVar1 != 0);
  if (*(long *)(puVar2 + 0x6b0) != 0) {
    *(long *)(puVar2 + 0x6b8) = *(long *)(puVar2 + 0x6b0);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x698) != 0) {
    *(long *)(puVar2 + 0x6a0) = *(long *)(puVar2 + 0x698);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x680) != 0) {
    *(long *)(puVar2 + 0x688) = *(long *)(puVar2 + 0x680);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x668) != 0) {
    *(long *)(puVar2 + 0x670) = *(long *)(puVar2 + 0x668);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x650) != 0) {
    *(long *)(puVar2 + 0x658) = *(long *)(puVar2 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x638) != 0) {
    *(long *)(puVar2 + 0x640) = *(long *)(puVar2 + 0x638);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x620) != 0) {
    *(long *)(puVar2 + 0x628) = *(long *)(puVar2 + 0x620);
    __ZdlPv();
  }
  if (*(long *)(puVar2 + 0x608) != 0) {
    *(long *)(puVar2 + 0x610) = *(long *)(puVar2 + 0x608);
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10983cc2c; end: 10983cc3f;  */

undefined1  [16] FUN_10983cc2c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  if (*(long *)(puVar1 + 0x5f80) != 0) {
    *(long *)(puVar1 + 0x5f88) = *(long *)(puVar1 + 0x5f80);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x5f68) != 0) {
    *(long *)(puVar1 + 0x5f70) = *(long *)(puVar1 + 0x5f68);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x5f50) != 0) {
    *(long *)(puVar1 + 0x5f58) = *(long *)(puVar1 + 0x5f50);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x5f38) != 0) {
    *(long *)(puVar1 + 0x5f40) = *(long *)(puVar1 + 0x5f38);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x5f20) != 0) {
    *(long *)(puVar1 + 0x5f28) = *(long *)(puVar1 + 0x5f20);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x5f08) != 0) {
    *(long *)(puVar1 + 0x5f10) = *(long *)(puVar1 + 0x5f08);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x5ef0) != 0) {
    *(long *)(puVar1 + 0x5ef8) = *(long *)(puVar1 + 0x5ef0);
    __ZdlPv();
  }
  puVar3 = puVar1 + 0x5828;
  lVar2 = -0x5828;
  do {
    if (*(long *)(puVar3 + 0x6b0) != 0) {
      *(long *)(puVar3 + 0x6b8) = *(long *)(puVar3 + 0x6b0);
      __ZdlPv();
    }
    FUN_10983cd4c(puVar3);
    puVar3 = puVar3 + -0x6c8;
    lVar2 = lVar2 + 0x6c8;
  } while (lVar2 != 0);
  if (*(long *)(puVar1 + 0x6b0) != 0) {
    *(long *)(puVar1 + 0x6b8) = *(long *)(puVar1 + 0x6b0);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x698) != 0) {
    *(long *)(puVar1 + 0x6a0) = *(long *)(puVar1 + 0x698);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x680) != 0) {
    *(long *)(puVar1 + 0x688) = *(long *)(puVar1 + 0x680);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x668) != 0) {
    *(long *)(puVar1 + 0x670) = *(long *)(puVar1 + 0x668);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x650) != 0) {
    *(long *)(puVar1 + 0x658) = *(long *)(puVar1 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x638) != 0) {
    *(long *)(puVar1 + 0x640) = *(long *)(puVar1 + 0x638);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x620) != 0) {
    *(long *)(puVar1 + 0x628) = *(long *)(puVar1 + 0x620);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0x608) != 0) {
    *(long *)(puVar1 + 0x610) = *(long *)(puVar1 + 0x608);
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10983cc40; end: 10983cc73;  */

undefined1  [16] FUN_10983cc40(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  if (*(long *)(param_1 + 0x5f80) != 0) {
    *(long *)(param_1 + 0x5f88) = *(long *)(param_1 + 0x5f80);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f68) != 0) {
    *(long *)(param_1 + 0x5f70) = *(long *)(param_1 + 0x5f68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f50) != 0) {
    *(long *)(param_1 + 0x5f58) = *(long *)(param_1 + 0x5f50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f38) != 0) {
    *(long *)(param_1 + 0x5f40) = *(long *)(param_1 + 0x5f38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f20) != 0) {
    *(long *)(param_1 + 0x5f28) = *(long *)(param_1 + 0x5f20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f08) != 0) {
    *(long *)(param_1 + 0x5f10) = *(long *)(param_1 + 0x5f08);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5ef0) != 0) {
    *(long *)(param_1 + 0x5ef8) = *(long *)(param_1 + 0x5ef0);
    __ZdlPv();
  }
  lVar2 = param_1 + 0x5828;
  lVar1 = -0x5828;
  do {
    if (*(long *)(lVar2 + 0x6b0) != 0) {
      *(long *)(lVar2 + 0x6b8) = *(long *)(lVar2 + 0x6b0);
      __ZdlPv();
    }
    FUN_10983cd4c(lVar2);
    lVar2 = lVar2 + -0x6c8;
    lVar1 = lVar1 + 0x6c8;
  } while (lVar1 != 0);
  if (*(long *)(param_1 + 0x6b0) != 0) {
    *(long *)(param_1 + 0x6b8) = *(long *)(param_1 + 0x6b0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x698) != 0) {
    *(long *)(param_1 + 0x6a0) = *(long *)(param_1 + 0x698);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x680) != 0) {
    *(long *)(param_1 + 0x688) = *(long *)(param_1 + 0x680);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    *(long *)(param_1 + 0x670) = *(long *)(param_1 + 0x668);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x650) != 0) {
    *(long *)(param_1 + 0x658) = *(long *)(param_1 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x638) != 0) {
    *(long *)(param_1 + 0x640) = *(long *)(param_1 + 0x638);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x620) != 0) {
    *(long *)(param_1 + 0x628) = *(long *)(param_1 + 0x620);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x608) != 0) {
    *(long *)(param_1 + 0x610) = *(long *)(param_1 + 0x608);
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10983cc74; end: 10983cd4b;  */

long FUN_10983cc74(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x5f80) != 0) {
    *(long *)(param_1 + 0x5f88) = *(long *)(param_1 + 0x5f80);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f68) != 0) {
    *(long *)(param_1 + 0x5f70) = *(long *)(param_1 + 0x5f68);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f50) != 0) {
    *(long *)(param_1 + 0x5f58) = *(long *)(param_1 + 0x5f50);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f38) != 0) {
    *(long *)(param_1 + 0x5f40) = *(long *)(param_1 + 0x5f38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f20) != 0) {
    *(long *)(param_1 + 0x5f28) = *(long *)(param_1 + 0x5f20);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5f08) != 0) {
    *(long *)(param_1 + 0x5f10) = *(long *)(param_1 + 0x5f08);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x5ef0) != 0) {
    *(long *)(param_1 + 0x5ef8) = *(long *)(param_1 + 0x5ef0);
    __ZdlPv();
  }
  lVar1 = param_1 + 0x5828;
  lVar2 = -0x5828;
  do {
    if (*(long *)(lVar1 + 0x6b0) != 0) {
      *(long *)(lVar1 + 0x6b8) = *(long *)(lVar1 + 0x6b0);
      __ZdlPv();
    }
    FUN_10983cd4c(lVar1);
    lVar1 = lVar1 + -0x6c8;
    lVar2 = lVar2 + 0x6c8;
  } while (lVar2 != 0);
  if (*(long *)(param_1 + 0x6b0) != 0) {
    *(long *)(param_1 + 0x6b8) = *(long *)(param_1 + 0x6b0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x698) != 0) {
    *(long *)(param_1 + 0x6a0) = *(long *)(param_1 + 0x698);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x680) != 0) {
    *(long *)(param_1 + 0x688) = *(long *)(param_1 + 0x680);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    *(long *)(param_1 + 0x670) = *(long *)(param_1 + 0x668);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x650) != 0) {
    *(long *)(param_1 + 0x658) = *(long *)(param_1 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x638) != 0) {
    *(long *)(param_1 + 0x640) = *(long *)(param_1 + 0x638);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x620) != 0) {
    *(long *)(param_1 + 0x628) = *(long *)(param_1 + 0x620);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x608) != 0) {
    *(long *)(param_1 + 0x610) = *(long *)(param_1 + 0x608);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10983cd4c; end: 10983cea3;  */

long FUN_10983cd4c(long param_1)

{
  if (*(long *)(param_1 + 0x698) != 0) {
    *(long *)(param_1 + 0x6a0) = *(long *)(param_1 + 0x698);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x680) != 0) {
    *(long *)(param_1 + 0x688) = *(long *)(param_1 + 0x680);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    *(long *)(param_1 + 0x670) = *(long *)(param_1 + 0x668);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x650) != 0) {
    *(long *)(param_1 + 0x658) = *(long *)(param_1 + 0x650);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x638) != 0) {
    *(long *)(param_1 + 0x640) = *(long *)(param_1 + 0x638);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x620) != 0) {
    *(long *)(param_1 + 0x628) = *(long *)(param_1 + 0x620);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x608) != 0) {
    *(long *)(param_1 + 0x610) = *(long *)(param_1 + 0x608);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10983cea4; end: 10983ceab;  */

void FUN_10983cea4(void)

{
  return;
}



/* Entry: 10983ceac; end: 10983cedf;  */

void FUN_10983ceac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b14a00;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10983cee0; end: 10983cefb;  */

void FUN_10983cee0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110b14a00;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10983cefc; end: 10983cfb3;  */

void FUN_10983cefc(long param_1,uint *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar3 = (undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x158) + (ulong)*param_2 * 0x18);
  uVar1 = puVar3[1];
  uStack_30 = 0;
  uStack_28 = 0;
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  (**(code **)(*plVar2 + 0x10))(plVar2,*puVar3,uVar1,&uStack_30);
  if (((int)plVar2 == 0) && (uVar1 <= uStack_28)) {
    param_3[1] = uStack_28;
    *param_3 = uStack_30;
  }
  return;
}



/* Entry: 10983cfb4; end: 10983cfbf;  */

undefined ** FUN_10983cfb4(void)

{
  return &PTR_DAT_110b14a70;
}



/* Entry: 10983cfc0; end: 10983d017;  */

void FUN_10983cfc0(long param_1,undefined8 param_2)

{
  FUN_1096b5198();
  FUN_10983d018(param_1 + 0x18,param_2);
  FUN_1096b5198(param_1 + 0x30,param_2);
  func_0x00010983d048(param_1 + 0x48,param_2);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  return;
}



/* Entry: 10983d018; end: 10983d077;  */

long * FUN_10983d018(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar6 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return param_1;
  }
  param_2 = param_2 - uVar6;
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar4 >> 4) < param_2) {
    lVar10 = (long)puVar4 - *param_1;
    uVar6 = param_2 + (lVar10 >> 4);
    if (uVar6 >> 0x3c != 0) {
      FUN_10983cbe4();
      plVar1 = (long *)param_1[1];
      if ((ulong)(param_1[2] - (long)plVar1 >> 4) < param_2) {
        lVar10 = (long)plVar1 - *param_1;
        uVar6 = param_2 + (lVar10 >> 4);
        if (uVar6 >> 0x3c != 0) {
          FUN_10983cc2c();
          if (((char)param_1[0x20] == '\x01') && (*(char *)((long)param_1 + 0xff) < '\0')) {
            __ZdlPv(param_1[0x1d]);
          }
          if (((char)param_1[0x1c] == '\x01') && (*(char *)((long)param_1 + 0xdf) < '\0')) {
            __ZdlPv(param_1[0x19]);
          }
          if (((char)param_1[0x18] == '\x01') && (*(char *)((long)param_1 + 0xbf) < '\0')) {
            __ZdlPv(param_1[0x15]);
          }
          if (((char)param_1[0x14] == '\x01') && (*(char *)((long)param_1 + 0x9f) < '\0')) {
            __ZdlPv(param_1[0x11]);
          }
          if (((char)param_1[0x10] == '\x01') && (*(char *)((long)param_1 + 0x7f) < '\0')) {
            __ZdlPv(param_1[0xd]);
          }
          if (((char)param_1[3] == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
            __ZdlPv(*param_1);
          }
          return param_1;
        }
        uVar7 = param_1[2] - *param_1;
        uVar8 = (long)uVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar8 = 0xfffffffffffffff;
        }
        if (uVar8 == 0) {
          plVar1 = (long *)0x0;
        }
        else {
          plVar1 = param_1;
          FUN_10983cc40();
        }
        lVar10 = (long)plVar1 + lVar10;
        _bzero(lVar10,param_2 << 4);
        lVar9 = lVar10 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        plVar2 = (long *)*param_1;
        *param_1 = lVar9;
        param_1[1] = lVar10 + param_2 * 0x10;
        param_1[2] = (long)(plVar1 + uVar8 * 2);
        plVar3 = (long *)0x0;
        if (plVar2 != (long *)0x0) goto code_r0x00010bdbd7ac;
      }
      else {
        plVar3 = param_1;
        if (param_2 != 0) {
          plVar3 = plVar1;
          _bzero(plVar1,param_2 << 4);
          plVar1 = plVar1 + param_2 * 2;
        }
        param_1[1] = (long)plVar1;
      }
      return plVar3;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10983cbf8();
    }
    puVar4 = (undefined8 *)((long)plVar1 + lVar10);
    lVar10 = param_2 * 0x10;
    puVar5 = puVar4;
    do {
      puVar5[1] = 0x3f80000000000000;
      *puVar5 = 0;
      lVar10 = lVar10 + -0x10;
      puVar5 = puVar5 + 2;
    } while (lVar10 != 0);
    lVar10 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar2 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)(puVar4 + param_2 * 2);
    param_1[2] = (long)(plVar1 + uVar8 * 2);
    param_1 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar2;
    }
  }
  else {
    puVar5 = puVar4;
    if (param_2 != 0) {
      puVar5 = puVar4 + param_2 * 2;
      lVar10 = param_2 * 0x10;
      do {
        puVar4[1] = 0x3f80000000000000;
        *puVar4 = 0;
        lVar10 = lVar10 + -0x10;
        puVar4 = puVar4 + 2;
      } while (lVar10 != 0);
    }
    param_1[1] = (long)puVar5;
  }
  return param_1;
}



/* Entry: 10983d078; end: 10983d183;  */

long * FUN_10983d078(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = (undefined8 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar5 >> 4) < param_2) {
    lVar10 = (long)puVar5 - *param_1;
    uVar1 = param_2 + (lVar10 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_10983cbe4();
      plVar2 = (long *)param_1[1];
      if ((ulong)(param_1[2] - (long)plVar2 >> 4) < param_2) {
        lVar10 = (long)plVar2 - *param_1;
        uVar1 = param_2 + (lVar10 >> 4);
        if (uVar1 >> 0x3c != 0) {
          FUN_10983cc2c();
          if (((char)param_1[0x20] == '\x01') && (*(char *)((long)param_1 + 0xff) < '\0')) {
            __ZdlPv(param_1[0x1d]);
          }
          if (((char)param_1[0x1c] == '\x01') && (*(char *)((long)param_1 + 0xdf) < '\0')) {
            __ZdlPv(param_1[0x19]);
          }
          if (((char)param_1[0x18] == '\x01') && (*(char *)((long)param_1 + 0xbf) < '\0')) {
            __ZdlPv(param_1[0x15]);
          }
          if (((char)param_1[0x14] == '\x01') && (*(char *)((long)param_1 + 0x9f) < '\0')) {
            __ZdlPv(param_1[0x11]);
          }
          if (((char)param_1[0x10] == '\x01') && (*(char *)((long)param_1 + 0x7f) < '\0')) {
            __ZdlPv(param_1[0xd]);
          }
          if (((char)param_1[3] == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
            __ZdlPv(*param_1);
          }
          return param_1;
        }
        uVar7 = param_1[2] - *param_1;
        uVar8 = (long)uVar7 >> 3;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar8 = 0xfffffffffffffff;
        }
        if (uVar8 == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = param_1;
          FUN_10983cc40();
        }
        lVar10 = (long)plVar2 + lVar10;
        _bzero(lVar10,param_2 << 4);
        lVar9 = lVar10 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        plVar3 = (long *)*param_1;
        *param_1 = lVar9;
        param_1[1] = lVar10 + param_2 * 0x10;
        param_1[2] = (long)(plVar2 + uVar8 * 2);
        plVar4 = (long *)0x0;
        if (plVar3 != (long *)0x0) goto code_r0x00010bdbd7ac;
      }
      else {
        plVar4 = param_1;
        if (param_2 != 0) {
          plVar4 = plVar2;
          _bzero(plVar2,param_2 << 4);
          plVar2 = plVar2 + param_2 * 2;
        }
        param_1[1] = (long)plVar2;
      }
      return plVar4;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 3;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffef < uVar7) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10983cbf8();
    }
    puVar5 = (undefined8 *)((long)plVar2 + lVar10);
    lVar10 = param_2 << 4;
    puVar6 = puVar5;
    do {
      puVar6[1] = 0x3f80000000000000;
      *puVar6 = 0;
      lVar10 = lVar10 + -0x10;
      puVar6 = puVar6 + 2;
    } while (lVar10 != 0);
    lVar10 = (long)puVar5 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar3 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)(puVar5 + param_2 * 2);
    param_1[2] = (long)(plVar2 + uVar8 * 2);
    param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    puVar6 = puVar5;
    if (param_2 != 0) {
      puVar6 = puVar5 + param_2 * 2;
      lVar10 = param_2 << 4;
      do {
        puVar5[1] = 0x3f80000000000000;
        *puVar5 = 0;
        lVar10 = lVar10 + -0x10;
        puVar5 = puVar5 + 2;
      } while (lVar10 != 0);
    }
    param_1[1] = (long)puVar6;
  }
  return param_1;
}



/* Entry: 10983d184; end: 10983d27f;  */

long * FUN_10983d184(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar8 = (long)plVar3 - *param_1;
    uVar1 = param_2 + (lVar8 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_10983cc2c();
      if (((char)param_1[0x20] == '\x01') && (*(char *)((long)param_1 + 0xff) < '\0')) {
        __ZdlPv(param_1[0x1d]);
      }
      if (((char)param_1[0x1c] == '\x01') && (*(char *)((long)param_1 + 0xdf) < '\0')) {
        __ZdlPv(param_1[0x19]);
      }
      if (((char)param_1[0x18] == '\x01') && (*(char *)((long)param_1 + 0xbf) < '\0')) {
        __ZdlPv(param_1[0x15]);
      }
      if (((char)param_1[0x14] == '\x01') && (*(char *)((long)param_1 + 0x9f) < '\0')) {
        __ZdlPv(param_1[0x11]);
      }
      if (((char)param_1[0x10] == '\x01') && (*(char *)((long)param_1 + 0x7f) < '\0')) {
        __ZdlPv(param_1[0xd]);
      }
      if (((char)param_1[3] == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10983cc40();
    }
    lVar8 = (long)plVar3 + lVar8;
    _bzero(lVar8,param_2 << 4);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + param_2 * 0x10;
    param_1[2] = (long)(plVar3 + uVar6 * 2);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 << 4);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 10983d280; end: 10983d347;  */

undefined8 * FUN_10983d280(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0x20) == '\x01') && (*(char *)((long)param_1 + 0xff) < '\0')) {
    __ZdlPv(param_1[0x1d]);
  }
  if ((*(char *)(param_1 + 0x1c) == '\x01') && (*(char *)((long)param_1 + 0xdf) < '\0')) {
    __ZdlPv(param_1[0x19]);
  }
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(char *)((long)param_1 + 0xbf) < '\0')) {
    __ZdlPv(param_1[0x15]);
  }
  if ((*(char *)(param_1 + 0x14) == '\x01') && (*(char *)((long)param_1 + 0x9f) < '\0')) {
    __ZdlPv(param_1[0x11]);
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(char *)((long)param_1 + 0x7f) < '\0')) {
    __ZdlPv(param_1[0xd]);
  }
  if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)((long)param_1 + 0x17) < '\0')) {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10983d348; end: 10983d38f;  */

undefined8 FUN_10983d348(long param_1,ulong param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar1 = uVar2 - param_2;
  if (uVar2 < param_2) {
    return 10;
  }
  uVar2 = uVar1;
  if (param_3 <= uVar1) {
    uVar2 = param_3;
  }
  if (uVar2 != 0xffffffffffffffff) {
    uVar1 = uVar2;
  }
  *param_4 = *(long *)(param_1 + 8) + param_2;
  param_4[1] = uVar1;
  return 0;
}



/* Entry: 10983d390; end: 10983d3ef;  */

long FUN_10983d390(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10983d3f0; end: 10983d617;  */

long FUN_10983d3f0(long *param_1,uint param_2,long *param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (((((*(uint *)(*param_1 + 0x158) <= param_2) ||
        (uVar1 = param_3[1],
        uVar1 != *(uint *)(*(long *)(*param_1 + 0x140) + (ulong)param_2 * 0x18 + 0x10))) ||
       (param_3[3] != uVar1)) || ((param_3[5] != uVar1 || (param_3[7] != uVar1)))) ||
     ((param_3[0xb] != 0 && (param_3[0xb] != uVar1)))) {
    return 8;
  }
  FUN_10983e758(&lStack_80,param_4,param_4 + param_5);
  FUN_109843e88(&lStack_d0,&lStack_80);
  if ((uStack_c8._5_1_ != *(char *)(*param_1 + 8)) ||
     ((((char)uStack_c8 == '\0' ^
       *(byte *)(*(long *)(*param_1 + 0x168) + (ulong)(param_2 >> 3)) >> (ulong)(param_2 & 7)) & 1)
      != 0)) {
    return 6;
  }
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  if ((char)uStack_c8 != '\0') {
    if (param_2 == 0) {
      return 6;
    }
    if ((int)param_1[3] != param_2 - 1) {
      return 8;
    }
    lStack_80 = param_1[4];
    lStack_78 = (param_1[5] - lStack_80 >> 2) * -0x5555555555555555;
    lStack_70 = param_1[7];
    lStack_68 = param_1[8] - lStack_70 >> 4;
    lStack_60 = param_1[10];
    lStack_58 = (param_1[0xb] - lStack_60 >> 2) * -0x5555555555555555;
    lStack_50 = param_1[0xd];
    lStack_48 = param_1[0xe] - lStack_50 >> 4;
  }
  uStack_c8 = param_3[1];
  lStack_d0 = *param_3;
  lStack_b8 = param_3[3];
  lStack_c0 = param_3[2];
  lStack_a8 = param_3[5];
  lStack_b0 = param_3[4];
  lStack_98 = param_3[7];
  lStack_a0 = param_3[6];
  lStack_88 = param_3[0xb];
  lStack_90 = param_3[10];
  FUN_10983d618(param_4,param_5,&lStack_80,&lStack_d0,param_1 + 1,param_1 + 0x22);
  if ((int)param_4 == 0) {
    FUN_10983e848(param_1 + 4,*param_3,*param_3 + param_3[1] * 0xc);
    func_0x00010983e9a0(param_1 + 7,param_3[2],param_3[2] + param_3[3] * 0x10);
    FUN_10983e848(param_1 + 10,param_3[4],param_3[4] + param_3[5] * 0xc);
    func_0x00010983eadc(param_1 + 0xd,param_3[6],param_3[6] + param_3[7] * 0x10);
    *(uint *)(param_1 + 3) = param_2;
    return param_4;
  }
  return param_4;
}



/* Entry: 10983d618; end: 10983d81f;  */

void FUN_10983d618(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint **ppuVar6;
  ulong uVar7;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_bb;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7b;
  undefined1 auStack_70 [24];
  uint *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint uStack_34;
  
  uStack_34 = (uint)*(ulong *)(param_4 + 8);
  uVar7 = *(ulong *)(param_4 + 0x18);
  if ((uVar7 == (*(ulong *)(param_4 + 8) & 0xffffffff)) &&
     (*(ulong *)(param_4 + 0x28) == uVar7 && *(ulong *)(param_4 + 0x38) == uVar7)) {
    puStack_58 = &uStack_34;
    lStack_50 = param_4;
    uStack_48 = param_5;
    uStack_40 = param_6;
    FUN_10983e758(auStack_70,param_1,param_1 + param_2);
    FUN_109843e88(&uStack_f0);
    uStack_a8 = uStack_e8;
    uVar1 = uStack_a8;
    uStack_b0 = uStack_f0;
    uVar7 = uStack_b0;
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_90 = uStack_d0;
    uStack_7b = uStack_bb;
    uVar3 = uStack_7b;
    uStack_b0._0_4_ = (uint)uStack_f0;
    if ((uint)uStack_b0 == uStack_34) {
      uStack_a8._0_1_ = (char)uStack_e8;
      uStack_b0 = uVar7;
      uStack_a8 = uVar1;
      if ((char)uStack_a8 == '\0') {
        uStack_7b._3_4_ = (uint)(uStack_bb >> 0x18);
        uVar4 = uStack_7b._3_4_;
        uStack_a8._5_1_ = (undefined1)((ulong)uStack_e8 >> 0x28);
        uVar2 = uStack_a8._5_1_;
        ppuVar6 = &puStack_58;
        uStack_7b = uVar3;
        FUN_10983d820(ppuVar6,auStack_70,uVar4,uVar2,0);
        if ((((int)ppuVar6 == 0) && (*(long *)(param_4 + 0x48) != 0)) && (uStack_34 != 0)) {
          uVar7 = 0;
          do {
            *(undefined1 *)(*(long *)(param_4 + 0x40) + uVar7) = 0x80;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uStack_34);
        }
      }
      else {
        uStack_f0 = uStack_f0 >> 0x20;
        if (((*(ulong *)(param_3 + 8) == uStack_f0) && (*(ulong *)(param_3 + 0x18) == uStack_f0)) &&
           ((*(ulong *)(param_3 + 0x28) == uStack_f0 && (*(ulong *)(param_3 + 0x38) == uStack_f0))))
        {
          puVar5 = auStack_70;
          FUN_109844328(puVar5,&uStack_b0,param_3,param_4,param_5,param_6,0);
          uVar7 = uStack_7b >> 0x18 & 0xffffffff;
          if (uVar7 + ((ulong)puVar5 & 0xffffffff) == (ulong)uStack_34) {
            ppuVar6 = &puStack_58;
            FUN_10983d820(ppuVar6,auStack_70,uVar7,uStack_a8._5_1_,puVar5);
            if ((int)ppuVar6 == 0) {
              if ((*(long *)(param_4 + 0x48) != 0) && (uStack_7b._3_4_ != 0)) {
                uVar7 = 0;
                do {
                  *(undefined1 *)
                   (*(long *)(param_4 + 0x40) + (ulong)(uint)((int)puVar5 + (int)uVar7)) = 0x80;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uStack_7b._3_4_);
              }
              FUN_10983e518(*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10983d820; end: 10983e517;  */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_10983d820(undefined8 *param_1,int ******param_2,uint param_3,int param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int ******ppppppiVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined4 *puVar20;
  long lVar21;
  undefined4 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_2d0 [8];
  undefined1 *puStack_2c8;
  ulong uStack_2c0;
  undefined5 uStack_2b4;
  byte bStack_2af;
  undefined1 uStack_2ae;
  undefined1 uStack_2ad;
  undefined1 uStack_2ac;
  undefined1 auStack_2a8 [24];
  int *******pppppppiStack_290;
  uint *puStack_288;
  long *plStack_280;
  long lStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined1 *puStack_260;
  undefined5 *puStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int *******pppppppiStack_1d0;
  uint *apuStack_1c8 [2];
  undefined1 auStack_1b8 [8];
  long *plStack_1b0;
  long *aplStack_1a8 [2];
  undefined5 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  uint uStack_d4;
  int ******ppppppiStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  int *******pppppppiStack_b8;
  ushort uStack_b0;
  
  ppppppiVar13 = param_2;
  uStack_d4 = param_3;
  FUN_10983ec18();
  uVar15 = (ulong)ppppppiVar13 & 0xffffffff;
  FUN_10983ec8c();
  uVar23 = (ulong)uStack_d4;
  if (uStack_d4 == 0) {
    if ((int)ppppppiVar13 != 0) {
      return 6;
    }
    return 0;
  }
  if (uVar23 + (param_5 & 0xffffffff) != (ulong)*(uint *)*param_1) {
    return 6;
  }
  plVar9 = (long *)param_1[1];
  param_5 = param_5 & 0xffffffff;
  lVar21 = *plVar9 + param_5 * 0xc;
  lVar17 = plVar9[4] + param_5 * 0xc;
  lVar2 = plVar9[6] + param_5 * 0x10;
  lVar18 = plVar9[2];
  lVar25 = *(long *)param_1[2];
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  aplStack_1a8[0] = (long *)0x0;
  plStack_1b0 = (long *)0x0;
  puStack_198 = (undefined5 *)0x0;
  aplStack_1a8[1] = (long *)0x0;
  apuStack_1c8[0] = (uint *)0x0;
  pppppppiStack_1d0 = (int *******)0x0;
  auStack_1b8 = (undefined1  [8])0x0;
  apuStack_1c8[1] = (uint *)0x0;
  lVar16 = 0;
  lStack_108 = lVar2;
  uStack_100 = uVar23;
  lStack_f8 = lVar17;
  uStack_f0 = uVar23;
  lStack_e8 = lVar21;
  uStack_e0 = uVar23;
  do {
    *(undefined8 *)(auStack_1b8 + lVar16 + 5) = 0;
    lVar1 = lVar16 + 0x40;
    *(undefined8 *)((long)apuStack_1c8 + lVar16) = 0;
    *(undefined8 *)((long)&pppppppiStack_1d0 + lVar16) = 0;
    *(undefined8 *)(auStack_1b8 + lVar16) = 0;
    *(undefined8 *)((long)apuStack_1c8 + lVar16 + 8) = 0;
    *(undefined8 *)((long)aplStack_1a8 + lVar16) = 0;
    *(undefined8 *)((long)aplStack_1a8 + lVar16 + 8) = 0;
    *(undefined4 *)((long)&puStack_198 + lVar16) = 0;
    lVar16 = lVar1;
  } while (lVar1 != 0xc0);
  ppppppiStack_d0 = param_2;
  uStack_c8 = uVar15;
  if (lVar25 == 0) {
    uVar24 = param_1[3];
    lStack_c0 = 0;
    FUN_10983ef68(&pppppppiStack_290,&ppppppiStack_d0,3);
    FUN_10983edd4(&pppppppiStack_290,uVar23,lVar21,uVar23,uVar24);
    FUN_10983ef68(&pppppppiStack_290,&ppppppiStack_d0,3);
    FUN_10983f204(&pppppppiStack_290,uVar23,lVar17,uVar23,uVar24);
    FUN_10983ef68(&pppppppiStack_290,&ppppppiStack_d0,4);
    FUN_10983f37c(&pppppppiStack_290,uVar23,lVar2,uVar23,uVar24);
  }
  else {
    lStack_c0 = 0;
    FUN_10983ef68(&pppppppiStack_290,&ppppppiStack_d0,3);
    FUN_10983ef68(&lStack_250,&ppppppiStack_d0,3);
    FUN_10983ef68(&uStack_210,&ppppppiStack_d0,4);
    uStack_148 = uStack_208;
    uStack_150 = uStack_210;
    uStack_138 = uStack_1f8;
    uStack_140 = uStack_200;
    uStack_128 = uStack_1e8;
    uStack_130 = uStack_1f0;
    uStack_118 = uStack_1d8;
    uStack_120 = uStack_1e0;
    uStack_188 = uStack_248;
    lStack_190 = lStack_250;
    uStack_178 = uStack_238;
    uStack_180 = uStack_240;
    uStack_168 = uStack_228;
    uStack_170 = uStack_230;
    uStack_158 = uStack_218;
    uStack_160 = uStack_220;
    apuStack_1c8[0] = puStack_288;
    pppppppiStack_1d0 = pppppppiStack_290;
    auStack_1b8 = (undefined1  [8])lStack_278;
    apuStack_1c8[1] = (uint *)plStack_280;
    aplStack_1a8[0] = plStack_268;
    plStack_1b0 = plStack_270;
    puStack_198 = puStack_258;
    aplStack_1a8[1] = (long *)puStack_260;
  }
  FUN_10983e758(auStack_2a8,(long)param_2 + lStack_c0,(long)param_2 + uVar15);
  uVar28 = (uint)auStack_2a8;
  FUN_10983ed00();
  if (0xf < (uVar28 - 1 & 0xff)) {
    return 6;
  }
  uStack_2ac = 0;
  _uStack_2b4 = CONCAT17(3,CONCAT16((char)uVar28,CONCAT15((byte)(uVar28 + 7 >> 3) & 0x1f,0x9c)));
  uVar34 = SUB81(auStack_2a8,0);
  FUN_10983ed00();
  puVar14 = auStack_2a8;
  FUN_10983ec18();
  uVar15 = (ulong)puVar14 & 0xffffffff;
  puVar14 = auStack_2a8;
  auStack_2d0[0] = uVar34;
  FUN_10983ec8c();
  puStack_2c8 = puVar14;
  uStack_2c0 = uVar15;
  FUN_10983ed70(auStack_2a8);
  lVar21 = param_1[3];
  if (lVar25 == 0) {
    FUN_109842878(auStack_2d0[0],puStack_2c8,uStack_2c0,uStack_d4 * 3,&uStack_2b4,lVar21,
                  lVar21 + 0x6b0);
    lVar17 = lVar21;
  }
  else {
    lVar17 = lVar21 + 0x1b20;
    pppppppiStack_290 = (int *******)&pppppppiStack_1d0;
    puStack_288 = &uStack_d4;
    plStack_280 = &lStack_e8;
    plStack_270 = &lStack_f8;
    plStack_268 = &lStack_108;
    puStack_260 = auStack_2d0;
    puStack_258 = &uStack_2b4;
    pcVar19 = *(code **)param_1[2];
    lStack_278 = lVar21;
    lStack_250 = lVar17;
    if (pcVar19 == (code *)0x0) {
      FUN_10983edd4(&pppppppiStack_1d0,uStack_d4,lStack_e8,uStack_e0,lVar21 + 0x6c8);
      FUN_10983f204(pppppppiStack_290 + 8,*puStack_288,*plStack_270,plStack_270[1],
                    lStack_278 + 0xd90);
      FUN_10983f37c(pppppppiStack_290 + 0x10,*puStack_288,*plStack_268,plStack_268[1],
                    lStack_278 + 0x1458);
      FUN_109842878(*puStack_260,*(undefined8 *)(puStack_260 + 8),
                    *(undefined8 *)(puStack_260 + 0x10),*puStack_288 * 3,puStack_258,lStack_250,
                    lStack_250 + 0x6b0);
    }
    else {
      pppppppiStack_b8 = (int *******)&pppppppiStack_290;
      uStack_b0 = 0;
      (*pcVar19)(((undefined8 *)param_1[2])[1],4,FUN_10983f5f4,&pppppppiStack_b8);
      if ((uStack_b0 & 0x100) != 0) {
        ___cxa_allocate_exception(8);
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        goto LAB_10983e45c;
      }
      if ((uStack_b0 & 1) != 0) {
        func_0x000107c31940(&ppppppiStack_d0,&UNK_10f580faf);
        FUN_10983e7c0();
        goto LAB_10983e45c;
      }
    }
  }
  uVar12 = uStack_d4;
  lVar18 = lVar18 + param_5 * 0x10;
  fVar30 = (float)(uint)~(-1 << (ulong)(uVar28 & 0x1f));
  puVar22 = *(undefined4 **)(lVar17 + 0x6b0);
  uVar15 = (ulong)uStack_d4;
  if (param_4 < 3) {
    if (param_4 == 0) {
      if (uStack_d4 == 0) {
        return 0;
      }
      uVar23 = 0;
      do {
        lVar21 = 0;
        pppppppiStack_290 = (int *******)0x0;
        ppppppiStack_d0 = (int ******)0x0;
        pppppppiStack_b8 = (int *******)0x0;
        puVar20 = puVar22;
        do {
          fVar26 = (float)NEON_ucvtf(*puVar20);
          puVar20 = puVar20 + uVar15;
          pppppppiVar7 = (int *******)&pppppppiStack_290;
          if ((int)lVar21 == 1) {
            pppppppiVar7 = &ppppppiStack_d0;
          }
          pppppppiVar8 = (int *******)&pppppppiStack_b8;
          if ((int)lVar21 != 2) {
            pppppppiVar8 = pppppppiVar7;
          }
          *(float *)pppppppiVar8 = (fVar26 / fVar30) * 2.0 + -1.0;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        fVar26 = pppppppiStack_b8._0_4_ * pppppppiStack_b8._0_4_;
        fVar38 = pppppppiStack_290._0_4_ * pppppppiStack_290._0_4_ +
                 ppppppiStack_d0._0_4_ * ppppppiStack_d0._0_4_;
        fVar27 = fVar38 + fVar26;
        fVar29 = 1.0 / SQRT(fVar27);
        fVar31 = pppppppiStack_290._0_4_ * fVar29;
        fVar40 = ppppppiStack_d0._0_4_ * fVar29;
        fVar39 = pppppppiStack_b8._0_4_ * fVar29;
        fVar41 = fVar39 * fVar39;
        uVar37 = (undefined1)((uint)fVar26 >> 0x18);
        uVar36 = (undefined1)((uint)fVar26 >> 0x10);
        uVar35 = (undefined1)((uint)fVar26 >> 8);
        uVar34 = SUB41(fVar26,0);
        fVar26 = SQRT(1.0 - fVar27);
        if (1.0 <= fVar27) {
          uVar34 = SUB41(fVar41,0);
          uVar35 = (undefined1)((uint)fVar41 >> 8);
          uVar36 = (undefined1)((uint)fVar41 >> 0x10);
          uVar37 = (undefined1)((uint)fVar41 >> 0x18);
          pppppppiStack_290._0_4_ = fVar31;
          fVar26 = fVar29 * 0.0;
          pppppppiStack_b8._0_4_ = fVar39;
          ppppppiStack_d0._0_4_ = fVar40;
          fVar38 = fVar40 * fVar40 + fVar31 * fVar31;
        }
        fVar38 = fVar38 + (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34))) +
                          fVar26 * fVar26;
        if (fVar38 == 0.0) {
          pppppppiStack_290._0_4_ = 1.0;
          ppppppiStack_d0._0_4_ = 0.0;
          pppppppiStack_b8._0_4_ = 0.0;
          fVar26 = 0.0;
        }
        else {
          fVar38 = 1.0 / SQRT(fVar38);
          pppppppiStack_290._0_4_ = pppppppiStack_290._0_4_ * fVar38;
          ppppppiStack_d0._0_4_ = ppppppiStack_d0._0_4_ * fVar38;
          pppppppiStack_b8._0_4_ = pppppppiStack_b8._0_4_ * fVar38;
          fVar26 = fVar26 * fVar38;
        }
        pfVar3 = (float *)(lVar18 + uVar23 * 0x10);
        *pfVar3 = ppppppiStack_d0._0_4_;
        pfVar3[1] = pppppppiStack_b8._0_4_;
        pfVar3[2] = fVar26;
        pfVar3[3] = pppppppiStack_290._0_4_;
        uVar23 = uVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar23 != uVar15);
      goto LAB_10983e244;
    }
    if (param_4 == 2) {
      if (uStack_d4 == 0) {
        return 0;
      }
      uVar23 = 0;
      do {
        lVar21 = 0;
        pppppppiStack_290 = (int *******)((ulong)pppppppiStack_290 & 0xffffffff00000000);
        ppppppiStack_d0 = (int ******)((ulong)ppppppiStack_d0 & 0xffffffff00000000);
        pppppppiStack_b8 = (int *******)((ulong)pppppppiStack_b8 & 0xffffffff00000000);
        puVar20 = puVar22;
        do {
          fVar26 = (float)NEON_ucvtf(*puVar20);
          puVar20 = puVar20 + uVar15;
          pppppppiVar7 = (int *******)&pppppppiStack_290;
          if ((int)lVar21 == 1) {
            pppppppiVar7 = &ppppppiStack_d0;
          }
          pppppppiVar8 = (int *******)&pppppppiStack_b8;
          if ((int)lVar21 != 2) {
            pppppppiVar8 = pppppppiVar7;
          }
          *(float *)pppppppiVar8 = (fVar26 / fVar30) * 2.0 + -1.0;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        fVar26 = pppppppiStack_290._0_4_;
        fVar38 = ppppppiStack_d0._0_4_;
        fVar27 = pppppppiStack_b8._0_4_;
        fVar29 = pppppppiStack_290._0_4_ * pppppppiStack_290._0_4_ +
                 ppppppiStack_d0._0_4_ * ppppppiStack_d0._0_4_ +
                 pppppppiStack_b8._0_4_ * pppppppiStack_b8._0_4_;
        fVar39 = 1.0;
        fVar40 = 1.0 / SQRT(fVar29 + 1e-06);
        fVar31 = fVar40 * 1.5707964;
        fVar29 = fVar29 * fVar31;
        ___sincosf_stret();
        fVar40 = fVar40 * fVar29;
        fVar26 = fVar26 * fVar40;
        fVar38 = fVar38 * fVar40;
        fVar27 = fVar27 * fVar40;
        fVar29 = fVar31 * fVar31 + fVar26 * fVar26 + fVar38 * fVar38 + fVar27 * fVar27;
        if (fVar29 == 0.0) {
          fVar26 = 0.0;
          fVar38 = 0.0;
          fVar27 = 0.0;
        }
        else {
          fVar29 = 1.0 / SQRT(fVar29);
          fVar39 = fVar31 * fVar29;
          fVar26 = fVar26 * fVar29;
          fVar38 = fVar38 * fVar29;
          fVar27 = fVar27 * fVar29;
        }
        pfVar3 = (float *)(lVar18 + uVar23 * 0x10);
        *pfVar3 = fVar26;
        pfVar3[1] = fVar38;
        pfVar3[2] = fVar27;
        pfVar3[3] = fVar39;
        uVar23 = uVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar23 != uVar15);
      goto LAB_10983e244;
    }
  }
  else {
    if (param_4 == 3) {
      if (uStack_d4 == 0) {
        return 0;
      }
      uVar23 = 0;
      do {
        lVar21 = 0;
        pppppppiStack_290 = (int *******)0x0;
        ppppppiStack_d0 = (int ******)0x0;
        pppppppiStack_b8 = (int *******)0x0;
        puVar20 = puVar22;
        do {
          fVar26 = (float)NEON_ucvtf(*puVar20);
          puVar20 = puVar20 + uVar15;
          pppppppiVar7 = (int *******)&pppppppiStack_290;
          if ((int)lVar21 == 1) {
            pppppppiVar7 = &ppppppiStack_d0;
          }
          pppppppiVar8 = (int *******)&pppppppiStack_b8;
          if ((int)lVar21 != 2) {
            pppppppiVar8 = pppppppiVar7;
          }
          *(float *)pppppppiVar8 = (fVar26 / fVar30) * 2.0 + -1.0;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        fVar26 = 1.0;
        fVar27 = 2.0 / (pppppppiStack_290._0_4_ * pppppppiStack_290._0_4_ +
                        ppppppiStack_d0._0_4_ * ppppppiStack_d0._0_4_ +
                        pppppppiStack_b8._0_4_ * pppppppiStack_b8._0_4_ + 1.0);
        fVar38 = fVar27 + -1.0;
        pppppppiStack_290._0_4_ = pppppppiStack_290._0_4_ * fVar27;
        ppppppiStack_d0._0_4_ = ppppppiStack_d0._0_4_ * fVar27;
        pppppppiStack_b8._0_4_ = pppppppiStack_b8._0_4_ * fVar27;
        fVar27 = fVar38 * fVar38 + pppppppiStack_290._0_4_ * pppppppiStack_290._0_4_ +
                 ppppppiStack_d0._0_4_ * ppppppiStack_d0._0_4_ +
                 pppppppiStack_b8._0_4_ * pppppppiStack_b8._0_4_;
        if (fVar27 == 0.0) {
          pppppppiStack_290._0_4_ = 0.0;
          ppppppiStack_d0._0_4_ = 0.0;
          pppppppiStack_b8._0_4_ = 0.0;
        }
        else {
          fVar27 = 1.0 / SQRT(fVar27);
          fVar26 = fVar38 * fVar27;
          pppppppiStack_290._0_4_ = pppppppiStack_290._0_4_ * fVar27;
          ppppppiStack_d0._0_4_ = ppppppiStack_d0._0_4_ * fVar27;
          pppppppiStack_b8._0_4_ = pppppppiStack_b8._0_4_ * fVar27;
        }
        pfVar3 = (float *)(lVar18 + uVar23 * 0x10);
        *pfVar3 = pppppppiStack_290._0_4_;
        pfVar3[1] = ppppppiStack_d0._0_4_;
        pfVar3[2] = pppppppiStack_b8._0_4_;
        pfVar3[3] = fVar26;
        uVar23 = uVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar23 != uVar15);
LAB_10983e244:
      if (uVar12 != 0) {
        lVar17 = 0;
        lVar21 = 0;
        uVar15 = 0;
        do {
          puVar4 = (ulong *)(lStack_e8 + lVar17);
          puVar5 = (ulong *)(lStack_f8 + lVar17);
          pfVar3 = (float *)(lVar18 + lVar21);
          puVar6 = (ulong *)(lStack_108 + lVar21);
          uVar28 = (uint)puVar4[1];
          fVar30 = 0.0;
          if (0x7f7fffff < (uVar28 & 0x7fffffff)) {
            uVar28 = 0;
          }
          uVar23 = *puVar4;
          fVar26 = ABS((float)(uVar23 >> 0x20));
          iVar10 = -(uint)(INFINITY < ABS((float)uVar23));
          iVar11 = -(uint)(INFINITY < fVar26);
          iVar32 = -(uint)(ABS((float)uVar23) < INFINITY);
          iVar33 = -(uint)(fVar26 < INFINITY);
          *puVar4 = CONCAT17((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar11 >> 0x18),
                             CONCAT16((byte)((uint)iVar33 >> 0x10) | (byte)((uint)iVar11 >> 0x10),
                                      CONCAT15((byte)((uint)iVar33 >> 8) | (byte)((uint)iVar11 >> 8)
                                               ,CONCAT14((byte)iVar33 | (byte)iVar11,
                                                         CONCAT13((byte)((uint)iVar32 >> 0x18) |
                                                                  (byte)((uint)iVar10 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar32 >>
                                                                                 0x10) |
                                                                           (byte)((uint)iVar10 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar32 >> 8) | (byte)((uint)iVar10 >> 8),
                                                  (byte)iVar32 | (byte)iVar10))))))) & uVar23;
          *(uint *)(puVar4 + 1) = uVar28;
          fVar26 = *(float *)(puVar5 + 1);
          if (0x7f7fffff < (uint)ABS(fVar26)) {
            fVar26 = 0.0;
          }
          fVar38 = 1e-09;
          if (1e-09 <= fVar26) {
            fVar38 = fVar26;
          }
          uVar23 = *puVar5;
          fVar26 = ABS((float)(uVar23 >> 0x20));
          iVar10 = -(uint)(INFINITY < ABS((float)uVar23));
          iVar11 = -(uint)(INFINITY < fVar26);
          iVar32 = -(uint)(ABS((float)uVar23) < INFINITY);
          iVar33 = -(uint)(fVar26 < INFINITY);
          uVar23 = CONCAT17((byte)((uint)iVar33 >> 0x18) | (byte)((uint)iVar11 >> 0x18),
                            CONCAT16((byte)((uint)iVar33 >> 0x10) | (byte)((uint)iVar11 >> 0x10),
                                     CONCAT15((byte)((uint)iVar33 >> 8) | (byte)((uint)iVar11 >> 8),
                                              CONCAT14((byte)iVar33 | (byte)iVar11,
                                                       CONCAT13((byte)((uint)iVar32 >> 0x18) |
                                                                (byte)((uint)iVar10 >> 0x18),
                                                                CONCAT12((byte)((uint)iVar32 >> 0x10
                                                                               ) | (byte)((uint)
                                                  iVar10 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar32 >> 8) |
                                                           (byte)((uint)iVar10 >> 8),
                                                           (byte)iVar32 | (byte)iVar10))))))) &
                   uVar23;
          *puVar5 = uVar23 ^ (uVar23 ^ 0x3089705f3089705f) &
                             CONCAT44(-(uint)((float)(uVar23 >> 0x20) < 1e-09),
                                      -(uint)((float)uVar23 < 1e-09));
          *(float *)(puVar5 + 1) = fVar38;
          uVar28 = (uint)puVar6[1];
          fVar26 = *(float *)((long)puVar6 + 0xc);
          if (0x7f7fffff < (uVar28 & 0x7fffffff)) {
            uVar28 = 0;
          }
          if (0x7f7fffff < (uint)ABS(fVar26)) {
            fVar26 = 0.0;
          }
          fVar38 = 0.0;
          if (0.0 <= fVar26) {
            fVar38 = fVar26;
          }
          fVar26 = 1.0;
          if (fVar38 <= 1.0) {
            fVar26 = fVar38;
          }
          uVar23 = *puVar6;
          fVar38 = ABS((float)(uVar23 >> 0x20));
          iVar32 = -(uint)(INFINITY < ABS((float)uVar23));
          iVar33 = -(uint)(INFINITY < fVar38);
          iVar10 = -(uint)(ABS((float)uVar23) < INFINITY);
          iVar11 = -(uint)(fVar38 < INFINITY);
          *puVar6 = CONCAT17((byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar33 >> 0x18),
                             CONCAT16((byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar33 >> 0x10),
                                      CONCAT15((byte)((uint)iVar11 >> 8) | (byte)((uint)iVar33 >> 8)
                                               ,CONCAT14((byte)iVar11 | (byte)iVar33,
                                                         CONCAT13((byte)((uint)iVar10 >> 0x18) |
                                                                  (byte)((uint)iVar32 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar10 >>
                                                                                 0x10) |
                                                                           (byte)((uint)iVar32 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar10 >> 8) | (byte)((uint)iVar32 >> 8),
                                                  (byte)iVar10 | (byte)iVar32))))))) & uVar23;
          *(uint *)(puVar6 + 1) = uVar28;
          *(float *)((long)puVar6 + 0xc) = fVar26;
          fVar29 = *pfVar3;
          fVar26 = pfVar3[1];
          fVar39 = pfVar3[2];
          fVar41 = pfVar3[3];
          fVar38 = fVar29 * fVar29 + fVar41 * fVar41 + fVar26 * fVar26 + fVar39 * fVar39;
          fVar31 = 0.0;
          fVar40 = 0.0;
          fVar27 = 1.0;
          if (1e-12 <= fVar38 && (uint)ABS(fVar38) < 0x7f800000) {
            fVar30 = fVar41 * fVar41 + fVar29 * fVar29 + fVar26 * fVar26 + fVar39 * fVar39;
            if (fVar30 == 0.0) {
              fVar27 = 1.0;
              fVar30 = 0.0;
              fVar31 = 0.0;
            }
            else {
              fVar40 = 1.0 / SQRT(fVar30);
              fVar27 = fVar41 * fVar40;
              fVar30 = fVar29 * fVar40;
              fVar31 = fVar26 * fVar40;
              fVar40 = fVar39 * fVar40;
            }
          }
          *(float *)(lVar18 + lVar21) = fVar30;
          pfVar3[1] = fVar31;
          pfVar3[2] = fVar40;
          pfVar3[3] = fVar27;
          uVar15 = uVar15 + 1;
          lVar21 = lVar21 + 0x10;
          lVar17 = lVar17 + 0xc;
        } while (uVar15 < uStack_d4);
      }
      return 0;
    }
    if (param_4 == 4) {
      if (uStack_d4 == 0) {
        return 0;
      }
      uVar23 = 0;
      do {
        lVar21 = 0;
        pppppppiStack_290 = (int *******)0x0;
        ppppppiStack_d0 = (int ******)0x0;
        pppppppiStack_b8 = (int *******)0x0;
        puVar20 = puVar22;
        do {
          fVar26 = (float)NEON_ucvtf(*puVar20);
          puVar20 = puVar20 + uVar15;
          pppppppiVar7 = (int *******)&pppppppiStack_290;
          if ((int)lVar21 == 1) {
            pppppppiVar7 = &ppppppiStack_d0;
          }
          pppppppiVar8 = (int *******)&pppppppiStack_b8;
          if ((int)lVar21 != 2) {
            pppppppiVar8 = pppppppiVar7;
          }
          *(float *)pppppppiVar8 = (fVar26 / fVar30) * 2.0 + -1.0;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        fVar40 = pppppppiStack_290._0_4_ * pppppppiStack_290._0_4_ +
                 ppppppiStack_d0._0_4_ * ppppppiStack_d0._0_4_ +
                 pppppppiStack_b8._0_4_ * pppppppiStack_b8._0_4_;
        fVar38 = -1.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar29 = 0.0;
        fVar31 = 0.0;
        if (fVar40 < 2.0) {
          fVar31 = SQRT(2.0 - fVar40);
          fVar38 = 1.0 - fVar40;
          fVar27 = pppppppiStack_290._0_4_ * fVar31;
          fVar29 = ppppppiStack_d0._0_4_ * fVar31;
          fVar31 = pppppppiStack_b8._0_4_ * fVar31;
        }
        fVar40 = fVar29 * fVar29 + fVar31 * fVar31 + fVar27 * fVar27 + fVar38 * fVar38;
        if (fVar40 == 0.0) {
          fVar38 = 1.0;
          fVar29 = 0.0;
          fVar31 = 0.0;
        }
        else {
          fVar40 = 1.0 / SQRT(fVar40);
          fVar38 = fVar38 * fVar40;
          fVar26 = fVar27 * fVar40;
          fVar29 = fVar29 * fVar40;
          fVar31 = fVar31 * fVar40;
        }
        pfVar3 = (float *)(lVar18 + uVar23 * 0x10);
        *pfVar3 = fVar26;
        pfVar3[1] = fVar29;
        pfVar3[2] = fVar31;
        pfVar3[3] = fVar38;
        uVar23 = uVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar23 != uVar15);
      goto LAB_10983e244;
    }
    if (param_4 == 5) {
      if (uStack_d4 == 0) {
        return 0;
      }
      uVar23 = 0;
      do {
        lVar21 = 0;
        pppppppiStack_290 = (int *******)0x0;
        ppppppiStack_d0 = (int ******)0x0;
        pppppppiStack_b8 = (int *******)0x0;
        puVar20 = puVar22;
        do {
          fVar26 = (float)NEON_ucvtf(*puVar20);
          puVar20 = puVar20 + uVar15;
          pppppppiVar7 = (int *******)&pppppppiStack_290;
          if ((int)lVar21 == 1) {
            pppppppiVar7 = &ppppppiStack_d0;
          }
          pppppppiVar8 = (int *******)&pppppppiStack_b8;
          if ((int)lVar21 != 2) {
            pppppppiVar8 = pppppppiVar7;
          }
          *(float *)pppppppiVar8 = (fVar26 / fVar30) * 2.0 + -1.0;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        fVar26 = (pppppppiStack_290._0_4_ * pppppppiStack_290._0_4_ +
                  ppppppiStack_d0._0_4_ * ppppppiStack_d0._0_4_ +
                 pppppppiStack_b8._0_4_ * pppppppiStack_b8._0_4_) * 0.17157288;
        fVar27 = 1.0;
        fVar40 = (1.0 - fVar26) * 1.6568543;
        fVar38 = 1.0 / ((fVar26 + 1.0) * (fVar26 + 1.0));
        fVar29 = ((fVar26 + -6.0) * fVar26 + 1.0) * fVar38;
        fVar31 = pppppppiStack_290._0_4_ * fVar40 * fVar38;
        fVar26 = ppppppiStack_d0._0_4_ * fVar40 * fVar38;
        fVar38 = pppppppiStack_b8._0_4_ * fVar40 * fVar38;
        fVar40 = fVar29 * fVar29 + fVar31 * fVar31 + fVar26 * fVar26 + fVar38 * fVar38;
        if (fVar40 == 0.0) {
          fVar31 = 0.0;
          fVar26 = 0.0;
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0;
          uVar37 = 0;
        }
        else {
          fVar40 = 1.0 / SQRT(fVar40);
          fVar27 = fVar29 * fVar40;
          fVar31 = fVar31 * fVar40;
          fVar26 = fVar26 * fVar40;
          fVar38 = fVar38 * fVar40;
          uVar34 = SUB41(fVar38,0);
          uVar35 = (undefined1)((uint)fVar38 >> 8);
          uVar36 = (undefined1)((uint)fVar38 >> 0x10);
          uVar37 = (undefined1)((uint)fVar38 >> 0x18);
        }
        pfVar3 = (float *)(lVar18 + uVar23 * 0x10);
        *pfVar3 = fVar31;
        pfVar3[1] = fVar26;
        pfVar3[2] = (float)CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar35,uVar34)));
        pfVar3[3] = fVar27;
        uVar23 = uVar23 + 1;
        puVar22 = puVar22 + 1;
      } while (uVar23 != uVar15);
      goto LAB_10983e244;
    }
  }
  func_0x000107c31940(&pppppppiStack_290,&UNK_10f580fdb);
  FUN_10983f6dc(&pppppppiStack_290);
LAB_10983e45c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10983e460);
  (*pcVar19)();
}



/* Entry: 10983e518; end: 10983e567;  */

void FUN_10983e518(long param_1,long param_2)

{
  float *pfVar1;
  float fVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0xc;
    pfVar1 = (float *)(param_1 + 8);
    do {
      fVar2 = 1e-09;
      if (1e-09 <= *pfVar1) {
        fVar2 = *pfVar1;
      }
      uVar3 = *(ulong *)(pfVar1 + -2);
      *(ulong *)(pfVar1 + -2) =
           uVar3 ^ (uVar3 ^ 0x3089705f3089705f) &
                   CONCAT44(-(uint)((float)(uVar3 >> 0x20) < 1e-09),-(uint)((float)uVar3 < 1e-09));
      *pfVar1 = fVar2;
      param_2 = param_2 + -0xc;
      pfVar1 = pfVar1 + 3;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 10983e568; end: 10983e757;  */

void FUN_10983e568(long *param_1,long *param_2,long *param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_108 [24];
  long *plStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = (uint)param_2;
  plVar6 = param_2;
  plVar7 = param_3;
  if (((*(byte *)(*(long *)(*param_1 + 0x140) + ((ulong)param_2 & 0xffffffff) * 0x18 + 0x14) & 1) ==
       0) && (iVar2 = (int)param_1[3], iVar2 != uVar10 - 1)) {
    plVar11 = param_2;
    do {
      uVar8 = (uint)plVar11;
      if (uVar8 == 0) break;
      uVar9 = (ulong)plVar11 & 0xffffffff;
      plVar11 = (long *)(ulong)(uVar8 - 1);
    } while ((1 << (ulong)(uVar8 & 7) & (uint)*(byte *)(*(long *)(*param_1 + 0x168) + (uVar9 >> 3)))
             == 0);
    uVar1 = iVar2 + 1;
    if (iVar2 < (int)uVar8 || (int)uVar10 <= iVar2) {
      uVar1 = uVar8;
    }
    plVar11 = (long *)(ulong)uVar1;
    if (uVar1 < uVar10) {
      lVar12 = (ulong)uVar1 * 0x18 + 0x10;
      do {
        uStack_70 = 0;
        uStack_68 = 0;
        lStack_d0 = CONCAT44(lStack_d0._4_4_,(int)plVar11);
        plVar4 = *(long **)(param_4 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_10983e754;
        (**(code **)(*plVar4 + 0x30))(plVar4,&lStack_d0,&uStack_70);
        if ((int)plVar4 != 0) {
          return;
        }
        FUN_10983cfc0(param_1 + 0x10,*(undefined4 *)(*(long *)(*param_1 + 0x140) + lVar12));
        lStack_d0 = param_1[0x10];
        lStack_c8 = (param_1[0x11] - lStack_d0 >> 2) * -0x5555555555555555;
        lStack_c0 = param_1[0x13];
        lStack_b8 = param_1[0x14] - lStack_c0 >> 4;
        lStack_b0 = param_1[0x16];
        lStack_a8 = (param_1[0x17] - lStack_b0 >> 2) * -0x5555555555555555;
        lStack_a0 = param_1[0x19];
        lStack_98 = param_1[0x1a] - lStack_a0 >> 4;
        lStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        lStack_80 = 0;
        plVar4 = param_1;
        plVar6 = plVar11;
        plVar7 = &lStack_d0;
        FUN_10983d3f0();
        if ((int)plVar4 != 0) {
          return;
        }
        plVar11 = (long *)((long)plVar11 + 1);
        lVar12 = lVar12 + 0x18;
      } while ((long *)((ulong)param_2 & 0xffffffff) != plVar11);
    }
  }
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_d0 = CONCAT44(lStack_d0._4_4_,uVar10);
  plVar11 = *(long **)(param_4 + 0x18);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,&lStack_d0,&uStack_70);
    if ((int)plVar11 == 0) {
      lStack_a8 = param_3[5];
      lStack_b0 = param_3[4];
      lStack_98 = param_3[7];
      lStack_a0 = param_3[6];
      lStack_88 = param_3[9];
      lStack_90 = param_3[8];
      lStack_78 = param_3[0xb];
      lStack_80 = param_3[10];
      lStack_c8 = param_3[1];
      lStack_d0 = *param_3;
      lStack_b8 = param_3[3];
      lStack_c0 = param_3[2];
      FUN_10983d3f0(param_1,param_2,&lStack_d0,uStack_70,uStack_68);
    }
    return;
  }
LAB_10983e754:
  puVar5 = (undefined8 *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x000104c501e4();
  pcStack_d8 = FUN_10983e758;
  *puVar5 = plVar6;
  puVar5[1] = plVar6;
  puVar5[2] = plVar7;
  if (plVar7 < plVar6) {
    plStack_f0 = param_1;
    plStack_e8 = param_2;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107c31940(auStack_108,&UNK_10f580e88);
    FUN_10983e7c0(auStack_108);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10983e7a4);
    (*pcVar3)();
  }
  return;
}



/* Entry: 10983e758; end: 10983e7bf;  */

void FUN_10983e758(ulong *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (param_2 <= param_3) {
    return;
  }
  func_0x000107c31940(auStack_38,&UNK_10f580e88);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10983e7a4);
  (*pcVar1)();
}



/* Entry: 10983e7c0; end: 10983e80f;  */

void FUN_10983e7c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_10983e810();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110b148f0,FUN_10983e830);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110b14ae8;
  return;
}


