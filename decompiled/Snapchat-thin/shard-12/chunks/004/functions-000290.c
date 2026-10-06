/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090d86b8; end: 1090d86f7;  */

void FUN_1090d86b8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x78) {
    func_0x0001090d8e50(lVar2 + -0x38);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1090d86f8; end: 1090d87d3;  */

void FUN_1090d86f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 *puStack_38;
  
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    puVar1 = (undefined8 *)0x78;
    __Znwm();
    puVar1[1] = 1;
    *puVar1 = &PTR_FUN_110ad9b40;
    puVar1[2] = param_2 + 0x28;
    puVar1[3] = 0;
    puVar1[4] = uVar2;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    *(undefined8 *)((long)puVar1 + 0x4c) = 0;
    *(undefined8 *)((long)puVar1 + 0x44) = 0;
    puVar1[0xe] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *(undefined4 *)(puVar1 + 0xd) = 0;
    puStack_38 = puVar1;
    do {
      func_0x0001090d9f40();
    } while (extraout_w10 != 0);
    *param_1 = puVar1;
    FUN_1090d99e4(&puStack_38);
  }
  else {
    puVar1 = (undefined8 *)0x1a0;
    __Znwm();
    FUN_1090dafc4();
    puStack_38 = puVar1;
    do {
      func_0x0001090d9f40();
    } while (extraout_w10_00 != 0);
    *param_1 = puVar1;
    func_0x0001090d9a20(&puStack_38);
  }
  return;
}



/* Entry: 1090d87d4; end: 1090d884b;  */

void FUN_1090d87d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 *puStack_38;
  
  lVar1 = param_2 + 0x70;
  if (*(char *)(param_2 + 0xa8) == '\0') {
    lVar1 = 0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  puVar2[1] = 1;
  *puVar2 = &PTR_FUN_110ad9a68;
  puVar2[2] = lVar1;
  puVar2[3] = uVar3;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puStack_38 = puVar2;
  do {
    func_0x0001090d9f40();
  } while (extraout_w10 != 0);
  *param_1 = puVar2;
  func_0x0001090d9ba4(&puStack_38);
  return;
}



/* Entry: 1090d884c; end: 1090d886b;  */

undefined4 FUN_1090d884c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong unaff_x21;
  ulong uVar18;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  uint uVar19;
  long lVar20;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  undefined8 auStack_70 [4];
  ulong uStack_50;
  long lStack_48;
  
  lVar14 = *(long *)(param_2 + 8);
  uVar18 = *(ulong *)(param_2 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar14 != 0) {
    if (*(int *)(param_2 + 0xac) == 0) {
      uVar13 = 0;
      if ((uVar18 < 0x17) || (*(int *)(param_2 + 0xb0) == 0)) goto LAB_1090dbdd0;
      uVar17 = 0;
      uVar15 = 0x17;
      while ((uVar17 != *(byte *)(lVar14 + 0x16) && (uVar10 = uVar15 + 3, uVar10 <= uVar18))) {
        uVar3 = *(ushort *)((byte *)(lVar14 + uVar15) + 1);
        iVar5 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) + 1;
        while (iVar5 = iVar5 + -1, iVar5 != 0) {
          uVar1 = uVar10 + 2;
          if (uVar18 < uVar1) goto LAB_1090dbdcc;
          uVar11 = (uint)(*(ushort *)(lVar14 + uVar10) >> 8) |
                   (*(ushort *)(lVar14 + uVar10) & 0xff00ff) << 8;
          uVar10 = uVar1 + uVar11;
          if (uVar18 < uVar10) goto LAB_1090dbdcc;
          if ((*(byte *)(lVar14 + uVar15) & 0x3f) == 0x21 && 2 < uVar11) {
            FUN_1090dc5e0(&iStack_98,lVar14 + uVar1 + 2,uVar11 - 2);
            func_0x0001090dc9f8(CONCAT44(uStack_94,iStack_98));
            uStack_c0 = (ulong)uStack_c0._4_4_ << 0x20;
            puVar6 = auStack_b8;
            FUN_1090dc6ac(puVar6,4,(long)&uStack_c0 + 4);
            uVar13 = 0;
            if ((int)puVar6 == 0) goto LAB_1090dc538;
            uStack_c4 = 0;
            puVar6 = auStack_b8;
            FUN_1090dc6ac(puVar6,3,&uStack_c4);
            uVar18 = unaff_x21;
            if (((int)puVar6 == 0) || (func_0x0001090dc918(), uVar17 = uStack_c4, (int)puVar6 == 0))
            goto LAB_1090dc534;
            lVar14 = (long)(int)uStack_c4;
            func_0x0001090dc998();
            func_0x0001090dc9d8();
            if ((int)puVar6 == 0) goto LAB_1090dc534;
            func_0x0001090dc998();
            func_0x0001090dc964();
            if ((int)puVar6 == 0) goto LAB_1090dc534;
            func_0x0001090dc998();
            FUN_1090dc6ac();
            if ((((int)puVar6 == 0) || (func_0x0001090dc944(), (int)puVar6 == 0)) ||
               (func_0x0001090dc944(), (int)puVar6 == 0)) goto LAB_1090dc534;
            func_0x0001090dc998();
            func_0x0001090dc9b0();
            if (((int)puVar6 == 0) || (func_0x0001090dc934(), (int)puVar6 == 0)) goto LAB_1090dc534;
            uVar18 = 0;
            unaff_x22 = (ulong)uVar17;
            auStack_70[0] = 0;
            uStack_50 = 0;
            unaff_x23 = auStack_70;
            unaff_x21 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU));
            goto LAB_1090dc114;
          }
        }
        uVar17 = uVar17 + 1;
        uVar15 = uVar10;
      }
    }
    else if (6 < uVar18) {
      uVar13 = 0;
      if ((uVar18 == 7) || ((*(byte *)(lVar14 + 5) & 0x1f) == 0)) goto LAB_1090dbdd0;
      uVar13 = 0;
      uVar17 = (uint)(*(ushort *)(lVar14 + 6) >> 8) | (*(ushort *)(lVar14 + 6) & 0xff00ff) << 8;
      if ((uVar17 == 0) || (uVar18 < (ulong)uVar17 + 8)) goto LAB_1090dbdd0;
      if ((*(byte *)(lVar14 + 8) & 0x1f) != 7) goto LAB_1090dbdcc;
      FUN_1090dc5e0(auStack_70,lVar14 + 9,uVar17 - 1);
      func_0x0001090dc9f8(auStack_70[0]);
      uStack_7c = 0;
      uStack_c0 = 0;
      puVar6 = auStack_b8;
      FUN_1090dc6ac(puVar6,8,&uStack_c0);
      if ((int)puVar6 != 0) {
        puVar6 = auStack_b8;
        FUN_1090dc6ac(puVar6,6,&uStack_7c);
        if ((int)puVar6 != 0) {
          iVar5 = (int)auStack_b8;
          func_0x0001090dc9d8();
          if (iVar5 != 0) {
            puVar6 = auStack_b8;
            FUN_1090dc6ac(puVar6,8,&uStack_7c);
            iVar5 = (int)puVar6;
            if ((iVar5 != 0) && (func_0x0001090dc90c(), iVar5 != 0)) {
              uStack_c4 = 1;
              if ((((int)uStack_c0 - 0x53U < 0x39) &&
                  ((1L << ((ulong)((int)uStack_c0 - 0x53U) & 0x3f) & 0x198208808020009U) != 0)) ||
                 (((int)uStack_c0 == 0xf4 || ((int)uStack_c0 == 0x2c)))) {
                puVar6 = auStack_b8;
                func_0x0001090dc70c(puVar6,&uStack_c4);
                uVar17 = uStack_c4;
                if (((int)puVar6 != 0) &&
                   ((((uStack_c4 != 3 || (func_0x0001090dc8d0(), (int)puVar6 != 0)) &&
                     (func_0x0001090dc90c(), (int)puVar6 != 0)) &&
                    ((func_0x0001090dc90c(), (int)puVar6 != 0 &&
                     (func_0x0001090dc8d0(), (int)puVar6 != 0)))))) {
                  func_0x0001090dc918();
                  iVar5 = (int)puVar6;
                  if (iVar5 != 0) {
                    if (uStack_c0._4_4_ != 0) {
                      uVar11 = 0;
                      uVar8 = 0xc;
                      if (uVar17 != 3) {
                        uVar8 = 8;
                      }
                      unaff_x21 = 0x40;
                      unaff_x22 = 0x10;
                      for (; iVar5 = (int)puVar6, uVar11 != uVar8; uVar11 = uVar11 + 1) {
                        func_0x0001090dc918();
                        if ((int)puVar6 == 0) goto LAB_1090dc438;
                        if (uStack_c0._4_4_ != 0) {
                          uVar17 = 0x10;
                          if (5 < uVar11) {
                            uVar17 = 0x40;
                          }
                          uVar19 = 8;
                          uVar9 = 8;
                          for (; unaff_x23 = (undefined8 *)(ulong)uVar17, uVar17 != 0;
                              uVar17 = uVar17 - 1) {
                            bVar2 = uVar9 != 0;
                            uVar9 = 0;
                            if (bVar2) {
                              iStack_98 = 0;
                              func_0x0001090dc97c();
                              if (((int)puVar6 == 0) || (iStack_98 != (char)iStack_98))
                              goto LAB_1090dc438;
                              uVar9 = iStack_98 + uVar19 & 0xff;
                              if (uVar9 != 0) {
                                uVar19 = uVar9;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1090dc15c;
                  }
                }
              }
              else {
LAB_1090dc15c:
                func_0x0001090dc90c();
                if (iVar5 != 0) {
                  iStack_c8 = 0;
                  puVar6 = auStack_b8;
                  func_0x0001090dc70c(puVar6,&iStack_c8);
                  iVar5 = (int)puVar6;
                  if (iVar5 != 0) {
                    if (iStack_c8 == 1) {
                      func_0x0001090dc8d0();
                      if ((((int)puVar6 != 0) && (func_0x0001090dc97c(), (int)puVar6 != 0)) &&
                         (func_0x0001090dc97c(), (int)puVar6 != 0)) {
                        uStack_50 = uStack_50 & 0xffffffff00000000;
                        func_0x0001090dc928();
                        if ((int)puVar6 != 0) {
                          iVar12 = (int)uStack_50 + 1;
                          do {
                            iVar5 = (int)puVar6;
                            iVar12 = iVar12 + -1;
                            if (iVar12 == 0) goto LAB_1090dc190;
                            func_0x0001090dc97c();
                          } while (((ulong)puVar6 & 1) != 0);
                        }
                      }
                    }
                    else {
                      if (iStack_c8 == 0) {
                        func_0x0001090dc90c();
                        iVar5 = (int)puVar6;
                        if (((ulong)puVar6 & 1) == 0) goto LAB_1090dc438;
                      }
LAB_1090dc190:
                      func_0x0001090dc90c();
                      if (((iVar5 != 0) && (func_0x0001090dc8d0(), iVar5 != 0)) &&
                         ((func_0x0001090dc90c(), iVar5 != 0 && (func_0x0001090dc90c(), iVar5 != 0))
                         )) {
                        iStack_cc = 0;
                        iVar5 = (int)auStack_b8;
                        func_0x0001090dc964();
                        if ((((iVar5 != 0) &&
                             ((iStack_cc != 0 || (func_0x0001090dc8d0(), iVar5 != 0)))) &&
                            ((func_0x0001090dc8d0(), iVar5 != 0 &&
                             (func_0x0001090dc918(), iVar5 != 0)))) &&
                           ((uStack_c0._4_4_ == 0 ||
                            ((((func_0x0001090dc90c(), iVar5 != 0 &&
                               (func_0x0001090dc90c(), iVar5 != 0)) &&
                              (func_0x0001090dc90c(), iVar5 != 0)) &&
                             (func_0x0001090dc90c(), iVar5 != 0)))))) {
                          func_0x0001090dc918();
                          uVar13 = 0;
                          if ((iVar5 == 0) || (uStack_c0._4_4_ == 0)) goto LAB_1090dc43c;
                          uStack_d0 = 0;
                          iStack_98 = 0;
                          func_0x0001090dc8e0();
                          if (iVar5 != 0) {
                            if (iStack_98 == 0) {
LAB_1090dc268:
                              func_0x0001090dc8e0();
                              if (((iVar5 != 0) &&
                                  ((iStack_98 == 0 || (func_0x0001090dc8f0(), iVar5 != 0)))) &&
                                 (func_0x0001090dc8e0(), iVar5 != 0)) {
                                if (iStack_98 != 0) {
                                  func_0x0001090dc9a4();
                                  FUN_1090dc6ac();
                                  if ((((iVar5 == 0) || (func_0x0001090dc8f0(), iVar5 == 0)) ||
                                      (func_0x0001090dc8e0(), iVar5 == 0)) ||
                                     ((iStack_98 != 0 &&
                                      (((func_0x0001090dc96c(), iVar5 == 0 ||
                                        (func_0x0001090dc96c(), iVar5 == 0)) ||
                                       (func_0x0001090dc96c(), iVar5 == 0)))))) goto LAB_1090dc438;
                                }
                                func_0x0001090dc8e0();
                                if ((iVar5 != 0) &&
                                   (((iStack_98 == 0 ||
                                     ((func_0x0001090dc928(), iVar5 != 0 &&
                                      (func_0x0001090dc928(), iVar5 != 0)))) &&
                                    (func_0x0001090dc8e0(), iVar5 != 0)))) {
                                  if (iStack_98 == 0) {
LAB_1090dc328:
                                    uStack_74 = 0;
                                    func_0x0001090dc998();
                                    func_0x0001090dc964();
                                    uVar17 = uStack_74;
                                    if (iVar5 != 0) {
                                      if (uStack_74 != 0) {
                                        iVar5 = (int)auStack_b8;
                                        FUN_1090dc840();
                                        if (iVar5 == 0) goto LAB_1090dc438;
                                      }
                                      iStack_78 = 0;
                                      iVar5 = (int)auStack_b8;
                                      func_0x0001090dc964();
                                      if (iVar5 != 0) {
                                        if (iStack_78 == 0) {
                                          if (uVar17 != 0) goto LAB_1090dc57c;
LAB_1090dc584:
                                          func_0x0001090dc8f0();
                                          if (((((iVar5 != 0) && (func_0x0001090dc8e0(), iVar5 != 0)
                                                ) && (iStack_98 != 0)) &&
                                              ((func_0x0001090dc8f0(), iVar5 != 0 &&
                                               (func_0x0001090dc928(), iVar5 != 0)))) &&
                                             ((func_0x0001090dc928(), iVar5 != 0 &&
                                              ((func_0x0001090dc928(), iVar5 != 0 &&
                                               (func_0x0001090dc928(), iVar5 != 0)))))) {
                                            puVar6 = auStack_b8;
                                            func_0x0001090dc70c(puVar6,&uStack_d0);
                                            uVar13 = uStack_d0;
                                            if ((int)puVar6 != 0) goto LAB_1090dc43c;
                                          }
                                        }
                                        else {
                                          puVar6 = auStack_b8;
                                          FUN_1090dc840();
                                          iVar5 = (int)puVar6;
                                          if (((ulong)puVar6 & 1) != 0) {
LAB_1090dc57c:
                                            func_0x0001090dc8f0();
                                            if (iVar5 != 0) goto LAB_1090dc584;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    func_0x0001090dc9a4();
                                    FUN_1090dc6ac();
                                    if (iVar5 != 0) {
                                      func_0x0001090dc9a4();
                                      FUN_1090dc6ac();
                                      if ((iVar5 != 0) && (func_0x0001090dc8f0(), iVar5 != 0))
                                      goto LAB_1090dc328;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              uStack_74 = 0;
                              func_0x0001090dc934();
                              if (iVar5 != 0) {
                                if (uStack_74 != 0xff) goto LAB_1090dc268;
                                func_0x0001090dc9a4();
                                func_0x0001090dc9b0();
                                if (iVar5 != 0) {
                                  func_0x0001090dc9a4();
                                  func_0x0001090dc9b0();
                                  if (iVar5 != 0) goto LAB_1090dc268;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_1090dc438:
      uVar13 = 0;
LAB_1090dc43c:
      piVar7 = (int *)auStack_70;
      goto LAB_1090dc53c;
    }
  }
LAB_1090dbdcc:
  uVar13 = 0;
LAB_1090dbdd0:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
LAB_1090dc548:
    if ((int)unaff_x23 == 0) {
      puVar4 = auStack_70;
      for (; unaff_x21 != 0; unaff_x21 = unaff_x21 - 1) {
        *(undefined4 *)puVar4 = *(undefined4 *)((long)auStack_70 + unaff_x22 * 4);
        puVar4 = (undefined8 *)((long)puVar4 + 4);
      }
    }
    uVar13 = *(undefined4 *)((long)auStack_70 + unaff_x22 * 4);
LAB_1090dc538:
    piVar7 = &iStack_98;
LAB_1090dc53c:
    func_0x000107c27914(piVar7);
  }
  return uVar13;
LAB_1090dc114:
  if (unaff_x21 == uVar18) goto LAB_1090dc378;
  uStack_7c = 0;
  iStack_78 = 0;
  puVar6 = auStack_b8;
  func_0x0001090dc964();
  if (((int)puVar6 == 0) || (func_0x0001090dc8d0(), (int)puVar6 == 0)) goto LAB_1090dc534;
  *(char *)((long)unaff_x23 + uVar18) = (char)iStack_78;
  *(char *)((long)&uStack_50 + uVar18) = (char)uStack_7c;
  uVar18 = uVar18 + 1;
  goto LAB_1090dc114;
LAB_1090dc378:
  uVar18 = unaff_x21;
  if ((int)uVar17 < 1) {
LAB_1090dc3a4:
    unaff_x23 = auStack_70;
    for (uVar15 = 0; iVar5 = (int)puVar6, unaff_x21 != uVar15; uVar15 = uVar15 + 1) {
      if (*(char *)((long)unaff_x23 + uVar15) != '\0') {
        func_0x0001090dc934();
        if ((((int)puVar6 == 0) || (func_0x0001090dc944(), (int)puVar6 == 0)) ||
           (func_0x0001090dc944(), (int)puVar6 == 0)) goto LAB_1090dc534;
        func_0x0001090dc998();
        func_0x0001090dc9b0();
        if ((int)puVar6 == 0) goto LAB_1090dc534;
      }
      if ((*(char *)((long)&uStack_50 + uVar15) != '\0') &&
         (func_0x0001090dc934(), (int)puVar6 == 0)) goto LAB_1090dc534;
    }
    func_0x0001090dc900();
    if (iVar5 != 0) {
      uStack_50 = uStack_50 & 0xffffffff00000000;
      func_0x0001090dc928();
      if ((iVar5 != 0) &&
         (((((int)uStack_50 != 3 || (func_0x0001090dc918(), iVar5 != 0)) &&
           (func_0x0001090dc900(), iVar5 != 0)) && (func_0x0001090dc900(), iVar5 != 0)))) {
        puVar6 = auStack_b8;
        func_0x0001090dc964();
        if ((((int)puVar6 != 0) &&
            (((int)uStack_c0 == 0 ||
             (((func_0x0001090dc900(), (int)puVar6 != 0 && (func_0x0001090dc900(), (int)puVar6 != 0)
               ) && ((func_0x0001090dc900(), (int)puVar6 != 0 &&
                     (func_0x0001090dc900(), (int)puVar6 != 0)))))))) &&
           (((func_0x0001090dc900(), (int)puVar6 != 0 && (func_0x0001090dc900(), (int)puVar6 != 0))
            && (func_0x0001090dc900(), (int)puVar6 != 0)))) {
          uStack_74 = 0;
          func_0x0001090dc998();
          func_0x0001090dc964();
          uVar13 = 0;
          if ((int)puVar6 == 0) goto LAB_1090dc538;
          auStack_70[1] = 0;
          auStack_70[0] = 0;
          auStack_70[3] = 0;
          auStack_70[2] = 0;
          unaff_x23 = (undefined8 *)(ulong)uStack_74;
          if (uStack_74 != 0) {
            uVar17 = 0;
          }
          lVar16 = (long)auStack_70 + (long)(int)uVar17 * 4;
          lVar20 = (long)(int)uVar17 + -1;
          do {
            iVar5 = (int)puVar6;
            lVar20 = lVar20 + 1;
            if (lVar14 < lVar20) goto LAB_1090dc548;
            func_0x0001090dc900();
            if (iVar5 == 0) break;
            puVar6 = auStack_b8;
            func_0x0001090dc70c(puVar6,lVar16);
            if ((int)puVar6 == 0) break;
            lVar16 = lVar16 + 4;
            func_0x0001090dc900();
          } while (((ulong)puVar6 & 1) != 0);
        }
      }
    }
  }
  else {
    iVar5 = uVar17 - 1;
    do {
      iVar5 = iVar5 + 1;
      if (7 < iVar5) goto LAB_1090dc3a4;
      func_0x0001090dc998();
      func_0x0001090dc9d8();
    } while (((ulong)puVar6 & 1) != 0);
  }
LAB_1090dc534:
  uVar13 = 0;
  unaff_x21 = uVar18;
  goto LAB_1090dc538;
}



/* Entry: 1090d886c; end: 1090d889f;  */

long FUN_1090d886c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1090d88a0(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1090d88a0; end: 1090d88bb;  */

void FUN_1090d88a0(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090d88bc; end: 1090d88ef;  */

undefined8 * FUN_1090d88bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1090d88f0(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 1090d88f0; end: 1090d895f;  */

long * FUN_1090d88f0(long *param_1,long *param_2)

{
  long lStack_30;
  long lStack_28;
  
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 8;
  param_1[1] = 0;
  lStack_28 = *param_2;
  lStack_30 = lStack_28 + param_2[1] * 4;
  FUN_1090d8960(param_1,&lStack_28,&lStack_30,0);
  return param_1;
}



/* Entry: 1090d8960; end: 1090d8a23;  */

void FUN_1090d8960(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *param_2;
  uVar2 = *param_3 - lStack_48 >> 2;
  if ((ulong)param_1[2] < uVar2) {
    puVar1 = param_1;
    func_0x0001090d9f18();
    FUN_1090d8b14();
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      param_1[1] = 0;
      if (param_1 + 3 != (undefined8 *)*param_1) {
        __ZdlPv();
      }
    }
    param_1[1] = 0;
    param_1[2] = uVar2;
    *param_1 = puVar1;
    lStack_48 = *param_2;
    lStack_50 = *param_3;
    FUN_1090d8a24(param_1,&lStack_48,&lStack_50);
  }
  else {
    FUN_1090d8a8c(param_1,&lStack_48,uVar2,*param_1,param_1[1]);
    param_1[1] = uVar2;
  }
  return;
}



/* Entry: 1090d8a24; end: 1090d8a8b;  */

void FUN_1090d8a24(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[1];
  lVar1 = *param_1 + lVar3 * 4;
  lVar2 = *param_2;
  lVar4 = lVar1;
  if ((lVar2 != 0) && (*param_1 != 0 && lVar2 != *param_3)) {
    lVar4 = *param_3 - lVar2;
    _memmove(lVar1,lVar2,lVar4);
    lVar3 = param_1[1];
    lVar4 = lVar1 + lVar4;
  }
  param_1[1] = lVar3 + (lVar4 - lVar1 >> 2);
  return;
}



/* Entry: 1090d8a8c; end: 1090d8b13;  */

void FUN_1090d8a8c(undefined8 param_1,long *param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  
  if (param_3 < param_5 || param_3 - param_5 == 0) {
    if (param_3 == 0) {
      return;
    }
    lVar1 = *param_2;
  }
  else {
    lVar1 = *param_2;
    if (param_5 != 0) {
      _memmove(param_4,lVar1,param_5 << 2);
      lVar1 = lVar1 + param_5 * 4;
      param_4 = param_4 + param_5 * 4;
    }
    *param_2 = lVar1;
    param_3 = param_3 - param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_4,lVar1,param_3 << 2);
  return;
}



/* Entry: 1090d8b14; end: 1090d8b4f;  */

void FUN_1090d8b14(undefined *param_1,ulong param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 >> 0x3d != 0) {
    unaff_x29 = &stack0xfffffffffffffff0;
    param_1 = &UNK_10f424dbf;
    unaff_x30 = 0x1090d8b34;
    func_0x00010772e1f8();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (param_2 >> 0x3d != 0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_1090d8b50;
    func_0x0001090d9ea0();
    if (param_1 != (undefined *)0x0) {
      func_0x0001090d9e68();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 2);
  return;
}



/* Entry: 1090d8b50; end: 1090d8bfb;  */

void FUN_1090d8b50(long param_1)

{
  func_0x0001090d9ea0();
  if (param_1 != 0) {
    func_0x0001090d9e68();
  }
  return;
}



/* Entry: 1090d8bfc; end: 1090d8c1b;  */

void FUN_1090d8bfc(long param_1)

{
  if (*(char *)(param_1 + 0x170) == '\x01') {
    FUN_1090d8c1c();
  }
  return;
}



/* Entry: 1090d8c1c; end: 1090d8d3f;  */

long FUN_1090d8c1c(long param_1)

{
  if (*(char *)(param_1 + 0x168) == '\x01') {
    func_0x0001090d8e08(param_1 + 0x150);
  }
  if (*(char *)(param_1 + 0x140) == '\x01') {
    func_0x00010731e26c(param_1 + 0x128);
  }
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x000107c28374(param_1 + 0x100);
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x00010731e26c(param_1 + 0xd8);
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010731e26c(param_1 + 0xb0);
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x00010731e26c(param_1 + 0x88);
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001090d8de4(param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001090d8dc0(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1090d8d4c(param_1 + 8);
  }
  return param_1;
}



/* Entry: 1090d8d40; end: 1090d8d4b;  */

long * FUN_1090d8d40(long *param_1)

{
  func_0x0001090d9e38();
  if (*param_1 != 0) {
    FUN_1090d8d80(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1090d8d4c; end: 1090d8d7f;  */

long * FUN_1090d8d4c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1090d8d80(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1090d8d80; end: 1090d8dbf;  */

void FUN_1090d8d80(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    func_0x00010b99d89c(lVar2 + -0x28);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 1090d8dc0; end: 1090d90d3;  */

void FUN_1090d8dc0(long param_1)

{
  func_0x0001090d9ea0();
  if (param_1 != 0) {
    func_0x0001090d9e68();
  }
  return;
}



/* Entry: 1090d90d4; end: 1090d912f;  */

void FUN_1090d90d4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1090d9130; end: 1090d915f;  */

void FUN_1090d9130(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001090da094();
  if ((bool)in_ZR) {
    FUN_1090d9160(param_1);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1090d9160; end: 1090d9163;  */

void FUN_1090d9160(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1090d9164; end: 1090d916f;  */

void FUN_1090d9164(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x0001090d9e38();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[9];
    uVar1 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xb] = 0;
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    param_1[0xd] = param_2[0xd];
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return;
}



/* Entry: 1090d9170; end: 1090d91db;  */

void FUN_1090d9170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[9];
    uVar1 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[8] = uVar1;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xb] = 0;
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    param_1[0xd] = param_2[0xd];
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return;
}



/* Entry: 1090d91dc; end: 1090d91e7;  */

long * FUN_1090d91dc(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  func_0x0001090d9e38();
  if (param_2 == param_1) {
    return param_1;
  }
  lVar1 = *param_2;
  uVar2 = param_2[1];
  if ((ulong)param_1[2] < uVar2) {
    plVar3 = param_1;
    func_0x0001090d9f18();
    FUN_1090d3954();
    if (((long *)*param_1 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != (long *)*param_1)) {
      __ZdlPv();
    }
    lVar4 = 0;
    param_1[1] = 0;
    param_1[2] = uVar2;
    *param_1 = (long)plVar3;
    plVar5 = plVar3;
    if ((lVar1 != 0) && (plVar3 != (long *)0x0)) {
      func_0x0001090da0a8();
      _memmove();
      lVar4 = param_1[1];
      plVar5 = (long *)((long)plVar3 + uVar2);
    }
    param_1[1] = (lVar4 - (long)plVar3) + (long)plVar5;
    return param_1;
  }
  if ((ulong)param_1[1] < uVar2) {
    if (param_1[1] != 0) {
      func_0x0001090da0a8();
      _memmove();
    }
    func_0x0001090da0a8();
  }
  else {
    if (uVar2 == 0) goto LAB_1090d92b8;
    func_0x0001090da0a8();
  }
  _memmove();
LAB_1090d92b8:
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 1090d91e8; end: 1090d92db;  */

long * FUN_1090d91e8(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 == param_1) {
    return param_1;
  }
  lVar1 = *param_2;
  uVar2 = param_2[1];
  if ((ulong)param_1[2] < uVar2) {
    plVar3 = param_1;
    func_0x0001090d9f18();
    FUN_1090d3954();
    if (((long *)*param_1 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != (long *)*param_1)) {
      __ZdlPv();
    }
    lVar4 = 0;
    param_1[1] = 0;
    param_1[2] = uVar2;
    *param_1 = (long)plVar3;
    plVar5 = plVar3;
    if ((lVar1 != 0) && (plVar3 != (long *)0x0)) {
      func_0x0001090da0a8();
      _memmove();
      lVar4 = param_1[1];
      plVar5 = (long *)((long)plVar3 + uVar2);
    }
    param_1[1] = (lVar4 - (long)plVar3) + (long)plVar5;
    return param_1;
  }
  if ((ulong)param_1[1] < uVar2) {
    if (param_1[1] != 0) {
      func_0x0001090da0a8();
      _memmove();
    }
    func_0x0001090da0a8();
  }
  else {
    if (uVar2 == 0) goto LAB_1090d92b8;
    func_0x0001090da0a8();
  }
  _memmove();
LAB_1090d92b8:
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 1090d92dc; end: 1090d95bf;  */

undefined8 * FUN_1090d92dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27b9c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1090d95c0; end: 1090d965b;  */

void FUN_1090d95c0(void)

{
  long unaff_x21;
  long *plVar1;
  
  func_0x0001090d9cb0();
  plVar1 = (long *)(unaff_x21 + 8);
  if (*plVar1 != 0) {
    FUN_1090d8d80(plVar1);
    __ZdlPv(*plVar1);
    func_0x0001090d9fac();
  }
  func_0x0001090d9c60();
  return;
}



/* Entry: 1090d965c; end: 1090d970b;  */

undefined8 * FUN_1090d965c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x000107c2847c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1090d970c; end: 1090d976b;  */

void FUN_1090d970c(void)

{
  long unaff_x21;
  
  func_0x0001090d9cb0();
  if (*(long *)(unaff_x21 + 8) != 0) {
    func_0x0001090d9f00();
    func_0x0001090d9fac();
  }
  func_0x0001090d9c60();
  return;
}



/* Entry: 1090d976c; end: 1090d98d7;  */

void FUN_1090d976c(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar12 = *param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar13 = (long)puVar1 - lVar12;
  uVar7 = lVar13 / 0x18;
  uVar11 = param_2 - uVar7;
  if (param_2 < uVar7 || uVar11 == 0) {
    if (param_2 < uVar7) {
      param_1[1] = lVar12 + param_2 * 0x18;
    }
  }
  else if ((ulong)((param_1[2] - (long)puVar1) / 0x18) < uVar11) {
    uVar2 = (param_1[2] - lVar12) / 0x18;
    uVar9 = uVar2 * 2;
    if (uVar9 < param_2 || uVar9 - param_2 == 0) {
      uVar9 = param_2;
    }
    if (0x555555555555554 < uVar2) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar9) {
      plVar4 = param_1;
      uVar7 = param_2;
      func_0x000104bd35f4();
      uVar11 = plVar4[1] - *plVar4 >> 3;
      if (uVar7 <= uVar11) {
        if (uVar7 < uVar11) {
          plVar4[1] = *plVar4 + uVar7 * 8;
        }
        return;
      }
      uVar7 = uVar7 - uVar11;
      pcStack_58 = FUN_1090d98d8;
      uStack_80 = param_2;
      lStack_78 = lVar13;
      lStack_70 = lVar12;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x0001090d9dfc();
      plVar6 = plVar4 + 2;
      if ((ulong)(*plVar6 - plVar4[1] >> 3) < uVar7) {
        plVar5 = param_1;
        func_0x000106e528f0(param_1,lVar12 + (plVar4[1] - *param_1 >> 3));
        lVar13 = *param_1;
        lVar10 = param_1[1];
        plStack_a8 = (long *)0x0;
        plStack_88 = plVar6;
        if (plVar5 != (long *)0x0) {
          func_0x000107c27dfc();
          plStack_a8 = plVar6;
        }
        puStack_a0 = (undefined8 *)((long)plStack_a8 + (lVar10 - lVar13));
        plStack_90 = plStack_a8 + (long)plVar5;
        puStack_98 = puStack_a0 + lVar12;
        puVar1 = puStack_a0;
        for (lVar12 = lVar12 << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        }
        func_0x000106e55488(param_1,&plStack_a8);
        func_0x000106e529cc(&plStack_a8);
        return;
      }
      func_0x0001090d9f18();
      puVar8 = (undefined8 *)plVar4[1];
      puVar1 = puVar8;
      for (lVar12 = uVar7 << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      plVar4[1] = (long)(puVar8 + uVar7);
      return;
    }
    lVar3 = uVar9 * 0x18;
    __Znwm();
    puVar8 = (undefined8 *)(lVar3 + lVar13);
    puVar1 = puVar8;
    for (lVar10 = param_2 * 0x18 + uVar7 * -0x18; lVar10 != 0; lVar10 = lVar10 + -0x18) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
    }
    _memcpy(puVar8 + (lVar13 / -0x18) * 3,lVar12,lVar13);
    *param_1 = (long)(puVar8 + (lVar13 / -0x18) * 3);
    param_1[1] = (long)(puVar8 + uVar11 * 3);
    param_1[2] = lVar3 + uVar9 * 0x18;
    if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar12);
      return;
    }
  }
  else {
    puVar8 = puVar1 + uVar11 * 3;
    for (lVar12 = param_2 * 0x18 + uVar7 * -0x18; lVar12 != 0; lVar12 = lVar12 + -0x18) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
    }
    param_1[1] = (long)puVar8;
  }
  return;
}



/* Entry: 1090d98d8; end: 1090d9907;  */

void FUN_1090d98d8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar6 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar6;
  func_0x0001090d9dfc();
  plVar4 = param_1 + 2;
  if (param_2 <= (ulong)(*plVar4 - param_1[1] >> 3)) {
    func_0x0001090d9f18();
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = puVar5;
    for (lVar7 = param_2 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = (long)(puVar5 + param_2);
    return;
  }
  plVar3 = unaff_x19;
  func_0x000106e528f0();
  lVar7 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = (long *)0x0;
  plStack_38 = plVar4;
  if (plVar3 != (long *)0x0) {
    func_0x000107c27dfc();
    plStack_58 = plVar4;
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar7));
  plStack_40 = plStack_58 + (long)plVar3;
  puStack_48 = puStack_50 + unaff_x20;
  puVar2 = puStack_50;
  for (lVar7 = unaff_x20 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  func_0x000106e55488();
  func_0x000106e529cc(&plStack_58);
  return;
}



/* Entry: 1090d9908; end: 1090d99e3;  */

void FUN_1090d9908(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x0001090d9dfc();
  plVar6 = (long *)(param_1 + 0x10);
  if (param_2 <= (ulong)(*plVar6 - *(long *)(param_1 + 8) >> 3)) {
    func_0x0001090d9f18();
    puVar4 = *(undefined8 **)(param_1 + 8);
    puVar2 = puVar4;
    for (lVar5 = param_2 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar4 + param_2;
    return;
  }
  plVar3 = unaff_x19;
  func_0x000106e528f0();
  lVar5 = *unaff_x19;
  lVar1 = unaff_x19[1];
  plStack_58 = (long *)0x0;
  plStack_38 = plVar6;
  if (plVar3 != (long *)0x0) {
    func_0x000107c27dfc();
    plStack_58 = plVar6;
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar5));
  plStack_40 = plStack_58 + (long)plVar3;
  puStack_48 = puStack_50 + unaff_x20;
  puVar2 = puStack_50;
  for (lVar5 = unaff_x20 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  func_0x000106e55488();
  func_0x000106e529cc(&plStack_58);
  return;
}



/* Entry: 1090d99e4; end: 1090d9a5b;  */

void FUN_1090d99e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001090d9ea0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090d9e5c();
    }
  }
  return;
}



/* Entry: 1090d9a5c; end: 1090d9a63;  */

void FUN_1090d9a5c(void)

{
  return;
}



/* Entry: 1090d9a64; end: 1090d9bdf;  */

void FUN_1090d9a64(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 == 0) {
    func_0x0001090d9f08(param_2,&UNK_10f5504db);
    param_1[1] = uStack_28;
    func_0x0001090d9d48();
    uVar2 = 2;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(param_2 + 0x20) = *(long *)(lVar1 + 0x18) + *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    *(long *)(param_2 + 0x30) = *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 5;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 4);
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1090d9be0; end: 1090da0e7;  */

void FUN_1090d9be0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1090da0e8; end: 1090da167;  */

void FUN_1090da0e8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [60];
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  FUN_1090d88f0(auStack_60,param_2);
  FUN_1090da168(auStack_60,&uStack_24);
  FUN_1090da27c(auStack_98,auStack_60);
  FUN_1090da27c(param_1,auStack_98);
  FUN_1090d886c(auStack_98);
  FUN_1090d886c(auStack_60);
  return;
}



/* Entry: 1090da168; end: 1090da1bf;  */

undefined4 * FUN_1090da168(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puStack_18;
  
  lVar2 = param_1[1];
  puVar1 = (undefined4 *)(*param_1 + lVar2 * 4);
  if (lVar2 == param_1[2]) {
    FUN_1090da488(&puStack_18,param_1,puVar1,1);
  }
  else {
    *puVar1 = *param_2;
    param_1[1] = lVar2 + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 1090da1c0; end: 1090da27b;  */

void FUN_1090da1c0(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_2;
  for (lVar3 = param_2[1] << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    if (uVar1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (param_1,&UNK_10f5504f3);
    }
    func_0x0001090fd608(auStack_48,lVar2);
    func_0x000107c27fc4(param_1,auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    lVar2 = lVar2 + 4;
  }
  return;
}



/* Entry: 1090da27c; end: 1090da2bb;  */

long * FUN_1090da27c(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 8;
  param_1[1] = 0;
  FUN_1090da2bc(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 1090da2bc; end: 1090da313;  */

void FUN_1090da2bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_2;
  if (param_2 + 3 == puVar1) {
    FUN_1090da314(param_1,puVar1,(long)puVar1 + param_2[1] * 4,0);
    param_2[1] = 0;
  }
  else {
    *param_1 = puVar1;
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 1090da314; end: 1090da3bf;  */

void FUN_1090da314(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = (long)(param_3 - param_2) >> 2;
  if (uVar7 <= (ulong)param_1[2]) {
    func_0x0001090da67c();
    func_0x0001090da420();
    param_1[1] = uVar7;
    return;
  }
  puVar2 = param_1;
  uVar4 = uVar7;
  FUN_1090d8b14();
  plVar3 = (long *)*param_1;
  if ((plVar3 != (long *)0x0) && (param_1[1] = 0, param_1 + 3 != plVar3)) {
    __ZdlPv();
  }
  param_1[1] = 0;
  param_1[2] = uVar7;
  *param_1 = puVar2;
  func_0x0001090da67c();
  lVar5 = plVar3[1];
  lVar1 = *plVar3 + lVar5 * 4;
  lVar6 = lVar1;
  if (((uVar4 != 0) && (uVar4 != param_3)) && (*plVar3 != 0)) {
    _memmove(lVar1);
    lVar5 = plVar3[1];
    lVar6 = lVar1 + (param_3 - uVar4);
  }
  plVar3[1] = lVar5 + (lVar6 - lVar1 >> 2);
  return;
}



/* Entry: 1090da3c0; end: 1090da487;  */

void FUN_1090da3c0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar1 = *param_1 + lVar2 * 4;
  lVar3 = lVar1;
  if (((param_2 != 0) && (param_2 != param_3)) && (*param_1 != 0)) {
    _memmove(lVar1,param_2,param_3 - param_2);
    lVar2 = param_1[1];
    lVar3 = lVar1 + (param_3 - param_2);
  }
  param_1[1] = lVar2 + (lVar3 - lVar1 >> 2);
  return;
}



/* Entry: 1090da488; end: 1090da633;  */

long * FUN_1090da488(long *param_1,long *param_2,long param_3,long param_4,undefined4 *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (0x1fffffffffffffff - uVar3 < uVar1 - uVar3) {
    plVar6 = (long *)&UNK_10f424dbf;
    func_0x00010772e1f8();
    FUN_1090da634(&lStack_78);
    __Unwind_Resume();
    if ((*plVar6 != 0) && (plVar6[1] + 0x18 != *plVar6)) {
      __ZdlPv();
    }
    return plVar6;
  }
  if (uVar3 >> 0x3d == 0) {
    uVar7 = (uVar3 << 3) / 5;
  }
  else {
    uVar7 = uVar3 << 3;
    if (4 < uVar3 >> 0x3d) {
      uVar7 = 0xffffffffffffffff;
    }
  }
  lVar8 = *param_2;
  if (0x1ffffffffffffffe < uVar7) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  plVar5 = param_2;
  FUN_1090d8b14(param_2,uVar1);
  lVar2 = *param_2;
  lVar4 = param_2[1];
  plVar6 = plVar5;
  plStack_70 = param_2;
  uStack_68 = uVar1;
  if ((lVar2 != 0) && (plVar5 != (long *)0x0 && lVar2 != param_3)) {
    _memmove(plVar5,lVar2,param_3 - lVar2);
    plVar6 = (long *)((long)plVar5 + (param_3 - lVar2));
  }
  *(undefined4 *)plVar6 = *param_5;
  if ((param_3 != 0) && (lVar4 = lVar2 + lVar4 * 4, param_3 != lVar4)) {
    _memmove((long)plVar6 + param_4 * 4,param_3,lVar4 - param_3);
  }
  lStack_78 = 0;
  if (lVar2 != 0) {
    FUN_1090d88a0(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar5;
  param_2[1] = param_2[1] + param_4;
  param_2[2] = uVar1;
  plVar6 = &lStack_78;
  FUN_1090da634(plVar6);
  *param_1 = *param_2 + (param_3 - lVar8);
  return plVar6;
}



/* Entry: 1090da634; end: 1090da66f;  */

long * FUN_1090da634(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090da670; end: 1090da687;  */

void FUN_1090da670(void)

{
  return;
}



/* Entry: 1090da688; end: 1090da6d3;  */

undefined8 *
FUN_1090da688(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1090d88f0(param_1 + 3,param_4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  return param_1;
}



/* Entry: 1090da6d4; end: 1090da72f;  */

undefined8 FUN_1090da6d4(undefined8 param_1)

{
  FUN_1090da688();
  FUN_1090daa34();
  return param_1;
}



/* Entry: 1090da730; end: 1090da74b;  */

undefined1 FUN_1090da730(undefined1 *param_1)

{
  FUN_1090da74c(param_1,1);
  return *param_1;
}



/* Entry: 1090da74c; end: 1090da783;  */

long FUN_1090da74c(long *param_1,long param_2)

{
  long lVar1;
  
  FUN_1090daa0c();
  lVar1 = param_1[2];
  param_1[2] = lVar1 + param_2;
  return *param_1 + lVar1;
}



/* Entry: 1090da784; end: 1090da87b;  */

ushort FUN_1090da784(ushort *param_1)

{
  FUN_1090da74c(param_1,2);
  return *param_1 >> 8 | *param_1 << 8;
}



/* Entry: 1090da87c; end: 1090da91b;  */

void FUN_1090da87c(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 auStack_78 [56];
  
  lVar1 = param_2;
  FUN_1090da74c();
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = param_1 + 6;
    param_1[5] = 8;
    param_1[4] = 0;
  }
  else {
    FUN_1090da0e8(auStack_78,param_2 + 0x18,param_4);
    FUN_1090da688(param_1,lVar1,param_3,auStack_78);
    FUN_1090daa34();
  }
  return;
}



/* Entry: 1090da91c; end: 1090daa0b;  */

void FUN_1090da91c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined1 *puStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  lStack_40 = *(long *)(param_1 + 8) - *(long *)(param_1 + 0x10);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_50 = param_2;
  func_0x000107c2793c(&UNK_10f5504f5);
  func_0x000107c3173c(&puStack_80);
  uStack_60 = uStack_78;
  puStack_68 = puStack_80;
  if (-1 < (char)bStack_69) {
    uStack_60 = (ulong)bStack_69;
    puStack_68 = (undefined1 *)&puStack_80;
  }
  func_0x00010b99f5a8(auStack_58,&puStack_68);
  func_0x0001090dac88(uVar2,auStack_58,param_1 + 0x18);
  ___cxa_throw(uVar2,&PTR_DAT_110ad9b00,FUN_1090daca8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1090da9d0);
  (*pcVar1)();
}



/* Entry: 1090daa0c; end: 1090daa33;  */

undefined1 * FUN_1090daa0c(undefined1 *param_1,ulong param_2)

{
  long in_stack_00000008;
  
  if ((!CARRY8(*(ulong *)(param_1 + 0x10),param_2)) &&
     (*(ulong *)(param_1 + 0x10) + param_2 <= *(ulong *)(param_1 + 8))) {
    return param_1;
  }
  FUN_1090da91c();
  if (in_stack_00000008 != 0) {
    FUN_1090d88a0(&stack0xfffffffffffffff8,&stack0xfffffffffffffff8);
  }
  return &stack0xfffffffffffffff8;
}



/* Entry: 1090daa34; end: 1090daa3b;  */

undefined1 * FUN_1090daa34(void)

{
  long in_stack_00000018;
  
  if (in_stack_00000018 != 0) {
    FUN_1090d88a0(&stack0x00000008,&stack0x00000008);
  }
  return &stack0x00000008;
}



/* Entry: 1090daa3c; end: 1090daa9f;  */

undefined8 FUN_1090daa3c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  puStack_58 = auStack_40;
  uStack_48 = 8;
  uStack_50 = 0;
  FUN_1090daaa0(param_1,param_2,&puStack_58);
  FUN_1090d886c(&puStack_58);
  return param_1;
}



/* Entry: 1090daaa0; end: 1090daaff;  */

undefined8 FUN_1090daaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b99f5f8(auStack_28);
  FUN_1090dab00(param_1,auStack_28,param_3);
  func_0x000104bda93c(auStack_28);
  return param_1;
}



/* Entry: 1090dab00; end: 1090dac0f;  */

undefined8 * FUN_1090dab00(undefined8 *param_1,long *param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined1 *puStack_40;
  long *plStack_38;
  
  puVar3 = auStack_70;
  *param_1 = &PTR_FUN_110ad9ac0;
  if (*(long *)(param_3 + 8) == 0) {
    lVar5 = *param_2;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_1[1] = lVar5;
  }
  else {
    plVar4 = param_2;
    FUN_1090da1c0(auStack_70,param_3);
    func_0x000107c27e5c();
    puStack_40 = puVar3;
    plStack_38 = plVar4;
    func_0x000107c2793c(&UNK_10f55051f);
    func_0x000107c3173c(&ppuStack_58);
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppuStack_58 = &ppuStack_58;
    }
    func_0x00010b99fa70(param_1 + 1,param_2,ppuStack_58,uStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  }
  return param_1;
}



/* Entry: 1090dac10; end: 1090dac3f;  */

void FUN_1090dac10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ac0;
  func_0x000104bda93c(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1090dac40; end: 1090dac43;  */

void FUN_1090dac40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ac0;
  func_0x000104bda93c(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1090dac44; end: 1090daca7;  */

void FUN_1090dac44(void)

{
  FUN_1090dac10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090daca8; end: 1090dacab;  */

void FUN_1090daca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ac0;
  func_0x000104bda93c(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1090dacac; end: 1090dacbf;  */

void FUN_1090dacac(void)

{
  FUN_1090dac10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090dacc0; end: 1090dacc7;  */

void FUN_1090dacc0(void)

{
  return;
}



/* Entry: 1090dacc8; end: 1090dadff;  */

void FUN_1090dacc8(undefined8 *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uStack_28;
  
  puVar3 = (uint *)**(undefined8 **)(param_2 + 0x10);
  while( true ) {
    if (puVar3 == (uint *)(*(undefined8 **)(param_2 + 0x10))[1]) {
      func_0x00010b99f5f8(&uStack_28,&DAT_10f54d6d7);
      *param_1 = uStack_28;
      uStack_28 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x000104bda93c(&uStack_28);
      return;
    }
    if (((char)puVar3[8] == '\x01') && (puVar3[1] == param_3)) break;
    puVar3 = puVar3 + 0x1e;
  }
  uVar4 = 0;
  *(uint **)(param_2 + 0x18) = puVar3;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  if ((char)puVar3[0xe] == '\x01') {
    uVar4 = *(undefined8 *)(puVar3 + 0xc);
  }
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  uVar2 = puVar3[0x1c];
  if ((char)uVar2 == '\x01') {
    puVar5 = puVar3 + 0x10;
    uVar6 = puVar3[0x12];
    lVar7 = (*(long *)(puVar3 + 0x18) - *(long *)(puVar3 + 0x16)) / 0x18;
  }
  else {
    lVar7 = 0;
    puVar5 = (uint *)0x0;
    uVar6 = 0;
  }
  *(long *)(param_2 + 0x30) = lVar7;
  *(uint **)(param_2 + 0x58) = puVar5;
  *(uint **)(param_2 + 0x60) = puVar3;
  *(uint *)(param_2 + 0x68) = uVar6;
  uVar6 = *puVar3;
  *(undefined8 *)(param_2 + 0x70) = 0;
  puVar1 = (uint *)(param_2 + 0x20);
  if ((uVar6 & 1) != 0) {
    puVar1 = puVar3 + 2;
  }
  lVar7 = *(long *)puVar1;
  *(long *)(param_2 + 0x48) = lVar7;
  if ((uVar6 >> 1 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = puVar3[4];
  }
  *(uint *)(param_2 + 0x50) = uVar6;
  if (((char)uVar2 != '\0') && (puVar5[1] != 0)) {
    *(long *)(param_2 + 0x48) = lVar7 + (int)puVar5[1];
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1090dae00; end: 1090dae5f;  */

void FUN_1090dae00(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *extraout_x8;
  long lVar6;
  undefined8 uStack_a8;
  byte bStack_9d;
  long lStack_98;
  undefined1 auStack_68 [72];
  undefined1 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_68[0] = 0;
  uStack_20 = 0;
  FUN_1090d5484(param_1,auStack_68);
  puVar5 = auStack_68;
  FUN_1090d3054();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar5 + 0x18) == 0) {
    func_0x00010b99f5f8(&uStack_a8,&UNK_10f550536);
    *extraout_x8 = 2;
    extraout_x8[1] = uStack_a8;
    uStack_a8 = 0;
    func_0x000104bda93c(&uStack_a8);
  }
  else if (*(ulong *)(puVar5 + 0x28) < *(ulong *)(puVar5 + 0x30)) {
    FUN_1090dcc90(&uStack_a8,puVar5 + 0x58);
    lVar1 = *(long *)(puVar5 + 0x40);
    lVar2 = *(long *)(puVar5 + 0x48);
    *(ulong *)(puVar5 + 0x40) = lVar1 + (uStack_a8 & 0xffffffff);
    *(ulong *)(puVar5 + 0x48) = lVar2 + (ulong)uStack_a8._4_4_;
    lVar6 = *(long *)(puVar5 + 0x28);
    *(long *)(puVar5 + 0x28) = lVar6 + 1;
    uVar3 = *(undefined4 *)(puVar5 + 0x50);
    if ((bStack_9d & 3) == 2) {
      bVar4 = true;
    }
    else if ((bStack_9d & 3) == 1) {
      bVar4 = false;
    }
    else {
      bVar4 = lVar6 == 0;
    }
    *extraout_x8 = 1;
    extraout_x8[1] = lVar1;
    extraout_x8[2] = lStack_98 + lVar1;
    extraout_x8[3] = lVar2;
    *(uint *)(extraout_x8 + 4) = uStack_a8._4_4_;
    *(undefined4 *)((long)extraout_x8 + 0x24) = uVar3;
    extraout_x8[5] = lStack_98 + lVar1;
    *(undefined4 *)(extraout_x8 + 6) = 0;
    *(undefined4 *)((long)extraout_x8 + 0x34) = (undefined4)uStack_a8;
    *(undefined4 *)(extraout_x8 + 7) = 1;
    *(bool *)((long)extraout_x8 + 0x3c) = bVar4;
    *(undefined2 *)(extraout_x8 + 8) = 0;
  }
  else {
    *extraout_x8 = 1;
    *(undefined2 *)(extraout_x8 + 8) = 0x100;
    extraout_x8[2] = 0;
    extraout_x8[1] = 0;
    extraout_x8[4] = 0;
    extraout_x8[3] = 0;
    extraout_x8[6] = 0;
    extraout_x8[5] = 0;
    *(undefined4 *)(extraout_x8 + 7) = 0;
  }
  return;
}



/* Entry: 1090dae60; end: 1090dafc3;  */

void FUN_1090dae60(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_38;
  byte bStack_2d;
  long lStack_28;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x00010b99f5f8(&uStack_38,&UNK_10f550536);
    *param_1 = 2;
    param_1[1] = uStack_38;
    uStack_38 = 0;
    func_0x000104bda93c(&uStack_38);
  }
  else if (*(ulong *)(param_2 + 0x28) < *(ulong *)(param_2 + 0x30)) {
    FUN_1090dcc90(&uStack_38,param_2 + 0x58);
    lVar1 = *(long *)(param_2 + 0x40);
    lVar2 = *(long *)(param_2 + 0x48);
    *(ulong *)(param_2 + 0x40) = lVar1 + (uStack_38 & 0xffffffff);
    *(ulong *)(param_2 + 0x48) = lVar2 + (ulong)uStack_38._4_4_;
    lVar5 = *(long *)(param_2 + 0x28);
    *(long *)(param_2 + 0x28) = lVar5 + 1;
    uVar3 = *(undefined4 *)(param_2 + 0x50);
    if ((bStack_2d & 3) == 2) {
      bVar4 = true;
    }
    else if ((bStack_2d & 3) == 1) {
      bVar4 = false;
    }
    else {
      bVar4 = lVar5 == 0;
    }
    *param_1 = 1;
    param_1[1] = lVar1;
    param_1[2] = lStack_28 + lVar1;
    param_1[3] = lVar2;
    *(uint *)(param_1 + 4) = uStack_38._4_4_;
    *(undefined4 *)((long)param_1 + 0x24) = uVar3;
    param_1[5] = lStack_28 + lVar1;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = (undefined4)uStack_38;
    *(undefined4 *)(param_1 + 7) = 1;
    *(bool *)((long)param_1 + 0x3c) = bVar4;
    *(undefined2 *)(param_1 + 8) = 0;
  }
  else {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 8) = 0x100;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}



/* Entry: 1090dafc4; end: 1090db02b;  */

void FUN_1090dafc4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110ad9ba0;
  param_1[1] = 1;
  param_1[2] = param_2;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xf;
  param_1[0xe] = 8;
  param_1[0xd] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x13d) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((long)param_1 + 0x181) = 0;
  *(undefined8 *)((long)param_1 + 0x179) = 0;
  return;
}



/* Entry: 1090db02c; end: 1090db05b;  */

undefined8 * FUN_1090db02c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ba0;
  FUN_1090db7cc(param_1 + 0xc);
  return param_1;
}



/* Entry: 1090db05c; end: 1090db05f;  */

undefined8 * FUN_1090db05c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9ba0;
  FUN_1090db7cc(param_1 + 0xc);
  return param_1;
}



/* Entry: 1090db060; end: 1090db073;  */

void FUN_1090db060(void)

{
  FUN_1090db02c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090db074; end: 1090db43b;  */

void FUN_1090db074(long param_1,uint param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined8 extraout_x8;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined8 extraout_x8_00;
  undefined1 *puVar14;
  undefined8 *extraout_x8_01;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *unaff_x19;
  undefined1 *unaff_x21;
  ulong auStack_2d8 [2];
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined1 *puStack_288;
  long lStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [72];
  undefined1 auStack_1f8 [72];
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [192];
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 uStack_68;
  
  ppuVar4 = (undefined1 **)&uStack_180;
  lVar13 = param_1;
  func_0x0001090db8ac();
  for (puVar11 = (uint *)(**(long **)(lVar13 + 0x10) + 0x140);
      uVar3 = puVar11 + -0x50 == (uint *)(*(long **)(lVar13 + 0x10))[1], uStack_68 = extraout_x8,
      !(bool)uVar3; puVar11 = puVar11 + 0x9e) {
    if (((char)puVar11[-0x3a] == '\x01') && (puVar11[-0x4a] == param_2)) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      uVar3 = (char)puVar11[0x40] == '\x01';
      if ((!(bool)uVar3) ||
         ((uVar3 = (char)puVar11[0x3e] == '\x01', !(bool)uVar3 ||
          (uVar3 = (char)puVar11[0x3c] == '\x01', !(bool)uVar3)))) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        iVar7 = 0xf550546;
        func_0x00010b99f5f8(&uStack_180);
        goto LAB_1090db158;
      }
      *(uint **)(param_1 + 0x18) = puVar11 + -0x20;
      if ((char)puVar11[8] == '\x01') {
        uVar15 = (ulong)*puVar11;
      }
      else if ((char)puVar11[0x12] == '\x01') {
        uVar15 = *(long *)(puVar11 + 0xe) - *(long *)(puVar11 + 0xc) >> 2;
      }
      else {
        uVar15 = 0;
      }
      puVar10 = (uint *)0x0;
      *(ulong *)(param_1 + 0x28) = uVar15;
      puVar1 = puVar11 + 0x32;
      if ((char)puVar11[0x3a] == '\0') {
        puVar1 = (uint *)0x0;
      }
      puVar8 = puVar11 + -0x16;
      if ((char)puVar11[-0xe] == '\0') {
        puVar8 = (uint *)0x0;
      }
      if (((char)puVar11[0x4c] == '\x01') && (puVar10 = puVar11 + 0x42, (char)puVar11[0x4a] == '\0')
         ) {
        puVar10 = (uint *)0x0;
      }
      FUN_1090db8cc(&uStack_180,puVar8,puVar1,puVar10);
      puVar14 = puStack_150;
      iVar7 = (int)puVar8;
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_174,uStack_178);
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_180._4_4_,(uint)uStack_180);
      *(undefined8 *)(param_1 + 0x48) = uStack_168;
      *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_16c,uStack_170);
      *(undefined8 *)(param_1 + 0x58) = uStack_158;
      *(undefined8 *)(param_1 + 0x50) = uStack_160;
      uVar3 = &uStack_180 == (undefined8 *)(param_1 + 0x30);
      if (!(bool)uVar3) {
        uVar3 = auStack_138 == puStack_150;
        if ((bool)uVar3) {
          uVar3 = uStack_148 == *(ulong *)(param_1 + 0x70);
          if (*(ulong *)(param_1 + 0x70) < uStack_148) {
            lVar13 = param_1 + 0x60;
            uVar15 = uStack_148;
            FUN_1090db820();
            iVar7 = (int)uVar15;
            if (*(long *)(param_1 + 0x60) != 0) {
              *(undefined8 *)(param_1 + 0x68) = 0;
              uVar3 = param_1 + 0x78 == *(long *)(param_1 + 0x60);
              if (!(bool)uVar3) {
                __ZdlPv();
              }
            }
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(ulong *)(param_1 + 0x70) = uStack_148;
            *(long *)(param_1 + 0x60) = lVar13;
            if (lVar13 == 0) {
              lVar12 = 0;
              lVar16 = 0;
            }
            else {
              func_0x0001090db8c0();
              _memmove();
              lVar16 = lVar13 + uStack_148 * 0x18;
              lVar12 = *(long *)(param_1 + 0x68);
            }
            *(long *)(param_1 + 0x68) = (lVar16 - lVar13) / 0x18 + lVar12;
          }
          else {
            uVar15 = *(ulong *)(param_1 + 0x68);
            uVar3 = uStack_148 == uVar15;
            if (uVar15 < uStack_148) {
              if (uVar15 != 0) {
                func_0x0001090db8c0();
                _memmove();
                puVar14 = puVar14 + uVar15 * 0x18;
              }
              func_0x0001090db8c0();
LAB_1090db338:
              _memmove();
            }
            else if (uStack_148 != 0) {
              func_0x0001090db8c0();
              goto LAB_1090db338;
            }
            *(ulong *)(param_1 + 0x68) = uStack_148;
          }
          uStack_148 = 0;
          unaff_x21 = puVar14;
        }
        else {
          *(undefined8 *)(param_1 + 0x68) = 0;
          unaff_x21 = puStack_150;
          if (*(long *)(param_1 + 0x60) != 0) {
            lVar13 = param_1 + 0x60;
            FUN_1090db804(param_1 + 0x60,lVar13,*(undefined8 *)(param_1 + 0x70));
            iVar7 = (int)lVar13;
            unaff_x21 = puStack_150;
          }
          *(undefined1 **)(param_1 + 0x60) = unaff_x21;
          *(undefined8 *)(param_1 + 0x70) = uStack_140;
          *(ulong *)(param_1 + 0x68) = uStack_148;
          uStack_148 = 0;
          uStack_140 = 0;
          puStack_150 = (undefined1 *)0x0;
        }
      }
      *(ulong *)(param_1 + 0x138) = CONCAT35(uStack_73,uStack_78);
      *(ulong *)(param_1 + 0x13d) = CONCAT53(uStack_70,uStack_73);
      ppuVar4 = &puStack_150;
      FUN_1090db7cc();
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == 0) {
        uStack_174 = 0;
        uStack_170 = 0;
        uStack_180._4_4_ = 0;
        uStack_178 = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined8 *)(param_1 + 0x154) = 0;
        *(ulong *)(param_1 + 0x14c) = (ulong)(uint)uStack_180;
        *(undefined4 *)(param_1 + 0x15c) = 0;
LAB_1090db40c:
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x160) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
      }
      else {
        if (*(char *)(lVar13 + 0xa0) == '\x01') {
          *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar13 + 0x7c);
          *(long *)(param_1 + 0x150) = lVar13 + 0x88;
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
        else if (*(char *)(lVar13 + 200) == '\x01') {
          *(undefined4 *)(param_1 + 0x148) = 0;
          *(long *)(param_1 + 0x150) = lVar13 + 0xb0;
          *(undefined8 *)(param_1 + 0x158) = 0;
        }
        else {
          uStack_174 = 0;
          uStack_170 = 0;
          uStack_180._4_4_ = 0;
          uStack_178 = 0;
          *(undefined4 *)(param_1 + 0x148) = 0;
          *(undefined8 *)(param_1 + 0x154) = 0;
          *(ulong *)(param_1 + 0x14c) = (ulong)(uint)uStack_180;
          *(undefined4 *)(param_1 + 0x15c) = 0;
        }
        uVar3 = *(char *)(lVar13 + 0x70) == '\x01';
        if (!(bool)uVar3) goto LAB_1090db40c;
        *(long *)(param_1 + 0x160) = lVar13 + 0x50;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
      }
      *(undefined1 *)unaff_x19 = 0;
      *(undefined1 *)(unaff_x19 + 1) = 0;
      goto LAB_1090db174;
    }
  }
  iVar7 = 0xf54d6d7;
  func_0x00010b99f5f8(&uStack_180);
LAB_1090db158:
  *unaff_x19 = CONCAT44(uStack_180._4_4_,(uint)uStack_180);
  uStack_180._0_4_ = 0;
  uStack_180._4_4_ = 0;
  *(undefined1 *)(unaff_x19 + 1) = 1;
  func_0x000104bda93c();
LAB_1090db174:
  func_0x0001090db898(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  if (iVar7 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  pcStack_188 = FUN_1090db43c;
  lStack_1a0 = param_1;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x0001090db8ac();
  uStack_1a8 = extraout_x8_00;
  puVar14 = ppuVar4[3];
  if ((puVar14 == (undefined1 *)0x0) || ((puVar14[0x140] & 1) == 0)) {
    auStack_1f8[0] = 0;
    uStack_1b0 = 0;
    func_0x0001090db878();
    puVar14 = auStack_1f8;
    FUN_1090d3054();
  }
  else {
    func_0x00010731e2b0(auStack_258,puVar14 + 0x128);
    FUN_1090d35cc(auStack_240,auStack_258);
    FUN_1090d5510(auStack_1f8,auStack_240);
    uStack_1b0 = 1;
    func_0x0001090db878();
    FUN_1090d3054(auStack_1f8);
    FUN_1090d36d8(auStack_240);
    puVar14 = auStack_258;
    func_0x00010731e26c();
  }
  func_0x0001090db898(uStack_1a8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_1090d36d8(auStack_240);
  func_0x00010731e26c(auStack_258);
  puVar5 = puVar14;
  __Unwind_Resume();
  pcStack_268 = FUN_1090db510;
  lVar13 = *(long *)(puVar5 + 0x18);
  puStack_288 = unaff_x21;
  lStack_280 = param_1;
  puStack_278 = puVar14;
  ppuStack_270 = &puStack_190;
  if (lVar13 == 0) {
    puVar9 = &UNK_10f550536;
LAB_1090db600:
    func_0x00010b99f5f8(&uStack_2c0,puVar9);
    *extraout_x8_01 = 2;
    extraout_x8_01[1] = uStack_2c0;
    uStack_2c0 = 0;
    func_0x000104bda93c(&uStack_2c0);
    return;
  }
  if (((*(byte *)(lVar13 + 0xa0) & 1) == 0) && ((*(byte *)(lVar13 + 200) & 1) == 0)) {
    puVar9 = &UNK_10f550557;
    goto LAB_1090db600;
  }
  if (*(ulong *)(puVar5 + 0x28) <= *(ulong *)(puVar5 + 0x20)) {
    *extraout_x8_01 = 1;
    *(undefined2 *)(extraout_x8_01 + 8) = 0x100;
    extraout_x8_01[2] = 0;
    extraout_x8_01[1] = 0;
    extraout_x8_01[4] = 0;
    extraout_x8_01[3] = 0;
    extraout_x8_01[6] = 0;
    extraout_x8_01[5] = 0;
    *(undefined4 *)(extraout_x8_01 + 7) = 0;
    return;
  }
  FUN_1090dba54(&uStack_2c0,puVar5 + 0x30);
  puVar14 = puVar5 + 0x148;
  FUN_1090dcb14();
  puVar6 = puVar5 + 0x160;
  FUN_1090dcb9c(auStack_2d8,puVar6);
  if ((puVar5[400] == '\x01') && (*(ulong *)(puVar5 + 0x188) == auStack_2d8[0])) {
    uVar15 = *(ulong *)(puVar5 + 0x180);
    lVar13 = *(long *)(puVar5 + 0x18);
  }
  else {
    lVar13 = *(long *)(puVar5 + 0x18);
    if (*(char *)(lVar13 + 0xf0) == '\x01') {
      if ((ulong)(*(long *)(lVar13 + 0xe0) - *(long *)(lVar13 + 0xd8) >> 2) <= auStack_2d8[0]) {
        func_0x0001090db890();
        func_0x0001090db884();
        goto LAB_1090db730;
      }
      uVar15 = (ulong)*(uint *)(*(long *)(lVar13 + 0xd8) + auStack_2d8[0] * 4);
    }
    else {
      if (*(char *)(lVar13 + 0x118) != '\x01') {
        func_0x0001090db890();
        FUN_1090daa3c();
LAB_1090db730:
        ___cxa_throw(puVar6,&PTR_DAT_110ad9b18,FUN_1090dac40);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1090db74c);
        (*pcVar2)();
      }
      if ((ulong)(*(long *)(lVar13 + 0x108) - *(long *)(lVar13 + 0x100) >> 3) <= auStack_2d8[0]) {
        func_0x0001090db890();
        func_0x0001090db884();
        goto LAB_1090db730;
      }
      uVar15 = *(ulong *)(*(long *)(lVar13 + 0x100) + auStack_2d8[0] * 8);
    }
    *(ulong *)(puVar5 + 0x188) = auStack_2d8[0];
    puVar5[400] = 1;
  }
  *(ulong *)(puVar5 + 0x180) = uVar15 + ((ulong)puVar14 & 0xffffffff);
  lVar16 = *(long *)(puVar5 + 0x20);
  *(ulong *)(puVar5 + 0x20) = lVar16 + 1U;
  if (*(char *)(lVar13 + 0x140) == '\x01') {
    uVar17 = *(ulong *)(puVar5 + 0x198);
    if (((ulong)(*(long *)(lVar13 + 0x130) - *(long *)(lVar13 + 0x128) >> 2) <= uVar17) ||
       (lVar16 + 1U != (ulong)*(uint *)(*(long *)(lVar13 + 0x128) + uVar17 * 4))) {
      uVar3 = 0;
      goto LAB_1090db6b8;
    }
    *(ulong *)(puVar5 + 0x198) = uVar17 + 1;
  }
  uVar3 = 1;
LAB_1090db6b8:
  *extraout_x8_01 = 1;
  extraout_x8_01[2] = uStack_2b8;
  extraout_x8_01[1] = uStack_2c0;
  extraout_x8_01[3] = uVar15;
  *(int *)(extraout_x8_01 + 4) = (int)puVar14;
  *(undefined4 *)((long)extraout_x8_01 + 0x24) = uStack_2c4;
  extraout_x8_01[5] = uStack_2b0;
  extraout_x8_01[6] = uStack_2a8;
  *(undefined4 *)(extraout_x8_01 + 7) = uStack_2c8;
  *(undefined1 *)((long)extraout_x8_01 + 0x3c) = uVar3;
  *(undefined1 *)(extraout_x8_01 + 8) = uStack_2a0;
  *(undefined1 *)((long)extraout_x8_01 + 0x41) = 0;
  return;
}



/* Entry: 1090db43c; end: 1090db50f;  */

void FUN_1090db43c(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 *extraout_x8_00;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  ulong auStack_158 [2];
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001090db8ac();
  lVar6 = *(long *)(param_1 + 0x18);
  uStack_28 = extraout_x8;
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x140) & 1) == 0)) {
    auStack_78[0] = 0;
    uStack_30 = 0;
    func_0x0001090db878();
    puVar2 = auStack_78;
    FUN_1090d3054();
  }
  else {
    func_0x00010731e2b0(auStack_d8,lVar6 + 0x128);
    FUN_1090d35cc(auStack_c0,auStack_d8);
    FUN_1090d5510(auStack_78,auStack_c0);
    uStack_30 = 1;
    func_0x0001090db878();
    FUN_1090d3054(auStack_78);
    FUN_1090d36d8(auStack_c0);
    puVar2 = auStack_d8;
    func_0x00010731e26c();
  }
  func_0x0001090db898(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1090d36d8(auStack_c0);
  func_0x00010731e26c(auStack_d8);
  __Unwind_Resume();
  lVar6 = *(long *)(puVar2 + 0x18);
  if (lVar6 == 0) {
    puVar5 = &UNK_10f550536;
LAB_1090db600:
    func_0x00010b99f5f8(&uStack_140,puVar5);
    *extraout_x8_00 = 2;
    extraout_x8_00[1] = uStack_140;
    uStack_140 = 0;
    func_0x000104bda93c(&uStack_140);
    return;
  }
  if (((*(byte *)(lVar6 + 0xa0) & 1) == 0) && ((*(byte *)(lVar6 + 200) & 1) == 0)) {
    puVar5 = &UNK_10f550557;
    goto LAB_1090db600;
  }
  if (*(ulong *)(puVar2 + 0x28) <= *(ulong *)(puVar2 + 0x20)) {
    *extraout_x8_00 = 1;
    *(undefined2 *)(extraout_x8_00 + 8) = 0x100;
    extraout_x8_00[2] = 0;
    extraout_x8_00[1] = 0;
    extraout_x8_00[4] = 0;
    extraout_x8_00[3] = 0;
    extraout_x8_00[6] = 0;
    extraout_x8_00[5] = 0;
    *(undefined4 *)(extraout_x8_00 + 7) = 0;
    return;
  }
  FUN_1090dba54(&uStack_140,puVar2 + 0x30);
  puVar3 = puVar2 + 0x148;
  FUN_1090dcb14();
  puVar4 = puVar2 + 0x160;
  FUN_1090dcb9c(auStack_158,puVar4);
  if ((puVar2[400] == '\x01') && (*(ulong *)(puVar2 + 0x188) == auStack_158[0])) {
    uVar7 = *(ulong *)(puVar2 + 0x180);
    lVar6 = *(long *)(puVar2 + 0x18);
  }
  else {
    lVar6 = *(long *)(puVar2 + 0x18);
    if (*(char *)(lVar6 + 0xf0) == '\x01') {
      if ((ulong)(*(long *)(lVar6 + 0xe0) - *(long *)(lVar6 + 0xd8) >> 2) <= auStack_158[0]) {
        func_0x0001090db890();
        func_0x0001090db884();
        goto LAB_1090db730;
      }
      uVar7 = (ulong)*(uint *)(*(long *)(lVar6 + 0xd8) + auStack_158[0] * 4);
    }
    else {
      if (*(char *)(lVar6 + 0x118) != '\x01') {
        func_0x0001090db890();
        FUN_1090daa3c();
LAB_1090db730:
        ___cxa_throw(puVar4,&PTR_DAT_110ad9b18,FUN_1090dac40);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1090db74c);
        (*pcVar1)();
      }
      if ((ulong)(*(long *)(lVar6 + 0x108) - *(long *)(lVar6 + 0x100) >> 3) <= auStack_158[0]) {
        func_0x0001090db890();
        func_0x0001090db884();
        goto LAB_1090db730;
      }
      uVar7 = *(ulong *)(*(long *)(lVar6 + 0x100) + auStack_158[0] * 8);
    }
    *(ulong *)(puVar2 + 0x188) = auStack_158[0];
    puVar2[400] = 1;
  }
  *(ulong *)(puVar2 + 0x180) = uVar7 + ((ulong)puVar3 & 0xffffffff);
  lVar9 = *(long *)(puVar2 + 0x20);
  *(ulong *)(puVar2 + 0x20) = lVar9 + 1U;
  if (*(char *)(lVar6 + 0x140) == '\x01') {
    uVar10 = *(ulong *)(puVar2 + 0x198);
    if (((ulong)(*(long *)(lVar6 + 0x130) - *(long *)(lVar6 + 0x128) >> 2) <= uVar10) ||
       (lVar9 + 1U != (ulong)*(uint *)(*(long *)(lVar6 + 0x128) + uVar10 * 4))) {
      uVar8 = 0;
      goto LAB_1090db6b8;
    }
    *(ulong *)(puVar2 + 0x198) = uVar10 + 1;
  }
  uVar8 = 1;
LAB_1090db6b8:
  *extraout_x8_00 = 1;
  extraout_x8_00[2] = uStack_138;
  extraout_x8_00[1] = uStack_140;
  extraout_x8_00[3] = uVar7;
  *(int *)(extraout_x8_00 + 4) = (int)puVar3;
  *(undefined4 *)((long)extraout_x8_00 + 0x24) = uStack_144;
  extraout_x8_00[5] = uStack_130;
  extraout_x8_00[6] = uStack_128;
  *(undefined4 *)(extraout_x8_00 + 7) = uStack_148;
  *(undefined1 *)((long)extraout_x8_00 + 0x3c) = uVar8;
  *(undefined1 *)(extraout_x8_00 + 8) = uStack_120;
  *(undefined1 *)((long)extraout_x8_00 + 0x41) = 0;
  return;
}



/* Entry: 1090db510; end: 1090db7cb;  */

void FUN_1090db510(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  ulong auStack_78 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar5 == 0) {
    puVar4 = &UNK_10f550536;
LAB_1090db600:
    func_0x00010b99f5f8(&uStack_60,puVar4);
    *param_1 = 2;
    param_1[1] = uStack_60;
    uStack_60 = 0;
    func_0x000104bda93c(&uStack_60);
    return;
  }
  if (((*(byte *)(lVar5 + 0xa0) & 1) == 0) && ((*(byte *)(lVar5 + 200) & 1) == 0)) {
    puVar4 = &UNK_10f550557;
    goto LAB_1090db600;
  }
  if (*(ulong *)(param_2 + 0x28) <= *(ulong *)(param_2 + 0x20)) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 8) = 0x100;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    return;
  }
  FUN_1090dba54(&uStack_60,param_2 + 0x30);
  uVar3 = param_2 + 0x148;
  FUN_1090dcb14();
  lVar5 = param_2 + 0x160;
  FUN_1090dcb9c(auStack_78,lVar5);
  if ((*(char *)(param_2 + 400) == '\x01') && (*(ulong *)(param_2 + 0x188) == auStack_78[0])) {
    uVar6 = *(ulong *)(param_2 + 0x180);
    lVar8 = *(long *)(param_2 + 0x18);
  }
  else {
    lVar8 = *(long *)(param_2 + 0x18);
    if (*(char *)(lVar8 + 0xf0) == '\x01') {
      if ((ulong)(*(long *)(lVar8 + 0xe0) - *(long *)(lVar8 + 0xd8) >> 2) <= auStack_78[0]) {
        func_0x0001090db890();
        func_0x0001090db884();
        goto LAB_1090db730;
      }
      uVar6 = (ulong)*(uint *)(*(long *)(lVar8 + 0xd8) + auStack_78[0] * 4);
    }
    else {
      if (*(char *)(lVar8 + 0x118) != '\x01') {
        func_0x0001090db890();
        FUN_1090daa3c();
LAB_1090db730:
        ___cxa_throw(lVar5,&PTR_DAT_110ad9b18,FUN_1090dac40);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1090db74c);
        (*pcVar2)();
      }
      if ((ulong)(*(long *)(lVar8 + 0x108) - *(long *)(lVar8 + 0x100) >> 3) <= auStack_78[0]) {
        func_0x0001090db890();
        func_0x0001090db884();
        goto LAB_1090db730;
      }
      uVar6 = *(ulong *)(*(long *)(lVar8 + 0x100) + auStack_78[0] * 8);
    }
    *(ulong *)(param_2 + 0x188) = auStack_78[0];
    *(undefined1 *)(param_2 + 400) = 1;
  }
  *(ulong *)(param_2 + 0x180) = uVar6 + (uVar3 & 0xffffffff);
  uVar1 = *(long *)(param_2 + 0x20) + 1;
  *(ulong *)(param_2 + 0x20) = uVar1;
  if (*(char *)(lVar8 + 0x140) == '\x01') {
    uVar9 = *(ulong *)(param_2 + 0x198);
    if (((ulong)(*(long *)(lVar8 + 0x130) - *(long *)(lVar8 + 0x128) >> 2) <= uVar9) ||
       (uVar1 != *(uint *)(*(long *)(lVar8 + 0x128) + uVar9 * 4))) {
      uVar7 = 0;
      goto LAB_1090db6b8;
    }
    *(ulong *)(param_2 + 0x198) = uVar9 + 1;
  }
  uVar7 = 1;
LAB_1090db6b8:
  *param_1 = 1;
  param_1[2] = uStack_58;
  param_1[1] = uStack_60;
  param_1[3] = uVar6;
  *(int *)(param_1 + 4) = (int)uVar3;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_64;
  param_1[5] = uStack_50;
  param_1[6] = uStack_48;
  *(undefined4 *)(param_1 + 7) = uStack_68;
  *(undefined1 *)((long)param_1 + 0x3c) = uVar7;
  *(undefined1 *)(param_1 + 8) = uStack_40;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  return;
}



/* Entry: 1090db7cc; end: 1090db803;  */

long FUN_1090db7cc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1090db804(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1090db804; end: 1090db81f;  */

void FUN_1090db804(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090db820; end: 1090db877;  */

void FUN_1090db820(undefined8 param_1,ulong param_2)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0x555555555555555 < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1090db84c;
    func_0x00010772e1f8(&UNK_10f424dbf);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (0x555555555555555 < param_2) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x18) = FUN_1090db878;
    func_0x0001090d5a38();
    *unaff_x19 = extraout_x8;
    FUN_1090d54ac(unaff_x19 + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 1090db878; end: 1090db8cb;  */

void FUN_1090db878(void)

{
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x0001090d5a38();
  *unaff_x19 = extraout_x8;
  FUN_1090d54ac(unaff_x19 + 1);
  return;
}



/* Entry: 1090db8cc; end: 1090db94b;  */

undefined8 *
FUN_1090db8cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined4 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1 + 9;
  param_1[8] = 8;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0x21) = param_5;
  *(undefined4 *)((long)param_1 + 0x10c) = param_6;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  if (param_4 != 0) {
    *(undefined1 *)((long)param_1 + 0x114) = 1;
    FUN_1090db94c(param_1,param_4 + 8);
  }
  return param_1;
}



/* Entry: 1090db94c; end: 1090db9f3;  */

void FUN_1090db94c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  lVar7 = 0;
  plVar1 = (long *)param_2[1];
  for (plVar8 = (long *)*param_2; plVar8 != plVar1; plVar8 = plVar8 + 3) {
    lVar2 = 0;
    if ((ulong)*(uint *)(param_1 + 0x108) != 0) {
      lVar2 = (long)(*plVar8 * (ulong)*(uint *)(param_1 + 0x10c)) /
              (long)(ulong)*(uint *)(param_1 + 0x108);
    }
    if (plVar8[1] != -1) {
      plVar4 = (long *)(param_1 + 0x30);
      FUN_1090db9f4();
      fVar9 = *(float *)(plVar8 + 2);
      bVar3 = true;
      if ((fVar9 != 0.0) && (bVar3 = false, !NAN(fVar9))) {
        bVar3 = fVar9 == 1.0;
      }
      lVar5 = lVar2;
      if (!bVar3) {
        lVar5 = (long)((float)lVar2 / fVar9);
      }
      lVar6 = plVar8[1];
      *plVar4 = lVar6;
      plVar4[1] = lVar6 + lVar5;
      plVar4[2] = lVar7;
    }
    lVar7 = lVar2 + lVar7;
  }
  return;
}



/* Entry: 1090db9f4; end: 1090dba53;  */

undefined8 * FUN_1090db9f4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_18;
  
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (param_1[1] == param_1[2]) {
    FUN_1090dbbcc(&puStack_18,param_1,puVar1,1,0);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    param_1[1] = param_1[1] + 1;
    puStack_18 = puVar1;
  }
  return puStack_18;
}



/* Entry: 1090dba54; end: 1090dbadb;  */

void FUN_1090dba54(ulong *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  lVar3 = param_2;
  FUN_1090dca6c();
  lVar4 = param_2 + 0x18;
  func_0x0001090dca0c();
  uVar2 = *(uint *)(param_2 + 0x110);
  *(uint *)(param_2 + 0x110) = uVar2 + (int)lVar3;
  uVar1 = lVar4 + (ulong)uVar2;
  FUN_1090dbadc(&uStack_58,param_2,uVar1,lVar3);
  *param_1 = (ulong)uVar2;
  param_1[1] = uVar1;
  param_1[2] = uStack_58;
  param_1[3] = uStack_50;
  *(undefined1 *)(param_1 + 4) = uStack_48;
  return;
}



/* Entry: 1090dbadc; end: 1090dbb93;  */

void FUN_1090dbadc(ulong *param_1,long *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((*(byte *)((long)param_2 + 0x114) & 1) == 0) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0;
    *(uint *)((long)param_1 + 0xc) = param_4;
  }
  else {
    FUN_1090dbb94(param_2,param_3);
    if (param_2 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
    lVar1 = param_3 + param_4;
    lVar5 = *param_2;
    if (lVar5 < lVar1) {
      uVar6 = lVar5 - param_3;
      uVar3 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
      uVar2 = param_2[2] + (param_3 - lVar5);
      lVar5 = param_2[1];
      if (lVar1 <= param_2[1]) {
        lVar5 = lVar1;
      }
      uVar4 = lVar5 - param_3 & ((long)(lVar5 - param_3) >> 0x3f ^ 0xffffffffffffffffU);
      uVar7 = uVar2 & (long)uVar2 >> 0x3f;
      if (0 < (long)uVar6) {
        uVar7 = -uVar3;
      }
      lVar1 = uVar4 + uVar7;
      if (lVar1 != 0 && lVar1 < 0 == SCARRY8(uVar4,uVar7)) {
        *param_1 = uVar2;
        *(int *)(param_1 + 1) = (int)uVar3;
        *(int *)((long)param_1 + 0xc) = (int)lVar1;
        goto LAB_1090dbb70;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
LAB_1090dbb70:
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 1090dbb94; end: 1090dbbcb;  */

long FUN_1090dbb94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38) * 0x18;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (param_2 < *(long *)(lVar1 + 8)) break;
    lVar1 = lVar1 + 0x18;
    lVar2 = lVar2 + -0x18;
  }
  return lVar1;
}



/* Entry: 1090dbbcc; end: 1090dbd53;  */

long * FUN_1090dbbcc(long *param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + param_4;
  if (0x555555555555555 - uVar3 < uVar1 - uVar3) {
    plVar5 = (long *)&UNK_10f424dbf;
    func_0x00010772e1f8();
    FUN_1090dbd54(&lStack_78);
    __Unwind_Resume();
    if ((*plVar5 != 0) && (plVar5[1] + 0x18 != *plVar5)) {
      __ZdlPv();
    }
    return plVar5;
  }
  if (uVar3 >> 0x3d == 0) {
    uVar6 = (uVar3 << 3) / 5;
  }
  else {
    uVar6 = uVar3 << 3;
    if (4 < uVar3 >> 0x3d) {
      uVar6 = 0xffffffffffffffff;
    }
  }
  lVar8 = *param_2;
  if (0x555555555555554 < uVar6) {
    uVar6 = 0x555555555555555;
  }
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  plVar4 = param_2;
  FUN_1090db820(param_2,uVar1);
  lVar2 = *param_2;
  lVar7 = param_2[1];
  plVar5 = plVar4;
  plStack_70 = param_2;
  uStack_68 = uVar1;
  if ((lVar2 != 0) && (plVar4 != (long *)0x0 && lVar2 != param_3)) {
    _memmove(plVar4,lVar2,param_3 - lVar2);
    plVar5 = (long *)((long)plVar4 + (param_3 - lVar2));
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  if ((param_3 != 0) && (lVar7 = lVar2 + lVar7 * 0x18, param_3 != lVar7)) {
    _memmove(plVar5 + param_4 * 3,param_3,lVar7 - param_3);
  }
  lStack_78 = 0;
  if (lVar2 != 0) {
    FUN_1090db804(param_2,param_2,param_2[2]);
  }
  *param_2 = (long)plVar4;
  param_2[1] = param_2[1] + param_4;
  param_2[2] = uVar1;
  plVar5 = &lStack_78;
  FUN_1090dbd54(plVar5);
  *param_1 = *param_2 + (param_3 - lVar8);
  return plVar5;
}



/* Entry: 1090dbd54; end: 1090dbd8f;  */

long * FUN_1090dbd54(long *param_1)

{
  if ((*param_1 != 0) && (param_1[1] + 0x18 != *param_1)) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090dbd90; end: 1090dc5df;  */

undefined4 FUN_1090dbd90(long param_1,ulong param_2,int param_3,int param_4)

{
  ulong uVar1;
  bool bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong unaff_x21;
  ulong uVar17;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  uint uVar18;
  long lVar19;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  undefined8 auStack_70 [4];
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    if (param_3 == 0) {
      uVar12 = 0;
      if ((param_2 < 0x17) || (param_4 == 0)) goto LAB_1090dbdd0;
      uVar16 = 0;
      uVar17 = 0x17;
      while ((uVar16 != *(byte *)(param_1 + 0x16) && (uVar14 = uVar17 + 3, uVar14 <= param_2))) {
        uVar3 = *(ushort *)((byte *)(param_1 + uVar17) + 1);
        iVar5 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) + 1;
        while (iVar5 = iVar5 + -1, iVar5 != 0) {
          uVar1 = uVar14 + 2;
          if (param_2 < uVar1) goto LAB_1090dbdcc;
          uVar10 = (uint)(*(ushort *)(param_1 + uVar14) >> 8) |
                   (*(ushort *)(param_1 + uVar14) & 0xff00ff) << 8;
          uVar14 = uVar1 + uVar10;
          if (param_2 < uVar14) goto LAB_1090dbdcc;
          if ((*(byte *)(param_1 + uVar17) & 0x3f) == 0x21 && 2 < uVar10) {
            FUN_1090dc5e0(&iStack_98,param_1 + uVar1 + 2,uVar10 - 2);
            func_0x0001090dc9f8(CONCAT44(uStack_94,iStack_98));
            uStack_c0 = (ulong)uStack_c0._4_4_ << 0x20;
            puVar6 = auStack_b8;
            FUN_1090dc6ac(puVar6,4,(long)&uStack_c0 + 4);
            uVar12 = 0;
            if ((int)puVar6 == 0) goto LAB_1090dc538;
            uStack_c4 = 0;
            puVar6 = auStack_b8;
            FUN_1090dc6ac(puVar6,3,&uStack_c4);
            uVar17 = unaff_x21;
            if (((int)puVar6 == 0) || (func_0x0001090dc918(), uVar16 = uStack_c4, (int)puVar6 == 0))
            goto LAB_1090dc534;
            lVar13 = (long)(int)uStack_c4;
            func_0x0001090dc998();
            func_0x0001090dc9d8();
            if ((int)puVar6 == 0) goto LAB_1090dc534;
            func_0x0001090dc998();
            func_0x0001090dc964();
            if ((int)puVar6 == 0) goto LAB_1090dc534;
            func_0x0001090dc998();
            FUN_1090dc6ac();
            if ((((int)puVar6 == 0) || (func_0x0001090dc944(), (int)puVar6 == 0)) ||
               (func_0x0001090dc944(), (int)puVar6 == 0)) goto LAB_1090dc534;
            func_0x0001090dc998();
            func_0x0001090dc9b0();
            if (((int)puVar6 == 0) || (func_0x0001090dc934(), (int)puVar6 == 0)) goto LAB_1090dc534;
            uVar17 = 0;
            unaff_x22 = (ulong)uVar16;
            auStack_70[0] = 0;
            uStack_50 = 0;
            unaff_x23 = auStack_70;
            unaff_x21 = (ulong)(uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU));
            goto LAB_1090dc114;
          }
        }
        uVar16 = uVar16 + 1;
        uVar17 = uVar14;
      }
    }
    else if (6 < param_2) {
      uVar12 = 0;
      if ((param_2 == 7) || ((*(byte *)(param_1 + 5) & 0x1f) == 0)) goto LAB_1090dbdd0;
      uVar12 = 0;
      uVar16 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
      if ((uVar16 == 0) || (param_2 < (ulong)uVar16 + 8)) goto LAB_1090dbdd0;
      if ((*(byte *)(param_1 + 8) & 0x1f) != 7) goto LAB_1090dbdcc;
      FUN_1090dc5e0(auStack_70,param_1 + 9,uVar16 - 1);
      func_0x0001090dc9f8(auStack_70[0]);
      uStack_7c = 0;
      uStack_c0 = 0;
      puVar6 = auStack_b8;
      FUN_1090dc6ac(puVar6,8,&uStack_c0);
      if ((int)puVar6 != 0) {
        puVar6 = auStack_b8;
        FUN_1090dc6ac(puVar6,6,&uStack_7c);
        if ((int)puVar6 != 0) {
          iVar5 = (int)auStack_b8;
          func_0x0001090dc9d8();
          if (iVar5 != 0) {
            puVar6 = auStack_b8;
            FUN_1090dc6ac(puVar6,8,&uStack_7c);
            iVar5 = (int)puVar6;
            if ((iVar5 != 0) && (func_0x0001090dc90c(), iVar5 != 0)) {
              uStack_c4 = 1;
              if ((((int)uStack_c0 - 0x53U < 0x39) &&
                  ((1L << ((ulong)((int)uStack_c0 - 0x53U) & 0x3f) & 0x198208808020009U) != 0)) ||
                 (((int)uStack_c0 == 0xf4 || ((int)uStack_c0 == 0x2c)))) {
                puVar6 = auStack_b8;
                func_0x0001090dc70c(puVar6,&uStack_c4);
                uVar16 = uStack_c4;
                if (((int)puVar6 != 0) &&
                   ((((uStack_c4 != 3 || (func_0x0001090dc8d0(), (int)puVar6 != 0)) &&
                     (func_0x0001090dc90c(), (int)puVar6 != 0)) &&
                    ((func_0x0001090dc90c(), (int)puVar6 != 0 &&
                     (func_0x0001090dc8d0(), (int)puVar6 != 0)))))) {
                  func_0x0001090dc918();
                  iVar5 = (int)puVar6;
                  if (iVar5 != 0) {
                    if (uStack_c0._4_4_ != 0) {
                      uVar10 = 0;
                      uVar8 = 0xc;
                      if (uVar16 != 3) {
                        uVar8 = 8;
                      }
                      unaff_x21 = 0x40;
                      unaff_x22 = 0x10;
                      for (; iVar5 = (int)puVar6, uVar10 != uVar8; uVar10 = uVar10 + 1) {
                        func_0x0001090dc918();
                        if ((int)puVar6 == 0) goto LAB_1090dc438;
                        if (uStack_c0._4_4_ != 0) {
                          uVar16 = 0x10;
                          if (5 < uVar10) {
                            uVar16 = 0x40;
                          }
                          uVar18 = 8;
                          uVar9 = 8;
                          for (; unaff_x23 = (undefined8 *)(ulong)uVar16, uVar16 != 0;
                              uVar16 = uVar16 - 1) {
                            bVar2 = uVar9 != 0;
                            uVar9 = 0;
                            if (bVar2) {
                              iStack_98 = 0;
                              func_0x0001090dc97c();
                              if (((int)puVar6 == 0) || (iStack_98 != (char)iStack_98))
                              goto LAB_1090dc438;
                              uVar9 = iStack_98 + uVar18 & 0xff;
                              if (uVar9 != 0) {
                                uVar18 = uVar9;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_1090dc15c;
                  }
                }
              }
              else {
LAB_1090dc15c:
                func_0x0001090dc90c();
                if (iVar5 != 0) {
                  iStack_c8 = 0;
                  puVar6 = auStack_b8;
                  func_0x0001090dc70c(puVar6,&iStack_c8);
                  iVar5 = (int)puVar6;
                  if (iVar5 != 0) {
                    if (iStack_c8 == 1) {
                      func_0x0001090dc8d0();
                      if ((((int)puVar6 != 0) && (func_0x0001090dc97c(), (int)puVar6 != 0)) &&
                         (func_0x0001090dc97c(), (int)puVar6 != 0)) {
                        uStack_50 = uStack_50 & 0xffffffff00000000;
                        func_0x0001090dc928();
                        if ((int)puVar6 != 0) {
                          iVar11 = (int)uStack_50 + 1;
                          do {
                            iVar5 = (int)puVar6;
                            iVar11 = iVar11 + -1;
                            if (iVar11 == 0) goto LAB_1090dc190;
                            func_0x0001090dc97c();
                          } while (((ulong)puVar6 & 1) != 0);
                        }
                      }
                    }
                    else {
                      if (iStack_c8 == 0) {
                        func_0x0001090dc90c();
                        iVar5 = (int)puVar6;
                        if (((ulong)puVar6 & 1) == 0) goto LAB_1090dc438;
                      }
LAB_1090dc190:
                      func_0x0001090dc90c();
                      if (((iVar5 != 0) && (func_0x0001090dc8d0(), iVar5 != 0)) &&
                         ((func_0x0001090dc90c(), iVar5 != 0 && (func_0x0001090dc90c(), iVar5 != 0))
                         )) {
                        iStack_cc = 0;
                        iVar5 = (int)auStack_b8;
                        func_0x0001090dc964();
                        if ((((iVar5 != 0) &&
                             ((iStack_cc != 0 || (func_0x0001090dc8d0(), iVar5 != 0)))) &&
                            ((func_0x0001090dc8d0(), iVar5 != 0 &&
                             (func_0x0001090dc918(), iVar5 != 0)))) &&
                           ((uStack_c0._4_4_ == 0 ||
                            ((((func_0x0001090dc90c(), iVar5 != 0 &&
                               (func_0x0001090dc90c(), iVar5 != 0)) &&
                              (func_0x0001090dc90c(), iVar5 != 0)) &&
                             (func_0x0001090dc90c(), iVar5 != 0)))))) {
                          func_0x0001090dc918();
                          uVar12 = 0;
                          if ((iVar5 == 0) || (uStack_c0._4_4_ == 0)) goto LAB_1090dc43c;
                          uStack_d0 = 0;
                          iStack_98 = 0;
                          func_0x0001090dc8e0();
                          if (iVar5 != 0) {
                            if (iStack_98 == 0) {
LAB_1090dc268:
                              func_0x0001090dc8e0();
                              if (((iVar5 != 0) &&
                                  ((iStack_98 == 0 || (func_0x0001090dc8f0(), iVar5 != 0)))) &&
                                 (func_0x0001090dc8e0(), iVar5 != 0)) {
                                if (iStack_98 != 0) {
                                  func_0x0001090dc9a4();
                                  FUN_1090dc6ac();
                                  if ((((iVar5 == 0) || (func_0x0001090dc8f0(), iVar5 == 0)) ||
                                      (func_0x0001090dc8e0(), iVar5 == 0)) ||
                                     ((iStack_98 != 0 &&
                                      (((func_0x0001090dc96c(), iVar5 == 0 ||
                                        (func_0x0001090dc96c(), iVar5 == 0)) ||
                                       (func_0x0001090dc96c(), iVar5 == 0)))))) goto LAB_1090dc438;
                                }
                                func_0x0001090dc8e0();
                                if ((iVar5 != 0) &&
                                   (((iStack_98 == 0 ||
                                     ((func_0x0001090dc928(), iVar5 != 0 &&
                                      (func_0x0001090dc928(), iVar5 != 0)))) &&
                                    (func_0x0001090dc8e0(), iVar5 != 0)))) {
                                  if (iStack_98 == 0) {
LAB_1090dc328:
                                    uStack_74 = 0;
                                    func_0x0001090dc998();
                                    func_0x0001090dc964();
                                    uVar16 = uStack_74;
                                    if (iVar5 != 0) {
                                      if (uStack_74 != 0) {
                                        iVar5 = (int)auStack_b8;
                                        FUN_1090dc840();
                                        if (iVar5 == 0) goto LAB_1090dc438;
                                      }
                                      iStack_78 = 0;
                                      iVar5 = (int)auStack_b8;
                                      func_0x0001090dc964();
                                      if (iVar5 != 0) {
                                        if (iStack_78 == 0) {
                                          if (uVar16 != 0) goto LAB_1090dc57c;
LAB_1090dc584:
                                          func_0x0001090dc8f0();
                                          if (((((iVar5 != 0) && (func_0x0001090dc8e0(), iVar5 != 0)
                                                ) && (iStack_98 != 0)) &&
                                              ((func_0x0001090dc8f0(), iVar5 != 0 &&
                                               (func_0x0001090dc928(), iVar5 != 0)))) &&
                                             ((func_0x0001090dc928(), iVar5 != 0 &&
                                              ((func_0x0001090dc928(), iVar5 != 0 &&
                                               (func_0x0001090dc928(), iVar5 != 0)))))) {
                                            puVar6 = auStack_b8;
                                            func_0x0001090dc70c(puVar6,&uStack_d0);
                                            uVar12 = uStack_d0;
                                            if ((int)puVar6 != 0) goto LAB_1090dc43c;
                                          }
                                        }
                                        else {
                                          puVar6 = auStack_b8;
                                          FUN_1090dc840();
                                          iVar5 = (int)puVar6;
                                          if (((ulong)puVar6 & 1) != 0) {
LAB_1090dc57c:
                                            func_0x0001090dc8f0();
                                            if (iVar5 != 0) goto LAB_1090dc584;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    func_0x0001090dc9a4();
                                    FUN_1090dc6ac();
                                    if (iVar5 != 0) {
                                      func_0x0001090dc9a4();
                                      FUN_1090dc6ac();
                                      if ((iVar5 != 0) && (func_0x0001090dc8f0(), iVar5 != 0))
                                      goto LAB_1090dc328;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              uStack_74 = 0;
                              func_0x0001090dc934();
                              if (iVar5 != 0) {
                                if (uStack_74 != 0xff) goto LAB_1090dc268;
                                func_0x0001090dc9a4();
                                func_0x0001090dc9b0();
                                if (iVar5 != 0) {
                                  func_0x0001090dc9a4();
                                  func_0x0001090dc9b0();
                                  if (iVar5 != 0) goto LAB_1090dc268;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_1090dc438:
      uVar12 = 0;
LAB_1090dc43c:
      piVar7 = (int *)auStack_70;
      goto LAB_1090dc53c;
    }
  }
LAB_1090dbdcc:
  uVar12 = 0;
LAB_1090dbdd0:
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
LAB_1090dc548:
    if ((int)unaff_x23 == 0) {
      puVar4 = auStack_70;
      for (; unaff_x21 != 0; unaff_x21 = unaff_x21 - 1) {
        *(undefined4 *)puVar4 = *(undefined4 *)((long)auStack_70 + unaff_x22 * 4);
        puVar4 = (undefined8 *)((long)puVar4 + 4);
      }
    }
    uVar12 = *(undefined4 *)((long)auStack_70 + unaff_x22 * 4);
LAB_1090dc538:
    piVar7 = &iStack_98;
LAB_1090dc53c:
    func_0x000107c27914(piVar7);
  }
  return uVar12;
LAB_1090dc114:
  if (unaff_x21 == uVar17) goto LAB_1090dc378;
  uStack_7c = 0;
  iStack_78 = 0;
  puVar6 = auStack_b8;
  func_0x0001090dc964();
  if (((int)puVar6 == 0) || (func_0x0001090dc8d0(), (int)puVar6 == 0)) goto LAB_1090dc534;
  *(char *)((long)unaff_x23 + uVar17) = (char)iStack_78;
  *(char *)((long)&uStack_50 + uVar17) = (char)uStack_7c;
  uVar17 = uVar17 + 1;
  goto LAB_1090dc114;
LAB_1090dc378:
  uVar17 = unaff_x21;
  if ((int)uVar16 < 1) {
LAB_1090dc3a4:
    unaff_x23 = auStack_70;
    for (uVar14 = 0; iVar5 = (int)puVar6, unaff_x21 != uVar14; uVar14 = uVar14 + 1) {
      if (*(char *)((long)unaff_x23 + uVar14) != '\0') {
        func_0x0001090dc934();
        if ((((int)puVar6 == 0) || (func_0x0001090dc944(), (int)puVar6 == 0)) ||
           (func_0x0001090dc944(), (int)puVar6 == 0)) goto LAB_1090dc534;
        func_0x0001090dc998();
        func_0x0001090dc9b0();
        if ((int)puVar6 == 0) goto LAB_1090dc534;
      }
      if ((*(char *)((long)&uStack_50 + uVar14) != '\0') &&
         (func_0x0001090dc934(), (int)puVar6 == 0)) goto LAB_1090dc534;
    }
    func_0x0001090dc900();
    if (iVar5 != 0) {
      uStack_50 = uStack_50 & 0xffffffff00000000;
      func_0x0001090dc928();
      if ((iVar5 != 0) &&
         (((((int)uStack_50 != 3 || (func_0x0001090dc918(), iVar5 != 0)) &&
           (func_0x0001090dc900(), iVar5 != 0)) && (func_0x0001090dc900(), iVar5 != 0)))) {
        puVar6 = auStack_b8;
        func_0x0001090dc964();
        if ((((int)puVar6 != 0) &&
            (((int)uStack_c0 == 0 ||
             (((func_0x0001090dc900(), (int)puVar6 != 0 && (func_0x0001090dc900(), (int)puVar6 != 0)
               ) && ((func_0x0001090dc900(), (int)puVar6 != 0 &&
                     (func_0x0001090dc900(), (int)puVar6 != 0)))))))) &&
           (((func_0x0001090dc900(), (int)puVar6 != 0 && (func_0x0001090dc900(), (int)puVar6 != 0))
            && (func_0x0001090dc900(), (int)puVar6 != 0)))) {
          uStack_74 = 0;
          func_0x0001090dc998();
          func_0x0001090dc964();
          uVar12 = 0;
          if ((int)puVar6 == 0) goto LAB_1090dc538;
          auStack_70[1] = 0;
          auStack_70[0] = 0;
          auStack_70[3] = 0;
          auStack_70[2] = 0;
          unaff_x23 = (undefined8 *)(ulong)uStack_74;
          if (uStack_74 != 0) {
            uVar16 = 0;
          }
          lVar15 = (long)auStack_70 + (long)(int)uVar16 * 4;
          lVar19 = (long)(int)uVar16 + -1;
          do {
            iVar5 = (int)puVar6;
            lVar19 = lVar19 + 1;
            if (lVar13 < lVar19) goto LAB_1090dc548;
            func_0x0001090dc900();
            if (iVar5 == 0) break;
            puVar6 = auStack_b8;
            func_0x0001090dc70c(puVar6,lVar15);
            if ((int)puVar6 == 0) break;
            lVar15 = lVar15 + 4;
            func_0x0001090dc900();
          } while (((ulong)puVar6 & 1) != 0);
        }
      }
    }
  }
  else {
    iVar5 = uVar16 - 1;
    do {
      iVar5 = iVar5 + 1;
      if (7 < iVar5) goto LAB_1090dc3a4;
      func_0x0001090dc998();
      func_0x0001090dc9d8();
    } while (((ulong)puVar6 & 1) != 0);
  }
LAB_1090dc534:
  uVar12 = 0;
  unaff_x21 = uVar17;
  goto LAB_1090dc538;
}



/* Entry: 1090dc5e0; end: 1090dc6ab;  */

void FUN_1090dc5e0(undefined8 *param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31950(param_1,param_3);
  uVar2 = 0;
  while (uVar2 < param_3) {
    if ((((uVar2 + 2 < param_3) && (*(char *)(param_2 + uVar2) == '\0')) &&
        (pcVar1 = (char *)(param_2 + uVar2) + 1, *pcVar1 == '\0')) &&
       (*(char *)(param_2 + uVar2 + 2) == '\x03')) {
      func_0x0001078a8438(param_1);
      func_0x0001078a8438(param_1,pcVar1);
      uVar2 = uVar2 + 3;
    }
    else {
      func_0x0001078a8438(param_1,param_2 + uVar2);
      uVar2 = uVar2 + 1;
    }
  }
  return;
}



/* Entry: 1090dc6ac; end: 1090dc79f;  */

undefined8 FUN_1090dc6ac(undefined8 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uStack_34;
  
  if (0x20 < param_2) {
    return 0;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 == 0) {
      *param_3 = uVar1;
      return 1;
    }
    func_0x0001090dc9b8();
    if ((int)param_1 == 0) break;
    uVar1 = uStack_34 | uVar1 << 1;
    param_2 = param_2 - 1;
  }
  return param_1;
}



/* Entry: 1090dc7a0; end: 1090dc7e7;  */

void FUN_1090dc7a0(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uStack_24;
  
  func_0x0001090dc9e0();
  if (param_1 != 0) {
    uVar1 = uStack_24 + 1 >> 1;
    if ((uStack_24 & 1) == 0) {
      uVar1 = -(uStack_24 >> 1);
    }
    *param_2 = uVar1;
  }
  return;
}



/* Entry: 1090dc7e8; end: 1090dc83f;  */

bool FUN_1090dc7e8(long *param_1,uint *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 < uVar2) {
    *param_2 = *(byte *)(*param_1 + uVar3) >> (ulong)(7U - (int)param_1[3] & 0x1f) & 1;
    iVar1 = (int)param_1[3] + 1;
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 8) {
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = uVar3 + 1;
    }
  }
  return uVar3 < uVar2;
}



/* Entry: 1090dc840; end: 1090dc8cf;  */

void FUN_1090dc840(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auStack_38 [4];
  uint uStack_34;
  
  uVar2 = param_1;
  func_0x0001090dc9e0();
  if ((((int)uVar2 != 0) && (func_0x0001090dc9c8(), (int)uVar2 != 0)) &&
     (func_0x0001090dc9c8(), (int)uVar2 != 0)) {
    uVar3 = 0xffffffff;
    while( true ) {
      iVar1 = (int)uVar2;
      uVar3 = uVar3 + 1;
      if (uStack_34 < uVar3) break;
      func_0x0001090dc9ec();
      if (iVar1 == 0) {
        return;
      }
      func_0x0001090dc9ec();
      if (iVar1 == 0) {
        return;
      }
      uVar2 = param_1;
      func_0x0001090dc964(param_1,param_2,auStack_38);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    func_0x0001090dc954();
    if (((iVar1 != 0) && (func_0x0001090dc954(), iVar1 != 0)) && (func_0x0001090dc954(), iVar1 != 0)
       ) {
      func_0x0001090dc954();
    }
  }
  return;
}



/* Entry: 1090dc8d0; end: 1090dca6b;  */

/* WARNING: Removing unreachable block (ram,0x0001090dc6b4) */

undefined1 * FUN_1090dc8d0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 in_stack_00000054;
  
  puVar1 = &stack0x00000018;
  iVar2 = 1;
  do {
    func_0x0001090dc9b8();
    if ((int)puVar1 == 0) {
      return puVar1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (undefined1 *)0x1;
}



/* Entry: 1090dca6c; end: 1090dcb13;  */

undefined4 FUN_1090dca6c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1090dcaf0;
  lVar1 = *(long *)(lVar2 + 8);
  lVar2 = *(long *)(lVar2 + 0x10);
  uVar4 = param_1[1];
  puVar3 = (undefined4 *)(lVar1 + uVar4 * 8 + 4);
  while( true ) {
    if ((ulong)(lVar2 - lVar1 >> 3) <= uVar4) {
      func_0x0001090dcdac();
      FUN_1090daa3c();
      do {
        func_0x0001090dcd88();
LAB_1090dcaf0:
        func_0x0001090dcdac();
        FUN_1090daa3c();
      } while( true );
    }
    if ((ulong)param_1[2] < (ulong)(uint)puVar3[-1]) break;
    uVar4 = uVar4 + 1;
    param_1[1] = uVar4;
    param_1[2] = 0;
    puVar3 = puVar3 + 2;
  }
  param_1[2] = param_1[2] + 1;
  return *puVar3;
}



/* Entry: 1090dcb14; end: 1090dcb9b;  */

/* WARNING: Possible PIC construction at 0x0001090dcb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001090dcc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001090dcd78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090dcc84) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc88) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd4c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcca4) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd64) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd78) */
/* WARNING: Removing unreachable block (ram,0x0001090dccb4) */
/* WARNING: Removing unreachable block (ram,0x0001090dccc0) */
/* WARNING: Removing unreachable block (ram,0x0001090dcce8) */
/* WARNING: Removing unreachable block (ram,0x0001090dcccc) */
/* WARNING: Removing unreachable block (ram,0x0001090dccf4) */
/* WARNING: Removing unreachable block (ram,0x0001090dccfc) */
/* WARNING: Removing unreachable block (ram,0x0001090dcce4) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd00) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd04) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd0c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd10) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd18) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd20) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd28) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd2c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcb90) */
/* WARNING: Removing unreachable block (ram,0x0001090dcb94) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc54) */
/* WARNING: Removing unreachable block (ram,0x0001090dcbb0) */
/* WARNING: Removing unreachable block (ram,0x0001090dcbc0) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc6c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc80) */
/* WARNING: Removing unreachable block (ram,0x0001090dcbcc) */
/* WARNING: Removing unreachable block (ram,0x0001090dcbec) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc00) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc28) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc18) */
/* WARNING: Removing unreachable block (ram,0x0001090dcbe4) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc2c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd7c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd80) */

uint * FUN_1090dcb14(uint *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
LAB_1090dcb50:
    return (uint *)(ulong)uVar2;
  }
  plVar4 = *(long **)(param_1 + 2);
  if (plVar4 == (long *)0x0) {
    func_0x0001090dcdac();
    FUN_1090daa3c();
  }
  else {
    uVar3 = *(ulong *)(param_1 + 4);
    lVar1 = *plVar4;
    if (uVar3 < (ulong)(plVar4[1] - lVar1 >> 2)) {
      *(ulong *)(param_1 + 4) = uVar3 + 1;
      uVar2 = *(uint *)(lVar1 + uVar3 * 4);
      goto LAB_1090dcb50;
    }
    func_0x0001090dcdac();
    FUN_1090daa3c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)(param_1,&PTR_DAT_110ad9b18,FUN_1090dac40);
  return param_1;
}



/* Entry: 1090dcb9c; end: 1090dcc8f;  */

/* WARNING: Possible PIC construction at 0x0001090dcc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001090dcd78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090dcc84) */
/* WARNING: Removing unreachable block (ram,0x0001090dcc88) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd4c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcca4) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd64) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd78) */
/* WARNING: Removing unreachable block (ram,0x0001090dccb4) */
/* WARNING: Removing unreachable block (ram,0x0001090dccc0) */
/* WARNING: Removing unreachable block (ram,0x0001090dcce8) */
/* WARNING: Removing unreachable block (ram,0x0001090dcccc) */
/* WARNING: Removing unreachable block (ram,0x0001090dccf4) */
/* WARNING: Removing unreachable block (ram,0x0001090dccfc) */
/* WARNING: Removing unreachable block (ram,0x0001090dcce4) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd00) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd04) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd0c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd10) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd18) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd20) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd28) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd2c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd7c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd80) */

void FUN_1090dcb9c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    func_0x0001090dcdac();
    FUN_1090daa3c();
  }
  else {
    uVar6 = param_2[1];
    lVar3 = *(long *)(lVar5 + 8);
    uVar4 = (*(long *)(lVar5 + 0x10) - lVar3) / 0xc;
    if (uVar6 < uVar4) {
      lVar5 = param_2[2];
      uVar7 = param_2[3];
      if (*(uint *)(lVar3 + uVar6 * 0xc + 4) <= uVar7) {
        lVar1 = lVar5 + 1;
        param_2[2] = lVar1;
        param_2[3] = 0;
        uVar2 = uVar6 + 1;
        if ((uVar2 < uVar4) && (lVar5 + 2U == (ulong)*(uint *)(lVar3 + uVar2 * 0xc))) {
          uVar7 = 0;
          param_2[1] = uVar2;
          uVar6 = uVar2;
          lVar5 = lVar1;
        }
        else {
          uVar7 = 0;
          lVar5 = lVar1;
        }
      }
      param_2[3] = uVar7 + 1;
      *param_1 = lVar5;
      param_1[1] = uVar7;
      param_1[2] = *(long *)(lVar3 + uVar6 * 0xc + 4);
      return;
    }
    func_0x0001090dcdac();
    FUN_1090daa3c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)(param_2,&PTR_DAT_110ad9b18,FUN_1090dac40);
  return;
}



/* Entry: 1090dcc90; end: 1090dcd87;  */

/* WARNING: Possible PIC construction at 0x0001090dcd78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090dcd7c) */
/* WARNING: Removing unreachable block (ram,0x0001090dcd80) */

void FUN_1090dcc90(int *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    func_0x0001090dcdac();
    FUN_1090daa3c();
LAB_1090dcd78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_throw_110346bf8)(param_2,&PTR_DAT_110ad9b18,FUN_1090dac40);
    return;
  }
  uVar1 = param_2[3];
  if (*(ulong *)(lVar2 + 0x10) <= uVar1) {
    func_0x0001090dcdac();
    FUN_1090daa3c();
    goto LAB_1090dcd78;
  }
  if (uVar1 < (ulong)((*(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18)) / 0x18)) {
    piVar3 = (int *)(*(long *)(lVar2 + 0x18) + uVar1 * 0x18);
    iVar7 = *piVar3;
    iVar5 = piVar3[1];
    iVar6 = piVar3[2];
    uVar4 = *(undefined8 *)(piVar3 + 4);
    if (iVar7 != 0) goto LAB_1090dcd00;
  }
  else {
    iVar5 = 0;
    iVar6 = 0;
    uVar4 = 0;
  }
  iVar7 = 0;
  if (param_2[1] != 0) {
    iVar7 = *(int *)(param_2[1] + 0x14);
  }
LAB_1090dcd00:
  if (iVar5 == 0) {
    iVar5 = 0;
    if (param_2[1] != 0) {
      iVar5 = *(int *)(param_2[1] + 0x18);
    }
  }
  if ((iVar6 == 0) && ((uVar1 != 0 || (iVar6 = (int)param_2[2], iVar6 == 0)))) {
    iVar6 = 0;
    if (param_2[1] != 0) {
      iVar6 = *(int *)(param_2[1] + 0x1c);
    }
  }
  param_2[3] = uVar1 + 1;
  *param_1 = iVar7;
  param_1[1] = iVar5;
  param_1[2] = iVar6;
  *(undefined8 *)(param_1 + 4) = uVar4;
  return;
}



/* Entry: 1090dcd88; end: 1090dcdbb;  */

void FUN_1090dcd88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 1090dcdbc; end: 1090dd7b3;  */

undefined8 * FUN_1090dcdbc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_DAT_110ad9c00;
  param_1[1] = 1;
  FUN_1090de118(param_1 + 2,*param_2);
  param_1[3] = *(undefined8 *)(param_1[2] + 0x28);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}


