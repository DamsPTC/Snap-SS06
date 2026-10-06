/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006e41ac; end: 006e4263;  */

uint FUN_006e41ac(long *param_1,ulong param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = 0;
  uVar6 = param_2;
  plVar2 = param_1;
  plVar3 = param_3;
  if (param_4 <= param_2) {
    uVar6 = param_4;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar1 = (uint)((ulong)*plVar2 >> 0x20);
    lVar7 = *plVar2 - *plVar3;
    uVar1 = ((uint)((ulong)lVar7 >> 0x20) ^ uVar1 | (uint)((ulong)*plVar3 >> 0x20) ^ uVar1) ^ uVar1;
    if (lVar7 != 0) {
      uVar5 = (int)uVar1 >> 0x1f | uVar1 >> 0x1f ^ 1;
    }
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  lVar7 = param_2 - param_4;
  if (param_2 < param_4) {
    uVar6 = 0;
    for (; param_2 < param_4; param_2 = param_2 + 1) {
      uVar6 = param_3[param_2] | uVar6;
    }
    if (uVar6 != 0) {
      uVar5 = 0xffffffff;
    }
    return uVar5;
  }
  if (lVar7 != 0) {
    uVar6 = 0;
    puVar4 = (ulong *)(param_1 + param_4);
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      uVar6 = *puVar4 | uVar6;
      puVar4 = puVar4 + 1;
    }
    uVar1 = 0;
    if (uVar6 == 0) {
      uVar1 = uVar5;
    }
    uVar5 = uVar1 | uVar6 != 0;
  }
  return uVar5;
}



/* Entry: 006e4264; end: 006e42bf;  */

uint FUN_006e4264(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      FUN_006e34dc();
      uVar2 = -(uint)param_1;
      if (iVar1 == 0) {
        uVar2 = (uint)param_1;
      }
    }
    else {
      uVar2 = 0xffffffff;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  uVar2 = (uint)(param_2 != 0);
  if (param_1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 006e42c0; end: 006e42e3;  */

ulong FUN_006e42c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_006e41ac(param_1,param_3,param_2);
  return param_1 >> 0x1f & 1;
}



/* Entry: 006e42e4; end: 006e431f;  */

bool FUN_006e42e4(long *param_1,ulong param_2)

{
  long lVar1;
  
  if ((int)param_1[1] != 0) {
    param_2 = *(ulong *)*param_1 ^ param_2;
    for (lVar1 = 1; lVar1 < (int)param_1[1]; lVar1 = lVar1 + 1) {
      param_2 = ((ulong *)*param_1)[lVar1] | param_2;
    }
  }
  return param_2 == 0;
}



/* Entry: 006e4320; end: 006e435b;  */

void FUN_006e4320(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0x200000000;
  puStack_30 = &uStack_18;
  uStack_28 = 0x100000001;
  uStack_18 = param_2;
  FUN_006e4264(param_1,&puStack_30);
  return;
}



/* Entry: 006e435c; end: 006e436f;  */

bool FUN_006e435c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((int)param_1[2] != 0) {
    return false;
  }
  uVar1 = 1;
  if ((int)param_1[1] != 0) {
    uVar1 = *(ulong *)*param_1 ^ 1;
    for (lVar2 = 1; lVar2 < (int)param_1[1]; lVar2 = lVar2 + 1) {
      uVar1 = ((ulong *)*param_1)[lVar2] | uVar1;
    }
  }
  return uVar1 == 0;
}



/* Entry: 006e4370; end: 006e43a7;  */

void FUN_006e4370(void)

{
  func_0x006fda04();
  FUN_006e42e4();
  return;
}



/* Entry: 006e43a8; end: 006e444f;  */

bool FUN_006e43a8(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)(param_2 + 1);
  lVar4 = (long)(int)uVar2;
  for (lVar5 = (long)(int)uVar1; lVar5 < lVar4; lVar5 = lVar5 + 1) {
    uVar3 = *(ulong *)(*param_2 + lVar5 * 8) | uVar3;
  }
  for (; lVar4 < (int)uVar1; lVar4 = lVar4 + 1) {
    uVar3 = *(ulong *)(*param_1 + lVar4 * 8) | uVar3;
  }
  lVar5 = 0;
  if ((int)uVar2 <= (int)uVar1) {
    uVar1 = uVar2;
  }
  for (; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 3 != lVar5; lVar5 = lVar5 + 8) {
    uVar3 = *(ulong *)(*param_2 + lVar5) ^ *(ulong *)(*param_1 + lVar5) | uVar3;
  }
  return uVar3 == 0 && (int)param_2[2] == (int)param_1[2];
}



/* Entry: 006e4450; end: 006e44cf;  */

char * FUN_006e4450(void)

{
  char *pcVar1;
  
  pcVar1 = segment_command_00000020.segname + 8;
  FUN_00701e90();
  if (pcVar1 == (char *)0x0) {
    func_0x006fd520(3);
  }
  else {
    *(undefined8 *)(pcVar1 + 0x22) = 0;
    *(undefined8 *)(pcVar1 + 0x1a) = 0;
    *(qword *)(pcVar1 + 8) = 0;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *(qword *)(pcVar1 + 0x18) = 0;
    *(qword *)(pcVar1 + 0x10) = 0;
  }
  return pcVar1;
}



/* Entry: 006e44d0; end: 006e456b;  */

void FUN_006e44d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == *(ulong *)(param_1 + 0x18)) {
    uVar1 = 0x20;
    if (uVar4 != 0) {
      uVar1 = uVar4 * 3 >> 1;
    }
    if (uVar4 < uVar1 && uVar1 >> 0x3d == 0) {
      lVar3 = *(long *)(param_1 + 8);
      FUN_00701f14(lVar3,uVar1 << 3);
      if (lVar3 != 0) {
        *(long *)(param_1 + 8) = lVar3;
        *(ulong *)(param_1 + 0x18) = uVar1;
        uVar4 = *(ulong *)(param_1 + 0x10);
        goto LAB_006e4548;
      }
    }
    *(undefined2 *)(param_1 + 0x28) = 0x101;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
LAB_006e4548:
    *(undefined8 *)(lVar3 + uVar4 * 8) = uVar2;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 006e456c; end: 006e463f;  */

long FUN_006e456c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((char)param_1[5] != '\0') {
    if (*(char *)((long)param_1 + 0x29) != '\0') {
      func_0x006fd894();
      func_0x006fd5dc();
      *(undefined1 *)((long)param_1 + 0x29) = 0;
      return 0;
    }
    return 0;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    FUN_00705ed8();
    *param_1 = (long)plVar1;
    if (plVar1 == (long *)0x0) {
      func_0x006fd520(3);
      goto LAB_006e462c;
    }
  }
  lVar3 = param_1[4];
  if (lVar3 == *plVar1) {
    FUN_006e3c80();
    if (plVar1 != (long *)0x0) {
      lVar3 = *param_1;
      func_0x00706268(lVar3,plVar1);
      if (lVar3 != 0) {
        plVar1 = (long *)*param_1;
        lVar3 = param_1[4];
        goto LAB_006e45ec;
      }
    }
    func_0x006fd894();
    func_0x006fd5dc();
    func_0x006fe908();
LAB_006e462c:
    *(undefined1 *)(param_1 + 5) = 1;
    return 0;
  }
LAB_006e45ec:
  lVar2 = *(long *)(plVar1[1] + lVar3 * 8);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 8) = 0;
  param_1[4] = lVar3 + 1;
  return lVar2;
}



/* Entry: 006e4640; end: 006e4663;  */

void FUN_006e4640(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10) + -1;
  *(long *)(param_1 + 0x10) = lVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 8) + lVar1 * 8);
  return;
}



/* Entry: 006e4664; end: 006e4a23;  */

undefined8
FUN_006e4664(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long unaff_x20;
  long *unaff_x21;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  
  plVar10 = param_3;
  func_0x006fdb2c();
  FUN_006e3c4c();
  plVar11 = param_4;
  FUN_006e3c4c();
  if ((((int)plVar10 < 1) || (*(long *)(*param_3 + ((ulong)plVar10 & 0xffffffff) * 8 + -8) != 0)) &&
     (((int)plVar11 < 1 || (*(long *)(*param_4 + ((ulong)plVar11 & 0xffffffff) * 8 + -8) != 0)))) {
    plVar11 = param_4;
    FUN_006e3858();
    if ((int)plVar11 == 0) {
      func_0x006fda24();
      func_0x006fd82c();
      plVar10 = plVar11;
      func_0x006fd82c();
      plVar12 = plVar10;
      func_0x006fd82c();
      if (unaff_x21 == (long *)0x0) {
        unaff_x21 = plVar12;
        func_0x006fd82c();
      }
      if ((plVar12 != (long *)0x0) && (unaff_x21 != (long *)0x0)) {
        plVar13 = param_4;
        FUN_006e3e84();
        uVar1 = (uint)plVar13 & 0x3f;
        plVar13 = plVar12;
        FUN_006e4a24(plVar12,param_4,0x40 - uVar1);
        if ((int)plVar13 != 0) {
          FUN_006e374c(plVar12);
          *(undefined4 *)(plVar12 + 2) = 0;
          plVar13 = plVar10;
          FUN_006e4a24(plVar10,param_3);
          iVar9 = (int)plVar13;
          if (iVar9 != 0) {
            func_0x006fe654();
            *(undefined4 *)((ulong)uVar1 + 0x10) = 0;
            if ((int)plVar12[1] + 1 < *(int *)((ulong)uVar1 + 8)) {
              func_0x006fe3f8();
              if (iVar9 == 0) goto LAB_006e49fc;
              lVar18 = *plVar10;
              lVar24 = plVar10[1];
              *(undefined8 *)(lVar18 + (long)(int)lVar24 * 8) = 0;
              uVar20 = (ulong)((int)lVar24 + 1);
            }
            else {
              func_0x006fe3f8();
              if (iVar9 == 0) goto LAB_006e49fc;
              uVar20 = (long)(int)plVar12[1] + 2;
              lVar18 = *plVar10;
              for (lVar24 = (long)(int)plVar10[1]; lVar24 < (long)uVar20; lVar24 = lVar24 + 1) {
                *(undefined8 *)(lVar18 + lVar24 * 8) = 0;
              }
            }
            iVar19 = (int)uVar20;
            *(int *)(plVar10 + 1) = iVar19;
            iVar9 = (int)plVar12[1];
            lVar14 = (long)iVar9;
            iVar4 = iVar19 - iVar9;
            lVar24 = *plVar12 + lVar14 * 8;
            if (iVar9 == 1) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(ulong *)(lVar24 + -0x10);
            }
            uVar25 = *(ulong *)(lVar24 + -8);
            uVar2 = *(uint *)(param_3 + 2);
            *(uint *)(unaff_x21 + 2) = *(uint *)(param_4 + 2) ^ uVar2;
            plVar10 = unaff_x21;
            FUN_006e35dc(unaff_x21,(long)(iVar4 + 1));
            if ((int)plVar10 != 0) {
              uVar3 = iVar4 - 1;
              *(uint *)(unaff_x21 + 1) = uVar3;
              lVar24 = *unaff_x21;
              plVar10 = plVar11;
              FUN_006e35dc();
              if ((int)plVar10 != 0) {
                lVar27 = lVar18 + (long)iVar4 * 8;
                puVar16 = (ulong *)(lVar24 + (long)(int)uVar3 * 8);
                if ((int)unaff_x21[1] == 0) {
                  *(undefined4 *)(unaff_x21 + 2) = 0;
                }
                else {
                  puVar16 = puVar16 + -1;
                }
                puVar7 = (ulong *)(lVar18 + (long)iVar19 * 8);
                for (uVar23 = 0; puVar22 = puVar7 + -1,
                    uVar23 != (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar23 = uVar23 + 1) {
                  if (*puVar22 == uVar25) {
                    uVar21 = 0xffffffffffffffff;
                  }
                  else {
                    uVar26 = puVar7[-2];
                    uVar21 = uVar26;
                    ___udivti3(uVar26,*puVar22,uVar25,0);
                    uVar26 = uVar26 - uVar25 * uVar21;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = uVar21;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar20;
                    uVar15 = SUB168(auVar5 * auVar6,8);
                    uVar17 = uVar21 * uVar20;
                    do {
                      if (CARRY8(uVar26,~uVar15) ||
                          CARRY8(uVar26 + ~uVar15,(ulong)(uVar17 <= puVar7[-3]))) break;
                      uVar21 = uVar21 - 1;
                      bVar8 = uVar17 < uVar20;
                      uVar17 = uVar17 - uVar20;
                      uVar15 = uVar15 - bVar8;
                      bVar8 = CARRY8(uVar26,uVar25);
                      uVar26 = uVar26 + uVar25;
                    } while (!bVar8);
                  }
                  lVar24 = *plVar11;
                  FUN_006e4b24(lVar24,*plVar12,lVar14,uVar21);
                  lVar18 = *plVar11;
                  *(long *)(lVar18 + lVar14 * 8) = lVar24;
                  lVar27 = lVar27 + -8;
                  lVar24 = lVar27;
                  func_0x006e3b2c(lVar27,lVar27,lVar18,(long)(iVar9 + 1));
                  if (lVar24 != 0) {
                    uVar21 = uVar21 - 1;
                    lVar24 = lVar27;
                    FUN_006e3678(lVar27,lVar27,*plVar12,lVar14);
                    if (lVar24 != 0) {
                      *puVar22 = *puVar22 + 1;
                    }
                  }
                  *puVar16 = uVar21;
                  puVar16 = puVar16 + -1;
                  puVar7 = puVar22;
                }
                func_0x006fe654();
                if (unaff_x20 != 0) {
                  lVar24 = unaff_x20;
                  FUN_006e4bd4(unaff_x20,uVar20,0x80 - uVar1);
                  if ((int)lVar24 == 0) goto LAB_006e49fc;
                  lVar24 = unaff_x20;
                  FUN_006e3858();
                  if ((int)lVar24 == 0) {
                    *(uint *)(unaff_x20 + 0x10) = uVar2;
                  }
                }
                FUN_006e374c(unaff_x21);
                FUN_006e4640(param_5);
                return 1;
              }
            }
          }
        }
      }
LAB_006e49fc:
      FUN_006e4640(param_5);
      return 0;
    }
    func_0x006fd894();
  }
  else {
    func_0x006fd894();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006e4a24; end: 006e4b23;  */

void FUN_006e4a24(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  int iVar7;
  ulong uVar8;
  
  if ((int)(uint)param_3 < 0) {
    func_0x006fd6a0();
    func_0x006fd5dc();
  }
  else {
    uVar8 = param_3;
    func_0x006fda04();
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar8 = uVar8 >> 6 & 0x3ffffff;
    iVar7 = (int)uVar8;
    FUN_006e35dc();
    if ((int)param_1 != 0) {
      lVar4 = *unaff_x20;
      lVar3 = *unaff_x19;
      uVar6 = (ulong)*(uint *)(unaff_x20 + 1);
      *(undefined8 *)(lVar3 + (long)(int)(*(uint *)(unaff_x20 + 1) + iVar7) * 8) = 0;
      uVar2 = (uint)param_3 & 0x3f;
      if ((param_3 & 0x3f) == 0) {
        while (iVar5 = (int)uVar6, 0 < iVar5) {
          uVar6 = uVar6 - 1;
          *(undefined8 *)
           (lVar3 + (ulong)(uint)((int)((param_3 & 0xffffffff) >> 6) + -1 + iVar5) * 8) =
               *(undefined8 *)(lVar4 + (uVar6 & 0xffffffff) * 8);
        }
      }
      else {
        lVar1 = lVar3 + uVar8 * 8;
        while (0 < (int)uVar6) {
          uVar8 = *(ulong *)(lVar4 + (uVar6 - 1 & 0xffffffff) * 8);
          *(ulong *)(lVar1 + uVar6 * 8) =
               *(ulong *)(lVar1 + uVar6 * 8) | uVar8 >> ((ulong)(0x40 - uVar2) & 0x3f);
          *(ulong *)(lVar3 + (ulong)(uint)(iVar7 + -1 + (int)uVar6) * 8) = uVar8 << uVar2;
          uVar6 = uVar6 - 1;
        }
      }
      func_0x006fd9c0();
      *(int *)(unaff_x19 + 1) = (int)unaff_x20[1] + iVar7 + 1;
      func_0x006fdd4c();
    }
  }
  return;
}



/* Entry: 006e4b24; end: 006e4bd3;  */

ulong FUN_006e4b24(long *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = 0;
  if (param_3 != 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar13 = SUB168(auVar1 * auVar6,8);
      uVar12 = *param_2 * param_4;
      if (CARRY8(uVar12,uVar11)) {
        uVar13 = uVar13 + 1;
      }
      *param_1 = uVar12 + uVar11;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar11 = SUB168(auVar2 * auVar7,8);
      uVar12 = param_2[1] * param_4;
      if (CARRY8(uVar12,uVar13)) {
        uVar11 = uVar11 + 1;
      }
      param_1[1] = uVar12 + uVar13;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar13 = SUB168(auVar3 * auVar8,8);
      uVar12 = param_2[2] * param_4;
      if (CARRY8(uVar12,uVar11)) {
        uVar13 = uVar13 + 1;
      }
      param_1[2] = uVar12 + uVar11;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar11 = SUB168(auVar4 * auVar9,8);
      uVar12 = param_2[3] * param_4;
      if (CARRY8(uVar12,uVar13)) {
        uVar11 = uVar11 + 1;
      }
      param_1[3] = uVar12 + uVar13;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar13 = 0; param_3 != uVar13; uVar13 = uVar13 + 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2[uVar13];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      uVar12 = SUB168(auVar5 * auVar10,8);
      uVar14 = param_2[uVar13] * param_4;
      if (CARRY8(uVar14,uVar11)) {
        uVar12 = uVar12 + 1;
      }
      param_1[uVar13] = uVar14 + uVar11;
      uVar11 = uVar12;
    }
  }
  return uVar11;
}



/* Entry: 006e4bd4; end: 006e4c33;  */

void FUN_006e4bd4(int param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 0) {
    func_0x006fd6a0();
    func_0x006fd5dc();
  }
  else {
    func_0x006fda04();
    FUN_006e35dc();
    if (param_1 != 0) {
      func_0x006fe9a0();
      FUN_006e977c();
      func_0x006feab4();
      func_0x006feac0();
      func_0x006fdd4c();
    }
  }
  return;
}



/* Entry: 006e4c34; end: 006e4ca7;  */

void FUN_006e4c34(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = 0;
  FUN_006e4664(0,param_1,param_2,param_3,param_4);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    UNRECOVERED_JUMPTABLE = FUN_006e344c;
    if (*(int *)(param_3 + 0x10) != 0) {
      UNRECOVERED_JUMPTABLE = FUN_006e3994;
    }
    func_0x006fdbc4(param_1);
                    /* WARNING: Could not recover jumptable at 0x006e4c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 006e4ca8; end: 006e4cef;  */

long FUN_006e4ca8(void)

{
  long in_x3;
  long unaff_x21;
  
  func_0x006fde00();
  func_0x006e3b2c(in_x3);
  func_0x006fdc14();
  FUN_006e4030();
  return unaff_x21 - in_x3;
}



/* Entry: 006e4cf0; end: 006e4d43;  */

void FUN_006e4cf0(long param_1)

{
  ulong *puVar1;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x22;
  
  func_0x006fe598();
  func_0x006e3b2c();
  func_0x006fdbf0();
  FUN_006e3678();
  puVar1 = unaff_x22;
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    *puVar1 = *unaff_x22 & ~-param_1 | *unaff_x20 & -param_1;
    unaff_x22 = unaff_x22 + 1;
    puVar1 = puVar1 + 1;
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 006e4d44; end: 006e4d77;  */

long FUN_006e4d44(void)

{
  long in_x3;
  long unaff_x21;
  undefined8 unaff_x22;
  
  func_0x006fe598();
  FUN_006e3678();
  func_0x006fdb54();
  func_0x006fde00();
  func_0x006e3b2c(in_x3,unaff_x22);
  func_0x006fdc14();
  FUN_006e4030();
  return unaff_x21 - in_x3;
}



/* Entry: 006e4d78; end: 006e4f97;  */

undefined8
FUN_006e4d78(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,int param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  func_0x006fdcd0();
  if (((int)param_3[2] != 0) || ((int)param_4[2] != 0)) {
    func_0x006fd6a0();
LAB_006e4da4:
    func_0x006fd5dc();
    return 0;
  }
  func_0x006fdb2c();
  plVar2 = param_4;
  FUN_006e3858();
  if ((int)plVar2 != 0) {
    func_0x006fd894();
    goto LAB_006e4da4;
  }
  func_0x006fda24();
  if ((unaff_x21 == (long *)0x0) ||
     (plVar7 = unaff_x21, unaff_x21 == param_3 || unaff_x21 == param_4)) {
    func_0x006fd82c();
    plVar7 = plVar2;
  }
  if ((unaff_x20 == (long *)0x0) ||
     (plVar8 = unaff_x20, unaff_x20 == param_3 || unaff_x20 == param_4)) {
    func_0x006fd82c();
    plVar8 = plVar2;
  }
  func_0x006fd82c();
  uVar9 = 0;
  if (((plVar7 == (long *)0x0) || (plVar8 == (long *)0x0)) || (plVar2 == (long *)0x0))
  goto LAB_006e4f90;
  plVar3 = plVar7;
  FUN_006e35dc(plVar7,(long)(int)param_3[1]);
  if ((((int)plVar3 != 0) &&
      (plVar3 = plVar8, FUN_006e35dc(plVar8,(long)(int)param_4[1]), (int)plVar3 != 0)) &&
     (plVar3 = plVar2, FUN_006e35dc(plVar2,(long)(int)param_4[1]), (int)plVar3 != 0)) {
    func_0x006fd9c0(*plVar7);
    *(int *)(plVar7 + 1) = (int)param_3[1];
    *(undefined4 *)(plVar7 + 2) = 0;
    puVar4 = (ulong *)*plVar8;
    func_0x006fd9c0();
    *(int *)(plVar8 + 1) = (int)param_4[1];
    *(undefined4 *)(plVar8 + 2) = 0;
    if (param_5 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = param_5 - 1U >> 6;
      uVar1 = *(uint *)(param_3 + 1);
      if ((int)uVar1 <= (int)uVar6) {
        uVar6 = uVar1;
      }
      puVar4 = (ulong *)*plVar8;
      func_0x006e3440(puVar4,*param_3 + (long)(int)uVar1 * 8 + (long)(int)uVar6 * -8,
                      -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
      uVar6 = ~uVar6;
    }
    for (uVar6 = (int)param_3[1] + uVar6; -1 < (int)uVar6; uVar6 = uVar6 - 1) {
      uVar10 = 0x3f;
      do {
        lVar5 = *plVar8;
        FUN_006e3678(lVar5,lVar5,lVar5,(long)(int)param_4[1]);
        puVar4 = (ulong *)*plVar8;
        *puVar4 = *puVar4 | *(ulong *)(*param_3 + (ulong)uVar6 * 8) >> (uVar10 & 0x3f) & 1;
        FUN_006e4ca8(puVar4,lVar5,*param_4,*plVar2,(long)(int)param_4[1]);
        *(ulong *)(*plVar7 + (ulong)uVar6 * 8) =
             ((ulong)~(uint)puVar4 & 1) << (uVar10 & 0x3f) | *(ulong *)(*plVar7 + (ulong)uVar6 * 8);
        uVar1 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar1;
      } while (-1 < (int)uVar1);
    }
    if (unaff_x21 != (long *)0x0) {
      func_0x006fea04();
      func_0x006e3d58();
      if (puVar4 == (ulong *)0x0) goto LAB_006e4f8c;
    }
    if ((unaff_x20 == (long *)0x0) || (func_0x006e3d58(), unaff_x20 != (long *)0x0)) {
      uVar9 = 1;
      goto LAB_006e4f90;
    }
  }
LAB_006e4f8c:
  uVar9 = 0;
LAB_006e4f90:
  func_0x006fd8f4();
  return uVar9;
}



/* Entry: 006e4f98; end: 006e4fff;  */

undefined8 FUN_006e4f98(long param_1)

{
  long unaff_x22;
  long unaff_x23;
  
  func_0x006fe858();
  func_0x006fdce8();
  func_0x006fe2b8();
  func_0x006fe048();
  func_0x006fe24c();
  if ((((unaff_x22 != 0) && (unaff_x23 != 0)) && (param_1 != 0)) &&
     (func_0x006fe3f8(), (int)param_1 != 0)) {
    func_0x006fe28c();
    FUN_006e4d44();
    func_0x006fea8c();
  }
  func_0x006fd8f4();
  return 0;
}



/* Entry: 006e5000; end: 006e5067;  */

ulong FUN_006e5000(ulong param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((ulong)(long)*(int *)(param_1 + 8) < param_2) {
    FUN_006e5068(param_2,param_3);
    if ((param_2 == 0) || (uVar2 = param_2, func_0x006e3d58(), uVar2 == 0)) {
      param_1 = 0;
    }
    else {
      func_0x006fdc54();
      iVar1 = (int)uVar2;
      FUN_006e3fc8();
      param_1 = 0;
      if (iVar1 != 0) {
        param_1 = param_2;
      }
    }
  }
  return param_1;
}



/* Entry: 006e5068; end: 006e50af;  */

long FUN_006e5068(undefined4 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_006e456c();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x006fd9d0();
    iVar1 = (int)lVar2;
    FUN_006e35dc();
    if (iVar1 == 0) {
      param_2 = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 8) = param_1;
    }
  }
  return param_2;
}



/* Entry: 006e50b0; end: 006e5117;  */

undefined8 FUN_006e50b0(long param_1)

{
  long unaff_x22;
  long unaff_x23;
  
  func_0x006fe858();
  func_0x006fdce8();
  func_0x006fe2b8();
  func_0x006fe048();
  func_0x006fe24c();
  if ((((unaff_x22 != 0) && (unaff_x23 != 0)) && (param_1 != 0)) &&
     (func_0x006fe3f8(), (int)param_1 != 0)) {
    func_0x006fe28c();
    FUN_006e4cf0();
    func_0x006fea8c();
  }
  func_0x006fd8f4();
  return 0;
}



/* Entry: 006e5118; end: 006e51ab;  */

bool FUN_006e5118(long param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  func_0x006fdf8c();
  func_0x006fe040();
  func_0x006fd82c();
  if (param_1 == 0) {
LAB_006e5198:
    bVar1 = false;
  }
  else {
    if (param_2 == param_3) {
      FUN_006e51ac();
      iVar2 = (int)param_1;
      if (iVar2 == 0) goto LAB_006e5198;
    }
    else {
      lVar3 = param_1;
      FUN_006e8448();
      if ((int)lVar3 == 0) goto LAB_006e5198;
      FUN_006e374c(param_1);
      iVar2 = (int)param_1;
    }
    func_0x006fe0d8();
    func_0x006fdea4();
    bVar1 = iVar2 != 0;
  }
  func_0x006fd8f4();
  return bVar1;
}



/* Entry: 006e51ac; end: 006e51d3;  */

void FUN_006e51ac(int param_1)

{
  FUN_006e8794();
  if (param_1 != 0) {
    func_0x006fdd4c();
  }
  return;
}



/* Entry: 006e51d4; end: 006e521b;  */

undefined8
FUN_006e51d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
            undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long unaff_x20;
  long lVar20;
  long *unaff_x21;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  
  func_0x006fe0f0();
  uVar15 = param_1;
  plVar14 = param_4;
  FUN_006e51ac();
  if ((int)uVar15 == 0) {
    return uVar15;
  }
  func_0x006fdb54(0,param_1);
  plVar10 = param_4;
  func_0x006fdb2c();
  FUN_006e3c4c();
  plVar11 = plVar14;
  FUN_006e3c4c();
  if ((((int)plVar10 < 1) || (*(long *)(*param_4 + ((ulong)plVar10 & 0xffffffff) * 8 + -8) != 0)) &&
     (((int)plVar11 < 1 || (*(long *)(*plVar14 + ((ulong)plVar11 & 0xffffffff) * 8 + -8) != 0)))) {
    plVar11 = plVar14;
    FUN_006e3858();
    if ((int)plVar11 == 0) {
      func_0x006fda24();
      func_0x006fd82c();
      plVar10 = plVar11;
      func_0x006fd82c();
      plVar12 = plVar10;
      func_0x006fd82c();
      if (unaff_x21 == (long *)0x0) {
        unaff_x21 = plVar12;
        func_0x006fd82c();
      }
      if ((plVar12 != (long *)0x0) && (unaff_x21 != (long *)0x0)) {
        plVar13 = plVar14;
        FUN_006e3e84();
        uVar1 = (uint)plVar13 & 0x3f;
        plVar13 = plVar12;
        FUN_006e4a24(plVar12,plVar14,0x40 - uVar1);
        if ((int)plVar13 != 0) {
          FUN_006e374c(plVar12);
          *(undefined4 *)(plVar12 + 2) = 0;
          plVar13 = plVar10;
          FUN_006e4a24(plVar10,param_4);
          iVar9 = (int)plVar13;
          if (iVar9 != 0) {
            func_0x006fe654();
            *(undefined4 *)((ulong)uVar1 + 0x10) = 0;
            if ((int)plVar12[1] + 1 < *(int *)((ulong)uVar1 + 8)) {
              func_0x006fe3f8();
              if (iVar9 == 0) goto LAB_006e49fc;
              lVar20 = *plVar10;
              lVar26 = plVar10[1];
              *(undefined8 *)(lVar20 + (long)(int)lVar26 * 8) = 0;
              uVar22 = (ulong)((int)lVar26 + 1);
            }
            else {
              func_0x006fe3f8();
              if (iVar9 == 0) goto LAB_006e49fc;
              uVar22 = (long)(int)plVar12[1] + 2;
              lVar20 = *plVar10;
              for (lVar26 = (long)(int)plVar10[1]; lVar26 < (long)uVar22; lVar26 = lVar26 + 1) {
                *(undefined8 *)(lVar20 + lVar26 * 8) = 0;
              }
            }
            iVar21 = (int)uVar22;
            *(int *)(plVar10 + 1) = iVar21;
            iVar9 = (int)plVar12[1];
            lVar16 = (long)iVar9;
            iVar4 = iVar21 - iVar9;
            lVar26 = *plVar12 + lVar16 * 8;
            if (iVar9 == 1) {
              uVar22 = 0;
            }
            else {
              uVar22 = *(ulong *)(lVar26 + -0x10);
            }
            uVar27 = *(ulong *)(lVar26 + -8);
            uVar2 = *(uint *)(param_4 + 2);
            *(uint *)(unaff_x21 + 2) = *(uint *)(plVar14 + 2) ^ uVar2;
            plVar14 = unaff_x21;
            FUN_006e35dc(unaff_x21,(long)(iVar4 + 1));
            if ((int)plVar14 != 0) {
              uVar3 = iVar4 - 1;
              *(uint *)(unaff_x21 + 1) = uVar3;
              lVar26 = *unaff_x21;
              plVar14 = plVar11;
              FUN_006e35dc();
              if ((int)plVar14 != 0) {
                lVar29 = lVar20 + (long)iVar4 * 8;
                puVar18 = (ulong *)(lVar26 + (long)(int)uVar3 * 8);
                if ((int)unaff_x21[1] == 0) {
                  *(undefined4 *)(unaff_x21 + 2) = 0;
                }
                else {
                  puVar18 = puVar18 + -1;
                }
                puVar7 = (ulong *)(lVar20 + (long)iVar21 * 8);
                for (uVar25 = 0; puVar24 = puVar7 + -1,
                    uVar25 != (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar25 = uVar25 + 1) {
                  if (*puVar24 == uVar27) {
                    uVar23 = 0xffffffffffffffff;
                  }
                  else {
                    uVar28 = puVar7[-2];
                    uVar23 = uVar28;
                    ___udivti3(uVar28,*puVar24,uVar27,0);
                    uVar28 = uVar28 - uVar27 * uVar23;
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = uVar23;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar22;
                    uVar17 = SUB168(auVar5 * auVar6,8);
                    uVar19 = uVar23 * uVar22;
                    do {
                      if (CARRY8(uVar28,~uVar17) ||
                          CARRY8(uVar28 + ~uVar17,(ulong)(uVar19 <= puVar7[-3]))) break;
                      uVar23 = uVar23 - 1;
                      bVar8 = uVar19 < uVar22;
                      uVar19 = uVar19 - uVar22;
                      uVar17 = uVar17 - bVar8;
                      bVar8 = CARRY8(uVar28,uVar27);
                      uVar28 = uVar28 + uVar27;
                    } while (!bVar8);
                  }
                  lVar26 = *plVar11;
                  FUN_006e4b24(lVar26,*plVar12,lVar16,uVar23);
                  lVar20 = *plVar11;
                  *(long *)(lVar20 + lVar16 * 8) = lVar26;
                  lVar29 = lVar29 + -8;
                  lVar26 = lVar29;
                  func_0x006e3b2c(lVar29,lVar29,lVar20,(long)(iVar9 + 1));
                  if (lVar26 != 0) {
                    uVar23 = uVar23 - 1;
                    lVar26 = lVar29;
                    FUN_006e3678(lVar29,lVar29,*plVar12,lVar16);
                    if (lVar26 != 0) {
                      *puVar24 = *puVar24 + 1;
                    }
                  }
                  *puVar18 = uVar23;
                  puVar18 = puVar18 + -1;
                  puVar7 = puVar24;
                }
                func_0x006fe654();
                if (unaff_x20 != 0) {
                  lVar26 = unaff_x20;
                  FUN_006e4bd4(unaff_x20,uVar22,0x80 - uVar1);
                  if ((int)lVar26 == 0) goto LAB_006e49fc;
                  lVar26 = unaff_x20;
                  FUN_006e3858();
                  if ((int)lVar26 == 0) {
                    *(uint *)(unaff_x20 + 0x10) = uVar2;
                  }
                }
                FUN_006e374c(unaff_x21);
                FUN_006e4640(param_5);
                return 1;
              }
            }
          }
        }
      }
LAB_006e49fc:
      FUN_006e4640(param_5);
      return 0;
    }
    func_0x006fd894();
  }
  else {
    func_0x006fd894();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006e521c; end: 006e522b;  */

undefined8 FUN_006e521c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  long unaff_x23;
  
  func_0x006fe858(param_1,param_2,param_2,param_3,param_4);
  func_0x006fdce8();
  func_0x006fe2b8();
  func_0x006fe048();
  func_0x006fe24c();
  if ((((unaff_x22 != 0) && (unaff_x23 != 0)) && (param_1 != 0)) &&
     (func_0x006fe3f8(), (int)param_1 != 0)) {
    func_0x006fe28c();
    FUN_006e4d44();
    func_0x006fea8c();
  }
  func_0x006fd8f4();
  return 0;
}



/* Entry: 006e522c; end: 006e52eb;  */

ulong FUN_006e522c(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 != 0) {
    func_0x006fe858();
    if ((int)param_1[1] == 0) {
      uVar6 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x006e3dfc();
      iVar1 = (int)lVar3;
      iVar2 = iVar1;
      func_0x006fe574();
      FUN_006e4a24();
      if (iVar2 == 0) {
        uVar6 = 0xffffffffffffffff;
      }
      else {
        uVar6 = 0;
        param_2 = param_2 << ((ulong)(uint)-iVar1 & 0x3f);
        for (uVar5 = (ulong)*(uint *)(param_1 + 1); 0 < (int)uVar5; uVar5 = uVar5 - 1) {
          lVar3 = *param_1 + uVar5 * 8;
          lVar7 = *(long *)(lVar3 + -8);
          lVar4 = lVar7;
          ___udivti3(lVar7,uVar6,param_2,0);
          uVar6 = lVar7 - param_2 * lVar4;
          *(long *)(lVar3 + -8) = lVar4;
        }
        func_0x006fdd4c();
        uVar6 = uVar6 >> ((ulong)(0x40 - iVar1) & 0x3f);
      }
    }
    return uVar6;
  }
  return 0xffffffffffffffff;
}



/* Entry: 006e52ec; end: 006e535f;  */

uint FUN_006e52ec(long param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = param_1 << 0x20 | (ulong)param_2;
  iVar3 = (int)(uVar2 >> 0x10);
  iVar4 = (int)((ulong)param_5 * (uVar2 >> 0x10 & 0xffffffff) >> 0x20);
  uVar1 = param_2 & 0xffff |
          (iVar3 - (iVar4 + ((uint)(iVar3 - iVar4) >> 1) >> (ulong)(param_4 - 1U & 0x1f)) * param_3)
          * 0x10000;
  iVar3 = (int)((ulong)uVar1 * (ulong)param_5 >> 0x20);
  return param_2 - (iVar3 + (uVar1 - iVar3 >> 1) >> (ulong)(param_4 - 1U & 0x1f)) * param_3 & 0xffff
  ;
}



/* Entry: 006e5360; end: 006e567f;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_006e5360(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *apuStack_170 [34];
  
  func_0x006fd588();
  uVar3 = *(int *)(param_4 + 1) == 1;
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    func_0x006fd894();
LAB_006e53f0:
    func_0x006fd5dc();
    puVar14 = (undefined8 *)0x0;
    param_4 = param_1;
LAB_006e53f8:
    func_0x006fd508();
    if ((bool)uVar3) {
      return puVar14;
    }
  }
  else {
    if (*(int *)(param_4 + 2) != 0) {
      func_0x006fd6a0();
      goto LAB_006e53f0;
    }
    puVar6 = param_1;
    if ((*(int *)(param_2 + 2) != 0) ||
       (puVar6 = param_2, FUN_006e34dc(param_2,param_4), -1 < (int)puVar6)) {
      param_1 = puVar6;
      func_0x006fd894();
      goto LAB_006e53f0;
    }
    func_0x006fe940();
    iVar4 = (int)puVar6;
    if (iVar4 != 0) {
      puVar7 = puVar6;
      func_0x006fda24();
      func_0x006fd82c();
      puVar8 = puVar7;
      func_0x006fd82c();
      puVar10 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)0x0;
      apuStack_170[0] = puVar8;
      if ((puVar7 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
        if (param_6 == (undefined8 *)0x0) {
          FUN_006e5680(param_4,param_5);
          puVar10 = param_4;
          if (param_4 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)0x0;
            goto LAB_006e5668;
          }
        }
        else {
          puVar10 = (undefined8 *)0x0;
          param_4 = param_6;
        }
        FUN_006e5744();
        func_0x006fe714(puVar8,param_2);
        if ((int)puVar8 != 0) {
          uVar12 = (uint)puVar6;
          uVar3 = uVar12 == 2;
          if (uVar12 < 2) {
LAB_006e5550:
            bVar2 = false;
            uVar16 = iVar4 - 1;
            while( true ) {
              while( true ) {
                uVar9 = param_3;
                func_0x006e5334(param_3,uVar16);
                iVar4 = (int)uVar9;
                if (iVar4 == 0) break;
                uVar11 = 0;
                uVar13 = 1;
                for (uVar17 = 1; uVar3 = uVar17 < uVar12 && uVar17 == uVar16,
                    uVar17 < uVar12 && (int)uVar17 <= (int)uVar16; uVar17 = uVar17 + 1) {
                  uVar9 = param_3;
                  func_0x006fe1a0();
                  uVar1 = uVar17 - uVar11;
                  if ((int)uVar9 != 0) {
                    uVar11 = uVar17;
                    uVar13 = uVar13 << (ulong)(uVar1 & 0x1f) | 1;
                  }
                }
                if (bVar2) {
                  iVar4 = uVar11 + 2;
                  while( true ) {
                    iVar5 = (int)uVar9;
                    iVar4 = iVar4 + -1;
                    uVar3 = iVar4 == 0;
                    if ((bool)uVar3) break;
                    func_0x006fe0fc();
                    func_0x006fd7c8();
                    if ((int)uVar9 == 0) goto LAB_006e5548;
                  }
                  func_0x006fe0fc();
                  func_0x006fd7c8();
                  if (iVar5 == 0) goto LAB_006e5548;
                }
                else {
                  puVar6 = puVar7;
                  func_0x006e3d58(puVar7,apuStack_170[(int)uVar13 >> 1]);
                  if (puVar6 == (undefined8 *)0x0) goto LAB_006e5548;
                }
                uVar3 = uVar16 == uVar11;
                if ((bool)uVar3) goto LAB_006e564c;
                uVar16 = uVar16 + ~uVar11;
                bVar2 = true;
              }
              if (bVar2) {
                func_0x006fe0fc();
                func_0x006fd7c8();
                if (iVar4 == 0) goto LAB_006e5548;
              }
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
            }
LAB_006e564c:
            func_0x006e5820(param_1,puVar7,param_4,param_5);
            puVar14 = param_1;
            goto LAB_006e5668;
          }
          func_0x006fd82c();
          if ((puVar8 != (undefined8 *)0x0) && (func_0x006fd7c8(), (int)puVar8 != 0)) {
            ppuVar15 = apuStack_170;
            uVar16 = 1;
            do {
              ppuVar15 = ppuVar15 + 1;
              if (uVar16 >> (ulong)(uVar12 - 1 & 0x1f) != 0) goto LAB_006e5550;
              func_0x006fd82c();
              *ppuVar15 = puVar8;
              if (puVar8 == (undefined8 *)0x0) break;
              func_0x006fd7c8();
              uVar16 = uVar16 + 1;
            } while ((int)puVar8 != 0);
          }
        }
LAB_006e5548:
        puVar14 = (undefined8 *)0x0;
      }
LAB_006e5668:
      FUN_006e5880();
      func_0x006fd8f4();
      param_4 = puVar10;
      goto LAB_006e53f8;
    }
    func_0x006fe8dc();
    if ((int)param_4 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      puVar14 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      goto LAB_006e53f8;
    }
    func_0x006fd508();
    if ((bool)uVar3) {
      puVar6 = param_1;
      FUN_006e35dc(param_1,1);
      if ((int)puVar6 != 0) {
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined8 *)*param_1 = 1;
        *(undefined4 *)(param_1 + 1) = 1;
        puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      return puVar6;
    }
  }
  ___stack_chk_fail();
  func_0x006fdb2c();
  FUN_006e7eb4();
  if (param_4 != (undefined8 *)0x0) {
    puVar6 = param_4;
    func_0x006fdab0();
    iVar4 = (int)puVar6;
    FUN_006e7f88();
    if (iVar4 != 0) {
      iVar5 = *(int *)(param_4 + 4);
      *(undefined4 *)(param_4 + 2) = 0;
      *(undefined4 *)(param_4 + 1) = 0;
      iVar4 = (int)param_4 + 0x18;
      FUN_006e3e84();
      iVar4 = iVar4 + -1;
      if (iVar4 != 0) {
        puVar6 = param_4;
        FUN_006e805c(param_4,iVar4);
        if ((int)puVar6 == 0) goto LAB_006e5730;
        uVar12 = iVar5 * 0x80 - iVar4;
        iVar4 = 1;
        do {
          if ((uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) + iVar4 == 1) goto LAB_006e56cc;
          func_0x006fe574();
          FUN_006e521c();
          iVar4 = iVar4 + -1;
        } while ((int)puVar6 != 0);
        if (-iVar4 < (int)uVar12) goto LAB_006e5730;
      }
LAB_006e56cc:
      puVar6 = param_4;
      FUN_006e3fc8(param_4,(long)*(int *)(param_4 + 4));
      if ((int)puVar6 != 0) {
        return param_4;
      }
    }
  }
LAB_006e5730:
  func_0x006fe7cc();
  return (undefined8 *)0x0;
}



/* Entry: 006e5680; end: 006e5743;  */

long FUN_006e5680(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  func_0x006fdb2c();
  FUN_006e7eb4();
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x006fdab0();
    iVar3 = (int)lVar4;
    FUN_006e7f88();
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      iVar3 = (int)param_1 + 0x18;
      FUN_006e3e84();
      iVar3 = iVar3 + -1;
      if (iVar3 != 0) {
        lVar4 = param_1;
        FUN_006e805c(param_1,iVar3);
        if ((int)lVar4 == 0) goto LAB_006e5730;
        uVar2 = iVar1 * 0x80 - iVar3;
        iVar3 = 1;
        do {
          if ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) + iVar3 == 1) goto LAB_006e56cc;
          func_0x006fe574();
          FUN_006e521c();
          iVar3 = iVar3 + -1;
        } while ((int)lVar4 != 0);
        if (-iVar3 < (int)uVar2) goto LAB_006e5730;
      }
LAB_006e56cc:
      lVar4 = param_1;
      FUN_006e3fc8(param_1,(long)*(int *)(param_1 + 0x20));
      if ((int)lVar4 != 0) {
        return param_1;
      }
    }
  }
LAB_006e5730:
  func_0x006fe7cc();
  return 0;
}



/* Entry: 006e5744; end: 006e5783;  */

undefined4 FUN_006e5744(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 3;
  if (param_1 < 0x18) {
    uVar2 = 1;
  }
  uVar1 = 4;
  if (param_1 < 0x50) {
    uVar1 = uVar2;
  }
  uVar2 = 5;
  if (param_1 < 0xf0) {
    uVar2 = uVar1;
  }
  uVar1 = 6;
  if (param_1 < 0x2a0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 006e5784; end: 006e587f;  */

long FUN_006e5784(long param_1,long param_2,long param_3)

{
  int iVar1;
  long unaff_x22;
  
  if ((*(int *)(param_2 + 0x10) != 0) || (*(int *)(param_3 + 0x10) != 0)) {
    func_0x006fd6a0();
    func_0x006fd5dc();
    return 0;
  }
  func_0x006fdf8c();
  func_0x006fe550();
  func_0x006fe040();
  func_0x006fd82c();
  if (param_1 != 0) {
    if (unaff_x22 == param_3) {
      FUN_006e8794();
      iVar1 = (int)param_1;
    }
    else {
      func_0x006fe348();
      iVar1 = (int)param_1;
    }
    if (iVar1 != 0) {
      func_0x006fea04();
      FUN_006e8160();
      goto LAB_006e5818;
    }
  }
  param_1 = 0;
LAB_006e5818:
  func_0x006fd8f4();
  return param_1;
}



/* Entry: 006e5880; end: 006e58af;  */

void FUN_006e5880(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_006e3cd0();
  FUN_006e3cd0(param_1 + 0x18);
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 006e58b0; end: 006e5ae7;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 *
FUN_006e58b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar18;
  dword *pdVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *unaff_x19;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint uVar24;
  undefined8 *unaff_x24;
  uint uVar25;
  undefined8 *puVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *unaff_x29;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_4f0 [12];
  uint uStack_4e4;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [9];
  undefined8 auStack_490 [146];
  
  func_0x006fdcd0();
  puVar12 = &stack0x00000050;
  puVar3 = auStack_4f0;
  in_stack_00000050 = unaff_x29;
  func_0x006fd588();
  bVar1 = param_3 < (undefined8 *)((long)&MACH_HEADER.cpusubtype + 2);
  bVar4 = bVar1 && param_3 == (undefined8 *)(long)*(int *)(param_6 + 4);
  if (bVar1 && param_3 == (undefined8 *)(long)*(int *)(param_6 + 4)) {
    unaff_x24 = (undefined8 *)(ulong)((int)param_5 * 0x40 - 0x41);
    puVar23 = param_1;
    unaff_x22 = param_5;
    puVar9 = param_4;
    unaff_x19 = param_6;
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    unaff_x23 = param_4;
    if (param_5 != (undefined8 *)0x0) {
LAB_006e5904:
      lVar8 = param_4[(long)unaff_x22 + -1];
      if (lVar8 == 0) goto code_r0x006e590c;
      func_0x006e3dfc();
      uVar25 = (int)lVar8 + (int)unaff_x24;
      uVar21 = uVar25 + 1;
      func_0x006e5744();
      uVar16 = uVar21;
      if (4 < uVar21) {
        uVar16 = 5;
      }
      puVar11 = (undefined8 *)((long)param_3 << 3);
      puVar23 = auStack_490;
      puStack_4e0 = puVar11;
      func_0x006e3440();
      if (1 < uVar21) {
        puVar23 = auStack_4d8;
        param_2 = auStack_490;
        puVar11 = auStack_490;
        uStack_4e4 = uVar25;
        func_0x006fd8a0();
        uVar18 = 0;
        while( true ) {
          uVar21 = (int)uVar18 + 1;
          uVar25 = uStack_4e4;
          if (uVar21 >> (ulong)(uVar16 - 1 & 0x1f) != 0) break;
          puVar23 = auStack_490 + (ulong)uVar21 * 9;
          param_2 = auStack_490 + uVar18 * 9;
          puVar11 = auStack_4d8;
          func_0x006fd8a0();
          uVar18 = (ulong)uVar21;
        }
      }
      unaff_x24 = (undefined8 *)(ulong)uVar25;
      bVar1 = false;
      do {
        uVar21 = (uint)unaff_x24;
        puVar26 = unaff_x24;
        while( true ) {
          uVar21 = uVar21 - 1;
          puVar13 = (undefined8 *)((ulong)puVar26 >> 6);
          uVar5 = unaff_x22 == puVar13;
          uVar25 = (uint)puVar26;
          if ((puVar13 < unaff_x22) &&
             (((ulong)param_4[(long)puVar13] >> ((ulong)puVar26 & 0x3f) & 1) != 0)) break;
          if (bVar1) {
            func_0x006fe0cc();
            puVar11 = param_1;
            func_0x006fd8a0();
          }
          if (uVar25 == 0) goto LAB_006e5acc;
          puVar26 = (undefined8 *)(ulong)(uVar25 - 1);
        }
        uVar24 = 0;
        uVar17 = 1;
        for (uVar20 = 1; uVar20 < uVar16 && uVar20 <= uVar25; uVar20 = uVar20 + 1) {
          if (((undefined8 *)(ulong)(uVar21 >> 6) < unaff_x22) &&
             (((ulong)param_4[(long)(ulong)(uVar21 >> 6)] >> ((ulong)uVar21 & 0x3f) & 1) != 0)) {
            uVar17 = uVar17 << (ulong)(uVar20 - uVar24 & 0x1f) | 1;
            uVar24 = uVar20;
          }
          uVar21 = uVar21 - 1;
        }
        if (bVar1) {
          for (iVar7 = uVar24 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            func_0x006fe0cc();
            func_0x006fd8a0();
          }
          puVar11 = auStack_490 + (ulong)(uVar17 >> 1) * 9;
          func_0x006fe0cc();
          func_0x006fd8a0();
        }
        else {
          param_2 = auStack_490 + (ulong)(uVar17 >> 1) * 9;
          puVar23 = param_1;
          puVar11 = puStack_4e0;
          func_0x006e3440();
        }
        unaff_x24 = (undefined8 *)(ulong)(uVar25 + ~uVar24);
        bVar1 = true;
        uVar5 = uVar25 == uVar24;
      } while (!(bool)uVar5);
LAB_006e5acc:
      func_0x006fd508();
      if ((bool)uVar5) {
        return puVar23;
      }
      goto LAB_006e5ae4;
    }
LAB_006e5918:
    puVar11 = (undefined8 *)*param_6;
    func_0x006fd508();
    if (!bVar4) goto LAB_006e5ae4;
    func_0x006fdc54();
    puVar9 = param_3;
    param_5 = param_6;
    func_0x006fdca0();
    puVar3 = (undefined1 *)register0x00000008;
    puVar12 = in_stack_00000050;
  }
  else {
    _abort();
    puVar23 = param_1;
    puVar11 = param_3;
    puVar9 = param_4;
LAB_006e5ae4:
    unaff_x30 = FUN_006e5ae8;
    ___stack_chk_fail();
  }
  *(undefined8 **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 **)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined8 **)(puVar3 + -0x10) = puVar12;
  *(code **)(puVar3 + -8) = unaff_x30;
  func_0x006fd5fc();
  *(undefined8 *)(puVar3 + -0x48) = extraout_x8;
  puVar26 = puVar23;
  puVar12 = puVar11;
  puVar13 = param_5;
  if (((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_2 ||
       param_2 != (undefined8 *)(long)*(int *)(param_5 + 4)) ||
     (uVar5 = puVar9 == (undefined8 *)((long)param_2 * 2), unaff_x19 = param_2, unaff_x23 = puVar9,
     (undefined8 *)((long)param_2 * 2) <= puVar9 && !(bool)uVar5)) {
LAB_006e5b94:
    _abort();
  }
  else {
    unaff_x24 = (undefined8 *)((long)param_2 << 1);
    func_0x006fe440(puVar3 + -0xd8);
    func_0x006e3440(puVar3 + -0xd8,puVar11,(long)puVar9 << 3);
    puVar12 = (undefined8 *)(puVar3 + -0xd8);
    puVar9 = unaff_x24;
    FUN_006e8214();
    unaff_x20 = param_5;
    unaff_x21 = puVar23;
    unaff_x22 = puVar11;
    if ((int)puVar26 == 0) goto LAB_006e5b94;
    func_0x006fdf34();
    func_0x006fd534(*(undefined8 *)(puVar3 + -0x48));
    if ((bool)uVar5) {
      return puVar26;
    }
  }
  ___stack_chk_fail();
  *(undefined8 **)(puVar3 + -0x110) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x108) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x100) = unaff_x20;
  *(undefined8 **)(puVar3 + -0xf8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0x10;
  *(code **)(puVar3 + -0xe8) = FUN_006e5b9c;
  puVar14 = puVar13;
  func_0x006fd5fc();
  *(undefined8 *)(puVar3 + -0x118) = extraout_x8_00;
  puVar23 = puVar26;
  puVar11 = puVar9;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar9 ||
      puVar9 != (undefined8 *)(long)*(int *)(puVar14 + 4)) {
LAB_006e5c40:
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar9 << 1);
    uVar5 = param_2 == puVar12;
    if ((bool)uVar5) {
      FUN_006e82e4(puVar3 + -0x1a8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar12 = (undefined8 *)(puVar3 + -0x1a8);
    param_2 = puVar9;
    puVar11 = unaff_x22;
    FUN_006e8214();
    unaff_x19 = puVar9;
    unaff_x21 = puVar26;
    if ((int)puVar23 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(*(undefined8 *)(puVar3 + -0x118));
    if ((bool)uVar5) {
      return puVar23;
    }
  }
  ___stack_chk_fail();
  puVar9 = (undefined8 *)(puVar3 + -0x240);
  *(undefined8 **)(puVar3 + -0x1f0) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x1e8) = unaff_x23;
  *(undefined8 **)(puVar3 + -0x1e0) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x1d8) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x1d0) = puVar13;
  *(undefined8 **)(puVar3 + -0x1c8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x1c0) = puVar3 + -0xf0;
  *(code **)(puVar3 + -0x1b8) = FUN_006e5c48;
  func_0x006fd5fc();
  *(undefined8 *)(puVar3 + -0x1f8) = extraout_x8_01;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar12 ||
      puVar12 != (undefined8 *)(long)*(int *)(puVar11 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    param_2 = (undefined8 *)puVar11[3];
    puVar12 = (undefined8 *)((long)puVar12 << 3);
    func_0x006e3440(puVar3 + -0x240);
    uVar18 = *(ulong *)(puVar3 + -0x240);
    uVar5 = uVar18 - 2 == 0;
    if (uVar18 < 2) {
      *(ulong *)(puVar3 + -0x240) = uVar18 | 0xfffffffffffffffe;
      pdVar19 = &MACH_HEADER.magic;
      do {
        pdVar19 = (dword *)((long)pdVar19 + 1);
        uVar5 = pdVar19 == (dword *)puVar13;
        if (puVar13 <= pdVar19) break;
        lVar8 = *(long *)(puVar3 + (long)pdVar19 * 8 + -0x240);
        *(long *)(puVar3 + (long)pdVar19 * 8 + -0x240) = lVar8 + -1;
      } while (lVar8 == 0);
    }
    else {
      *(ulong *)(puVar3 + -0x240) = uVar18 - 2;
    }
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(*(undefined8 *)(puVar3 + -0x1f8));
    puVar23 = unaff_x22;
    puVar11 = puVar9;
    unaff_x23 = (undefined8 *)(puVar3 + -0x240);
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar15 = FUN_006e5d10;
  func_0x006fec68();
  *(undefined1 **)(puVar3 + -0x180) = puVar3 + -0x1c0;
  *(code **)(puVar3 + -0x178) = pcVar15;
  if ((*(int *)(puVar11 + 1) < 1) || ((*(byte *)*puVar11 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar11 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_2 + 2) == 0) {
    func_0x006feb2c();
    puVar9 = puVar23;
    func_0x006fd9d0();
    iVar7 = (int)puVar9;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar12 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar11 != 0) {
          *(undefined4 *)(puVar23 + 2) = 0;
          *(undefined4 *)(puVar23 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        *(undefined8 *)(puVar3 + -400) = *(undefined8 *)(puVar3 + -400);
        *(undefined8 *)(puVar3 + -0x188) = *(undefined8 *)(puVar3 + -0x188);
        *(undefined8 *)(puVar3 + -0x180) = *(undefined8 *)(puVar3 + -0x180);
        *(undefined8 *)(puVar3 + -0x178) = *(undefined8 *)(puVar3 + -0x178);
        puVar12 = puVar23;
        FUN_006e35dc(puVar23,1);
        if ((int)puVar12 != 0) {
          *(undefined4 *)(puVar23 + 2) = 0;
          *(undefined8 *)*puVar23 = 1;
          *(undefined4 *)(puVar23 + 1) = 1;
          puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar12;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar11,unaff_x23);
        unaff_x24 = puVar11;
        if (puVar11 == (undefined8 *)0x0) {
          puVar23 = (undefined8 *)0x0;
          lVar8 = 0;
          uVar21 = 0;
          lVar27 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar11 = (undefined8 *)0x0;
      }
      *(undefined8 **)(puVar3 + -0x210) = puVar11;
      uVar25 = *(uint *)(unaff_x24 + 4);
      lVar27 = (long)(int)uVar25;
      uVar21 = 3;
      if (iVar7 != 1) {
        uVar21 = 1;
      }
      uVar16 = 4;
      if (iVar7 < 2) {
        uVar16 = uVar21;
      }
      uVar21 = 5;
      if (iVar7 < 5) {
        uVar21 = uVar16;
      }
      uVar16 = 6;
      if (iVar7 < 0xf) {
        uVar16 = uVar21;
      }
      uVar20 = 1 << (ulong)uVar16;
      *(uint *)(puVar3 + -0x204) = uVar16;
      uVar21 = (uint)(lVar27 << 1);
      *(long *)(puVar3 + -0x240) = lVar27 << 1;
      *(ulong *)(puVar3 + -0x238) = (ulong)uVar20;
      if ((int)uVar21 <= (int)uVar20) {
        uVar21 = uVar20;
      }
      uVar21 = (uVar21 + (uVar25 << (ulong)uVar16)) * 8;
      uVar18 = (ulong)(int)(uVar21 + 0x40);
      FUN_00701e90();
      if (uVar18 == 0) {
        puVar23 = (undefined8 *)0x0;
        lVar8 = 0;
        lVar27 = 0;
        goto LAB_006e60b0;
      }
      *(ulong *)(puVar3 + -0x230) = uVar18;
      *(ulong *)(puVar3 + -0x228) = (ulong)uVar21;
      *(ulong *)(puVar3 + -0x220) = (ulong)uVar25;
      lVar8 = (uVar18 & 0xffffffffffffffc0) + 0x40;
      func_0x006fd9c0(lVar8);
      *(long *)(puVar3 + -0x218) = lVar8;
      lVar8 = lVar8 + (long)(int)(uVar25 << (ulong)uVar16) * 8;
      *(long *)(puVar3 + -0x1e8) = lVar8;
      *(long *)(puVar3 + -0x200) = lVar8 + lVar27 * 8;
      *(undefined4 *)(puVar3 + -0x1f8) = 0;
      *(int *)(puVar3 + -500) = (int)*(undefined8 *)(puVar3 + -0x220);
      *(undefined4 *)(puVar3 + -0x1e0) = 0;
      *(int *)(puVar3 + -0x1dc) = (int)*(undefined8 *)(puVar3 + -0x220);
      *(undefined8 *)(puVar3 + -0x1f0) = 0x200000000;
      *(undefined8 *)(puVar3 + -0x1d8) = 0x200000000;
      puVar10 = puVar3 + -0x1e8;
      FUN_006e60ec(puVar10,unaff_x24,unaff_x23);
      if ((int)puVar10 == 0) {
        puVar23 = (undefined8 *)0x0;
        lVar27 = *(long *)(puVar3 + -0x218);
        lVar8 = *(long *)(puVar3 + -0x230);
        uVar21 = (uint)*(undefined8 *)(puVar3 + -0x228);
        goto LAB_006e60b0;
      }
      puVar10 = puVar3 + -0x200;
      func_0x006fe0c0(puVar10,param_2);
      iVar6 = (int)puVar10;
      func_0x006e5778();
      lVar8 = *(long *)(puVar3 + -0x230);
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar23 = (undefined8 *)0x0;
        lVar27 = *(long *)(puVar3 + -0x218);
      }
      else {
        lVar22 = *(long *)(puVar3 + -0x218);
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar22 + lVar27 * 8,lVar27,puVar3 + -0x200);
        uVar18 = *(ulong *)(puVar3 + -0x238);
        if (1 < *(uint *)(puVar3 + -0x204)) {
          puVar10 = puVar3 + -0x1e8;
          func_0x006fdaf8(puVar10,puVar3 + -0x200,puVar3 + -0x200);
          if ((int)puVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(*(long *)(puVar3 + -0x218) + *(long *)(puVar3 + -0x240) * 8,lVar27,
                          puVar3 + -0x1e8);
          lVar27 = lVar27 << 3;
          *(long *)(puVar3 + -0x240) = lVar27;
          for (uVar28 = 3; uVar28 < uVar18; uVar28 = uVar28 + 1) {
            puVar10 = puVar3 + -0x1e8;
            func_0x006fdaf8(lVar27,puVar10,puVar3 + -0x200,puVar3 + -0x1e8);
            if ((int)puVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
            lVar27 = *(long *)(puVar3 + -0x240);
          }
        }
        iVar2 = iVar7 * 0x40 + -1;
        iVar7 = *(int *)(puVar3 + -0x204);
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = iVar2 / iVar7;
        }
        lVar27 = *(long *)(puVar3 + -0x218);
        for (iVar7 = iVar2 - iVar6 * iVar7; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar12,iVar2);
          iVar2 = iVar2 + -1;
        }
        iVar7 = (int)(puVar3 + -0x1e8);
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar2 < 0) {
            func_0x006fe0c0(puVar23,puVar3 + -0x1e8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar6 = *(int *)(puVar3 + -0x204);
          for (iVar7 = 0; *(int *)(puVar3 + -0x204) + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar10 = puVar3 + -0x1e8;
            func_0x006fdaf8(puVar10,puVar3 + -0x1e8,puVar3 + -0x1e8);
            if ((int)puVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar12,iVar2 + iVar7);
          }
          iVar7 = (int)(puVar3 + -0x200);
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar10 = puVar3 + -0x1e8;
          func_0x006fdaf8(puVar10,puVar3 + -0x1e8,puVar3 + -0x200);
          iVar2 = iVar2 - iVar6;
          iVar7 = (int)puVar10;
        }
LAB_006e60a4:
        puVar23 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar21 = (uint)*(undefined8 *)(puVar3 + -0x228);
LAB_006e60b0:
      FUN_006e5880();
      if ((lVar8 == 0) && (lVar27 != 0)) {
        FUN_00701f08(lVar27,(long)(int)uVar21);
      }
      func_0x00701ed0(lVar8);
      return puVar23;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
code_r0x006e590c:
  unaff_x22 = (undefined8 *)((long)unaff_x22 + -1);
  unaff_x24 = (undefined8 *)(ulong)((int)unaff_x24 - 0x40);
  puVar23 = (undefined8 *)0x0;
  if (unaff_x22 == (undefined8 *)0x0) goto LAB_006e5918;
  goto LAB_006e5904;
}



/* Entry: 006e5ae8; end: 006e5b9b;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 *
FUN_006e5ae8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            ulong param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  code *pcVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  uint uVar16;
  undefined8 *unaff_x19;
  undefined8 *puVar17;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong auStack_240 [5];
  long lStack_218;
  undefined8 *puStack_210;
  uint uStack_204;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 auStack_1a8 [5];
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [18];
  undefined8 uStack_48;
  
  func_0x006fd5fc();
  puVar8 = param_1;
  puVar12 = param_3;
  uVar20 = param_5;
  if (((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_2 ||
       param_2 != (undefined8 *)(long)*(int *)(param_5 + 0x20)) ||
     (uVar5 = param_4 == (undefined8 *)((long)param_2 * 2), unaff_x19 = param_2, unaff_x23 = param_4
     , (undefined8 *)((long)param_2 * 2) <= param_4 && !(bool)uVar5)) {
LAB_006e5b94:
    _abort();
  }
  else {
    unaff_x24 = (undefined8 *)((long)param_2 << 1);
    uStack_48 = extraout_x8;
    func_0x006fe440(auStack_d8);
    func_0x006e3440(auStack_d8,param_3,(long)param_4 << 3);
    puVar12 = auStack_d8;
    param_4 = unaff_x24;
    FUN_006e8214();
    unaff_x20 = param_5;
    unaff_x21 = param_1;
    unaff_x22 = param_3;
    if ((int)puVar8 == 0) goto LAB_006e5b94;
    func_0x006fdf34();
    func_0x006fd534(uStack_48);
    if ((bool)uVar5) {
      return puVar8;
    }
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_006e5b9c;
  uVar10 = uVar20;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  uStack_100 = unaff_x20;
  puStack_f8 = unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  puVar17 = puVar8;
  puVar9 = param_4;
  puStack_1c8 = unaff_x19;
  puStack_1d8 = unaff_x21;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_4 ||
      param_4 != (undefined8 *)(long)*(int *)(uVar10 + 0x20)) {
LAB_006e5c40:
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)param_4 << 1);
    uVar5 = param_2 == puVar12;
    uStack_118 = extraout_x8_00;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_1a8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar12 = auStack_1a8;
    param_2 = param_4;
    puVar9 = unaff_x22;
    FUN_006e8214();
    puStack_1c8 = param_4;
    puStack_1d8 = puVar8;
    if ((int)puVar17 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_118);
    if ((bool)uVar5) {
      return puVar17;
    }
  }
  ___stack_chk_fail();
  puVar13 = auStack_240;
  pcStack_1b8 = FUN_006e5c48;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  uStack_1d0 = uVar20;
  ppuStack_1c0 = &puStack_f0;
  func_0x006fd5fc();
  lStack_1f8 = extraout_x8_01;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar12 ||
      puVar12 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    param_2 = (undefined8 *)puVar9[3];
    puVar12 = (undefined8 *)((long)puVar12 << 3);
    func_0x006e3440(auStack_240);
    uVar5 = auStack_240[0] - 2 == 0;
    uVar10 = auStack_240[0] - 2;
    if (auStack_240[0] < 2) {
      auStack_240[0] = auStack_240[0] | 0xfffffffffffffffe;
      uVar19 = 1;
      do {
        uVar5 = uVar19 == uVar20;
        uVar10 = auStack_240[0];
        if (uVar20 <= uVar19) break;
        uVar15 = auStack_240[uVar19];
        auStack_240[uVar19] = uVar15 - 1;
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    auStack_240[0] = uVar10;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_1f8);
    puVar17 = unaff_x22;
    puVar9 = puVar13;
    unaff_x23 = auStack_240;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar14 = FUN_006e5d10;
  func_0x006fec68();
  pppuStack_180 = &ppuStack_1c0;
  pcStack_178 = pcVar14;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_2 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = puVar17;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar12 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(puVar17 + 2) = 0;
          *(undefined4 *)(puVar17 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar12 = puVar17;
        FUN_006e35dc(puVar17,1);
        if ((int)puVar12 != 0) {
          *(undefined4 *)(puVar17 + 2) = 0;
          *(undefined8 *)*puVar17 = 1;
          *(undefined4 *)(puVar17 + 1) = 1;
          puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar12;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
          uVar20 = 0;
          uVar16 = 0;
          lVar18 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_210 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar18 = (long)(int)uVar2;
      uVar16 = 3;
      if (iVar7 != 1) {
        uVar16 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar16;
      }
      uVar16 = 5;
      if (iVar7 < 5) {
        uVar16 = uVar3;
      }
      uStack_204 = 6;
      if (iVar7 < 0xf) {
        uStack_204 = uVar16;
      }
      uVar3 = 1 << (ulong)uStack_204;
      auStack_240[1] = (ulong)uVar3;
      uVar20 = (ulong)uStack_204;
      auStack_240[0] = lVar18 << 1;
      uVar16 = (uint)auStack_240[0];
      if ((int)(uint)auStack_240[0] <= (int)uVar3) {
        uVar16 = uVar3;
      }
      uVar16 = (uVar16 + (uVar2 << uVar20)) * 8;
      uVar10 = (ulong)(int)(uVar16 + 0x40);
      FUN_00701e90();
      if (uVar10 == 0) {
        puVar17 = (undefined8 *)0x0;
        uVar20 = 0;
        lVar18 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar10 & 0xffffffffffffffc0) + 0x40;
      auStack_240[2] = uVar10;
      auStack_240[3] = (ulong)uVar16;
      auStack_240[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      puStack_1e8 = (undefined8 *)(lVar1 + (long)(int)(uVar2 << uVar20) * 8);
      puStack_200 = puStack_1e8 + lVar18;
      lStack_1f8 = auStack_240[4] << 0x20;
      puStack_1e0 = (undefined8 *)(auStack_240[4] << 0x20);
      puStack_1f0 = (undefined8 *)0x200000000;
      puStack_1d8 = (undefined8 *)0x200000000;
      ppuVar11 = &puStack_1e8;
      lStack_218 = lVar1;
      FUN_006e60ec(ppuVar11,unaff_x24,unaff_x23);
      if ((int)ppuVar11 == 0) {
        puVar17 = (undefined8 *)0x0;
        uVar16 = (uint)auStack_240[3];
        lVar18 = lStack_218;
        uVar20 = auStack_240[2];
        goto LAB_006e60b0;
      }
      ppuVar11 = &puStack_200;
      func_0x006fe0c0(ppuVar11,param_2);
      iVar6 = (int)ppuVar11;
      func_0x006e5778();
      lVar1 = lStack_218;
      uVar20 = auStack_240[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar17 = (undefined8 *)0x0;
        lVar18 = lStack_218;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar18 * 8,lVar18,&puStack_200);
        uVar10 = auStack_240[1];
        if (1 < uStack_204) {
          ppuVar11 = &puStack_1e8;
          func_0x006fdaf8(ppuVar11,&puStack_200,&puStack_200);
          if ((int)ppuVar11 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_218 + auStack_240[0] * 8,lVar18,&puStack_1e8);
          auStack_240[0] = lVar18 << 3;
          for (uVar19 = 3; uVar19 < uVar10; uVar19 = uVar19 + 1) {
            ppuVar11 = &puStack_1e8;
            func_0x006fdaf8(auStack_240[0],ppuVar11,&puStack_200,&puStack_1e8);
            if ((int)ppuVar11 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar18 = lStack_218;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_204 != 0) {
          iVar7 = iVar6 / (int)uStack_204;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_204; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar12,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&puStack_1e8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(puVar17,&puStack_1e8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_204;
          for (iVar7 = 0; uStack_204 + iVar7 != 0; iVar7 = iVar7 + -1) {
            ppuVar11 = &puStack_1e8;
            func_0x006fdaf8(ppuVar11,&puStack_1e8,&puStack_1e8);
            if ((int)ppuVar11 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar12,iVar6 + iVar7);
          }
          iVar7 = (int)&puStack_200;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          ppuVar11 = &puStack_1e8;
          func_0x006fdaf8(ppuVar11,&puStack_1e8,&puStack_200);
          iVar6 = iVar4;
          iVar7 = (int)ppuVar11;
        }
LAB_006e60a4:
        puVar17 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar16 = (uint)auStack_240[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar20 == 0) && (lVar18 != 0)) {
        FUN_00701f08(lVar18,(long)(int)uVar16);
      }
      func_0x00701ed0(uVar20);
      return puVar17;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006e5b9c; end: 006e5c47;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 *
FUN_006e5b9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            ulong param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong *puVar13;
  code *pcVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  uint uVar15;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong auStack_160 [5];
  long lStack_138;
  undefined8 *puStack_130;
  uint uStack_124;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 auStack_c8 [5];
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  long *plVar12;
  
  uVar18 = param_5;
  func_0x006fd5fc();
  puVar9 = param_4;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_4 ||
      param_4 != (undefined8 *)(long)*(int *)(uVar18 + 0x20)) {
LAB_006e5c40:
    param_4 = param_2;
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)param_4 << 1);
    uVar5 = param_2 == param_3;
    uStack_38 = extraout_x8;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_c8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    param_3 = auStack_c8;
    puVar9 = unaff_x22;
    FUN_006e8214();
    param_2 = param_4;
    if ((int)param_1 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_38);
    if ((bool)uVar5) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  puVar13 = auStack_160;
  pcStack_d8 = FUN_006e5c48;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  lStack_118 = extraout_x8_00;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_3 ||
      param_3 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    param_4 = (undefined8 *)puVar9[3];
    param_3 = (undefined8 *)((long)param_3 << 3);
    func_0x006e3440(auStack_160);
    uVar5 = auStack_160[0] - 2 == 0;
    uVar18 = auStack_160[0] - 2;
    if (auStack_160[0] < 2) {
      auStack_160[0] = auStack_160[0] | 0xfffffffffffffffe;
      uVar10 = 1;
      do {
        uVar5 = uVar10 == param_5;
        uVar18 = auStack_160[0];
        if (param_5 <= uVar10) break;
        uVar17 = auStack_160[uVar10];
        auStack_160[uVar10] = uVar17 - 1;
        uVar10 = uVar10 + 1;
      } while (uVar17 == 0);
    }
    auStack_160[0] = uVar18;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_118);
    param_1 = unaff_x22;
    puVar9 = puVar13;
    unaff_x23 = auStack_160;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar14 = FUN_006e5d10;
  func_0x006fec68();
  ppuStack_a0 = &puStack_e0;
  pcStack_98 = pcVar14;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_4 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = param_1;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_3 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined4 *)(param_1 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar9 = param_1;
        FUN_006e35dc(param_1,1);
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined8 *)*param_1 = 1;
          *(undefined4 *)(param_1 + 1) = 1;
          puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar9;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          param_1 = (undefined8 *)0x0;
          uVar18 = 0;
          uVar15 = 0;
          lVar16 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_130 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar16 = (long)(int)uVar2;
      uVar15 = 3;
      if (iVar7 != 1) {
        uVar15 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar15;
      }
      uVar15 = 5;
      if (iVar7 < 5) {
        uVar15 = uVar3;
      }
      uStack_124 = 6;
      if (iVar7 < 0xf) {
        uStack_124 = uVar15;
      }
      uVar3 = 1 << (ulong)uStack_124;
      auStack_160[1] = (ulong)uVar3;
      uVar18 = (ulong)uStack_124;
      auStack_160[0] = lVar16 << 1;
      uVar15 = (uint)auStack_160[0];
      if ((int)(uint)auStack_160[0] <= (int)uVar3) {
        uVar15 = uVar3;
      }
      uVar15 = (uVar15 + (uVar2 << uVar18)) * 8;
      uVar10 = (ulong)(int)(uVar15 + 0x40);
      FUN_00701e90();
      if (uVar10 == 0) {
        param_1 = (undefined8 *)0x0;
        uVar18 = 0;
        lVar16 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar10 & 0xffffffffffffffc0) + 0x40;
      auStack_160[2] = uVar10;
      auStack_160[3] = (ulong)uVar15;
      auStack_160[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_120 = lVar1 + (long)(int)(uVar2 << uVar18) * 8 + lVar16 * 8;
      lStack_118 = auStack_160[4] << 0x20;
      puVar11 = &stack0xfffffffffffffef8;
      lStack_138 = lVar1;
      FUN_006e60ec(puVar11,unaff_x24,unaff_x23);
      if ((int)puVar11 == 0) {
        param_1 = (undefined8 *)0x0;
        uVar15 = (uint)auStack_160[3];
        lVar16 = lStack_138;
        uVar18 = auStack_160[2];
        goto LAB_006e60b0;
      }
      plVar12 = &lStack_120;
      func_0x006fe0c0(plVar12,param_4);
      iVar6 = (int)plVar12;
      func_0x006e5778();
      lVar1 = lStack_138;
      uVar18 = auStack_160[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_1 = (undefined8 *)0x0;
        lVar16 = lStack_138;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar16 * 8,lVar16,&lStack_120);
        uVar10 = auStack_160[1];
        if (1 < uStack_124) {
          puVar11 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar11,&lStack_120,&lStack_120);
          if ((int)puVar11 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_138 + auStack_160[0] * 8,lVar16,&stack0xfffffffffffffef8);
          auStack_160[0] = lVar16 << 3;
          for (uVar17 = 3; uVar17 < uVar10; uVar17 = uVar17 + 1) {
            puVar11 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(auStack_160[0],puVar11,&lStack_120,&stack0xfffffffffffffef8);
            if ((int)puVar11 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar16 = lStack_138;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_124 != 0) {
          iVar7 = iVar6 / (int)uStack_124;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_124; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(param_3,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xfffffffffffffef8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_1,&stack0xfffffffffffffef8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_124;
          for (iVar7 = 0; uStack_124 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar11 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(puVar11,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8);
            if ((int)puVar11 == 0) goto LAB_006e60a4;
            func_0x006e5334(param_3,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_120;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar11 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar11,&stack0xfffffffffffffef8,&lStack_120);
          iVar6 = iVar4;
          iVar7 = (int)puVar11;
        }
LAB_006e60a4:
        param_1 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar15 = (uint)auStack_160[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar18 == 0) && (lVar16 != 0)) {
        FUN_00701f08(lVar16,(long)(int)uVar15);
      }
      func_0x00701ed0(uVar18);
      return param_1;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006e5c48; end: 006e5d0f;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006e5c48(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong *puVar12;
  long extraout_x8;
  uint uVar13;
  ulong unaff_x20;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong auStack_90 [5];
  long lStack_68;
  undefined8 *puStack_60;
  uint uStack_54;
  long lStack_50;
  long lStack_48;
  long *plVar11;
  
  puVar12 = auStack_90;
  func_0x006fd5fc();
  lStack_48 = extraout_x8;
  if (param_3 < 10 && param_3 == (long)*(int *)(param_4 + 4)) {
    func_0x006fdbac();
    param_2 = param_4[3];
    param_3 = param_3 << 3;
    func_0x006e3440(auStack_90);
    uVar5 = auStack_90[0] - 2 == 0;
    uVar16 = auStack_90[0] - 2;
    if (auStack_90[0] < 2) {
      auStack_90[0] = auStack_90[0] | 0xfffffffffffffffe;
      uVar9 = 1;
      do {
        uVar5 = uVar9 == unaff_x20;
        uVar16 = auStack_90[0];
        if (unaff_x20 <= uVar9) break;
        uVar15 = auStack_90[uVar9];
        auStack_90[uVar9] = uVar15 - 1;
        uVar9 = uVar9 + 1;
      } while (uVar15 == 0);
    }
    auStack_90[0] = uVar16;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_48);
    param_1 = unaff_x22;
    param_4 = puVar12;
    unaff_x23 = auStack_90;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  func_0x006fec68();
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_4 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    func_0x006feb2c();
    puVar8 = param_1;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_3 + 8);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)param_4 != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined4 *)(param_1 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar8 = param_1;
        FUN_006e35dc(param_1,1);
        if ((int)puVar8 != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined8 *)*param_1 = 1;
          *(undefined4 *)(param_1 + 1) = 1;
          puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar8;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(param_4,unaff_x23);
        unaff_x24 = param_4;
        if (param_4 == (undefined8 *)0x0) {
          param_1 = (undefined8 *)0x0;
          uVar16 = 0;
          uVar13 = 0;
          lVar14 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        param_4 = (undefined8 *)0x0;
      }
      puStack_60 = param_4;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar14 = (long)(int)uVar2;
      uVar13 = 3;
      if (iVar7 != 1) {
        uVar13 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar13;
      }
      uVar13 = 5;
      if (iVar7 < 5) {
        uVar13 = uVar3;
      }
      uStack_54 = 6;
      if (iVar7 < 0xf) {
        uStack_54 = uVar13;
      }
      uVar3 = 1 << (ulong)uStack_54;
      auStack_90[1] = (ulong)uVar3;
      uVar16 = (ulong)uStack_54;
      auStack_90[0] = lVar14 << 1;
      uVar13 = (uint)auStack_90[0];
      if ((int)(uint)auStack_90[0] <= (int)uVar3) {
        uVar13 = uVar3;
      }
      uVar13 = (uVar13 + (uVar2 << uVar16)) * 8;
      uVar9 = (ulong)(int)(uVar13 + 0x40);
      FUN_00701e90();
      if (uVar9 == 0) {
        param_1 = (undefined8 *)0x0;
        uVar16 = 0;
        lVar14 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar9 & 0xffffffffffffffc0) + 0x40;
      auStack_90[2] = uVar9;
      auStack_90[3] = (ulong)uVar13;
      auStack_90[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_50 = lVar1 + (long)(int)(uVar2 << uVar16) * 8 + lVar14 * 8;
      lStack_48 = auStack_90[4] << 0x20;
      puVar10 = &stack0xffffffffffffffc8;
      lStack_68 = lVar1;
      FUN_006e60ec(puVar10,unaff_x24,unaff_x23);
      if ((int)puVar10 == 0) {
        param_1 = (undefined8 *)0x0;
        uVar13 = (uint)auStack_90[3];
        lVar14 = lStack_68;
        uVar16 = auStack_90[2];
        goto LAB_006e60b0;
      }
      plVar11 = &lStack_50;
      func_0x006fe0c0(plVar11,param_2);
      iVar6 = (int)plVar11;
      func_0x006e5778();
      lVar1 = lStack_68;
      uVar16 = auStack_90[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_1 = (undefined8 *)0x0;
        lVar14 = lStack_68;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar14 * 8,lVar14,&lStack_50);
        uVar9 = auStack_90[1];
        if (1 < uStack_54) {
          puVar10 = &stack0xffffffffffffffc8;
          func_0x006fdaf8(puVar10,&lStack_50,&lStack_50);
          if ((int)puVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_68 + auStack_90[0] * 8,lVar14,&stack0xffffffffffffffc8);
          auStack_90[0] = lVar14 << 3;
          for (uVar15 = 3; uVar15 < uVar9; uVar15 = uVar15 + 1) {
            puVar10 = &stack0xffffffffffffffc8;
            func_0x006fdaf8(auStack_90[0],puVar10,&lStack_50,&stack0xffffffffffffffc8);
            if ((int)puVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar14 = lStack_68;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_54 != 0) {
          iVar7 = iVar6 / (int)uStack_54;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_54; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(param_3,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xffffffffffffffc8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_1,&stack0xffffffffffffffc8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_54;
          for (iVar7 = 0; uStack_54 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar10 = &stack0xffffffffffffffc8;
            func_0x006fdaf8(puVar10,&stack0xffffffffffffffc8,&stack0xffffffffffffffc8);
            if ((int)puVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(param_3,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_50;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar10 = &stack0xffffffffffffffc8;
          func_0x006fdaf8(puVar10,&stack0xffffffffffffffc8,&lStack_50);
          iVar6 = iVar4;
          iVar7 = (int)puVar10;
        }
LAB_006e60a4:
        param_1 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar13 = (uint)auStack_90[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar16 == 0) && (lVar14 != 0)) {
        FUN_00701f08(lVar14,(long)(int)uVar13);
      }
      func_0x00701ed0(uVar16);
      return param_1;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006e5d10; end: 006e60eb;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006e5d10(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *unaff_x24;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long in_stack_00000040;
  undefined4 in_stack_00000048;
  int in_stack_0000004c;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined4 in_stack_00000060;
  int in_stack_00000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  func_0x006fec68();
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_4 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    func_0x006feb2c();
    puVar5 = param_1;
    func_0x006fd9d0();
    iVar4 = (int)puVar5;
    FUN_006e34dc();
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_3 + 8);
      if (iVar4 == 0) {
        func_0x006fe8dc();
        if ((int)param_4 != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined4 *)(param_1 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar5 = param_1;
        FUN_006e35dc(param_1,1);
        if ((int)puVar5 != 0) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined8 *)*param_1 = 1;
          *(undefined4 *)(param_1 + 1) = 1;
          puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar5;
      }
      if ((unaff_x24 == (undefined8 *)0x0) &&
         (FUN_006e5680(), unaff_x24 = param_4, param_4 == (undefined8 *)0x0)) {
        param_1 = (undefined8 *)0x0;
        uVar6 = 0;
        iVar8 = 0;
        lVar11 = 0;
        goto LAB_006e60b0;
      }
      iVar3 = *(int *)(unaff_x24 + 4);
      lVar9 = (long)iVar3;
      uVar7 = 3;
      if (iVar4 != 1) {
        uVar7 = 1;
      }
      uVar1 = 4;
      if (iVar4 < 2) {
        uVar1 = uVar7;
      }
      uVar7 = 5;
      if (iVar4 < 5) {
        uVar7 = uVar1;
      }
      uVar1 = 6;
      if (iVar4 < 0xf) {
        uVar1 = uVar7;
      }
      uVar2 = 1 << (ulong)uVar1;
      uVar7 = iVar3 * 2;
      if (iVar3 * 2 <= (int)uVar2) {
        uVar7 = uVar2;
      }
      iVar8 = (uVar7 + (iVar3 << (ulong)uVar1)) * 8;
      uVar6 = (ulong)(iVar8 + 0x40);
      FUN_00701e90();
      if (uVar6 == 0) {
        param_1 = (undefined8 *)0x0;
        uVar6 = 0;
        lVar11 = 0;
        goto LAB_006e60b0;
      }
      lVar11 = (uVar6 & 0xffffffffffffffc0) + 0x40;
      func_0x006fd9c0(lVar11);
      in_stack_00000058 = lVar11 + (long)(iVar3 << (ulong)uVar1) * 8;
      in_stack_00000040 = in_stack_00000058 + lVar9 * 8;
      in_stack_00000048 = 0;
      in_stack_00000060 = 0;
      in_stack_00000050 = 0x200000000;
      in_stack_00000068 = 0x200000000;
      puVar5 = &stack0x00000058;
      in_stack_0000004c = iVar3;
      in_stack_00000064 = iVar3;
      FUN_006e60ec(puVar5,unaff_x24);
      if ((int)puVar5 == 0) {
        param_1 = (undefined8 *)0x0;
        goto LAB_006e60b0;
      }
      puVar5 = &stack0x00000040;
      func_0x006fe0c0(puVar5,param_2);
      iVar3 = (int)puVar5;
      func_0x006e5778();
      if (iVar3 == 0) {
LAB_006e5fcc:
        param_1 = (undefined8 *)0x0;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar11 + lVar9 * 8,lVar9,&stack0x00000040);
        if (1 < uVar1) {
          puVar5 = &stack0x00000058;
          func_0x006fdaf8(puVar5,&stack0x00000040,&stack0x00000040);
          if ((int)puVar5 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lVar11 + lVar9 * 0x10,lVar9,&stack0x00000058);
          for (uVar10 = 3; uVar10 < uVar2; uVar10 = uVar10 + 1) {
            puVar5 = &stack0x00000058;
            func_0x006fdaf8(lVar9 << 3,puVar5,&stack0x00000040,&stack0x00000058);
            if ((int)puVar5 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        iVar3 = iVar4 * 0x40 + -1;
        iVar4 = 0;
        if (uVar1 != 0) {
          iVar4 = iVar3 / (int)uVar1;
        }
        for (iVar4 = iVar3 - iVar4 * uVar1; -1 < iVar4; iVar4 = iVar4 + -1) {
          func_0x006e5334(param_3,iVar3);
          iVar3 = iVar3 + -1;
        }
        iVar4 = (int)&stack0x00000058;
        func_0x006fe05c();
        while (iVar4 != 0) {
          if (iVar3 < 0) {
            func_0x006fe0c0(param_1,&stack0x00000058);
            func_0x006e5820();
            goto LAB_006e60b0;
          }
          for (iVar4 = 0; uVar1 + iVar4 != 0; iVar4 = iVar4 + -1) {
            puVar5 = &stack0x00000058;
            func_0x006fdaf8(puVar5,&stack0x00000058,&stack0x00000058);
            if ((int)puVar5 == 0) goto LAB_006e60a4;
            func_0x006e5334(param_3,iVar3 + iVar4);
          }
          iVar4 = (int)&stack0x00000040;
          func_0x006fe05c();
          if (iVar4 == 0) break;
          puVar5 = &stack0x00000058;
          func_0x006fdaf8(puVar5,&stack0x00000058,&stack0x00000040);
          iVar3 = iVar3 - uVar1;
          iVar4 = (int)puVar5;
        }
LAB_006e60a4:
        param_1 = (undefined8 *)0x0;
      }
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar6 == 0) && (lVar11 != 0)) {
        FUN_00701f08(lVar11,(long)iVar8);
      }
      func_0x00701ed0(uVar6);
      return param_1;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006e60ec; end: 006e6187;  */

long FUN_006e60ec(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x006fda04();
  if ((0 < (int)*(uint *)(param_2 + 0x20)) &&
     (*(long *)(*(long *)(unaff_x20 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 8 + -8) < 0)) {
    func_0x006fde6c();
    if ((int)param_1 != 0) {
      plVar2 = *(long **)(unaff_x20 + 0x18);
      plVar3 = (long *)*unaff_x19;
      *plVar3 = -*plVar2;
      iVar1 = *(int *)(unaff_x20 + 0x20);
      for (lVar4 = 1; lVar4 < iVar1; lVar4 = lVar4 + 1) {
        plVar3[lVar4] = ~plVar2[lVar4];
      }
      *(int *)(unaff_x19 + 1) = iVar1;
      *(undefined4 *)(unaff_x19 + 2) = 0;
      param_1 = 1;
    }
    return param_1;
  }
  func_0x006fd9d0();
  func_0x006fe0f0();
  func_0x006fe550();
  func_0x006fe070();
  func_0x006fd82c();
  if ((param_1 == 0) || (func_0x006e3d58(), param_1 == 0)) {
    param_1 = 0;
  }
  else {
    func_0x006fdf80();
    FUN_006e8160();
  }
  func_0x006fd8f4();
  return param_1;
}



/* Entry: 006e6188; end: 006e6233;  */

void FUN_006e6188(long *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_006e35dc(param_1,(long)(int)param_2);
  if ((int)plVar1 != 0) {
    lVar5 = (long)(int)param_2 * 8;
    FUN_006e3cc4(*param_1,0,lVar5);
    for (uVar2 = 0; uVar2 >> (ulong)(param_5 & 0x1f) == 0; uVar2 = uVar2 + 1) {
      for (lVar3 = 0; (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar3;
          lVar3 = lVar3 + 8) {
        uVar4 = *(ulong *)(param_3 + lVar3);
        if (uVar2 != param_4) {
          uVar4 = 0;
        }
        *(ulong *)(*param_1 + lVar3) = *(ulong *)(*param_1 + lVar3) | uVar4;
      }
      param_3 = param_3 + lVar5;
    }
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



/* Entry: 006e6234; end: 006e6273;  */

long FUN_006e6234(long param_1)

{
  int iVar1;
  long lVar2;
  
  func_0x006fdb2c();
  FUN_006e7eb4();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x006fd7d4();
    iVar1 = (int)lVar2;
    FUN_006e7ee8();
    if (iVar1 != 0) {
      return param_1;
    }
  }
  func_0x006fe7cc();
  return 0;
}



/* Entry: 006e6274; end: 006e64d7;  */

undefined8
FUN_006e6274(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *unaff_x22;
  
  func_0x006fdcd0();
  *param_2 = 0;
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    func_0x006fd894();
  }
  else {
    if (*(int *)(param_3 + 2) == 0) {
      func_0x006fe550();
      FUN_006e4264(param_3,param_4);
      if ((int)param_3 < 0) {
        func_0x006fda24();
        func_0x006fd82c();
        puVar3 = param_3;
        func_0x006fd82c();
        puVar4 = puVar3;
        func_0x006fd82c();
        puVar5 = puVar4;
        func_0x006fd82c();
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar5 + 2) = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          puVar6 = puVar4;
          FUN_006e3ed4();
          if (((int)puVar6 != 0) &&
             (puVar6 = puVar3, func_0x006fe690(), puVar6 != (undefined8 *)0x0)) {
            func_0x006fea74();
            func_0x006e3d58();
            if (puVar6 != (undefined8 *)0x0) {
              *(undefined4 *)(param_3 + 2) = 0;
              do {
                puVar6 = puVar3;
                FUN_006e3858();
                if ((int)puVar6 != 0) {
                  FUN_006e435c();
                  if ((int)param_3 == 0) {
                    *unaff_x22 = 1;
                    func_0x006fd894();
                    func_0x006fd5dc();
                    break;
                  }
                  puVar3 = puVar5;
                  FUN_006e3994(puVar5,param_4,puVar5);
                  if ((int)puVar3 == 0) break;
                  if ((*(int *)(puVar5 + 2) == 0) &&
                     (FUN_006e34dc(puVar5,param_4), puVar3 = puVar5, (int)puVar5 < 0)) {
                    func_0x006fdf80();
                    func_0x006e3d58();
                    if (puVar5 == (undefined8 *)0x0) break;
                  }
                  else {
                    iVar2 = (int)puVar3;
                    func_0x006fdf80();
                    func_0x006fdea4();
                    if (iVar2 == 0) break;
                  }
                  uVar7 = 1;
                  goto LAB_006e64c0;
                }
                iVar2 = 0;
                while( true ) {
                  puVar6 = puVar3;
                  func_0x006fe1a0();
                  iVar1 = (int)puVar6;
                  if (iVar1 != 0) break;
                  if ((0 < *(int *)(puVar4 + 1)) && ((*(byte *)*puVar4 & 1) != 0)) {
                    func_0x006fe2f4();
                    func_0x006fe6c0();
                    if (iVar1 == 0) goto LAB_006e64bc;
                  }
                  func_0x006fe2f4();
                  FUN_006e64d8();
                  iVar2 = iVar2 + 1;
                  if (iVar1 == 0) goto LAB_006e64bc;
                }
                if (iVar2 != 0) {
                  func_0x006fe308();
                  func_0x006fe7a0();
                  if (iVar1 == 0) break;
                }
                iVar2 = 0;
                while( true ) {
                  puVar6 = param_3;
                  func_0x006fe1a0();
                  iVar1 = (int)puVar6;
                  if (iVar1 != 0) break;
                  if ((0 < *(int *)(puVar5 + 1)) && ((*(byte *)*puVar5 & 1) != 0)) {
                    func_0x006fddb0();
                    func_0x006fe6c0();
                    if (iVar1 == 0) goto LAB_006e64bc;
                  }
                  func_0x006fddb0();
                  FUN_006e64d8();
                  iVar2 = iVar2 + 1;
                  if (iVar1 == 0) goto LAB_006e64bc;
                }
                if (iVar2 != 0) {
                  func_0x006fe0fc();
                  func_0x006fe7a0();
                  if (iVar1 == 0) break;
                }
                puVar6 = puVar3;
                FUN_006e34dc(puVar3,param_3);
                iVar2 = (int)puVar6;
                if (iVar2 < 0) {
                  func_0x006fddb0();
                  func_0x006e3520();
                  if (iVar2 == 0) break;
                  func_0x006fe0fc();
                }
                else {
                  func_0x006fe2f4();
                  func_0x006e3520();
                  if (iVar2 == 0) break;
                  func_0x006fe308();
                }
                func_0x006e34f8();
              } while (iVar2 != 0);
            }
          }
        }
LAB_006e64bc:
        uVar7 = 0;
LAB_006e64c0:
        func_0x006fd8f4();
        return uVar7;
      }
    }
    func_0x006fd894();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006e64d8; end: 006e6517;  */

void FUN_006e64d8(int param_1)

{
  func_0x006fda04();
  FUN_006e35dc();
  if (param_1 != 0) {
    func_0x006fe9a0();
    FUN_006e983c();
    func_0x006feac0();
    func_0x006feab4();
    func_0x006fdd4c();
  }
  return;
}



/* Entry: 006e6518; end: 006e6a33;  */

bool FUN_006e6518(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  
  *param_2 = 0;
  if (*(int *)(param_3 + 0x10) == 0) {
    func_0x006feae0();
    func_0x006fdb2c();
    FUN_006e34dc(param_3,param_4);
    if ((int)param_3 < 0) {
      plVar3 = unaff_x23;
      FUN_006e3858();
      if ((int)plVar3 == 0) {
        uVar1 = *(uint *)(unaff_x23 + 1);
        if (((int)uVar1 < 1) || ((*(byte *)*unaff_x23 & 1) == 0)) {
          uVar16 = *(uint *)(unaff_x22 + 1);
          if (((int)uVar16 < 1) || ((*(byte *)*unaff_x22 & 1) == 0)) goto LAB_006e65d4;
        }
        else {
          uVar16 = *(uint *)(unaff_x22 + 1);
        }
        if (uVar16 <= uVar1) {
          uVar1 = uVar16;
        }
        func_0x006fda24();
        func_0x006fd82c();
        plVar4 = plVar3;
        func_0x006fd82c();
        plVar5 = plVar4;
        func_0x006fd82c();
        plVar6 = plVar5;
        func_0x006fd82c();
        plVar7 = plVar6;
        func_0x006fd82c();
        plVar8 = plVar7;
        func_0x006fd82c();
        plVar9 = plVar8;
        func_0x006fd82c();
        plVar10 = plVar9;
        func_0x006fd82c();
        bVar2 = false;
        if (((((plVar3 != (long *)0x0) && (plVar4 != (long *)0x0)) && (plVar5 != (long *)0x0)) &&
            ((plVar6 != (long *)0x0 && (plVar7 != (long *)0x0)))) &&
           ((plVar8 != (long *)0x0 && ((plVar9 != (long *)0x0 && (plVar10 != (long *)0x0)))))) {
          plVar11 = plVar10;
          func_0x006fe55c();
          func_0x006e3d58();
          if ((plVar11 != (long *)0x0) &&
             (((plVar11 = plVar4, func_0x006e3d58(), plVar11 != (long *)0x0 &&
               (plVar11 = plVar5, FUN_006e3ed4(), (int)plVar11 != 0)) &&
              (plVar11 = plVar8, FUN_006e3ed4(), (int)plVar11 != 0)))) {
            lVar17 = (long)(int)uVar16;
            plVar11 = plVar3;
            func_0x006fde64();
            if ((((int)plVar11 != 0) && (plVar11 = plVar4, func_0x006fde64(), (int)plVar11 != 0)) &&
               ((plVar11 = plVar5, func_0x006fde64(), (int)plVar11 != 0 &&
                (plVar11 = plVar7, func_0x006fde64(), (int)plVar11 != 0)))) {
              lVar15 = (long)(int)uVar1;
              plVar11 = plVar6;
              FUN_006e3fc8(plVar6,lVar15);
              if (((((int)plVar11 != 0) &&
                   (plVar11 = plVar8, FUN_006e3fc8(plVar8,lVar15), (int)plVar11 != 0)) &&
                  (plVar11 = plVar9, func_0x006fde64(), (int)plVar11 != 0)) &&
                 (plVar11 = plVar10, func_0x006fde64(), (int)plVar11 != 0)) {
                uVar16 = (uVar1 + uVar16) * 0x40;
                if (uVar16 < uVar1 << 6) {
                  func_0x006fd868();
                }
                else {
                  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
                    uVar18 = -((ulong)(*(uint *)*plVar3 & *(uint *)*plVar4) & 1);
                    lVar12 = *plVar9;
                    func_0x006fe244();
                    uVar14 = uVar18;
                    if (lVar12 != 0) {
                      uVar14 = 0;
                    }
                    func_0x006fe23c(*plVar4,uVar14,*plVar9);
                    func_0x006fe244(*plVar9,*plVar3,*plVar4);
                    func_0x006fe23c(*plVar3,uVar18 & -lVar12,*plVar9,*plVar3);
                    lVar12 = *plVar9;
                    FUN_006e3678(lVar12,*plVar5,*plVar7,lVar17);
                    lVar13 = *plVar10;
                    func_0x006e3b2c(lVar13,*plVar9,*unaff_x22,lVar17);
                    func_0x006fe734(*plVar9,lVar12 - lVar13,*plVar9,*plVar10);
                    func_0x006fe52c(*plVar5);
                    func_0x006fe734();
                    func_0x006fea48(plVar7);
                    func_0x006fe734();
                    FUN_006e3678(*plVar9,*plVar6,*plVar8,lVar15);
                    func_0x006e3b2c(*plVar10,*plVar9,*unaff_x23,lVar15);
                    func_0x006fe720(*plVar9,lVar12 - lVar13,*plVar9,*plVar10);
                    func_0x006fe52c(*plVar6);
                    func_0x006fe720();
                    func_0x006fea48(plVar8);
                    func_0x006fe720();
                    uVar19 = (*(ulong *)*plVar3 & 1) - 1;
                    uVar14 = (*(ulong *)*plVar4 & 1) - 1;
                    FUN_006e6e24((ulong *)*plVar3,uVar19,*plVar9,lVar17);
                    uVar18 = -((ulong)(*(uint *)*plVar6 | *(uint *)*plVar5) & 1);
                    FUN_006e6e6c((uint *)*plVar5,uVar18 & uVar19,*unaff_x22,*plVar9,lVar17);
                    lVar12 = *plVar6;
                    FUN_006e6e6c(lVar12,uVar18 & uVar19,*unaff_x23,*plVar9,lVar15);
                    func_0x006fde34(plVar5);
                    FUN_006e6eb8(*plVar6,lVar12,uVar19,*plVar9,lVar15);
                    FUN_006e6e24(*plVar4,uVar14,*plVar9,lVar17);
                    uVar18 = -((ulong)(*(uint *)*plVar8 | *(uint *)*plVar7) & 1);
                    FUN_006e6e6c((uint *)*plVar7,uVar18 & uVar14,*unaff_x22,*plVar9,lVar17);
                    lVar12 = *plVar8;
                    FUN_006e6e6c(lVar12,uVar18 & uVar14,*unaff_x23,*plVar9,lVar15);
                    func_0x006fde34(plVar7);
                    FUN_006e6eb8(*plVar8,lVar12,uVar14,*plVar9,lVar15);
                  }
                  FUN_006e435c();
                  if ((int)plVar3 != 0) {
                    func_0x006e3d58();
                    bVar2 = unaff_x21 != 0;
                    goto LAB_006e6a2c;
                  }
                  *unaff_x20 = 1;
                  func_0x006fd894();
                }
                func_0x006fd5dc();
              }
            }
          }
          bVar2 = false;
        }
LAB_006e6a2c:
        func_0x006fd8f4();
        return bVar2;
      }
      FUN_006e435c();
      if ((int)unaff_x22 != 0) {
        *(undefined4 *)(unaff_x21 + 0x10) = 0;
        *(undefined4 *)(unaff_x21 + 8) = 0;
        return true;
      }
LAB_006e65d4:
      *unaff_x20 = 1;
      func_0x006fd894();
      goto LAB_006e6568;
    }
  }
  func_0x006fd894();
LAB_006e6568:
  func_0x006fd5dc();
  return false;
}



/* Entry: 006e6a34; end: 006e6a8b;  */

void FUN_006e6a34(int param_1)

{
  int iVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x006fd9b0();
  FUN_006e35dc();
  if (param_1 != 0) {
    iVar1 = (int)*unaff_x20;
    FUN_006e9378();
    if (iVar1 != 0) {
      *(undefined4 *)(unaff_x20 + 2) = 0;
      *(undefined4 *)(unaff_x20 + 1) = *(undefined4 *)(unaff_x19 + 8);
    }
  }
  return;
}



/* Entry: 006e6a8c; end: 006e6afb;  */

long FUN_006e6a8c(long param_1)

{
  func_0x006fdb48();
  func_0x006fe070();
  func_0x006fd82c();
  if (((param_1 == 0) || (func_0x006fdf58(), param_1 == 0)) ||
     (func_0x006fe750(), (int)param_1 == 0)) {
    param_1 = 0;
  }
  else {
    func_0x006fddbc();
    func_0x006fe4b0();
    FUN_006e5d10();
  }
  func_0x006fd8f4();
  return param_1;
}



/* Entry: 006e6afc; end: 006e6b3b;  */

void FUN_006e6afc(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x19;
  long *unaff_x20;
  int iVar9;
  ulong uVar10;
  ulong in_stack_ffffffffffffffd8;
  
  func_0x006fd9dc();
  puVar4 = &stack0xffffffffffffffdc;
  FUN_006e6b3c();
  if ((int)param_1 != 0) {
    uVar8 = in_stack_ffffffffffffffd8 >> 0x20;
    func_0x006fe574();
    if ((int)(uint)uVar8 < 0) {
      func_0x006fd6a0();
      func_0x006fd5dc();
    }
    else {
      uVar10 = uVar8;
      func_0x006fda04();
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar4 + 0x10);
      uVar10 = uVar10 >> 6 & 0x3ffffff;
      iVar9 = (int)uVar10;
      FUN_006e35dc();
      if ((int)param_1 != 0) {
        lVar5 = *unaff_x20;
        lVar3 = *unaff_x19;
        uVar7 = (ulong)*(uint *)(unaff_x20 + 1);
        *(undefined8 *)(lVar3 + (long)(int)(*(uint *)(unaff_x20 + 1) + iVar9) * 8) = 0;
        uVar2 = (uint)uVar8 & 0x3f;
        if ((uVar8 & 0x3f) == 0) {
          while (iVar6 = (int)uVar7, 0 < iVar6) {
            uVar7 = uVar7 - 1;
            *(undefined8 *)
             (lVar3 + (ulong)(uint)((int)((uVar8 & 0xffffffff) >> 6) + -1 + iVar6) * 8) =
                 *(undefined8 *)(lVar5 + (uVar7 & 0xffffffff) * 8);
          }
        }
        else {
          lVar1 = lVar3 + uVar10 * 8;
          while (0 < (int)uVar7) {
            uVar8 = *(ulong *)(lVar5 + (uVar7 - 1 & 0xffffffff) * 8);
            *(ulong *)(lVar1 + uVar7 * 8) =
                 *(ulong *)(lVar1 + uVar7 * 8) | uVar8 >> ((ulong)(0x40 - uVar2) & 0x3f);
            *(ulong *)(lVar3 + (ulong)(uint)(iVar9 + -1 + (int)uVar7) * 8) = uVar8 << uVar2;
            uVar7 = uVar7 - 1;
          }
        }
        func_0x006fd9c0();
        *(int *)(unaff_x19 + 1) = (int)unaff_x20[1] + iVar9 + 1;
        func_0x006fdd4c();
      }
    }
    return;
  }
  return;
}



/* Entry: 006e6b3c; end: 006e6d2f;  */

long * FUN_006e6b3c(long *param_1,int *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  
  func_0x006fdc38();
  iVar11 = *(int *)(param_3 + 8);
  if (*(int *)(param_3 + 8) <= *(int *)(param_4 + 8)) {
    iVar11 = *(int *)(param_4 + 8);
  }
  if (iVar11 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar2 = param_1;
  func_0x006fe040();
  func_0x006fd82c();
  plVar3 = plVar2;
  func_0x006fd82c();
  plVar4 = plVar3;
  func_0x006fd82c();
  plVar7 = (long *)0x0;
  if (((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) && (plVar4 != (long *)0x0)) {
    plVar7 = plVar2;
    func_0x006fe690();
    if ((plVar7 != (long *)0x0) &&
       (plVar7 = plVar3, func_0x006e3d58(plVar3,param_4), plVar7 != (long *)0x0)) {
      lVar8 = (long)iVar11;
      plVar7 = plVar2;
      func_0x006fe7f0();
      if (((int)plVar7 != 0) &&
         ((plVar7 = plVar3, func_0x006fe7f0(), (int)plVar7 != 0 &&
          (plVar7 = plVar4, func_0x006fe7f0(), (int)plVar7 != 0)))) {
        uVar12 = (*(int *)(param_4 + 8) + *(int *)(param_3 + 8)) * 0x40;
        if ((uint)(*(int *)(param_3 + 8) << 6) <= uVar12) {
          iVar11 = 0;
          for (; puVar6 = (uint *)*plVar2, uVar12 != 0; uVar12 = uVar12 - 1) {
            uVar9 = -((ulong)(*puVar6 & *(uint *)*plVar3) & 1);
            lVar5 = *plVar4;
            func_0x006fe244();
            uVar1 = uVar9;
            if (lVar5 != 0) {
              uVar1 = 0;
            }
            func_0x006fe23c(*plVar2,uVar1,*plVar4);
            func_0x006fe244(*plVar4,*plVar3,*plVar2);
            func_0x006fe23c(*plVar3,uVar9 & -lVar5,*plVar4,*plVar3);
            lVar5 = (*(ulong *)*plVar2 & 1) - 1;
            lVar10 = (*(ulong *)*plVar3 & 1) - 1;
            iVar11 = iVar11 - ((uint)lVar10 & (uint)lVar5);
            FUN_006e6e24((ulong *)*plVar2,lVar5,*plVar4,lVar8);
            FUN_006e6e24(*plVar3,lVar10,*plVar4,lVar8);
          }
          lVar10 = *plVar3;
          for (lVar5 = 0; lVar8 != lVar5; lVar5 = lVar5 + 1) {
            *(ulong *)(lVar10 + lVar5 * 8) =
                 *(ulong *)(lVar10 + lVar5 * 8) | *(ulong *)(puVar6 + lVar5 * 2);
          }
          *param_2 = iVar11;
          FUN_006e3edc(param_1,lVar10,lVar8);
          plVar7 = param_1;
          goto LAB_006e6c0c;
        }
        func_0x006fd868();
        func_0x006fd5dc();
      }
    }
    plVar7 = (long *)0x0;
  }
LAB_006e6c0c:
  func_0x006fd8f4();
  return plVar7;
}



/* Entry: 006e6d30; end: 006e6d5f;  */

undefined8 FUN_006e6d30(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  
  if (((int)param_2[2] != 0) || ((int)param_3[2] != 0)) {
    func_0x006fd6a0();
    func_0x006fd5dc();
    return 0;
  }
  func_0x006fdc38();
  uVar2 = (uint)param_2[1];
  if ((uVar2 == 0) || (uVar1 = (uint)param_3[1], uVar1 == 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  puVar5 = param_1;
  func_0x006fe070();
  puVar9 = param_1;
  if ((param_1 != param_2 && param_1 != param_3) ||
     (func_0x006fd82c(), puVar9 = puVar5, puVar5 != (ulong *)0x0)) {
    iVar4 = (int)puVar5;
    *(uint *)(puVar9 + 2) = (uint)param_3[2] ^ (uint)param_2[2];
    if (uVar2 == 8 && uVar1 == 8) {
      puVar5 = puVar9;
      FUN_006e35dc(puVar9,0x10);
      if ((int)puVar5 != 0) {
        *(undefined4 *)(puVar9 + 1) = 0x10;
        uVar6 = *puVar9;
        func_0x006e6fe0(uVar6,*param_2,*param_3);
LAB_006e853c:
        if (param_1 != puVar9) {
          func_0x006fdf28();
          func_0x006e3d58();
          if (uVar6 == 0) goto LAB_006e8604;
        }
        uVar8 = 1;
        goto LAB_006e8608;
      }
    }
    else if (((int)uVar2 < 0x10 || (int)uVar1 < 0x10) || 2 < (uVar2 - uVar1) + 1) {
      func_0x006fe198();
      if (iVar4 != 0) {
        *(uint *)(puVar9 + 1) = uVar1 + uVar2;
        uVar6 = *puVar9;
        func_0x006e8618(uVar6,*param_2,(long)(int)uVar2,*param_3,(long)(int)uVar1);
        goto LAB_006e853c;
      }
    }
    else {
      uVar3 = uVar1;
      if (-1 < (int)(uVar2 - uVar1)) {
        uVar3 = uVar2;
      }
      uVar7 = (ulong)uVar3;
      func_0x006e3dfc();
      uVar6 = uVar7;
      func_0x006fd82c();
      if (uVar6 != 0) {
        uVar3 = (int)uVar7 - 1;
        iVar4 = 1 << (ulong)(uVar3 & 0x1f);
        if (iVar4 < (int)uVar2 || iVar4 < (int)uVar1) {
          FUN_006e35dc(uVar6,(long)(8 << (ulong)(uVar3 & 0x1f)));
          if (((int)uVar6 != 0) && (func_0x006fe198(), (int)uVar6 != 0)) {
            func_0x006fe0a0();
            FUN_006f80ac();
LAB_006e85f8:
            *(uint *)(puVar9 + 1) = uVar1 + uVar2;
            goto LAB_006e853c;
          }
        }
        else {
          FUN_006e35dc(uVar6,4 << (ulong)(uVar3 & 0x1f));
          if (((int)uVar6 != 0) && (func_0x006fe198(), (int)uVar6 != 0)) {
            func_0x006fe0a0();
            func_0x006f8380();
            goto LAB_006e85f8;
          }
        }
      }
    }
  }
LAB_006e8604:
  uVar8 = 0;
LAB_006e8608:
  func_0x006fd8f4();
  return uVar8;
}



/* Entry: 006e6d60; end: 006e6e23;  */

undefined8 FUN_006e6d60(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  func_0x006fe858();
  puVar2 = param_1;
  func_0x006fe070();
  func_0x006fd82c();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x006fdf80();
    func_0x006e3d58();
    if ((puVar3 != (undefined8 *)0x0) &&
       (puVar3 = puVar2, FUN_006e35dc(puVar2,(long)*(int *)(param_1 + 1)), (int)puVar3 != 0)) {
      iVar1 = *(int *)(param_1 + 1);
      for (uVar5 = 0; (uint)(iVar1 << 6) >> (ulong)(uVar5 & 0x1f) != 0; uVar5 = uVar5 + 1) {
        FUN_006e977c(*puVar2,*param_1,1 << (ulong)(uVar5 & 0x1f),(long)*(int *)(param_1 + 1));
        FUN_006e4030(*param_1,-(ulong)(param_3 >> (ulong)(uVar5 & 0x1f) & 1),*puVar2,*param_1,
                     (long)*(int *)(param_1 + 1));
      }
      uVar4 = 1;
      goto LAB_006e6e14;
    }
  }
  uVar4 = 0;
LAB_006e6e14:
  func_0x006fd8f4();
  return uVar4;
}



/* Entry: 006e6e24; end: 006e6e6b;  */

void FUN_006e6e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *unaff_x22;
  
  puVar3 = param_4;
  func_0x006fdbac();
  puVar2 = unaff_x22;
  FUN_006e983c(param_3);
  puVar1 = unaff_x22;
  func_0x006fda18();
  for (; param_4 != (ulong *)0x0; param_4 = (ulong *)((long)param_4 + -1)) {
    *puVar1 = *unaff_x22 & ~(ulong)puVar2 | *puVar3 & (ulong)puVar2;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
    unaff_x22 = unaff_x22 + 1;
  }
  return;
}



/* Entry: 006e6e6c; end: 006e6eb7;  */

ulong FUN_006e6e6c(void)

{
  ulong in_x3;
  ulong unaff_x21;
  
  func_0x006fde00();
  FUN_006e3678(in_x3);
  func_0x006fda18();
  FUN_006e4030();
  return in_x3 & unaff_x21;
}



/* Entry: 006e6eb8; end: 006e6efb;  */

void FUN_006e6eb8(long param_1)

{
  long in_x4;
  uint unaff_w21;
  uint unaff_w22;
  
  func_0x006fdb48();
  func_0x006fe4d0();
  FUN_006e6e24();
  if (in_x4 != 0) {
    param_1 = param_1 + in_x4 * 8;
    *(ulong *)(param_1 + -8) = *(ulong *)(param_1 + -8) | (ulong)(unaff_w21 & unaff_w22) << 0x3f;
  }
  return;
}



/* Entry: 006e6efc; end: 006e7eb3;  */

ulong FUN_006e6efc(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = 0;
  if (param_3 != 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar12 = *param_2 * param_4;
      uVar14 = *param_1 + uVar11;
      uVar13 = (ulong)CARRY8(*param_1,uVar11) + SUB168(auVar1 * auVar6,8) +
               (ulong)CARRY8(uVar14,uVar12);
      *param_1 = uVar14 + uVar12;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar14 = SUB168(auVar2 * auVar7,8);
      uVar12 = param_2[1] * param_4;
      uVar11 = uVar12 + param_1[1];
      if (CARRY8(uVar12,param_1[1])) {
        uVar14 = uVar14 + 1;
      }
      if (CARRY8(uVar11,uVar13)) {
        uVar14 = uVar14 + 1;
      }
      param_1[1] = uVar11 + uVar13;
      uVar13 = param_2[2] * param_4;
      uVar11 = uVar13 + param_1[2];
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar12 = SUB168(auVar3 * auVar8,8);
      if (CARRY8(uVar13,param_1[2])) {
        uVar12 = uVar12 + 1;
      }
      if (CARRY8(uVar11,uVar14)) {
        uVar12 = uVar12 + 1;
      }
      param_1[2] = uVar11 + uVar14;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar11 = SUB168(auVar4 * auVar9,8);
      uVar13 = param_2[3] * param_4;
      uVar14 = uVar13 + param_1[3];
      if (CARRY8(uVar13,param_1[3])) {
        uVar11 = uVar11 + 1;
      }
      if (CARRY8(uVar14,uVar12)) {
        uVar11 = uVar11 + 1;
      }
      param_1[3] = uVar14 + uVar12;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar14 = 0; param_3 != uVar14; uVar14 = uVar14 + 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2[uVar14];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      uVar13 = param_2[uVar14] * param_4;
      uVar12 = param_1[uVar14] + uVar11;
      uVar11 = (ulong)CARRY8(param_1[uVar14],uVar11) + SUB168(auVar5 * auVar10,8) +
               (ulong)CARRY8(uVar12,uVar13);
      param_1[uVar14] = uVar12 + uVar13;
    }
  }
  return uVar11;
}



/* Entry: 006e7eb4; end: 006e7ee7;  */

void FUN_006e7eb4(void)

{
  qword *pqVar1;
  
  pqVar1 = &segment_command_00000020.vmsize;
  FUN_00701e90();
  if (pqVar1 != (qword *)0x0) {
    pqVar1[3] = 0;
    pqVar1[2] = 0;
    pqVar1[5] = 0;
    pqVar1[4] = 0;
    pqVar1[7] = 0;
    pqVar1[6] = 0;
    *pqVar1 = 0;
    pqVar1[1] = 0;
    pqVar1[2] = 0;
    pqVar1[3] = 0;
    pqVar1[4] = 0;
    pqVar1[5] = 0;
  }
  return;
}



/* Entry: 006e7ee8; end: 006e7f87;  */

undefined8 FUN_006e7ee8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_006e7f88();
  if (((int)lVar1 == 0) || ((param_3 == 0 && (FUN_006e4450(), param_3 = lVar1, lVar1 == 0)))) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar1 = param_1;
  FUN_006e805c(param_1,*(int *)(param_1 + 0x20) << 7);
  if ((int)lVar1 != 0) {
    uVar2 = 0;
    FUN_006e4664(0,param_1,param_1,param_1 + 0x18,param_3);
    if ((int)uVar2 != 0) {
      func_0x006fe900();
      goto LAB_006e7f78;
    }
  }
  uVar2 = 0;
LAB_006e7f78:
  func_0x006fe7b0();
  return uVar2;
}



/* Entry: 006e7f88; end: 006e805b;  */

undefined8 FUN_006e7f88(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x006fda04();
  FUN_006e3858();
  if (param_2 == 0) {
    if ((*(int *)(unaff_x20 + 1) < 1) || ((*(byte *)*unaff_x20 & 1) == 0)) {
      func_0x006fd894();
    }
    else if (*(int *)(unaff_x20 + 2) == 0) {
      lVar4 = unaff_x19 + 0x18;
      func_0x006e3d58();
      if (lVar4 != 0) {
        FUN_006e374c(unaff_x19 + 0x18);
        uVar2 = 0;
        uVar3 = 1;
        lVar4 = 0x40;
        do {
          uVar1 = uVar3 & 1;
          uVar5 = **(ulong **)(unaff_x19 + 0x18) & -uVar1;
          uVar3 = (uVar5 & uVar3) + ((uVar5 ^ uVar3) >> 1);
          uVar2 = -uVar1 & 0x8000000000000000 | uVar2 >> 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        *(ulong *)(unaff_x19 + 0x30) = uVar2;
        *(undefined8 *)(unaff_x19 + 0x38) = 0;
        return 1;
      }
      func_0x006fd894();
    }
    else {
      func_0x006fd6a0();
    }
  }
  else {
    func_0x006fd894();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006e805c; end: 006e80e3;  */

long * FUN_006e805c(long *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 < 0) {
    return (long *)0x0;
  }
  uVar3 = (ulong)(param_2 >> 6);
  if ((int)param_1[1] <= (int)(param_2 >> 6)) {
    plVar1 = param_1;
    func_0x006fdab0();
    FUN_006e35dc();
    if ((int)plVar1 == 0) {
      return plVar1;
    }
    for (lVar2 = (long)(int)param_1[1]; lVar2 <= (long)uVar3; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
    }
    *(uint *)(param_1 + 1) = (param_2 >> 6) + 1;
  }
  *(ulong *)(*param_1 + uVar3 * 8) = *(ulong *)(*param_1 + uVar3 * 8) | 1L << (param_2 & 0x3f);
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006e80e4; end: 006e815f;  */

bool FUN_006e80e4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  func_0x006fe32c();
  func_0x006fd8fc();
  func_0x00706464(param_2);
  lVar2 = *unaff_x20;
  func_0x0070649c();
  if (lVar2 == 0) {
    func_0x00706480();
    if (*unaff_x20 == 0) {
      func_0x006fdc14();
      FUN_006e6234();
      *unaff_x20 = unaff_x19;
      bVar1 = unaff_x19 != 0;
    }
    else {
      bVar1 = true;
    }
    func_0x007064b8();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 006e8160; end: 006e81ef;  */

long * FUN_006e8160(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar8;
  
  if ((int)param_2[2] == 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      plVar2 = param_1;
      func_0x006fe900(param_1,(long)*(int *)(param_3 + 0x20) << 1);
      if (((int)plVar2 != 0) && (func_0x006fe198(), (int)plVar2 != 0)) {
        lVar4 = (long)*(int *)(param_3 + 0x20);
        *(int *)(param_1 + 1) = *(int *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 2) = 0;
        lVar3 = *param_1;
        lVar5 = *param_2;
        lVar6 = (long)(int)param_2[1];
        func_0x006fe858();
        if (lVar4 == *(int *)(param_3 + 0x20) && lVar6 == (long)*(int *)(param_3 + 0x20) * 2) {
          func_0x006fd8fc();
          uVar8 = 0;
          for (; lVar4 != 0; lVar4 = lVar4 + -1) {
            func_0x006fddbc();
            FUN_006e6efc();
            uVar7 = *(ulong *)(lVar5 + unaff_x19 * 8);
            uVar1 = lVar3 + uVar8 + uVar7;
            uVar8 = (ulong)((uint)(uVar1 <= uVar7) & ((uint)(lVar3 + uVar8 != 0) | (uint)uVar8));
            *(ulong *)(lVar5 + unaff_x19 * 8) = uVar1;
            lVar5 = lVar5 + 8;
          }
          func_0x006fdf28();
          func_0x006e3b2c();
          func_0x006fdb54(unaff_x20,uVar8 - lVar3);
          FUN_006e4030();
          plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          func_0x006fd894();
          func_0x006fd5dc();
          plVar2 = (long *)0x0;
        }
        return plVar2;
      }
    }
  }
  else {
    func_0x006fd6a0();
    func_0x006fd5dc();
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 006e81f0; end: 006e8213;  */

bool FUN_006e81f0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[2] != 0) {
    return false;
  }
  uVar2 = 0;
  for (uVar1 = (ulong)*(int *)(param_2 + 0x20); uVar1 < (ulong)(long)(int)param_1[1];
      uVar1 = uVar1 + 1) {
    uVar2 = *(ulong *)(*param_1 + uVar1 * 8) | uVar2;
  }
  return uVar2 == 0;
}



/* Entry: 006e8214; end: 006e82e3;  */

undefined8 FUN_006e8214(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  ulong uVar4;
  
  func_0x006fe858();
  if (param_2 == *(int *)(param_5 + 0x20) && param_4 == (long)*(int *)(param_5 + 0x20) * 2) {
    func_0x006fd8fc();
    uVar4 = 0;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x006fddbc();
      FUN_006e6efc();
      uVar3 = *(ulong *)(param_3 + unaff_x19 * 8);
      uVar1 = param_1 + uVar4 + uVar3;
      uVar4 = (ulong)((uint)(uVar1 <= uVar3) & ((uint)(param_1 + uVar4 != 0) | (uint)uVar4));
      *(ulong *)(param_3 + unaff_x19 * 8) = uVar1;
      param_3 = param_3 + 8;
    }
    func_0x006fdf28();
    func_0x006e3b2c();
    func_0x006fdb54();
    FUN_006e4030();
    uVar2 = 1;
  }
  else {
    func_0x006fd894();
    func_0x006fd5dc();
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 006e82e4; end: 006e838b;  */

long * FUN_006e82e4(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                   ulong *param_6)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  bool bVar168;
  undefined1 uVar169;
  long *plVar170;
  ulong *puVar171;
  code *pcVar172;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar173;
  ulong uVar174;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  long extraout_x11;
  long extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong uVar175;
  long extraout_x12;
  long extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar176;
  ulong uVar177;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong uVar178;
  ulong uVar179;
  ulong uVar180;
  ulong uVar181;
  ulong uVar182;
  ulong uVar183;
  ulong uVar184;
  long lVar185;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  long lVar186;
  long lVar187;
  long lVar188;
  long lVar189;
  long extraout_x16;
  long extraout_x16_00;
  ulong extraout_x16_01;
  ulong uVar190;
  long lVar191;
  ulong uVar192;
  long lVar193;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong auStack_b8 [5];
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_28;
  
  func_0x006fd5e8();
  if ((ulong *)((long)&MACH_HEADER.cpusubtype + 1) < param_4 ||
      param_2 != (ulong *)((long)param_4 * 2)) {
    _abort();
  }
  else {
    bVar168 = param_4 == (ulong *)&MACH_HEADER.cpusubtype;
    if (bVar168) {
      func_0x006fd534(uStack_28);
      if (bVar168) {
        func_0x006fec40();
        uVar174 = extraout_x11_02;
        if (CARRY8(extraout_x9_00,extraout_x8_00)) {
          uVar174 = extraout_x11_02 + 1;
        }
        param_1[1] = extraout_x9_00 + extraout_x8_00;
        uVar192 = param_3[1];
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar192;
        auVar126._8_8_ = 0;
        auVar126._0_8_ = uVar192;
        uVar179 = SUB168(auVar44 * auVar126,8);
        uVar181 = uVar192 * uVar192 + uVar174 + extraout_x10_02;
        if (CARRY8(uVar192 * uVar192,uVar174 + extraout_x10_02)) {
          uVar179 = uVar179 + 1;
        }
        bVar168 = CARRY8(uVar179,(ulong)CARRY8(uVar174,extraout_x10_02));
        uVar179 = uVar179 + CARRY8(uVar174,extraout_x10_02);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = *param_3;
        auVar127._8_8_ = 0;
        auVar127._0_8_ = param_3[2];
        uVar180 = SUB168(auVar45 * auVar127,8);
        uVar175 = *param_3 * param_3[2];
        uVar174 = uVar181 + uVar175;
        uVar192 = uVar180;
        if (CARRY8(uVar181,uVar175)) {
          uVar192 = uVar180 + 1;
        }
        uVar181 = 1;
        if (bVar168) {
          uVar181 = 2;
        }
        uVar173 = uVar179 + uVar192;
        if (!CARRY8(uVar179,uVar192)) {
          uVar181 = (ulong)bVar168;
        }
        if (CARRY8(uVar174,uVar175)) {
          uVar180 = uVar180 + 1;
        }
        param_1[2] = uVar174 + uVar175;
        auVar46._8_8_ = 0;
        auVar46._0_8_ = *param_3;
        auVar128._8_8_ = 0;
        auVar128._0_8_ = param_3[3];
        uVar192 = SUB168(auVar46 * auVar128,8);
        uVar175 = *param_3 * param_3[3];
        uVar174 = uVar175 + uVar173 + uVar180;
        uVar179 = uVar192;
        if (CARRY8(uVar175,uVar173 + uVar180)) {
          uVar179 = uVar192 + 1;
        }
        bVar168 = CARRY8(uVar179 + uVar181,(ulong)CARRY8(uVar173,uVar180));
        uVar173 = uVar179 + uVar181 + (ulong)CARRY8(uVar173,uVar180);
        uVar180 = uVar174 + uVar175;
        if (CARRY8(uVar174,uVar175)) {
          uVar192 = uVar192 + 1;
        }
        uVar174 = 1;
        if (CARRY8(uVar179,uVar181) || bVar168) {
          uVar174 = 2;
        }
        uVar175 = uVar173 + uVar192;
        if (!CARRY8(uVar173,uVar192)) {
          uVar174 = (ulong)(CARRY8(uVar179,uVar181) || bVar168);
        }
        auVar47._8_8_ = 0;
        auVar47._0_8_ = param_3[1];
        auVar129._8_8_ = 0;
        auVar129._0_8_ = param_3[2];
        uVar192 = SUB168(auVar47 * auVar129,8);
        uVar173 = param_3[1] * param_3[2];
        uVar181 = uVar180 + uVar173;
        uVar179 = uVar192;
        if (CARRY8(uVar180,uVar173)) {
          uVar179 = uVar192 + 1;
        }
        uVar180 = uVar175 + uVar179;
        if (CARRY8(uVar181,uVar173)) {
          uVar192 = uVar192 + 1;
        }
        uVar182 = uVar180 + uVar192;
        uVar192 = uVar174 + CARRY8(uVar175,uVar179) + (ulong)CARRY8(uVar180,uVar192);
        param_1[3] = uVar181 + uVar173;
        uVar179 = param_3[2];
        auVar48._8_8_ = 0;
        auVar48._0_8_ = uVar179;
        auVar130._8_8_ = 0;
        auVar130._0_8_ = uVar179;
        uVar181 = SUB168(auVar48 * auVar130,8);
        uVar174 = uVar179 * uVar179 + uVar182;
        if (CARRY8(uVar179 * uVar179,uVar182)) {
          uVar181 = uVar181 + 1;
        }
        auVar49._8_8_ = 0;
        auVar49._0_8_ = param_3[1];
        auVar131._8_8_ = 0;
        auVar131._0_8_ = param_3[3];
        uVar175 = SUB168(auVar49 * auVar131,8);
        uVar173 = param_3[1] * param_3[3];
        uVar179 = uVar174 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar174,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar192,uVar181)) {
          uVar174 = 1;
        }
        uVar182 = uVar192 + uVar181 + uVar180;
        if (!CARRY8(uVar192 + uVar181,uVar180)) {
          uVar174 = (ulong)CARRY8(uVar192,uVar181);
        }
        uVar181 = uVar179 + uVar173;
        if (CARRY8(uVar179,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar179 = uVar182 + uVar175;
        if (CARRY8(uVar182,uVar175)) {
          uVar174 = uVar174 + 1;
        }
        auVar50._8_8_ = 0;
        auVar50._0_8_ = *param_3;
        auVar132._8_8_ = 0;
        auVar132._0_8_ = param_3[4];
        uVar175 = SUB168(auVar50 * auVar132,8);
        uVar173 = *param_3 * param_3[4];
        uVar192 = uVar181 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar181 = uVar179 + uVar180;
        if (CARRY8(uVar192,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar182 = uVar181 + uVar175;
        uVar180 = uVar174 + CARRY8(uVar179,uVar180) + (ulong)CARRY8(uVar181,uVar175);
        param_1[4] = uVar192 + uVar173;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = *param_3;
        auVar133._8_8_ = 0;
        auVar133._0_8_ = param_3[5];
        uVar179 = SUB168(auVar51 * auVar133,8);
        uVar192 = *param_3 * param_3[5];
        uVar174 = uVar192 + uVar182;
        uVar181 = uVar179;
        if (CARRY8(uVar192,uVar182)) {
          uVar181 = uVar179 + 1;
        }
        uVar175 = uVar174 + uVar192;
        if (CARRY8(uVar174,uVar192)) {
          uVar179 = uVar179 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar180,uVar181)) {
          uVar174 = 1;
        }
        uVar192 = uVar180 + uVar181 + uVar179;
        if (!CARRY8(uVar180 + uVar181,uVar179)) {
          uVar174 = (ulong)CARRY8(uVar180,uVar181);
        }
        auVar52._8_8_ = 0;
        auVar52._0_8_ = param_3[1];
        auVar134._8_8_ = 0;
        auVar134._0_8_ = param_3[4];
        uVar180 = SUB168(auVar52 * auVar134,8);
        uVar173 = param_3[1] * param_3[4];
        uVar181 = uVar175 + uVar173;
        uVar179 = uVar180;
        if (CARRY8(uVar175,uVar173)) {
          uVar179 = uVar180 + 1;
        }
        uVar175 = uVar192 + uVar179;
        uVar182 = uVar181 + uVar173;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar180 + 1;
        }
        uVar181 = uVar175 + uVar180;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = param_3[2];
        auVar135._8_8_ = 0;
        auVar135._0_8_ = param_3[3];
        uVar176 = SUB168(auVar53 * auVar135,8);
        uVar183 = param_3[2] * param_3[3];
        uVar173 = uVar182 + uVar183;
        uVar190 = uVar176;
        if (CARRY8(uVar182,uVar183)) {
          uVar190 = uVar176 + 1;
        }
        uVar182 = uVar181 + uVar190;
        if (CARRY8(uVar173,uVar183)) {
          uVar176 = uVar176 + 1;
        }
        uVar177 = uVar182 + uVar176;
        uVar192 = uVar174 + CARRY8(uVar192,uVar179) + (ulong)CARRY8(uVar175,uVar180) +
                  (ulong)CARRY8(uVar181,uVar190) + (ulong)CARRY8(uVar182,uVar176);
        param_1[5] = uVar173 + uVar183;
        uVar179 = param_3[3];
        auVar54._8_8_ = 0;
        auVar54._0_8_ = uVar179;
        auVar136._8_8_ = 0;
        auVar136._0_8_ = uVar179;
        uVar181 = SUB168(auVar54 * auVar136,8);
        uVar174 = uVar179 * uVar179 + uVar177;
        if (CARRY8(uVar179 * uVar179,uVar177)) {
          uVar181 = uVar181 + 1;
        }
        auVar55._8_8_ = 0;
        auVar55._0_8_ = param_3[2];
        auVar137._8_8_ = 0;
        auVar137._0_8_ = param_3[4];
        uVar175 = SUB168(auVar55 * auVar137,8);
        uVar173 = param_3[2] * param_3[4];
        uVar179 = uVar174 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar174,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar192,uVar181)) {
          uVar174 = 1;
        }
        uVar182 = uVar192 + uVar181 + uVar180;
        if (!CARRY8(uVar192 + uVar181,uVar180)) {
          uVar174 = (ulong)CARRY8(uVar192,uVar181);
        }
        uVar181 = uVar179 + uVar173;
        if (CARRY8(uVar179,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar179 = uVar182 + uVar175;
        if (CARRY8(uVar182,uVar175)) {
          uVar174 = uVar174 + 1;
        }
        auVar56._8_8_ = 0;
        auVar56._0_8_ = param_3[1];
        auVar138._8_8_ = 0;
        auVar138._0_8_ = param_3[5];
        uVar175 = SUB168(auVar56 * auVar138,8);
        uVar173 = param_3[1] * param_3[5];
        uVar192 = uVar181 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar181 = uVar179 + uVar180;
        uVar182 = uVar192 + uVar173;
        if (CARRY8(uVar192,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar192 = uVar181 + uVar175;
        auVar57._8_8_ = 0;
        auVar57._0_8_ = *param_3;
        auVar139._8_8_ = 0;
        auVar139._0_8_ = param_3[6];
        uVar176 = SUB168(auVar57 * auVar139,8);
        uVar183 = *param_3 * param_3[6];
        uVar173 = uVar182 + uVar183;
        uVar190 = uVar176;
        if (CARRY8(uVar182,uVar183)) {
          uVar190 = uVar176 + 1;
        }
        uVar182 = uVar192 + uVar190;
        if (CARRY8(uVar173,uVar183)) {
          uVar176 = uVar176 + 1;
        }
        uVar177 = uVar182 + uVar176;
        uVar180 = uVar174 + CARRY8(uVar179,uVar180) + (ulong)CARRY8(uVar181,uVar175) +
                  (ulong)CARRY8(uVar192,uVar190) + (ulong)CARRY8(uVar182,uVar176);
        param_1[6] = uVar173 + uVar183;
        auVar58._8_8_ = 0;
        auVar58._0_8_ = *param_3;
        auVar140._8_8_ = 0;
        auVar140._0_8_ = param_3[7];
        uVar179 = SUB168(auVar58 * auVar140,8);
        uVar192 = *param_3 * param_3[7];
        uVar174 = uVar192 + uVar177;
        uVar181 = uVar179;
        if (CARRY8(uVar192,uVar177)) {
          uVar181 = uVar179 + 1;
        }
        uVar175 = uVar174 + uVar192;
        if (CARRY8(uVar174,uVar192)) {
          uVar179 = uVar179 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar180,uVar181)) {
          uVar174 = 1;
        }
        uVar192 = uVar180 + uVar181 + uVar179;
        if (!CARRY8(uVar180 + uVar181,uVar179)) {
          uVar174 = (ulong)CARRY8(uVar180,uVar181);
        }
        auVar59._8_8_ = 0;
        auVar59._0_8_ = param_3[1];
        auVar141._8_8_ = 0;
        auVar141._0_8_ = param_3[6];
        uVar180 = SUB168(auVar59 * auVar141,8);
        uVar173 = param_3[1] * param_3[6];
        uVar181 = uVar175 + uVar173;
        uVar179 = uVar180;
        if (CARRY8(uVar175,uVar173)) {
          uVar179 = uVar180 + 1;
        }
        uVar175 = uVar192 + uVar179;
        uVar182 = uVar181 + uVar173;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar180 + 1;
        }
        uVar181 = uVar175 + uVar180;
        auVar60._8_8_ = 0;
        auVar60._0_8_ = param_3[2];
        auVar142._8_8_ = 0;
        auVar142._0_8_ = param_3[5];
        uVar176 = SUB168(auVar60 * auVar142,8);
        uVar183 = param_3[2] * param_3[5];
        uVar173 = uVar182 + uVar183;
        uVar190 = uVar176;
        if (CARRY8(uVar182,uVar183)) {
          uVar190 = uVar176 + 1;
        }
        uVar182 = uVar181 + uVar190;
        uVar177 = uVar173 + uVar183;
        if (CARRY8(uVar173,uVar183)) {
          uVar176 = uVar176 + 1;
        }
        uVar173 = uVar182 + uVar176;
        auVar61._8_8_ = 0;
        auVar61._0_8_ = param_3[3];
        auVar143._8_8_ = 0;
        auVar143._0_8_ = param_3[4];
        uVar178 = SUB168(auVar61 * auVar143,8);
        uVar184 = param_3[3] * param_3[4];
        uVar183 = uVar177 + uVar184;
        uVar3 = uVar178;
        if (CARRY8(uVar177,uVar184)) {
          uVar3 = uVar178 + 1;
        }
        uVar177 = uVar173 + uVar3;
        if (CARRY8(uVar183,uVar184)) {
          uVar178 = uVar178 + 1;
        }
        uVar1 = uVar177 + uVar178;
        uVar192 = uVar174 + CARRY8(uVar192,uVar179) + (ulong)CARRY8(uVar175,uVar180) +
                  (ulong)CARRY8(uVar181,uVar190) + (ulong)CARRY8(uVar182,uVar176) +
                  (ulong)CARRY8(uVar173,uVar3) + (ulong)CARRY8(uVar177,uVar178);
        param_1[7] = uVar183 + uVar184;
        uVar179 = param_3[4];
        auVar62._8_8_ = 0;
        auVar62._0_8_ = uVar179;
        auVar144._8_8_ = 0;
        auVar144._0_8_ = uVar179;
        uVar181 = SUB168(auVar62 * auVar144,8);
        uVar174 = uVar179 * uVar179 + uVar1;
        if (CARRY8(uVar179 * uVar179,uVar1)) {
          uVar181 = uVar181 + 1;
        }
        auVar63._8_8_ = 0;
        auVar63._0_8_ = param_3[3];
        auVar145._8_8_ = 0;
        auVar145._0_8_ = param_3[5];
        uVar175 = SUB168(auVar63 * auVar145,8);
        uVar173 = param_3[3] * param_3[5];
        uVar179 = uVar174 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar174,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar192,uVar181)) {
          uVar174 = 1;
        }
        uVar182 = uVar192 + uVar181 + uVar180;
        if (!CARRY8(uVar192 + uVar181,uVar180)) {
          uVar174 = (ulong)CARRY8(uVar192,uVar181);
        }
        uVar181 = uVar179 + uVar173;
        if (CARRY8(uVar179,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar179 = uVar182 + uVar175;
        if (CARRY8(uVar182,uVar175)) {
          uVar174 = uVar174 + 1;
        }
        auVar64._8_8_ = 0;
        auVar64._0_8_ = param_3[2];
        auVar146._8_8_ = 0;
        auVar146._0_8_ = param_3[6];
        uVar175 = SUB168(auVar64 * auVar146,8);
        uVar173 = param_3[2] * param_3[6];
        uVar192 = uVar181 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar181 = uVar179 + uVar180;
        uVar182 = uVar192 + uVar173;
        if (CARRY8(uVar192,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar192 = uVar181 + uVar175;
        auVar65._8_8_ = 0;
        auVar65._0_8_ = param_3[1];
        auVar147._8_8_ = 0;
        auVar147._0_8_ = param_3[7];
        uVar176 = SUB168(auVar65 * auVar147,8);
        uVar183 = param_3[1] * param_3[7];
        uVar173 = uVar182 + uVar183;
        uVar190 = uVar176;
        if (CARRY8(uVar182,uVar183)) {
          uVar190 = uVar176 + 1;
        }
        uVar182 = uVar192 + uVar190;
        if (CARRY8(uVar173,uVar183)) {
          uVar176 = uVar176 + 1;
        }
        uVar177 = uVar182 + uVar176;
        uVar180 = uVar174 + CARRY8(uVar179,uVar180) + (ulong)CARRY8(uVar181,uVar175) +
                  (ulong)CARRY8(uVar192,uVar190) + (ulong)CARRY8(uVar182,uVar176);
        param_1[8] = uVar173 + uVar183;
        auVar66._8_8_ = 0;
        auVar66._0_8_ = param_3[2];
        auVar148._8_8_ = 0;
        auVar148._0_8_ = param_3[7];
        uVar179 = SUB168(auVar66 * auVar148,8);
        uVar192 = param_3[2] * param_3[7];
        uVar174 = uVar192 + uVar177;
        uVar181 = uVar179;
        if (CARRY8(uVar192,uVar177)) {
          uVar181 = uVar179 + 1;
        }
        uVar175 = uVar174 + uVar192;
        if (CARRY8(uVar174,uVar192)) {
          uVar179 = uVar179 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar180,uVar181)) {
          uVar174 = 1;
        }
        uVar192 = uVar180 + uVar181 + uVar179;
        if (!CARRY8(uVar180 + uVar181,uVar179)) {
          uVar174 = (ulong)CARRY8(uVar180,uVar181);
        }
        auVar67._8_8_ = 0;
        auVar67._0_8_ = param_3[3];
        auVar149._8_8_ = 0;
        auVar149._0_8_ = param_3[6];
        uVar180 = SUB168(auVar67 * auVar149,8);
        uVar173 = param_3[3] * param_3[6];
        uVar181 = uVar175 + uVar173;
        uVar179 = uVar180;
        if (CARRY8(uVar175,uVar173)) {
          uVar179 = uVar180 + 1;
        }
        uVar175 = uVar192 + uVar179;
        uVar182 = uVar181 + uVar173;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar180 + 1;
        }
        uVar181 = uVar175 + uVar180;
        auVar68._8_8_ = 0;
        auVar68._0_8_ = param_3[4];
        auVar150._8_8_ = 0;
        auVar150._0_8_ = param_3[5];
        uVar176 = SUB168(auVar68 * auVar150,8);
        uVar183 = param_3[4] * param_3[5];
        uVar173 = uVar182 + uVar183;
        uVar190 = uVar176;
        if (CARRY8(uVar182,uVar183)) {
          uVar190 = uVar176 + 1;
        }
        uVar182 = uVar181 + uVar190;
        if (CARRY8(uVar173,uVar183)) {
          uVar176 = uVar176 + 1;
        }
        uVar177 = uVar182 + uVar176;
        uVar192 = uVar174 + CARRY8(uVar192,uVar179) + (ulong)CARRY8(uVar175,uVar180) +
                  (ulong)CARRY8(uVar181,uVar190) + (ulong)CARRY8(uVar182,uVar176);
        param_1[9] = uVar173 + uVar183;
        uVar179 = param_3[5];
        auVar69._8_8_ = 0;
        auVar69._0_8_ = uVar179;
        auVar151._8_8_ = 0;
        auVar151._0_8_ = uVar179;
        uVar181 = SUB168(auVar69 * auVar151,8);
        uVar174 = uVar179 * uVar179 + uVar177;
        if (CARRY8(uVar179 * uVar179,uVar177)) {
          uVar181 = uVar181 + 1;
        }
        auVar70._8_8_ = 0;
        auVar70._0_8_ = param_3[4];
        auVar152._8_8_ = 0;
        auVar152._0_8_ = param_3[6];
        uVar175 = SUB168(auVar70 * auVar152,8);
        uVar173 = param_3[4] * param_3[6];
        uVar179 = uVar174 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar174,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar192,uVar181)) {
          uVar174 = 1;
        }
        uVar182 = uVar192 + uVar181 + uVar180;
        if (!CARRY8(uVar192 + uVar181,uVar180)) {
          uVar174 = (ulong)CARRY8(uVar192,uVar181);
        }
        uVar181 = uVar179 + uVar173;
        if (CARRY8(uVar179,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar179 = uVar182 + uVar175;
        if (CARRY8(uVar182,uVar175)) {
          uVar174 = uVar174 + 1;
        }
        auVar71._8_8_ = 0;
        auVar71._0_8_ = param_3[3];
        auVar153._8_8_ = 0;
        auVar153._0_8_ = param_3[7];
        uVar175 = SUB168(auVar71 * auVar153,8);
        uVar173 = param_3[3] * param_3[7];
        uVar192 = uVar181 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar181 = uVar179 + uVar180;
        if (CARRY8(uVar192,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        uVar182 = uVar181 + uVar175;
        uVar180 = uVar174 + CARRY8(uVar179,uVar180) + (ulong)CARRY8(uVar181,uVar175);
        param_1[10] = uVar192 + uVar173;
        auVar72._8_8_ = 0;
        auVar72._0_8_ = param_3[4];
        auVar154._8_8_ = 0;
        auVar154._0_8_ = param_3[7];
        uVar179 = SUB168(auVar72 * auVar154,8);
        uVar192 = param_3[4] * param_3[7];
        uVar174 = uVar192 + uVar182;
        uVar181 = uVar179;
        if (CARRY8(uVar192,uVar182)) {
          uVar181 = uVar179 + 1;
        }
        uVar175 = uVar174 + uVar192;
        if (CARRY8(uVar174,uVar192)) {
          uVar179 = uVar179 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar180,uVar181)) {
          uVar174 = 1;
        }
        uVar192 = uVar180 + uVar181 + uVar179;
        if (!CARRY8(uVar180 + uVar181,uVar179)) {
          uVar174 = (ulong)CARRY8(uVar180,uVar181);
        }
        auVar73._8_8_ = 0;
        auVar73._0_8_ = param_3[5];
        auVar155._8_8_ = 0;
        auVar155._0_8_ = param_3[6];
        uVar180 = SUB168(auVar73 * auVar155,8);
        uVar173 = param_3[5] * param_3[6];
        uVar181 = uVar175 + uVar173;
        uVar179 = uVar180;
        if (CARRY8(uVar175,uVar173)) {
          uVar179 = uVar180 + 1;
        }
        uVar175 = uVar192 + uVar179;
        if (CARRY8(uVar181,uVar173)) {
          uVar180 = uVar180 + 1;
        }
        uVar182 = uVar175 + uVar180;
        uVar192 = uVar174 + CARRY8(uVar192,uVar179) + (ulong)CARRY8(uVar175,uVar180);
        param_1[0xb] = uVar181 + uVar173;
        uVar179 = param_3[6];
        auVar74._8_8_ = 0;
        auVar74._0_8_ = uVar179;
        auVar156._8_8_ = 0;
        auVar156._0_8_ = uVar179;
        uVar181 = SUB168(auVar74 * auVar156,8);
        uVar174 = uVar179 * uVar179 + uVar182;
        if (CARRY8(uVar179 * uVar179,uVar182)) {
          uVar181 = uVar181 + 1;
        }
        auVar75._8_8_ = 0;
        auVar75._0_8_ = param_3[5];
        auVar157._8_8_ = 0;
        auVar157._0_8_ = param_3[7];
        uVar175 = SUB168(auVar75 * auVar157,8);
        uVar173 = param_3[5] * param_3[7];
        uVar179 = uVar174 + uVar173;
        uVar180 = uVar175;
        if (CARRY8(uVar174,uVar173)) {
          uVar180 = uVar175 + 1;
        }
        uVar174 = 2;
        if (!CARRY8(uVar192,uVar181)) {
          uVar174 = 1;
        }
        uVar182 = uVar192 + uVar181 + uVar180;
        if (!CARRY8(uVar192 + uVar181,uVar180)) {
          uVar174 = (ulong)CARRY8(uVar192,uVar181);
        }
        if (CARRY8(uVar179,uVar173)) {
          uVar175 = uVar175 + 1;
        }
        param_1[0xc] = uVar179 + uVar173;
        auVar76._8_8_ = 0;
        auVar76._0_8_ = param_3[6];
        auVar158._8_8_ = 0;
        auVar158._0_8_ = param_3[7];
        uVar192 = SUB168(auVar76 * auVar158,8);
        uVar180 = param_3[6] * param_3[7];
        uVar181 = uVar180 + uVar182 + uVar175;
        uVar179 = uVar192;
        if (CARRY8(uVar180,uVar182 + uVar175)) {
          uVar179 = uVar192 + 1;
        }
        bVar168 = CARRY8(uVar179 + uVar174,(ulong)CARRY8(uVar182,uVar175));
        uVar175 = uVar179 + uVar174 + (ulong)CARRY8(uVar182,uVar175);
        if (CARRY8(uVar181,uVar180)) {
          uVar192 = uVar192 + 1;
        }
        uVar173 = 1;
        if (CARRY8(uVar179,uVar174) || bVar168) {
          uVar173 = 2;
        }
        uVar182 = uVar175 + uVar192;
        if (!CARRY8(uVar175,uVar192)) {
          uVar173 = (ulong)(CARRY8(uVar179,uVar174) || bVar168);
        }
        param_1[0xd] = uVar181 + uVar180;
        uVar174 = param_3[7];
        auVar77._8_8_ = 0;
        auVar77._0_8_ = uVar174;
        auVar159._8_8_ = 0;
        auVar159._0_8_ = uVar174;
        param_1[0xe] = uVar174 * uVar174 + uVar182;
        param_1[0xf] = uVar173 + SUB168(auVar77 * auVar159,8) +
                       (ulong)CARRY8(uVar174 * uVar174,uVar182);
        return param_1;
      }
    }
    else {
      uVar169 = param_4 == (ulong *)&MACH_HEADER.cputype;
      if ((bool)uVar169) {
        func_0x006fd534(uStack_28);
        if ((bool)uVar169) {
          func_0x006fec40();
          uVar174 = extraout_x11_03;
          if (CARRY8(extraout_x9_01,extraout_x8_01)) {
            uVar174 = extraout_x11_03 + 1;
          }
          param_1[1] = extraout_x9_01 + extraout_x8_01;
          uVar192 = param_3[1];
          auVar78._8_8_ = 0;
          auVar78._0_8_ = uVar192;
          auVar160._8_8_ = 0;
          auVar160._0_8_ = uVar192;
          uVar179 = SUB168(auVar78 * auVar160,8);
          uVar181 = uVar192 * uVar192 + uVar174 + extraout_x10_03;
          if (CARRY8(uVar192 * uVar192,uVar174 + extraout_x10_03)) {
            uVar179 = uVar179 + 1;
          }
          bVar168 = CARRY8(uVar179,(ulong)CARRY8(uVar174,extraout_x10_03));
          uVar179 = uVar179 + CARRY8(uVar174,extraout_x10_03);
          auVar79._8_8_ = 0;
          auVar79._0_8_ = *param_3;
          auVar161._8_8_ = 0;
          auVar161._0_8_ = param_3[2];
          uVar180 = SUB168(auVar79 * auVar161,8);
          uVar175 = *param_3 * param_3[2];
          uVar174 = uVar181 + uVar175;
          uVar192 = uVar180;
          if (CARRY8(uVar181,uVar175)) {
            uVar192 = uVar180 + 1;
          }
          uVar181 = 1;
          if (bVar168) {
            uVar181 = 2;
          }
          uVar173 = uVar179 + uVar192;
          if (!CARRY8(uVar179,uVar192)) {
            uVar181 = (ulong)bVar168;
          }
          if (CARRY8(uVar174,uVar175)) {
            uVar180 = uVar180 + 1;
          }
          param_1[2] = uVar174 + uVar175;
          auVar80._8_8_ = 0;
          auVar80._0_8_ = *param_3;
          auVar162._8_8_ = 0;
          auVar162._0_8_ = param_3[3];
          uVar192 = SUB168(auVar80 * auVar162,8);
          uVar175 = *param_3 * param_3[3];
          uVar174 = uVar175 + uVar173 + uVar180;
          uVar179 = uVar192;
          if (CARRY8(uVar175,uVar173 + uVar180)) {
            uVar179 = uVar192 + 1;
          }
          bVar168 = CARRY8(uVar179 + uVar181,(ulong)CARRY8(uVar173,uVar180));
          uVar173 = uVar179 + uVar181 + (ulong)CARRY8(uVar173,uVar180);
          uVar180 = uVar174 + uVar175;
          if (CARRY8(uVar174,uVar175)) {
            uVar192 = uVar192 + 1;
          }
          uVar174 = 1;
          if (CARRY8(uVar179,uVar181) || bVar168) {
            uVar174 = 2;
          }
          uVar175 = uVar173 + uVar192;
          if (!CARRY8(uVar173,uVar192)) {
            uVar174 = (ulong)(CARRY8(uVar179,uVar181) || bVar168);
          }
          auVar81._8_8_ = 0;
          auVar81._0_8_ = param_3[1];
          auVar163._8_8_ = 0;
          auVar163._0_8_ = param_3[2];
          uVar192 = SUB168(auVar81 * auVar163,8);
          uVar173 = param_3[1] * param_3[2];
          uVar181 = uVar180 + uVar173;
          uVar179 = uVar192;
          if (CARRY8(uVar180,uVar173)) {
            uVar179 = uVar192 + 1;
          }
          uVar180 = uVar175 + uVar179;
          if (CARRY8(uVar181,uVar173)) {
            uVar192 = uVar192 + 1;
          }
          uVar182 = uVar180 + uVar192;
          uVar192 = uVar174 + CARRY8(uVar175,uVar179) + (ulong)CARRY8(uVar180,uVar192);
          param_1[3] = uVar181 + uVar173;
          uVar179 = param_3[2];
          auVar82._8_8_ = 0;
          auVar82._0_8_ = uVar179;
          auVar164._8_8_ = 0;
          auVar164._0_8_ = uVar179;
          uVar181 = SUB168(auVar82 * auVar164,8);
          uVar174 = uVar179 * uVar179 + uVar182;
          if (CARRY8(uVar179 * uVar179,uVar182)) {
            uVar181 = uVar181 + 1;
          }
          auVar83._8_8_ = 0;
          auVar83._0_8_ = param_3[1];
          auVar165._8_8_ = 0;
          auVar165._0_8_ = param_3[3];
          uVar175 = SUB168(auVar83 * auVar165,8);
          uVar173 = param_3[1] * param_3[3];
          uVar179 = uVar174 + uVar173;
          uVar180 = uVar175;
          if (CARRY8(uVar174,uVar173)) {
            uVar180 = uVar175 + 1;
          }
          uVar174 = 2;
          if (!CARRY8(uVar192,uVar181)) {
            uVar174 = 1;
          }
          uVar182 = uVar192 + uVar181 + uVar180;
          if (!CARRY8(uVar192 + uVar181,uVar180)) {
            uVar174 = (ulong)CARRY8(uVar192,uVar181);
          }
          if (CARRY8(uVar179,uVar173)) {
            uVar175 = uVar175 + 1;
          }
          param_1[4] = uVar179 + uVar173;
          auVar84._8_8_ = 0;
          auVar84._0_8_ = param_3[2];
          auVar166._8_8_ = 0;
          auVar166._0_8_ = param_3[3];
          uVar192 = SUB168(auVar84 * auVar166,8);
          uVar180 = param_3[2] * param_3[3];
          uVar181 = uVar180 + uVar182 + uVar175;
          uVar179 = uVar192;
          if (CARRY8(uVar180,uVar182 + uVar175)) {
            uVar179 = uVar192 + 1;
          }
          bVar168 = CARRY8(uVar179 + uVar174,(ulong)CARRY8(uVar182,uVar175));
          uVar175 = uVar179 + uVar174 + (ulong)CARRY8(uVar182,uVar175);
          if (CARRY8(uVar181,uVar180)) {
            uVar192 = uVar192 + 1;
          }
          uVar173 = 1;
          if (CARRY8(uVar179,uVar174) || bVar168) {
            uVar173 = 2;
          }
          uVar182 = uVar175 + uVar192;
          if (!CARRY8(uVar175,uVar192)) {
            uVar173 = (ulong)(CARRY8(uVar179,uVar174) || bVar168);
          }
          param_1[5] = uVar181 + uVar180;
          uVar174 = param_3[3];
          auVar85._8_8_ = 0;
          auVar85._0_8_ = uVar174;
          auVar167._8_8_ = 0;
          auVar167._0_8_ = uVar174;
          param_1[6] = uVar174 * uVar174 + uVar182;
          param_1[7] = uVar173 + SUB168(auVar85 * auVar167,8) +
                       (ulong)CARRY8(uVar174 * uVar174,uVar182);
          return param_1;
        }
      }
      else {
        puVar171 = auStack_b8;
        FUN_006e8908();
        func_0x006fdf34();
        func_0x006fd534(uStack_28);
        param_2 = param_3;
        param_3 = param_4;
        param_4 = puVar171;
        if ((bool)uVar169) {
          return param_1;
        }
      }
    }
  }
  ___stack_chk_fail();
  if (param_2 != (ulong *)((long)param_6 + (long)param_4)) {
    pcStack_c8 = FUN_006e838c;
    puStack_d0 = &stack0xfffffffffffffff0;
    _abort();
    pcVar172 = FUN_006e83cc;
    func_0x006fe858();
    puStack_90 = (undefined1 *)&puStack_d0;
    pcStack_88 = pcVar172;
    FUN_006f8014(param_6);
    func_0x006fe184(param_1);
    FUN_006f8014();
    func_0x006fea74();
    FUN_006e4030();
    return (long *)-(long)param_6;
  }
  if (param_4 == (ulong *)&MACH_HEADER.cpusubtype && param_6 == (ulong *)&MACH_HEADER.cpusubtype) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *param_5;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = *param_3;
    uVar192 = SUB168(auVar4 * auVar86,8);
    *param_1 = *param_5 * *param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_5[1];
    auVar87._8_8_ = 0;
    auVar87._0_8_ = *param_3;
    uVar181 = SUB168(auVar5 * auVar87,8);
    uVar179 = param_5[1] * *param_3;
    uVar174 = uVar179 + uVar192;
    if (CARRY8(uVar179,uVar192)) {
      uVar181 = uVar181 + 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_5;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = param_3[1];
    uVar179 = SUB168(auVar6 * auVar88,8);
    uVar192 = *param_5 * param_3[1];
    if (CARRY8(uVar192,uVar174)) {
      uVar179 = uVar179 + 1;
    }
    param_1[1] = uVar192 + uVar174;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *param_5;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_3[2];
    uVar192 = SUB168(auVar7 * auVar89,8);
    uVar180 = *param_5 * param_3[2];
    uVar174 = uVar180 + uVar179 + uVar181;
    if (CARRY8(uVar180,uVar179 + uVar181)) {
      uVar192 = uVar192 + 1;
    }
    bVar168 = CARRY8(uVar192,(ulong)CARRY8(uVar179,uVar181));
    uVar192 = uVar192 + CARRY8(uVar179,uVar181);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_5[1];
    auVar90._8_8_ = 0;
    auVar90._0_8_ = param_3[1];
    uVar179 = SUB168(auVar8 * auVar90,8);
    uVar180 = param_5[1] * param_3[1];
    uVar181 = uVar174 + uVar180;
    if (CARRY8(uVar174,uVar180)) {
      uVar179 = uVar179 + 1;
    }
    uVar174 = 1;
    if (bVar168) {
      uVar174 = 2;
    }
    uVar180 = uVar192 + uVar179;
    if (!CARRY8(uVar192,uVar179)) {
      uVar174 = (ulong)bVar168;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_5[2];
    auVar91._8_8_ = 0;
    auVar91._0_8_ = *param_3;
    uVar179 = SUB168(auVar9 * auVar91,8);
    uVar192 = param_5[2] * *param_3;
    if (CARRY8(uVar181,uVar192)) {
      uVar179 = uVar179 + 1;
    }
    param_1[2] = uVar181 + uVar192;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_5[3];
    auVar92._8_8_ = 0;
    auVar92._0_8_ = *param_3;
    uVar192 = SUB168(auVar10 * auVar92,8);
    uVar175 = param_5[3] * *param_3;
    uVar181 = uVar175 + uVar180 + uVar179;
    if (CARRY8(uVar175,uVar180 + uVar179)) {
      uVar192 = uVar192 + 1;
    }
    bVar168 = CARRY8(uVar192 + uVar174,(ulong)CARRY8(uVar180,uVar179));
    uVar175 = uVar192 + uVar174 + (ulong)CARRY8(uVar180,uVar179);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_5[2];
    auVar93._8_8_ = 0;
    auVar93._0_8_ = param_3[1];
    uVar180 = SUB168(auVar11 * auVar93,8);
    uVar173 = param_5[2] * param_3[1];
    uVar179 = uVar181 + uVar173;
    if (CARRY8(uVar181,uVar173)) {
      uVar180 = uVar180 + 1;
    }
    uVar181 = 1;
    if (CARRY8(uVar192,uVar174) || bVar168) {
      uVar181 = 2;
    }
    uVar173 = uVar175 + uVar180;
    if (!CARRY8(uVar175,uVar180)) {
      uVar181 = (ulong)(CARRY8(uVar192,uVar174) || bVar168);
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_5[1];
    auVar94._8_8_ = 0;
    auVar94._0_8_ = param_3[2];
    uVar192 = SUB168(auVar12 * auVar94,8);
    uVar180 = param_5[1] * param_3[2];
    uVar174 = uVar179 + uVar180;
    if (CARRY8(uVar179,uVar180)) {
      uVar192 = uVar192 + 1;
    }
    uVar179 = uVar173 + uVar192;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *param_5;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = param_3[3];
    uVar180 = SUB168(auVar13 * auVar95,8);
    uVar175 = *param_5 * param_3[3];
    if (CARRY8(uVar174,uVar175)) {
      uVar180 = uVar180 + 1;
    }
    uVar182 = uVar179 + uVar180;
    uVar179 = uVar181 + CARRY8(uVar173,uVar192) + (ulong)CARRY8(uVar179,uVar180);
    param_1[3] = uVar174 + uVar175;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *param_5;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = param_3[4];
    uVar181 = SUB168(auVar14 * auVar96,8);
    uVar192 = *param_5 * param_3[4];
    uVar174 = uVar192 + uVar182;
    if (CARRY8(uVar192,uVar182)) {
      uVar181 = uVar181 + 1;
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_5[1];
    auVar97._8_8_ = 0;
    auVar97._0_8_ = param_3[3];
    uVar180 = SUB168(auVar15 * auVar97,8);
    uVar175 = param_5[1] * param_3[3];
    uVar192 = uVar174 + uVar175;
    if (CARRY8(uVar174,uVar175)) {
      uVar180 = uVar180 + 1;
    }
    uVar174 = 2;
    if (!CARRY8(uVar179,uVar181)) {
      uVar174 = 1;
    }
    uVar175 = uVar179 + uVar181 + uVar180;
    if (!CARRY8(uVar179 + uVar181,uVar180)) {
      uVar174 = (ulong)CARRY8(uVar179,uVar181);
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_5[2];
    auVar98._8_8_ = 0;
    auVar98._0_8_ = param_3[2];
    uVar179 = SUB168(auVar16 * auVar98,8);
    uVar180 = param_5[2] * param_3[2];
    uVar181 = uVar192 + uVar180;
    if (CARRY8(uVar192,uVar180)) {
      uVar179 = uVar179 + 1;
    }
    uVar192 = uVar175 + uVar179;
    if (CARRY8(uVar175,uVar179)) {
      uVar174 = uVar174 + 1;
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = param_5[3];
    auVar99._8_8_ = 0;
    auVar99._0_8_ = param_3[1];
    uVar180 = SUB168(auVar17 * auVar99,8);
    uVar175 = param_5[3] * param_3[1];
    uVar179 = uVar181 + uVar175;
    if (CARRY8(uVar181,uVar175)) {
      uVar180 = uVar180 + 1;
    }
    uVar181 = uVar192 + uVar180;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = param_5[4];
    auVar100._8_8_ = 0;
    auVar100._0_8_ = *param_3;
    uVar175 = SUB168(auVar18 * auVar100,8);
    uVar173 = param_5[4] * *param_3;
    if (CARRY8(uVar179,uVar173)) {
      uVar175 = uVar175 + 1;
    }
    uVar182 = uVar181 + uVar175;
    uVar192 = uVar174 + CARRY8(uVar192,uVar180) + (ulong)CARRY8(uVar181,uVar175);
    param_1[4] = uVar179 + uVar173;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = param_5[5];
    auVar101._8_8_ = 0;
    auVar101._0_8_ = *param_3;
    uVar181 = SUB168(auVar19 * auVar101,8);
    uVar179 = param_5[5] * *param_3;
    uVar174 = uVar179 + uVar182;
    if (CARRY8(uVar179,uVar182)) {
      uVar181 = uVar181 + 1;
    }
    auVar20._8_8_ = 0;
    auVar20._0_8_ = param_5[4];
    auVar102._8_8_ = 0;
    auVar102._0_8_ = param_3[1];
    uVar180 = SUB168(auVar20 * auVar102,8);
    uVar175 = param_5[4] * param_3[1];
    uVar179 = uVar174 + uVar175;
    if (CARRY8(uVar174,uVar175)) {
      uVar180 = uVar180 + 1;
    }
    uVar174 = 2;
    if (!CARRY8(uVar192,uVar181)) {
      uVar174 = 1;
    }
    uVar175 = uVar192 + uVar181 + uVar180;
    if (!CARRY8(uVar192 + uVar181,uVar180)) {
      uVar174 = (ulong)CARRY8(uVar192,uVar181);
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = param_5[3];
    auVar103._8_8_ = 0;
    auVar103._0_8_ = param_3[2];
    uVar192 = SUB168(auVar21 * auVar103,8);
    uVar180 = param_5[3] * param_3[2];
    uVar181 = uVar179 + uVar180;
    if (CARRY8(uVar179,uVar180)) {
      uVar192 = uVar192 + 1;
    }
    uVar179 = uVar175 + uVar192;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = param_5[2];
    auVar104._8_8_ = 0;
    auVar104._0_8_ = param_3[3];
    uVar173 = SUB168(auVar22 * auVar104,8);
    uVar182 = param_5[2] * param_3[3];
    uVar180 = uVar181 + uVar182;
    if (CARRY8(uVar181,uVar182)) {
      uVar173 = uVar173 + 1;
    }
    uVar181 = uVar179 + uVar173;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = param_5[1];
    auVar105._8_8_ = 0;
    auVar105._0_8_ = param_3[4];
    uVar190 = SUB168(auVar23 * auVar105,8);
    uVar176 = param_5[1] * param_3[4];
    uVar182 = uVar180 + uVar176;
    if (CARRY8(uVar180,uVar176)) {
      uVar190 = uVar190 + 1;
    }
    uVar180 = uVar181 + uVar190;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *param_5;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = param_3[5];
    uVar176 = SUB168(auVar24 * auVar106,8);
    uVar183 = *param_5 * param_3[5];
    if (CARRY8(uVar182,uVar183)) {
      uVar176 = uVar176 + 1;
    }
    uVar177 = uVar180 + uVar176;
    param_1[5] = uVar182 + uVar183;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *param_5;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = param_3[6];
    lVar193 = SUB168(auVar25 * auVar107,8);
    uVar183 = *param_5 * param_3[6];
    uVar182 = uVar183 + uVar177;
    if (CARRY8(uVar183,uVar177)) {
      lVar193 = lVar193 + 1;
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = param_5[1];
    auVar108._8_8_ = 0;
    auVar108._0_8_ = param_3[5];
    lVar186 = SUB168(auVar26 * auVar108,8);
    uVar177 = param_5[1] * param_3[5];
    uVar183 = uVar182 + uVar177;
    if (CARRY8(uVar182,uVar177)) {
      lVar186 = lVar186 + 1;
    }
    auVar27._8_8_ = 0;
    auVar27._0_8_ = param_5[2];
    auVar109._8_8_ = 0;
    auVar109._0_8_ = param_3[4];
    lVar187 = SUB168(auVar27 * auVar109,8);
    uVar177 = param_5[2] * param_3[4];
    uVar182 = uVar183 + uVar177;
    if (CARRY8(uVar183,uVar177)) {
      lVar187 = lVar187 + 1;
    }
    auVar28._8_8_ = 0;
    auVar28._0_8_ = param_5[3];
    auVar110._8_8_ = 0;
    auVar110._0_8_ = param_3[3];
    lVar188 = SUB168(auVar28 * auVar110,8);
    uVar177 = param_5[3] * param_3[3];
    uVar183 = uVar182 + uVar177;
    if (CARRY8(uVar182,uVar177)) {
      lVar188 = lVar188 + 1;
    }
    auVar29._8_8_ = 0;
    auVar29._0_8_ = param_5[4];
    auVar111._8_8_ = 0;
    auVar111._0_8_ = param_3[2];
    lVar191 = SUB168(auVar29 * auVar111,8);
    uVar177 = param_5[4] * param_3[2];
    uVar182 = uVar183 + uVar177;
    if (CARRY8(uVar183,uVar177)) {
      lVar191 = lVar191 + 1;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = param_5[5];
    auVar112._8_8_ = 0;
    auVar112._0_8_ = param_3[1];
    lVar185 = SUB168(auVar30 * auVar112,8);
    uVar177 = param_5[5] * param_3[1];
    uVar183 = uVar182 + uVar177;
    if (CARRY8(uVar182,uVar177)) {
      lVar185 = lVar185 + 1;
    }
    auVar31._8_8_ = 0;
    auVar31._0_8_ = param_5[6];
    auVar113._8_8_ = 0;
    auVar113._0_8_ = *param_3;
    lVar189 = SUB168(auVar31 * auVar113,8);
    uVar182 = param_5[6] * *param_3;
    if (CARRY8(uVar183,uVar182)) {
      lVar189 = lVar189 + 1;
    }
    param_1[6] = uVar183 + uVar182;
    param_1[7] = param_5[7] * *param_3 +
                 uVar174 + CARRY8(uVar175,uVar192) + (ulong)CARRY8(uVar179,uVar173) +
                 (ulong)CARRY8(uVar181,uVar190) + (ulong)CARRY8(uVar180,uVar176) + lVar193 + lVar186
                 + lVar187 + lVar188 + lVar191 + lVar185 + lVar189 + param_5[6] * param_3[1] +
                 param_5[5] * param_3[2] + param_5[4] * param_3[3] + param_5[3] * param_3[4] +
                 param_5[2] * param_3[5] + param_5[1] * param_3[6] + *param_5 * param_3[7];
    func_0x006fe634();
    lVar193 = extraout_x16;
    if (CARRY8(extraout_x10,extraout_x13)) {
      lVar193 = extraout_x16 + 1;
    }
    auVar32._8_8_ = 0;
    auVar32._0_8_ = param_5[3];
    auVar114._8_8_ = 0;
    auVar114._0_8_ = extraout_x15;
    lVar186 = SUB168(auVar32 * auVar114,8);
    uVar181 = param_5[3] * extraout_x15;
    uVar174 = extraout_x10 + extraout_x13 + uVar181;
    if (CARRY8(extraout_x10 + extraout_x13,uVar181)) {
      lVar186 = lVar186 + 1;
    }
    auVar33._8_8_ = 0;
    auVar33._0_8_ = param_5[4];
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_3[4];
    lVar187 = SUB168(auVar33 * auVar115,8);
    uVar179 = param_5[4] * param_3[4];
    uVar181 = uVar174 + uVar179;
    if (CARRY8(uVar174,uVar179)) {
      lVar187 = lVar187 + 1;
    }
    auVar34._8_8_ = 0;
    auVar34._0_8_ = param_5[5];
    auVar116._8_8_ = 0;
    auVar116._0_8_ = param_3[3];
    lVar188 = SUB168(auVar34 * auVar116,8);
    uVar179 = param_5[5] * param_3[3];
    uVar174 = uVar181 + uVar179;
    if (CARRY8(uVar181,uVar179)) {
      lVar188 = lVar188 + 1;
    }
    auVar35._8_8_ = 0;
    auVar35._0_8_ = param_5[6];
    auVar117._8_8_ = 0;
    auVar117._0_8_ = param_3[2];
    lVar191 = SUB168(auVar35 * auVar117,8);
    uVar179 = param_5[6] * param_3[2];
    uVar181 = uVar174 + uVar179;
    if (CARRY8(uVar174,uVar179)) {
      lVar191 = lVar191 + 1;
    }
    auVar36._8_8_ = 0;
    auVar36._0_8_ = param_5[7];
    auVar118._8_8_ = 0;
    auVar118._0_8_ = param_3[1];
    lVar185 = SUB168(auVar36 * auVar118,8);
    uVar174 = param_5[7] * param_3[1];
    if (CARRY8(uVar181,uVar174)) {
      lVar185 = lVar185 + 1;
    }
    param_1[8] = uVar181 + uVar174;
    param_1[9] = param_5[7] * param_3[2] +
                 extraout_x12 + extraout_x11 + lVar193 + lVar186 + lVar187 + lVar188 + lVar191 +
                 lVar185 + param_5[6] * param_3[3] + param_5[5] * param_3[4] +
                 param_5[4] * param_3[5] + param_5[3] * param_3[6] + param_5[2] * param_3[7];
    func_0x006fe634();
    lVar193 = extraout_x16_00;
    if (CARRY8(extraout_x10_00,extraout_x13_00)) {
      lVar193 = extraout_x16_00 + 1;
    }
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_5[5];
    auVar119._8_8_ = 0;
    auVar119._0_8_ = extraout_x15_00;
    lVar186 = SUB168(auVar37 * auVar119,8);
    uVar181 = param_5[5] * extraout_x15_00;
    uVar174 = extraout_x10_00 + extraout_x13_00 + uVar181;
    if (CARRY8(extraout_x10_00 + extraout_x13_00,uVar181)) {
      lVar186 = lVar186 + 1;
    }
    auVar38._8_8_ = 0;
    auVar38._0_8_ = param_5[6];
    auVar120._8_8_ = 0;
    auVar120._0_8_ = param_3[4];
    lVar187 = SUB168(auVar38 * auVar120,8);
    uVar179 = param_5[6] * param_3[4];
    uVar181 = uVar174 + uVar179;
    if (CARRY8(uVar174,uVar179)) {
      lVar187 = lVar187 + 1;
    }
    auVar39._8_8_ = 0;
    auVar39._0_8_ = param_5[7];
    auVar121._8_8_ = 0;
    auVar121._0_8_ = param_3[3];
    lVar188 = SUB168(auVar39 * auVar121,8);
    uVar174 = param_5[7] * param_3[3];
    if (CARRY8(uVar181,uVar174)) {
      lVar188 = lVar188 + 1;
    }
    param_1[10] = uVar181 + uVar174;
    param_1[0xb] = param_5[7] * param_3[4] +
                   extraout_x12_00 + extraout_x11_00 + lVar193 + lVar186 + lVar187 + lVar188 +
                   param_5[6] * param_3[5] + param_5[5] * param_3[6] + param_5[4] * param_3[7];
    func_0x006fe634();
    uVar174 = extraout_x16_01;
    if (CARRY8(extraout_x10_01,extraout_x13_01)) {
      uVar174 = extraout_x16_01 + 1;
    }
    uVar181 = extraout_x9;
    if (!CARRY8(extraout_x12_01,extraout_x11_01)) {
      uVar181 = 1;
    }
    uVar179 = extraout_x12_01 + extraout_x11_01 + uVar174;
    if (!CARRY8(extraout_x12_01 + extraout_x11_01,uVar174)) {
      uVar181 = (ulong)CARRY8(extraout_x12_01,extraout_x11_01);
    }
    auVar40._8_8_ = 0;
    auVar40._0_8_ = param_5[7];
    auVar122._8_8_ = 0;
    auVar122._0_8_ = extraout_x15_01;
    uVar174 = SUB168(auVar40 * auVar122,8);
    uVar192 = param_5[7] * extraout_x15_01;
    if (CARRY8(extraout_x10_01 + extraout_x13_01,uVar192)) {
      uVar174 = uVar174 + 1;
    }
    param_1[0xc] = extraout_x10_01 + extraout_x13_01 + uVar192;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = param_5[7];
    auVar123._8_8_ = 0;
    auVar123._0_8_ = param_3[6];
    uVar180 = SUB168(auVar41 * auVar123,8);
    uVar175 = param_5[7] * param_3[6];
    uVar192 = uVar175 + uVar179 + uVar174;
    if (CARRY8(uVar175,uVar179 + uVar174)) {
      uVar180 = uVar180 + 1;
    }
    bVar168 = CARRY8(uVar180 + uVar181,(ulong)CARRY8(uVar179,uVar174));
    uVar179 = uVar180 + uVar181 + (ulong)CARRY8(uVar179,uVar174);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = param_5[6];
    auVar124._8_8_ = 0;
    auVar124._0_8_ = param_3[7];
    uVar174 = SUB168(auVar42 * auVar124,8);
    uVar175 = param_5[6] * param_3[7];
    if (CARRY8(uVar192,uVar175)) {
      uVar174 = uVar174 + 1;
    }
    uVar173 = extraout_x8;
    if (CARRY8(uVar180,uVar181) || bVar168) {
      uVar173 = extraout_x8 + 1;
    }
    uVar182 = uVar179 + uVar174;
    if (!CARRY8(uVar179,uVar174)) {
      uVar173 = (ulong)(CARRY8(uVar180,uVar181) || bVar168);
    }
    param_1[0xd] = uVar192 + uVar175;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = param_5[7];
    auVar125._8_8_ = 0;
    auVar125._0_8_ = param_3[7];
    uVar174 = param_5[7] * param_3[7];
    param_1[0xe] = uVar174 + uVar182;
    param_1[0xf] = uVar173 + SUB168(auVar43 * auVar125,8) + (ulong)CARRY8(uVar174,uVar182);
    return param_1;
  }
  pcVar172 = FUN_006e838c;
  func_0x006fdcd0();
  puVar171 = param_6;
  if (param_4 < param_6) {
    puVar171 = param_4;
    param_4 = param_6;
  }
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = pcVar172;
  if (puVar171 != (ulong *)0x0) {
    plVar2 = param_1 + (long)param_4;
    plVar170 = param_1;
    func_0x006fd7d4();
    FUN_006e4b24();
    *plVar2 = (long)plVar170;
    lVar193 = -(long)puVar171;
    lVar186 = 0;
    while( true ) {
      lVar193 = lVar193 + 4;
      if (lVar193 == 3) {
        return plVar170;
      }
      plVar170 = (long *)((long)param_1 + lVar186 + 8);
      func_0x006fda18();
      FUN_006e6efc();
      *(long **)((long)plVar2 + lVar186 + 8) = plVar170;
      if (lVar193 == 2) {
        return plVar170;
      }
      plVar170 = (long *)((long)param_1 + lVar186 + 0x10);
      func_0x006fda18();
      FUN_006e6efc();
      *(long **)((long)plVar2 + lVar186 + 0x10) = plVar170;
      if (lVar193 == 1) {
        return plVar170;
      }
      plVar170 = (long *)((long)param_1 + lVar186 + 0x18);
      func_0x006fda18();
      FUN_006e6efc();
      *(long **)((long)plVar2 + lVar186 + 0x18) = plVar170;
      if (lVar193 == 0) break;
      plVar170 = (long *)(lVar186 + 0x20 + (long)param_1);
      func_0x006fda18();
      FUN_006e6efc();
      *(long **)((long)plVar2 + lVar186 + 0x20) = plVar170;
      lVar186 = lVar186 + 0x20;
    }
    return plVar170;
  }
  lVar193 = (long)param_4 << 3;
  func_0x006fdca0(param_1,0,lVar193,pcVar172);
  if (lVar193 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_0099a408)();
    return param_1;
  }
  return param_1;
}



/* Entry: 006e838c; end: 006e83cb;  */

long * FUN_006e838c(long *param_1,long param_2,ulong *param_3,ulong param_4,ulong *param_5,
                   ulong param_6)

{
  bool bVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  long *plVar83;
  ulong uVar84;
  ulong uVar85;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong uVar86;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong uVar87;
  long extraout_x11;
  long extraout_x11_00;
  ulong extraout_x11_01;
  long extraout_x12;
  long extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar88;
  ulong uVar89;
  ulong uVar90;
  ulong uVar91;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong uVar92;
  ulong uVar93;
  ulong uVar94;
  long lVar95;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long extraout_x16;
  long extraout_x16_00;
  ulong extraout_x16_01;
  ulong uVar100;
  long lVar101;
  long lVar102;
  undefined8 unaff_x30;
  
  if (param_2 != param_6 + param_4) {
    _abort();
    func_0x006fe858();
    FUN_006f8014(param_6);
    func_0x006fe184(param_1);
    FUN_006f8014();
    func_0x006fea74();
    FUN_006e4030();
    return (long *)-param_6;
  }
  if (param_4 == 8 && param_6 == 8) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *param_5;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = *param_3;
    uVar86 = SUB168(auVar3 * auVar43,8);
    *param_1 = *param_5 * *param_3;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_5[1];
    auVar44._8_8_ = 0;
    auVar44._0_8_ = *param_3;
    uVar88 = SUB168(auVar4 * auVar44,8);
    uVar84 = param_5[1] * *param_3;
    uVar94 = uVar84 + uVar86;
    if (CARRY8(uVar84,uVar86)) {
      uVar88 = uVar88 + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *param_5;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = param_3[1];
    uVar84 = SUB168(auVar5 * auVar45,8);
    uVar86 = *param_5 * param_3[1];
    if (CARRY8(uVar86,uVar94)) {
      uVar84 = uVar84 + 1;
    }
    param_1[1] = uVar86 + uVar94;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_5;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = param_3[2];
    uVar86 = SUB168(auVar6 * auVar46,8);
    uVar85 = *param_5 * param_3[2];
    uVar94 = uVar85 + uVar84 + uVar88;
    if (CARRY8(uVar85,uVar84 + uVar88)) {
      uVar86 = uVar86 + 1;
    }
    bVar1 = CARRY8(uVar86,(ulong)CARRY8(uVar84,uVar88));
    uVar86 = uVar86 + CARRY8(uVar84,uVar88);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_5[1];
    auVar47._8_8_ = 0;
    auVar47._0_8_ = param_3[1];
    uVar84 = SUB168(auVar7 * auVar47,8);
    uVar85 = param_5[1] * param_3[1];
    uVar88 = uVar94 + uVar85;
    if (CARRY8(uVar94,uVar85)) {
      uVar84 = uVar84 + 1;
    }
    uVar94 = 1;
    if (bVar1) {
      uVar94 = 2;
    }
    uVar85 = uVar86 + uVar84;
    if (!CARRY8(uVar86,uVar84)) {
      uVar94 = (ulong)bVar1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_5[2];
    auVar48._8_8_ = 0;
    auVar48._0_8_ = *param_3;
    uVar84 = SUB168(auVar8 * auVar48,8);
    uVar86 = param_5[2] * *param_3;
    if (CARRY8(uVar88,uVar86)) {
      uVar84 = uVar84 + 1;
    }
    param_1[2] = uVar88 + uVar86;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_5[3];
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *param_3;
    uVar86 = SUB168(auVar9 * auVar49,8);
    uVar87 = param_5[3] * *param_3;
    uVar88 = uVar87 + uVar85 + uVar84;
    if (CARRY8(uVar87,uVar85 + uVar84)) {
      uVar86 = uVar86 + 1;
    }
    bVar1 = CARRY8(uVar86 + uVar94,(ulong)CARRY8(uVar85,uVar84));
    uVar87 = uVar86 + uVar94 + (ulong)CARRY8(uVar85,uVar84);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_5[2];
    auVar50._8_8_ = 0;
    auVar50._0_8_ = param_3[1];
    uVar85 = SUB168(auVar10 * auVar50,8);
    uVar89 = param_5[2] * param_3[1];
    uVar84 = uVar88 + uVar89;
    if (CARRY8(uVar88,uVar89)) {
      uVar85 = uVar85 + 1;
    }
    uVar88 = 1;
    if (CARRY8(uVar86,uVar94) || bVar1) {
      uVar88 = 2;
    }
    uVar89 = uVar87 + uVar85;
    if (!CARRY8(uVar87,uVar85)) {
      uVar88 = (ulong)(CARRY8(uVar86,uVar94) || bVar1);
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = param_5[1];
    auVar51._8_8_ = 0;
    auVar51._0_8_ = param_3[2];
    uVar86 = SUB168(auVar11 * auVar51,8);
    uVar85 = param_5[1] * param_3[2];
    uVar94 = uVar84 + uVar85;
    if (CARRY8(uVar84,uVar85)) {
      uVar86 = uVar86 + 1;
    }
    uVar84 = uVar89 + uVar86;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *param_5;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = param_3[3];
    uVar85 = SUB168(auVar12 * auVar52,8);
    uVar87 = *param_5 * param_3[3];
    if (CARRY8(uVar94,uVar87)) {
      uVar85 = uVar85 + 1;
    }
    uVar92 = uVar84 + uVar85;
    uVar84 = uVar88 + CARRY8(uVar89,uVar86) + (ulong)CARRY8(uVar84,uVar85);
    param_1[3] = uVar94 + uVar87;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *param_5;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_3[4];
    uVar88 = SUB168(auVar13 * auVar53,8);
    uVar86 = *param_5 * param_3[4];
    uVar94 = uVar86 + uVar92;
    if (CARRY8(uVar86,uVar92)) {
      uVar88 = uVar88 + 1;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_5[1];
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_3[3];
    uVar85 = SUB168(auVar14 * auVar54,8);
    uVar87 = param_5[1] * param_3[3];
    uVar86 = uVar94 + uVar87;
    if (CARRY8(uVar94,uVar87)) {
      uVar85 = uVar85 + 1;
    }
    uVar94 = 2;
    if (!CARRY8(uVar84,uVar88)) {
      uVar94 = 1;
    }
    uVar87 = uVar84 + uVar88 + uVar85;
    if (!CARRY8(uVar84 + uVar88,uVar85)) {
      uVar94 = (ulong)CARRY8(uVar84,uVar88);
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ = param_5[2];
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_3[2];
    uVar84 = SUB168(auVar15 * auVar55,8);
    uVar85 = param_5[2] * param_3[2];
    uVar88 = uVar86 + uVar85;
    if (CARRY8(uVar86,uVar85)) {
      uVar84 = uVar84 + 1;
    }
    uVar86 = uVar87 + uVar84;
    if (CARRY8(uVar87,uVar84)) {
      uVar94 = uVar94 + 1;
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_5[3];
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_3[1];
    uVar85 = SUB168(auVar16 * auVar56,8);
    uVar87 = param_5[3] * param_3[1];
    uVar84 = uVar88 + uVar87;
    if (CARRY8(uVar88,uVar87)) {
      uVar85 = uVar85 + 1;
    }
    uVar88 = uVar86 + uVar85;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = param_5[4];
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *param_3;
    uVar87 = SUB168(auVar17 * auVar57,8);
    uVar89 = param_5[4] * *param_3;
    if (CARRY8(uVar84,uVar89)) {
      uVar87 = uVar87 + 1;
    }
    uVar92 = uVar88 + uVar87;
    uVar86 = uVar94 + CARRY8(uVar86,uVar85) + (ulong)CARRY8(uVar88,uVar87);
    param_1[4] = uVar84 + uVar89;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = param_5[5];
    auVar58._8_8_ = 0;
    auVar58._0_8_ = *param_3;
    uVar88 = SUB168(auVar18 * auVar58,8);
    uVar84 = param_5[5] * *param_3;
    uVar94 = uVar84 + uVar92;
    if (CARRY8(uVar84,uVar92)) {
      uVar88 = uVar88 + 1;
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = param_5[4];
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_3[1];
    uVar85 = SUB168(auVar19 * auVar59,8);
    uVar87 = param_5[4] * param_3[1];
    uVar84 = uVar94 + uVar87;
    if (CARRY8(uVar94,uVar87)) {
      uVar85 = uVar85 + 1;
    }
    uVar94 = 2;
    if (!CARRY8(uVar86,uVar88)) {
      uVar94 = 1;
    }
    uVar87 = uVar86 + uVar88 + uVar85;
    if (!CARRY8(uVar86 + uVar88,uVar85)) {
      uVar94 = (ulong)CARRY8(uVar86,uVar88);
    }
    auVar20._8_8_ = 0;
    auVar20._0_8_ = param_5[3];
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_3[2];
    uVar86 = SUB168(auVar20 * auVar60,8);
    uVar85 = param_5[3] * param_3[2];
    uVar88 = uVar84 + uVar85;
    if (CARRY8(uVar84,uVar85)) {
      uVar86 = uVar86 + 1;
    }
    uVar84 = uVar87 + uVar86;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = param_5[2];
    auVar61._8_8_ = 0;
    auVar61._0_8_ = param_3[3];
    uVar89 = SUB168(auVar21 * auVar61,8);
    uVar92 = param_5[2] * param_3[3];
    uVar85 = uVar88 + uVar92;
    if (CARRY8(uVar88,uVar92)) {
      uVar89 = uVar89 + 1;
    }
    uVar88 = uVar84 + uVar89;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = param_5[1];
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_3[4];
    uVar100 = SUB168(auVar22 * auVar62,8);
    uVar90 = param_5[1] * param_3[4];
    uVar92 = uVar85 + uVar90;
    if (CARRY8(uVar85,uVar90)) {
      uVar100 = uVar100 + 1;
    }
    uVar85 = uVar88 + uVar100;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *param_5;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_3[5];
    uVar90 = SUB168(auVar23 * auVar63,8);
    uVar93 = *param_5 * param_3[5];
    if (CARRY8(uVar92,uVar93)) {
      uVar90 = uVar90 + 1;
    }
    uVar91 = uVar85 + uVar90;
    param_1[5] = uVar92 + uVar93;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *param_5;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_3[6];
    lVar102 = SUB168(auVar24 * auVar64,8);
    uVar93 = *param_5 * param_3[6];
    uVar92 = uVar93 + uVar91;
    if (CARRY8(uVar93,uVar91)) {
      lVar102 = lVar102 + 1;
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = param_5[1];
    auVar65._8_8_ = 0;
    auVar65._0_8_ = param_3[5];
    lVar96 = SUB168(auVar25 * auVar65,8);
    uVar91 = param_5[1] * param_3[5];
    uVar93 = uVar92 + uVar91;
    if (CARRY8(uVar92,uVar91)) {
      lVar96 = lVar96 + 1;
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = param_5[2];
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_3[4];
    lVar97 = SUB168(auVar26 * auVar66,8);
    uVar91 = param_5[2] * param_3[4];
    uVar92 = uVar93 + uVar91;
    if (CARRY8(uVar93,uVar91)) {
      lVar97 = lVar97 + 1;
    }
    auVar27._8_8_ = 0;
    auVar27._0_8_ = param_5[3];
    auVar67._8_8_ = 0;
    auVar67._0_8_ = param_3[3];
    lVar98 = SUB168(auVar27 * auVar67,8);
    uVar91 = param_5[3] * param_3[3];
    uVar93 = uVar92 + uVar91;
    if (CARRY8(uVar92,uVar91)) {
      lVar98 = lVar98 + 1;
    }
    auVar28._8_8_ = 0;
    auVar28._0_8_ = param_5[4];
    auVar68._8_8_ = 0;
    auVar68._0_8_ = param_3[2];
    lVar101 = SUB168(auVar28 * auVar68,8);
    uVar91 = param_5[4] * param_3[2];
    uVar92 = uVar93 + uVar91;
    if (CARRY8(uVar93,uVar91)) {
      lVar101 = lVar101 + 1;
    }
    auVar29._8_8_ = 0;
    auVar29._0_8_ = param_5[5];
    auVar69._8_8_ = 0;
    auVar69._0_8_ = param_3[1];
    lVar95 = SUB168(auVar29 * auVar69,8);
    uVar91 = param_5[5] * param_3[1];
    uVar93 = uVar92 + uVar91;
    if (CARRY8(uVar92,uVar91)) {
      lVar95 = lVar95 + 1;
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = param_5[6];
    auVar70._8_8_ = 0;
    auVar70._0_8_ = *param_3;
    lVar99 = SUB168(auVar30 * auVar70,8);
    uVar92 = param_5[6] * *param_3;
    if (CARRY8(uVar93,uVar92)) {
      lVar99 = lVar99 + 1;
    }
    param_1[6] = uVar93 + uVar92;
    param_1[7] = param_5[7] * *param_3 +
                 uVar94 + CARRY8(uVar87,uVar86) + (ulong)CARRY8(uVar84,uVar89) +
                 (ulong)CARRY8(uVar88,uVar100) + (ulong)CARRY8(uVar85,uVar90) + lVar102 + lVar96 +
                 lVar97 + lVar98 + lVar101 + lVar95 + lVar99 + param_5[6] * param_3[1] +
                 param_5[5] * param_3[2] + param_5[4] * param_3[3] + param_5[3] * param_3[4] +
                 param_5[2] * param_3[5] + param_5[1] * param_3[6] + *param_5 * param_3[7];
    func_0x006fe634();
    lVar102 = extraout_x16;
    if (CARRY8(extraout_x10,extraout_x13)) {
      lVar102 = extraout_x16 + 1;
    }
    auVar31._8_8_ = 0;
    auVar31._0_8_ = param_5[3];
    auVar71._8_8_ = 0;
    auVar71._0_8_ = extraout_x15;
    lVar96 = SUB168(auVar31 * auVar71,8);
    uVar88 = param_5[3] * extraout_x15;
    uVar94 = extraout_x10 + extraout_x13 + uVar88;
    if (CARRY8(extraout_x10 + extraout_x13,uVar88)) {
      lVar96 = lVar96 + 1;
    }
    auVar32._8_8_ = 0;
    auVar32._0_8_ = param_5[4];
    auVar72._8_8_ = 0;
    auVar72._0_8_ = param_3[4];
    lVar97 = SUB168(auVar32 * auVar72,8);
    uVar84 = param_5[4] * param_3[4];
    uVar88 = uVar94 + uVar84;
    if (CARRY8(uVar94,uVar84)) {
      lVar97 = lVar97 + 1;
    }
    auVar33._8_8_ = 0;
    auVar33._0_8_ = param_5[5];
    auVar73._8_8_ = 0;
    auVar73._0_8_ = param_3[3];
    lVar98 = SUB168(auVar33 * auVar73,8);
    uVar84 = param_5[5] * param_3[3];
    uVar94 = uVar88 + uVar84;
    if (CARRY8(uVar88,uVar84)) {
      lVar98 = lVar98 + 1;
    }
    auVar34._8_8_ = 0;
    auVar34._0_8_ = param_5[6];
    auVar74._8_8_ = 0;
    auVar74._0_8_ = param_3[2];
    lVar101 = SUB168(auVar34 * auVar74,8);
    uVar84 = param_5[6] * param_3[2];
    uVar88 = uVar94 + uVar84;
    if (CARRY8(uVar94,uVar84)) {
      lVar101 = lVar101 + 1;
    }
    auVar35._8_8_ = 0;
    auVar35._0_8_ = param_5[7];
    auVar75._8_8_ = 0;
    auVar75._0_8_ = param_3[1];
    lVar95 = SUB168(auVar35 * auVar75,8);
    uVar94 = param_5[7] * param_3[1];
    if (CARRY8(uVar88,uVar94)) {
      lVar95 = lVar95 + 1;
    }
    param_1[8] = uVar88 + uVar94;
    param_1[9] = param_5[7] * param_3[2] +
                 extraout_x12 + extraout_x11 + lVar102 + lVar96 + lVar97 + lVar98 + lVar101 + lVar95
                 + param_5[6] * param_3[3] + param_5[5] * param_3[4] + param_5[4] * param_3[5] +
                 param_5[3] * param_3[6] + param_5[2] * param_3[7];
    func_0x006fe634();
    lVar102 = extraout_x16_00;
    if (CARRY8(extraout_x10_00,extraout_x13_00)) {
      lVar102 = extraout_x16_00 + 1;
    }
    auVar36._8_8_ = 0;
    auVar36._0_8_ = param_5[5];
    auVar76._8_8_ = 0;
    auVar76._0_8_ = extraout_x15_00;
    lVar96 = SUB168(auVar36 * auVar76,8);
    uVar88 = param_5[5] * extraout_x15_00;
    uVar94 = extraout_x10_00 + extraout_x13_00 + uVar88;
    if (CARRY8(extraout_x10_00 + extraout_x13_00,uVar88)) {
      lVar96 = lVar96 + 1;
    }
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_5[6];
    auVar77._8_8_ = 0;
    auVar77._0_8_ = param_3[4];
    lVar97 = SUB168(auVar37 * auVar77,8);
    uVar84 = param_5[6] * param_3[4];
    uVar88 = uVar94 + uVar84;
    if (CARRY8(uVar94,uVar84)) {
      lVar97 = lVar97 + 1;
    }
    auVar38._8_8_ = 0;
    auVar38._0_8_ = param_5[7];
    auVar78._8_8_ = 0;
    auVar78._0_8_ = param_3[3];
    lVar98 = SUB168(auVar38 * auVar78,8);
    uVar94 = param_5[7] * param_3[3];
    if (CARRY8(uVar88,uVar94)) {
      lVar98 = lVar98 + 1;
    }
    param_1[10] = uVar88 + uVar94;
    param_1[0xb] = param_5[7] * param_3[4] +
                   extraout_x12_00 + extraout_x11_00 + lVar102 + lVar96 + lVar97 + lVar98 +
                   param_5[6] * param_3[5] + param_5[5] * param_3[6] + param_5[4] * param_3[7];
    func_0x006fe634();
    uVar94 = extraout_x16_01;
    if (CARRY8(extraout_x10_01,extraout_x13_01)) {
      uVar94 = extraout_x16_01 + 1;
    }
    uVar88 = extraout_x9;
    if (!CARRY8(extraout_x12_01,extraout_x11_01)) {
      uVar88 = 1;
    }
    uVar84 = extraout_x12_01 + extraout_x11_01 + uVar94;
    if (!CARRY8(extraout_x12_01 + extraout_x11_01,uVar94)) {
      uVar88 = (ulong)CARRY8(extraout_x12_01,extraout_x11_01);
    }
    auVar39._8_8_ = 0;
    auVar39._0_8_ = param_5[7];
    auVar79._8_8_ = 0;
    auVar79._0_8_ = extraout_x15_01;
    uVar94 = SUB168(auVar39 * auVar79,8);
    uVar86 = param_5[7] * extraout_x15_01;
    if (CARRY8(extraout_x10_01 + extraout_x13_01,uVar86)) {
      uVar94 = uVar94 + 1;
    }
    param_1[0xc] = extraout_x10_01 + extraout_x13_01 + uVar86;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = param_5[7];
    auVar80._8_8_ = 0;
    auVar80._0_8_ = param_3[6];
    uVar85 = SUB168(auVar40 * auVar80,8);
    uVar87 = param_5[7] * param_3[6];
    uVar86 = uVar87 + uVar84 + uVar94;
    if (CARRY8(uVar87,uVar84 + uVar94)) {
      uVar85 = uVar85 + 1;
    }
    bVar1 = CARRY8(uVar85 + uVar88,(ulong)CARRY8(uVar84,uVar94));
    uVar84 = uVar85 + uVar88 + (ulong)CARRY8(uVar84,uVar94);
    auVar41._8_8_ = 0;
    auVar41._0_8_ = param_5[6];
    auVar81._8_8_ = 0;
    auVar81._0_8_ = param_3[7];
    uVar94 = SUB168(auVar41 * auVar81,8);
    uVar87 = param_5[6] * param_3[7];
    if (CARRY8(uVar86,uVar87)) {
      uVar94 = uVar94 + 1;
    }
    uVar89 = extraout_x8;
    if (CARRY8(uVar85,uVar88) || bVar1) {
      uVar89 = extraout_x8 + 1;
    }
    uVar92 = uVar84 + uVar94;
    if (!CARRY8(uVar84,uVar94)) {
      uVar89 = (ulong)(CARRY8(uVar85,uVar88) || bVar1);
    }
    param_1[0xd] = uVar86 + uVar87;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = param_5[7];
    auVar82._8_8_ = 0;
    auVar82._0_8_ = param_3[7];
    uVar94 = param_5[7] * param_3[7];
    param_1[0xe] = uVar94 + uVar92;
    param_1[0xf] = uVar89 + SUB168(auVar42 * auVar82,8) + (ulong)CARRY8(uVar94,uVar92);
    return param_1;
  }
  func_0x006fdcd0();
  uVar94 = param_6;
  if (param_4 < param_6) {
    uVar94 = param_4;
    param_4 = param_6;
  }
  if (uVar94 == 0) {
    lVar102 = param_4 << 3;
    func_0x006fdca0(param_1,0,lVar102,unaff_x30);
    if (lVar102 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memset_0099a408)();
      return param_1;
    }
    return param_1;
  }
  plVar2 = param_1 + param_4;
  plVar83 = param_1;
  func_0x006fd7d4();
  FUN_006e4b24();
  *plVar2 = (long)plVar83;
  lVar102 = -uVar94;
  lVar96 = 0;
  while( true ) {
    lVar102 = lVar102 + 4;
    if (lVar102 == 3) {
      return plVar83;
    }
    plVar83 = (long *)((long)param_1 + lVar96 + 8);
    func_0x006fda18();
    FUN_006e6efc();
    *(long **)((long)plVar2 + lVar96 + 8) = plVar83;
    if (lVar102 == 2) {
      return plVar83;
    }
    plVar83 = (long *)((long)param_1 + lVar96 + 0x10);
    func_0x006fda18();
    FUN_006e6efc();
    *(long **)((long)plVar2 + lVar96 + 0x10) = plVar83;
    if (lVar102 == 1) {
      return plVar83;
    }
    plVar83 = (long *)((long)param_1 + lVar96 + 0x18);
    func_0x006fda18();
    FUN_006e6efc();
    *(long **)((long)plVar2 + lVar96 + 0x18) = plVar83;
    if (lVar102 == 0) break;
    plVar83 = (long *)(lVar96 + 0x20 + (long)param_1);
    func_0x006fda18();
    FUN_006e6efc();
    *(long **)((long)plVar2 + lVar96 + 0x20) = plVar83;
    lVar96 = lVar96 + 0x20;
  }
  return plVar83;
}



/* Entry: 006e83cc; end: 006e8447;  */

long FUN_006e83cc(undefined8 param_1)

{
  long in_x5;
  
  func_0x006fe858();
  FUN_006f8014(in_x5);
  func_0x006fe184(param_1);
  FUN_006f8014();
  func_0x006fea74();
  FUN_006e4030();
  return -in_x5;
}



/* Entry: 006e8448; end: 006e871f;  */

undefined8 FUN_006e8448(ulong *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  
  func_0x006fdc38();
  uVar2 = (uint)param_2[1];
  if ((uVar2 == 0) || (uVar1 = (uint)param_3[1], uVar1 == 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  puVar5 = param_1;
  func_0x006fe070();
  puVar9 = param_1;
  if ((param_1 != param_2 && param_1 != param_3) ||
     (func_0x006fd82c(), puVar9 = puVar5, puVar5 != (ulong *)0x0)) {
    iVar4 = (int)puVar5;
    *(uint *)(puVar9 + 2) = (uint)param_3[2] ^ (uint)param_2[2];
    if (uVar2 == 8 && uVar1 == 8) {
      puVar5 = puVar9;
      FUN_006e35dc(puVar9,0x10);
      if ((int)puVar5 != 0) {
        *(undefined4 *)(puVar9 + 1) = 0x10;
        uVar6 = *puVar9;
        func_0x006e6fe0(uVar6,*param_2,*param_3);
LAB_006e853c:
        if (param_1 != puVar9) {
          func_0x006fdf28();
          func_0x006e3d58();
          if (uVar6 == 0) goto LAB_006e8604;
        }
        uVar8 = 1;
        goto LAB_006e8608;
      }
    }
    else if (((int)uVar2 < 0x10 || (int)uVar1 < 0x10) || 2 < (uVar2 - uVar1) + 1) {
      func_0x006fe198();
      if (iVar4 != 0) {
        *(uint *)(puVar9 + 1) = uVar1 + uVar2;
        uVar6 = *puVar9;
        func_0x006e8618(uVar6,*param_2,(long)(int)uVar2,*param_3,(long)(int)uVar1);
        goto LAB_006e853c;
      }
    }
    else {
      uVar3 = uVar1;
      if (-1 < (int)(uVar2 - uVar1)) {
        uVar3 = uVar2;
      }
      uVar7 = (ulong)uVar3;
      func_0x006e3dfc();
      uVar6 = uVar7;
      func_0x006fd82c();
      if (uVar6 != 0) {
        uVar3 = (int)uVar7 - 1;
        iVar4 = 1 << (ulong)(uVar3 & 0x1f);
        if (iVar4 < (int)uVar2 || iVar4 < (int)uVar1) {
          FUN_006e35dc(uVar6,(long)(8 << (ulong)(uVar3 & 0x1f)));
          if (((int)uVar6 != 0) && (func_0x006fe198(), (int)uVar6 != 0)) {
            func_0x006fe0a0();
            FUN_006f80ac();
LAB_006e85f8:
            *(uint *)(puVar9 + 1) = uVar1 + uVar2;
            goto LAB_006e853c;
          }
        }
        else {
          FUN_006e35dc(uVar6,4 << (ulong)(uVar3 & 0x1f));
          if (((int)uVar6 != 0) && (func_0x006fe198(), (int)uVar6 != 0)) {
            func_0x006fe0a0();
            func_0x006f8380();
            goto LAB_006e85f8;
          }
        }
      }
    }
  }
LAB_006e8604:
  uVar8 = 0;
LAB_006e8608:
  func_0x006fd8f4();
  return uVar8;
}



/* Entry: 006e8720; end: 006e8793;  */

long FUN_006e8720(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((int)param_1[1] == 0) {
    return 1;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar1 = *param_1;
    FUN_006e4b24(lVar1,lVar1,(long)(int)param_1[1],param_2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x006fde6c();
      if ((int)lVar2 == 0) {
        return lVar2;
      }
      lVar2 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar2 + 1;
      *(long *)(*param_1 + (long)(int)lVar2 * 8) = lVar1;
    }
  }
  return 1;
}



/* Entry: 006e8794; end: 006e8907;  */

ulong * FUN_006e8794(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  ulong uVar8;
  ulong uVar9;
  long extraout_x10;
  ulong *puVar10;
  long extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x11_03;
  ulong uVar11;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 extraout_x12_01;
  undefined8 extraout_x12_02;
  undefined8 extraout_x12_03;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  
  puVar6 = param_1;
  func_0x006fd5fc();
  uVar2 = (uint)param_2[1];
  puVar13 = (ulong *)(ulong)uVar2;
  uVar5 = uVar2 == 0;
  if ((int)uVar2 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    puVar15 = (ulong *)((long)&MACH_HEADER.magic + 1);
    goto LAB_006e88d8;
  }
  puVar6 = param_2;
  puVar10 = param_3;
  FUN_006e44d0();
  uVar5 = param_2 == param_1;
  param_2 = puVar6;
  puVar12 = param_1;
  if ((bool)uVar5) {
    func_0x006fd82c();
    param_2 = puVar6;
    puVar12 = param_3;
  }
  func_0x006fd82c();
  puVar15 = (ulong *)0x0;
  puVar6 = param_3;
  if ((puVar12 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
    puVar15 = (ulong *)((long)puVar13 << 1);
    func_0x006fdf80();
    FUN_006e35dc();
    if ((int)puVar6 == 0) goto LAB_006e88d0;
    if (uVar2 == 8) {
      func_0x006fe4f0();
      func_0x006e7734();
LAB_006e8888:
      *(undefined4 *)(puVar12 + 2) = 0;
      *(int *)(puVar12 + 1) = (int)puVar15;
      uVar5 = puVar12 == param_1;
      if (!(bool)uVar5) {
        func_0x006fdf28();
        func_0x006e3d58();
        if (puVar6 == (ulong *)0x0) goto LAB_006e88d0;
      }
      puVar15 = (ulong *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      if (uVar2 == 4) {
        func_0x006fe4f0();
        func_0x006e7d30();
        goto LAB_006e8888;
      }
      if (uVar2 < 0x10) {
        func_0x006fe4f0();
        param_3 = puVar6;
LAB_006e8880:
        FUN_006e8908();
        puVar6 = param_3;
        puVar10 = puVar13;
        goto LAB_006e8888;
      }
      uVar5 = (uVar2 & uVar2 - 1) == 0;
      if ((bool)uVar5) {
        param_2 = (ulong *)(ulong)(uVar2 << 2);
        FUN_006e35dc();
        puVar6 = param_3;
        if ((int)param_3 != 0) {
          func_0x006fe4f0();
          func_0x006e8a6c();
          puVar6 = param_3;
          puVar10 = puVar13;
          goto LAB_006e8888;
        }
      }
      else {
        param_2 = puVar15;
        FUN_006e35dc();
        puVar6 = param_3;
        if ((int)param_3 != 0) {
          func_0x006fe4f0();
          goto LAB_006e8880;
        }
      }
LAB_006e88d0:
      puVar15 = (ulong *)0x0;
    }
  }
  func_0x006fd8f4();
  param_3 = puVar10;
LAB_006e88d8:
  func_0x006fd534(extraout_x8);
  if ((bool)uVar5) {
    return puVar15;
  }
  ___stack_chk_fail();
  if (param_3 != (ulong *)0x0) {
    func_0x006fdcd0();
    uVar14 = (long)param_3 << 1;
    puVar6[(long)param_3 * 2 + -1] = 0;
    *puVar6 = 0;
    if ((long)param_3 + -1 != 0) {
      puVar13 = puVar6 + 1;
      FUN_006e4b24(puVar13,param_2 + 1,(long)param_3 + -1,*param_2);
      puVar6[(long)param_3] = (ulong)puVar13;
      if ((ulong *)((long)&MACH_HEADER.magic + 2) < param_3) {
        puVar13 = puVar6 + 3;
        lVar16 = (long)param_3 + -2;
        for (lVar17 = 0; (long)param_3 * 8 + -0x10 != lVar17; lVar17 = lVar17 + 8) {
          puVar15 = puVar13;
          func_0x006e6efc(puVar13,(long)param_2 + lVar17 + 0x10,lVar16,
                          *(undefined8 *)((long)param_2 + lVar17 + 8));
          *(ulong **)((long)puVar6 + lVar17 + (long)param_3 * 8 + 8) = puVar15;
          puVar13 = puVar13 + 2;
          lVar16 = lVar16 + -1;
        }
      }
    }
    puVar13 = puVar6;
    puVar15 = puVar6;
    FUN_006e3678(puVar6,puVar6,puVar6,uVar14);
    puVar10 = param_3;
    while ((ulong *)((long)&MACH_HEADER.magic + 3) < puVar10) {
      func_0x006fe520();
      *extraout_x8_00 = extraout_x11;
      extraout_x8_00[1] = extraout_x12;
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_01 + 0x10) = extraout_x11_00;
      *(undefined8 *)(extraout_x8_01 + 0x18) = extraout_x12_00;
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_02 + 0x20) = extraout_x11_01;
      *(undefined8 *)(extraout_x8_02 + 0x28) = extraout_x12_01;
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_03 + 0x30) = extraout_x11_02;
      *(undefined8 *)(extraout_x8_03 + 0x38) = extraout_x12_02;
      puVar10 = (ulong *)(extraout_x10 + -4);
    }
    lVar16 = ((ulong)param_3 & 3) << 4;
    lVar17 = 0;
    while (lVar16 != lVar17) {
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_04 + extraout_x9) = extraout_x11_03;
      *(undefined8 *)(extraout_x8_04 + extraout_x9 + 8) = extraout_x12_03;
      lVar16 = extraout_x10_00;
      lVar17 = extraout_x9 + 0x10;
    }
    func_0x006fdbc4();
    func_0x006fdca0();
    puVar10 = (ulong *)0x0;
    if (uVar14 != 0) {
      for (; 3 < uVar14; uVar14 = uVar14 - 4) {
        uVar9 = (long)puVar10 + *puVar13;
        uVar1 = (ulong)CARRY8((ulong)puVar10,*puVar13);
        if (CARRY8(uVar9,*puVar15)) {
          uVar1 = uVar1 + 1;
        }
        *puVar6 = uVar9 + *puVar15;
        uVar7 = puVar13[1];
        uVar8 = puVar15[1];
        uVar9 = uVar1 + uVar7;
        puVar6[1] = uVar9 + uVar8;
        uVar11 = (ulong)CARRY8(puVar15[2],puVar13[2]);
        uVar3 = nzcv;
        puVar6[2] = puVar15[2] + puVar13[2] + (ulong)CARRY8(uVar1,uVar7) +
                    (ulong)CARRY8(uVar9,uVar8);
        bVar4 = CARRY8(puVar15[3],puVar13[3]);
        uVar9 = puVar15[3] + puVar13[3];
        puVar10 = (ulong *)(ulong)bVar4;
        nzcv = uVar3;
        if (CARRY8(uVar9,uVar11) || CARRY8(uVar9 + uVar11,(ulong)bVar4)) {
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar13 = puVar13 + 4;
        puVar6[3] = uVar9 + uVar11 + (ulong)bVar4;
        puVar15 = puVar15 + 4;
        puVar6 = puVar6 + 4;
      }
      for (uVar9 = 0; uVar14 != uVar9; uVar9 = uVar9 + 1) {
        uVar1 = (long)puVar10 + puVar13[uVar9];
        puVar10 = (ulong *)(ulong)CARRY8((ulong)puVar10,puVar13[uVar9]);
        if (CARRY8(uVar1,puVar15[uVar9])) {
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar6[uVar9] = uVar1 + puVar15[uVar9];
      }
    }
    return puVar10;
  }
  return puVar6;
}



/* Entry: 006e8908; end: 006e8bbf;  */

ulong * FUN_006e8908(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  ulong uVar8;
  long extraout_x10;
  ulong uVar9;
  long extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x11_03;
  ulong uVar10;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 extraout_x12_01;
  undefined8 extraout_x12_02;
  undefined8 extraout_x12_03;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  if (param_3 != 0) {
    func_0x006fdcd0();
    uVar11 = param_3 << 1;
    param_1[param_3 * 2 + -1] = 0;
    *param_1 = 0;
    if (param_3 - 1 != 0) {
      puVar4 = param_1 + 1;
      FUN_006e4b24(puVar4,param_2 + 1,param_3 - 1,*param_2);
      param_1[param_3] = (ulong)puVar4;
      if (2 < param_3) {
        puVar4 = param_1 + 3;
        lVar12 = param_3 - 2;
        for (lVar13 = 0; param_3 * 8 + -0x10 != lVar13; lVar13 = lVar13 + 8) {
          puVar5 = puVar4;
          FUN_006e6efc(puVar4,(long)param_2 + lVar13 + 0x10,lVar12,
                       *(undefined8 *)((long)param_2 + lVar13 + 8));
          *(ulong **)((long)param_1 + lVar13 + param_3 * 8 + 8) = puVar5;
          puVar4 = puVar4 + 2;
          lVar12 = lVar12 + -1;
        }
      }
    }
    puVar4 = param_1;
    puVar5 = param_1;
    FUN_006e3678(param_1,param_1,param_1,uVar11);
    uVar9 = param_3;
    while (3 < uVar9) {
      func_0x006fe520();
      *extraout_x8 = extraout_x11;
      extraout_x8[1] = extraout_x12;
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_00 + 0x10) = extraout_x11_00;
      *(undefined8 *)(extraout_x8_00 + 0x18) = extraout_x12_00;
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_01 + 0x20) = extraout_x11_01;
      *(undefined8 *)(extraout_x8_01 + 0x28) = extraout_x12_01;
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_02 + 0x30) = extraout_x11_02;
      *(undefined8 *)(extraout_x8_02 + 0x38) = extraout_x12_02;
      uVar9 = extraout_x10 - 4;
    }
    lVar12 = (param_3 & 3) << 4;
    lVar13 = 0;
    while (lVar12 != lVar13) {
      func_0x006fe520();
      *(undefined8 *)(extraout_x8_03 + extraout_x9) = extraout_x11_03;
      *(undefined8 *)(extraout_x8_03 + extraout_x9 + 8) = extraout_x12_03;
      lVar12 = extraout_x10_00;
      lVar13 = extraout_x9 + 0x10;
    }
    func_0x006fdbc4();
    func_0x006fdca0();
    puVar6 = (ulong *)0x0;
    if (uVar11 != 0) {
      for (; 3 < uVar11; uVar11 = uVar11 - 4) {
        uVar9 = (long)puVar6 + *puVar4;
        uVar1 = (ulong)CARRY8((ulong)puVar6,*puVar4);
        if (CARRY8(uVar9,*puVar5)) {
          uVar1 = uVar1 + 1;
        }
        *param_1 = uVar9 + *puVar5;
        uVar7 = puVar4[1];
        uVar8 = puVar5[1];
        uVar9 = uVar1 + uVar7;
        param_1[1] = uVar9 + uVar8;
        uVar10 = (ulong)CARRY8(puVar5[2],puVar4[2]);
        uVar2 = nzcv;
        param_1[2] = puVar5[2] + puVar4[2] + (ulong)CARRY8(uVar1,uVar7) + (ulong)CARRY8(uVar9,uVar8)
        ;
        bVar3 = CARRY8(puVar5[3],puVar4[3]);
        uVar9 = puVar5[3] + puVar4[3];
        puVar6 = (ulong *)(ulong)bVar3;
        nzcv = uVar2;
        if (CARRY8(uVar9,uVar10) || CARRY8(uVar9 + uVar10,(ulong)bVar3)) {
          puVar6 = (ulong *)((long)puVar6 + 1);
        }
        puVar4 = puVar4 + 4;
        param_1[3] = uVar9 + uVar10 + (ulong)bVar3;
        puVar5 = puVar5 + 4;
        param_1 = param_1 + 4;
      }
      for (uVar9 = 0; uVar11 != uVar9; uVar9 = uVar9 + 1) {
        uVar1 = (long)puVar6 + puVar4[uVar9];
        puVar6 = (ulong *)(ulong)CARRY8((ulong)puVar6,puVar4[uVar9]);
        if (CARRY8(uVar1,puVar5[uVar9])) {
          puVar6 = (ulong *)((long)puVar6 + 1);
        }
        param_1[uVar9] = uVar1 + puVar5[uVar9];
      }
    }
    return puVar6;
  }
  return param_1;
}



/* Entry: 006e8bc0; end: 006e8c1b;  */

undefined4 FUN_006e8bc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x1b;
  if (param_1 < 0x37) {
    uVar2 = 0x22;
  }
  uVar1 = 8;
  if (param_1 < 0x134) {
    uVar1 = uVar2;
  }
  uVar2 = 7;
  if (param_1 < 0x15b) {
    uVar2 = uVar1;
  }
  uVar1 = 6;
  if (param_1 < 400) {
    uVar1 = uVar2;
  }
  uVar2 = 5;
  if (param_1 < 0x1dc) {
    uVar2 = uVar1;
  }
  uVar1 = 4;
  if (param_1 < 0x541) {
    uVar1 = uVar2;
  }
  uVar2 = 3;
  if (param_1 < 0xea3) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 006e8c1c; end: 006e91e7;  */

bool FUN_006e8c1c(ushort *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x006fdc38();
  uVar2 = *(uint *)(param_2 + 1);
  uVar1 = 0x400;
  if ((int)uVar2 < 0x11) {
    uVar1 = 0x200;
  }
  uVar6 = 1;
  do {
    uVar5 = uVar6;
    if (uVar1 <= uVar5) goto LAB_006e8cd4;
    uVar3 = *(ushort *)(&UNK_00836678 + uVar5 * 2);
    func_0x006e3dfc(uVar3 - 1);
    uVar4 = 0;
    for (uVar6 = (ulong)uVar2; 0 < (int)uVar6; uVar6 = uVar6 - 1) {
      uVar4 = (ulong)((uint)uVar4 & 0xffff);
      func_0x006fe350(uVar4,*(undefined4 *)(*param_2 + uVar6 * 8 + -4));
      func_0x006fe350();
    }
    uVar6 = uVar5 + 1;
  } while ((uint)uVar4 != 0);
  *param_1 = uVar3;
LAB_006e8cd4:
  return uVar5 < uVar1;
}



/* Entry: 006e91e8; end: 006e92d3;  */

void FUN_006e91e8(long *param_1,int param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar6;
  long lVar7;
  long *plVar5;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else if (param_2 < 0x7fffffc1) {
      iVar2 = (param_2 + 0x3f) / 0x40;
      lVar7 = (long)iVar2;
      plVar5 = param_1;
      func_0x006fdab0();
      iVar4 = (int)plVar5;
      FUN_006e35dc();
      if (iVar4 != 0) {
        uVar3 = (param_2 + -1) % 0x40;
        uVar1 = 0xffffffffffffffff;
        if ((int)uVar3 < 0x3f) {
          uVar1 = ~(-1L << ((ulong)(uVar3 + 1) & 0x3f));
        }
        FUN_006e92d4(*param_1,lVar7 << 3);
        puVar6 = (ulong *)*param_1;
        puVar6[lVar7 + -1] = puVar6[lVar7 + -1] & uVar1 | 1L << ((ulong)uVar3 & 0x3f);
        if (param_3 != 0) {
          *puVar6 = *puVar6 | 1;
        }
        *(undefined4 *)(param_1 + 2) = 0;
        *(int *)(param_1 + 1) = iVar2;
      }
    }
    else {
      func_0x006fd868();
      func_0x006fd5dc();
    }
  }
  return;
}



/* Entry: 006e92d4; end: 006e92f3;  */

undefined8 FUN_006e92d4(undefined8 param_1,undefined8 param_2)

{
  FUN_006e94a4(param_1,param_2,&UNK_00836538);
  return 1;
}



/* Entry: 006e92f4; end: 006e9377;  */

uint FUN_006e92f4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    for (lVar4 = 1; param_4 != lVar4; lVar4 = lVar4 + 1) {
      uVar3 = param_1[lVar4] | uVar3;
    }
    uVar1 = (uint)((ulong)*param_1 >> 0x20);
    uVar2 = 0xffffffff;
    if (uVar3 == 0) {
      uVar2 = ~((int)(((uint)((ulong)(*param_1 - param_2) >> 0x20) ^ uVar1 |
                      uVar1 ^ (uint)((ulong)param_2 >> 0x20)) ^ uVar1) >> 0x1f);
    }
  }
  FUN_006e42c0(param_1,param_3,param_4);
  return (uint)param_1 & uVar2;
}



/* Entry: 006e9378; end: 006e942f;  */

void FUN_006e9378(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long unaff_x22;
  uint uVar5;
  ulong in_stack_00000000;
  long in_stack_00000008;
  long lVar4;
  
  func_0x006fdc38();
  func_0x006fdbac();
  iVar3 = (int)&stack0x00000008;
  FUN_006e9430();
  if (iVar3 != 0) {
    lVar1 = unaff_x22 + in_stack_00000008 * 8;
    func_0x006fd9c0(lVar1);
    uVar5 = 0xffffff9c;
    do {
      bVar2 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      if (bVar2) {
        func_0x006fd894();
        func_0x006fd5dc();
        return;
      }
      FUN_006e94a4();
      *(ulong *)(lVar1 + -8) = *(ulong *)(lVar1 + -8) & in_stack_00000000;
      lVar4 = unaff_x22;
      func_0x006fda18();
      iVar3 = (int)lVar4;
      FUN_006e92f4();
    } while (iVar3 == 0);
  }
  return;
}



/* Entry: 006e9430; end: 006e94a3;  */

undefined8 FUN_006e9430(long *param_1,ulong *param_2,ulong param_3,ulong *param_4,long param_5)

{
  ulong uVar1;
  
  do {
    if (param_5 == 0) {
LAB_006e9484:
      func_0x006fd894();
      func_0x006fd5dc();
      return 0;
    }
    uVar1 = param_4[param_5 + -1];
    if (uVar1 != 0) {
      if ((param_5 != 1) || (param_3 < *param_4)) {
        uVar1 = uVar1 | uVar1 >> 1;
        uVar1 = uVar1 | uVar1 >> 2;
        uVar1 = uVar1 | uVar1 >> 4;
        uVar1 = uVar1 | uVar1 >> 8;
        uVar1 = uVar1 | uVar1 >> 0x10;
        *param_1 = param_5;
        *param_2 = uVar1 | uVar1 >> 0x20;
        return 1;
      }
      goto LAB_006e9484;
    }
    param_5 = param_5 + -1;
  } while( true );
}



/* Entry: 006e94a4; end: 006e977b;  */

void FUN_006e94a4(segment_command *param_1,segment_command *param_2,segment_command *param_3)

{
  uint uVar1;
  qword *pqVar2;
  qword qVar3;
  undefined4 uVar4;
  undefined1 in_ZR;
  int iVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  bool bVar8;
  long lVar9;
  long extraout_x8;
  qword extraout_x8_00;
  ulong uVar10;
  code *extraout_x8_01;
  qword extraout_x9;
  segment_command *psVar11;
  segment_command *psVar12;
  ulong uVar13;
  segment_command *psVar14;
  ulong unaff_x22;
  ulong uVar15;
  ulong uVar16;
  segment_command *unaff_x30;
  char *pcStack_1d0;
  qword qStack_1c0;
  qword qStack_1b8;
  qword qStack_1b0;
  dword dStack_1a8;
  dword dStack_1a4;
  qword qStack_1a0;
  undefined8 uStack_198;
  segment_command asStack_190 [4];
  undefined1 auStack_60 [40];
  qword qStack_38;
  qword qStack_30;
  dword dStack_28;
  dword dStack_24;
  qword qStack_20;
  undefined8 uStack_18;
  
  func_0x006fdcd0();
  func_0x006fd588();
  psVar6 = param_1;
  if (param_2 != (segment_command *)0x0) {
    func_0x006fdb48();
    psVar6 = param_1;
    FUN_00705968();
    if ((int)psVar6 == 0) {
      psVar6 = (segment_command *)auStack_60;
      param_2 = &segment_command_00000020;
      FUN_006f17c4();
      if ((int)psVar6 == 0) goto LAB_006e9774;
    }
    else {
      auStack_60[8] = '\0';
      auStack_60[9] = '\0';
      auStack_60[10] = '\0';
      auStack_60[0xb] = '\0';
      auStack_60[0xc] = '\0';
      auStack_60[0xd] = '\0';
      auStack_60[0xe] = '\0';
      auStack_60[0xf] = '\0';
      auStack_60._0_4_ = 0;
      auStack_60._4_4_ = 0;
      auStack_60._24_8_ = 0;
      auStack_60[0x10] = '\0';
      auStack_60[0x11] = '\0';
      auStack_60[0x12] = '\0';
      auStack_60[0x13] = '\0';
      auStack_60[0x14] = '\0';
      auStack_60[0x15] = '\0';
      auStack_60[0x16] = '\0';
      auStack_60[0x17] = '\0';
    }
    lVar9 = 0;
    while (lVar9 != 0x20) {
      func_0x006feacc();
      lVar9 = extraout_x8;
    }
    psVar14 = (segment_command *)((long)&MACH_HEADER.magic + 1);
    FUN_00706560();
    if (psVar14 == (segment_command *)0x0) {
      psVar14 = (segment_command *)&section_00000108.size;
      FUN_00701e90();
      if (psVar14 == (segment_command *)0x0) {
LAB_006e9580:
        psVar14 = asStack_190;
      }
      else {
        iVar5 = 1;
        FUN_007065dc(1,psVar14,FUN_006f16e0);
        if (iVar5 == 0) goto LAB_006e9580;
      }
      psVar14[4].segname[4] = '\0';
      psVar14[4].segname[5] = '\0';
      psVar14[4].segname[6] = '\0';
      psVar14[4].segname[7] = '\0';
      FUN_006f184c(&qStack_1c0);
      qStack_38 = qStack_1b8;
      auStack_60._32_8_ = qStack_1c0;
      dStack_28 = dStack_1a8;
      dStack_24 = dStack_1a4;
      qStack_30 = qStack_1b0;
      uStack_18 = uStack_198;
      qStack_20 = qStack_1a0;
      for (lVar9 = 0; lVar9 != 0x30; lVar9 = lVar9 + 1) {
        auStack_60[lVar9 + 0x20] = auStack_60[lVar9 + 0x20] ^ (&UNK_00836508)[lVar9];
      }
      psVar6 = (segment_command *)(auStack_60 + 0x20);
      param_2 = (segment_command *)&section_000000b8.reserved2;
      param_3 = psVar14;
      FUN_006e2b7c();
      func_0x006feaa0();
      psVar14[3].vmsize = extraout_x8_00;
      psVar14[3].fileoff = extraout_x9;
      qVar3 = qStack_20;
      uVar4 = uStack_18._4_4_;
      psVar14[3].maxprot = (undefined4)uStack_18;
      psVar14[3].initprot = uVar4;
      psVar14[3].filesize = qVar3;
      pcStack_1d0 = psVar14[4].segname;
LAB_006e9600:
      psVar14[4].segname[0] = '\0';
      psVar14[4].segname[1] = '\0';
      psVar14[4].segname[2] = '\0';
      psVar14[4].segname[3] = '\0';
      psVar14[3].nsects = 1;
      psVar14[3].flags = 0;
      psVar14[4].cmd = 0;
      psVar14[4].cmdsize = 0;
    }
    else {
      pcStack_1d0 = psVar14[4].segname;
      psVar6 = psVar14;
      if ((0xfff < *(uint *)psVar14[4].segname) ||
         (lVar9._0_4_ = psVar14[4].cmd, lVar9._4_4_ = psVar14[4].cmdsize, lVar9 != 0)) {
        FUN_006f184c(asStack_190);
        param_2 = asStack_190;
        param_3 = (segment_command *)(segment_command_00000020.segname + 8);
        func_0x006f1620();
        goto LAB_006e9600;
      }
    }
    bVar8 = false;
    for (; unaff_x22 != 0; unaff_x22 = unaff_x22 - uVar13) {
      uVar13 = unaff_x22;
      if (0xffff < unaff_x22) {
        uVar13 = 0x10000;
      }
      uVar15._0_4_ = psVar14[3].nsects;
      uVar15._4_4_ = psVar14[3].flags;
      if (0x1000000000000 < uVar15) {
        _abort();
        goto LAB_006e9770;
      }
      uVar15 = uVar13;
      psVar7 = param_1;
      if (!bVar8) {
        func_0x006fe2e4();
      }
      for (; 0xf < uVar15; uVar15 = uVar15 - uVar10) {
        uVar10 = uVar15 & 0x1ff0;
        if (0x1fff < uVar15) {
          uVar10 = 0x2000;
        }
        if (psVar14[3].fileoff == 0) {
          psVar12 = psVar7;
          for (uVar16 = 0; uVar16 < uVar10; uVar16 = uVar16 + 0x10) {
            func_0x006fdb94();
            psVar6 = (segment_command *)&psVar14[3].filesize;
            param_2 = psVar12;
            func_0x006fdddc(psVar14[3].vmsize);
            psVar12 = (segment_command *)((long)psVar12->segname + 8);
          }
        }
        else {
          param_2 = (segment_command *)0x0;
          psVar6 = psVar7;
          FUN_006e3cc4(psVar7,0,uVar10);
          func_0x006fdb94();
          func_0x006fe0fc(psVar14[3].fileoff);
          param_3 = (segment_command *)(uVar10 >> 4);
          unaff_x30 = psVar14;
          (*extraout_x8_01)();
          uVar1 = (psVar14[3].initprot & 0xff00ff00) >> 8 | (psVar14[3].initprot & 0xff00ff) << 8;
          uVar1 = ((int)(segment_command *)(uVar10 >> 4) + (uVar1 >> 0x10 | uVar1 << 0x10)) - 1;
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          psVar14[3].initprot = uVar1 >> 0x10 | uVar1 << 0x10;
        }
        psVar7 = (segment_command *)((long)psVar7->segname + (uVar10 - 8));
      }
      if (uVar15 != 0) {
        func_0x006fdb94();
        func_0x006fdddc(psVar14[3].vmsize,&psVar14[3].filesize,auStack_60 + 0x20);
        param_2 = (segment_command *)(auStack_60 + 0x20);
        func_0x006fde2c();
        psVar6 = psVar7;
      }
      func_0x006fe2e4();
      *(long *)&psVar14[3].nsects = *(long *)&psVar14[3].nsects + 1;
      param_1 = (segment_command *)((long)param_1->segname + (uVar13 - 8));
      *(int *)pcStack_1d0 = *(int *)pcStack_1d0 + 1;
      bVar8 = true;
    }
    in_ZR = psVar14 == asStack_190;
    if ((bool)in_ZR) {
      param_2 = (segment_command *)(section_00000108.segname + 8);
      _bzero();
      psVar6 = psVar14;
    }
  }
  func_0x006fd508();
  if ((bool)in_ZR) {
    return;
  }
LAB_006e9770:
  ___stack_chk_fail();
LAB_006e9774:
  func_0x006fe788();
  _abort();
  psVar14 = (segment_command *)((ulong)param_3 >> 6 & 0x3ffffff);
  if (psVar14 <= unaff_x30 && (long)unaff_x30 - (long)psVar14 != 0) {
    uVar1 = (uint)param_3 & 0x3f;
    if (((ulong)param_3 & 0x3f) == 0) {
      FUN_006e3434(psVar6,(qword *)((long)param_2->segname +
                                   (undefined1 *)((long)&psVar14[-1].flags + 3) * 8),
                   ((long)unaff_x30 - (long)psVar14) * 8);
    }
    else {
      psVar11 = (segment_command *)((long)&unaff_x30[-1].flags + 3);
      psVar12 = psVar6;
      pqVar2 = (qword *)((long)param_2->segname + (undefined1 *)((long)&psVar14[-1].flags + 3) * 8);
      for (psVar7 = psVar14; psVar7 < psVar11; psVar7 = (segment_command *)((long)&psVar7->cmd + 1))
      {
        uVar13 = pqVar2[1] << ((ulong)(0x40 - uVar1) & 0x3f) | *pqVar2 >> (ulong)uVar1;
        psVar12->cmd = (int)uVar13;
        psVar12->cmdsize = (int)(uVar13 >> 0x20);
        psVar12 = (segment_command *)psVar12->segname;
        pqVar2 = pqVar2 + 1;
      }
      *(qword *)((long)psVar6 + ((long)psVar11 - (long)psVar14) * 8) =
           *(qword *)((long)param_2->segname + (undefined1 *)((long)&unaff_x30[-1].flags + 2) * 8)
           >> (ulong)uVar1;
    }
    psVar6 = (segment_command *)((long)psVar6 + ((long)unaff_x30 - (long)psVar14) * 8);
    unaff_x30 = psVar14;
  }
  if (((ulong)unaff_x30 & 0x1fffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_0099a408)(psVar6,0);
    return;
  }
  return;
}



/* Entry: 006e977c; end: 006e983b;  */

void FUN_006e977c(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_3 >> 6 & 0x3ffffff;
  if (uVar6 <= param_4 && param_4 - uVar6 != 0) {
    uVar1 = (uint)param_3 & 0x3f;
    if ((param_3 & 0x3f) == 0) {
      FUN_006e3434(param_1,param_2 + uVar6 * 8,(param_4 - uVar6) * 8);
    }
    else {
      uVar3 = param_4 - 1;
      puVar4 = param_1;
      puVar2 = (ulong *)(param_2 + uVar6 * 8);
      for (uVar5 = uVar6; uVar5 < uVar3; uVar5 = uVar5 + 1) {
        *puVar4 = puVar2[1] << ((ulong)(0x40 - uVar1) & 0x3f) | *puVar2 >> (ulong)uVar1;
        puVar4 = puVar4 + 1;
        puVar2 = puVar2 + 1;
      }
      param_1[uVar3 - uVar6] = *(ulong *)(param_2 + uVar3 * 8) >> (ulong)uVar1;
    }
    param_1 = param_1 + (param_4 - uVar6);
    param_4 = uVar6;
  }
  if ((param_4 & 0x1fffffffffffffff) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memset_0099a408)(param_1,0);
  return;
}



/* Entry: 006e983c; end: 006e987b;  */

void FUN_006e983c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  
  if (param_3 != 0) {
    param_3 = param_3 + -1;
    puVar1 = param_2;
    puVar2 = param_1;
    for (lVar3 = param_3; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar2 = *puVar1 >> 1 | puVar1[1] << 0x3f;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1[param_3] = param_2[param_3] >> 1;
  }
  return;
}



/* Entry: 006e987c; end: 006e9937;  */

void FUN_006e987c(undefined8 *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  
  if (*(long *)(param_2 + 8) == 0) {
    func_0x006fd918();
    func_0x006fd5dc();
    *param_1 = 0;
  }
  else {
    if (param_4 == *param_2) {
      *param_1 = param_2;
      if (*(long *)(param_2 + 8) == 0) {
        puVar2 = param_1;
        func_0x006fe4d0(*(undefined8 *)(param_2 + 0x10));
        iVar1 = (int)puVar2;
        (*extraout_x8_00)();
      }
      else {
        puVar2 = param_1;
        func_0x006fe4d0();
        iVar1 = (int)puVar2;
        (*extraout_x8)();
      }
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      func_0x006fd918();
      func_0x006fd5dc();
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 006e9938; end: 006e9a0b;  */

undefined8
FUN_006e9938(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7,ulong param_8)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  ulong unaff_x21;
  long lStack_38;
  
  uVar3 = param_8;
  func_0x006fddc8();
  if ((CARRY8(uVar3,(ulong)*(byte *)(*param_1 + 2))) || (param_4 < param_8)) {
LAB_006e99e0:
    func_0x006fd918();
    func_0x006fd5dc();
  }
  else {
    param_4 = param_4 + unaff_x21;
    bVar1 = param_7 == unaff_x21;
    if ((((!bVar1 && param_7 <= param_4) && (bVar1 || param_4 != param_7)) &&
        unaff_x21 <= param_8 + param_7) &&
        ((bVar1 || param_4 <= param_7) || param_8 + param_7 != unaff_x21)) goto LAB_006e99e0;
    (**(code **)(*param_1 + 0x28))();
    if ((int)param_1 != 0) {
      lVar4 = lStack_38 + param_8;
      uVar2 = 1;
      goto LAB_006e99f4;
    }
  }
  func_0x006fda68();
  lVar4 = 0;
  uVar2 = 0;
LAB_006e99f4:
  *unaff_x19 = lVar4;
  return uVar2;
}



/* Entry: 006e9a0c; end: 006e9af3;  */

undefined8
FUN_006e9a0c(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,long param_5,
            undefined8 param_6,undefined8 param_7,ulong param_8,long param_9,undefined4 param_10,
            undefined4 param_11,long param_12)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  code *extraout_x9;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x006fdb48();
  uVar1 = param_9 + param_8;
  uVar2 = param_9 + param_2;
  bVar4 = param_8 == param_2;
  if (((((((!bVar4 && param_2 <= uVar1) && (bVar4 || uVar1 != param_2)) && param_8 <= uVar2) &&
         ((bVar4 || uVar1 <= param_2) || uVar2 != param_8)) ||
       (uVar3 = param_5 + unaff_x21,
       (uVar3 > unaff_x22 && unaff_x21 <= uVar2) && (uVar3 <= unaff_x22 || uVar2 != unaff_x21))) ||
      ((uVar3 > param_8 && unaff_x21 <= uVar1) && (uVar3 <= param_8 || uVar1 != unaff_x21))) ||
     ((param_12 != 0 && (*(int *)(*param_1 + 4) == 0)))) {
    func_0x006fd918();
    func_0x006fd5dc();
  }
  else {
    func_0x006fdc08();
    iVar5 = (int)param_1;
    (*extraout_x9)();
    if (iVar5 != 0) {
      return 1;
    }
  }
  FUN_006e3cc4();
  func_0x006fda68();
  *param_4 = 0;
  return 0;
}



/* Entry: 006e9af4; end: 006e9be3;  */

undefined8
FUN_006e9af4(long *param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7,ulong param_8)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *unaff_x19;
  ulong uVar3;
  
  uVar3 = param_4;
  func_0x006fddc8();
  uVar3 = uVar3 + param_2;
  bVar1 = param_7 == param_2;
  if ((((!bVar1 && param_7 <= uVar3) && (bVar1 || uVar3 != param_7)) && param_2 <= param_8 + param_7
      ) && ((bVar1 || uVar3 <= param_7) || param_8 + param_7 != param_2)) {
LAB_006e9b64:
    func_0x006fd918();
    func_0x006fd5dc();
  }
  else if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    uVar3 = param_8 - *(byte *)(param_1 + 0x4a);
    if ((param_8 < *(byte *)(param_1 + 0x4a)) || (param_4 < uVar3)) goto LAB_006e9b64;
    FUN_006e9be4();
    if ((int)param_1 != 0) {
      uVar2 = 1;
      goto LAB_006e9b78;
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))();
    if ((int)param_1 != 0) {
      return 1;
    }
  }
  func_0x006fda68();
  uVar3 = 0;
  uVar2 = 0;
LAB_006e9b78:
  *unaff_x19 = uVar3;
  return uVar2;
}



/* Entry: 006e9be4; end: 006e9d0f;  */

undefined8
FUN_006e9be4(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
            long param_6)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar1 = param_6 + param_5;
  bVar2 = param_5 == param_2;
  if ((((!bVar2 && param_2 <= uVar1) && (bVar2 || uVar1 != param_2)) && param_5 <= param_6 + param_2
      ) && ((bVar2 || uVar1 <= param_2) || param_6 + param_2 != param_5)) {
    uVar3 = 0x73;
  }
  else {
    if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1,param_2);
      if ((int)param_1 != 0) {
        return 1;
      }
      goto LAB_006e9c54;
    }
    uVar3 = 0x68;
  }
  func_0x006fd918(param_1,param_2,uVar3);
  func_0x006fd5dc();
LAB_006e9c54:
  FUN_006e3cc4(param_2,0,param_6);
  return 0;
}



/* Entry: 006e9d10; end: 006e9e9b;  */

void FUN_006e9d10(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 int param_6)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  uint uVar5;
  
  if (param_6 == -1) {
    uVar5 = *(uint *)((long)param_1 + 0x1c);
  }
  else {
    uVar5 = (uint)(param_6 != 0);
    *(uint *)((long)param_1 + 0x1c) = (uint)(param_6 != 0);
  }
  lVar4 = *param_1;
  if (param_2 == 0) {
    plVar3 = param_1;
    if (lVar4 == 0) {
      func_0x006fd918();
LAB_006e9e30:
      func_0x006fd5dc();
      return;
    }
  }
  else {
    if (lVar4 != 0) {
      func_0x006e9cd4(param_1);
      *(uint *)((long)param_1 + 0x1c) = uVar5;
    }
    *param_1 = param_2;
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x10);
    if (*(uint *)(param_2 + 0x10) == 0) {
      param_1[2] = 0;
      lVar4 = param_2;
    }
    else {
      FUN_00701e90();
      param_1[2] = (long)plVar3;
      if (plVar3 == (long *)0x0) {
        *param_1 = 0;
        func_0x006fd918();
        goto LAB_006e9e30;
      }
      lVar4 = *param_1;
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((*(byte *)(lVar4 + 0x15) >> 1 & 1) != 0) {
      plVar3 = param_1;
      FUN_006e9e9c(param_1,0,0,0);
      if ((int)plVar3 == 0) {
        *param_1 = 0;
        func_0x006fd918();
        goto LAB_006e9e30;
      }
      lVar4 = *param_1;
    }
  }
  iVar2 = (int)plVar3;
  if ((*(uint *)(lVar4 + 0x14) >> 8 & 1) == 0) {
    switch(*(uint *)(lVar4 + 0x14) & 0x3f) {
    case 0:
    case 1:
      goto LAB_006e9e64;
    case 3:
      *(undefined4 *)(param_1 + 0xd) = 0;
    case 2:
      if (param_5 != 0) {
        func_0x006fe8a8((long)param_1 + 0x24);
        lVar4 = *param_1;
      }
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
      param_5 = (long)param_1 + 0x24;
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (param_5 == 0) goto LAB_006e9e64;
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
      break;
    default:
      goto LAB_006fd578;
    }
    lVar4 = (long)param_1 + 0x34;
    func_0x006e3440(lVar4,param_5,uVar1);
    iVar2 = (int)lVar4;
  }
LAB_006e9e64:
  if ((param_4 != 0) || (*(char *)(*param_1 + 0x14) < '\0')) {
    func_0x006fd7d4(*(undefined8 *)(*param_1 + 0x20));
    (*extraout_x8)();
    if (iVar2 == 0) {
      return;
    }
  }
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
LAB_006fd578:
  return;
}



/* Entry: 006e9e9c; end: 006e9ee7;  */

void FUN_006e9e9c(long *param_1)

{
  code *pcVar1;
  
  if (((*param_1 == 0) || (pcVar1 = *(code **)(*param_1 + 0x38), pcVar1 == (code *)0x0)) ||
     ((*pcVar1)(), (int)param_1 == -1)) {
    func_0x006fd918();
    func_0x006fd5dc();
  }
  return;
}



/* Entry: 006e9ee8; end: 006e9ef7;  */

/* WARNING: Removing unreachable block (ram,0x006e9d4c) */

void FUN_006e9ee8(long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  lVar4 = *param_1;
  if (param_2 == 0) {
    plVar3 = param_1;
    if (lVar4 == 0) {
      func_0x006fd918();
LAB_006e9e30:
      func_0x006fd5dc();
      return;
    }
  }
  else {
    if (lVar4 != 0) {
      func_0x006e9cd4(param_1);
      *(undefined4 *)((long)param_1 + 0x1c) = 1;
    }
    *param_1 = param_2;
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x10);
    if (*(uint *)(param_2 + 0x10) == 0) {
      param_1[2] = 0;
      lVar4 = param_2;
    }
    else {
      FUN_00701e90();
      param_1[2] = (long)plVar3;
      if (plVar3 == (long *)0x0) {
        *param_1 = 0;
        func_0x006fd918();
        goto LAB_006e9e30;
      }
      lVar4 = *param_1;
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((*(byte *)(lVar4 + 0x15) >> 1 & 1) != 0) {
      plVar3 = param_1;
      FUN_006e9e9c(param_1,0,0,0);
      if ((int)plVar3 == 0) {
        *param_1 = 0;
        func_0x006fd918();
        goto LAB_006e9e30;
      }
      lVar4 = *param_1;
    }
  }
  iVar2 = (int)plVar3;
  if ((*(uint *)(lVar4 + 0x14) >> 8 & 1) == 0) {
    switch(*(uint *)(lVar4 + 0x14) & 0x3f) {
    case 0:
    case 1:
      goto LAB_006e9e64;
    case 3:
      *(undefined4 *)(param_1 + 0xd) = 0;
    case 2:
      if (param_5 != 0) {
        func_0x006fe8a8((long)param_1 + 0x24);
        lVar4 = *param_1;
      }
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
      param_5 = (long)param_1 + 0x24;
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (param_5 == 0) goto LAB_006e9e64;
      uVar1 = *(undefined4 *)(lVar4 + 0xc);
      break;
    default:
      goto LAB_006fd578;
    }
    lVar4 = (long)param_1 + 0x34;
    func_0x006e3440(lVar4,param_5,uVar1);
    iVar2 = (int)lVar4;
  }
LAB_006e9e64:
  if ((param_4 != 0) || (*(char *)(*param_1 + 0x14) < '\0')) {
    func_0x006fd7d4(*(undefined8 *)(*param_1 + 0x20));
    (*extraout_x8)();
    if (iVar2 == 0) {
      return;
    }
  }
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
LAB_006fd578:
  return;
}



/* Entry: 006e9ef8; end: 006ea097;  */

void FUN_006e9ef8(long *param_1,undefined8 param_2,uint *param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  uint uVar5;
  
  func_0x006fdcd0();
  lVar4 = *param_1;
  uVar5 = *(uint *)(lVar4 + 4);
  if (((int)uVar5 >= 2 && param_5 != (uVar5 ^ 0x7fffffff)) &&
      ((int)uVar5 < 2 || (int)(uVar5 ^ 0x7fffffff) <= (int)param_5)) {
    func_0x006fd918();
    func_0x006fd5dc();
  }
  else if ((*(byte *)(lVar4 + 0x15) >> 2 & 1) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
    }
    else {
      iVar2 = *(int *)((long)param_1 + 100);
      plVar3 = param_1;
      if (iVar2 == 0) {
        if ((uVar5 + 0x7fffffff & param_5) == 0) {
          func_0x006fdbf0(*(undefined8 *)(lVar4 + 0x28));
          iVar2 = (int)param_1;
          (*extraout_x8_02)();
          if (iVar2 != 0) {
            *param_3 = param_5;
            return;
          }
          *param_3 = 0;
          return;
        }
        uVar5 = 0;
      }
      else {
        iVar1 = uVar5 - iVar2;
        if ((int)param_5 < iVar1) {
          func_0x006fe420((long)param_1 + (long)iVar2 + 0x44);
          *(uint *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + param_5;
          *param_3 = 0;
          return;
        }
        func_0x006fe3b8((long)param_1 + (long)iVar2 + 0x44,param_4);
        func_0x006fe0c0(*(undefined8 *)(*param_1 + 0x28),param_1,param_2);
        (*extraout_x8_00)();
        if ((int)plVar3 == 0) {
          return;
        }
        param_4 = param_4 + iVar1;
        lVar4 = *param_1;
        param_5 = param_5 - iVar1;
      }
      iVar1 = (int)plVar3;
      *param_3 = uVar5;
      uVar5 = *(int *)(lVar4 + 4) - 1U & param_5;
      iVar2 = param_5 - uVar5;
      if (0 < iVar2) {
        func_0x006fdbf0(*(undefined8 *)(lVar4 + 0x28));
        (*extraout_x8_01)();
        if (iVar1 == 0) {
          return;
        }
        *param_3 = *param_3 + iVar2;
      }
      if (uVar5 != 0) {
        func_0x006e3440((long)param_1 + 0x44,param_4 + iVar2,(long)(int)uVar5);
      }
      *(uint *)((long)param_1 + 100) = uVar5;
    }
  }
  else {
    func_0x006fdbf0(*(undefined8 *)(lVar4 + 0x28));
    uVar5 = (uint)param_1;
    (*extraout_x8)();
    if (-1 < (int)uVar5) {
      *param_3 = uVar5;
    }
  }
  return;
}



/* Entry: 006ea098; end: 006ea13b;  */

void FUN_006ea098(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 0x15) >> 2 & 1) != 0) {
    func_0x006fe21c();
    if ((int)(uint)param_1 < 0) {
      return;
    }
    *param_3 = (uint)param_1;
    return;
  }
  uVar1 = *(uint *)(lVar3 + 4);
  if (uVar1 != 1) {
    uVar2 = *(uint *)((long)param_1 + 100);
    uVar4 = (ulong)uVar2;
    if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) == 0) {
      for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        *(char *)((long)param_1 + uVar4 + 0x44) = (char)uVar1 - (char)uVar2;
      }
      (**(code **)(lVar3 + 0x28))(param_1,param_2,(long)param_1 + 0x44,(ulong)uVar1);
      if ((int)param_1 == 0) {
        return;
      }
      *param_3 = uVar1;
      return;
    }
    if (uVar2 != 0) {
      func_0x006fd918();
      func_0x006fd5dc();
      return;
    }
  }
  *param_3 = 0;
  return;
}



/* Entry: 006ea13c; end: 006ea28b;  */

void FUN_006ea13c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  uint *unaff_x19;
  long *unaff_x21;
  uint uVar5;
  
  func_0x006fe858();
  uVar5 = *(uint *)(*param_1 + 4);
  if ((uVar5 >= 2 && param_5 != (uVar5 ^ 0x7fffffff)) &&
      (uVar5 < 2 || (int)(uVar5 ^ 0x7fffffff) <= (int)param_5)) {
    func_0x006fd918();
    func_0x006fd5dc();
  }
  else {
    func_0x006fddc8();
    if ((*(byte *)(extraout_x8_03 + 0x15) >> 2 & 1) == 0) {
      if ((int)param_5 < 1) {
        *unaff_x19 = 0;
      }
      else {
        if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) != 0) {
          func_0x006fdc14();
          func_0x006fdcd0();
          lVar4 = *param_1;
          uVar5 = *(uint *)(lVar4 + 4);
          if (((int)uVar5 >= 2 && param_5 != (uVar5 ^ 0x7fffffff)) &&
              ((int)uVar5 < 2 || (int)(uVar5 ^ 0x7fffffff) <= (int)param_5)) {
            func_0x006fd918();
            func_0x006fd5dc();
          }
          else if ((*(byte *)(lVar4 + 0x15) >> 2 & 1) == 0) {
            if ((int)param_5 < 1) {
              *unaff_x19 = 0;
            }
            else {
              iVar2 = *(int *)((long)param_1 + 100);
              plVar3 = param_1;
              if (iVar2 == 0) {
                if ((uVar5 + 0x7fffffff & param_5) == 0) {
                  func_0x006fdbf0(*(undefined8 *)(lVar4 + 0x28));
                  iVar2 = (int)param_1;
                  (*extraout_x8_02)();
                  if (iVar2 != 0) {
                    *unaff_x19 = param_5;
                    return;
                  }
                  *unaff_x19 = 0;
                  return;
                }
                uVar5 = 0;
              }
              else {
                iVar1 = uVar5 - iVar2;
                if ((int)param_5 < iVar1) {
                  func_0x006fe420((long)param_1 + (long)iVar2 + 0x44);
                  *(uint *)((long)param_1 + 100) = *(int *)((long)param_1 + 100) + param_5;
                  *unaff_x19 = 0;
                  return;
                }
                func_0x006fe3b8((long)param_1 + (long)iVar2 + 0x44,param_4);
                func_0x006fe0c0(*(undefined8 *)(*param_1 + 0x28),param_1,param_2);
                (*extraout_x8_00)();
                if ((int)plVar3 == 0) {
                  return;
                }
                param_4 = param_4 + iVar1;
                lVar4 = *param_1;
                param_5 = param_5 - iVar1;
              }
              iVar1 = (int)plVar3;
              *unaff_x19 = uVar5;
              uVar5 = *(int *)(lVar4 + 4) - 1U & param_5;
              iVar2 = param_5 - uVar5;
              if (0 < iVar2) {
                func_0x006fdbf0(*(undefined8 *)(lVar4 + 0x28));
                (*extraout_x8_01)();
                if (iVar1 == 0) {
                  return;
                }
                *unaff_x19 = *unaff_x19 + iVar2;
              }
              if (uVar5 != 0) {
                func_0x006e3440((long)param_1 + 0x44,param_4 + iVar2,(long)(int)uVar5);
              }
              *(uint *)((long)param_1 + 100) = uVar5;
            }
          }
          else {
            func_0x006fdbf0(*(undefined8 *)(lVar4 + 0x28));
            uVar5 = (uint)param_1;
            (*extraout_x8)();
            if (-1 < (int)uVar5) {
              *unaff_x19 = uVar5;
            }
          }
          return;
        }
        iVar2 = *(int *)((long)param_1 + 0x6c);
        plVar3 = param_1;
        if (iVar2 != 0) {
          plVar3 = unaff_x21;
          func_0x006fdde4();
          unaff_x21 = (long *)((long)unaff_x21 + (ulong)uVar5);
        }
        iVar1 = (int)plVar3;
        func_0x006fdc14();
        FUN_006e9ef8();
        if (iVar1 != 0) {
          if ((uVar5 < 2) || (*(int *)((long)param_1 + 100) != 0)) {
            *(undefined4 *)((long)param_1 + 0x6c) = 0;
          }
          else {
            *unaff_x19 = *unaff_x19 - uVar5;
            *(undefined4 *)((long)param_1 + 0x6c) = 1;
            func_0x006fdde4(param_1 + 0xe,(long)unaff_x21 + (long)(int)*unaff_x19);
          }
          if (iVar2 != 0) {
            *unaff_x19 = *unaff_x19 + uVar5;
          }
        }
      }
    }
    else {
      func_0x006fdc14(*(undefined8 *)(extraout_x8_03 + 0x28));
      uVar5 = (uint)param_1;
      (*extraout_x8_04)();
      *unaff_x19 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    }
  }
  return;
}



/* Entry: 006ea28c; end: 006ea43b;  */

undefined8 FUN_006ea28c(long *param_1,undefined1 *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  *param_3 = 0;
  if ((*(byte *)(*param_1 + 0x15) >> 2 & 1) == 0) {
    if ((*(byte *)((long)param_1 + 0x21) >> 3 & 1) == 0) {
      uVar2 = *(uint *)(*param_1 + 4);
      if (uVar2 < 2) {
        uVar2 = 0;
LAB_006ea338:
        *param_3 = uVar2;
        return 1;
      }
      if ((*(int *)((long)param_1 + 100) == 0) && (*(int *)((long)param_1 + 0x6c) != 0)) {
        param_1 = param_1 + 0xe;
        uVar5 = uVar2 - 1;
        bVar1 = *(byte *)((long)param_1 + (ulong)uVar5);
        uVar3 = (uint)bVar1;
        if (bVar1 != 0 && (int)(uint)bVar1 <= (int)uVar2) {
          do {
            if (uVar3 == 0) {
              uVar2 = uVar2 - bVar1;
              for (uVar4 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar4 != 0;
                  uVar4 = uVar4 - 1) {
                *param_2 = (char)*param_1;
                param_1 = (long *)((long)param_1 + 1);
                param_2 = param_2 + 1;
              }
              goto LAB_006ea338;
            }
            uVar4 = (ulong)uVar5;
            uVar3 = uVar3 - 1;
            uVar5 = uVar5 - 1;
          } while ((uint)*(byte *)((long)param_1 + uVar4) == (uint)bVar1);
        }
        func_0x006fd918();
      }
      else {
        func_0x006fd918();
      }
    }
    else {
      if (*(int *)((long)param_1 + 100) == 0) {
        return 1;
      }
      func_0x006fd918();
    }
    func_0x006fd5dc();
  }
  else {
    func_0x006fe21c();
    if (-1 < (int)(uint)param_1) {
      *param_3 = (uint)param_1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 006ea43c; end: 006ea4eb;  */

undefined8 FUN_006ea43c(void)

{
  func_0x00706544(0xb299e8,FUN_006f85f8);
  return 0xb6c8c0;
}



/* Entry: 006ea4ec; end: 006ea533;  */

void FUN_006ea4ec(void)

{
  undefined4 *extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x30;
  
  func_0x006fec84(0xb6ca00);
  *extraout_x8 = 0x10100c10;
  extraout_x8[1] = 1;
  func_0x006fec98(unaff_x30);
  *(code **)(extraout_x8_00 + 0x28) = FUN_006f8e54;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0x6f8fc4;
  return;
}



/* Entry: 006ea534; end: 006ea55f;  */

undefined8 FUN_006ea534(void)

{
  func_0x00706544(0xb29a48,FUN_006ea560);
  return 0xb6ca48;
}



/* Entry: 006ea560; end: 006ea5a7;  */

void FUN_006ea560(void)

{
  undefined4 *extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x30;
  
  func_0x006fec84(0xb6ca48);
  *extraout_x8 = 0x10100c20;
  extraout_x8[1] = 1;
  func_0x006fec98(unaff_x30);
  *(code **)(extraout_x8_00 + 0x28) = FUN_006f8e54;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0x6f8fc4;
  return;
}



/* Entry: 006ea5a8; end: 006ea5d3;  */

undefined8 FUN_006ea5a8(void)

{
  func_0x00706544(0xb29a58,FUN_006ea5d4);
  return 0xb6ca90;
}



/* Entry: 006ea5d4; end: 006ea61b;  */

void FUN_006ea5d4(void)

{
  undefined4 *extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x30;
  
  func_0x006fec84(0xb6ca90);
  *extraout_x8 = 0x10100c10;
  extraout_x8[1] = 1;
  func_0x006fec98(unaff_x30);
  *(code **)(extraout_x8_00 + 0x28) = FUN_006f9198;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0x6f8fc4;
  return;
}


