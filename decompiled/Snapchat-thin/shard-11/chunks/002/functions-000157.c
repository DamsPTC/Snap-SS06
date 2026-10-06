/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082f5938; end: 1082f5e17;  */

void FUN_1082f5938(long param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong extraout_x8;
  code *extraout_x8_00;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int extraout_w11;
  int extraout_w11_00;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  int iVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  int iStack_94;
  long lStack_90;
  long alStack_88 [2];
  int iStack_74;
  long alStack_70 [2];
  
  alStack_70[0] = 0;
  iVar15 = *(int *)(param_1 + 0x90);
  cVar4 = iVar15 < 0;
  uVar5 = iVar15 == 0;
  cVar3 = '\0';
  if (iVar15 < 1) goto LAB_1082f5da0;
  func_0x0001082f9160();
  plVar14 = *(long **)(param_1 + 0x88);
  if (*plVar14 == 0) {
    plVar6 = (long *)plVar14[1];
    (**(code **)(*plVar6 + 0x18))();
    if ((((ulong)plVar6 & 1) == 0) || (plVar14[1] == 0)) goto LAB_1082f59c0;
    if (*(long *)(plVar14[1] + 0x18) != 0) {
      do {
        func_0x0001082f9108();
      } while (extraout_w11 != 0);
    }
    alStack_70[1] = 0;
    func_0x0001082f9064();
  }
  else {
LAB_1082f59c0:
    alStack_88[0] = 0;
    alStack_88[1] = 0;
  }
  func_0x0001082f7d4c(alStack_70,&iStack_74,alStack_88);
  func_0x0001082f8e94();
  if (alStack_70[0] == 0) {
    plVar14 = unaff_x20;
    (**(code **)(*unaff_x20 + 0x18))();
    if (plVar14 == (long *)0x0) {
      FUN_10841076c(&UNK_10f488d96);
      goto LAB_1082f5c98;
    }
    lVar11 = unaff_x19 + 0xb0;
    func_0x000108363bec(lVar11,0x113254e48);
    plVar6 = *(long **)(unaff_x19 + 0x88);
    plVar16 = plVar6 + (long)*(int *)(unaff_x19 + 0x90) * 7;
    while( true ) {
      cVar3 = SBORROW8((long)plVar6,(long)plVar16);
      cVar4 = (long)plVar6 - (long)plVar16 < 0;
      uVar5 = 1;
      if (plVar6 == plVar16) break;
      lVar17 = *(long *)(unaff_x19 + 0x40);
      if (*plVar6 == 0) {
        lVar10 = plVar6[1];
        func_0x0001082f8e68();
        (*extraout_x8_00)();
        if (lVar10 != 0) {
          iVar15 = *(int *)(lVar17 + 0x78) * (int)plVar6[3];
          _memcpy(plVar14,lVar10 + plVar6[5],(long)iVar15);
          plVar14 = (long *)((long)plVar14 + (long)iVar15);
        }
      }
      else {
        uVar1 = *(uint *)(*plVar6 + 0x38);
        for (uVar7 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
          alStack_88[0] = *(long *)(*(long *)(*plVar6 + 8) + uVar7 * 8);
          if ((int)lVar11 != 0) {
            func_0x00010827a0cc(plVar6 + 1,alStack_88,1);
          }
          plVar12 = plVar14 + 1;
          *plVar14 = alStack_88[0];
          if (*(int *)(lVar17 + 0x8c) != 0) {
            *(undefined4 *)(plVar14 + 1) = *(undefined4 *)(*(long *)(*plVar6 + 0x20) + uVar7 * 4);
            plVar12 = (long *)((long)plVar14 + 0xc);
          }
          plVar14 = plVar12;
          if (*(long *)(*plVar6 + 0x18) != 0) {
            plVar14 = plVar12 + 1;
            *plVar12 = *(long *)(*(long *)(*plVar6 + 0x18) + uVar7 * 8);
          }
        }
      }
      plVar6 = plVar6 + 7;
    }
  }
  else {
    uVar7 = *(ulong *)(*(long *)(unaff_x19 + 0x40) + 0x78);
    uVar9 = (ulong)iStack_74;
    iStack_74 = 0;
    if (uVar7 != 0) {
      iStack_74 = (int)(uVar9 / uVar7);
    }
  }
  lStack_90 = 0;
  iStack_94 = 0;
  func_0x0001082f9154();
  if ((bool)uVar5 || cVar4 != cVar3) goto LAB_1082f5da0;
  plVar14 = *(long **)(unaff_x19 + 0x88);
  if ((((*plVar14 == 0) && (plVar6 = (long *)plVar14[2], plVar6 != (long *)0x0)) &&
      ((**(code **)(*plVar6 + 0x18))(), ((ulong)plVar6 & 1) != 0)) && (plVar14[2] != 0)) {
    if (*(long *)(plVar14[2] + 0x18) != 0) {
      do {
        func_0x0001082f9108();
      } while (extraout_w11_00 != 0);
    }
    alStack_70[1] = 0;
    func_0x0001082f9064();
  }
  else {
    alStack_88[0] = 0;
    alStack_88[1] = 0;
  }
  func_0x0001082f7d4c(&lStack_90,&iStack_94,alStack_88);
  func_0x0001082f8e94();
  if (*(int *)(unaff_x19 + 0xe4) == 0) {
    if (lStack_90 != 0) goto LAB_1082f5bf4;
LAB_1082f5c00:
    FUN_1082e91fc();
    lVar17 = alStack_70[0];
    lVar11 = lStack_90;
    *(long **)(unaff_x19 + 0xe8) = unaff_x20;
    if (lStack_90 == 0) {
      alStack_70[0] = 0;
      lStack_b0 = lVar17;
      plVar14 = &lStack_b0;
      FUN_1082f2d2c();
    }
    else {
      lStack_90 = 0;
      lStack_a0 = lVar11;
      alStack_70[0] = 0;
      lStack_a8 = lVar17;
      FUN_1082e6d44();
      FUN_1082647e4(&lStack_a8);
      plVar14 = &lStack_a0;
    }
    FUN_1082647e4(plVar14);
  }
  else {
    if (lStack_90 != 0) {
LAB_1082f5bf4:
      iStack_94 = iStack_94 >> 1;
      goto LAB_1082f5c00;
    }
    plVar14 = unaff_x20;
    (**(code **)(*unaff_x20 + 0x20))();
    if (plVar14 != (long *)0x0) {
      func_0x0001082f9154();
      if (!(bool)uVar5 && cVar4 == cVar3) {
        func_0x0001082f7d08(*(undefined8 *)(unaff_x19 + 0x88));
        func_0x0001082f9154();
        if (!(bool)uVar5 && cVar4 == cVar3) {
          plVar6 = *(long **)(unaff_x19 + 0x88);
          lVar11 = *plVar6;
          if (lVar11 == 0) {
            iVar15 = (int)plVar6[4];
          }
          else {
            iVar15 = *(int *)(lVar11 + 0x3c);
          }
          uVar7 = extraout_x8;
          if (iVar15 != 0) {
            _memmove(plVar14);
            uVar7 = (ulong)*(uint *)(unaff_x19 + 0x90);
            if ((int)*(uint *)(unaff_x19 + 0x90) < 1) goto LAB_1082f5da0;
            plVar6 = *(long **)(unaff_x19 + 0x88);
            lVar11 = *plVar6;
          }
          if (lVar11 == 0) {
            iVar13 = (int)plVar6[3];
            iVar15 = (int)plVar6[4];
          }
          else {
            iVar13 = *(int *)(lVar11 + 0x38);
            iVar15 = *(int *)(lVar11 + 0x3c);
          }
          lVar11 = 1;
LAB_1082f5d24:
          if (lVar11 < (int)uVar7) {
            lVar17 = 0;
            do {
              if ((int)uVar7 <= lVar11) goto LAB_1082f5da0;
              plVar6 = (long *)(*(long *)(unaff_x19 + 0x88) + lVar11 * 0x38);
              lVar10 = *plVar6;
              if (lVar10 == 0) {
                if ((int)plVar6[4] <= lVar17) {
                  iVar8 = (int)plVar6[3];
                  goto LAB_1082f5d90;
                }
              }
              else if (*(int *)(lVar10 + 0x3c) <= lVar17) goto LAB_1082f5d84;
              func_0x0001082f7d08();
              *(short *)((long)plVar14 + lVar17 * 2 + (long)iVar15 * 2) =
                   *(short *)((long)plVar6 + lVar17 * 2) + (short)iVar13;
              lVar17 = lVar17 + 1;
              uVar7 = (ulong)*(uint *)(unaff_x19 + 0x90);
            } while( true );
          }
          goto LAB_1082f5c00;
        }
      }
LAB_1082f5da0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082f5da4);
      (*pcVar2)();
    }
    FUN_10841076c(&UNK_10f488db4);
  }
  FUN_1082647e4(&lStack_90);
LAB_1082f5c98:
  FUN_1082647e4(alStack_70);
  return;
LAB_1082f5d84:
  iVar8 = *(int *)(lVar10 + 0x38);
LAB_1082f5d90:
  iVar15 = iVar15 + (int)lVar17;
  iVar13 = iVar8 + iVar13;
  lVar11 = lVar11 + 1;
  goto LAB_1082f5d24;
}



/* Entry: 1082f5e18; end: 1082f5fab;  */

void FUN_1082f5e18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long *unaff_x20;
  long *plVar3;
  undefined8 uStack_28;
  
  func_0x0001082f9160();
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0001082f8f08();
    } while (extraout_w10 != 0);
  }
  uStack_28 = 0;
  func_0x0001082f60b0(unaff_x19 + 8);
  func_0x0001082f900c();
  if (unaff_x20[2] != 0) {
    do {
      func_0x0001082f8f08();
    } while (extraout_w10_00 != 0);
    uStack_28 = 0;
    FUN_1082f6108(unaff_x19 + 0x10);
    func_0x0001082f9014();
  }
  *(long *)(unaff_x19 + 0x18) = unaff_x20[9];
  *(long *)(unaff_x19 + 0x28) = unaff_x20[8];
  *(long *)(unaff_x19 + 0x20) = unaff_x20[0xb];
  *(long *)(unaff_x19 + 0x30) = unaff_x20[10];
  lVar2 = *(long *)(unaff_x19 + 8);
  func_0x0001082f8e68();
  (*extraout_x8)();
  if (lVar2 != 0) {
    lVar2 = *(long *)(unaff_x19 + 8);
    func_0x0001082f8e68(lVar2);
    (*extraout_x8_00)();
    FUN_1082f5fac(&uStack_28,lVar2 + *(long *)(unaff_x19 + 0x28),
                  *(long *)(*unaff_x20 + 0x78) * *(long *)(unaff_x19 + 0x18));
    uVar1 = uStack_28;
    uStack_28 = 0;
    func_0x0001082f60b0(unaff_x19 + 8,uVar1);
    func_0x0001082f900c();
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  plVar3 = (long *)(unaff_x19 + 0x10);
  lVar2 = *plVar3;
  if (lVar2 != 0) {
    func_0x0001082f8e68();
    (*extraout_x8_01)();
    if (lVar2 != 0) {
      lVar2 = *plVar3;
      func_0x0001082f8e68(lVar2);
      (*extraout_x8_02)();
      FUN_1082f601c(&uStack_28,lVar2 + *(long *)(unaff_x19 + 0x30),*(long *)(unaff_x19 + 0x20) << 1)
      ;
      uVar1 = uStack_28;
      uStack_28 = 0;
      FUN_1082f6108(plVar3,uVar1);
      func_0x0001082f9014();
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
    }
  }
  return;
}



/* Entry: 1082f5fac; end: 1082f601b;  */

void FUN_1082f5fac(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  if (param_1 == 0) {
    func_0x0001082f90fc();
  }
  else {
    FUN_108346318(auStack_28);
  }
  lVar1 = 0x20;
  __Znwm();
  *(undefined4 *)(lVar1 + 0x10) = 1;
  func_0x0001082f8fb4(&UNK_110a3a580);
  return;
}



/* Entry: 1082f601c; end: 1082f608b;  */

void FUN_1082f601c(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  if (param_1 == 0) {
    func_0x0001082f90fc();
  }
  else {
    FUN_108346318(auStack_28);
  }
  lVar1 = 0x20;
  __Znwm();
  *(undefined4 *)(lVar1 + 0x10) = 1;
  func_0x0001082f8fb4(&UNK_110a3a490);
  return;
}



/* Entry: 1082f608c; end: 1082f60bf;  */

void FUN_1082f608c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082f90b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 8) + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1082f60c0; end: 1082f6107;  */

void FUN_1082f60c0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  func_0x0001082f8eb4();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    }
  }
  return;
}



/* Entry: 1082f6108; end: 1082f613b;  */

void FUN_1082f6108(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = *param_1;
  *param_1 = param_2;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082f90b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar5 + 8) + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1082f613c; end: 1082f6183;  */

void FUN_1082f613c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  func_0x0001082f8eb4();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    }
  }
  return;
}



/* Entry: 1082f6184; end: 1082f618f;  */

void FUN_1082f6184(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1082f6190; end: 1082f61c7;  */

void FUN_1082f6190(void)

{
  func_0x0001082f8d74();
  return;
}



/* Entry: 1082f61c8; end: 1082f61db;  */

undefined8 FUN_1082f61c8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
}



/* Entry: 1082f61dc; end: 1082f6203;  */

void FUN_1082f61dc(long param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_1082f8d10(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x0001082f918c();
  return;
}



/* Entry: 1082f6204; end: 1082f621b;  */

void FUN_1082f6204(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001078be09c();
  if (param_1 != 0) {
    func_0x000106f47128();
  }
  return;
}



/* Entry: 1082f621c; end: 1082f627b;  */

void FUN_1082f621c(long param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_1082f8d10(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001082f918c();
  return;
}



/* Entry: 1082f627c; end: 1082f6287;  */

undefined8 FUN_1082f627c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
}



/* Entry: 1082f6288; end: 1082f62af;  */

void FUN_1082f6288(long param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_1082f8d10(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x0001082f918c();
  return;
}



/* Entry: 1082f62b0; end: 1082f62c7;  */

void FUN_1082f62b0(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x0001078be09c();
  if (param_1 != 0) {
    func_0x000106f47128();
  }
  return;
}



/* Entry: 1082f62c8; end: 1082f62ef;  */

void FUN_1082f62c8(long param_1,long param_2)

{
  if (param_2 == 0) {
    FUN_1082f8d10(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001082f918c();
  return;
}



/* Entry: 1082f62f0; end: 1082f62fb;  */

void FUN_1082f62f0(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f62fc; end: 1082f633f;  */

void FUN_1082f62fc(long param_1,int param_2,ulong param_3)

{
  long unaff_x19;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((int)((uint)param_1 ^ 0x7fffffff) < param_2) {
    func_0x00010bdb1a68();
    func_0x0001082f9160();
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001082f9034();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001082f8ef0();
    }
    func_0x0001082f8e3c(param_3 / 0x38);
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x38;
  func_0x0001082f9040(&uStack_20,param_2 + (uint)param_1);
  return;
}



/* Entry: 1082f6340; end: 1082f638b;  */

void FUN_1082f6340(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x19;
  
  func_0x0001082f9160();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x0001082f9034();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001082f8ef0();
  }
  func_0x0001082f8e3c(param_3 / 0x38);
  return;
}



/* Entry: 1082f638c; end: 1082f63a7;  */

void FUN_1082f638c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_10836766c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f63a8; end: 1082f63db;  */

void FUN_1082f63a8(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_10836766c();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082f63dc; end: 1082f63fb;  */

void FUN_1082f63dc(void)

{
  func_0x0001082f8eb4();
  func_0x0001082f639c();
  return;
}



/* Entry: 1082f63fc; end: 1082f641f;  */

void FUN_1082f63fc(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((piVar4 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(piVar4 + 2) != (code *)0x0) {
      (**(code **)(piVar4 + 2))(*(undefined8 *)(piVar4 + 6),*(undefined8 *)(piVar4 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(piVar4);
    return;
  }
  return;
}



/* Entry: 1082f6420; end: 1082f6447;  */

void FUN_1082f6420(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001082f8d68();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a3a0e8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1082f6448; end: 1082f6467;  */

void FUN_1082f6448(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a3a0e8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082f6468; end: 1082f64c3;  */

void FUN_1082f6468(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1082b27cc();
  func_0x000108298794(uVar1,&stack0xffffffffffffffe8,&stack0xffffffffffffffe7);
  return;
}



/* Entry: 1082f64c4; end: 1082f64e7;  */

undefined ** FUN_1082f64c4(void)

{
  return &PTR_DAT_110a3a148;
}



/* Entry: 1082f64e8; end: 1082f650f;  */

void FUN_1082f64e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001082f8d68();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a3a168;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1082f6510; end: 1082f652f;  */

void FUN_1082f6510(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a3a168;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082f6530; end: 1082f655b;  */

void FUN_1082f6530(long param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x40);
  func_0x0001082ee628(*(undefined8 *)(param_1 + 8),&uStack_18);
  return;
}



/* Entry: 1082f655c; end: 1082f6583;  */

void FUN_1082f655c(undefined8 param_1)

{
  func_0x0001082f8f60();
  func_0x0001082f8e10(param_1,&PTR_DAT_110a3a1c8);
  func_0x0001082f8dac();
  return;
}



/* Entry: 1082f6584; end: 1082f658f;  */

undefined ** FUN_1082f6584(void)

{
  return &PTR_DAT_110a3a1c8;
}



/* Entry: 1082f6590; end: 1082f6637;  */

long FUN_1082f6590(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001082f8ef0();
  }
  return param_1;
}



/* Entry: 1082f6638; end: 1082f664b;  */

void FUN_1082f6638(void)

{
  undefined1 *unaff_x19;
  
  func_0x0001082f65e4();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082f664c; end: 1082f6657;  */

undefined * FUN_1082f664c(void)

{
  return &UNK_10f488b79;
}



/* Entry: 1082f6658; end: 1082f6763;  */

void FUN_1082f6658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar2;
  
  func_0x0001082f916c(param_1,param_2,*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x80));
  (*extraout_x8)(param_3,0x20);
  FUN_10828e2dc(param_2,param_1 + 0x90);
  func_0x0001082f916c();
  (*extraout_x8_00)(param_3,0x20);
  if (*(int *)(*(long *)(param_1 + 0x48) + 0x8c) != 0) {
    FUN_10828b1a4(*(undefined8 *)(param_1 + 200));
    func_0x0001082f916c();
    (*extraout_x8_01)(param_3,0x20);
  }
  plVar1 = *(long **)(param_1 + 0x58);
  for (lVar2 = *(long *)(param_1 + 0x60) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    if (*plVar1 == 0) {
      func_0x0001082f916c();
      (*extraout_x8_02)(param_3,1,0,&UNK_10f488bbb,0xb);
    }
    else {
      FUN_1082a4638(*plVar1,param_2,param_3);
    }
    plVar1 = plVar1 + 1;
  }
  return;
}



/* Entry: 1082f6764; end: 1082f67f7;  */

void FUN_1082f6764(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0xd0;
  __Znwm();
  _bzero();
  *(undefined4 *)(puVar4 + 5) = 0x3f800000;
  *puVar4 = &PTR_FUN_110a3a2c0;
  uVar3 = uRam0000000113254e60;
  uVar2 = uRam0000000113254e58;
  uVar1 = uRam0000000113254e48;
  puVar4[7] = uRam0000000113254e50;
  puVar4[6] = uVar1;
  puVar4[9] = uVar3;
  puVar4[8] = uVar2;
  puVar4[10] = uRam0000000113254e68;
  puVar4[0xd] = puVar4 + 0xb;
  *(undefined8 *)((long)puVar4 + 0x74) = 0xffffffff00000004;
  *(undefined4 *)((long)puVar4 + 0x7c) = 0xffffffff;
  puVar4[0x14] = puVar4 + 0x10;
  *(undefined8 *)((long)puVar4 + 0xb4) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar4 + 0xac) = 0xffffffff00000010;
  *(undefined4 *)((long)puVar4 + 0xbc) = 0;
  *(undefined1 *)(puVar4 + 0x18) = 0;
  *param_1 = puVar4;
  return;
}



/* Entry: 1082f67f8; end: 1082f681b;  */

long FUN_1082f67f8(long param_1,uint param_2)

{
  code *pcVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x70))) {
    return *(long *)(param_1 + 0x68) + (ulong)param_2 * 0x88;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082f681c);
  (*pcVar1)();
}



/* Entry: 1082f681c; end: 1082f6827;  */

void FUN_1082f681c(void)

{
  func_0x0001082f8dc4();
  return;
}



/* Entry: 1082f6828; end: 1082f682f;  */

void FUN_1082f6828(void)

{
  return;
}



/* Entry: 1082f6830; end: 1082f6857;  */

void FUN_1082f6830(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001082f8d68();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a3a240;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1082f6858; end: 1082f6877;  */

void FUN_1082f6858(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3a240;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082f6878; end: 1082f6a1b;  */

void FUN_1082f6878(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 uStack_e2;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  char cStack_68;
  undefined8 uStack_48;
  
  func_0x0001082f8d9c();
  lVar7 = *(long *)(param_1 + 8);
  uStack_e2 = *(undefined2 *)(param_2 + 0x4c);
  uStack_48 = extraout_x8;
  FUN_10829c740(auStack_d0,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                *(long *)(param_2 + 0x40) + 0x20,&uStack_e2);
  iVar2 = *(int *)(lVar7 + 0x70);
  if (iVar2 < (int)(*(uint *)(lVar7 + 0x74) >> 1)) {
    FUN_1082f6a50(*(long *)(lVar7 + 0x68) + (long)iVar2 * 0x88,auStack_d0);
  }
  else {
    if (iVar2 == 0x7fffffff) goto LAB_1082f69f0;
    uStack_d8 = 0x7fffffff;
    uStack_e0 = 0x88;
    puVar5 = &uStack_e0;
    uVar6 = (ulong)(iVar2 + 1);
    func_0x0001082f9040();
    FUN_1082f6a50(puVar5 + (long)*(int *)(lVar7 + 0x70) * 0x11,auStack_d0);
    lVar8 = 0;
    for (lVar9 = 0; lVar9 < *(int *)(lVar7 + 0x70); lVar9 = lVar9 + 1) {
      FUN_1082f6a50((long)puVar5 + lVar8,*(long *)(lVar7 + 0x68) + lVar8);
      lVar1 = *(long *)(lVar7 + 0x68) + lVar8;
      if (*(char *)(lVar1 + 0x68) == '\x01') {
        func_0x0001082f90f0(lVar1);
      }
      *(undefined1 *)(lVar1 + 0x68) = 0;
      lVar8 = lVar8 + 0x88;
    }
    if ((*(byte *)(lVar7 + 0x74) & 1) != 0) {
      _free(*(undefined8 *)(lVar7 + 0x68));
    }
    uVar6 = uVar6 / 0x88;
    if (0x7ffffffe < uVar6) {
      uVar6 = 0x7fffffff;
    }
    *(undefined8 **)(lVar7 + 0x68) = puVar5;
    *(uint *)(lVar7 + 0x74) = (int)uVar6 << 1 | 1;
  }
  *(int *)(lVar7 + 0x70) = *(int *)(lVar7 + 0x70) + 1;
  uVar4 = cStack_68 == '\x01';
  if ((bool)uVar4) {
    func_0x0001082f8e20();
  }
  func_0x0001082f8d24(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1082f69f0:
  func_0x00010bdb1a68();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1082f69f8);
  (*pcVar3)();
}



/* Entry: 1082f6a1c; end: 1082f6a43;  */

void FUN_1082f6a1c(undefined8 param_1)

{
  func_0x0001082f8f60();
  func_0x0001082f8e10(param_1,&PTR_DAT_110a3a2a0);
  func_0x0001082f8dac();
  return;
}



/* Entry: 1082f6a44; end: 1082f6a4f;  */

undefined ** FUN_1082f6a44(void)

{
  return &PTR_DAT_110a3a2a0;
}



/* Entry: 1082f6a50; end: 1082f6aaf;  */

void FUN_1082f6a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001082f8e5c();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  FUN_108283324(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined2 *)(unaff_x19 + 0x80);
  *(undefined1 *)(unaff_x20 + 0x82) = *(undefined1 *)(unaff_x19 + 0x82);
  *(undefined2 *)(unaff_x20 + 0x80) = uVar1;
  return;
}



/* Entry: 1082f6ab0; end: 1082f6b13;  */

ulong * FUN_1082f6ab0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x88;
    do {
      if (*(char *)(uVar1 + 0x68) == '\x01') {
        func_0x0001082f90f0(uVar1);
      }
      *(undefined1 *)(uVar1 + 0x68) = 0;
      uVar1 = uVar1 + 0x88;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x0001082f8ef0();
  }
  return param_1;
}



/* Entry: 1082f6b14; end: 1082f6b57;  */

undefined8 * FUN_1082f6b14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3a2c0;
  if ((*(byte *)((long)param_1 + 0xac) & 1) != 0) {
    _free(param_1[0x14]);
  }
  FUN_10828b9a0(param_1 + 0xd);
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082f6b58; end: 1082f6b6b;  */

void FUN_1082f6b58(void)

{
  FUN_1082f6b14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f6b6c; end: 1082f6cb7;  */

void FUN_1082f6b6c(long param_1,undefined ***param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  uint uVar7;
  byte bVar8;
  undefined4 *puVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  long lVar20;
  int iVar21;
  undefined8 extraout_x8;
  undefined *puVar22;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined **ppuVar23;
  int iVar24;
  ulong uVar25;
  undefined **ppuVar26;
  long lVar27;
  long *plVar28;
  uint unaff_w26;
  undefined **ppuVar29;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  undefined4 uStack_234;
  undefined **ppuStack_230;
  undefined ***pppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined ***pppuStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined **appuStack_1b0 [24];
  undefined ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10829dcd4(param_2,param_3,param_1 + 0x78,param_4 + 0x90,param_1 + 0x30);
  lVar20 = *(long *)(param_4 + 200);
  pppuVar14 = (undefined ***)(param_1 + 0xb0);
  FUN_10828bb8c(pppuVar14,param_2);
  pppuVar18 = (undefined ***)(ulong)*(uint *)(param_1 + 0x7c);
  if (*(uint *)(param_1 + 0x7c) != 0xffffffff) {
    lVar20 = 1;
    pppuVar14 = param_2;
    (*(code *)(*param_2)[0x11])();
  }
  if (*(long *)(param_4 + 0x50) != 0) {
    pppuVar18 = *(undefined ****)(*(long *)(param_4 + 0x48) + 0x38);
    lVar20 = (*(long *)(*(long *)(param_4 + 0x48) + 0x40) - (long)pppuVar18) / 0x28;
    pppuVar14 = param_2;
    FUN_1082dc350();
  }
  for (uVar25 = 0; bVar11 = uVar25 == *(ulong *)(param_4 + 0x60),
      uVar25 < *(ulong *)(param_4 + 0x60); uVar25 = uVar25 + 1) {
    pppuVar14 = (undefined ***)0x0;
    if (*(long *)(*(long *)(param_4 + 0x58) + uVar25 * 8) != 0) {
      if (((int)uVar25 < 0) || (*(int *)(param_1 + 0x70) <= (int)uVar25)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1082f6ca4);
        (*pcVar10)();
      }
      lVar20 = *(long *)(*(long *)(param_1 + 0x68) + (uVar25 & 0x7fffffff) * 8);
      ppuStack_68 = &PTR_FUN_110a3a308;
      pppuVar18 = &ppuStack_68;
      pppuStack_60 = param_2;
      pppuStack_50 = &ppuStack_68;
      func_0x00010829610c();
      pppuVar14 = &ppuStack_68;
      FUN_10826df70();
    }
  }
  func_0x0001082f8d24(uStack_48);
  if (bVar11) {
    return;
  }
  ___stack_chk_fail();
  pppuVar15 = &ppuStack_68;
  FUN_10826df70();
  func_0x0001082f8d60();
  func_0x0001082f8e5c();
  func_0x0001082f8d9c();
  uStack_e0 = extraout_x8;
  ppuVar23 = pppuVar18[5];
  ppuVar17 = *pppuVar18;
  ppuVar4 = pppuVar18[1];
  ppuVar3 = pppuVar18[2];
  ppuVar5 = pppuVar18[3];
  plVar28 = (long *)ppuVar23[0xb];
  puVar22 = ppuVar23[0xc];
  iVar24 = (int)puVar22;
  iVar21 = iVar24 - *(int *)(pppuVar15 + 0xe);
  if (iVar21 != 0 && *(int *)(pppuVar15 + 0xe) <= iVar24) {
    func_0x00010829881c(0x3ff0000000000000,param_2 + 0xd,iVar21);
  }
  for (lVar27 = (long)puVar22 << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
    if (*plVar28 == 0) {
      appuStack_1b0[0] = (undefined **)0x0;
    }
    else {
      FUN_108296180(appuStack_1b0);
    }
    ppuVar26 = appuStack_1b0[0];
    iVar21 = *(int *)(param_2 + 0xe);
    if (iVar21 < (int)(*(uint *)((long)param_2 + 0x74) >> 1)) {
      appuStack_1b0[0] = (undefined **)0x0;
      param_2[0xd][iVar21] = (undefined *)ppuVar26;
    }
    else {
      pppuVar18 = param_2 + 0xd;
      uVar19 = 1;
      FUN_1082988d4(0x3ff8000000000000,pppuVar18,1);
      ppuVar26 = appuStack_1b0[0];
      appuStack_1b0[0] = (undefined **)0x0;
      pppuVar18[*(int *)(param_2 + 0xe)] = ppuVar26;
      FUN_108298868(param_2 + 0xd,pppuVar18,uVar19);
      iVar21 = *(int *)(param_2 + 0xe);
    }
    ppuVar26 = appuStack_1b0[0];
    *(int *)(param_2 + 0xe) = iVar21 + 1;
    appuStack_1b0[0] = (undefined **)0x0;
    if (ppuVar26 != (undefined **)0x0) {
      func_0x0001082f9070();
    }
    plVar28 = plVar28 + 1;
  }
  func_0x0001082f8f18();
  iVar21 = unaff_w26 - *(int *)(param_2 + 0x15);
  if (iVar21 != 0 && *(int *)(param_2 + 0x15) <= (int)unaff_w26) {
    FUN_1082f7808(0x3ff0000000000000,param_2 + 0x14,iVar21);
    func_0x0001082f8f18();
  }
  FUN_1082f7808(0x3ff8000000000000,param_2 + 0x14);
  iVar21 = *(int *)(param_2 + 0x15);
  *(uint *)(param_2 + 0x15) = iVar21 + unaff_w26;
  puVar9 = (undefined4 *)((long)param_2[0x14] + (long)iVar21 * 4);
  for (uVar25 = (ulong)(unaff_w26 & ((int)unaff_w26 >> 0x1f ^ 0xffffffffU)); uVar25 != 0;
      uVar25 = uVar25 - 1) {
    *puVar9 = 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  puVar22 = ppuVar23[9];
  iVar21 = *(int *)(puVar22 + 0x8c);
  uVar7 = *(uint *)(puVar22 + 0x84);
  bVar11 = uVar7 < 0x80000000;
  bVar2 = *(byte *)(ppuVar23 + 0x1a) ^ 1;
  bVar8 = bVar11 & *(byte *)(ppuVar23 + 0x1a);
  bVar12 = iVar21 != 0;
  if (bVar12) {
    bVar8 = 1;
  }
  uVar1 = uVar7;
  if (bVar8 == 0) {
    uVar1 = 0xffffffff;
  }
  if (!bVar11 && (bVar2 & 1) == 0) {
    uVar1 = uVar7;
  }
  lVar27 = *(long *)(puVar22 + 0x20);
  lVar6 = *(long *)(puVar22 + 0x28);
  FUN_1082dd9a4(ppuVar3,ppuVar23);
  FUN_1082dc6a0(&lStack_1f8,ppuVar17,&UNK_10f488bc7);
  lVar16 = *(long *)(ppuVar23[9] + 0x68);
  lStack_208 = lStack_1f8 + 8;
  uStack_200 = *(undefined8 *)(lVar16 + 0x10);
  ppuStack_230 = &PTR_FUN_110a3a388;
  pppuStack_228 = param_2;
  ppuStack_220 = ppuVar23;
  ppuStack_218 = ppuVar17;
  ppuStack_210 = ppuVar5;
  func_0x0001082f8ff4(lVar16,"");
  func_0x0001082f8e7c();
  func_0x0001082f912c();
  func_0x0001082f8fec();
  func_0x0001082f8fe4();
  FUN_10829e390(appuStack_1b0,ppuVar23 + 2);
  bVar8 = (bVar11 | bVar2) ^ 1;
  ppuVar26 = (undefined **)(lVar6 - lVar27 >> 4);
  uVar25 = 0xffffffffffffffff;
  while (appuStack_1b0[0] != (undefined **)0x0) {
    FUN_10829e1d8(&ppuStack_1f0,appuStack_1b0);
    uVar25 = uVar25 + 1;
    if ((ulong)((*(long *)(ppuVar23[9] + 0x10) - *(long *)(ppuVar23[9] + 8)) / 0x18) <= uVar25)
    goto LAB_1082f75bc;
    FUN_10828bae8(ppuVar17,&UNK_10f488bf0);
    FUN_10829e258(appuStack_1b0);
  }
  func_0x0001082f8e7c();
  func_0x0001082f912c();
  func_0x0001082f8fec();
  func_0x0001082f8fe4();
  if ((-1 < (int)uVar1) && ((*(uint *)(ppuVar23[9] + 0x88) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    if (ppuVar26 <= (undefined **)(ulong)uVar1) {
LAB_1082f75bc:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1082f75c0);
      (*pcVar10)();
    }
    func_0x0001082f8fec();
    func_0x0001082f90e4(appuStack_1b0,"local");
    FUN_10827535c(lVar20 + 0x28,appuStack_1b0);
    func_0x00010827024c(appuStack_1b0);
    *(undefined4 *)(lVar20 + 0x50) = 0;
  }
  uStack_e8 = 0xc00000000;
  pppuStack_f0 = appuStack_1b0;
  if (bVar12 || (bVar8 & 1) != 0) {
    plVar28 = (long *)(lVar27 + 8);
    for (ppuVar29 = (undefined **)0x0; ppuVar26 != ppuVar29;
        ppuVar29 = (undefined **)((long)ppuVar29 + 1)) {
      if ((*(uint *)(ppuVar23[9] + 0x88) >> (ulong)((uint)ppuVar29 & 0x1f) & 1) == 0) {
        if (7 < *(uint *)(plVar28 + -1)) goto LAB_1082f75bc;
        if ((int)(uint)uStack_e8 < (int)(uStack_e8._4_4_ >> 1)) {
          func_0x0001082f8f9c(pppuStack_f0 + (long)(int)(uint)uStack_e8 * 4);
        }
        else {
          if ((uint)uStack_e8 == 0x7fffffff) {
            func_0x00010bdb1a68();
            goto LAB_1082f75bc;
          }
          pppuStack_1e8 = (undefined ***)0x7fffffff;
          ppuStack_1f0 = (undefined **)0x20;
          pppuVar18 = &ppuStack_1f0;
          uVar25 = (ulong)((uint)uStack_e8 + 1);
          func_0x0001082f9040();
          func_0x0001082f8f9c(pppuVar18 + (long)(int)(uint)uStack_e8 * 4);
          if ((uint)uStack_e8 != 0) {
            _memcpy(pppuVar18,pppuStack_f0,(long)(int)(uint)uStack_e8 << 5);
          }
          if ((uStack_e8 & 0x100000000) != 0) {
            _free(pppuStack_f0);
          }
          uVar25 = uVar25 >> 5;
          if (0x7ffffffe < uVar25) {
            uVar25 = 0x7fffffff;
          }
          uStack_e8 = CONCAT44((int)uVar25 << 1,(uint)uStack_e8) | 0x100000000;
          pppuStack_f0 = pppuVar18;
        }
        bVar11 = 0xfffffffe < (uint)uStack_e8;
        iVar24 = (uint)uStack_e8 + 1;
        uStack_e8 = CONCAT44(uStack_e8._4_4_,iVar24);
        if (bVar11) goto LAB_1082f75bc;
        FUN_1082dd868(ppuVar3,*plVar28 + 8,pppuStack_f0 + (long)iVar24 * 4 + -3,0);
        if ((uint)uStack_e8 == 0) goto LAB_1082f75bc;
        FUN_10828bae8(ppuVar17,&UNK_10f488c48);
        if (uVar1 == (uint)ppuVar29) {
          if ((uint)uStack_e8 == 0) goto LAB_1082f75bc;
          FUN_10829dbe8(&ppuStack_1f0,pppuStack_f0 + (long)(int)(uint)uStack_e8 * 4 + -3);
          FUN_10827535c(lVar20 + 0x28,&ppuStack_1f0);
          func_0x00010827024c(&ppuStack_1f0);
          *(undefined4 *)(lVar20 + 0x50) = 0;
        }
      }
      plVar28 = plVar28 + 2;
    }
  }
  FUN_10829dbfc(ppuVar17,&UNK_10f488c5a);
  FUN_10829df60(ppuVar17,ppuVar5,pppuVar14[4],lVar20,&DAT_10f488c7a,ppuVar23 + 0x12,param_2 + 0xf);
  uStack_234 = 0;
  for (puVar22 = (undefined *)0x0; uVar13 = puVar22 == ppuVar23[0xc], puVar22 < ppuVar23[0xc];
      puVar22 = puVar22 + 1) {
    if (*(long *)(ppuVar23[0xb] + (long)puVar22 * 8) != 0) {
      if (((int)puVar22 < 0) || (*(int *)(param_2 + 0xe) <= (int)puVar22)) goto LAB_1082f75bc;
      ppuStack_1f0 = &PTR_FUN_110a3a420;
      pppuStack_1e8 = pppuVar14;
      ppuStack_1e0 = (undefined **)&uStack_234;
      pppuStack_1d8 = &ppuStack_1f0;
      func_0x00010829610c(*(long *)(ppuVar23[0xb] + (long)puVar22 * 8),&ppuStack_1f0,
                          param_2[0xd][(ulong)puVar22 & 0x7fffffff]);
      FUN_10826df70(&ppuStack_1f0);
      func_0x0001082f8f6c();
      FUN_1082db348();
      func_0x0001082f8f6c();
      FUN_1082db548();
    }
  }
  func_0x0001082f8dd0();
  func_0x0001082f8dbc();
  func_0x0001082f8dd0();
  func_0x0001082f8dbc();
  FUN_1082dc6a0(&lStack_240,(long)ppuVar4 + *(long *)(*ppuVar4 + -0x18),&UNK_10f488c7e);
  lVar27 = *(long *)(ppuVar23[9] + 0x70);
  func_0x0001082f8dd0();
  pppuStack_1d8 = (undefined ***)((long)ppuVar4 + extraout_x8_00);
  lStack_1c8 = lStack_240 + 8;
  uStack_1c0 = *(undefined8 *)(lVar27 + 0x10);
  ppuStack_1f0 = &PTR_FUN_110a3a388;
  pppuStack_1e8 = param_2;
  ppuStack_1e0 = ppuVar23;
  ppuStack_1d0 = ppuVar5;
  func_0x0001082f8ff4();
  lStack_248 = 0;
  ppuVar17 = ppuVar23 + 0x17;
  FUN_10828e84c(ppuVar17,&UNK_10df17848);
  if ((int)ppuVar17 != 0) {
    ppuVar17 = ppuVar5;
    func_0x00010828bb5c(ppuVar5,0,2,0x17,&DAT_10f68f0f0,&lStack_248);
    *(int *)((long)param_2 + 0x7c) = (int)ppuVar17;
  }
  if (iVar21 == 0) {
    func_0x0001082f8dd0();
    func_0x0001082f8dbc();
  }
  if (bVar12 || (bVar8 & 1) != 0) {
    lVar27 = *(long *)(*ppuVar4 + -0x18);
    FUN_1082f778c(auStack_278,&ppuStack_1f0,&UNK_10f488c22);
    uVar13 = cStack_261 == '\0';
    FUN_10828bae8((long)ppuVar4 + lVar27,&UNK_10f488c8d);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
    pppuVar18 = pppuStack_f0;
    for (lVar27 = (long)(int)(uint)uStack_e8 << 5; lVar27 != 0; lVar27 = lVar27 + -0x20) {
      uVar13 = *pppuVar18 == ppuVar26;
      if (ppuVar26 <= *pppuVar18) goto LAB_1082f75bc;
      FUN_10828bae8((long)ppuVar4 + *(long *)(*ppuVar4 + -0x18),&UNK_10f488c9a);
      pppuVar18 = pppuVar18 + 4;
    }
    uStack_250 = 0x1138270b0;
    if ((*(char *)(lVar20 + 0x28) == '\0') &&
       (uVar13 = *(char *)(ppuVar23 + 0x1a) == '\x01', (bool)uVar13)) {
      func_0x0001082f90e4(auStack_278,"local");
      FUN_10827535c((char *)(lVar20 + 0x28),auStack_278);
      func_0x00010827024c(auStack_278);
      *(undefined4 *)(lVar20 + 0x50) = 1;
      func_0x0001083a3534(&uStack_250,&UNK_10f488cac);
    }
    if (iVar21 == 0) {
      func_0x0001082f8dd0();
      func_0x0001082f9118();
      func_0x0001082f8dbc();
    }
    else {
      FUN_10828ba0c(param_2 + 0x16,ppuVar5,ppuVar23[0x19],2);
      func_0x0001082f8dd0();
      func_0x0001082f8dbc();
      func_0x0001082f8dd0();
      func_0x0001082f9118();
      func_0x0001082f8dbc();
      auStack_278[0] = 0x1138270b0;
      uVar13 = lStack_248 == 0;
      func_0x0001082f8dd0();
      FUN_1082dcb88((long)ppuVar4 + extraout_x8_01,auStack_278);
      func_0x0001082f8dd0();
      func_0x0001082f8dbc();
      FUN_1083a3ca0(auStack_278[0]);
    }
    FUN_1083a3ca0(ppuVar23);
  }
  FUN_1083a3ca0(lStack_240);
  FUN_1082f77dc(appuStack_1b0);
  FUN_1083a3ca0(lStack_1f8);
  func_0x0001082f8d24(uStack_e0);
  if ((bool)uVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827024c(auStack_278);
  FUN_1083a3ca0(0x1138270b0);
  FUN_1083a3ca0(lStack_240);
  FUN_1082f77dc(appuStack_1b0);
  FUN_1083a3ca0(lStack_1f8);
  func_0x0001082f8d60();
  return;
}



/* Entry: 1082f6cb8; end: 1082f76eb;  */

void FUN_1082f6cb8(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  long unaff_x19;
  long unaff_x20;
  long lVar19;
  int iVar20;
  undefined **ppuVar21;
  long lVar22;
  long *plVar23;
  uint unaff_w26;
  undefined **ppuVar24;
  undefined8 auStack_208 [2];
  char cStack_1f1;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c4;
  undefined **ppuStack_1c0;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined **appuStack_140 [24];
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001082f8e5c();
  func_0x0001082f8d9c();
  lVar19 = param_2[5];
  uVar15 = *param_2;
  plVar4 = (long *)param_2[1];
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  plVar23 = *(long **)(lVar19 + 0x58);
  lVar22 = *(long *)(lVar19 + 0x60);
  iVar20 = (int)lVar22;
  iVar17 = iVar20 - *(int *)(param_1 + 0x70);
  uStack_70 = extraout_x8;
  if (iVar17 != 0 && *(int *)(param_1 + 0x70) <= iVar20) {
    func_0x00010829881c(0x3ff0000000000000,unaff_x20 + 0x68,iVar17);
  }
  for (lVar22 = lVar22 << 3; lVar22 != 0; lVar22 = lVar22 + -8) {
    if (*plVar23 == 0) {
      appuStack_140[0] = (undefined **)0x0;
    }
    else {
      FUN_108296180(appuStack_140);
    }
    ppuVar21 = appuStack_140[0];
    iVar17 = *(int *)(unaff_x20 + 0x70);
    if (iVar17 < (int)(*(uint *)(unaff_x20 + 0x74) >> 1)) {
      appuStack_140[0] = (undefined **)0x0;
      *(undefined ***)(*(long *)(unaff_x20 + 0x68) + (long)iVar17 * 8) = ppuVar21;
    }
    else {
      lVar13 = unaff_x20 + 0x68;
      uVar16 = 1;
      FUN_1082988d4(0x3ff8000000000000,lVar13,1);
      ppuVar21 = appuStack_140[0];
      appuStack_140[0] = (undefined **)0x0;
      *(undefined ***)(lVar13 + (long)*(int *)(unaff_x20 + 0x70) * 8) = ppuVar21;
      FUN_108298868(unaff_x20 + 0x68,lVar13,uVar16);
      iVar17 = *(int *)(unaff_x20 + 0x70);
    }
    ppuVar21 = appuStack_140[0];
    *(int *)(unaff_x20 + 0x70) = iVar17 + 1;
    appuStack_140[0] = (undefined **)0x0;
    if (ppuVar21 != (undefined **)0x0) {
      func_0x0001082f9070();
    }
    plVar23 = plVar23 + 1;
  }
  func_0x0001082f8f18();
  iVar17 = unaff_w26 - *(int *)(unaff_x20 + 0xa8);
  if (iVar17 != 0 && *(int *)(unaff_x20 + 0xa8) <= (int)unaff_w26) {
    FUN_1082f7808(0x3ff0000000000000,unaff_x20 + 0xa0,iVar17);
    func_0x0001082f8f18();
  }
  FUN_1082f7808(0x3ff8000000000000,unaff_x20 + 0xa0);
  iVar17 = *(int *)(unaff_x20 + 0xa8);
  *(uint *)(unaff_x20 + 0xa8) = iVar17 + unaff_w26;
  puVar8 = (undefined4 *)(*(long *)(unaff_x20 + 0xa0) + (long)iVar17 * 4);
  for (uVar18 = (ulong)(unaff_w26 & ((int)unaff_w26 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
      uVar18 = uVar18 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  lVar22 = *(long *)(lVar19 + 0x48);
  iVar17 = *(int *)(lVar22 + 0x8c);
  uVar6 = *(uint *)(lVar22 + 0x84);
  bVar10 = uVar6 < 0x80000000;
  bVar2 = *(byte *)(lVar19 + 0xd0) ^ 1;
  bVar7 = bVar10 & *(byte *)(lVar19 + 0xd0);
  bVar11 = iVar17 != 0;
  if (bVar11) {
    bVar7 = 1;
  }
  uVar1 = uVar6;
  if (bVar7 == 0) {
    uVar1 = 0xffffffff;
  }
  if (!bVar10 && (bVar2 & 1) == 0) {
    uVar1 = uVar6;
  }
  lVar13 = *(long *)(lVar22 + 0x20);
  lVar22 = *(long *)(lVar22 + 0x28);
  FUN_1082dd9a4(uVar3,lVar19);
  FUN_1082dc6a0(&uStack_188,uVar15,&UNK_10f488bc7);
  ppuStack_1c0 = &PTR_FUN_110a3a388;
  func_0x0001082f8ff4(*(undefined8 *)(*(long *)(lVar19 + 0x48) + 0x68),"");
  func_0x0001082f8e7c();
  func_0x0001082f912c();
  func_0x0001082f8fec();
  func_0x0001082f8fe4();
  FUN_10829e390(appuStack_140,lVar19 + 0x10);
  bVar7 = (bVar10 | bVar2) ^ 1;
  ppuVar21 = (undefined **)(lVar22 - lVar13 >> 4);
  uVar18 = 0xffffffffffffffff;
  while (appuStack_140[0] != (undefined **)0x0) {
    FUN_10829e1d8(&ppuStack_180,appuStack_140);
    uVar18 = uVar18 + 1;
    if ((ulong)((*(long *)(*(long *)(lVar19 + 0x48) + 0x10) -
                *(long *)(*(long *)(lVar19 + 0x48) + 8)) / 0x18) <= uVar18) goto LAB_1082f75bc;
    FUN_10828bae8(uVar15,&UNK_10f488bf0);
    FUN_10829e258(appuStack_140);
  }
  func_0x0001082f8e7c();
  func_0x0001082f912c();
  func_0x0001082f8fec();
  func_0x0001082f8fe4();
  if ((-1 < (int)uVar1) &&
     ((*(uint *)(*(long *)(lVar19 + 0x48) + 0x88) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    if (ppuVar21 <= (undefined **)(ulong)uVar1) {
LAB_1082f75bc:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1082f75c0);
      (*pcVar9)();
    }
    func_0x0001082f8fec();
    func_0x0001082f90e4(appuStack_140,"local");
    FUN_10827535c(param_3 + 0x28,appuStack_140);
    func_0x00010827024c(appuStack_140);
    *(undefined4 *)(param_3 + 0x50) = 0;
  }
  uStack_78 = 0xc00000000;
  pppuStack_80 = appuStack_140;
  if (bVar11 || (bVar7 & 1) != 0) {
    plVar23 = (long *)(lVar13 + 8);
    for (ppuVar24 = (undefined **)0x0; ppuVar21 != ppuVar24;
        ppuVar24 = (undefined **)((long)ppuVar24 + 1)) {
      if ((*(uint *)(*(long *)(lVar19 + 0x48) + 0x88) >> (ulong)((uint)ppuVar24 & 0x1f) & 1) == 0) {
        if (7 < *(uint *)(plVar23 + -1)) goto LAB_1082f75bc;
        if ((int)(uint)uStack_78 < (int)(uStack_78._4_4_ >> 1)) {
          func_0x0001082f8f9c(pppuStack_80 + (long)(int)(uint)uStack_78 * 4);
        }
        else {
          if ((uint)uStack_78 == 0x7fffffff) {
            func_0x00010bdb1a68();
            goto LAB_1082f75bc;
          }
          ppuStack_180 = (undefined **)0x20;
          pppuVar14 = &ppuStack_180;
          uVar18 = (ulong)((uint)uStack_78 + 1);
          func_0x0001082f9040();
          func_0x0001082f8f9c(pppuVar14 + (long)(int)(uint)uStack_78 * 4);
          if ((uint)uStack_78 != 0) {
            _memcpy(pppuVar14,pppuStack_80,(long)(int)(uint)uStack_78 << 5);
          }
          if ((uStack_78 & 0x100000000) != 0) {
            _free(pppuStack_80);
          }
          uVar18 = uVar18 >> 5;
          if (0x7ffffffe < uVar18) {
            uVar18 = 0x7fffffff;
          }
          uStack_78 = CONCAT44((int)uVar18 << 1,(uint)uStack_78) | 0x100000000;
          pppuStack_80 = pppuVar14;
        }
        bVar10 = 0xfffffffe < (uint)uStack_78;
        iVar20 = (uint)uStack_78 + 1;
        uStack_78 = CONCAT44(uStack_78._4_4_,iVar20);
        if (bVar10) goto LAB_1082f75bc;
        FUN_1082dd868(uVar3,*plVar23 + 8,pppuStack_80 + (long)iVar20 * 4 + -3,0);
        if ((uint)uStack_78 == 0) goto LAB_1082f75bc;
        FUN_10828bae8(uVar15,&UNK_10f488c48);
        if (uVar1 == (uint)ppuVar24) {
          if ((uint)uStack_78 == 0) goto LAB_1082f75bc;
          FUN_10829dbe8(&ppuStack_180,pppuStack_80 + (long)(int)(uint)uStack_78 * 4 + -3);
          FUN_10827535c(param_3 + 0x28,&ppuStack_180);
          func_0x00010827024c(&ppuStack_180);
          *(undefined4 *)(param_3 + 0x50) = 0;
        }
      }
      plVar23 = plVar23 + 2;
    }
  }
  FUN_10829dbfc(uVar15,&UNK_10f488c5a);
  FUN_10829df60(uVar15,uVar5,*(undefined8 *)(unaff_x19 + 0x20),param_3,&DAT_10f488c7a,lVar19 + 0x90,
                unaff_x20 + 0x78);
  uStack_1c4 = 0;
  for (uVar18 = 0; uVar12 = uVar18 == *(ulong *)(lVar19 + 0x60), uVar18 < *(ulong *)(lVar19 + 0x60);
      uVar18 = uVar18 + 1) {
    lVar22 = *(long *)(*(long *)(lVar19 + 0x58) + uVar18 * 8);
    if (lVar22 != 0) {
      if (((int)uVar18 < 0) || (*(int *)(unaff_x20 + 0x70) <= (int)uVar18)) goto LAB_1082f75bc;
      ppuStack_180 = &PTR_FUN_110a3a420;
      func_0x00010829610c(lVar22,&ppuStack_180,
                          *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + (uVar18 & 0x7fffffff) * 8));
      FUN_10826df70(&ppuStack_180);
      func_0x0001082f8f6c();
      FUN_1082db348();
      func_0x0001082f8f6c();
      FUN_1082db548();
    }
  }
  func_0x0001082f8dd0();
  func_0x0001082f8dbc();
  func_0x0001082f8dd0();
  func_0x0001082f8dbc();
  FUN_1082dc6a0(&uStack_1d0,(long)plVar4 + *(long *)(*plVar4 + -0x18),&UNK_10f488c7e);
  func_0x0001082f8dd0();
  ppuStack_180 = &PTR_FUN_110a3a388;
  func_0x0001082f8ff4();
  lStack_1d8 = 0;
  lVar22 = lVar19 + 0xb8;
  FUN_10828e84c(lVar22,&UNK_10df17848);
  if ((int)lVar22 != 0) {
    uVar15 = uVar5;
    func_0x00010828bb5c(uVar5,0,2,0x17,&DAT_10f68f0f0,&lStack_1d8);
    *(int *)(unaff_x20 + 0x7c) = (int)uVar15;
  }
  if (iVar17 == 0) {
    func_0x0001082f8dd0();
    func_0x0001082f8dbc();
  }
  if (bVar11 || (bVar7 & 1) != 0) {
    lVar22 = *(long *)(*plVar4 + -0x18);
    FUN_1082f778c(auStack_208,&ppuStack_180,&UNK_10f488c22);
    uVar12 = cStack_1f1 == '\0';
    FUN_10828bae8((long)plVar4 + lVar22,&UNK_10f488c8d);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    pppuVar14 = pppuStack_80;
    for (lVar22 = (long)(int)(uint)uStack_78 << 5; lVar22 != 0; lVar22 = lVar22 + -0x20) {
      uVar12 = *pppuVar14 == ppuVar21;
      if (ppuVar21 <= *pppuVar14) goto LAB_1082f75bc;
      FUN_10828bae8((long)plVar4 + *(long *)(*plVar4 + -0x18),&UNK_10f488c9a);
      pppuVar14 = pppuVar14 + 4;
    }
    uStack_1e0 = 0x1138270b0;
    if ((*(char *)(param_3 + 0x28) == '\0') &&
       (uVar12 = *(char *)(lVar19 + 0xd0) == '\x01', (bool)uVar12)) {
      func_0x0001082f90e4(auStack_208,"local");
      FUN_10827535c((char *)(param_3 + 0x28),auStack_208);
      func_0x00010827024c(auStack_208);
      *(undefined4 *)(param_3 + 0x50) = 1;
      func_0x0001083a3534(&uStack_1e0,&UNK_10f488cac);
    }
    if (iVar17 == 0) {
      func_0x0001082f8dd0();
      func_0x0001082f9118();
      func_0x0001082f8dbc();
    }
    else {
      FUN_10828ba0c(unaff_x20 + 0xb0,uVar5,*(undefined8 *)(lVar19 + 200),2);
      func_0x0001082f8dd0();
      func_0x0001082f8dbc();
      func_0x0001082f8dd0();
      func_0x0001082f9118();
      func_0x0001082f8dbc();
      auStack_208[0] = 0x1138270b0;
      uVar12 = lStack_1d8 == 0;
      func_0x0001082f8dd0();
      FUN_1082dcb88((long)plVar4 + extraout_x8_00,auStack_208);
      func_0x0001082f8dd0();
      func_0x0001082f8dbc();
      FUN_1083a3ca0(auStack_208[0]);
    }
    FUN_1083a3ca0(lVar19);
  }
  FUN_1083a3ca0(uStack_1d0);
  FUN_1082f77dc(appuStack_140);
  FUN_1083a3ca0(uStack_188);
  func_0x0001082f8d24(uStack_70);
  if ((bool)uVar12) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010827024c(auStack_208);
  FUN_1083a3ca0(0x1138270b0);
  FUN_1083a3ca0(uStack_1d0);
  FUN_1082f77dc(appuStack_140);
  FUN_1083a3ca0(uStack_188);
  func_0x0001082f8d60();
  return;
}



/* Entry: 1082f76ec; end: 1082f76f3;  */

void FUN_1082f76ec(void)

{
  return;
}



/* Entry: 1082f76f4; end: 1082f771b;  */

void FUN_1082f76f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001082f8d68();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a3a308;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1082f771c; end: 1082f7757;  */

void FUN_1082f771c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a3a308;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082f7758; end: 1082f777f;  */

void FUN_1082f7758(undefined8 param_1)

{
  func_0x0001082f8f60();
  func_0x0001082f8e10(param_1,&PTR_DAT_110a3a368);
  func_0x0001082f8dac();
  return;
}



/* Entry: 1082f7780; end: 1082f778b;  */

undefined ** FUN_1082f7780(void)

{
  return &PTR_DAT_110a3a368;
}



/* Entry: 1082f778c; end: 1082f77d7;  */

void FUN_1082f778c(long param_1)

{
  undefined8 uStack_28;
  
  FUN_1082dc6a0(&uStack_28,*(undefined8 *)(param_1 + 0x18));
  func_0x0001082f9090();
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 1082f77d8; end: 1082f77db;  */

void FUN_1082f77d8(void)

{
  return;
}



/* Entry: 1082f77dc; end: 1082f7807;  */

long FUN_1082f77dc(long param_1)

{
  if ((*(byte *)(param_1 + 0xcc) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0xc0));
  }
  return param_1;
}



/* Entry: 1082f7808; end: 1082f789b;  */

void FUN_1082f7808(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - uVar1) < param_2) {
    if ((int)(uVar1 ^ 0x7fffffff) < param_2) {
      func_0x00010bdb1a68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 4;
    uVar2 = (ulong)(uVar1 + param_2);
    FUN_10840fe24(&uStack_40,uVar2);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001082f9034();
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      func_0x0001082f8ef0();
    }
    func_0x0001082f8e3c(uVar2 >> 2);
  }
  return;
}



/* Entry: 1082f789c; end: 1082f78cb;  */

void FUN_1082f789c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082f78cc; end: 1082f7a9b;  */

void FUN_1082f78cc(undefined8 param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  code *extraout_x8;
  long *plVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uStack_80;
  char cStack_71;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  lVar12 = *(long *)(param_3 + 0x10);
  plVar7 = *(long **)(lVar12 + 0x20);
  if (*(byte *)((long)plVar7 + 0x2c) < 0x10 &&
      (1 << (ulong)(*(byte *)((long)plVar7 + 0x2c) & 0x1f) & 0xe4c2U) != 0) {
    uStack_68 = *(undefined8 *)(lVar12 + 0x18);
    puStack_70 = *(undefined4 **)(lVar12 + 0x10);
    func_0x000107c27958(param_1,&puStack_70);
  }
  else {
    plVar4 = plVar7;
    (**(code **)(*plVar7 + 0xe0))();
    if ((int)plVar4 != 0) {
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    func_0x0001083d42b8(*(undefined8 *)(param_2 + 0x30),plVar7,&cStack_71);
    FUN_1083a3410(&puStack_70,*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18));
    lVar10 = 0;
    lVar6 = *(long *)(*(long *)(param_2 + 0x10) + 0x48);
    puVar1 = *(ulong **)(lVar6 + 0x40);
    for (puVar8 = *(ulong **)(lVar6 + 0x38); puVar8 != puVar1; puVar8 = puVar8 + 5) {
      uVar13 = *puVar8;
      FUN_10821b208(uVar13,puVar8[1],puStack_70 + 2,*puStack_70);
      if ((uVar13 & 1) != 0) break;
      lVar10 = lVar10 + 0x28;
    }
    iVar5 = (int)(lVar10 / 0x28);
    if ((iVar5 < 0) || (*(int *)(*(long *)(param_2 + 8) + 0xa8) <= iVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082f7a88);
      (*pcVar3)();
    }
    lVar6 = *(long *)(*(long *)(param_2 + 8) + 0xa0);
    uVar13 = lVar10 / 0x28 & 0x7fffffff;
    if (*(int *)(lVar6 + uVar13 * 4) == -1) {
      uVar2 = puVar8[4];
      uStack_80 = 0;
      uVar9 = *(undefined8 *)(param_2 + 0x20);
      uVar11 = *(undefined8 *)(param_2 + 0x10);
      if ((int)plVar4 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = *(long **)(lVar12 + 0x20);
        (**(code **)(*plVar7 + 0x60))();
      }
      FUN_10828bb1c(uVar9,uVar11,(uint)uVar2 >> 2 & 3,(long)cStack_71,puStack_70 + 2,plVar7,
                    &uStack_80);
      *(int *)(lVar6 + uVar13 * 4) = (int)uVar9;
      func_0x0001082f9090();
    }
    else {
      func_0x0001082f8e68();
      (*extraout_x8)();
      func_0x0001082f9090();
    }
    func_0x0001082f8ed8();
  }
  return;
}



/* Entry: 1082f7a9c; end: 1082f7b97;  */

void FUN_1082f7a9c(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  
  if (*(ulong *)(*(long *)(param_2 + 0x10) + 0x60) <= (ulong)(long)param_3) {
LAB_1082f7b14:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082f7b18);
    (*pcVar2)();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x58) + (long)param_3 * 8);
  if (lVar5 == 0) {
    puVar4 = &UNK_10f485fd2;
    func_0x00010002b82c(param_1,&UNK_10f485fd2);
    func_0x000107c613d0(puVar4);
    func_0x000107c60c50();
    return;
  }
  if ((param_3 < 0) || (*(int *)(*(long *)(param_2 + 8) + 0x70) <= param_3)) goto LAB_1082f7b14;
  iVar3 = (int)*(undefined8 *)(*(long *)(param_2 + 0x18) + 8);
  uVar1 = *(uint *)(lVar5 + 0x30);
  FUN_1082db500();
  if ((uVar1 >> 5 & 1) == 0) {
    if (iVar3 == 0) {
      puVar4 = &UNK_10f486bb0;
      goto LAB_1082db4e0;
    }
  }
  else if (iVar3 != 0) {
    puVar4 = &UNK_10f486b96;
    goto LAB_1082db4e0;
  }
  puVar4 = &UNK_10f486ba5;
LAB_1082db4e0:
  FUN_1083d4028(param_1,puVar4);
  return;
}



/* Entry: 1082f7b98; end: 1082f7c43;  */

void FUN_1082f7b98(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  
  if (*(ulong *)(*(long *)(param_2 + 0x10) + 0x60) <= (ulong)(long)param_3) {
LAB_1082f7c40:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082f7c44);
    (*pcVar2)();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x58) + (long)param_3 * 8);
  if (lVar5 == 0) {
    FUN_1083d4028(&UNK_10f485fdb);
    return;
  }
  if ((param_3 < 0) || (*(int *)(*(long *)(param_2 + 8) + 0x70) <= param_3)) goto LAB_1082f7c40;
  iVar3 = (int)*(undefined8 *)(*(long *)(param_2 + 0x18) + 8);
  uVar1 = *(uint *)(lVar5 + 0x30);
  FUN_1082db500();
  if ((uVar1 >> 5 & 1) == 0) {
    if (iVar3 == 0) {
      puVar4 = &UNK_10f486bb0;
      goto LAB_1082db4e0;
    }
  }
  else if (iVar3 != 0) {
    puVar4 = &UNK_10f486b96;
    goto LAB_1082db4e0;
  }
  puVar4 = &UNK_10f486ba5;
LAB_1082db4e0:
  FUN_1083d4028(param_1,puVar4);
  return;
}



/* Entry: 1082f7c44; end: 1082f7c4b;  */

void FUN_1082f7c44(void)

{
  return;
}



/* Entry: 1082f7c4c; end: 1082f7c7f;  */

void FUN_1082f7c4c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110a3a420;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082f7c80; end: 1082f7cd3;  */

void FUN_1082f7c80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a3a420;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082f7cd4; end: 1082f7cfb;  */

void FUN_1082f7cd4(undefined8 param_1)

{
  func_0x0001082f8f60();
  func_0x0001082f8e10(param_1,&PTR_DAT_110a3a480);
  func_0x0001082f8dac();
  return;
}



/* Entry: 1082f7cfc; end: 1082f7d07;  */

undefined ** FUN_1082f7cfc(void)

{
  return &PTR_DAT_110a3a480;
}



/* Entry: 1082f7d08; end: 1082f7dbf;  */

void FUN_1082f7d08(long *param_1)

{
  code *extraout_x8;
  
  if ((*param_1 == 0) && (param_1[2] != 0)) {
    func_0x0001082f8e68();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 1082f7dc0; end: 1082f81fb;  */

void FUN_1082f7dc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,long *param_6,undefined8 param_7,byte param_8,
                  undefined8 param_9,long param_10)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_register_00005028;
  
  uVar1 = SUB82(param_3,0);
  FUN_1082f4e18();
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined2 *)(param_3 + 3) = uVar1;
  *(undefined8 *)((long)param_3 + 0x24) = 0;
  *(undefined8 *)((long)param_3 + 0x1c) = 0;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  param_3[6] = param_4;
  *param_3 = &PTR_FUN_110a3a038;
  *(undefined1 *)(param_3 + 7) = 0;
  *(byte *)((long)param_3 + 0x39) = *(byte *)((long)param_3 + 0x39) & 0xf0 | param_8 & 3;
  param_3[8] = 0;
  *(undefined1 *)(param_3 + 9) = 0;
  param_3[0x11] = param_3 + 10;
  func_0x0001082f8f48(0x200000000);
  uVar4 = param_5[1];
  uVar3 = *param_5;
  func_0x0001082f8f30();
  *(undefined8 *)(param_10 + -8) = extraout_x8;
  *(undefined8 *)(param_10 + -0x10) = in_register_00005028;
  *(undefined8 *)(param_10 + -0x18) = param_2;
  *(undefined8 *)(param_10 + -0x20) = uVar4;
  *(undefined8 *)(param_10 + -0x28) = uVar3;
  *(undefined8 *)(param_10 + 0x10) = 0;
  *(undefined8 *)(param_10 + 0x18) = 0;
  *(undefined8 *)(param_10 + 0x20) = 0;
  *(undefined8 *)(param_10 + 0x28) = 0x100000000;
  uVar2 = 0;
  if (*(long *)(*param_6 + 0x18) != 0) {
    uVar2 = 2;
  }
  if (*(long *)(*param_6 + 0x20) != 0) {
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001082f7eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df17660)[uVar2] * 4 + 0x1082f7eb8))();
  return;
}



/* Entry: 1082f81fc; end: 1082f84ab;  */

undefined8 FUN_1082f81fc(int param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  FUN_1082f84ac(&lStack_38,3);
  lStack_50 = CONCAT44(lStack_50._4_4_,1);
  lStack_48 = 0;
  func_0x0001082f90a4(&lStack_50);
  func_0x0001082f87a8(&lStack_38,&lStack_50);
  FUN_1083a3ca0(uStack_40);
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  FUN_1082f84ac(&lStack_38,2);
  FUN_1083a3348(&uStack_58,&UNK_10f488dd1);
  FUN_1083a3348(&uStack_60,&UNK_10f488e01);
  if (param_1 == 0) {
    func_0x0001082f8e34();
    lVar2 = 8;
  }
  else {
    uStack_78._0_4_ = 4;
    lStack_70 = 8;
    func_0x0001082f90a4(&uStack_78);
    func_0x0001082f90b8();
    FUN_1083a3ca0(uStack_68);
    uStack_78 = CONCAT44(uStack_78._4_4_,7);
    FUN_1083a3348(&lStack_70,&DAT_10f68f0f0);
    func_0x0001082f9028();
    func_0x0001082f8ed8();
    func_0x0001082f907c();
    func_0x0001082f8e34();
    lVar2 = 0xc;
  }
  if (param_2 == 0) {
    func_0x0001082f8e34();
  }
  else {
    uStack_78._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
    uStack_78._0_4_ = 1;
    lStack_70 = lVar2;
    func_0x0001082f90a4(&uStack_78);
    func_0x0001082f90b8();
    FUN_1083a3ca0(uStack_68);
    uStack_78 = CONCAT44(uStack_78._4_4_,1);
    FUN_1083a3348(&lStack_70,&UNK_10f488e95);
    func_0x0001082f9028();
    func_0x0001082f8ed8();
    func_0x0001082f907c();
    func_0x0001082f8e34();
    lVar2 = lVar2 + 8;
  }
  func_0x0001082f907c();
  func_0x0001082f8e34();
  FUN_10836655c(&uStack_78,lStack_38,(lStack_30 - lStack_38) / 0x18,lVar2,lStack_50,
                lStack_48 - lStack_50 >> 4,&uStack_58,&uStack_60);
  uVar1 = uStack_78;
  uStack_78 = 0;
  FUN_1083a3ca0(lStack_70);
  func_0x0001082f639c(uStack_78);
  FUN_1083a3ca0(uStack_60);
  FUN_1083a3ca0(uStack_58);
  func_0x0001082f8bc8(&lStack_50);
  FUN_1082f8c6c(&lStack_38);
  return uVar1;
}



/* Entry: 1082f84ac; end: 1082f8513;  */

void FUN_1082f84ac(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_2) {
    FUN_1082f8640(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x0001082f901c();
    func_0x0001082f8760(auStack_48);
  }
  return;
}



/* Entry: 1082f8514; end: 1082f851f;  */

void FUN_1082f8514(long *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  func_0x0001082f8dc4();
  func_0x0001082f8e5c();
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar2 - (long)puVar8) / -0x18) * 0x18);
  plStack_80 = param_1 + 2;
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  puStack_58 = puVar9;
  for (puVar6 = puVar8; puVar6 != puVar2; puVar6 = puVar6 + 3) {
    uVar5 = *puVar6;
    puStack_58[1] = puVar6[1];
    *puStack_58 = uVar5;
    lVar7 = puVar6[2];
    if (lVar7 != 0 && lVar7 != 0x1138270b0) {
      piVar1 = (int *)(lVar7 + 4);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_58[2] = lVar7;
    puStack_58 = puStack_58 + 3;
  }
  uStack_68 = 1;
  puStack_60 = puVar9;
  for (; puVar8 != puVar2; puVar8 = puVar8 + 3) {
    FUN_1083a3c7c(puVar8 + 2);
  }
  FUN_1082f86dc(&plStack_80);
  unaff_x19[1] = puVar9;
  uVar5 = *unaff_x20;
  unaff_x20[1] = uVar5;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar5;
  uVar5 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar5;
  uVar5 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar5;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1082f8520; end: 1082f863f;  */

void FUN_1082f8520(long *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x0001082f8e5c();
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar2 - (long)puVar8) / -0x18) * 0x18);
  plStack_70 = param_1 + 2;
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  puStack_48 = puVar9;
  for (puVar6 = puVar8; puVar6 != puVar2; puVar6 = puVar6 + 3) {
    uVar5 = *puVar6;
    puStack_48[1] = puVar6[1];
    *puStack_48 = uVar5;
    lVar7 = puVar6[2];
    if (lVar7 != 0 && lVar7 != 0x1138270b0) {
      piVar1 = (int *)(lVar7 + 4);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_48[2] = lVar7;
    puStack_48 = puStack_48 + 3;
  }
  uStack_58 = 1;
  puStack_50 = puVar9;
  for (; puVar8 != puVar2; puVar8 = puVar8 + 3) {
    FUN_1083a3c7c(puVar8 + 2);
  }
  FUN_1082f86dc(&plStack_70);
  unaff_x19[1] = puVar9;
  uVar5 = *unaff_x20;
  unaff_x20[1] = uVar5;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar5;
  uVar5 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar5;
  uVar5 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar5;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1082f8640; end: 1082f86af;  */

long * FUN_1082f8640(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001082f868c();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1082f86b0; end: 1082f86db;  */

long FUN_1082f86b0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1082f870c(param_1);
  }
  return param_1;
}



/* Entry: 1082f86dc; end: 1082f870b;  */

long FUN_1082f86dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1082f870c(param_1);
  }
  return param_1;
}



/* Entry: 1082f870c; end: 1082f872b;  */

void FUN_1082f870c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x18) {
    FUN_1083a3c7c(lVar1 + -8);
  }
  return;
}



/* Entry: 1082f872c; end: 1082f8897;  */

void FUN_1082f872c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x18) {
    FUN_1083a3c7c(param_3 + -8);
  }
  return;
}



/* Entry: 1082f8898; end: 1082f8a4b;  */

long **** FUN_1082f8898(long ****param_1,undefined4 *param_2)

{
  ulong uVar1;
  long ***ppplVar2;
  long ***ppplVar3;
  long ****pppplVar4;
  ulong uVar5;
  long ****pppplVar6;
  ulong uVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long lVar10;
  long ***ppplVar11;
  long ***ppplStack_a8;
  long **pplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long **pplStack_60;
  long **pplStack_58;
  
  pppplVar4 = param_1 + 2;
  pppplVar9 = (long ****)param_1[1];
  if (pppplVar9 < *pppplVar4) {
    pppplVar4 = pppplVar9;
    FUN_1082f8a4c(pppplVar9,param_2);
    pppplVar9 = pppplVar9 + 2;
    param_1[1] = (long ***)pppplVar9;
  }
  else {
    lVar10 = (long)pppplVar9 - (long)*param_1;
    uVar1 = (lVar10 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_1082f8a74();
      func_0x0001082f8b80(&ppplStack_a8);
      __Unwind_Resume();
      *(undefined4 *)param_1 = *param_2;
      FUN_1083a33c4(param_1 + 1,param_2 + 2);
      return param_1;
    }
    uVar5 = (long)*pppplVar4 - (long)*param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    ppplStack_88 = (long ***)pppplVar4;
    if (uVar7 == 0) {
      pppplVar6 = (long ****)0x0;
    }
    else {
      pppplVar6 = pppplVar4;
      FUN_1082f8a80();
    }
    lVar10 = (long)pppplVar6 + lVar10;
    ppplStack_a8 = (long ***)pppplVar6;
    pplStack_a0 = (long **)lVar10;
    ppplStack_98 = (long ***)lVar10;
    ppplStack_90 = (long ***)(pppplVar6 + uVar7 * 2);
    FUN_1082f8a4c(lVar10,param_2);
    pppplVar9 = (long ****)(lVar10 + 0x10);
    ppplVar11 = *param_1;
    ppplVar3 = param_1[1];
    ppplVar2 = (long ***)((long)ppplVar11 + (lVar10 - (long)ppplVar3));
    pplStack_78 = (long **)&pplStack_60;
    pplStack_70 = (long **)&pplStack_58;
    uStack_68 = 0;
    pplStack_58 = (long **)ppplVar2;
    ppplStack_98 = (long ***)pppplVar9;
    ppplStack_80 = (long ***)pppplVar4;
    pplStack_60 = (long **)ppplVar2;
    for (ppplVar8 = ppplVar11; ppplVar8 != ppplVar3; ppplVar8 = ppplVar8 + 2) {
      FUN_1082f8ac0(pplStack_58,ppplVar8);
      pplStack_58 = pplStack_58 + 2;
    }
    uStack_68 = 1;
    for (; ppplVar11 != ppplVar3; ppplVar11 = ppplVar11 + 2) {
      FUN_1083a3c7c(ppplVar11 + 1);
    }
    FUN_1082f8afc(&ppplStack_80);
    ppplStack_a8 = *param_1;
    *param_1 = ppplVar2;
    param_1[1] = (long ***)pppplVar9;
    ppplStack_90 = param_1[2];
    param_1[2] = (long ***)(pppplVar6 + uVar7 * 2);
    pppplVar4 = &ppplStack_a8;
    pplStack_a0 = (long **)ppplStack_a8;
    ppplStack_98 = ppplStack_a8;
    func_0x0001082f8b80(pppplVar4);
  }
  param_1[1] = (long ***)pppplVar9;
  return pppplVar4;
}



/* Entry: 1082f8a4c; end: 1082f8a73;  */

undefined4 * FUN_1082f8a4c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1083a33c4(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1082f8a74; end: 1082f8a7f;  */

void FUN_1082f8a74(void)

{
  func_0x0001082f8dc4();
  FUN_1082f8aa4();
  return;
}



/* Entry: 1082f8a80; end: 1082f8aa3;  */

void FUN_1082f8a80(void)

{
  FUN_1082f8aa4();
  return;
}



/* Entry: 1082f8aa4; end: 1082f8abf;  */

void FUN_1082f8aa4(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  if ((ulong)param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 2);
  if (lVar1 != 0 && lVar1 != 0x1138270b0) {
    do {
      func_0x0001082f9108();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 2) = lVar1;
  return;
}



/* Entry: 1082f8ac0; end: 1082f8afb;  */

void FUN_1082f8ac0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 2);
  if (lVar1 != 0 && lVar1 != 0x1138270b0) {
    do {
      func_0x0001082f9108();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(long *)(param_1 + 2) = lVar1;
  return;
}



/* Entry: 1082f8afc; end: 1082f8b2b;  */

long FUN_1082f8afc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1082f8b2c(param_1);
  }
  return param_1;
}



/* Entry: 1082f8b2c; end: 1082f8b4b;  */

void FUN_1082f8b2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x10) {
    FUN_1083a3c7c(lVar1 + -8);
  }
  return;
}



/* Entry: 1082f8b4c; end: 1082f8c27;  */

void FUN_1082f8b4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x10) {
    FUN_1083a3c7c(param_3 + -8);
  }
  return;
}



/* Entry: 1082f8c28; end: 1082f8c2f;  */

void FUN_1082f8c28(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082f8e5c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x10) {
    func_0x0001082f8e74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1082f8c30; end: 1082f8c6b;  */

void FUN_1082f8c30(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082f8e5c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x10) {
    func_0x0001082f8e74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1082f8c6c; end: 1082f8ccb;  */

undefined8 FUN_1082f8c6c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001082f8c98(&uStack_28);
  return param_1;
}



/* Entry: 1082f8ccc; end: 1082f8cd3;  */

void FUN_1082f8ccc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082f8e5c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x18) {
    func_0x0001082f8e74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1082f8cd4; end: 1082f8d0f;  */

void FUN_1082f8cd4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082f8e5c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x18) {
    func_0x0001082f8e74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1082f8d10; end: 1082f9197;  */

void FUN_1082f8d10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(long *)(param_1 + 0x18) + param_5,param_4,param_6);
  return;
}



/* Entry: 1082f9198; end: 1082f9237;  */

void FUN_1082f9198(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 0x38;
  __Znwm();
  plVar2 = (long *)*param_3;
  *param_3 = 0;
  FUN_1082f9238();
  *param_1 = uVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082f9200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1082f9238; end: 1082f92a3;  */

undefined8 * FUN_1082f9238(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  FUN_1082f92a4();
  param_1[1] = 0;
  param_1[2] = 0;
  *(short *)(param_1 + 3) = (short)puVar1;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_110a3a670;
  uVar2 = *param_2;
  *param_2 = 0;
  param_1[6] = uVar2;
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  return param_1;
}



/* Entry: 1082f92a4; end: 1082f9313;  */

int FUN_1082f92a4(void)

{
  int iVar1;
  
  if ((bRam0000000113254da0 & 1) == 0) {
    iVar1 = 0x13254da0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam0000000113254d98 = iVar1;
      ___cxa_guard_release(0x113254da0);
    }
  }
  return iRam0000000113254d98;
}


