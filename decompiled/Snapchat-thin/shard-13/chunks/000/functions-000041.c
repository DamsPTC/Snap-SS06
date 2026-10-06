/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109e0f6f4; end: 109e0f753;  */

void FUN_109e0f6f4(long param_1)

{
  (**(code **)**(undefined8 **)(param_1 + 0x40))();
  _printf(&UNK_10f6038cb);
                    /* WARNING: Could not recover jumptable at 0x000109e0f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x48))();
  return;
}



/* Entry: 109e0f754; end: 109e0f85f;  */

undefined8 FUN_109e0f754(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    uVar1 = 0;
    FUN_109f65d74(0,&UNK_10f6038cf);
    uStack_48 = uVar1;
  }
  FUN_109f65e1c(&uStack_48,&UNK_10f6038d3);
  param_3 = (long *)*param_3;
  lVar2 = *param_3;
  while (lVar2 != 0) {
    if ((*(byte *)(param_3[3] + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    FUN_109f65e1c(&uStack_48,&UNK_10f6038d8);
    param_3 = (long *)*param_3;
    lVar2 = *param_3;
  }
  FUN_109f65cf8(&uStack_48,&UNK_10f6038e0,1);
  return uStack_48;
}



/* Entry: 109e0f860; end: 109e1223f;  */

long * FUN_109e0f860(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  long *plVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  undefined4 uVar16;
  char *pcVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  long *plVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long **pplStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  
  plVar28 = *(long **)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x89) == '\x01') {
    lStack_98 = plVar28[1];
    pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,(int)plVar28[2]);
    uStack_a8 = *(undefined8 *)((long)plVar28 + 0x1c);
    ppuStack_b0 = *(undefined ***)((long)plVar28 + 0x14);
    func_0x000109e19cc4(plVar28,&ppuStack_110,param_3);
    if (plVar28 == (long *)0x0) {
      puVar20 = &UNK_10f6039e4;
    }
    else {
      iVar15 = 1;
      for (plVar24 = plVar28; *(char *)((long)plVar24 + 4) == '\x13'; plVar24 = (long *)plVar24[6])
      {
        iVar15 = (int)plVar24[2] * iVar15;
      }
      iVar22 = 4;
      if (*(char *)((long)plVar24 + 4) != '\x10') {
        iVar22 = 0;
      }
      bVar21 = *(byte *)((long)param_3 + 0x2f7);
      if ((iVar22 * iVar15 == 0) &&
         (((bVar21 & 1) != 0 || (plVar24 = plVar28, func_0x000109ec6694(), (int)plVar24 == 0)))) {
        uVar23 = *(uint *)((long)plVar28 + 4);
        uVar27 = uVar23 & 0xff;
        if (uVar27 == 0x11) {
          func_0x000109e11e20(param_2,plVar28,&ppuStack_b0,*(undefined8 *)(param_1 + 0x60),param_3);
          return param_2;
        }
        if (uVar27 == 0x13) {
          uVar16 = 0x6e;
          if (*(char *)((long)param_3 + 0x5a1) == '\0') {
            uVar16 = 0x78;
          }
          plVar24 = param_3;
          FUN_109e9ebe4(param_3,uVar16,300,&ppuStack_b0,&UNK_10f603a83);
          if (((ulong)plVar24 & 1) != 0) {
            func_0x000109e11994(param_2,plVar28,&ppuStack_b0,*(undefined8 *)(param_1 + 0x60),param_3
                               );
            return param_2;
          }
          goto LAB_109e104fc;
        }
        if (uVar27 != 0x15) {
          if ((0xb < (uVar23 & 0xfc)) && (((uVar23 & 0xfd) != 0xd || ((bVar21 & 1) == 0))))
          goto LAB_109e104fc;
          uVar27 = 0;
          uVar23 = (uint)*(byte *)((long)plVar28 + 0xe) * (uint)*(byte *)((long)plVar28 + 0xd);
          uStack_d8 = 0;
          uStack_d0 = 0;
          plVar24 = *(long **)(param_1 + 0x60) + -5;
          puStack_e0 = &uStack_d0;
          ppuStack_c8 = &puStack_e0;
          if ((**(long **)(param_1 + 0x60) == 0) || (plVar24 == (long *)0x0)) {
LAB_109e0fe6c:
            if ((uVar27 < uVar23) && (uVar27 != 1)) {
              if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
                FUN_109eca058();
              }
              puVar20 = &UNK_10f603b5a;
              goto LAB_109e104f0;
            }
            bVar21 = *(byte *)((long)plVar28 + 0xe);
LAB_109e106e0:
            if (bVar21 < 2) goto LAB_109e11408;
LAB_109e106ec:
            if (2 < *(byte *)((long)plVar28 + 4) - 2) goto LAB_109e11408;
          }
          else {
            uVar27 = 0;
            iVar22 = 0;
            iVar15 = 0;
            do {
              plVar11 = plVar24;
              (**(code **)(*plVar24 + 8))(plVar24,param_2,param_3);
              if (uVar23 <= uVar27) {
                if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                puVar20 = &UNK_10f603aa0;
                goto LAB_109e104f0;
              }
              lVar18 = plVar11[4];
              uVar1 = *(uint *)(lVar18 + 4);
              if ((0xb < (uVar1 & 0xfc)) &&
                 (((uVar1 & 0xfd) != 0xd || ((*(byte *)((long)param_3 + 0x2f7) & 1) == 0)))) {
                if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                puVar20 = &UNK_10f603ac8;
                goto LAB_109e104f0;
              }
              bVar21 = *(byte *)(lVar18 + 0xe);
              bVar3 = (uVar1 & 0xff) - 2 < 3;
              iVar15 = iVar15 + ((1 < bVar21 && bVar3) ^ 1);
              ppuVar6 = (undefined8 **)(plVar11 + 1);
              *ppuVar6 = &uStack_d0;
              if (1 < bVar21 && bVar3) {
                iVar22 = iVar22 + 1;
              }
              plVar11[2] = (long)ppuStack_c8;
              *ppuStack_c8 = ppuVar6;
              uVar27 = uVar27 + (uint)*(byte *)(lVar18 + 0xd) * (uint)bVar21;
              plVar11 = plVar24 + 5;
              plVar24 = (long *)*plVar11 + -5;
              ppuStack_c8 = ppuVar6;
            } while (*(long *)*plVar11 != 0 && plVar24 != (long *)0x0);
            if (iVar22 == 0) goto LAB_109e0fe6c;
            bVar21 = *(byte *)((long)plVar28 + 0xe);
            if ((1 < bVar21) && (*(byte *)((long)plVar28 + 4) - 2 < 3)) {
              if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
                FUN_109eca058();
              }
              plVar24 = param_3;
              FUN_109e9ebe4(param_3,0x78,100,&ppuStack_b0,&UNK_10f603afb);
              if ((int)plVar24 == 0) goto LAB_109e104fc;
              bVar21 = *(byte *)((long)plVar28 + 0xe);
            }
            if ((uint)(iVar22 + iVar15) < 2) goto LAB_109e106e0;
            if (1 < bVar21) {
              if (*(byte *)((long)plVar28 + 4) - 2 < 3) {
                if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
                  FUN_109eca058();
                }
                puVar20 = &UNK_10f603b1f;
                goto LAB_109e104f0;
              }
              goto LAB_109e106ec;
            }
LAB_109e11408:
            plVar24 = (long *)*puStack_e0;
            if (plVar24 == (long *)0x0) goto LAB_109e118a8;
            plVar11 = (long *)0x0;
            if (*plVar24 != 0) {
              plVar11 = plVar24 + -1;
            }
            plVar24 = puStack_e0 + -1;
            while( true ) {
              plVar5 = plVar11;
              if ((1 < *(byte *)(plVar24[4] + 0xe)) && (*(byte *)(plVar24[4] + 4) - 2 < 3)) {
                plVar11 = param_3;
                FUN_109f658b0(param_3,0x90);
                if (plVar11 != (long *)0x0) {
                  plVar11[0xf] = 0;
                  plVar11[0xe] = 0;
                  plVar11[0x11] = 0;
                  plVar11[0x10] = 0;
                  plVar11[0xb] = 0;
                  plVar11[10] = 0;
                  plVar11[0xd] = 0;
                  plVar11[0xc] = 0;
                  plVar11[7] = 0;
                  plVar11[6] = 0;
                  plVar11[9] = 0;
                  plVar11[8] = 0;
                  plVar11[3] = 0;
                  plVar11[2] = 0;
                  plVar11[5] = 0;
                  plVar11[4] = 0;
                  plVar11[1] = 0;
                  *plVar11 = 0;
                }
                FUN_109eaba7c(plVar11,plVar24[4],&UNK_10f603b7f,0xb);
                plVar11[1] = (long)(param_2 + 2);
                puVar9 = (undefined8 *)param_2[3];
                plVar19 = (long *)0x0;
                if (plVar11 != (long *)0x0) {
                  plVar19 = plVar11 + 1;
                }
                plVar11[2] = (long)puVar9;
                *puVar9 = plVar19;
                param_2[3] = (long)plVar19;
                plVar19 = param_3;
                FUN_109f658b0(param_3,0x38);
                if (plVar19 != (long *)0x0) {
                  plVar19[6] = 0;
                  plVar19[3] = 0;
                  plVar19[2] = 0;
                  plVar19[5] = 0;
                  plVar19[4] = 0;
                  plVar19[1] = 0;
                  *plVar19 = 0;
                }
                plVar26 = param_3;
                FUN_109f658b0(param_3,0x30);
                if (plVar26 != (long *)0x0) {
                  plVar26[3] = 0;
                  plVar26[2] = 0;
                  plVar26[5] = 0;
                  plVar26[4] = 0;
                  plVar26[1] = 0;
                  *plVar26 = 0;
                }
                plVar26[1] = 0;
                plVar26[2] = 0;
                *(undefined4 *)(plVar26 + 3) = 2;
                *plVar26 = (long)&PTR_DAT_110b64048;
                plVar26[5] = (long)plVar11;
                plVar26[4] = plVar11[4];
                func_0x000109ea9180(plVar19,plVar26,plVar24);
                plVar19[1] = (long)(param_2 + 2);
                plVar26 = (long *)0x0;
                if (plVar19 != (long *)0x0) {
                  plVar26 = plVar19 + 1;
                }
                puVar9 = (undefined8 *)param_2[3];
                plVar19[2] = (long)puVar9;
                *puVar9 = plVar26;
                param_2[3] = (long)plVar26;
                plVar19 = plVar24;
                (**(code **)(*plVar24 + 0x30))(plVar24,param_3,0);
                plVar11[0xe] = (long)plVar19;
                if (*(char *)(plVar24[4] + 0xe) == '\0') {
                  plVar19 = (long *)plVar24[2];
                }
                else {
                  uVar27 = 0;
                  do {
                    plVar26 = param_3;
                    FUN_109f658b0(param_3,0x38);
                    if (plVar26 != (long *)0x0) {
                      plVar26[6] = 0;
                      plVar26[3] = 0;
                      plVar26[2] = 0;
                      plVar26[5] = 0;
                      plVar26[4] = 0;
                      plVar26[1] = 0;
                      *plVar26 = 0;
                    }
                    plVar19 = param_3;
                    FUN_109f658b0(param_3,0xb0);
                    if (plVar19 != (long *)0x0) {
                      plVar19[0x13] = 0;
                      plVar19[0x12] = 0;
                      plVar19[0x15] = 0;
                      plVar19[0x14] = 0;
                      plVar19[0xf] = 0;
                      plVar19[0xe] = 0;
                      plVar19[0x11] = 0;
                      plVar19[0x10] = 0;
                      plVar19[0xb] = 0;
                      plVar19[10] = 0;
                      plVar19[0xd] = 0;
                      plVar19[0xc] = 0;
                      plVar19[7] = 0;
                      plVar19[6] = 0;
                      plVar19[9] = 0;
                      plVar19[8] = 0;
                      plVar19[3] = 0;
                      plVar19[2] = 0;
                      plVar19[5] = 0;
                      plVar19[4] = 0;
                      plVar19[1] = 0;
                      *plVar19 = 0;
                    }
                    func_0x000109ea9960(plVar19,uVar27,1);
                    func_0x000109eab3d8(plVar26,plVar11,plVar19);
                    plVar19 = plVar26 + 1;
                    *plVar19 = (long)(plVar24 + 1);
                    plVar7 = (long *)0x0;
                    if (plVar26 != (long *)0x0) {
                      plVar7 = plVar19;
                    }
                    puVar9 = (undefined8 *)plVar24[2];
                    plVar26[2] = (long)puVar9;
                    *puVar9 = plVar7;
                    plVar24[2] = (long)plVar7;
                    uVar27 = uVar27 + 1;
                  } while (uVar27 < *(byte *)(plVar24[4] + 0xe));
                }
                lVar18 = plVar24[1];
                *(long **)(lVar18 + 8) = plVar19;
                *plVar19 = lVar18;
                plVar24[1] = 0;
                plVar24[2] = 0;
              }
              if (plVar5 == (long *)0x0) break;
              plVar11 = (long *)0x0;
              plVar24 = plVar5;
              if (*(long *)plVar5[1] != 0) {
                plVar11 = (long *)plVar5[1] + -1;
              }
            }
          }
          plVar24 = (long *)*puStack_e0;
          if (plVar24 != (long *)0x0) {
            plVar11 = (long *)0x0;
            if (*plVar24 != 0) {
              plVar11 = plVar24 + -1;
            }
            bVar3 = true;
            plVar24 = puStack_e0 + -1;
            while( true ) {
              plVar5 = plVar11;
              puVar20 = (undefined *)plVar24[4];
              if ((puVar20[4] | 2) == 0xf) {
                plVar11 = (long *)&DAT_10e05dae8;
                if (plVar28 != (long *)&DAT_10e05dae8) {
                  FUN_109e9ed98(&ppuStack_b0,param_3,&UNK_10f603b8a);
                }
              }
              else {
                plVar11 = (long *)(ulong)*(byte *)((long)plVar28 + 4);
                if ((*(byte *)((long)plVar28 + 4) | 2) == 0xf) {
                  plVar11 = plVar28;
                  if (puVar20 != &DAT_10e05dae8) {
                    FUN_109e9ed98(&ppuStack_b0,param_3,&UNK_10f603bde);
                  }
                }
                else {
                  func_0x000109ec6c94(plVar11,puVar20[0xd],puVar20[0xe],0,0,0);
                }
              }
              plVar19 = plVar24;
              FUN_109e12240(plVar24,plVar11);
              if (((plVar19 != (long *)0x0) && ((int)plVar19[3] == 4)) && ((int)plVar19[5] == 0x6c))
              {
                plVar26 = param_3;
                FUN_109f658b0(param_3,0x90);
                if (plVar26 != (long *)0x0) {
                  plVar26[0xf] = 0;
                  plVar26[0xe] = 0;
                  plVar26[0x11] = 0;
                  plVar26[0x10] = 0;
                  plVar26[0xb] = 0;
                  plVar26[10] = 0;
                  plVar26[0xd] = 0;
                  plVar26[0xc] = 0;
                  plVar26[7] = 0;
                  plVar26[6] = 0;
                  plVar26[9] = 0;
                  plVar26[8] = 0;
                  plVar26[3] = 0;
                  plVar26[2] = 0;
                  plVar26[5] = 0;
                  plVar26[4] = 0;
                  plVar26[1] = 0;
                  *plVar26 = 0;
                }
                FUN_109eaba7c(plVar26,plVar11,&UNK_10f603c34,0xb);
                plVar26[1] = (long)(param_2 + 2);
                puVar9 = (undefined8 *)param_2[3];
                plVar11 = (long *)0x0;
                if (plVar26 != (long *)0x0) {
                  plVar11 = plVar26 + 1;
                }
                plVar26[2] = (long)puVar9;
                *puVar9 = plVar11;
                param_2[3] = (long)plVar11;
                plVar19 = param_3;
                FUN_109f658b0(param_3,0x30);
                if (plVar19 != (long *)0x0) {
                  plVar19[3] = 0;
                  plVar19[2] = 0;
                  plVar19[5] = 0;
                  plVar19[4] = 0;
                  plVar19[1] = 0;
                  *plVar19 = 0;
                }
                plVar19[1] = 0;
                plVar19[2] = 0;
                *(undefined4 *)(plVar19 + 3) = 2;
                *plVar19 = (long)&PTR_DAT_110b64048;
                plVar19[5] = (long)plVar26;
                plVar19[4] = plVar26[4];
                plVar11 = param_3;
                FUN_109f658b0(param_3,0x38);
                if (plVar11 != (long *)0x0) {
                  plVar11[6] = 0;
                  plVar11[3] = 0;
                  plVar11[2] = 0;
                  plVar11[5] = 0;
                  plVar11[4] = 0;
                  plVar11[1] = 0;
                  *plVar11 = 0;
                }
                func_0x000109ea9180();
                plVar11[1] = (long)(param_2 + 2);
                puVar9 = (undefined8 *)param_2[3];
                plVar26 = (long *)0x0;
                if (plVar11 != (long *)0x0) {
                  plVar26 = plVar11 + 1;
                }
                plVar11[2] = (long)puVar9;
                *puVar9 = plVar26;
                param_2[3] = (long)plVar26;
              }
              plVar26 = plVar19;
              (**(code **)(*plVar19 + 0x30))(plVar19,param_3,0);
              plVar11 = plVar26;
              if (plVar26 == (long *)0x0) {
                plVar11 = plVar19;
              }
              if (plVar11 != plVar24) {
                puVar9 = (undefined8 *)plVar24[2];
                lVar18 = plVar24[1];
                plVar19 = plVar11 + 1;
                plVar11[2] = plVar24[2];
                *plVar19 = lVar18;
                *puVar9 = plVar19;
                *(long **)(plVar24[1] + 8) = plVar19;
              }
              bVar3 = (bool)(plVar26 != (long *)0x0 & bVar3);
              if (plVar5 == (long *)0x0) break;
              plVar11 = (long *)0x0;
              plVar24 = plVar5;
              if (*(long *)plVar5[1] != 0) {
                plVar11 = (long *)plVar5[1] + -1;
              }
            }
            if (!bVar3) {
              if (*(char *)((long)plVar28 + 0xd) != '\0') {
                if (*(char *)((long)plVar28 + 0xd) == '\x01') {
                  if ((*plVar28 & 0xf000000000) == 0) {
                    plVar28 = (long *)0x0;
                    if (puStack_e0 != (undefined8 *)0x0) {
                      plVar28 = puStack_e0 + -1;
                    }
                    FUN_109e12a98(plVar28);
                    return plVar28;
                  }
                }
                else if ((*(char *)((long)plVar28 + 0xe) == '\x01') &&
                        ((*(uint *)((long)plVar28 + 4) & 0xfc) < 0xc)) {
                  FUN_109e12cc0(plVar28,param_2,&puStack_e0,param_3);
                  return plVar28;
                }
              }
              FUN_109e13310(plVar28,param_2,&puStack_e0,param_3);
              return plVar28;
            }
          }
LAB_109e118a8:
          FUN_109f658b0(param_3,0xb0);
          if (param_3 != (long *)0x0) {
            param_3[0x13] = 0;
            param_3[0x12] = 0;
            param_3[0x15] = 0;
            param_3[0x14] = 0;
            param_3[0xf] = 0;
            param_3[0xe] = 0;
            param_3[0x11] = 0;
            param_3[0x10] = 0;
            param_3[0xb] = 0;
            param_3[10] = 0;
            param_3[0xd] = 0;
            param_3[0xc] = 0;
            param_3[7] = 0;
            param_3[6] = 0;
            param_3[9] = 0;
            param_3[8] = 0;
            param_3[3] = 0;
            param_3[2] = 0;
            param_3[5] = 0;
            param_3[4] = 0;
            param_3[1] = 0;
            *param_3 = 0;
          }
          FUN_109ea9d6c(param_3,plVar28,&puStack_e0);
          return param_3;
        }
        if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        puVar20 = &UNK_10f603a56;
        pppuVar8 = &ppuStack_b0;
LAB_109e10598:
        FUN_109e9ed98(pppuVar8,param_3,puVar20);
LAB_109e107e4:
        puVar9 = (undefined8 *)0x60;
        _malloc();
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        *puVar9 = param_3 + -6;
        lVar18 = param_3[-5];
        puVar9[3] = lVar18;
        puVar9[4] = 0;
        param_3[-5] = (long)puVar9;
        if (lVar18 != 0) {
          *(undefined8 **)(lVar18 + 0x10) = puVar9;
        }
        param_3 = puVar9 + 6;
        *param_3 = (long)&PTR_DAT_110b63eb8;
        puVar20 = &UNK_10e05d730;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[7] = 0;
        *(undefined4 *)(puVar9 + 9) = 0x16;
        goto LAB_109e1053c;
      }
      if ((*(byte *)((long)plVar28 + 0xc) >> 1 & 1) == 0) {
        FUN_109eca058();
      }
      puVar20 = &UNK_10f603a38;
    }
    goto LAB_109e104f0;
  }
  if ((int)plVar28[7] == 0x27) {
    lStack_98 = *(long *)(param_1 + 8);
    pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,*(undefined4 *)(param_1 + 0x10));
    uStack_a8 = *(undefined8 *)(param_1 + 0x1c);
    ppuStack_b0 = *(undefined ***)(param_1 + 0x14);
    FUN_109e9ebe4(param_3,0x78,300,&ppuStack_b0,&UNK_10f6038e2);
    lVar18 = plVar28[0xb];
    (**(code **)(*(long *)plVar28[8] + 0x18))((long *)plVar28[8],1);
    plVar28 = (long *)plVar28[8];
    (**(code **)(*plVar28 + 8))(plVar28,param_2,param_3);
    _strcmp(lVar18,&DAT_10f355a53);
    if ((int)lVar18 == 0) {
      if (*(long *)(param_1 + 0x60) == param_1 + 0x70) {
        lVar18 = plVar28[4];
        bVar21 = *(byte *)(lVar18 + 4);
        if (bVar21 == 0x13) {
          if (*(int *)(lVar18 + 0x10) != 0) {
            FUN_109f658b0(param_3,0xb0);
            if (param_3 != (long *)0x0) {
              param_3[0x13] = 0;
              param_3[0x12] = 0;
              param_3[0x15] = 0;
              param_3[0x14] = 0;
              param_3[0xf] = 0;
              param_3[0xe] = 0;
              param_3[0x11] = 0;
              param_3[0x10] = 0;
              param_3[0xb] = 0;
              param_3[10] = 0;
              param_3[0xd] = 0;
              param_3[0xc] = 0;
              param_3[7] = 0;
              param_3[6] = 0;
              param_3[9] = 0;
              param_3[8] = 0;
              param_3[3] = 0;
              param_3[2] = 0;
              param_3[5] = 0;
              param_3[4] = 0;
              param_3[1] = 0;
              *param_3 = 0;
            }
            if (*(char *)(plVar28[4] + 4) == '\x13') {
              uVar27 = *(uint *)(plVar28[4] + 0x10);
            }
            else {
              uVar27 = 0xffffffff;
            }
            goto LAB_109e106d0;
          }
          if ((*(byte *)((long)param_3 + 0x337) & 1) != 0) {
LAB_109e105d4:
            plVar24 = plVar28;
            (**(code **)(*plVar28 + 0x40))();
            if (((*(uint *)(plVar24 + 8) & 0x7800) == 0x1000) && (plVar24[0x11] != 0)) {
              FUN_109f658b0(param_3,0x58);
              if (param_3 != (long *)0x0) {
                param_3[10] = 0;
                param_3[7] = 0;
                param_3[6] = 0;
                param_3[9] = 0;
                param_3[8] = 0;
                param_3[3] = 0;
                param_3[2] = 0;
                param_3[5] = 0;
                param_3[4] = 0;
                param_3[1] = 0;
                *param_3 = 0;
              }
              uVar12 = 0x75;
            }
            else {
              FUN_109f658b0(param_3,0x58);
              if (param_3 != (long *)0x0) {
                param_3[10] = 0;
                param_3[7] = 0;
                param_3[6] = 0;
                param_3[9] = 0;
                param_3[8] = 0;
                param_3[3] = 0;
                param_3[2] = 0;
                param_3[5] = 0;
                param_3[4] = 0;
                param_3[1] = 0;
                *param_3 = 0;
              }
              uVar12 = 0x76;
            }
            func_0x000109ea924c(param_3,uVar12,plVar28);
            return param_3;
          }
          uVar27 = *(uint *)((long)param_3 + 0xec);
          if (uVar27 == 0) {
            uVar27 = *(uint *)(param_3 + 0x1d);
          }
          uVar23 = 0x135;
          if (*(char *)((long)param_3 + 0xe4) == '\0') {
            uVar23 = 0x1ad;
          }
          if (uVar23 < uVar27) goto LAB_109e105d4;
          puVar20 = &UNK_10f603919;
        }
        else {
          bVar13 = *(byte *)(lVar18 + 0xd);
          if ((1 < bVar13 && *(byte *)(lVar18 + 0xe) == 1) && (bVar21 & 0xfc) < 0xc) {
            if ((*(byte *)((long)param_3 + 0x341) & 1) == 0) {
              uVar27 = *(uint *)((long)param_3 + 0xec);
              if (uVar27 == 0) {
                uVar27 = *(uint *)(param_3 + 0x1d);
              }
              if ((uVar27 < 0x1a4) || ((*(byte *)((long)param_3 + 0xe4) & 1) != 0)) {
LAB_109e1083c:
                puVar20 = &UNK_10f60396d;
                goto LAB_109e104f0;
              }
            }
            plVar11 = (long *)0xe0;
            _malloc();
            plVar24 = plVar11;
            if (plVar11 != (long *)0x0) {
              plVar11[1] = 0;
              *plVar11 = 0;
              plVar11[3] = 0;
              plVar11[2] = 0;
              *plVar11 = (long)(param_3 + -6);
              lVar18 = param_3[-5];
              plVar11[3] = lVar18;
              plVar11[4] = 0;
              param_3[-5] = (long)plVar11;
              if (lVar18 != 0) {
                *(long **)(lVar18 + 0x10) = plVar11;
              }
              plVar24 = plVar11 + 6;
              plVar11[7] = 0;
              *plVar24 = 0;
              plVar11[0x19] = 0;
              plVar11[0x18] = 0;
              plVar11[0x1b] = 0;
              plVar11[0x1a] = 0;
              plVar11[0x15] = 0;
              plVar11[0x14] = 0;
              plVar11[0x17] = 0;
              plVar11[0x16] = 0;
              plVar11[0x11] = 0;
              plVar11[0x10] = 0;
              plVar11[0x13] = 0;
              plVar11[0x12] = 0;
              plVar11[0xd] = 0;
              plVar11[0xc] = 0;
              plVar11[0xf] = 0;
              plVar11[0xe] = 0;
              plVar11[9] = 0;
              plVar11[8] = 0;
              plVar11[0xb] = 0;
              plVar11[10] = 0;
              bVar13 = *(byte *)(plVar28[4] + 0xd);
            }
            uVar27 = (uint)bVar13;
            param_3 = plVar24;
LAB_109e106d0:
            func_0x000109ea9960(param_3,uVar27,1);
            return param_3;
          }
          if (1 < *(byte *)(lVar18 + 0xe) && bVar21 - 2 < 3) {
            if ((*(byte *)((long)param_3 + 0x341) & 1) == 0) {
              uVar27 = *(uint *)((long)param_3 + 0xec);
              if (uVar27 == 0) {
                uVar27 = *(uint *)(param_3 + 0x1d);
              }
              if ((uVar27 < 0x1a4) || ((*(byte *)((long)param_3 + 0xe4) & 1) != 0))
              goto LAB_109e1083c;
            }
            FUN_109f658b0(param_3,0xb0);
            if (param_3 != (long *)0x0) {
              param_3[0x13] = 0;
              param_3[0x12] = 0;
              param_3[0x15] = 0;
              param_3[0x14] = 0;
              param_3[0xf] = 0;
              param_3[0xe] = 0;
              param_3[0x11] = 0;
              param_3[0x10] = 0;
              param_3[0xb] = 0;
              param_3[10] = 0;
              param_3[0xd] = 0;
              param_3[0xc] = 0;
              param_3[7] = 0;
              param_3[6] = 0;
              param_3[9] = 0;
              param_3[8] = 0;
              param_3[3] = 0;
              param_3[2] = 0;
              param_3[5] = 0;
              param_3[4] = 0;
              param_3[1] = 0;
              *param_3 = 0;
            }
            uVar27 = (uint)*(byte *)(plVar28[4] + 0xe);
            goto LAB_109e106d0;
          }
          puVar20 = &UNK_10f6039b6;
        }
      }
      else {
        puVar20 = &UNK_10f6038f8;
      }
    }
    else {
      puVar20 = &UNK_10f6039cf;
    }
    goto LAB_109e104f0;
  }
  plStack_e8 = (long *)0x0;
  lStack_f8 = *(long *)(param_1 + 8);
  uStack_100 = *(undefined4 *)(param_1 + 0x10);
  uStack_108 = *(undefined8 *)(param_1 + 0x1c);
  ppuStack_110 = *(undefined ***)(param_1 + 0x14);
  pplStack_118 = &plStack_130;
  uStack_128 = 0;
  lStack_120 = 0;
  lStack_138 = 0;
  plStack_130 = &lStack_120;
  FUN_109e14284(param_2,&plStack_130,*(undefined8 *)(param_1 + 0x60),param_3);
  if ((int)plVar28[7] == 0x2b) {
    plVar24 = (long *)0x0;
    plVar28 = (long *)plVar28[0xb];
joined_r0x000109e0fa58:
    plStack_e8 = plVar28;
    if (plVar28 != (long *)0x0) {
      lVar18 = *(long *)(param_3[9] + 8);
      FUN_109f61800(lVar18,plVar28);
      if (lVar18 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = *(long **)(lVar18 + 8);
      }
      lVar18 = *(long *)(param_3[9] + 8);
      FUN_109f61800(lVar18,plVar28);
      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) {
        if ((*(byte *)param_3[9] & 1) == 0) {
          plVar5 = *(long **)((byte *)param_3[9] + 8);
          FUN_109f61800(plVar5,plVar28);
          if ((plVar5 != (long *)0x0) && (*plVar5 != 0)) goto LAB_109e0feec;
        }
        if (plVar11 == (long *)0x0) {
LAB_109e0fed0:
          plVar5 = param_3;
          FUN_109e26ce0(param_3,plVar28,&plStack_130);
          if (plVar5 != (long *)0x0) {
            plVar11 = plVar5;
          }
        }
        else {
          bVar21 = *(byte *)((long)param_3 + 0xe4);
          if ((bVar21 & 1) == 0) {
            plVar19 = *(long **)plVar11[5];
            plVar5 = (long *)plVar11[5];
            if (plVar19 == (long *)0x0) goto LAB_109e0fdb0;
            do {
              bVar3 = plVar5[0xd] != 0;
              if (plVar5[0xd] == 0) break;
              plVar26 = (long *)*plVar19;
              plVar5 = plVar19;
              plVar19 = plVar26;
            } while (plVar26 != (long *)0x0);
          }
          else {
LAB_109e0fdb0:
            bVar3 = true;
          }
          ppuStack_b0 = (undefined **)((ulong)ppuStack_b0 & 0xffffffffffffff00);
          if ((*(byte *)((long)param_3 + 0x3cf) & 1) == 0) {
            uVar27 = *(uint *)((long)param_3 + 0xec);
            if (uVar27 == 0) {
              uVar27 = *(uint *)(param_3 + 0x1d);
            }
            uVar23 = 0x6d;
            if ((*(byte *)((long)param_3 + 0x5a1) & 1) == 0) {
              uVar23 = 0x77;
            }
            bVar13 = uVar23 < uVar27 & (bVar21 ^ 0xff);
          }
          else {
            bVar13 = 1;
          }
          if (((*(byte *)((long)param_3 + 0x315) & 1) == 0) &&
             (((*(byte *)((long)param_3 + 0x3ef) | *(byte *)((long)param_3 + 0x3cf)) & 1) == 0)) {
            uVar27 = *(uint *)((long)param_3 + 0xec);
            if (uVar27 == 0) {
              uVar27 = *(uint *)(param_3 + 0x1d);
            }
            bVar14 = 0;
            if (399 < uVar27) {
              bVar14 = bVar21 ^ 1;
            }
          }
          else {
            bVar14 = 1;
          }
          FUN_109eb35f0(plVar11,param_3,&plStack_130,bVar13,bVar14,bVar3,&ppuStack_b0);
          if ((bVar3 != false) && (((ulong)ppuStack_b0 & 1) == 0)) goto LAB_109e0fed0;
        }
        if (plVar11 == (long *)0x0) goto LAB_109e0feec;
      }
      else {
LAB_109e0feec:
        plVar11 = plVar28;
        FUN_109e14514(plVar28,&plStack_130,param_3,&lStack_138);
        lVar18 = lRam0000000113834718;
        if (plVar11 == (long *)0x0) {
          plVar24 = param_3;
          FUN_109e14ef8(param_3,*(undefined8 *)(param_3[9] + 8),plVar28);
          if ((((ulong)plVar24 & 1) == 0) &&
             (((char)param_3[0x82] != '\x01' ||
              (plVar24 = param_3,
              FUN_109e14ef8(param_3,*(undefined8 *)(*(long *)(lVar18 + 200) + 8),plVar28),
              ((ulong)plVar24 & 1) == 0)))) {
            puVar20 = &UNK_10f603fe0;
            pppuVar8 = &ppuStack_110;
            goto LAB_109e10598;
          }
          lVar30 = 0;
          FUN_109e0f754(0,plVar28,&plStack_130);
          FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603ffb);
          if (lVar30 != 0) {
            FUN_109f65aa4(lVar30 + -0x30);
            FUN_109f65ae0(lVar30 + -0x30);
          }
          lVar30 = *(long *)(param_3[9] + 8);
          FUN_109f61800(lVar30,plVar28);
          if (lVar30 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(lVar30 + 8);
          }
          FUN_109e14f68(param_3,&ppuStack_110,uVar12);
          if ((char)param_3[0x82] == '\x01') {
            lVar18 = *(long *)(*(long *)(lVar18 + 200) + 8);
            FUN_109f61800(lVar18,plVar28);
            if (lVar18 == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(lVar18 + 8);
            }
            FUN_109e14f68(param_3,&ppuStack_110,uVar12);
          }
          goto LAB_109e107e4;
        }
      }
      plVar28 = (long *)plVar11[5];
      if (*plVar28 != 0) {
        plVar19 = *(long **)(param_1 + 0x60);
        plVar5 = plStack_130;
LAB_109e0ff24:
        lStack_98 = plVar19[-4];
        pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,*(undefined4 *)(plVar19 + -3));
        uStack_a8 = *(undefined8 *)((long)plVar19 + -0xc);
        ppuStack_b0 = *(undefined ***)((long)plVar19 + -0x14);
        uVar27 = *(uint *)(plVar28 + 7);
        if (((uVar27 & 0x7800) == 0x4800) && ((int)plVar5[2] != 3)) {
          puVar20 = &UNK_10f604038;
          goto LAB_109e104f0;
        }
        plVar26 = plVar5 + -1;
        if ((*(ushort *)((long)plVar28 + 0x3c) >> 1 & 1) == 0) goto LAB_109e0ffec;
        plVar7 = plVar26;
        if ((int)plVar5[2] == 5) {
          uVar27 = *(uint *)((long)param_3 + 0xec);
          if (uVar27 == 0) {
            uVar27 = *(uint *)(param_3 + 0x1d);
          }
          if ((uVar27 < 0x1b8) || (*(char *)((long)param_3 + 0xe4) != '\0')) {
            puVar20 = &UNK_10f604068;
            goto LAB_109e104f0;
          }
          plVar7 = (long *)plVar5[4];
        }
        do {
          iVar15 = (int)plVar7[3];
          if (iVar15 != 0) {
            if (iVar15 != 1) goto code_r0x000109e0ffb4;
            if ((*(byte *)((long)param_3 + 0xe4) & 1) != 0) goto LAB_109e1038c;
          }
          plVar7 = (long *)plVar7[5];
        } while( true );
      }
LAB_109e101c4:
      uVar29 = *(undefined8 *)(plVar11[0xf] + 0x20);
      uVar12 = uVar29;
      _strcmp(uVar29,&UNK_10f491651);
      if (((((((int)uVar12 == 0) ||
             (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604282), (int)uVar12 == 0)) ||
            (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f60428c), (int)uVar12 == 0)) ||
           ((uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604296), (int)uVar12 == 0 ||
            (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f6042a0), (int)uVar12 == 0)))) ||
          (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f6042a9), (int)uVar12 == 0)) ||
         ((uVar12 = uVar29, _strcmp(uVar29,&UNK_10f6042b3), (int)uVar12 == 0 ||
          (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f6042c2), (int)uVar12 == 0)))) {
        lVar18 = *(long *)(param_1 + 0x60);
        lStack_98 = *(long *)(lVar18 + -0x20);
        pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,*(undefined4 *)(lVar18 + -0x18));
        uStack_a8 = *(undefined8 *)(lVar18 + -0xc);
        ppuStack_b0 = *(undefined ***)(lVar18 + -0x14);
        plVar28 = plStack_130 + -1;
        (**(code **)(*plVar28 + 0x40))();
        if ((plVar28 == (long *)0x0) ||
           (((*(uint *)(plVar28 + 8) & 0x7800) != 0x1800 &&
            (((*(uint *)(plVar28 + 8) & 0x7800) != 0x1000 || (plVar28[0x11] == 0)))))) {
          puVar20 = &UNK_10f6042d1;
LAB_109e104f0:
          pppuVar8 = &ppuStack_b0;
          goto LAB_109e104f4;
        }
      }
      else {
        uVar12 = uVar29;
        _strcmp(uVar29,&UNK_10f604317);
        if (((((((int)uVar12 == 0) ||
               (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604326), (int)uVar12 == 0)) ||
              (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604335), (int)uVar12 == 0)) ||
             (((uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604344), (int)uVar12 == 0 ||
               (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604353), (int)uVar12 == 0)) ||
              ((uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604361), (int)uVar12 == 0 ||
               ((uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604370), (int)uVar12 == 0 ||
                (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604384), (int)uVar12 == 0)))))))) ||
            (uVar12 = uVar29, _strcmp(uVar29,&UNK_10f604398), (int)uVar12 == 0)) ||
           (_strcmp(uVar29,&UNK_10f6043ab), (int)uVar29 == 0)) {
          lVar18 = *(long *)(param_1 + 0x60);
          lStack_98 = *(long *)(lVar18 + -0x20);
          pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,*(undefined4 *)(lVar18 + -0x18));
          uStack_a8 = *(undefined8 *)(lVar18 + -0xc);
          ppuStack_b0 = *(undefined ***)(lVar18 + -0x14);
          plVar28 = plStack_130 + -1;
          (**(code **)(*plVar28 + 0x40))();
          if ((plVar28 == (long *)0x0) ||
             (((iVar15 = (int)plVar28[9], iVar15 != 0xd && (iVar15 != 0x6c)) && (iVar15 != 0x68))))
          {
            puVar20 = &UNK_10f6043be;
            goto LAB_109e104f0;
          }
        }
      }
      plVar28 = plStack_e8;
      if (plVar11[0xe] != 0) {
        plVar5 = plStack_e8;
        _strcmp(plStack_e8,&UNK_10f603c64);
        if ((int)plVar5 == 0) {
          plVar28 = *(long **)(param_3[9] + 8);
          FUN_109f61800(plVar28,&DAT_10f603c6f);
          if (plVar28 == (long *)0x0) {
            lVar18 = 0;
          }
          else {
            lVar18 = *plVar28;
          }
          plVar28 = *(long **)(param_3[9] + 8);
          FUN_109f61800(plVar28,&UNK_10f603c8c);
          if (plVar28 == (long *)0x0) {
            lVar30 = 0;
          }
          else {
            lVar30 = *plVar28;
          }
          plVar28 = param_3;
          FUN_109f658b0(param_3,0x58);
          if (plVar28 != (long *)0x0) {
            plVar28[10] = 0;
            plVar28[7] = 0;
            plVar28[6] = 0;
            plVar28[9] = 0;
            plVar28[8] = 0;
            plVar28[3] = 0;
            plVar28[2] = 0;
            plVar28[5] = 0;
            plVar28[4] = 0;
            plVar28[1] = 0;
            *plVar28 = 0;
          }
          plVar24 = param_3;
          FUN_109f658b0(param_3,0x30);
          if (plVar24 != (long *)0x0) {
            plVar24[3] = 0;
            plVar24[2] = 0;
            plVar24[5] = 0;
            plVar24[4] = 0;
            plVar24[1] = 0;
            *plVar24 = 0;
          }
          plVar24[1] = 0;
          plVar24[2] = 0;
          *(undefined4 *)(plVar24 + 3) = 2;
          *plVar24 = (long)&PTR_DAT_110b64048;
          plVar24[5] = lVar18;
          plVar24[4] = *(long *)(lVar18 + 0x20);
          FUN_109f658b0(param_3,0x30);
          if (param_3 != (long *)0x0) {
            param_3[3] = 0;
            param_3[2] = 0;
            param_3[5] = 0;
            param_3[4] = 0;
            param_3[1] = 0;
            *param_3 = 0;
          }
          param_3[1] = 0;
          param_3[2] = 0;
          *(undefined4 *)(param_3 + 3) = 2;
          *param_3 = (long)&PTR_DAT_110b64048;
          param_3[5] = lVar30;
          param_3[4] = *(long *)(lVar30 + 0x20);
          plVar28[1] = 0;
          plVar28[2] = 0;
          *(undefined4 *)(plVar28 + 3) = 4;
          *plVar28 = (long)&PTR_FUN_110b64370;
          plVar28[4] = (long)&DAT_10e05dce0;
          *(undefined4 *)(plVar28 + 5) = 0x82;
          plVar28[6] = (long)plVar24;
          plVar28[7] = (long)param_3;
          plVar28[8] = 0;
          plVar28[9] = 0;
          *(undefined1 *)(plVar28 + 10) = 2;
          return plVar28;
        }
        if ((int)param_3[0x1f] == 1) {
          _strcmp(plVar28,&UNK_10f603ccc);
          if ((int)plVar28 == 0) {
            bVar3 = false;
            bVar4 = false;
            goto LAB_109e1090c;
          }
        }
        else {
          if (((int)param_3[0x1f] == 4) && (*(char *)((long)param_3 + 0x313) == '\x01')) {
            plVar5 = plVar28;
            _strcmp(plVar28,&UNK_10f603c96);
            bVar4 = (int)plVar5 == 0;
            _strcmp(plVar28,&UNK_10f603cb2);
            bVar3 = (int)plVar28 == 0;
          }
          else {
            bVar3 = false;
            bVar4 = false;
          }
          if ((bVar4) || (bVar3)) {
LAB_109e1090c:
            if (param_3[0x4f] == 0) {
LAB_109e1092c:
              FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603cd4);
            }
            else {
              uVar12 = *(undefined8 *)(*(long *)(param_3[0x4f] + 0x78) + 0x20);
              _strcmp(uVar12,"main");
              if ((int)uVar12 != 0) goto LAB_109e1092c;
            }
            if ((char)param_3[0x51] == '\x01') {
              FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603cf4);
            }
            if ((long *)(param_3[0x4f] + 0x50) != param_2) {
              FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603d16);
            }
          }
          if (bVar4) {
            if (*(char *)((long)param_3 + 0x289) == '\x01') {
              FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603d3b);
            }
            *(undefined1 *)((long)param_3 + 0x289) = 1;
          }
          else if (bVar3) {
            if ((*(byte *)((long)param_3 + 0x289) & 1) == 0) {
              FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603d6d);
            }
            if (*(char *)((long)param_3 + 0x28a) == '\x01') {
              FUN_109e9ed98(&ppuStack_110,param_3,&UNK_10f603dba);
            }
            *(undefined1 *)((long)param_3 + 0x28a) = 1;
          }
        }
      }
      lVar18 = lStack_138;
      ppuStack_c8 = &puStack_e0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      plVar28 = *(long **)plVar11[5];
      puStack_e0 = &uStack_d0;
      if (plVar28 != (long *)0x0 && (long *)*plStack_130 != (long *)0x0) {
        plVar5 = (long *)*plStack_130;
        plVar19 = plStack_130;
        plVar26 = (long *)plVar11[5];
        do {
          plVar25 = plVar5;
          plVar7 = plVar28;
          lVar30 = plVar26[3];
          if ((*(uint *)(lVar30 + 4) & 0xfc) < 0xc) {
            plVar28 = plVar19 + -1;
            uVar27 = *(uint *)(plVar26 + 7);
            uVar23 = uVar27 >> 0xb & 0xf;
            if (uVar23 - 7 < 2) {
              iVar15 = (int)plVar19[2];
              if (plVar19[3] == lVar30 && iVar15 != 4) {
                if (iVar15 != 2) goto LAB_109e10af0;
              }
              else {
                if (iVar15 != 2) {
LAB_109e10af0:
                  uStack_a8 = 0;
                  uStack_87 = 0;
                  uStack_88 = 0;
                  lStack_98 = 0;
                  ppuStack_b0 = &PTR_FUN_110b646d0;
                  pcStack_a0 = FUN_109e15020;
                  uStack_90 = SUB81(&plStack_c0,0);
                  uStack_8f = (undefined7)((ulong)&plStack_c0 >> 8);
                  plStack_c0 = param_3;
                  plStack_b8 = param_2;
                  (**(code **)(*plVar28 + 0x18))(plVar28,&ppuStack_b0);
                }
                plVar5 = param_3;
                FUN_109f658b0(param_3,0x90);
                if (plVar5 != (long *)0x0) {
                  plVar5[0xf] = 0;
                  plVar5[0xe] = 0;
                  plVar5[0x11] = 0;
                  plVar5[0x10] = 0;
                  plVar5[0xb] = 0;
                  plVar5[10] = 0;
                  plVar5[0xd] = 0;
                  plVar5[0xc] = 0;
                  plVar5[7] = 0;
                  plVar5[6] = 0;
                  plVar5[9] = 0;
                  plVar5[8] = 0;
                  plVar5[3] = 0;
                  plVar5[2] = 0;
                  plVar5[5] = 0;
                  plVar5[4] = 0;
                  plVar5[1] = 0;
                  *plVar5 = 0;
                }
                FUN_109eaba7c(plVar5,lVar30,&UNK_10f604406,0xb);
                plVar5[1] = (long)(param_2 + 2);
                puVar9 = (undefined8 *)param_2[3];
                plVar26 = (long *)0x0;
                if (plVar5 != (long *)0x0) {
                  plVar26 = plVar5 + 1;
                }
                plVar5[2] = (long)puVar9;
                *puVar9 = plVar26;
                param_2[3] = (long)plVar26;
                if ((uVar27 & 0x7800) == 0x4000) {
                  plVar26 = param_3;
                  FUN_109f658b0(param_3,0x30);
                  if (plVar26 != (long *)0x0) {
                    plVar26[3] = 0;
                    plVar26[2] = 0;
                    plVar26[5] = 0;
                    plVar26[4] = 0;
                    plVar26[1] = 0;
                    *plVar26 = 0;
                  }
                  plVar26[1] = 0;
                  plVar26[2] = 0;
                  *(undefined4 *)(plVar26 + 3) = 2;
                  *plVar26 = (long)&PTR_DAT_110b64048;
                  plVar26[5] = (long)plVar5;
                  plVar26[4] = plVar5[4];
                  plVar10 = param_3;
                  FUN_109f658b0(param_3,0x38);
                  if (plVar10 != (long *)0x0) {
                    plVar10[6] = 0;
                    plVar10[3] = 0;
                    plVar10[2] = 0;
                    plVar10[5] = 0;
                    plVar10[4] = 0;
                    plVar10[1] = 0;
                    *plVar10 = 0;
                  }
                  (**(code **)(*plVar28 + 0x20))(plVar28,param_3,0);
                  func_0x000109ea9180(plVar10,plVar26,plVar28);
                  plVar10[1] = (long)(param_2 + 2);
                  puVar9 = (undefined8 *)param_2[3];
                  plVar28 = (long *)0x0;
                  if (plVar10 != (long *)0x0) {
                    plVar28 = plVar10 + 1;
                  }
                  plVar10[2] = (long)puVar9;
                  *puVar9 = plVar28;
                  param_2[3] = (long)plVar28;
                }
                plVar28 = param_3;
                FUN_109f658b0(param_3,0x30);
                if (plVar28 != (long *)0x0) {
                  plVar28[3] = 0;
                  plVar28[2] = 0;
                  plVar28[5] = 0;
                  plVar28[4] = 0;
                  plVar28[1] = 0;
                  *plVar28 = 0;
                }
                plVar26 = plVar28 + 1;
                *plVar26 = 0;
                plVar28[2] = 0;
                *(undefined4 *)(plVar28 + 3) = 2;
                *plVar28 = (long)&PTR_DAT_110b64048;
                plVar28[5] = (long)plVar5;
                plVar28[4] = plVar5[4];
                puVar9 = (undefined8 *)plVar19[1];
                lVar31 = *plVar19;
                plVar28[2] = plVar19[1];
                *plVar26 = lVar31;
                *puVar9 = plVar26;
                *(long **)(*plVar19 + 8) = plVar26;
                plVar28 = param_3;
                FUN_109f658b0(param_3,0x30);
                if (plVar28 != (long *)0x0) {
                  plVar28[3] = 0;
                  plVar28[2] = 0;
                  plVar28[5] = 0;
                  plVar28[4] = 0;
                  plVar28[1] = 0;
                  *plVar28 = 0;
                }
                plVar28[1] = 0;
                plVar28[2] = 0;
                *(undefined4 *)(plVar28 + 3) = 2;
                *plVar28 = (long)&PTR_DAT_110b64048;
                plVar28[5] = (long)plVar5;
                plVar28[4] = plVar5[4];
                if (plVar19[3] != lVar30) {
                  FUN_109e12240(plVar28);
                }
                if ((iVar15 == 4) && ((int)plVar19[4] == 0x9c)) {
                  plVar28 = param_3;
                  FUN_109f658b0(param_3,0x38);
                  if (plVar28 != (long *)0x0) {
                    plVar28[6] = 0;
                    plVar28[3] = 0;
                    plVar28[2] = 0;
                    plVar28[5] = 0;
                    plVar28[4] = 0;
                    plVar28[1] = 0;
                    *plVar28 = 0;
                  }
                  plVar5 = (long *)plVar19[5];
                  (**(code **)(*plVar5 + 0x20))(plVar5,param_3,0);
                  plVar19 = (long *)plVar19[6];
                  (**(code **)(*plVar19 + 0x20))(plVar19,param_3,0);
                  plVar28[1] = 0;
                  plVar28[2] = 0;
                  *(undefined4 *)(plVar28 + 3) = 0;
                  plVar28[4] = (long)&UNK_10e05d730;
                  *plVar28 = (long)&PTR_DAT_110b640d0;
                  plVar28[6] = (long)plVar19;
                  func_0x000109eab364(plVar28,plVar5);
                }
                plVar28 = param_3;
                FUN_109f658b0(param_3,0x38);
                if (plVar28 != (long *)0x0) {
                  plVar28[6] = 0;
                  plVar28[3] = 0;
                  plVar28[2] = 0;
                  plVar28[5] = 0;
                  plVar28[4] = 0;
                  plVar28[1] = 0;
                  *plVar28 = 0;
                }
                func_0x000109ea9180();
                plVar28[1] = (long)&uStack_d0;
                ppuVar6 = (undefined8 **)0x0;
                if (plVar28 != (long *)0x0) {
                  ppuVar6 = (undefined8 **)(plVar28 + 1);
                }
                plVar28[2] = (long)ppuStack_c8;
                *ppuStack_c8 = ppuVar6;
                ppuStack_c8 = ppuVar6;
              }
            }
            else if (uVar23 == 9 || uVar23 == 6) {
              FUN_109e12240(plVar28,lVar30);
              puVar9 = (undefined8 *)plVar19[1];
              lVar30 = *plVar19;
              plVar28[2] = plVar19[1];
              plVar28[1] = lVar30;
              plVar5 = (long *)0x0;
              if (plVar28 != (long *)0x0) {
                plVar5 = plVar28 + 1;
              }
              *puVar9 = plVar5;
              *(long **)(*plVar19 + 8) = plVar5;
            }
          }
          plVar28 = (long *)*plVar7;
          plVar5 = (long *)*plVar25;
          plVar19 = plVar25;
          plVar26 = plVar7;
        } while (plVar28 != (long *)0x0 && plVar5 != (long *)0x0);
      }
      uVar27 = *(uint *)((long)param_3 + 0xec);
      if (uVar27 == 0) {
        uVar27 = *(uint *)(param_3 + 0x1d);
      }
      uVar23 = 99;
      if (*(char *)((long)param_3 + 0xe4) == '\0') {
        uVar23 = 0x77;
      }
      if (((uVar23 < uVar27) || (*(char *)(param_3[2] + 0x446) != '\0')) &&
         (plVar28 = plVar11, FUN_109eb28d4(plVar11,param_3,&plStack_130,0), plVar28 != (long *)0x0))
      {
        return plVar28;
      }
      if (*(char *)(plVar11[4] + 4) == '\x14') {
        plVar28 = (long *)0x0;
      }
      else {
        if (cRam000000011383472c == '\x01') {
          plVar28 = param_3;
          FUN_109f65d74(param_3,&UNK_10f6043fc);
        }
        else {
          plVar28 = (long *)0x0;
        }
        plVar5 = param_3;
        FUN_109f658b0(param_3,0x90);
        if (plVar5 != (long *)0x0) {
          plVar5[0xf] = 0;
          plVar5[0xe] = 0;
          plVar5[0x11] = 0;
          plVar5[0x10] = 0;
          plVar5[0xb] = 0;
          plVar5[10] = 0;
          plVar5[0xd] = 0;
          plVar5[0xc] = 0;
          plVar5[7] = 0;
          plVar5[6] = 0;
          plVar5[9] = 0;
          plVar5[8] = 0;
          plVar5[3] = 0;
          plVar5[2] = 0;
          plVar5[5] = 0;
          plVar5[4] = 0;
          plVar5[1] = 0;
          *plVar5 = 0;
        }
        FUN_109eaba7c(plVar5,plVar11[4],plVar28,0xb);
        *(ushort *)((long)plVar5 + 0x44) =
             *(ushort *)((long)plVar5 + 0x44) & 0xffe7 | (*(byte *)(plVar11 + 9) & 6) << 2;
        plVar5[1] = (long)(param_2 + 2);
        plVar19 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar19 = plVar5 + 1;
        }
        puVar9 = (undefined8 *)param_2[3];
        plVar5[2] = (long)puVar9;
        *puVar9 = plVar19;
        param_2[3] = (long)plVar19;
        FUN_109f65a74(plVar28);
        plVar28 = param_3;
        FUN_109f658b0(param_3,0x30);
        if (plVar28 != (long *)0x0) {
          plVar28[3] = 0;
          plVar28[2] = 0;
          plVar28[5] = 0;
          plVar28[4] = 0;
          plVar28[1] = 0;
          *plVar28 = 0;
        }
        plVar28[1] = 0;
        plVar28[2] = 0;
        *(undefined4 *)(plVar28 + 3) = 2;
        *plVar28 = (long)&PTR_DAT_110b64048;
        plVar28[5] = (long)plVar5;
        plVar28[4] = plVar5[4];
      }
      plVar5 = param_3;
      FUN_109f658b0(param_3,0x60);
      if (plVar5 != (long *)0x0) {
        plVar5[9] = 0;
        plVar5[8] = 0;
        plVar5[0xb] = 0;
        plVar5[10] = 0;
        plVar5[5] = 0;
        plVar5[4] = 0;
        plVar5[7] = 0;
        plVar5[6] = 0;
        plVar5[1] = 0;
        *plVar5 = 0;
        plVar5[3] = 0;
        plVar5[2] = 0;
      }
      plVar19 = plVar5 + 1;
      *plVar19 = 0;
      *(undefined4 *)(plVar5 + 3) = 9;
      *plVar5 = (long)&PTR_DAT_110b63a00;
      plVar5[4] = (long)plVar28;
      plVar5[5] = (long)plVar11;
      plVar11 = plVar5 + 6;
      *plVar11 = (long)(plVar5 + 8);
      plVar5[2] = 0;
      plVar5[9] = (long)plVar11;
      plVar5[10] = lVar18;
      plVar5[0xb] = (long)plVar24;
      if (plStack_130 == &lStack_120) {
        plVar5[7] = 0;
        plVar5[8] = 0;
      }
      else {
        plVar5[6] = (long)plStack_130;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[9] = (long)pplStack_118;
        plStack_130[1] = (long)plVar11;
        *(long **)plVar5[9] = plVar5 + 8;
        uStack_128 = 0;
        lStack_120 = 0;
        pplStack_118 = &plStack_130;
        plStack_130 = &lStack_120;
      }
      plVar24 = param_2 + 2;
      plVar5[1] = (long)plVar24;
      puVar9 = (undefined8 *)param_2[3];
      plVar5[2] = (long)puVar9;
      *puVar9 = plVar19;
      param_2[3] = (long)plVar19;
      if (puStack_e0 != &uStack_d0) {
        *plVar19 = (long)puStack_e0;
        puStack_e0[1] = plVar19;
        param_2[3] = (long)ppuStack_c8;
        *ppuStack_c8 = plVar24;
        uStack_d8 = 0;
        uStack_d0 = 0;
        ppuStack_c8 = &puStack_e0;
        puStack_e0 = &uStack_d0;
      }
      if ((plVar28 != (long *)0x0) &&
         ((**(code **)(*plVar28 + 0x20))(plVar28,param_3,0), plVar28 != (long *)0x0)) {
        return plVar28;
      }
      plVar28 = param_3;
      FUN_109f658b0(param_3,0x90);
      if (plVar28 != (long *)0x0) {
        plVar28[0xf] = 0;
        plVar28[0xe] = 0;
        plVar28[0x11] = 0;
        plVar28[0x10] = 0;
        plVar28[0xb] = 0;
        plVar28[10] = 0;
        plVar28[0xd] = 0;
        plVar28[0xc] = 0;
        plVar28[7] = 0;
        plVar28[6] = 0;
        plVar28[9] = 0;
        plVar28[8] = 0;
        plVar28[3] = 0;
        plVar28[2] = 0;
        plVar28[5] = 0;
        plVar28[4] = 0;
        plVar28[1] = 0;
        *plVar28 = 0;
      }
      FUN_109eaba7c(plVar28,&DAT_10e05d768,&UNK_10f603dea,0xb);
      plVar28[1] = (long)plVar24;
      puVar9 = (undefined8 *)param_2[3];
      plVar24 = (long *)0x0;
      if (plVar28 != (long *)0x0) {
        plVar24 = plVar28 + 1;
      }
      plVar28[2] = (long)puVar9;
      *puVar9 = plVar24;
      param_2[3] = (long)plVar24;
      FUN_109f658b0(param_3,0x30);
      if (param_3 != (long *)0x0) {
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[1] = 0;
        *param_3 = 0;
      }
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined4 *)(param_3 + 3) = 2;
      *param_3 = (long)&PTR_DAT_110b64048;
      param_3[5] = (long)plVar28;
      puVar20 = (undefined *)plVar28[4];
      goto LAB_109e1053c;
    }
  }
  else {
    if ((int)plVar28[7] == 0x28) {
      pcStack_a0 = (code *)CONCAT44(uStack_fc,uStack_100);
      uStack_a8 = uStack_108;
      ppuStack_b0 = ppuStack_110;
      lStack_98 = lStack_f8;
      plVar24 = param_3;
      FUN_109e143b4(param_3,param_2,param_3,&ppuStack_b0,plVar28[8],plVar28[9],&plStack_e8,
                    &plStack_130);
      plVar28 = plStack_e8;
      goto joined_r0x000109e0fa58;
    }
    puVar20 = &UNK_10f603c41;
    pppuVar8 = &ppuStack_110;
LAB_109e104f4:
    FUN_109e9ed98(pppuVar8,param_3,puVar20);
  }
LAB_109e104fc:
  FUN_109f658b0(param_3,0x28);
  if (param_3 != (long *)0x0) {
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
  }
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 3) = 0x16;
  *param_3 = (long)&PTR_DAT_110b63eb8;
  puVar20 = &UNK_10e05d730;
LAB_109e1053c:
  param_3[4] = (long)puVar20;
  return param_3;
code_r0x000109e0ffb4:
  if (((iVar15 != 2) || ((**(code **)(*plVar7 + 0x40))(), plVar7 == (long *)0x0)) ||
     ((*(uint *)(plVar7 + 8) & 0x7800) != 0x2000)) {
LAB_109e1038c:
    puVar20 = &UNK_10f60408c;
    goto LAB_109e104f0;
  }
  *(ushort *)((long)plVar7 + 0x44) = *(ushort *)((long)plVar7 + 0x44) | 2;
  uVar27 = *(uint *)(plVar28 + 7);
LAB_109e0ffec:
  if ((uVar27 >> 0xb & 0xf) - 7 < 2) {
    if (plVar19[0xb] != 0) {
      puVar20 = &UNK_10f6040b8;
      goto LAB_109e104f0;
    }
    plVar7 = plVar26;
    (**(code **)(*plVar26 + 0x40))();
    if (plVar7 != (long *)0x0) {
      if (((((*(uint *)(plVar28 + 7) & 0x7800) == 0x4000) &&
           (uVar27 = *(uint *)(plVar7 + 8) >> 0xb & 0xf, uVar27 == 5 || uVar27 == 0)) &&
          ((*(uint *)(plVar7 + 8) >> 8 & 1) == 0)) &&
         (((pcVar17 = (char *)plVar7[5], pcVar17 == (char *)0x0 || (*pcVar17 != 'g')) ||
          ((pcVar17[1] != 'l' || (pcVar17[2] != '_')))))) {
        FUN_109e9f044(&ppuStack_b0,param_3,&UNK_10f6040e3);
      }
      uVar27 = *(uint *)(plVar7 + 8);
      *(uint *)(plVar7 + 8) = uVar27 | 0x100;
      if ((uVar27 & 1) != 0) {
        (**(code **)(*plVar26 + 0x40))();
        puVar20 = &UNK_10f6040fb;
        goto LAB_109e104f0;
      }
    }
    plVar7 = plVar26;
    (**(code **)(*plVar26 + 0x38))(plVar26,param_3);
    if (((ulong)plVar7 & 1) == 0) {
      puVar20 = &UNK_10f60413d;
      goto LAB_109e104f0;
    }
  }
  else {
    plVar7 = plVar26;
    (**(code **)(*plVar26 + 0x40))();
    if ((((plVar7 != (long *)0x0) &&
         (uVar27 = *(uint *)(plVar7 + 8) >> 0xb & 0xf, uVar27 == 5 || uVar27 == 0)) &&
        ((*(uint *)(plVar7 + 8) >> 8 & 1) == 0)) &&
       (((pcVar17 = (char *)plVar7[5], pcVar17 == (char *)0x0 || (*pcVar17 != 'g')) ||
        ((pcVar17[1] != 'l' || (pcVar17[2] != '_')))))) {
      FUN_109e9f044(&ppuStack_b0,param_3,&UNK_10f6040e3);
    }
  }
  if ((*(char *)(plVar28[3] + 4) == '\x0f') &&
     (plVar7 = plVar26, (**(code **)(*plVar26 + 0x40))(), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar26 + 0x40))();
    uVar2 = *(ushort *)((long)plVar26 + 0x44);
    if (((uVar2 >> 10 & 1) != 0) && ((*(ushort *)((long)plVar28 + 0x3c) >> 10 & 1) == 0)) {
      puVar20 = &UNK_10f604169;
      goto LAB_109e104f0;
    }
    if (((uVar2 >> 0xb & 1) != 0) && ((*(ushort *)((long)plVar28 + 0x3c) >> 0xb & 1) == 0)) {
      puVar20 = &UNK_10f6041a1;
      goto LAB_109e104f0;
    }
    if (((uVar2 >> 0xc & 1) != 0) && ((*(ushort *)((long)plVar28 + 0x3c) >> 0xc & 1) == 0)) {
      puVar20 = &UNK_10f6041d9;
      goto LAB_109e104f0;
    }
    if (((uVar2 >> 8 & 1) != 0) && ((*(ushort *)((long)plVar28 + 0x3c) >> 8 & 1) == 0)) {
      puVar20 = &UNK_10f604211;
      goto LAB_109e104f0;
    }
    if (((uVar2 >> 9 & 1) != 0) && ((*(ushort *)((long)plVar28 + 0x3c) >> 9 & 1) == 0)) {
      puVar20 = &UNK_10f604249;
      goto LAB_109e104f0;
    }
  }
  plVar5 = (long *)*plVar5;
  plVar19 = (long *)*plVar19;
  plVar28 = (long *)*plVar28;
  if (*plVar28 == 0) goto LAB_109e101c4;
  goto LAB_109e0ff24;
}



/* Entry: 109e12a98; end: 109e12cbf;  */

long * FUN_109e12a98(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong uVar26;
  int iVar27;
  long *plVar28;
  int iVar29;
  undefined *puVar30;
  long lVar31;
  ulong uVar32;
  uint auStack_2c0 [4];
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long alStack_160 [20];
  long alStack_58 [3];
  
  alStack_58[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar16 = param_1;
  if (param_1 == (long *)0x0) goto LAB_109e12af8;
  while( true ) {
    param_1 = (long *)0x0;
    if (plVar16[-6] != 0) {
      param_1 = (long *)(plVar16[-6] + 0x30);
    }
    plVar12 = plVar16;
    if ((int)plVar16[3] == 3) break;
    while( true ) {
      plVar16 = param_2;
      plVar10 = (long *)plVar12[4];
      if (*(char *)((long)plVar10 + 0xd) != '\0') {
        if (*(char *)((long)plVar10 + 0xd) == '\x01') {
          if ((*plVar10 & 0xf000000000) == 0) goto LAB_109e12c84;
        }
        else if ((*(char *)((long)plVar10 + 0xe) == '\x01') &&
                ((*(uint *)((long)plVar10 + 4) & 0xfc) < 0xc)) {
          FUN_109f658b0(param_1,0x38);
          if (param_1 != (long *)0x0) {
            param_1[6] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[1] = 0;
            *param_1 = 0;
          }
          param_1[1] = 0;
          param_1[2] = 0;
          *(undefined4 *)(param_1 + 3) = 5;
          *param_1 = (long)&PTR_DAT_110b641e0;
          param_1[4] = (long)&UNK_10e05d730;
          param_1[5] = (long)plVar12;
          alStack_58[0] = 0;
          alStack_58[1] = 0;
          plVar16 = alStack_58;
          param_3 = (undefined8 *)0x1;
          plVar10 = param_1;
          func_0x000109eab760();
          plVar12 = param_1;
          goto LAB_109e12c84;
        }
      }
      func_0x000109ec8580();
      func_0x000109ec8580(plVar12[4]);
      plVar16 = param_1;
      FUN_109f658b0(param_1,0xb0);
      if (plVar16 != (long *)0x0) {
        plVar16[0x13] = 0;
        plVar16[0x12] = 0;
        plVar16[0x15] = 0;
        plVar16[0x14] = 0;
        plVar16[0xf] = 0;
        plVar16[0xe] = 0;
        plVar16[0x11] = 0;
        plVar16[0x10] = 0;
        plVar16[0xb] = 0;
        plVar16[10] = 0;
        plVar16[0xd] = 0;
        plVar16[0xc] = 0;
        plVar16[7] = 0;
        plVar16[6] = 0;
        plVar16[9] = 0;
        plVar16[8] = 0;
        plVar16[3] = 0;
        plVar16[2] = 0;
        plVar16[5] = 0;
        plVar16[4] = 0;
        plVar16[1] = 0;
        *plVar16 = 0;
      }
      param_3 = (undefined8 *)0x1;
      func_0x000109ea9960(plVar16,0);
      FUN_109f658b0(param_1,0x38);
      if (param_1 != (long *)0x0) {
        param_1[6] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
      }
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[4] = (long)&UNK_10e05d730;
      *param_1 = (long)&PTR_DAT_110b640d0;
      param_1[6] = (long)plVar16;
      param_2 = plVar12;
      FUN_109eab364(param_1);
      lVar11 = plVar12[4];
      func_0x000109ec8580();
      param_1[4] = lVar11;
      plVar16 = param_1;
      if (param_1 != (long *)0x0) break;
LAB_109e12af8:
      plVar12 = param_1;
      param_1 = (long *)0x0;
    }
  }
  FUN_109f658b0(param_1,0xb0);
  if (param_1 != (long *)0x0) {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_3 = (undefined8 *)0x0;
  plVar10 = param_1;
  func_0x000109ea9c24();
  plVar12 = param_1;
LAB_109e12c84:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_58[2]) {
    return plVar12;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  alStack_160[0x12] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_4;
  FUN_109f658b0(param_4,0x90);
  if (plVar12 != (long *)0x0) {
    plVar12[0xf] = 0;
    plVar12[0xe] = 0;
    plVar12[0x11] = 0;
    plVar12[0x10] = 0;
    plVar12[0xb] = 0;
    plVar12[10] = 0;
    plVar12[0xd] = 0;
    plVar12[0xc] = 0;
    plVar12[7] = 0;
    plVar12[6] = 0;
    plVar12[9] = 0;
    plVar12[8] = 0;
    plVar12[3] = 0;
    plVar12[2] = 0;
    plVar12[5] = 0;
    plVar12[4] = 0;
    plVar12[1] = 0;
    *plVar12 = 0;
  }
  plVar17 = (long *)&UNK_10f603f60;
  plVar18 = (long *)0xb;
  FUN_109eaba7c();
  plVar15 = plVar16 + 2;
  plVar12[1] = (long)plVar15;
  plVar25 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar25 = plVar12 + 1;
  }
  puVar24 = (undefined8 *)plVar16[3];
  plVar12[2] = (long)puVar24;
  *puVar24 = plVar25;
  plVar16[3] = (long)plVar25;
  uVar22 = (uint)*(byte *)((long)plVar10 + 0xe) * (uint)*(byte *)((long)plVar10 + 0xd);
  plVar10 = (long *)(ulong)uVar22;
  plVar25 = (long *)*param_3;
  if ((*(char *)(plVar25[3] + 0xd) == '\x01') && ((*(byte *)(plVar25[3] + 4) & 0xf0) == 0)) {
    plVar21 = (long *)*plVar25;
    if (*plVar21 == 0) {
      FUN_109f658b0(param_4,0x38);
      if (param_4 != (long *)0x0) {
        param_4[6] = 0;
        param_4[3] = 0;
        param_4[2] = 0;
        param_4[5] = 0;
        param_4[4] = 0;
        param_4[1] = 0;
        *param_4 = 0;
      }
      param_4[1] = 0;
      param_4[2] = 0;
      *(undefined4 *)(param_4 + 3) = 5;
      *param_4 = (long)&PTR_DAT_110b641e0;
      param_4[4] = (long)&UNK_10e05d730;
      param_4[5] = (long)(plVar25 + -1);
      alStack_160[0] = 0;
      alStack_160[1] = 0;
      plVar16 = alStack_160;
      plVar12 = param_4;
      func_0x000109eab760();
      goto LAB_109e13244;
    }
LAB_109e12db0:
    alStack_160[0xf] = 0;
    alStack_160[0xe] = 0;
    alStack_160[0xd] = 0;
    alStack_160[0xc] = 0;
    alStack_160[0xb] = 0;
    alStack_160[10] = 0;
    alStack_160[9] = 0;
    alStack_160[8] = 0;
    alStack_160[7] = 0;
    alStack_160[6] = 0;
    alStack_160[5] = 0;
    alStack_160[4] = 0;
    alStack_160[3] = 0;
    alStack_160[2] = 0;
    alStack_160[1] = 0;
    alStack_160[0] = 0;
    lVar11 = 0;
    uVar26 = 0;
    uVar20 = 0;
    uVar23 = 0;
    iVar29 = 0;
    do {
      plVar10 = plVar21;
      uVar6 = (uint)*(byte *)(plVar25[3] + 0xe) * (uint)*(byte *)(plVar25[3] + 0xd);
      uVar7 = uVar22 - uVar20;
      if (uVar6 + uVar20 <= uVar22) {
        uVar7 = uVar6;
      }
      if ((int)plVar25[2] == 3) {
        if (uVar7 != 0) {
          iVar27 = 0;
          plVar10 = plVar25 + -1;
          lVar31 = -(ulong)uVar7;
          uVar32 = uVar26;
          do {
            bVar1 = *(byte *)(plVar25[3] + 4);
            if (bVar1 < 4) {
              if (bVar1 == 0) {
                plVar21 = plVar10;
                func_0x000109eaa478(plVar10,iVar27);
                uVar9 = SUB84(plVar21,0);
              }
              else {
                if (bVar1 != 1) {
                  if (bVar1 == 2) {
                    func_0x000109eaa610(plVar10,iVar27);
                    *(int *)((long)alStack_160 + uVar32 * 4) = (int)lVar11;
                  }
                  goto LAB_109e12edc;
                }
                plVar21 = plVar10;
                func_0x000109eaa544(plVar10,iVar27);
                uVar9 = SUB84(plVar21,0);
              }
              *(undefined4 *)((long)alStack_160 + uVar32 * 4) = uVar9;
            }
            else {
              plVar21 = plVar10;
              if (bVar1 < 10) {
                if (bVar1 == 4) {
                  func_0x000109eaa810(plVar10,iVar27);
                  alStack_160[uVar32] = lVar11;
                }
                else if (bVar1 == 9) {
                  func_0x000109eaa908(plVar10,iVar27);
                  goto LAB_109e12ec4;
                }
              }
              else if (bVar1 == 10) {
                func_0x000109eaa9e4(plVar10,iVar27);
LAB_109e12ec4:
                alStack_160[uVar32] = (long)plVar21;
              }
              else if (bVar1 == 0xb) {
                func_0x000109eaa740(plVar10,iVar27);
                *(char *)((long)alStack_160 + uVar32) = (char)plVar21;
              }
            }
LAB_109e12edc:
            uVar32 = (ulong)((int)uVar32 + 1);
            iVar27 = iVar27 + 1;
            bVar8 = lVar31 != -1;
            lVar31 = lVar31 + 1;
          } while (bVar8);
          plVar10 = (long *)*plVar25;
        }
        uVar23 = ~(-1 << (ulong)(uVar7 & 0x1f)) << (ulong)(uVar20 & 0x1f) | uVar23;
        iVar29 = uVar7 + iVar29;
        uVar26 = (ulong)(uVar7 + (int)uVar26);
      }
      uVar20 = uVar7 + uVar20;
      plVar21 = (long *)*plVar10;
      plVar25 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
    if (uVar23 != 0) {
      plVar10 = param_4;
      FUN_109f658b0(param_4,0x30);
      if (plVar10 != (long *)0x0) {
        plVar10[3] = 0;
        plVar10[2] = 0;
        plVar10[5] = 0;
        plVar10[4] = 0;
        plVar10[1] = 0;
        *plVar10 = 0;
      }
      plVar10[1] = 0;
      plVar10[2] = 0;
      *(undefined4 *)(plVar10 + 3) = 2;
      *plVar10 = (long)&PTR_DAT_110b64048;
      plVar10[5] = (long)plVar12;
      lVar11 = plVar12[4];
      plVar10[4] = lVar11;
      uVar26 = (ulong)*(byte *)(lVar11 + 4);
      plVar17 = (long *)0x1;
      plVar18 = (long *)0x0;
      func_0x000109ec6c94(uVar26,iVar29,1,0,0,0);
      plVar25 = param_4;
      FUN_109f658b0(param_4,0xb0);
      if (plVar25 != (long *)0x0) {
        plVar25[0x13] = 0;
        plVar25[0x12] = 0;
        plVar25[0x15] = 0;
        plVar25[0x14] = 0;
        plVar25[0xf] = 0;
        plVar25[0xe] = 0;
        plVar25[0x11] = 0;
        plVar25[0x10] = 0;
        plVar25[0xb] = 0;
        plVar25[10] = 0;
        plVar25[0xd] = 0;
        plVar25[0xc] = 0;
        plVar25[7] = 0;
        plVar25[6] = 0;
        plVar25[9] = 0;
        plVar25[8] = 0;
        plVar25[3] = 0;
        plVar25[2] = 0;
        plVar25[5] = 0;
        plVar25[4] = 0;
        plVar25[1] = 0;
        *plVar25 = 0;
      }
      plVar25[0xe] = alStack_160[9];
      plVar25[0xd] = alStack_160[8];
      plVar25[0x10] = alStack_160[0xb];
      plVar25[0xf] = alStack_160[10];
      plVar25[0x12] = alStack_160[0xd];
      plVar25[0x11] = alStack_160[0xc];
      plVar25[0x14] = alStack_160[0xf];
      plVar25[0x13] = alStack_160[0xe];
      plVar25[6] = alStack_160[1];
      plVar25[5] = alStack_160[0];
      plVar25[8] = alStack_160[3];
      plVar25[7] = alStack_160[2];
      plVar25[10] = alStack_160[5];
      plVar25[9] = alStack_160[4];
      *(undefined4 *)(plVar25 + 3) = 3;
      plVar25[1] = 0;
      plVar25[2] = 0;
      *plVar25 = (long)&PTR_DAT_110b63f80;
      plVar25[0x15] = 0;
      plVar25[4] = uVar26;
      plVar25[0xc] = alStack_160[7];
      plVar25[0xb] = alStack_160[6];
      plVar21 = param_4;
      FUN_109f658b0(param_4,0x38);
      if (plVar21 != (long *)0x0) {
        plVar21[6] = 0;
        plVar21[3] = 0;
        plVar21[2] = 0;
        plVar21[5] = 0;
        plVar21[4] = 0;
        plVar21[1] = 0;
        *plVar21 = 0;
      }
      plVar21[2] = 0;
      *(undefined4 *)(plVar21 + 3) = 8;
      *plVar21 = (long)&PTR_DAT_110b63f38;
      plVar21[4] = (long)plVar10;
      plVar21[5] = (long)plVar25;
      *(byte *)(plVar21 + 6) = *(byte *)(plVar21 + 6) & 0xf0 | (byte)uVar23 & 0xf;
      plVar10 = plVar21 + 1;
      *plVar10 = (long)plVar15;
      puVar24 = (undefined8 *)plVar16[3];
      plVar21[2] = (long)puVar24;
      *puVar24 = plVar10;
      plVar16[3] = (long)plVar10;
    }
  }
  else {
    plVar21 = (long *)*plVar25;
    alStack_160[0xd] = 0;
    alStack_160[0xc] = 0;
    alStack_160[0xf] = 0;
    alStack_160[0xe] = 0;
    alStack_160[9] = 0;
    alStack_160[8] = 0;
    alStack_160[0xb] = 0;
    alStack_160[10] = 0;
    alStack_160[5] = 0;
    alStack_160[4] = 0;
    alStack_160[7] = 0;
    alStack_160[6] = 0;
    alStack_160[1] = 0;
    alStack_160[0] = 0;
    alStack_160[3] = 0;
    alStack_160[2] = 0;
    if (plVar21 != (long *)0x0) goto LAB_109e12db0;
  }
  plVar10 = *(long **)*param_3;
  if (plVar10 != (long *)0x0) {
    uVar20 = 0;
    plVar25 = (long *)*param_3;
    do {
      plVar21 = plVar10;
      uVar7 = (uint)*(byte *)(plVar25[3] + 0xe) * (uint)*(byte *)(plVar25[3] + 0xd);
      uVar23 = uVar22 - uVar20;
      if (uVar7 + uVar20 <= uVar22) {
        uVar23 = uVar7;
      }
      plVar10 = (long *)(ulong)uVar23;
      if (uVar23 == 0) break;
      if ((int)plVar25[2] != 3) {
        plVar17 = param_4;
        FUN_109f658b0(param_4,0x30);
        if (plVar17 != (long *)0x0) {
          plVar17[3] = 0;
          plVar17[2] = 0;
          plVar17[5] = 0;
          plVar17[4] = 0;
          plVar17[1] = 0;
          *plVar17 = 0;
        }
        plVar17[1] = 0;
        plVar17[2] = 0;
        *(undefined4 *)(plVar17 + 3) = 2;
        *plVar17 = (long)&PTR_DAT_110b64048;
        plVar17[5] = (long)plVar12;
        plVar17[4] = plVar12[4];
        plVar21 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar21 != (long *)0x0) {
          plVar21[6] = 0;
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        plVar21[1] = 0;
        plVar21[2] = 0;
        *(undefined4 *)(plVar21 + 3) = 5;
        *plVar21 = (long)&PTR_DAT_110b641e0;
        plVar21[4] = (long)&UNK_10e05d730;
        plVar21[5] = (long)(plVar25 + -1);
        alStack_160[0x11] = 0x300000002;
        alStack_160[0x10] = 0x100000000;
        func_0x000109eab760(plVar21,alStack_160 + 0x10);
        plVar19 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar19 != (long *)0x0) {
          plVar19[6] = 0;
          plVar19[3] = 0;
          plVar19[2] = 0;
          plVar19[5] = 0;
          plVar19[4] = 0;
          plVar19[1] = 0;
          *plVar19 = 0;
        }
        plVar19[2] = 0;
        *(undefined4 *)(plVar19 + 3) = 8;
        *plVar19 = (long)&PTR_DAT_110b63f38;
        plVar19[4] = (long)plVar17;
        plVar19[5] = (long)plVar21;
        plVar17 = plVar19 + 1;
        *plVar17 = (long)plVar15;
        *(byte *)(plVar19 + 6) =
             *(byte *)(plVar19 + 6) & 0xf0 |
             (byte)(~(-1 << (ulong)(uVar23 & 0x1f)) << (ulong)(uVar20 & 0x1f)) & 0xf;
        puVar24 = (undefined8 *)plVar16[3];
        plVar19[2] = (long)puVar24;
        *puVar24 = plVar17;
        plVar16[3] = (long)plVar17;
        plVar21 = (long *)*plVar25;
        plVar17 = plVar10;
      }
      uVar20 = uVar23 + uVar20;
      plVar10 = (long *)*plVar21;
      plVar25 = plVar21;
    } while ((long *)*plVar21 != (long *)0x0);
  }
  plVar16 = (long *)0x30;
  FUN_109f658b0();
  if (param_4 != (long *)0x0) {
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[1] = 0;
    *param_4 = 0;
  }
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)(param_4 + 3) = 2;
  *param_4 = (long)&PTR_DAT_110b64048;
  param_4[5] = (long)plVar12;
  param_4[4] = plVar12[4];
  plVar12 = param_4;
  plVar10 = plVar17;
LAB_109e13244:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_160[0x12]) {
    return param_4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = plVar18;
  FUN_109f658b0(plVar18,0x90);
  if (plVar17 != (long *)0x0) {
    plVar17[0xf] = 0;
    plVar17[0xe] = 0;
    plVar17[0x11] = 0;
    plVar17[0x10] = 0;
    plVar17[0xb] = 0;
    plVar17[10] = 0;
    plVar17[0xd] = 0;
    plVar17[0xc] = 0;
    plVar17[7] = 0;
    plVar17[6] = 0;
    plVar17[9] = 0;
    plVar17[8] = 0;
    plVar17[3] = 0;
    plVar17[2] = 0;
    plVar17[5] = 0;
    plVar17[4] = 0;
    plVar17[1] = 0;
    *plVar17 = 0;
  }
  plVar15 = (long *)&UNK_10f603f69;
  plVar19 = (long *)0xb;
  FUN_109eaba7c(plVar17,plVar12);
  plVar25 = plVar16 + 2;
  plVar17[1] = (long)plVar25;
  plVar21 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar21 = plVar17 + 1;
  }
  puVar24 = (undefined8 *)plVar16[3];
  plVar17[2] = (long)puVar24;
  *puVar24 = plVar21;
  plVar16[3] = (long)plVar21;
  plVar10 = (long *)*plVar10;
  plVar28 = plVar10 + -1;
  plVar21 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    plVar21 = plVar28;
  }
  lVar11 = plVar21[4];
  bVar1 = *(byte *)(lVar11 + 0xd);
  if (((bVar1 == 1) && (uVar22 = *(uint *)(lVar11 + 4), (uVar22 & 0xf0) == 0)) &&
     (*(long *)*plVar10 == 0)) {
    plVar10 = plVar18;
    FUN_109f658b0(plVar18,0x90);
    if (plVar10 != (long *)0x0) {
      plVar10[0xf] = 0;
      plVar10[0xe] = 0;
      plVar10[0x11] = 0;
      plVar10[0x10] = 0;
      plVar10[0xb] = 0;
      plVar10[10] = 0;
      plVar10[0xd] = 0;
      plVar10[0xc] = 0;
      plVar10[7] = 0;
      plVar10[6] = 0;
      plVar10[9] = 0;
      plVar10[8] = 0;
      plVar10[3] = 0;
      plVar10[2] = 0;
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[1] = 0;
      *plVar10 = 0;
    }
    uVar26 = (ulong)(uVar22 & 0xf);
    func_0x000109ec6c94(uVar26,4,1,0,0,0);
    plVar19 = (long *)0xb;
    FUN_109eaba7c(plVar10,uVar26,&UNK_10f603f72);
    lVar11 = 0;
    plVar10[1] = (long)plVar25;
    plVar15 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 1;
    }
    puVar24 = (undefined8 *)plVar16[3];
    plVar10[2] = (long)puVar24;
    *puVar24 = plVar15;
    plVar16[3] = (long)plVar15;
    cVar4 = *(char *)(plVar21[4] + 4);
    do {
      if (cVar4 == '\x02') {
        auStack_2c0[lVar11] = 0;
      }
      else {
        (auStack_2c0 + lVar11 * 2)[0] = 0;
        (auStack_2c0 + lVar11 * 2)[1] = 0;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
    plVar21 = plVar18;
    FUN_109f658b0(plVar18,0x38);
    if (plVar21 != (long *)0x0) {
      plVar21[6] = 0;
      plVar21[3] = 0;
      plVar21[2] = 0;
      plVar21[5] = 0;
      plVar21[4] = 0;
      plVar21[1] = 0;
      *plVar21 = 0;
    }
    plVar14 = plVar18;
    FUN_109f658b0(plVar18,0x30);
    if (plVar14 != (long *)0x0) {
      plVar14[3] = 0;
      plVar14[2] = 0;
      plVar14[5] = 0;
      plVar14[4] = 0;
      plVar14[1] = 0;
      *plVar14 = 0;
    }
    plVar14[1] = 0;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 2;
    *plVar14 = (long)&PTR_DAT_110b64048;
    plVar14[5] = (long)plVar10;
    plVar14[4] = plVar10[4];
    plVar15 = plVar18;
    FUN_109f658b0(plVar18,0xb0);
    if (plVar15 != (long *)0x0) {
      plVar15[0x13] = 0;
      plVar15[0x12] = 0;
      plVar15[0x15] = 0;
      plVar15[0x14] = 0;
      plVar15[0xf] = 0;
      plVar15[0xe] = 0;
      plVar15[0x11] = 0;
      plVar15[0x10] = 0;
      plVar15[0xb] = 0;
      plVar15[10] = 0;
      plVar15[0xd] = 0;
      plVar15[0xc] = 0;
      plVar15[7] = 0;
      plVar15[6] = 0;
      plVar15[9] = 0;
      plVar15[8] = 0;
      plVar15[3] = 0;
      plVar15[2] = 0;
      plVar15[5] = 0;
      plVar15[4] = 0;
      plVar15[1] = 0;
      *plVar15 = 0;
    }
    lVar11 = plVar10[4];
    plVar15[0xe] = lStack_278;
    plVar15[0xd] = lStack_280;
    plVar15[0x10] = lStack_268;
    plVar15[0xf] = lStack_270;
    plVar15[0x12] = lStack_258;
    plVar15[0x11] = lStack_260;
    plVar15[0x14] = lStack_248;
    plVar15[0x13] = lStack_250;
    plVar15[6] = CONCAT44(auStack_2c0[3],auStack_2c0[2]);
    plVar15[5] = CONCAT44(auStack_2c0[1],auStack_2c0[0]);
    plVar15[8] = lStack_2a8;
    plVar15[7] = lStack_2b0;
    plVar15[10] = lStack_298;
    plVar15[9] = lStack_2a0;
    *(undefined4 *)(plVar15 + 3) = 3;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&PTR_DAT_110b63f80;
    plVar15[0x15] = 0;
    plVar15[4] = lVar11;
    plVar15[0xc] = lStack_288;
    plVar15[0xb] = lStack_290;
    func_0x000109ea9180(plVar21,plVar14);
    plVar21[1] = (long)plVar25;
    puVar24 = (undefined8 *)plVar16[3];
    plVar14 = (long *)0x0;
    if (plVar21 != (long *)0x0) {
      plVar14 = plVar21 + 1;
    }
    plVar21[2] = (long)puVar24;
    *puVar24 = plVar14;
    plVar16[3] = (long)plVar14;
    plVar21 = plVar18;
    FUN_109f658b0(plVar18,0x30);
    if (plVar21 != (long *)0x0) {
      plVar21[3] = 0;
      plVar21[2] = 0;
      plVar21[5] = 0;
      plVar21[4] = 0;
      plVar21[1] = 0;
      *plVar21 = 0;
    }
    plVar21[1] = 0;
    plVar21[2] = 0;
    *(undefined4 *)(plVar21 + 3) = 2;
    *plVar21 = (long)&PTR_DAT_110b64048;
    plVar21[5] = (long)plVar10;
    plVar21[4] = plVar10[4];
    plVar14 = plVar18;
    FUN_109f658b0(plVar18,0x38);
    if (plVar14 != (long *)0x0) {
      plVar14[6] = 0;
      plVar14[3] = 0;
      plVar14[2] = 0;
      plVar14[5] = 0;
      plVar14[4] = 0;
      plVar14[1] = 0;
      *plVar14 = 0;
    }
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 8;
    *plVar14 = (long)&PTR_DAT_110b63f38;
    plVar14[4] = (long)plVar21;
    plVar14[5] = (long)plVar28;
    *(byte *)(plVar14 + 6) = *(byte *)(plVar14 + 6) & 0xf0 | 1;
    plVar21 = plVar14 + 1;
    *plVar21 = (long)plVar25;
    puVar24 = (undefined8 *)plVar16[3];
    plVar14[2] = (long)puVar24;
    *puVar24 = plVar21;
    plVar16[3] = (long)plVar21;
    bVar1 = *(byte *)((long)plVar12 + 0xe);
    uVar22 = (uint)bVar1;
    if ((uint)*(byte *)((long)plVar12 + 0xd) <= (uint)bVar1) {
      uVar22 = (uint)*(byte *)((long)plVar12 + 0xd);
    }
    uVar26 = (ulong)uVar22;
    if (uVar22 != 0) {
      uVar32 = 0;
      puVar30 = &UNK_10e060b8c;
      do {
        plVar15 = plVar18;
        FUN_109f658b0(plVar18,0xb0);
        if (plVar15 != (long *)0x0) {
          plVar15[0x13] = 0;
          plVar15[0x12] = 0;
          plVar15[0x15] = 0;
          plVar15[0x14] = 0;
          plVar15[0xf] = 0;
          plVar15[0xe] = 0;
          plVar15[0x11] = 0;
          plVar15[0x10] = 0;
          plVar15[0xb] = 0;
          plVar15[10] = 0;
          plVar15[0xd] = 0;
          plVar15[0xc] = 0;
          plVar15[7] = 0;
          plVar15[6] = 0;
          plVar15[9] = 0;
          plVar15[8] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        func_0x000109ea98b0(plVar15,uVar32,1);
        plVar21 = plVar18;
        FUN_109f658b0(plVar18,0x38);
        if (plVar21 != (long *)0x0) {
          plVar21[6] = 0;
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        func_0x000109eab3d8(plVar21,plVar17,plVar15);
        plVar21 = plVar18;
        FUN_109f658b0(plVar18,0x30);
        if (plVar21 != (long *)0x0) {
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        plVar21[1] = 0;
        plVar21[2] = 0;
        *(undefined4 *)(plVar21 + 3) = 2;
        *plVar21 = (long)&PTR_DAT_110b64048;
        plVar21[5] = (long)plVar10;
        plVar21[4] = plVar10[4];
        plVar15 = plVar18;
        FUN_109f658b0(plVar18,0x38);
        if (plVar15 != (long *)0x0) {
          plVar15[6] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        uVar5 = *(undefined1 *)((long)plVar12 + 0xd);
        plVar15[1] = 0;
        plVar15[2] = 0;
        *(undefined4 *)(plVar15 + 3) = 5;
        *plVar15 = (long)&PTR_DAT_110b641e0;
        plVar15[4] = (long)&UNK_10e05d730;
        plVar15[5] = (long)plVar21;
        func_0x000109eab760(plVar15,puVar30,uVar5);
        plVar21 = plVar18;
        FUN_109f658b0(plVar18,0x38);
        if (plVar21 != (long *)0x0) {
          plVar21[6] = 0;
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        func_0x000109ea9180();
        plVar21[1] = (long)plVar25;
        plVar28 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          plVar28 = plVar21 + 1;
        }
        puVar24 = (undefined8 *)plVar16[3];
        plVar21[2] = (long)puVar24;
        *puVar24 = plVar28;
        plVar16[3] = (long)plVar28;
        uVar32 = uVar32 + 1;
        puVar30 = puVar30 + 0x10;
      } while (uVar26 != uVar32);
      bVar1 = *(byte *)((long)plVar12 + 0xe);
    }
    if (uVar22 < bVar1) {
      do {
        plVar15 = plVar18;
        FUN_109f658b0(plVar18,0xb0);
        if (plVar15 != (long *)0x0) {
          plVar15[0x13] = 0;
          plVar15[0x12] = 0;
          plVar15[0x15] = 0;
          plVar15[0x14] = 0;
          plVar15[0xf] = 0;
          plVar15[0xe] = 0;
          plVar15[0x11] = 0;
          plVar15[0x10] = 0;
          plVar15[0xb] = 0;
          plVar15[10] = 0;
          plVar15[0xd] = 0;
          plVar15[0xc] = 0;
          plVar15[7] = 0;
          plVar15[6] = 0;
          plVar15[9] = 0;
          plVar15[8] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        func_0x000109ea98b0(plVar15,uVar26,1);
        plVar21 = plVar18;
        FUN_109f658b0(plVar18,0x38);
        if (plVar21 != (long *)0x0) {
          plVar21[6] = 0;
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        func_0x000109eab3d8(plVar21,plVar17,plVar15);
        plVar21 = plVar18;
        FUN_109f658b0(plVar18,0x30);
        if (plVar21 != (long *)0x0) {
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        plVar21[1] = 0;
        plVar21[2] = 0;
        *(undefined4 *)(plVar21 + 3) = 2;
        *plVar21 = (long)&PTR_DAT_110b64048;
        plVar21[5] = (long)plVar10;
        plVar21[4] = plVar10[4];
        plVar15 = plVar18;
        FUN_109f658b0(plVar18,0x38);
        if (plVar15 != (long *)0x0) {
          plVar15[6] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        uVar5 = *(undefined1 *)((long)plVar12 + 0xd);
        plVar15[1] = 0;
        plVar15[2] = 0;
        *(undefined4 *)(plVar15 + 3) = 5;
        *plVar15 = (long)&PTR_DAT_110b641e0;
        plVar15[4] = (long)&UNK_10e05d730;
        plVar15[5] = (long)plVar21;
        uStack_238 = 0x100000001;
        uStack_240 = 0x100000001;
        func_0x000109eab760(plVar15,&uStack_240,uVar5);
        plVar21 = plVar18;
        FUN_109f658b0(plVar18,0x38);
        if (plVar21 != (long *)0x0) {
          plVar21[6] = 0;
          plVar21[3] = 0;
          plVar21[2] = 0;
          plVar21[5] = 0;
          plVar21[4] = 0;
          plVar21[1] = 0;
          *plVar21 = 0;
        }
        func_0x000109ea9180();
        plVar21[1] = (long)plVar25;
        plVar28 = (long *)0x0;
        if (plVar21 != (long *)0x0) {
          plVar28 = plVar21 + 1;
        }
        puVar24 = (undefined8 *)plVar16[3];
        plVar21[2] = (long)puVar24;
        *puVar24 = plVar28;
        plVar16[3] = (long)plVar28;
        uVar22 = (int)uVar26 + 1;
        uVar26 = (ulong)uVar22;
      } while (uVar22 < *(byte *)((long)plVar12 + 0xe));
    }
  }
  else {
    bVar2 = *(byte *)(lVar11 + 0xe);
    if ((bVar2 < 2) || (2 < *(byte *)(lVar11 + 4) - 2)) {
      if (*plVar10 != 0) {
        uVar22 = 0;
        iVar29 = 0;
        bVar1 = *(byte *)((long)plVar12 + 0xd);
        iVar27 = (uint)*(byte *)((long)plVar12 + 0xe) * (uint)bVar1;
        do {
          if (iVar27 == 0) break;
          bVar2 = *(byte *)(plVar10[3] + 0xd);
          bVar3 = *(byte *)(plVar10[3] + 0xe);
          plVar12 = plVar18;
          FUN_109f658b0(plVar18,0x90);
          if (plVar12 != (long *)0x0) {
            plVar12[0xf] = 0;
            plVar12[0xe] = 0;
            plVar12[0x11] = 0;
            plVar12[0x10] = 0;
            plVar12[0xb] = 0;
            plVar12[10] = 0;
            plVar12[0xd] = 0;
            plVar12[0xc] = 0;
            plVar12[7] = 0;
            plVar12[6] = 0;
            plVar12[9] = 0;
            plVar12[8] = 0;
            plVar12[3] = 0;
            plVar12[2] = 0;
            plVar12[5] = 0;
            plVar12[4] = 0;
            plVar12[1] = 0;
            *plVar12 = 0;
          }
          plVar19 = (long *)0xb;
          FUN_109eaba7c(plVar12,plVar10[3],&UNK_10f603f72);
          plVar12[1] = (long)plVar25;
          puVar24 = (undefined8 *)plVar16[3];
          plVar15 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            plVar15 = plVar12 + 1;
          }
          plVar12[2] = (long)puVar24;
          *puVar24 = plVar15;
          plVar16[3] = (long)plVar15;
          plVar15 = plVar18;
          FUN_109f658b0(plVar18,0x30);
          if (plVar15 != (long *)0x0) {
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          plVar15[1] = 0;
          plVar15[2] = 0;
          *(undefined4 *)(plVar15 + 3) = 2;
          *plVar15 = (long)&PTR_DAT_110b64048;
          plVar15[5] = (long)plVar12;
          plVar15[4] = plVar12[4];
          plVar15 = plVar18;
          FUN_109f658b0(plVar18,0x38);
          if (plVar15 != (long *)0x0) {
            plVar15[6] = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          uVar23 = (uint)bVar3 * (uint)bVar2;
          func_0x000109ea9180();
          uVar20 = 0;
          plVar15[1] = (long)plVar25;
          puVar24 = (undefined8 *)plVar16[3];
          plVar21 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            plVar21 = plVar15 + 1;
          }
          plVar15[2] = (long)puVar24;
          *puVar24 = plVar21;
          plVar16[3] = (long)plVar21;
          do {
            uVar7 = bVar1 - uVar22;
            uVar6 = uVar23 - uVar20;
            if (uVar6 <= uVar7) {
              uVar7 = uVar6;
            }
            plVar28 = (long *)(ulong)uVar7;
            plVar21 = plVar18;
            FUN_109f658b0(plVar18,0x30);
            if (plVar21 != (long *)0x0) {
              plVar21[3] = 0;
              plVar21[2] = 0;
              plVar21[5] = 0;
              plVar21[4] = 0;
              plVar21[1] = 0;
              *plVar21 = 0;
            }
            plVar21[1] = 0;
            plVar21[2] = 0;
            *(undefined4 *)(plVar21 + 3) = 2;
            *plVar21 = (long)&PTR_DAT_110b64048;
            plVar21[5] = (long)plVar12;
            plVar21[4] = plVar12[4];
            plVar15 = plVar18;
            FUN_109f658b0(plVar18,0xb0);
            if (plVar15 != (long *)0x0) {
              plVar15[0x13] = 0;
              plVar15[0x12] = 0;
              plVar15[0x15] = 0;
              plVar15[0x14] = 0;
              plVar15[0xf] = 0;
              plVar15[0xe] = 0;
              plVar15[0x11] = 0;
              plVar15[0x10] = 0;
              plVar15[0xb] = 0;
              plVar15[10] = 0;
              plVar15[0xd] = 0;
              plVar15[0xc] = 0;
              plVar15[7] = 0;
              plVar15[6] = 0;
              plVar15[9] = 0;
              plVar15[8] = 0;
              plVar15[3] = 0;
              plVar15[2] = 0;
              plVar15[5] = 0;
              plVar15[4] = 0;
              plVar15[1] = 0;
              *plVar15 = 0;
            }
            func_0x000109ea98b0(plVar15,iVar29,1);
            plVar14 = plVar18;
            FUN_109f658b0(plVar18,0x38);
            if (plVar14 != (long *)0x0) {
              plVar14[6] = 0;
              plVar14[3] = 0;
              plVar14[2] = 0;
              plVar14[5] = 0;
              plVar14[4] = 0;
              plVar14[1] = 0;
              *plVar14 = 0;
            }
            func_0x000109eab3d8(plVar14,plVar17);
            if (uVar7 < *(byte *)(plVar21[4] + 0xd)) {
              plVar13 = plVar18;
              FUN_109f658b0(plVar18,0x38);
              if (plVar13 != (long *)0x0) {
                plVar13[6] = 0;
                plVar13[3] = 0;
                plVar13[2] = 0;
                plVar13[5] = 0;
                plVar13[4] = 0;
                plVar13[1] = 0;
                *plVar13 = 0;
              }
              auStack_2c0[1] = uVar20 + 1;
              auStack_2c0[2] = uVar20 + 2;
              auStack_2c0[3] = uVar20 + 3;
              plVar13[1] = 0;
              plVar13[2] = 0;
              *(undefined4 *)(plVar13 + 3) = 5;
              *plVar13 = (long)&PTR_DAT_110b641e0;
              plVar13[4] = (long)&UNK_10e05d730;
              plVar13[5] = (long)plVar21;
              auStack_2c0[0] = uVar20;
              func_0x000109eab760(plVar13,auStack_2c0);
              plVar15 = plVar28;
              plVar21 = plVar13;
            }
            plVar28 = plVar18;
            FUN_109f658b0(plVar18,0x38);
            if (plVar28 != (long *)0x0) {
              plVar28[6] = 0;
              plVar28[3] = 0;
              plVar28[2] = 0;
              plVar28[5] = 0;
              plVar28[4] = 0;
              plVar28[1] = 0;
              *plVar28 = 0;
            }
            plVar28[2] = 0;
            *(undefined4 *)(plVar28 + 3) = 8;
            *plVar28 = (long)&PTR_DAT_110b63f38;
            plVar28[4] = (long)plVar14;
            plVar28[5] = (long)plVar21;
            *(byte *)(plVar28 + 6) =
                 *(byte *)(plVar28 + 6) & 0xf0 |
                 (byte)(~(-1 << (ulong)(uVar7 & 0x1f)) << (ulong)(uVar22 & 0x1f)) & 0xf;
            plVar21 = plVar28 + 1;
            *plVar21 = (long)plVar25;
            puVar24 = (undefined8 *)plVar16[3];
            plVar28[2] = (long)puVar24;
            *puVar24 = plVar21;
            plVar16[3] = (long)plVar21;
            uVar6 = uVar7 + uVar22;
            if (bVar1 <= uVar6) {
              iVar29 = iVar29 + 1;
            }
            uVar22 = 0;
            if (bVar1 > uVar6) {
              uVar22 = uVar6;
            }
            iVar27 = iVar27 - uVar7;
          } while ((iVar27 != 0) && (uVar20 = uVar7 + uVar20, uVar20 < uVar23));
          plVar10 = (long *)*plVar10;
        } while (*plVar10 != 0);
      }
    }
    else {
      lVar11 = plVar17[4];
      if (bVar2 < *(byte *)(lVar11 + 0xe) || bVar1 < *(byte *)(lVar11 + 0xd)) {
        uVar22 = 0;
        if (*(byte *)(lVar11 + 0xd) <= bVar1) {
          uVar22 = (uint)bVar2;
        }
        uVar26 = (ulong)uVar22;
        func_0x000109ec8580();
        if (uVar22 < *(byte *)(plVar17[4] + 0xe)) {
          do {
            if (*(char *)(lVar11 + 4) == '\x04') {
              auStack_2c0[2] = 0;
              auStack_2c0[3] = 0;
              auStack_2c0[0] = 0;
              auStack_2c0[1] = 0;
              lStack_2a8 = 0;
              lStack_2b0 = 0;
              (auStack_2c0 + uVar26 * 2)[0] = 0;
              (auStack_2c0 + uVar26 * 2)[1] = 0x3ff00000;
            }
            else {
              auStack_2c0[0] = 0;
              auStack_2c0[1] = 0;
              auStack_2c0[2] = 0;
              auStack_2c0[3] = 0;
              auStack_2c0[uVar26] = 0x3f800000;
            }
            plVar12 = plVar18;
            FUN_109f658b0(plVar18,0xb0);
            if (plVar12 != (long *)0x0) {
              plVar12[0x13] = 0;
              plVar12[0x12] = 0;
              plVar12[0x15] = 0;
              plVar12[0x14] = 0;
              plVar12[0xf] = 0;
              plVar12[0xe] = 0;
              plVar12[0x11] = 0;
              plVar12[0x10] = 0;
              plVar12[0xb] = 0;
              plVar12[10] = 0;
              plVar12[0xd] = 0;
              plVar12[0xc] = 0;
              plVar12[7] = 0;
              plVar12[6] = 0;
              plVar12[9] = 0;
              plVar12[8] = 0;
              plVar12[3] = 0;
              plVar12[2] = 0;
              plVar12[5] = 0;
              plVar12[4] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
            }
            plVar12[0xe] = lStack_278;
            plVar12[0xd] = lStack_280;
            plVar12[0x10] = lStack_268;
            plVar12[0xf] = lStack_270;
            plVar12[0x12] = lStack_258;
            plVar12[0x11] = lStack_260;
            plVar12[0x14] = lStack_248;
            plVar12[0x13] = lStack_250;
            plVar12[6] = CONCAT44(auStack_2c0[3],auStack_2c0[2]);
            plVar12[5] = CONCAT44(auStack_2c0[1],auStack_2c0[0]);
            plVar12[8] = lStack_2a8;
            plVar12[7] = lStack_2b0;
            plVar12[10] = lStack_298;
            plVar12[9] = lStack_2a0;
            plVar12[1] = 0;
            plVar12[2] = 0;
            *(undefined4 *)(plVar12 + 3) = 3;
            *plVar12 = (long)&PTR_DAT_110b63f80;
            plVar12[0x15] = 0;
            plVar12[4] = lVar11;
            plVar12[0xc] = lStack_288;
            plVar12[0xb] = lStack_290;
            plVar12 = plVar18;
            FUN_109f658b0(plVar18,0x38);
            if (plVar12 != (long *)0x0) {
              plVar12[6] = 0;
              plVar12[3] = 0;
              plVar12[2] = 0;
              plVar12[5] = 0;
              plVar12[4] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
            }
            plVar10 = plVar18;
            FUN_109f658b0(plVar18,0xb0);
            if (plVar10 != (long *)0x0) {
              plVar10[0x13] = 0;
              plVar10[0x12] = 0;
              plVar10[0x15] = 0;
              plVar10[0x14] = 0;
              plVar10[0xf] = 0;
              plVar10[0xe] = 0;
              plVar10[0x11] = 0;
              plVar10[0x10] = 0;
              plVar10[0xb] = 0;
              plVar10[10] = 0;
              plVar10[0xd] = 0;
              plVar10[0xc] = 0;
              plVar10[7] = 0;
              plVar10[6] = 0;
              plVar10[9] = 0;
              plVar10[8] = 0;
              plVar10[3] = 0;
              plVar10[2] = 0;
              plVar10[5] = 0;
              plVar10[4] = 0;
              plVar10[1] = 0;
              *plVar10 = 0;
            }
            func_0x000109ea98b0(plVar10,uVar26,1);
            func_0x000109eab3d8(plVar12,plVar17,plVar10);
            plVar12 = plVar18;
            FUN_109f658b0(plVar18,0x38);
            if (plVar12 != (long *)0x0) {
              plVar12[6] = 0;
              plVar12[3] = 0;
              plVar12[2] = 0;
              plVar12[5] = 0;
              plVar12[4] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
            }
            func_0x000109ea9180();
            plVar12[1] = (long)plVar25;
            plVar10 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              plVar10 = plVar12 + 1;
            }
            puVar24 = (undefined8 *)plVar16[3];
            plVar12[2] = (long)puVar24;
            *puVar24 = plVar10;
            plVar16[3] = (long)plVar10;
            uVar26 = uVar26 + 1;
          } while (uVar26 < *(byte *)(plVar17[4] + 0xe));
        }
      }
      plVar12 = plVar18;
      FUN_109f658b0(plVar18,0x90);
      if (plVar12 != (long *)0x0) {
        plVar12[0xf] = 0;
        plVar12[0xe] = 0;
        plVar12[0x11] = 0;
        plVar12[0x10] = 0;
        plVar12[0xb] = 0;
        plVar12[10] = 0;
        plVar12[0xd] = 0;
        plVar12[0xc] = 0;
        plVar12[7] = 0;
        plVar12[6] = 0;
        plVar12[9] = 0;
        plVar12[8] = 0;
        plVar12[3] = 0;
        plVar12[2] = 0;
        plVar12[5] = 0;
        plVar12[4] = 0;
        plVar12[1] = 0;
        *plVar12 = 0;
      }
      plVar19 = (long *)0xb;
      FUN_109eaba7c(plVar12,plVar21[4],&UNK_10f603f7f);
      plVar12[1] = (long)plVar25;
      puVar24 = (undefined8 *)plVar16[3];
      plVar10 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 1;
      }
      plVar12[2] = (long)puVar24;
      *puVar24 = plVar10;
      plVar16[3] = (long)plVar10;
      plVar10 = plVar18;
      FUN_109f658b0(plVar18,0x30);
      if (plVar10 != (long *)0x0) {
        plVar10[3] = 0;
        plVar10[2] = 0;
        plVar10[5] = 0;
        plVar10[4] = 0;
        plVar10[1] = 0;
        *plVar10 = 0;
      }
      plVar10[1] = 0;
      plVar10[2] = 0;
      *(undefined4 *)(plVar10 + 3) = 2;
      *plVar10 = (long)&PTR_DAT_110b64048;
      plVar10[5] = (long)plVar12;
      plVar10[4] = plVar12[4];
      plVar10 = plVar18;
      FUN_109f658b0(plVar18,0x38);
      if (plVar10 != (long *)0x0) {
        plVar10[6] = 0;
        plVar10[3] = 0;
        plVar10[2] = 0;
        plVar10[5] = 0;
        plVar10[4] = 0;
        plVar10[1] = 0;
        *plVar10 = 0;
      }
      func_0x000109ea9180();
      plVar10[1] = (long)plVar25;
      plVar15 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        plVar15 = plVar10 + 1;
      }
      puVar24 = (undefined8 *)plVar16[3];
      plVar10[2] = (long)puVar24;
      *puVar24 = plVar15;
      plVar16[3] = (long)plVar15;
      uVar22 = (uint)*(byte *)(plVar21[4] + 0xd);
      uVar20 = (uint)*(byte *)(plVar17[4] + 0xd);
      if (uVar20 <= uVar22) {
        uVar22 = uVar20;
      }
      uVar20 = (uint)*(byte *)(plVar21[4] + 0xe);
      uVar23 = (uint)*(byte *)(plVar17[4] + 0xe);
      if (uVar23 <= uVar20) {
        uVar20 = uVar23;
      }
      auStack_2c0[0] = 0;
      auStack_2c0[1] = 0;
      auStack_2c0[2] = 0;
      auStack_2c0[3] = 0;
      if (1 < uVar22) {
        plVar10 = (long *)0x1;
        do {
          auStack_2c0[(long)plVar10] = (uint)plVar10;
          plVar10 = (long *)((long)plVar10 + 1);
        } while ((long *)(ulong)uVar22 != plVar10);
      }
      plVar15 = plVar28;
      if (uVar20 != 0) {
        uVar23 = 0;
        do {
          plVar10 = plVar18;
          FUN_109f658b0(plVar18,0x38);
          if (plVar10 != (long *)0x0) {
            plVar10[6] = 0;
            plVar10[3] = 0;
            plVar10[2] = 0;
            plVar10[5] = 0;
            plVar10[4] = 0;
            plVar10[1] = 0;
            *plVar10 = 0;
          }
          plVar15 = plVar18;
          FUN_109f658b0(plVar18,0xb0);
          if (plVar15 != (long *)0x0) {
            plVar15[0x13] = 0;
            plVar15[0x12] = 0;
            plVar15[0x15] = 0;
            plVar15[0x14] = 0;
            plVar15[0xf] = 0;
            plVar15[0xe] = 0;
            plVar15[0x11] = 0;
            plVar15[0x10] = 0;
            plVar15[0xb] = 0;
            plVar15[10] = 0;
            plVar15[0xd] = 0;
            plVar15[0xc] = 0;
            plVar15[7] = 0;
            plVar15[6] = 0;
            plVar15[9] = 0;
            plVar15[8] = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          func_0x000109ea98b0(plVar15,uVar23,1);
          func_0x000109eab3d8(plVar10,plVar17,plVar15);
          plVar21 = plVar18;
          FUN_109f658b0(plVar18,0x38);
          if (plVar21 != (long *)0x0) {
            plVar21[6] = 0;
            plVar21[3] = 0;
            plVar21[2] = 0;
            plVar21[5] = 0;
            plVar21[4] = 0;
            plVar21[1] = 0;
            *plVar21 = 0;
          }
          plVar15 = plVar18;
          FUN_109f658b0(plVar18,0xb0);
          if (plVar15 != (long *)0x0) {
            plVar15[0x13] = 0;
            plVar15[0x12] = 0;
            plVar15[0x15] = 0;
            plVar15[0x14] = 0;
            plVar15[0xf] = 0;
            plVar15[0xe] = 0;
            plVar15[0x11] = 0;
            plVar15[0x10] = 0;
            plVar15[0xb] = 0;
            plVar15[10] = 0;
            plVar15[0xd] = 0;
            plVar15[0xc] = 0;
            plVar15[7] = 0;
            plVar15[6] = 0;
            plVar15[9] = 0;
            plVar15[8] = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          func_0x000109ea98b0(plVar15,uVar23,1);
          func_0x000109eab3d8(plVar21,plVar12);
          if (*(char *)(plVar10[4] + 0xd) != *(char *)(plVar21[4] + 0xd)) {
            plVar28 = plVar18;
            FUN_109f658b0(plVar18,0x38);
            if (plVar28 != (long *)0x0) {
              plVar28[6] = 0;
              plVar28[3] = 0;
              plVar28[2] = 0;
              plVar28[5] = 0;
              plVar28[4] = 0;
              plVar28[1] = 0;
              *plVar28 = 0;
            }
            plVar28[1] = 0;
            plVar28[2] = 0;
            *(undefined4 *)(plVar28 + 3) = 5;
            *plVar28 = (long)&PTR_DAT_110b641e0;
            plVar28[4] = (long)&UNK_10e05d730;
            plVar28[5] = (long)plVar21;
            plVar15 = (long *)(ulong)uVar22;
            func_0x000109eab760(plVar28,auStack_2c0);
            plVar21 = plVar28;
          }
          plVar28 = plVar18;
          FUN_109f658b0(plVar18,0x38);
          if (plVar28 != (long *)0x0) {
            plVar28[6] = 0;
            plVar28[3] = 0;
            plVar28[2] = 0;
            plVar28[5] = 0;
            plVar28[4] = 0;
            plVar28[1] = 0;
            *plVar28 = 0;
          }
          plVar28[2] = 0;
          *(undefined4 *)(plVar28 + 3) = 8;
          *plVar28 = (long)&PTR_DAT_110b63f38;
          plVar28[4] = (long)plVar10;
          plVar28[5] = (long)plVar21;
          *(byte *)(plVar28 + 6) =
               (*(byte *)(plVar28 + 6) & 0xf0 | (byte)(-1 << (ulong)(uVar22 & 0x1f)) & 0xf) ^ 0xf;
          plVar10 = plVar28 + 1;
          *plVar10 = (long)plVar25;
          puVar24 = (undefined8 *)plVar16[3];
          plVar28[2] = (long)puVar24;
          *puVar24 = plVar10;
          plVar16[3] = (long)plVar10;
          uVar23 = uVar23 + 1;
        } while (uVar20 != uVar23);
      }
    }
  }
  lVar11 = 0x30;
  FUN_109f658b0();
  if (plVar18 != (long *)0x0) {
    plVar18[3] = 0;
    plVar18[2] = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[1] = 0;
    *plVar18 = 0;
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *(undefined4 *)(plVar18 + 3) = 2;
  *plVar18 = (long)&PTR_DAT_110b64048;
  plVar18[5] = (long)plVar17;
  plVar18[4] = plVar17[4];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_230) {
    ___stack_chk_fail();
    __Unwind_Resume();
    plVar16 = (long *)0x0;
    plVar12 = plVar15 + -5;
    if ((plVar12 != (long *)0x0) && (*plVar15 != 0)) {
      plVar16 = (long *)0x0;
      do {
        (**(code **)(*plVar12 + 0x18))(plVar12,1);
        plVar10 = plVar12;
        (**(code **)(*plVar12 + 8))(plVar12,plVar18,plVar19);
        if (plVar10 == (long *)0x0) {
          plVar10 = plVar19;
          FUN_109f658b0(plVar19,0x28);
          if (plVar10 != (long *)0x0) {
            plVar10[4] = 0;
            plVar10[1] = 0;
            *plVar10 = 0;
            plVar10[3] = 0;
            plVar10[2] = 0;
          }
          plVar17 = plVar10 + 1;
          *plVar17 = lVar11 + 0x10;
          plVar10[2] = 0;
          *(undefined4 *)(plVar10 + 3) = 0x16;
          *plVar10 = (long)&PTR_DAT_110b63eb8;
          plVar10[4] = (long)&UNK_10e05d730;
        }
        else {
          plVar17 = plVar10;
          (**(code **)(*plVar10 + 0x30))();
          if (plVar17 != (long *)0x0) {
            plVar10 = plVar17;
          }
          plVar17 = plVar10 + 1;
          *plVar17 = lVar11 + 0x10;
        }
        puVar24 = *(undefined8 **)(lVar11 + 0x18);
        plVar10[2] = (long)puVar24;
        *puVar24 = plVar17;
        *(long **)(lVar11 + 0x18) = plVar17;
        plVar16 = (long *)(ulong)((int)plVar16 + 1);
        plVar10 = plVar12 + 5;
        plVar12 = (long *)*plVar10 + -5;
      } while (*(long *)*plVar10 != 0 && plVar12 != (long *)0x0);
    }
    return plVar16;
  }
  return plVar18;
}



/* Entry: 109e12cc0; end: 109e1330f;  */

long * FUN_109e12cc0(long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  int iVar28;
  long *plVar29;
  int iVar30;
  undefined *puVar31;
  long lVar32;
  ulong uVar33;
  uint auStack_260 [4];
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long alStack_100 [20];
  
  alStack_100[0x12] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar24 = param_4;
  FUN_109f658b0(param_4,0x90);
  if (plVar24 != (long *)0x0) {
    plVar24[0xf] = 0;
    plVar24[0xe] = 0;
    plVar24[0x11] = 0;
    plVar24[0x10] = 0;
    plVar24[0xb] = 0;
    plVar24[10] = 0;
    plVar24[0xd] = 0;
    plVar24[0xc] = 0;
    plVar24[7] = 0;
    plVar24[6] = 0;
    plVar24[9] = 0;
    plVar24[8] = 0;
    plVar24[3] = 0;
    plVar24[2] = 0;
    plVar24[5] = 0;
    plVar24[4] = 0;
    plVar24[1] = 0;
    *plVar24 = 0;
  }
  plVar14 = (long *)&UNK_10f603f60;
  plVar15 = (long *)0xb;
  FUN_109eaba7c();
  lVar23 = param_2 + 0x10;
  plVar24[1] = lVar23;
  plVar25 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    plVar25 = plVar24 + 1;
  }
  puVar22 = *(undefined8 **)(param_2 + 0x18);
  plVar24[2] = (long)puVar22;
  *puVar22 = plVar25;
  *(long **)(param_2 + 0x18) = plVar25;
  uVar20 = (uint)*(byte *)(param_1 + 0xe) * (uint)*(byte *)(param_1 + 0xd);
  plVar25 = (long *)(ulong)uVar20;
  plVar26 = (long *)*param_3;
  if ((*(char *)(plVar26[3] + 0xd) == '\x01') && ((*(byte *)(plVar26[3] + 4) & 0xf0) == 0)) {
    plVar18 = (long *)*plVar26;
    if (*plVar18 == 0) {
      FUN_109f658b0(param_4,0x38);
      if (param_4 != (long *)0x0) {
        param_4[6] = 0;
        param_4[3] = 0;
        param_4[2] = 0;
        param_4[5] = 0;
        param_4[4] = 0;
        param_4[1] = 0;
        *param_4 = 0;
      }
      param_4[1] = 0;
      param_4[2] = 0;
      *(undefined4 *)(param_4 + 3) = 5;
      *param_4 = (long)&PTR_DAT_110b641e0;
      param_4[4] = (long)&UNK_10e05d730;
      param_4[5] = (long)(plVar26 + -1);
      alStack_100[0] = 0;
      alStack_100[1] = 0;
      plVar26 = alStack_100;
      plVar24 = param_4;
      func_0x000109eab760();
      goto LAB_109e13244;
    }
LAB_109e12db0:
    alStack_100[0xf] = 0;
    alStack_100[0xe] = 0;
    alStack_100[0xd] = 0;
    alStack_100[0xc] = 0;
    alStack_100[0xb] = 0;
    alStack_100[10] = 0;
    alStack_100[9] = 0;
    alStack_100[8] = 0;
    alStack_100[7] = 0;
    alStack_100[6] = 0;
    alStack_100[5] = 0;
    alStack_100[4] = 0;
    alStack_100[3] = 0;
    alStack_100[2] = 0;
    alStack_100[1] = 0;
    alStack_100[0] = 0;
    lVar19 = 0;
    uVar27 = 0;
    uVar17 = 0;
    uVar21 = 0;
    iVar30 = 0;
    do {
      plVar25 = plVar18;
      uVar6 = (uint)*(byte *)(plVar26[3] + 0xe) * (uint)*(byte *)(plVar26[3] + 0xd);
      uVar7 = uVar20 - uVar17;
      if (uVar6 + uVar17 <= uVar20) {
        uVar7 = uVar6;
      }
      if ((int)plVar26[2] == 3) {
        if (uVar7 != 0) {
          iVar28 = 0;
          plVar25 = plVar26 + -1;
          lVar32 = -(ulong)uVar7;
          uVar33 = uVar27;
          do {
            bVar1 = *(byte *)(plVar26[3] + 4);
            if (bVar1 < 4) {
              if (bVar1 == 0) {
                plVar18 = plVar25;
                func_0x000109eaa478(plVar25,iVar28);
                uVar9 = SUB84(plVar18,0);
              }
              else {
                if (bVar1 != 1) {
                  if (bVar1 == 2) {
                    func_0x000109eaa610(plVar25,iVar28);
                    *(int *)((long)alStack_100 + uVar33 * 4) = (int)lVar19;
                  }
                  goto LAB_109e12edc;
                }
                plVar18 = plVar25;
                func_0x000109eaa544(plVar25,iVar28);
                uVar9 = SUB84(plVar18,0);
              }
              *(undefined4 *)((long)alStack_100 + uVar33 * 4) = uVar9;
            }
            else {
              plVar18 = plVar25;
              if (bVar1 < 10) {
                if (bVar1 == 4) {
                  func_0x000109eaa810(plVar25,iVar28);
                  alStack_100[uVar33] = lVar19;
                }
                else if (bVar1 == 9) {
                  func_0x000109eaa908(plVar25,iVar28);
                  goto LAB_109e12ec4;
                }
              }
              else if (bVar1 == 10) {
                func_0x000109eaa9e4(plVar25,iVar28);
LAB_109e12ec4:
                alStack_100[uVar33] = (long)plVar18;
              }
              else if (bVar1 == 0xb) {
                func_0x000109eaa740(plVar25,iVar28);
                *(char *)((long)alStack_100 + uVar33) = (char)plVar18;
              }
            }
LAB_109e12edc:
            uVar33 = (ulong)((int)uVar33 + 1);
            iVar28 = iVar28 + 1;
            bVar8 = lVar32 != -1;
            lVar32 = lVar32 + 1;
          } while (bVar8);
          plVar25 = (long *)*plVar26;
        }
        uVar21 = ~(-1 << (ulong)(uVar7 & 0x1f)) << (ulong)(uVar17 & 0x1f) | uVar21;
        iVar30 = uVar7 + iVar30;
        uVar27 = (ulong)(uVar7 + (int)uVar27);
      }
      uVar17 = uVar7 + uVar17;
      plVar18 = (long *)*plVar25;
      plVar26 = plVar25;
    } while ((long *)*plVar25 != (long *)0x0);
    if (uVar21 != 0) {
      plVar25 = param_4;
      FUN_109f658b0(param_4,0x30);
      if (plVar25 != (long *)0x0) {
        plVar25[3] = 0;
        plVar25[2] = 0;
        plVar25[5] = 0;
        plVar25[4] = 0;
        plVar25[1] = 0;
        *plVar25 = 0;
      }
      plVar25[1] = 0;
      plVar25[2] = 0;
      *(undefined4 *)(plVar25 + 3) = 2;
      *plVar25 = (long)&PTR_DAT_110b64048;
      plVar25[5] = (long)plVar24;
      lVar19 = plVar24[4];
      plVar25[4] = lVar19;
      uVar27 = (ulong)*(byte *)(lVar19 + 4);
      plVar14 = (long *)0x1;
      plVar15 = (long *)0x0;
      func_0x000109ec6c94(uVar27,iVar30,1,0,0,0);
      plVar26 = param_4;
      FUN_109f658b0(param_4,0xb0);
      if (plVar26 != (long *)0x0) {
        plVar26[0x13] = 0;
        plVar26[0x12] = 0;
        plVar26[0x15] = 0;
        plVar26[0x14] = 0;
        plVar26[0xf] = 0;
        plVar26[0xe] = 0;
        plVar26[0x11] = 0;
        plVar26[0x10] = 0;
        plVar26[0xb] = 0;
        plVar26[10] = 0;
        plVar26[0xd] = 0;
        plVar26[0xc] = 0;
        plVar26[7] = 0;
        plVar26[6] = 0;
        plVar26[9] = 0;
        plVar26[8] = 0;
        plVar26[3] = 0;
        plVar26[2] = 0;
        plVar26[5] = 0;
        plVar26[4] = 0;
        plVar26[1] = 0;
        *plVar26 = 0;
      }
      plVar26[0xe] = alStack_100[9];
      plVar26[0xd] = alStack_100[8];
      plVar26[0x10] = alStack_100[0xb];
      plVar26[0xf] = alStack_100[10];
      plVar26[0x12] = alStack_100[0xd];
      plVar26[0x11] = alStack_100[0xc];
      plVar26[0x14] = alStack_100[0xf];
      plVar26[0x13] = alStack_100[0xe];
      plVar26[6] = alStack_100[1];
      plVar26[5] = alStack_100[0];
      plVar26[8] = alStack_100[3];
      plVar26[7] = alStack_100[2];
      plVar26[10] = alStack_100[5];
      plVar26[9] = alStack_100[4];
      *(undefined4 *)(plVar26 + 3) = 3;
      plVar26[1] = 0;
      plVar26[2] = 0;
      *plVar26 = (long)&PTR_DAT_110b63f80;
      plVar26[0x15] = 0;
      plVar26[4] = uVar27;
      plVar26[0xc] = alStack_100[7];
      plVar26[0xb] = alStack_100[6];
      plVar18 = param_4;
      FUN_109f658b0(param_4,0x38);
      if (plVar18 != (long *)0x0) {
        plVar18[6] = 0;
        plVar18[3] = 0;
        plVar18[2] = 0;
        plVar18[5] = 0;
        plVar18[4] = 0;
        plVar18[1] = 0;
        *plVar18 = 0;
      }
      plVar18[2] = 0;
      *(undefined4 *)(plVar18 + 3) = 8;
      *plVar18 = (long)&PTR_DAT_110b63f38;
      plVar18[4] = (long)plVar25;
      plVar18[5] = (long)plVar26;
      *(byte *)(plVar18 + 6) = *(byte *)(plVar18 + 6) & 0xf0 | (byte)uVar21 & 0xf;
      plVar25 = plVar18 + 1;
      *plVar25 = lVar23;
      puVar22 = *(undefined8 **)(param_2 + 0x18);
      plVar18[2] = (long)puVar22;
      *puVar22 = plVar25;
      *(long **)(param_2 + 0x18) = plVar25;
    }
  }
  else {
    plVar18 = (long *)*plVar26;
    alStack_100[0xd] = 0;
    alStack_100[0xc] = 0;
    alStack_100[0xf] = 0;
    alStack_100[0xe] = 0;
    alStack_100[9] = 0;
    alStack_100[8] = 0;
    alStack_100[0xb] = 0;
    alStack_100[10] = 0;
    alStack_100[5] = 0;
    alStack_100[4] = 0;
    alStack_100[7] = 0;
    alStack_100[6] = 0;
    alStack_100[1] = 0;
    alStack_100[0] = 0;
    alStack_100[3] = 0;
    alStack_100[2] = 0;
    if (plVar18 != (long *)0x0) goto LAB_109e12db0;
  }
  plVar25 = *(long **)*param_3;
  if (plVar25 != (long *)0x0) {
    uVar17 = 0;
    plVar26 = (long *)*param_3;
    do {
      plVar18 = plVar25;
      uVar7 = (uint)*(byte *)(plVar26[3] + 0xe) * (uint)*(byte *)(plVar26[3] + 0xd);
      uVar21 = uVar20 - uVar17;
      if (uVar7 + uVar17 <= uVar20) {
        uVar21 = uVar7;
      }
      plVar25 = (long *)(ulong)uVar21;
      if (uVar21 == 0) break;
      if ((int)plVar26[2] != 3) {
        plVar14 = param_4;
        FUN_109f658b0(param_4,0x30);
        if (plVar14 != (long *)0x0) {
          plVar14[3] = 0;
          plVar14[2] = 0;
          plVar14[5] = 0;
          plVar14[4] = 0;
          plVar14[1] = 0;
          *plVar14 = 0;
        }
        plVar14[1] = 0;
        plVar14[2] = 0;
        *(undefined4 *)(plVar14 + 3) = 2;
        *plVar14 = (long)&PTR_DAT_110b64048;
        plVar14[5] = (long)plVar24;
        plVar14[4] = plVar24[4];
        plVar18 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar18 != (long *)0x0) {
          plVar18[6] = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
        }
        plVar18[1] = 0;
        plVar18[2] = 0;
        *(undefined4 *)(plVar18 + 3) = 5;
        *plVar18 = (long)&PTR_DAT_110b641e0;
        plVar18[4] = (long)&UNK_10e05d730;
        plVar18[5] = (long)(plVar26 + -1);
        alStack_100[0x11] = 0x300000002;
        alStack_100[0x10] = 0x100000000;
        func_0x000109eab760(plVar18,alStack_100 + 0x10);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar10 != (long *)0x0) {
          plVar10[6] = 0;
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        plVar10[2] = 0;
        *(undefined4 *)(plVar10 + 3) = 8;
        *plVar10 = (long)&PTR_DAT_110b63f38;
        plVar10[4] = (long)plVar14;
        plVar10[5] = (long)plVar18;
        plVar14 = plVar10 + 1;
        *plVar14 = lVar23;
        *(byte *)(plVar10 + 6) =
             *(byte *)(plVar10 + 6) & 0xf0 |
             (byte)(~(-1 << (ulong)(uVar21 & 0x1f)) << (ulong)(uVar17 & 0x1f)) & 0xf;
        puVar22 = *(undefined8 **)(param_2 + 0x18);
        plVar10[2] = (long)puVar22;
        *puVar22 = plVar14;
        *(long **)(param_2 + 0x18) = plVar14;
        plVar18 = (long *)*plVar26;
        plVar14 = plVar25;
      }
      uVar17 = uVar21 + uVar17;
      plVar25 = (long *)*plVar18;
      plVar26 = plVar18;
    } while ((long *)*plVar18 != (long *)0x0);
  }
  plVar26 = (long *)0x30;
  FUN_109f658b0();
  if (param_4 != (long *)0x0) {
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[1] = 0;
    *param_4 = 0;
  }
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)(param_4 + 3) = 2;
  *param_4 = (long)&PTR_DAT_110b64048;
  param_4[5] = (long)plVar24;
  param_4[4] = plVar24[4];
  plVar24 = param_4;
  plVar25 = plVar14;
LAB_109e13244:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_100[0x12]) {
    return param_4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = plVar15;
  FUN_109f658b0(plVar15,0x90);
  if (plVar14 != (long *)0x0) {
    plVar14[0xf] = 0;
    plVar14[0xe] = 0;
    plVar14[0x11] = 0;
    plVar14[0x10] = 0;
    plVar14[0xb] = 0;
    plVar14[10] = 0;
    plVar14[0xd] = 0;
    plVar14[0xc] = 0;
    plVar14[7] = 0;
    plVar14[6] = 0;
    plVar14[9] = 0;
    plVar14[8] = 0;
    plVar14[3] = 0;
    plVar14[2] = 0;
    plVar14[5] = 0;
    plVar14[4] = 0;
    plVar14[1] = 0;
    *plVar14 = 0;
  }
  plVar18 = (long *)&UNK_10f603f69;
  plVar16 = (long *)0xb;
  FUN_109eaba7c(plVar14,plVar24);
  plVar10 = plVar26 + 2;
  plVar14[1] = (long)plVar10;
  plVar12 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar14 + 1;
  }
  puVar22 = (undefined8 *)plVar26[3];
  plVar14[2] = (long)puVar22;
  *puVar22 = plVar12;
  plVar26[3] = (long)plVar12;
  plVar25 = (long *)*plVar25;
  plVar29 = plVar25 + -1;
  plVar12 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    plVar12 = plVar29;
  }
  lVar23 = plVar12[4];
  bVar1 = *(byte *)(lVar23 + 0xd);
  if (((bVar1 == 1) && (uVar20 = *(uint *)(lVar23 + 4), (uVar20 & 0xf0) == 0)) &&
     (*(long *)*plVar25 == 0)) {
    plVar25 = plVar15;
    FUN_109f658b0(plVar15,0x90);
    if (plVar25 != (long *)0x0) {
      plVar25[0xf] = 0;
      plVar25[0xe] = 0;
      plVar25[0x11] = 0;
      plVar25[0x10] = 0;
      plVar25[0xb] = 0;
      plVar25[10] = 0;
      plVar25[0xd] = 0;
      plVar25[0xc] = 0;
      plVar25[7] = 0;
      plVar25[6] = 0;
      plVar25[9] = 0;
      plVar25[8] = 0;
      plVar25[3] = 0;
      plVar25[2] = 0;
      plVar25[5] = 0;
      plVar25[4] = 0;
      plVar25[1] = 0;
      *plVar25 = 0;
    }
    uVar27 = (ulong)(uVar20 & 0xf);
    func_0x000109ec6c94(uVar27,4,1,0,0,0);
    plVar16 = (long *)0xb;
    FUN_109eaba7c(plVar25,uVar27,&UNK_10f603f72);
    lVar23 = 0;
    plVar25[1] = (long)plVar10;
    plVar18 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      plVar18 = plVar25 + 1;
    }
    puVar22 = (undefined8 *)plVar26[3];
    plVar25[2] = (long)puVar22;
    *puVar22 = plVar18;
    plVar26[3] = (long)plVar18;
    cVar4 = *(char *)(plVar12[4] + 4);
    do {
      if (cVar4 == '\x02') {
        auStack_260[lVar23] = 0;
      }
      else {
        (auStack_260 + lVar23 * 2)[0] = 0;
        (auStack_260 + lVar23 * 2)[1] = 0;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 4);
    plVar12 = plVar15;
    FUN_109f658b0(plVar15,0x38);
    if (plVar12 != (long *)0x0) {
      plVar12[6] = 0;
      plVar12[3] = 0;
      plVar12[2] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[1] = 0;
      *plVar12 = 0;
    }
    plVar13 = plVar15;
    FUN_109f658b0(plVar15,0x30);
    if (plVar13 != (long *)0x0) {
      plVar13[3] = 0;
      plVar13[2] = 0;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[1] = 0;
      *plVar13 = 0;
    }
    plVar13[1] = 0;
    plVar13[2] = 0;
    *(undefined4 *)(plVar13 + 3) = 2;
    *plVar13 = (long)&PTR_DAT_110b64048;
    plVar13[5] = (long)plVar25;
    plVar13[4] = plVar25[4];
    plVar18 = plVar15;
    FUN_109f658b0(plVar15,0xb0);
    if (plVar18 != (long *)0x0) {
      plVar18[0x13] = 0;
      plVar18[0x12] = 0;
      plVar18[0x15] = 0;
      plVar18[0x14] = 0;
      plVar18[0xf] = 0;
      plVar18[0xe] = 0;
      plVar18[0x11] = 0;
      plVar18[0x10] = 0;
      plVar18[0xb] = 0;
      plVar18[10] = 0;
      plVar18[0xd] = 0;
      plVar18[0xc] = 0;
      plVar18[7] = 0;
      plVar18[6] = 0;
      plVar18[9] = 0;
      plVar18[8] = 0;
      plVar18[3] = 0;
      plVar18[2] = 0;
      plVar18[5] = 0;
      plVar18[4] = 0;
      plVar18[1] = 0;
      *plVar18 = 0;
    }
    lVar23 = plVar25[4];
    plVar18[0xe] = lStack_218;
    plVar18[0xd] = lStack_220;
    plVar18[0x10] = lStack_208;
    plVar18[0xf] = lStack_210;
    plVar18[0x12] = lStack_1f8;
    plVar18[0x11] = lStack_200;
    plVar18[0x14] = lStack_1e8;
    plVar18[0x13] = lStack_1f0;
    plVar18[6] = CONCAT44(auStack_260[3],auStack_260[2]);
    plVar18[5] = CONCAT44(auStack_260[1],auStack_260[0]);
    plVar18[8] = lStack_248;
    plVar18[7] = lStack_250;
    plVar18[10] = lStack_238;
    plVar18[9] = lStack_240;
    *(undefined4 *)(plVar18 + 3) = 3;
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&PTR_DAT_110b63f80;
    plVar18[0x15] = 0;
    plVar18[4] = lVar23;
    plVar18[0xc] = lStack_228;
    plVar18[0xb] = lStack_230;
    func_0x000109ea9180(plVar12,plVar13);
    plVar12[1] = (long)plVar10;
    puVar22 = (undefined8 *)plVar26[3];
    plVar13 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
    }
    plVar12[2] = (long)puVar22;
    *puVar22 = plVar13;
    plVar26[3] = (long)plVar13;
    plVar12 = plVar15;
    FUN_109f658b0(plVar15,0x30);
    if (plVar12 != (long *)0x0) {
      plVar12[3] = 0;
      plVar12[2] = 0;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[1] = 0;
      *plVar12 = 0;
    }
    plVar12[1] = 0;
    plVar12[2] = 0;
    *(undefined4 *)(plVar12 + 3) = 2;
    *plVar12 = (long)&PTR_DAT_110b64048;
    plVar12[5] = (long)plVar25;
    plVar12[4] = plVar25[4];
    plVar13 = plVar15;
    FUN_109f658b0(plVar15,0x38);
    if (plVar13 != (long *)0x0) {
      plVar13[6] = 0;
      plVar13[3] = 0;
      plVar13[2] = 0;
      plVar13[5] = 0;
      plVar13[4] = 0;
      plVar13[1] = 0;
      *plVar13 = 0;
    }
    plVar13[2] = 0;
    *(undefined4 *)(plVar13 + 3) = 8;
    *plVar13 = (long)&PTR_DAT_110b63f38;
    plVar13[4] = (long)plVar12;
    plVar13[5] = (long)plVar29;
    *(byte *)(plVar13 + 6) = *(byte *)(plVar13 + 6) & 0xf0 | 1;
    plVar12 = plVar13 + 1;
    *plVar12 = (long)plVar10;
    puVar22 = (undefined8 *)plVar26[3];
    plVar13[2] = (long)puVar22;
    *puVar22 = plVar12;
    plVar26[3] = (long)plVar12;
    bVar1 = *(byte *)((long)plVar24 + 0xe);
    uVar20 = (uint)bVar1;
    if ((uint)*(byte *)((long)plVar24 + 0xd) <= (uint)bVar1) {
      uVar20 = (uint)*(byte *)((long)plVar24 + 0xd);
    }
    uVar27 = (ulong)uVar20;
    if (uVar20 != 0) {
      uVar33 = 0;
      puVar31 = &UNK_10e060b8c;
      do {
        plVar18 = plVar15;
        FUN_109f658b0(plVar15,0xb0);
        if (plVar18 != (long *)0x0) {
          plVar18[0x13] = 0;
          plVar18[0x12] = 0;
          plVar18[0x15] = 0;
          plVar18[0x14] = 0;
          plVar18[0xf] = 0;
          plVar18[0xe] = 0;
          plVar18[0x11] = 0;
          plVar18[0x10] = 0;
          plVar18[0xb] = 0;
          plVar18[10] = 0;
          plVar18[0xd] = 0;
          plVar18[0xc] = 0;
          plVar18[7] = 0;
          plVar18[6] = 0;
          plVar18[9] = 0;
          plVar18[8] = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
        }
        FUN_109ea98b0(plVar18,uVar33,1);
        plVar12 = plVar15;
        FUN_109f658b0(plVar15,0x38);
        if (plVar12 != (long *)0x0) {
          plVar12[6] = 0;
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        func_0x000109eab3d8(plVar12,plVar14,plVar18);
        plVar12 = plVar15;
        FUN_109f658b0(plVar15,0x30);
        if (plVar12 != (long *)0x0) {
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        plVar12[1] = 0;
        plVar12[2] = 0;
        *(undefined4 *)(plVar12 + 3) = 2;
        *plVar12 = (long)&PTR_DAT_110b64048;
        plVar12[5] = (long)plVar25;
        plVar12[4] = plVar25[4];
        plVar18 = plVar15;
        FUN_109f658b0(plVar15,0x38);
        if (plVar18 != (long *)0x0) {
          plVar18[6] = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
        }
        uVar5 = *(undefined1 *)((long)plVar24 + 0xd);
        plVar18[1] = 0;
        plVar18[2] = 0;
        *(undefined4 *)(plVar18 + 3) = 5;
        *plVar18 = (long)&PTR_DAT_110b641e0;
        plVar18[4] = (long)&UNK_10e05d730;
        plVar18[5] = (long)plVar12;
        func_0x000109eab760(plVar18,puVar31,uVar5);
        plVar12 = plVar15;
        FUN_109f658b0(plVar15,0x38);
        if (plVar12 != (long *)0x0) {
          plVar12[6] = 0;
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        func_0x000109ea9180();
        plVar12[1] = (long)plVar10;
        plVar29 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          plVar29 = plVar12 + 1;
        }
        puVar22 = (undefined8 *)plVar26[3];
        plVar12[2] = (long)puVar22;
        *puVar22 = plVar29;
        plVar26[3] = (long)plVar29;
        uVar33 = uVar33 + 1;
        puVar31 = puVar31 + 0x10;
      } while (uVar27 != uVar33);
      bVar1 = *(byte *)((long)plVar24 + 0xe);
    }
    if (uVar20 < bVar1) {
      do {
        plVar18 = plVar15;
        FUN_109f658b0(plVar15,0xb0);
        if (plVar18 != (long *)0x0) {
          plVar18[0x13] = 0;
          plVar18[0x12] = 0;
          plVar18[0x15] = 0;
          plVar18[0x14] = 0;
          plVar18[0xf] = 0;
          plVar18[0xe] = 0;
          plVar18[0x11] = 0;
          plVar18[0x10] = 0;
          plVar18[0xb] = 0;
          plVar18[10] = 0;
          plVar18[0xd] = 0;
          plVar18[0xc] = 0;
          plVar18[7] = 0;
          plVar18[6] = 0;
          plVar18[9] = 0;
          plVar18[8] = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
        }
        FUN_109ea98b0(plVar18,uVar27,1);
        plVar12 = plVar15;
        FUN_109f658b0(plVar15,0x38);
        if (plVar12 != (long *)0x0) {
          plVar12[6] = 0;
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        func_0x000109eab3d8(plVar12,plVar14,plVar18);
        plVar12 = plVar15;
        FUN_109f658b0(plVar15,0x30);
        if (plVar12 != (long *)0x0) {
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        plVar12[1] = 0;
        plVar12[2] = 0;
        *(undefined4 *)(plVar12 + 3) = 2;
        *plVar12 = (long)&PTR_DAT_110b64048;
        plVar12[5] = (long)plVar25;
        plVar12[4] = plVar25[4];
        plVar18 = plVar15;
        FUN_109f658b0(plVar15,0x38);
        if (plVar18 != (long *)0x0) {
          plVar18[6] = 0;
          plVar18[3] = 0;
          plVar18[2] = 0;
          plVar18[5] = 0;
          plVar18[4] = 0;
          plVar18[1] = 0;
          *plVar18 = 0;
        }
        uVar5 = *(undefined1 *)((long)plVar24 + 0xd);
        plVar18[1] = 0;
        plVar18[2] = 0;
        *(undefined4 *)(plVar18 + 3) = 5;
        *plVar18 = (long)&PTR_DAT_110b641e0;
        plVar18[4] = (long)&UNK_10e05d730;
        plVar18[5] = (long)plVar12;
        uStack_1d8 = 0x100000001;
        uStack_1e0 = 0x100000001;
        func_0x000109eab760(plVar18,&uStack_1e0,uVar5);
        plVar12 = plVar15;
        FUN_109f658b0(plVar15,0x38);
        if (plVar12 != (long *)0x0) {
          plVar12[6] = 0;
          plVar12[3] = 0;
          plVar12[2] = 0;
          plVar12[5] = 0;
          plVar12[4] = 0;
          plVar12[1] = 0;
          *plVar12 = 0;
        }
        func_0x000109ea9180();
        plVar12[1] = (long)plVar10;
        plVar29 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          plVar29 = plVar12 + 1;
        }
        puVar22 = (undefined8 *)plVar26[3];
        plVar12[2] = (long)puVar22;
        *puVar22 = plVar29;
        plVar26[3] = (long)plVar29;
        uVar20 = (int)uVar27 + 1;
        uVar27 = (ulong)uVar20;
      } while (uVar20 < *(byte *)((long)plVar24 + 0xe));
    }
  }
  else {
    bVar2 = *(byte *)(lVar23 + 0xe);
    if ((bVar2 < 2) || (2 < *(byte *)(lVar23 + 4) - 2)) {
      if (*plVar25 != 0) {
        uVar20 = 0;
        iVar30 = 0;
        bVar1 = *(byte *)((long)plVar24 + 0xd);
        iVar28 = (uint)*(byte *)((long)plVar24 + 0xe) * (uint)bVar1;
        do {
          if (iVar28 == 0) break;
          bVar2 = *(byte *)(plVar25[3] + 0xd);
          bVar3 = *(byte *)(plVar25[3] + 0xe);
          plVar24 = plVar15;
          FUN_109f658b0(plVar15,0x90);
          if (plVar24 != (long *)0x0) {
            plVar24[0xf] = 0;
            plVar24[0xe] = 0;
            plVar24[0x11] = 0;
            plVar24[0x10] = 0;
            plVar24[0xb] = 0;
            plVar24[10] = 0;
            plVar24[0xd] = 0;
            plVar24[0xc] = 0;
            plVar24[7] = 0;
            plVar24[6] = 0;
            plVar24[9] = 0;
            plVar24[8] = 0;
            plVar24[3] = 0;
            plVar24[2] = 0;
            plVar24[5] = 0;
            plVar24[4] = 0;
            plVar24[1] = 0;
            *plVar24 = 0;
          }
          plVar16 = (long *)0xb;
          FUN_109eaba7c(plVar24,plVar25[3],&UNK_10f603f72);
          plVar24[1] = (long)plVar10;
          puVar22 = (undefined8 *)plVar26[3];
          plVar18 = (long *)0x0;
          if (plVar24 != (long *)0x0) {
            plVar18 = plVar24 + 1;
          }
          plVar24[2] = (long)puVar22;
          *puVar22 = plVar18;
          plVar26[3] = (long)plVar18;
          plVar18 = plVar15;
          FUN_109f658b0(plVar15,0x30);
          if (plVar18 != (long *)0x0) {
            plVar18[3] = 0;
            plVar18[2] = 0;
            plVar18[5] = 0;
            plVar18[4] = 0;
            plVar18[1] = 0;
            *plVar18 = 0;
          }
          plVar18[1] = 0;
          plVar18[2] = 0;
          *(undefined4 *)(plVar18 + 3) = 2;
          *plVar18 = (long)&PTR_DAT_110b64048;
          plVar18[5] = (long)plVar24;
          plVar18[4] = plVar24[4];
          plVar18 = plVar15;
          FUN_109f658b0(plVar15,0x38);
          if (plVar18 != (long *)0x0) {
            plVar18[6] = 0;
            plVar18[3] = 0;
            plVar18[2] = 0;
            plVar18[5] = 0;
            plVar18[4] = 0;
            plVar18[1] = 0;
            *plVar18 = 0;
          }
          uVar21 = (uint)bVar3 * (uint)bVar2;
          func_0x000109ea9180();
          uVar17 = 0;
          plVar18[1] = (long)plVar10;
          puVar22 = (undefined8 *)plVar26[3];
          plVar12 = (long *)0x0;
          if (plVar18 != (long *)0x0) {
            plVar12 = plVar18 + 1;
          }
          plVar18[2] = (long)puVar22;
          *puVar22 = plVar12;
          plVar26[3] = (long)plVar12;
          do {
            uVar7 = bVar1 - uVar20;
            uVar6 = uVar21 - uVar17;
            if (uVar6 <= uVar7) {
              uVar7 = uVar6;
            }
            plVar29 = (long *)(ulong)uVar7;
            plVar12 = plVar15;
            FUN_109f658b0(plVar15,0x30);
            if (plVar12 != (long *)0x0) {
              plVar12[3] = 0;
              plVar12[2] = 0;
              plVar12[5] = 0;
              plVar12[4] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
            }
            plVar12[1] = 0;
            plVar12[2] = 0;
            *(undefined4 *)(plVar12 + 3) = 2;
            *plVar12 = (long)&PTR_DAT_110b64048;
            plVar12[5] = (long)plVar24;
            plVar12[4] = plVar24[4];
            plVar18 = plVar15;
            FUN_109f658b0(plVar15,0xb0);
            if (plVar18 != (long *)0x0) {
              plVar18[0x13] = 0;
              plVar18[0x12] = 0;
              plVar18[0x15] = 0;
              plVar18[0x14] = 0;
              plVar18[0xf] = 0;
              plVar18[0xe] = 0;
              plVar18[0x11] = 0;
              plVar18[0x10] = 0;
              plVar18[0xb] = 0;
              plVar18[10] = 0;
              plVar18[0xd] = 0;
              plVar18[0xc] = 0;
              plVar18[7] = 0;
              plVar18[6] = 0;
              plVar18[9] = 0;
              plVar18[8] = 0;
              plVar18[3] = 0;
              plVar18[2] = 0;
              plVar18[5] = 0;
              plVar18[4] = 0;
              plVar18[1] = 0;
              *plVar18 = 0;
            }
            FUN_109ea98b0(plVar18,iVar30,1);
            plVar13 = plVar15;
            FUN_109f658b0(plVar15,0x38);
            if (plVar13 != (long *)0x0) {
              plVar13[6] = 0;
              plVar13[3] = 0;
              plVar13[2] = 0;
              plVar13[5] = 0;
              plVar13[4] = 0;
              plVar13[1] = 0;
              *plVar13 = 0;
            }
            func_0x000109eab3d8(plVar13,plVar14);
            if (uVar7 < *(byte *)(plVar12[4] + 0xd)) {
              plVar11 = plVar15;
              FUN_109f658b0(plVar15,0x38);
              if (plVar11 != (long *)0x0) {
                plVar11[6] = 0;
                plVar11[3] = 0;
                plVar11[2] = 0;
                plVar11[5] = 0;
                plVar11[4] = 0;
                plVar11[1] = 0;
                *plVar11 = 0;
              }
              auStack_260[1] = uVar17 + 1;
              auStack_260[2] = uVar17 + 2;
              auStack_260[3] = uVar17 + 3;
              plVar11[1] = 0;
              plVar11[2] = 0;
              *(undefined4 *)(plVar11 + 3) = 5;
              *plVar11 = (long)&PTR_DAT_110b641e0;
              plVar11[4] = (long)&UNK_10e05d730;
              plVar11[5] = (long)plVar12;
              auStack_260[0] = uVar17;
              func_0x000109eab760(plVar11,auStack_260);
              plVar18 = plVar29;
              plVar12 = plVar11;
            }
            plVar29 = plVar15;
            FUN_109f658b0(plVar15,0x38);
            if (plVar29 != (long *)0x0) {
              plVar29[6] = 0;
              plVar29[3] = 0;
              plVar29[2] = 0;
              plVar29[5] = 0;
              plVar29[4] = 0;
              plVar29[1] = 0;
              *plVar29 = 0;
            }
            plVar29[2] = 0;
            *(undefined4 *)(plVar29 + 3) = 8;
            *plVar29 = (long)&PTR_DAT_110b63f38;
            plVar29[4] = (long)plVar13;
            plVar29[5] = (long)plVar12;
            *(byte *)(plVar29 + 6) =
                 *(byte *)(plVar29 + 6) & 0xf0 |
                 (byte)(~(-1 << (ulong)(uVar7 & 0x1f)) << (ulong)(uVar20 & 0x1f)) & 0xf;
            plVar12 = plVar29 + 1;
            *plVar12 = (long)plVar10;
            puVar22 = (undefined8 *)plVar26[3];
            plVar29[2] = (long)puVar22;
            *puVar22 = plVar12;
            plVar26[3] = (long)plVar12;
            uVar6 = uVar7 + uVar20;
            if (bVar1 <= uVar6) {
              iVar30 = iVar30 + 1;
            }
            uVar20 = 0;
            if (bVar1 > uVar6) {
              uVar20 = uVar6;
            }
            iVar28 = iVar28 - uVar7;
          } while ((iVar28 != 0) && (uVar17 = uVar7 + uVar17, uVar17 < uVar21));
          plVar25 = (long *)*plVar25;
        } while (*plVar25 != 0);
      }
    }
    else {
      lVar23 = plVar14[4];
      if (bVar2 < *(byte *)(lVar23 + 0xe) || bVar1 < *(byte *)(lVar23 + 0xd)) {
        uVar20 = 0;
        if (*(byte *)(lVar23 + 0xd) <= bVar1) {
          uVar20 = (uint)bVar2;
        }
        uVar27 = (ulong)uVar20;
        func_0x000109ec8580();
        if (uVar20 < *(byte *)(plVar14[4] + 0xe)) {
          do {
            if (*(char *)(lVar23 + 4) == '\x04') {
              auStack_260[2] = 0;
              auStack_260[3] = 0;
              auStack_260[0] = 0;
              auStack_260[1] = 0;
              lStack_248 = 0;
              lStack_250 = 0;
              (auStack_260 + uVar27 * 2)[0] = 0;
              (auStack_260 + uVar27 * 2)[1] = 0x3ff00000;
            }
            else {
              auStack_260[0] = 0;
              auStack_260[1] = 0;
              auStack_260[2] = 0;
              auStack_260[3] = 0;
              auStack_260[uVar27] = 0x3f800000;
            }
            plVar24 = plVar15;
            FUN_109f658b0(plVar15,0xb0);
            if (plVar24 != (long *)0x0) {
              plVar24[0x13] = 0;
              plVar24[0x12] = 0;
              plVar24[0x15] = 0;
              plVar24[0x14] = 0;
              plVar24[0xf] = 0;
              plVar24[0xe] = 0;
              plVar24[0x11] = 0;
              plVar24[0x10] = 0;
              plVar24[0xb] = 0;
              plVar24[10] = 0;
              plVar24[0xd] = 0;
              plVar24[0xc] = 0;
              plVar24[7] = 0;
              plVar24[6] = 0;
              plVar24[9] = 0;
              plVar24[8] = 0;
              plVar24[3] = 0;
              plVar24[2] = 0;
              plVar24[5] = 0;
              plVar24[4] = 0;
              plVar24[1] = 0;
              *plVar24 = 0;
            }
            plVar24[0xe] = lStack_218;
            plVar24[0xd] = lStack_220;
            plVar24[0x10] = lStack_208;
            plVar24[0xf] = lStack_210;
            plVar24[0x12] = lStack_1f8;
            plVar24[0x11] = lStack_200;
            plVar24[0x14] = lStack_1e8;
            plVar24[0x13] = lStack_1f0;
            plVar24[6] = CONCAT44(auStack_260[3],auStack_260[2]);
            plVar24[5] = CONCAT44(auStack_260[1],auStack_260[0]);
            plVar24[8] = lStack_248;
            plVar24[7] = lStack_250;
            plVar24[10] = lStack_238;
            plVar24[9] = lStack_240;
            plVar24[1] = 0;
            plVar24[2] = 0;
            *(undefined4 *)(plVar24 + 3) = 3;
            *plVar24 = (long)&PTR_DAT_110b63f80;
            plVar24[0x15] = 0;
            plVar24[4] = lVar23;
            plVar24[0xc] = lStack_228;
            plVar24[0xb] = lStack_230;
            plVar24 = plVar15;
            FUN_109f658b0(plVar15,0x38);
            if (plVar24 != (long *)0x0) {
              plVar24[6] = 0;
              plVar24[3] = 0;
              plVar24[2] = 0;
              plVar24[5] = 0;
              plVar24[4] = 0;
              plVar24[1] = 0;
              *plVar24 = 0;
            }
            plVar25 = plVar15;
            FUN_109f658b0(plVar15,0xb0);
            if (plVar25 != (long *)0x0) {
              plVar25[0x13] = 0;
              plVar25[0x12] = 0;
              plVar25[0x15] = 0;
              plVar25[0x14] = 0;
              plVar25[0xf] = 0;
              plVar25[0xe] = 0;
              plVar25[0x11] = 0;
              plVar25[0x10] = 0;
              plVar25[0xb] = 0;
              plVar25[10] = 0;
              plVar25[0xd] = 0;
              plVar25[0xc] = 0;
              plVar25[7] = 0;
              plVar25[6] = 0;
              plVar25[9] = 0;
              plVar25[8] = 0;
              plVar25[3] = 0;
              plVar25[2] = 0;
              plVar25[5] = 0;
              plVar25[4] = 0;
              plVar25[1] = 0;
              *plVar25 = 0;
            }
            FUN_109ea98b0(plVar25,uVar27,1);
            func_0x000109eab3d8(plVar24,plVar14,plVar25);
            plVar24 = plVar15;
            FUN_109f658b0(plVar15,0x38);
            if (plVar24 != (long *)0x0) {
              plVar24[6] = 0;
              plVar24[3] = 0;
              plVar24[2] = 0;
              plVar24[5] = 0;
              plVar24[4] = 0;
              plVar24[1] = 0;
              *plVar24 = 0;
            }
            func_0x000109ea9180();
            plVar24[1] = (long)plVar10;
            plVar25 = (long *)0x0;
            if (plVar24 != (long *)0x0) {
              plVar25 = plVar24 + 1;
            }
            puVar22 = (undefined8 *)plVar26[3];
            plVar24[2] = (long)puVar22;
            *puVar22 = plVar25;
            plVar26[3] = (long)plVar25;
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(byte *)(plVar14[4] + 0xe));
        }
      }
      plVar24 = plVar15;
      FUN_109f658b0(plVar15,0x90);
      if (plVar24 != (long *)0x0) {
        plVar24[0xf] = 0;
        plVar24[0xe] = 0;
        plVar24[0x11] = 0;
        plVar24[0x10] = 0;
        plVar24[0xb] = 0;
        plVar24[10] = 0;
        plVar24[0xd] = 0;
        plVar24[0xc] = 0;
        plVar24[7] = 0;
        plVar24[6] = 0;
        plVar24[9] = 0;
        plVar24[8] = 0;
        plVar24[3] = 0;
        plVar24[2] = 0;
        plVar24[5] = 0;
        plVar24[4] = 0;
        plVar24[1] = 0;
        *plVar24 = 0;
      }
      plVar16 = (long *)0xb;
      FUN_109eaba7c(plVar24,plVar12[4],&UNK_10f603f7f);
      plVar24[1] = (long)plVar10;
      puVar22 = (undefined8 *)plVar26[3];
      plVar25 = (long *)0x0;
      if (plVar24 != (long *)0x0) {
        plVar25 = plVar24 + 1;
      }
      plVar24[2] = (long)puVar22;
      *puVar22 = plVar25;
      plVar26[3] = (long)plVar25;
      plVar25 = plVar15;
      FUN_109f658b0(plVar15,0x30);
      if (plVar25 != (long *)0x0) {
        plVar25[3] = 0;
        plVar25[2] = 0;
        plVar25[5] = 0;
        plVar25[4] = 0;
        plVar25[1] = 0;
        *plVar25 = 0;
      }
      plVar25[1] = 0;
      plVar25[2] = 0;
      *(undefined4 *)(plVar25 + 3) = 2;
      *plVar25 = (long)&PTR_DAT_110b64048;
      plVar25[5] = (long)plVar24;
      plVar25[4] = plVar24[4];
      plVar25 = plVar15;
      FUN_109f658b0(plVar15,0x38);
      if (plVar25 != (long *)0x0) {
        plVar25[6] = 0;
        plVar25[3] = 0;
        plVar25[2] = 0;
        plVar25[5] = 0;
        plVar25[4] = 0;
        plVar25[1] = 0;
        *plVar25 = 0;
      }
      func_0x000109ea9180();
      plVar25[1] = (long)plVar10;
      plVar18 = (long *)0x0;
      if (plVar25 != (long *)0x0) {
        plVar18 = plVar25 + 1;
      }
      puVar22 = (undefined8 *)plVar26[3];
      plVar25[2] = (long)puVar22;
      *puVar22 = plVar18;
      plVar26[3] = (long)plVar18;
      uVar20 = (uint)*(byte *)(plVar12[4] + 0xd);
      uVar17 = (uint)*(byte *)(plVar14[4] + 0xd);
      if (uVar17 <= uVar20) {
        uVar20 = uVar17;
      }
      uVar17 = (uint)*(byte *)(plVar12[4] + 0xe);
      uVar21 = (uint)*(byte *)(plVar14[4] + 0xe);
      if (uVar21 <= uVar17) {
        uVar17 = uVar21;
      }
      auStack_260[0] = 0;
      auStack_260[1] = 0;
      auStack_260[2] = 0;
      auStack_260[3] = 0;
      if (1 < uVar20) {
        plVar25 = (long *)0x1;
        do {
          auStack_260[(long)plVar25] = (uint)plVar25;
          plVar25 = (long *)((long)plVar25 + 1);
        } while ((long *)(ulong)uVar20 != plVar25);
      }
      plVar18 = plVar29;
      if (uVar17 != 0) {
        uVar21 = 0;
        do {
          plVar25 = plVar15;
          FUN_109f658b0(plVar15,0x38);
          if (plVar25 != (long *)0x0) {
            plVar25[6] = 0;
            plVar25[3] = 0;
            plVar25[2] = 0;
            plVar25[5] = 0;
            plVar25[4] = 0;
            plVar25[1] = 0;
            *plVar25 = 0;
          }
          plVar18 = plVar15;
          FUN_109f658b0(plVar15,0xb0);
          if (plVar18 != (long *)0x0) {
            plVar18[0x13] = 0;
            plVar18[0x12] = 0;
            plVar18[0x15] = 0;
            plVar18[0x14] = 0;
            plVar18[0xf] = 0;
            plVar18[0xe] = 0;
            plVar18[0x11] = 0;
            plVar18[0x10] = 0;
            plVar18[0xb] = 0;
            plVar18[10] = 0;
            plVar18[0xd] = 0;
            plVar18[0xc] = 0;
            plVar18[7] = 0;
            plVar18[6] = 0;
            plVar18[9] = 0;
            plVar18[8] = 0;
            plVar18[3] = 0;
            plVar18[2] = 0;
            plVar18[5] = 0;
            plVar18[4] = 0;
            plVar18[1] = 0;
            *plVar18 = 0;
          }
          FUN_109ea98b0(plVar18,uVar21,1);
          func_0x000109eab3d8(plVar25,plVar14,plVar18);
          plVar12 = plVar15;
          FUN_109f658b0(plVar15,0x38);
          if (plVar12 != (long *)0x0) {
            plVar12[6] = 0;
            plVar12[3] = 0;
            plVar12[2] = 0;
            plVar12[5] = 0;
            plVar12[4] = 0;
            plVar12[1] = 0;
            *plVar12 = 0;
          }
          plVar18 = plVar15;
          FUN_109f658b0(plVar15,0xb0);
          if (plVar18 != (long *)0x0) {
            plVar18[0x13] = 0;
            plVar18[0x12] = 0;
            plVar18[0x15] = 0;
            plVar18[0x14] = 0;
            plVar18[0xf] = 0;
            plVar18[0xe] = 0;
            plVar18[0x11] = 0;
            plVar18[0x10] = 0;
            plVar18[0xb] = 0;
            plVar18[10] = 0;
            plVar18[0xd] = 0;
            plVar18[0xc] = 0;
            plVar18[7] = 0;
            plVar18[6] = 0;
            plVar18[9] = 0;
            plVar18[8] = 0;
            plVar18[3] = 0;
            plVar18[2] = 0;
            plVar18[5] = 0;
            plVar18[4] = 0;
            plVar18[1] = 0;
            *plVar18 = 0;
          }
          FUN_109ea98b0(plVar18,uVar21,1);
          func_0x000109eab3d8(plVar12,plVar24);
          if (*(char *)(plVar25[4] + 0xd) != *(char *)(plVar12[4] + 0xd)) {
            plVar29 = plVar15;
            FUN_109f658b0(plVar15,0x38);
            if (plVar29 != (long *)0x0) {
              plVar29[6] = 0;
              plVar29[3] = 0;
              plVar29[2] = 0;
              plVar29[5] = 0;
              plVar29[4] = 0;
              plVar29[1] = 0;
              *plVar29 = 0;
            }
            plVar29[1] = 0;
            plVar29[2] = 0;
            *(undefined4 *)(plVar29 + 3) = 5;
            *plVar29 = (long)&PTR_DAT_110b641e0;
            plVar29[4] = (long)&UNK_10e05d730;
            plVar29[5] = (long)plVar12;
            plVar18 = (long *)(ulong)uVar20;
            func_0x000109eab760(plVar29,auStack_260);
            plVar12 = plVar29;
          }
          plVar29 = plVar15;
          FUN_109f658b0(plVar15,0x38);
          if (plVar29 != (long *)0x0) {
            plVar29[6] = 0;
            plVar29[3] = 0;
            plVar29[2] = 0;
            plVar29[5] = 0;
            plVar29[4] = 0;
            plVar29[1] = 0;
            *plVar29 = 0;
          }
          plVar29[2] = 0;
          *(undefined4 *)(plVar29 + 3) = 8;
          *plVar29 = (long)&PTR_DAT_110b63f38;
          plVar29[4] = (long)plVar25;
          plVar29[5] = (long)plVar12;
          *(byte *)(plVar29 + 6) =
               (*(byte *)(plVar29 + 6) & 0xf0 | (byte)(-1 << (ulong)(uVar20 & 0x1f)) & 0xf) ^ 0xf;
          plVar25 = plVar29 + 1;
          *plVar25 = (long)plVar10;
          puVar22 = (undefined8 *)plVar26[3];
          plVar29[2] = (long)puVar22;
          *puVar22 = plVar25;
          plVar26[3] = (long)plVar25;
          uVar21 = uVar21 + 1;
        } while (uVar17 != uVar21);
      }
    }
  }
  lVar23 = 0x30;
  FUN_109f658b0();
  if (plVar15 != (long *)0x0) {
    plVar15[3] = 0;
    plVar15[2] = 0;
    plVar15[5] = 0;
    plVar15[4] = 0;
    plVar15[1] = 0;
    *plVar15 = 0;
  }
  plVar15[1] = 0;
  plVar15[2] = 0;
  *(undefined4 *)(plVar15 + 3) = 2;
  *plVar15 = (long)&PTR_DAT_110b64048;
  plVar15[5] = (long)plVar14;
  plVar15[4] = plVar14[4];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    __Unwind_Resume();
    plVar24 = (long *)0x0;
    plVar14 = plVar18 + -5;
    if ((plVar14 != (long *)0x0) && (*plVar18 != 0)) {
      plVar24 = (long *)0x0;
      do {
        (**(code **)(*plVar14 + 0x18))(plVar14,1);
        plVar25 = plVar14;
        (**(code **)(*plVar14 + 8))(plVar14,plVar15,plVar16);
        if (plVar25 == (long *)0x0) {
          plVar25 = plVar16;
          FUN_109f658b0(plVar16,0x28);
          if (plVar25 != (long *)0x0) {
            plVar25[4] = 0;
            plVar25[1] = 0;
            *plVar25 = 0;
            plVar25[3] = 0;
            plVar25[2] = 0;
          }
          plVar26 = plVar25 + 1;
          *plVar26 = lVar23 + 0x10;
          plVar25[2] = 0;
          *(undefined4 *)(plVar25 + 3) = 0x16;
          *plVar25 = (long)&PTR_DAT_110b63eb8;
          plVar25[4] = (long)&UNK_10e05d730;
        }
        else {
          plVar26 = plVar25;
          (**(code **)(*plVar25 + 0x30))();
          if (plVar26 != (long *)0x0) {
            plVar25 = plVar26;
          }
          plVar26 = plVar25 + 1;
          *plVar26 = lVar23 + 0x10;
        }
        puVar22 = *(undefined8 **)(lVar23 + 0x18);
        plVar25[2] = (long)puVar22;
        *puVar22 = plVar26;
        *(long **)(lVar23 + 0x18) = plVar26;
        plVar24 = (long *)(ulong)((int)plVar24 + 1);
        plVar25 = plVar14 + 5;
        plVar14 = (long *)*plVar25 + -5;
      } while (*(long *)*plVar25 != 0 && plVar14 != (long *)0x0);
    }
    return plVar24;
  }
  return plVar15;
}



/* Entry: 109e13310; end: 109e14283;  */

long * FUN_109e13310(long param_1,long param_2,long *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  ulong uVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  undefined *puVar26;
  uint auStack_110 [4];
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar20 = param_4;
  FUN_109f658b0(param_4,0x90);
  if (plVar20 != (long *)0x0) {
    plVar20[0xf] = 0;
    plVar20[0xe] = 0;
    plVar20[0x11] = 0;
    plVar20[0x10] = 0;
    plVar20[0xb] = 0;
    plVar20[10] = 0;
    plVar20[0xd] = 0;
    plVar20[0xc] = 0;
    plVar20[7] = 0;
    plVar20[6] = 0;
    plVar20[9] = 0;
    plVar20[8] = 0;
    plVar20[3] = 0;
    plVar20[2] = 0;
    plVar20[5] = 0;
    plVar20[4] = 0;
    plVar20[1] = 0;
    *plVar20 = 0;
  }
  plVar15 = (long *)&UNK_10f603f69;
  plVar13 = (long *)0xb;
  FUN_109eaba7c(plVar20,param_1);
  lVar12 = param_2 + 0x10;
  plVar20[1] = lVar12;
  plVar10 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    plVar10 = plVar20 + 1;
  }
  puVar18 = *(undefined8 **)(param_2 + 0x18);
  plVar20[2] = (long)puVar18;
  *puVar18 = plVar10;
  *(long **)(param_2 + 0x18) = plVar10;
  param_3 = (long *)*param_3;
  plVar8 = param_3 + -1;
  plVar10 = (long *)0x0;
  if (param_3 != (long *)0x0) {
    plVar10 = plVar8;
  }
  lVar19 = plVar10[4];
  bVar1 = *(byte *)(lVar19 + 0xd);
  if (((bVar1 == 1) && (uVar16 = *(uint *)(lVar19 + 4), (uVar16 & 0xf0) == 0)) &&
     (*(long *)*param_3 == 0)) {
    plVar24 = param_4;
    FUN_109f658b0(param_4,0x90);
    if (plVar24 != (long *)0x0) {
      plVar24[0xf] = 0;
      plVar24[0xe] = 0;
      plVar24[0x11] = 0;
      plVar24[0x10] = 0;
      plVar24[0xb] = 0;
      plVar24[10] = 0;
      plVar24[0xd] = 0;
      plVar24[0xc] = 0;
      plVar24[7] = 0;
      plVar24[6] = 0;
      plVar24[9] = 0;
      plVar24[8] = 0;
      plVar24[3] = 0;
      plVar24[2] = 0;
      plVar24[5] = 0;
      plVar24[4] = 0;
      plVar24[1] = 0;
      *plVar24 = 0;
    }
    uVar22 = (ulong)(uVar16 & 0xf);
    func_0x000109ec6c94(uVar22,4,1,0,0,0);
    plVar13 = (long *)0xb;
    FUN_109eaba7c(plVar24,uVar22,&UNK_10f603f72);
    lVar19 = 0;
    plVar24[1] = lVar12;
    plVar15 = (long *)0x0;
    if (plVar24 != (long *)0x0) {
      plVar15 = plVar24 + 1;
    }
    puVar18 = *(undefined8 **)(param_2 + 0x18);
    plVar24[2] = (long)puVar18;
    *puVar18 = plVar15;
    *(long **)(param_2 + 0x18) = plVar15;
    cVar4 = *(char *)(plVar10[4] + 4);
    do {
      if (cVar4 == '\x02') {
        auStack_110[lVar19] = 0;
      }
      else {
        (auStack_110 + lVar19 * 2)[0] = 0;
        (auStack_110 + lVar19 * 2)[1] = 0;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 4);
    plVar10 = param_4;
    FUN_109f658b0(param_4,0x38);
    if (plVar10 != (long *)0x0) {
      plVar10[6] = 0;
      plVar10[3] = 0;
      plVar10[2] = 0;
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[1] = 0;
      *plVar10 = 0;
    }
    plVar11 = param_4;
    FUN_109f658b0(param_4,0x30);
    if (plVar11 != (long *)0x0) {
      plVar11[3] = 0;
      plVar11[2] = 0;
      plVar11[5] = 0;
      plVar11[4] = 0;
      plVar11[1] = 0;
      *plVar11 = 0;
    }
    plVar11[1] = 0;
    plVar11[2] = 0;
    *(undefined4 *)(plVar11 + 3) = 2;
    *plVar11 = (long)&PTR_DAT_110b64048;
    plVar11[5] = (long)plVar24;
    plVar11[4] = plVar24[4];
    plVar15 = param_4;
    FUN_109f658b0(param_4,0xb0);
    if (plVar15 != (long *)0x0) {
      plVar15[0x13] = 0;
      plVar15[0x12] = 0;
      plVar15[0x15] = 0;
      plVar15[0x14] = 0;
      plVar15[0xf] = 0;
      plVar15[0xe] = 0;
      plVar15[0x11] = 0;
      plVar15[0x10] = 0;
      plVar15[0xb] = 0;
      plVar15[10] = 0;
      plVar15[0xd] = 0;
      plVar15[0xc] = 0;
      plVar15[7] = 0;
      plVar15[6] = 0;
      plVar15[9] = 0;
      plVar15[8] = 0;
      plVar15[3] = 0;
      plVar15[2] = 0;
      plVar15[5] = 0;
      plVar15[4] = 0;
      plVar15[1] = 0;
      *plVar15 = 0;
    }
    lVar19 = plVar24[4];
    plVar15[0xe] = lStack_c8;
    plVar15[0xd] = lStack_d0;
    plVar15[0x10] = lStack_b8;
    plVar15[0xf] = lStack_c0;
    plVar15[0x12] = lStack_a8;
    plVar15[0x11] = lStack_b0;
    plVar15[0x14] = lStack_98;
    plVar15[0x13] = lStack_a0;
    plVar15[6] = CONCAT44(auStack_110[3],auStack_110[2]);
    plVar15[5] = CONCAT44(auStack_110[1],auStack_110[0]);
    plVar15[8] = lStack_f8;
    plVar15[7] = lStack_100;
    plVar15[10] = lStack_e8;
    plVar15[9] = lStack_f0;
    *(undefined4 *)(plVar15 + 3) = 3;
    plVar15[1] = 0;
    plVar15[2] = 0;
    *plVar15 = (long)&PTR_DAT_110b63f80;
    plVar15[0x15] = 0;
    plVar15[4] = lVar19;
    plVar15[0xc] = lStack_d8;
    plVar15[0xb] = lStack_e0;
    func_0x000109ea9180(plVar10,plVar11);
    plVar10[1] = lVar12;
    puVar18 = *(undefined8 **)(param_2 + 0x18);
    plVar11 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 1;
    }
    plVar10[2] = (long)puVar18;
    *puVar18 = plVar11;
    *(long **)(param_2 + 0x18) = plVar11;
    plVar10 = param_4;
    FUN_109f658b0(param_4,0x30);
    if (plVar10 != (long *)0x0) {
      plVar10[3] = 0;
      plVar10[2] = 0;
      plVar10[5] = 0;
      plVar10[4] = 0;
      plVar10[1] = 0;
      *plVar10 = 0;
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *(undefined4 *)(plVar10 + 3) = 2;
    *plVar10 = (long)&PTR_DAT_110b64048;
    plVar10[5] = (long)plVar24;
    plVar10[4] = plVar24[4];
    plVar11 = param_4;
    FUN_109f658b0(param_4,0x38);
    if (plVar11 != (long *)0x0) {
      plVar11[6] = 0;
      plVar11[3] = 0;
      plVar11[2] = 0;
      plVar11[5] = 0;
      plVar11[4] = 0;
      plVar11[1] = 0;
      *plVar11 = 0;
    }
    plVar11[2] = 0;
    *(undefined4 *)(plVar11 + 3) = 8;
    *plVar11 = (long)&PTR_DAT_110b63f38;
    plVar11[4] = (long)plVar10;
    plVar11[5] = (long)plVar8;
    *(byte *)(plVar11 + 6) = *(byte *)(plVar11 + 6) & 0xf0 | 1;
    plVar10 = plVar11 + 1;
    *plVar10 = lVar12;
    puVar18 = *(undefined8 **)(param_2 + 0x18);
    plVar11[2] = (long)puVar18;
    *puVar18 = plVar10;
    *(long **)(param_2 + 0x18) = plVar10;
    bVar1 = *(byte *)(param_1 + 0xe);
    uVar16 = (uint)bVar1;
    if ((uint)*(byte *)(param_1 + 0xd) <= (uint)bVar1) {
      uVar16 = (uint)*(byte *)(param_1 + 0xd);
    }
    uVar22 = (ulong)uVar16;
    if (uVar16 != 0) {
      uVar25 = 0;
      puVar26 = &UNK_10e060b8c;
      do {
        plVar15 = param_4;
        FUN_109f658b0(param_4,0xb0);
        if (plVar15 != (long *)0x0) {
          plVar15[0x13] = 0;
          plVar15[0x12] = 0;
          plVar15[0x15] = 0;
          plVar15[0x14] = 0;
          plVar15[0xf] = 0;
          plVar15[0xe] = 0;
          plVar15[0x11] = 0;
          plVar15[0x10] = 0;
          plVar15[0xb] = 0;
          plVar15[10] = 0;
          plVar15[0xd] = 0;
          plVar15[0xc] = 0;
          plVar15[7] = 0;
          plVar15[6] = 0;
          plVar15[9] = 0;
          plVar15[8] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        FUN_109ea98b0(plVar15,uVar25,1);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar10 != (long *)0x0) {
          plVar10[6] = 0;
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        func_0x000109eab3d8(plVar10,plVar20,plVar15);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x30);
        if (plVar10 != (long *)0x0) {
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        plVar10[1] = 0;
        plVar10[2] = 0;
        *(undefined4 *)(plVar10 + 3) = 2;
        *plVar10 = (long)&PTR_DAT_110b64048;
        plVar10[5] = (long)plVar24;
        plVar10[4] = plVar24[4];
        plVar15 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar15 != (long *)0x0) {
          plVar15[6] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        uVar5 = *(undefined1 *)(param_1 + 0xd);
        plVar15[1] = 0;
        plVar15[2] = 0;
        *(undefined4 *)(plVar15 + 3) = 5;
        *plVar15 = (long)&PTR_DAT_110b641e0;
        plVar15[4] = (long)&UNK_10e05d730;
        plVar15[5] = (long)plVar10;
        func_0x000109eab760(plVar15,puVar26,uVar5);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar10 != (long *)0x0) {
          plVar10[6] = 0;
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        func_0x000109ea9180();
        plVar10[1] = lVar12;
        plVar8 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          plVar8 = plVar10 + 1;
        }
        puVar18 = *(undefined8 **)(param_2 + 0x18);
        plVar10[2] = (long)puVar18;
        *puVar18 = plVar8;
        *(long **)(param_2 + 0x18) = plVar8;
        uVar25 = uVar25 + 1;
        puVar26 = puVar26 + 0x10;
      } while (uVar22 != uVar25);
      bVar1 = *(byte *)(param_1 + 0xe);
    }
    if (uVar16 < bVar1) {
      do {
        plVar15 = param_4;
        FUN_109f658b0(param_4,0xb0);
        if (plVar15 != (long *)0x0) {
          plVar15[0x13] = 0;
          plVar15[0x12] = 0;
          plVar15[0x15] = 0;
          plVar15[0x14] = 0;
          plVar15[0xf] = 0;
          plVar15[0xe] = 0;
          plVar15[0x11] = 0;
          plVar15[0x10] = 0;
          plVar15[0xb] = 0;
          plVar15[10] = 0;
          plVar15[0xd] = 0;
          plVar15[0xc] = 0;
          plVar15[7] = 0;
          plVar15[6] = 0;
          plVar15[9] = 0;
          plVar15[8] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        FUN_109ea98b0(plVar15,uVar22,1);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar10 != (long *)0x0) {
          plVar10[6] = 0;
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        func_0x000109eab3d8(plVar10,plVar20,plVar15);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x30);
        if (plVar10 != (long *)0x0) {
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        plVar10[1] = 0;
        plVar10[2] = 0;
        *(undefined4 *)(plVar10 + 3) = 2;
        *plVar10 = (long)&PTR_DAT_110b64048;
        plVar10[5] = (long)plVar24;
        plVar10[4] = plVar24[4];
        plVar15 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar15 != (long *)0x0) {
          plVar15[6] = 0;
          plVar15[3] = 0;
          plVar15[2] = 0;
          plVar15[5] = 0;
          plVar15[4] = 0;
          plVar15[1] = 0;
          *plVar15 = 0;
        }
        uVar5 = *(undefined1 *)(param_1 + 0xd);
        plVar15[1] = 0;
        plVar15[2] = 0;
        *(undefined4 *)(plVar15 + 3) = 5;
        *plVar15 = (long)&PTR_DAT_110b641e0;
        plVar15[4] = (long)&UNK_10e05d730;
        plVar15[5] = (long)plVar10;
        uStack_88 = 0x100000001;
        uStack_90 = 0x100000001;
        func_0x000109eab760(plVar15,&uStack_90,uVar5);
        plVar10 = param_4;
        FUN_109f658b0(param_4,0x38);
        if (plVar10 != (long *)0x0) {
          plVar10[6] = 0;
          plVar10[3] = 0;
          plVar10[2] = 0;
          plVar10[5] = 0;
          plVar10[4] = 0;
          plVar10[1] = 0;
          *plVar10 = 0;
        }
        func_0x000109ea9180();
        plVar10[1] = lVar12;
        plVar8 = (long *)0x0;
        if (plVar10 != (long *)0x0) {
          plVar8 = plVar10 + 1;
        }
        puVar18 = *(undefined8 **)(param_2 + 0x18);
        plVar10[2] = (long)puVar18;
        *puVar18 = plVar8;
        *(long **)(param_2 + 0x18) = plVar8;
        uVar16 = (int)uVar22 + 1;
        uVar22 = (ulong)uVar16;
      } while (uVar16 < *(byte *)(param_1 + 0xe));
    }
  }
  else {
    bVar2 = *(byte *)(lVar19 + 0xe);
    if ((bVar2 < 2) || (2 < *(byte *)(lVar19 + 4) - 2)) {
      if (*param_3 != 0) {
        uVar16 = 0;
        iVar23 = 0;
        bVar1 = *(byte *)(param_1 + 0xd);
        iVar21 = (uint)*(byte *)(param_1 + 0xe) * (uint)bVar1;
        do {
          if (iVar21 == 0) break;
          bVar2 = *(byte *)(param_3[3] + 0xd);
          bVar3 = *(byte *)(param_3[3] + 0xe);
          plVar10 = param_4;
          FUN_109f658b0(param_4,0x90);
          if (plVar10 != (long *)0x0) {
            plVar10[0xf] = 0;
            plVar10[0xe] = 0;
            plVar10[0x11] = 0;
            plVar10[0x10] = 0;
            plVar10[0xb] = 0;
            plVar10[10] = 0;
            plVar10[0xd] = 0;
            plVar10[0xc] = 0;
            plVar10[7] = 0;
            plVar10[6] = 0;
            plVar10[9] = 0;
            plVar10[8] = 0;
            plVar10[3] = 0;
            plVar10[2] = 0;
            plVar10[5] = 0;
            plVar10[4] = 0;
            plVar10[1] = 0;
            *plVar10 = 0;
          }
          plVar13 = (long *)0xb;
          FUN_109eaba7c(plVar10,param_3[3],&UNK_10f603f72);
          plVar10[1] = lVar12;
          puVar18 = *(undefined8 **)(param_2 + 0x18);
          plVar15 = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            plVar15 = plVar10 + 1;
          }
          plVar10[2] = (long)puVar18;
          *puVar18 = plVar15;
          *(long **)(param_2 + 0x18) = plVar15;
          plVar15 = param_4;
          FUN_109f658b0(param_4,0x30);
          if (plVar15 != (long *)0x0) {
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          plVar15[1] = 0;
          plVar15[2] = 0;
          *(undefined4 *)(plVar15 + 3) = 2;
          *plVar15 = (long)&PTR_DAT_110b64048;
          plVar15[5] = (long)plVar10;
          plVar15[4] = plVar10[4];
          plVar15 = param_4;
          FUN_109f658b0(param_4,0x38);
          if (plVar15 != (long *)0x0) {
            plVar15[6] = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          uVar17 = (uint)bVar3 * (uint)bVar2;
          func_0x000109ea9180();
          uVar14 = 0;
          plVar15[1] = lVar12;
          puVar18 = *(undefined8 **)(param_2 + 0x18);
          plVar8 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            plVar8 = plVar15 + 1;
          }
          plVar15[2] = (long)puVar18;
          *puVar18 = plVar8;
          *(long **)(param_2 + 0x18) = plVar8;
          do {
            uVar6 = bVar1 - uVar16;
            uVar7 = uVar17 - uVar14;
            if (uVar7 <= uVar6) {
              uVar6 = uVar7;
            }
            plVar24 = (long *)(ulong)uVar6;
            plVar8 = param_4;
            FUN_109f658b0(param_4,0x30);
            if (plVar8 != (long *)0x0) {
              plVar8[3] = 0;
              plVar8[2] = 0;
              plVar8[5] = 0;
              plVar8[4] = 0;
              plVar8[1] = 0;
              *plVar8 = 0;
            }
            plVar8[1] = 0;
            plVar8[2] = 0;
            *(undefined4 *)(plVar8 + 3) = 2;
            *plVar8 = (long)&PTR_DAT_110b64048;
            plVar8[5] = (long)plVar10;
            plVar8[4] = plVar10[4];
            plVar15 = param_4;
            FUN_109f658b0(param_4,0xb0);
            if (plVar15 != (long *)0x0) {
              plVar15[0x13] = 0;
              plVar15[0x12] = 0;
              plVar15[0x15] = 0;
              plVar15[0x14] = 0;
              plVar15[0xf] = 0;
              plVar15[0xe] = 0;
              plVar15[0x11] = 0;
              plVar15[0x10] = 0;
              plVar15[0xb] = 0;
              plVar15[10] = 0;
              plVar15[0xd] = 0;
              plVar15[0xc] = 0;
              plVar15[7] = 0;
              plVar15[6] = 0;
              plVar15[9] = 0;
              plVar15[8] = 0;
              plVar15[3] = 0;
              plVar15[2] = 0;
              plVar15[5] = 0;
              plVar15[4] = 0;
              plVar15[1] = 0;
              *plVar15 = 0;
            }
            FUN_109ea98b0(plVar15,iVar23,1);
            plVar11 = param_4;
            FUN_109f658b0(param_4,0x38);
            if (plVar11 != (long *)0x0) {
              plVar11[6] = 0;
              plVar11[3] = 0;
              plVar11[2] = 0;
              plVar11[5] = 0;
              plVar11[4] = 0;
              plVar11[1] = 0;
              *plVar11 = 0;
            }
            func_0x000109eab3d8(plVar11,plVar20);
            if (uVar6 < *(byte *)(plVar8[4] + 0xd)) {
              plVar9 = param_4;
              FUN_109f658b0(param_4,0x38);
              if (plVar9 != (long *)0x0) {
                plVar9[6] = 0;
                plVar9[3] = 0;
                plVar9[2] = 0;
                plVar9[5] = 0;
                plVar9[4] = 0;
                plVar9[1] = 0;
                *plVar9 = 0;
              }
              auStack_110[1] = uVar14 + 1;
              auStack_110[2] = uVar14 + 2;
              auStack_110[3] = uVar14 + 3;
              plVar9[1] = 0;
              plVar9[2] = 0;
              *(undefined4 *)(plVar9 + 3) = 5;
              *plVar9 = (long)&PTR_DAT_110b641e0;
              plVar9[4] = (long)&UNK_10e05d730;
              plVar9[5] = (long)plVar8;
              auStack_110[0] = uVar14;
              func_0x000109eab760(plVar9,auStack_110);
              plVar15 = plVar24;
              plVar8 = plVar9;
            }
            plVar24 = param_4;
            FUN_109f658b0(param_4,0x38);
            if (plVar24 != (long *)0x0) {
              plVar24[6] = 0;
              plVar24[3] = 0;
              plVar24[2] = 0;
              plVar24[5] = 0;
              plVar24[4] = 0;
              plVar24[1] = 0;
              *plVar24 = 0;
            }
            plVar24[2] = 0;
            *(undefined4 *)(plVar24 + 3) = 8;
            *plVar24 = (long)&PTR_DAT_110b63f38;
            plVar24[4] = (long)plVar11;
            plVar24[5] = (long)plVar8;
            *(byte *)(plVar24 + 6) =
                 *(byte *)(plVar24 + 6) & 0xf0 |
                 (byte)(~(-1 << (ulong)(uVar6 & 0x1f)) << (ulong)(uVar16 & 0x1f)) & 0xf;
            plVar8 = plVar24 + 1;
            *plVar8 = lVar12;
            puVar18 = *(undefined8 **)(param_2 + 0x18);
            plVar24[2] = (long)puVar18;
            *puVar18 = plVar8;
            *(long **)(param_2 + 0x18) = plVar8;
            uVar7 = uVar6 + uVar16;
            if (bVar1 <= uVar7) {
              iVar23 = iVar23 + 1;
            }
            uVar16 = 0;
            if (bVar1 > uVar7) {
              uVar16 = uVar7;
            }
            iVar21 = iVar21 - uVar6;
          } while ((iVar21 != 0) && (uVar14 = uVar6 + uVar14, uVar14 < uVar17));
          param_3 = (long *)*param_3;
        } while (*param_3 != 0);
      }
    }
    else {
      lVar19 = plVar20[4];
      if (bVar2 < *(byte *)(lVar19 + 0xe) || bVar1 < *(byte *)(lVar19 + 0xd)) {
        uVar16 = 0;
        if (*(byte *)(lVar19 + 0xd) <= bVar1) {
          uVar16 = (uint)bVar2;
        }
        uVar22 = (ulong)uVar16;
        func_0x000109ec8580();
        if (uVar16 < *(byte *)(plVar20[4] + 0xe)) {
          do {
            if (*(char *)(lVar19 + 4) == '\x04') {
              auStack_110[2] = 0;
              auStack_110[3] = 0;
              auStack_110[0] = 0;
              auStack_110[1] = 0;
              lStack_f8 = 0;
              lStack_100 = 0;
              (auStack_110 + uVar22 * 2)[0] = 0;
              (auStack_110 + uVar22 * 2)[1] = 0x3ff00000;
            }
            else {
              auStack_110[0] = 0;
              auStack_110[1] = 0;
              auStack_110[2] = 0;
              auStack_110[3] = 0;
              auStack_110[uVar22] = 0x3f800000;
            }
            plVar15 = param_4;
            FUN_109f658b0(param_4,0xb0);
            if (plVar15 != (long *)0x0) {
              plVar15[0x13] = 0;
              plVar15[0x12] = 0;
              plVar15[0x15] = 0;
              plVar15[0x14] = 0;
              plVar15[0xf] = 0;
              plVar15[0xe] = 0;
              plVar15[0x11] = 0;
              plVar15[0x10] = 0;
              plVar15[0xb] = 0;
              plVar15[10] = 0;
              plVar15[0xd] = 0;
              plVar15[0xc] = 0;
              plVar15[7] = 0;
              plVar15[6] = 0;
              plVar15[9] = 0;
              plVar15[8] = 0;
              plVar15[3] = 0;
              plVar15[2] = 0;
              plVar15[5] = 0;
              plVar15[4] = 0;
              plVar15[1] = 0;
              *plVar15 = 0;
            }
            plVar15[0xe] = lStack_c8;
            plVar15[0xd] = lStack_d0;
            plVar15[0x10] = lStack_b8;
            plVar15[0xf] = lStack_c0;
            plVar15[0x12] = lStack_a8;
            plVar15[0x11] = lStack_b0;
            plVar15[0x14] = lStack_98;
            plVar15[0x13] = lStack_a0;
            plVar15[6] = CONCAT44(auStack_110[3],auStack_110[2]);
            plVar15[5] = CONCAT44(auStack_110[1],auStack_110[0]);
            plVar15[8] = lStack_f8;
            plVar15[7] = lStack_100;
            plVar15[10] = lStack_e8;
            plVar15[9] = lStack_f0;
            plVar15[1] = 0;
            plVar15[2] = 0;
            *(undefined4 *)(plVar15 + 3) = 3;
            *plVar15 = (long)&PTR_DAT_110b63f80;
            plVar15[0x15] = 0;
            plVar15[4] = lVar19;
            plVar15[0xc] = lStack_d8;
            plVar15[0xb] = lStack_e0;
            plVar15 = param_4;
            FUN_109f658b0(param_4,0x38);
            if (plVar15 != (long *)0x0) {
              plVar15[6] = 0;
              plVar15[3] = 0;
              plVar15[2] = 0;
              plVar15[5] = 0;
              plVar15[4] = 0;
              plVar15[1] = 0;
              *plVar15 = 0;
            }
            plVar13 = param_4;
            FUN_109f658b0(param_4,0xb0);
            if (plVar13 != (long *)0x0) {
              plVar13[0x13] = 0;
              plVar13[0x12] = 0;
              plVar13[0x15] = 0;
              plVar13[0x14] = 0;
              plVar13[0xf] = 0;
              plVar13[0xe] = 0;
              plVar13[0x11] = 0;
              plVar13[0x10] = 0;
              plVar13[0xb] = 0;
              plVar13[10] = 0;
              plVar13[0xd] = 0;
              plVar13[0xc] = 0;
              plVar13[7] = 0;
              plVar13[6] = 0;
              plVar13[9] = 0;
              plVar13[8] = 0;
              plVar13[3] = 0;
              plVar13[2] = 0;
              plVar13[5] = 0;
              plVar13[4] = 0;
              plVar13[1] = 0;
              *plVar13 = 0;
            }
            FUN_109ea98b0(plVar13,uVar22,1);
            func_0x000109eab3d8(plVar15,plVar20,plVar13);
            plVar15 = param_4;
            FUN_109f658b0(param_4,0x38);
            if (plVar15 != (long *)0x0) {
              plVar15[6] = 0;
              plVar15[3] = 0;
              plVar15[2] = 0;
              plVar15[5] = 0;
              plVar15[4] = 0;
              plVar15[1] = 0;
              *plVar15 = 0;
            }
            func_0x000109ea9180();
            plVar15[1] = lVar12;
            plVar13 = (long *)0x0;
            if (plVar15 != (long *)0x0) {
              plVar13 = plVar15 + 1;
            }
            puVar18 = *(undefined8 **)(param_2 + 0x18);
            plVar15[2] = (long)puVar18;
            *puVar18 = plVar13;
            *(long **)(param_2 + 0x18) = plVar13;
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(byte *)(plVar20[4] + 0xe));
        }
      }
      plVar24 = param_4;
      FUN_109f658b0(param_4,0x90);
      if (plVar24 != (long *)0x0) {
        plVar24[0xf] = 0;
        plVar24[0xe] = 0;
        plVar24[0x11] = 0;
        plVar24[0x10] = 0;
        plVar24[0xb] = 0;
        plVar24[10] = 0;
        plVar24[0xd] = 0;
        plVar24[0xc] = 0;
        plVar24[7] = 0;
        plVar24[6] = 0;
        plVar24[9] = 0;
        plVar24[8] = 0;
        plVar24[3] = 0;
        plVar24[2] = 0;
        plVar24[5] = 0;
        plVar24[4] = 0;
        plVar24[1] = 0;
        *plVar24 = 0;
      }
      plVar13 = (long *)0xb;
      FUN_109eaba7c(plVar24,plVar10[4],&UNK_10f603f7f);
      plVar24[1] = lVar12;
      puVar18 = *(undefined8 **)(param_2 + 0x18);
      plVar15 = (long *)0x0;
      if (plVar24 != (long *)0x0) {
        plVar15 = plVar24 + 1;
      }
      plVar24[2] = (long)puVar18;
      *puVar18 = plVar15;
      *(long **)(param_2 + 0x18) = plVar15;
      plVar15 = param_4;
      FUN_109f658b0(param_4,0x30);
      if (plVar15 != (long *)0x0) {
        plVar15[3] = 0;
        plVar15[2] = 0;
        plVar15[5] = 0;
        plVar15[4] = 0;
        plVar15[1] = 0;
        *plVar15 = 0;
      }
      plVar15[1] = 0;
      plVar15[2] = 0;
      *(undefined4 *)(plVar15 + 3) = 2;
      *plVar15 = (long)&PTR_DAT_110b64048;
      plVar15[5] = (long)plVar24;
      plVar15[4] = plVar24[4];
      plVar15 = param_4;
      FUN_109f658b0(param_4,0x38);
      if (plVar15 != (long *)0x0) {
        plVar15[6] = 0;
        plVar15[3] = 0;
        plVar15[2] = 0;
        plVar15[5] = 0;
        plVar15[4] = 0;
        plVar15[1] = 0;
        *plVar15 = 0;
      }
      func_0x000109ea9180();
      plVar15[1] = lVar12;
      plVar11 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        plVar11 = plVar15 + 1;
      }
      puVar18 = *(undefined8 **)(param_2 + 0x18);
      plVar15[2] = (long)puVar18;
      *puVar18 = plVar11;
      *(long **)(param_2 + 0x18) = plVar11;
      uVar16 = (uint)*(byte *)(plVar10[4] + 0xd);
      uVar14 = (uint)*(byte *)(plVar20[4] + 0xd);
      if (uVar14 <= uVar16) {
        uVar16 = uVar14;
      }
      uVar14 = (uint)*(byte *)(plVar10[4] + 0xe);
      uVar17 = (uint)*(byte *)(plVar20[4] + 0xe);
      if (uVar17 <= uVar14) {
        uVar14 = uVar17;
      }
      auStack_110[0] = 0;
      auStack_110[1] = 0;
      auStack_110[2] = 0;
      auStack_110[3] = 0;
      if (1 < uVar16) {
        plVar15 = (long *)0x1;
        do {
          auStack_110[(long)plVar15] = (uint)plVar15;
          plVar15 = (long *)((long)plVar15 + 1);
        } while ((long *)(ulong)uVar16 != plVar15);
      }
      plVar15 = plVar8;
      if (uVar14 != 0) {
        uVar17 = 0;
        do {
          plVar10 = param_4;
          FUN_109f658b0(param_4,0x38);
          if (plVar10 != (long *)0x0) {
            plVar10[6] = 0;
            plVar10[3] = 0;
            plVar10[2] = 0;
            plVar10[5] = 0;
            plVar10[4] = 0;
            plVar10[1] = 0;
            *plVar10 = 0;
          }
          plVar15 = param_4;
          FUN_109f658b0(param_4,0xb0);
          if (plVar15 != (long *)0x0) {
            plVar15[0x13] = 0;
            plVar15[0x12] = 0;
            plVar15[0x15] = 0;
            plVar15[0x14] = 0;
            plVar15[0xf] = 0;
            plVar15[0xe] = 0;
            plVar15[0x11] = 0;
            plVar15[0x10] = 0;
            plVar15[0xb] = 0;
            plVar15[10] = 0;
            plVar15[0xd] = 0;
            plVar15[0xc] = 0;
            plVar15[7] = 0;
            plVar15[6] = 0;
            plVar15[9] = 0;
            plVar15[8] = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          FUN_109ea98b0(plVar15,uVar17,1);
          func_0x000109eab3d8(plVar10,plVar20,plVar15);
          plVar8 = param_4;
          FUN_109f658b0(param_4,0x38);
          if (plVar8 != (long *)0x0) {
            plVar8[6] = 0;
            plVar8[3] = 0;
            plVar8[2] = 0;
            plVar8[5] = 0;
            plVar8[4] = 0;
            plVar8[1] = 0;
            *plVar8 = 0;
          }
          plVar15 = param_4;
          FUN_109f658b0(param_4,0xb0);
          if (plVar15 != (long *)0x0) {
            plVar15[0x13] = 0;
            plVar15[0x12] = 0;
            plVar15[0x15] = 0;
            plVar15[0x14] = 0;
            plVar15[0xf] = 0;
            plVar15[0xe] = 0;
            plVar15[0x11] = 0;
            plVar15[0x10] = 0;
            plVar15[0xb] = 0;
            plVar15[10] = 0;
            plVar15[0xd] = 0;
            plVar15[0xc] = 0;
            plVar15[7] = 0;
            plVar15[6] = 0;
            plVar15[9] = 0;
            plVar15[8] = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
            plVar15[5] = 0;
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
          }
          FUN_109ea98b0(plVar15,uVar17,1);
          func_0x000109eab3d8(plVar8,plVar24);
          if (*(char *)(plVar10[4] + 0xd) != *(char *)(plVar8[4] + 0xd)) {
            plVar11 = param_4;
            FUN_109f658b0(param_4,0x38);
            if (plVar11 != (long *)0x0) {
              plVar11[6] = 0;
              plVar11[3] = 0;
              plVar11[2] = 0;
              plVar11[5] = 0;
              plVar11[4] = 0;
              plVar11[1] = 0;
              *plVar11 = 0;
            }
            plVar11[1] = 0;
            plVar11[2] = 0;
            *(undefined4 *)(plVar11 + 3) = 5;
            *plVar11 = (long)&PTR_DAT_110b641e0;
            plVar11[4] = (long)&UNK_10e05d730;
            plVar11[5] = (long)plVar8;
            plVar15 = (long *)(ulong)uVar16;
            func_0x000109eab760(plVar11,auStack_110);
            plVar8 = plVar11;
          }
          plVar11 = param_4;
          FUN_109f658b0(param_4,0x38);
          if (plVar11 != (long *)0x0) {
            plVar11[6] = 0;
            plVar11[3] = 0;
            plVar11[2] = 0;
            plVar11[5] = 0;
            plVar11[4] = 0;
            plVar11[1] = 0;
            *plVar11 = 0;
          }
          plVar11[2] = 0;
          *(undefined4 *)(plVar11 + 3) = 8;
          *plVar11 = (long)&PTR_DAT_110b63f38;
          plVar11[4] = (long)plVar10;
          plVar11[5] = (long)plVar8;
          *(byte *)(plVar11 + 6) =
               (*(byte *)(plVar11 + 6) & 0xf0 | (byte)(-1 << (ulong)(uVar16 & 0x1f)) & 0xf) ^ 0xf;
          plVar10 = plVar11 + 1;
          *plVar10 = lVar12;
          puVar18 = *(undefined8 **)(param_2 + 0x18);
          plVar11[2] = (long)puVar18;
          *puVar18 = plVar10;
          *(long **)(param_2 + 0x18) = plVar10;
          uVar17 = uVar17 + 1;
        } while (uVar14 != uVar17);
      }
    }
  }
  lVar12 = 0x30;
  FUN_109f658b0();
  if (param_4 != (long *)0x0) {
    param_4[3] = 0;
    param_4[2] = 0;
    param_4[5] = 0;
    param_4[4] = 0;
    param_4[1] = 0;
    *param_4 = 0;
  }
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined4 *)(param_4 + 3) = 2;
  *param_4 = (long)&PTR_DAT_110b64048;
  param_4[5] = (long)plVar20;
  param_4[4] = plVar20[4];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Unwind_Resume();
    plVar20 = (long *)0x0;
    plVar10 = plVar15 + -5;
    if ((plVar10 != (long *)0x0) && (*plVar15 != 0)) {
      plVar20 = (long *)0x0;
      do {
        (**(code **)(*plVar10 + 0x18))(plVar10,1);
        plVar15 = plVar10;
        (**(code **)(*plVar10 + 8))(plVar10,param_4,plVar13);
        if (plVar15 == (long *)0x0) {
          plVar15 = plVar13;
          FUN_109f658b0(plVar13,0x28);
          if (plVar15 != (long *)0x0) {
            plVar15[4] = 0;
            plVar15[1] = 0;
            *plVar15 = 0;
            plVar15[3] = 0;
            plVar15[2] = 0;
          }
          plVar8 = plVar15 + 1;
          *plVar8 = lVar12 + 0x10;
          plVar15[2] = 0;
          *(undefined4 *)(plVar15 + 3) = 0x16;
          *plVar15 = (long)&PTR_DAT_110b63eb8;
          plVar15[4] = (long)&UNK_10e05d730;
        }
        else {
          plVar8 = plVar15;
          (**(code **)(*plVar15 + 0x30))();
          if (plVar8 != (long *)0x0) {
            plVar15 = plVar8;
          }
          plVar8 = plVar15 + 1;
          *plVar8 = lVar12 + 0x10;
        }
        puVar18 = *(undefined8 **)(lVar12 + 0x18);
        plVar15[2] = (long)puVar18;
        *puVar18 = plVar8;
        *(long **)(lVar12 + 0x18) = plVar8;
        plVar20 = (long *)(ulong)((int)plVar20 + 1);
        plVar15 = plVar10 + 5;
        plVar10 = (long *)*plVar15 + -5;
      } while (*(long *)*plVar15 != 0 && plVar10 != (long *)0x0);
    }
    return plVar20;
  }
  return param_4;
}



/* Entry: 109e14284; end: 109e143b3;  */

int FUN_109e14284(undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  
  iVar4 = 0;
  plVar5 = param_3 + -5;
  if ((plVar5 != (long *)0x0) && (*param_3 != 0)) {
    iVar4 = 0;
    do {
      (**(code **)(*plVar5 + 0x18))(plVar5,1);
      plVar1 = plVar5;
      (**(code **)(*plVar5 + 8))(plVar5,param_1,param_4);
      if (plVar1 == (long *)0x0) {
        plVar1 = param_4;
        FUN_109f658b0(param_4,0x28);
        if (plVar1 != (long *)0x0) {
          plVar1[4] = 0;
          plVar1[1] = 0;
          *plVar1 = 0;
          plVar1[3] = 0;
          plVar1[2] = 0;
        }
        plVar2 = plVar1 + 1;
        *plVar2 = param_2 + 0x10;
        plVar1[2] = 0;
        *(undefined4 *)(plVar1 + 3) = 0x16;
        *plVar1 = (long)&PTR_DAT_110b63eb8;
        plVar1[4] = (long)&UNK_10e05d730;
      }
      else {
        plVar2 = plVar1;
        (**(code **)(*plVar1 + 0x30))();
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2;
        }
        plVar2 = plVar1 + 1;
        *plVar2 = param_2 + 0x10;
      }
      puVar3 = *(undefined8 **)(param_2 + 0x18);
      plVar1[2] = (long)puVar3;
      *puVar3 = plVar2;
      *(long **)(param_2 + 0x18) = plVar2;
      iVar4 = iVar4 + 1;
      plVar1 = plVar5 + 5;
      plVar5 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar5 != (long *)0x0);
  }
  return iVar4;
}



/* Entry: 109e143b4; end: 109e14513;  */

void FUN_109e143b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5,long *param_6,long *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if (*(int *)(param_5 + 0x38) == 0x28) {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    lStack_48 = param_4[3];
    uStack_50 = param_4[2];
    puVar1 = param_1;
    FUN_109e143b4(param_1,param_2,param_3,&uStack_60,*(undefined8 *)(param_5 + 0x40),
                  *(undefined8 *)(param_5 + 0x48),param_7);
    plVar2 = param_6;
    (**(code **)(*param_6 + 8))(param_6,param_2,param_3);
    lStack_48 = param_6[1];
    uStack_50 = CONCAT44(uStack_50._4_4_,(int)param_6[2]);
    uStack_58 = *(undefined8 *)((long)param_6 + 0x1c);
    uStack_60 = *(undefined8 *)((long)param_6 + 0x14);
    FUN_109e0ef68(param_1,param_3,puVar1,plVar2,param_4,&uStack_60);
  }
  else {
    uStack_60 = 0;
    lVar3 = *(long *)(param_5 + 0x58);
    *param_7 = lVar3;
    FUN_109e14514(lVar3,param_8,param_3,&uStack_60);
    if (lVar3 == 0) {
      FUN_109e9ed98(param_4,param_3,&UNK_10f603f8c);
      *param_7 = 0;
    }
    else {
      (**(code **)(*param_6 + 8))(param_6,param_2,param_3);
      FUN_109f658b0(param_1,0x38);
      if (param_1 != (undefined8 *)0x0) {
        param_1[6] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
      }
      func_0x000109eab3d8();
    }
  }
  return;
}



/* Entry: 109e14514; end: 109e146cb;  */

void FUN_109e14514(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 uStack_61;
  
  uStack_61 = 0;
  lVar12 = param_3;
  FUN_109f65d74(param_3,&UNK_10f603fa4);
  plVar4 = *(long **)(*(long *)(param_3 + 0x48) + 8);
  FUN_109f61800(plVar4,lVar12);
  if (((plVar4 != (long *)0x0) && (lVar12 = *plVar4, lVar12 != 0)) &&
     (uVar8 = *(uint *)(param_3 + 0x5a4), 0 < (int)uVar8)) {
    uVar13 = 0;
    lVar14 = *(long *)(param_3 + 0x5a8);
    puVar15 = *(undefined **)(lVar12 + 0x20);
    cVar2 = puVar15[4];
    puVar5 = puVar15;
    cVar3 = cVar2;
    do {
      while (cVar3 == '\x13') {
        puVar1 = (undefined8 *)(puVar5 + 0x30);
        puVar5 = (undefined *)*puVar1;
        cVar3 = ((undefined *)*puVar1)[4];
      }
      lVar10 = *(long *)(lVar14 + uVar13 * 8);
      uVar11 = *(undefined8 *)(lVar10 + 0x20);
      if (((byte)puVar5[0xc] >> 1 & 1) == 0) {
        FUN_109eca058();
      }
      else {
        puVar5 = &UNK_10e05bf38 + *(long *)(puVar5 + 0x18);
      }
      _strcmp(uVar11,puVar5);
      if ((int)uVar11 == 0) {
        *param_4 = lVar12;
        if ((*(byte *)(param_3 + 0x3cf) & 1) == 0) {
          uVar8 = *(uint *)(param_3 + 0xec);
          if (uVar8 == 0) {
            uVar8 = *(uint *)(param_3 + 0xe8);
          }
          uVar9 = 0x6d;
          if ((*(byte *)(param_3 + 0x5a1) & 1) == 0) {
            uVar9 = 0x77;
          }
          bVar6 = uVar9 < uVar8 & (*(byte *)(param_3 + 0xe4) ^ 0xff);
        }
        else {
          bVar6 = 1;
        }
        if (((*(byte *)(param_3 + 0x315) & 1) == 0) &&
           (((*(byte *)(param_3 + 0x3ef) | *(byte *)(param_3 + 0x3cf)) & 1) == 0)) {
          uVar8 = *(uint *)(param_3 + 0xec);
          if (uVar8 == 0) {
            uVar8 = *(uint *)(param_3 + 0xe8);
          }
          bVar7 = 0;
          if (399 < uVar8) {
            bVar7 = *(byte *)(param_3 + 0xe4) ^ 1;
          }
        }
        else {
          bVar7 = 1;
        }
        FUN_109eb35f0(lVar10,param_3,param_2,bVar6,bVar7,0,&uStack_61);
        return;
      }
      uVar13 = uVar13 + 1;
      puVar5 = puVar15;
      cVar3 = cVar2;
    } while (uVar13 != uVar8);
  }
  return;
}



/* Entry: 109e146cc; end: 109e14727;  */

void FUN_109e146cc(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x60) + -5;
  if (**(long **)(param_1 + 0x60) != 0 && plVar2 != (long *)0x0) {
    do {
      plVar1 = plVar2;
      (**(code **)(*plVar2 + 0x10))();
      if (((ulong)plVar1 & 1) != 0) {
        return;
      }
      plVar1 = plVar2 + 5;
      plVar2 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar2 != (long *)0x0);
  }
  return;
}



/* Entry: 109e14728; end: 109e14d9f;  */

void FUN_109e14728(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long **pplVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long **pplStack_68;
  
  uStack_98 = *(undefined8 *)(param_1 + 8);
  uStack_a0 = *(undefined4 *)(param_1 + 0x10);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1c);
  uStack_b0 = *(undefined8 *)(param_1 + 0x14);
  lVar14 = *(long *)(param_1 + 0x90);
  if (lVar14 == 0) {
    puVar10 = &UNK_10f603df3;
LAB_109e147e0:
    FUN_109e9ed98(&uStack_b0,param_3,puVar10);
    FUN_109f658b0(param_3,0x28);
    if (param_3 != (undefined8 *)0x0) {
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
    }
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 3) = 0x16;
    *param_3 = &PTR_DAT_110b63eb8;
    puVar10 = &UNK_10e05d730;
    goto LAB_109e14974;
  }
  if ((*(byte *)((long)param_3 + 0x341) & 1) == 0) {
    uVar3 = *(uint *)((long)param_3 + 0xec);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_3 + 0x1d);
    }
    if (0x1a3 < uVar3 && *(char *)((long)param_3 + 0xe4) == '\0') goto LAB_109e147a0;
    puVar10 = &UNK_10f603e17;
  }
  else {
LAB_109e147a0:
    if (*(char *)(lVar14 + 4) == '\x11') {
      func_0x000109e11e20(param_2,lVar14,&uStack_b0,*(undefined8 *)(param_1 + 0x60),param_3);
      return;
    }
    if (*(char *)(lVar14 + 4) == '\x13') {
      func_0x000109e11994(param_2,lVar14,&uStack_b0,*(undefined8 *)(param_1 + 0x60),param_3);
      return;
    }
    if (*(byte *)(lVar14 + 0xd) < 2) {
      puVar10 = &UNK_10f604418;
    }
    else {
      pplStack_68 = &plStack_80;
      plStack_80 = &lStack_70;
      uStack_78 = 0;
      lStack_70 = 0;
      lVar16 = param_2;
      FUN_109e14284(param_2,&plStack_80,*(undefined8 *)(param_1 + 0x60),param_3);
      uVar3 = (uint)lVar16;
      if (uVar3 != 0) {
        uVar11 = (uint)*(byte *)(lVar14 + 0xe);
        if (*(byte *)(lVar14 + 0xd) < 2 || uVar11 != 1) {
          if (((uVar11 < 2) || (uVar3 == uVar11)) || (*(byte *)(lVar14 + 4) - 5 < 0xfffffffd))
          goto LAB_109e14998;
        }
        else if ((uVar3 == *(byte *)(lVar14 + 0xd)) || (0xb < (*(uint *)(lVar14 + 4) & 0xfc))) {
LAB_109e14998:
          plVar15 = (long *)*plStack_80;
          plStack_88 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            uVar3 = 1;
            plStack_88 = plStack_80 + -1;
            do {
              lVar16 = *plVar15;
              plVar1 = (long *)0x0;
              if (lVar16 != 0) {
                plVar1 = plVar15 + -1;
              }
              pplVar5 = &plStack_88;
              FUN_109e14da0(pplVar5,*(undefined1 *)(lVar14 + 4),param_3);
              plVar2 = plStack_88;
              if (*(byte *)(lVar14 + 0xe) < 2) {
                lVar13 = plStack_88[4];
LAB_109e14a18:
                lVar6 = lVar14;
                FUN_109ec6840();
                if (lVar13 != lVar6) {
                  puVar10 = &UNK_10f6044be;
LAB_109e14d4c:
                  if ((*(byte *)(lVar6 + 0xc) >> 1 & 1) == 0) {
                    FUN_109eca058();
                  }
                  if ((*(byte *)(plVar2[4] + 0xc) >> 1 & 1) == 0) {
                    FUN_109eca058();
                  }
                  goto LAB_109e147e0;
                }
              }
              else {
                lVar13 = plStack_88[4];
                if (2 < *(byte *)(lVar14 + 4) - 2) goto LAB_109e14a18;
                lVar6 = lVar14;
                func_0x000109ec8580();
                if (lVar13 != lVar6) {
                  func_0x000109ec8580();
                  puVar10 = &UNK_10f604485;
                  lVar6 = lVar14;
                  goto LAB_109e14d4c;
                }
              }
              uVar3 = uVar3 & (uint)pplVar5;
              plStack_88 = plVar1;
              if (lVar16 == 0) goto LAB_109e14a3c;
              plVar15 = (long *)*plVar15;
            } while( true );
          }
LAB_109e14a40:
          FUN_109f658b0(param_3,0xb0);
          if (param_3 != (undefined8 *)0x0) {
            param_3[0x13] = 0;
            param_3[0x12] = 0;
            param_3[0x15] = 0;
            param_3[0x14] = 0;
            param_3[0xf] = 0;
            param_3[0xe] = 0;
            param_3[0x11] = 0;
            param_3[0x10] = 0;
            param_3[0xb] = 0;
            param_3[10] = 0;
            param_3[0xd] = 0;
            param_3[0xc] = 0;
            param_3[7] = 0;
            param_3[6] = 0;
            param_3[9] = 0;
            param_3[8] = 0;
            param_3[3] = 0;
            param_3[2] = 0;
            param_3[5] = 0;
            param_3[4] = 0;
            param_3[1] = 0;
            *param_3 = 0;
          }
          FUN_109ea9d6c();
          return;
        }
      }
      puVar10 = &UNK_10f60445e;
    }
  }
  FUN_109e9ed98(&uStack_b0,param_3,puVar10);
  puVar4 = (undefined8 *)0x60;
  _malloc();
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  *puVar4 = param_3 + -6;
  lVar14 = param_3[-5];
  puVar4[3] = lVar14;
  puVar4[4] = 0;
  param_3[-5] = puVar4;
  if (lVar14 != 0) {
    *(undefined8 **)(lVar14 + 0x10) = puVar4;
  }
  param_3 = puVar4 + 6;
  *param_3 = &PTR_DAT_110b63eb8;
  puVar10 = &UNK_10e05d730;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 9) = 0x16;
LAB_109e14974:
  param_3[4] = puVar10;
  return;
LAB_109e14a3c:
  if (uVar3 != 0) goto LAB_109e14a40;
  puVar4 = param_3;
  FUN_109f658b0(param_3,0x90);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x11] = 0;
    puVar4[0x10] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  FUN_109eaba7c(puVar4,lVar14,&UNK_10f6044f7,0xb);
  puVar4[1] = param_2 + 0x10;
  plVar15 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar15 = puVar4 + 1;
  }
  puVar12 = *(undefined8 **)(param_2 + 0x18);
  puVar4[2] = puVar12;
  *puVar12 = plVar15;
  *(long **)(param_2 + 0x18) = plVar15;
  if (*plStack_80 != 0) {
    uVar3 = 0;
    puVar12 = param_3 + -6;
    plVar15 = plStack_80;
    do {
      if ((*(byte *)(puVar4[4] + 0xe) < 2) || (2 < *(byte *)(puVar4[4] + 4) - 2)) {
        puVar9 = (undefined8 *)0x60;
        _malloc();
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9[3] = 0;
        puVar9[2] = 0;
        *puVar9 = puVar12;
        lVar14 = param_3[-5];
        puVar9[3] = lVar14;
        puVar9[4] = 0;
        param_3[-5] = puVar9;
        if (lVar14 != 0) {
          *(undefined8 **)(lVar14 + 0x10) = puVar9;
        }
        puVar9[6] = &PTR_DAT_110b64048;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[7] = 0;
        *(undefined4 *)(puVar9 + 9) = 2;
        puVar9[10] = puVar4[4];
        puVar9[0xb] = puVar4;
        puVar7 = (undefined8 *)0x70;
        _malloc();
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        *puVar7 = puVar12;
        lVar14 = param_3[-5];
        puVar7[3] = lVar14;
        puVar7[4] = 0;
        param_3[-5] = puVar7;
        if (lVar14 != 0) {
          *(undefined8 **)(lVar14 + 0x10) = puVar7;
        }
        puVar8 = puVar7 + 6;
        *puVar8 = &PTR_DAT_110b63f38;
        puVar7[10] = 0;
        puVar7[9] = 0;
        puVar7[0xc] = 0;
        puVar7[0xb] = 0;
        puVar7[8] = 0;
        puVar7[7] = 0;
        *(undefined4 *)(puVar7 + 9) = 8;
        puVar7[10] = puVar9 + 6;
        puVar7[0xb] = plVar15 + -1;
        *(byte *)(puVar7 + 0xc) = (byte)(1 << (ulong)(uVar3 & 0x1f)) & 0xf;
      }
      else {
        puVar7 = (undefined8 *)0x70;
        _malloc();
        puVar9 = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          *puVar7 = puVar12;
          lVar14 = param_3[-5];
          puVar7[3] = lVar14;
          puVar7[4] = 0;
          param_3[-5] = puVar7;
          if (lVar14 != 0) {
            *(undefined8 **)(lVar14 + 0x10) = puVar7;
          }
          puVar9 = puVar7 + 6;
          puVar7[7] = 0;
          *puVar9 = 0;
          puVar7[0xc] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[0xb] = 0;
          puVar7[10] = 0;
        }
        puVar8 = (undefined8 *)0xe0;
        _malloc();
        puVar7 = puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          *puVar8 = puVar12;
          lVar14 = param_3[-5];
          puVar8[3] = lVar14;
          puVar8[4] = 0;
          param_3[-5] = puVar8;
          if (lVar14 != 0) {
            *(undefined8 **)(lVar14 + 0x10) = puVar8;
          }
          puVar7 = puVar8 + 6;
          puVar8[7] = 0;
          *puVar7 = 0;
          puVar8[0x19] = 0;
          puVar8[0x18] = 0;
          puVar8[0x1b] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x15] = 0;
          puVar8[0x14] = 0;
          puVar8[0x17] = 0;
          puVar8[0x16] = 0;
          puVar8[0x11] = 0;
          puVar8[0x10] = 0;
          puVar8[0x13] = 0;
          puVar8[0x12] = 0;
          puVar8[0xd] = 0;
          puVar8[0xc] = 0;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
        }
        func_0x000109ea9960(puVar7,uVar3,1);
        func_0x000109eab3d8(puVar9,puVar4,puVar7);
        puVar9 = (undefined8 *)0x70;
        _malloc();
        if (puVar9 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          *puVar9 = puVar12;
          lVar14 = param_3[-5];
          puVar9[3] = lVar14;
          puVar9[4] = 0;
          param_3[-5] = puVar9;
          if (lVar14 != 0) {
            *(undefined8 **)(lVar14 + 0x10) = puVar9;
          }
          puVar8 = puVar9 + 6;
          puVar9[7] = 0;
          *puVar8 = 0;
          puVar9[0xc] = 0;
          puVar9[9] = 0;
          puVar9[8] = 0;
          puVar9[0xb] = 0;
          puVar9[10] = 0;
        }
        func_0x000109ea9180();
      }
      puVar8[1] = param_2 + 0x10;
      plVar1 = (long *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        plVar1 = puVar8 + 1;
      }
      puVar9 = *(undefined8 **)(param_2 + 0x18);
      puVar8[2] = puVar9;
      *puVar9 = plVar1;
      *(long **)(param_2 + 0x18) = plVar1;
      uVar3 = uVar3 + 1;
      plVar15 = (long *)*plVar15;
    } while (*plVar15 != 0);
  }
  FUN_109f658b0(param_3,0x30);
  if (param_3 != (undefined8 *)0x0) {
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
  }
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 3) = 2;
  *param_3 = &PTR_DAT_110b64048;
  puVar10 = (undefined *)puVar4[4];
  param_3[5] = puVar4;
  goto LAB_109e14974;
}



/* Entry: 109e14da0; end: 109e14ef7;  */

bool FUN_109e14da0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = (long *)*param_1;
  lVar4 = plVar9[4];
  if ((uint)*(byte *)(lVar4 + 4) != (uint)param_2) {
    func_0x000109ec6c94(param_2,*(undefined1 *)(lVar4 + 0xd),*(undefined1 *)(lVar4 + 0xe),0,0,0);
    plVar10 = (long *)*param_1;
    lVar4 = plVar10[4];
    if ((*(byte *)(param_3 + 0x3cf) & 1) == 0) {
      uVar5 = *(uint *)(param_3 + 0xec);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(param_3 + 0xe8);
      }
      uVar7 = 0x6d;
      if ((*(byte *)(param_3 + 0x5a1) & 1) == 0) {
        uVar7 = 0x77;
      }
      bVar2 = uVar7 < uVar5 & (*(byte *)(param_3 + 0xe4) ^ 0xff);
    }
    else {
      bVar2 = 1;
    }
    if (((*(byte *)(param_3 + 0x315) & 1) == 0) &&
       (((*(byte *)(param_3 + 0x3ef) | *(byte *)(param_3 + 0x3cf)) & 1) == 0)) {
      uVar5 = *(uint *)(param_3 + 0xec);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(param_3 + 0xe8);
      }
      bVar3 = 0;
      if (399 < uVar5) {
        bVar3 = *(byte *)(param_3 + 0xe4) ^ 1;
      }
    }
    else {
      bVar3 = 1;
    }
    FUN_109eb8cc8(lVar4,param_2,bVar2,bVar3);
    if ((int)lVar4 != 0) {
      FUN_109e12240(plVar10,param_2);
      plVar9 = plVar10;
    }
  }
  plVar1 = plVar9;
  (**(code **)(*plVar9 + 0x30))(plVar9,param_3,0);
  plVar10 = plVar1;
  if (plVar1 == (long *)0x0) {
    plVar10 = plVar9;
  }
  plVar9 = (long *)*param_1;
  if (plVar9 != plVar10) {
    puVar6 = (undefined8 *)plVar9[2];
    lVar4 = plVar9[1];
    plVar8 = plVar10 + 1;
    plVar10[2] = plVar9[2];
    *plVar8 = lVar4;
    *puVar6 = plVar8;
    *(long **)(plVar9[1] + 8) = plVar8;
    *param_1 = (long)plVar10;
  }
  return plVar1 != (long *)0x0;
}



/* Entry: 109e14ef8; end: 109e14f67;  */

void FUN_109e14ef8(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  FUN_109f61800(param_2,param_3);
  if (((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) &&
     (puVar2 = *(ulong **)(*(long *)(param_2 + 8) + 0x28), uVar1 = param_1, *puVar2 != 0)) {
    while (((uVar1 != 0 && ((code *)puVar2[0xd] != (code *)0x0)) &&
           (uVar1 = param_1, (*(code *)puVar2[0xd])(), (uVar1 & 1) == 0))) {
      puVar2 = (ulong *)*puVar2;
      uVar1 = *puVar2;
    }
  }
  return;
}



/* Entry: 109e14f68; end: 109e1501f;  */

void FUN_109e14f68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_3 != 0) {
    plVar2 = *(long **)(param_3 + 0x28);
    lVar1 = *plVar2;
    while (lVar1 != 0) {
      if (((param_1 == 0) || ((code *)plVar2[0xd] == (code *)0x0)) ||
         (lVar1 = param_1, (*(code *)plVar2[0xd])(), (int)lVar1 != 0)) {
        lVar1 = plVar2[3];
        FUN_109e0f754(lVar1,*(undefined8 *)(param_3 + 0x20),plVar2 + 4);
        FUN_109e9ed98(param_2,param_1,&UNK_10f604032);
        if (lVar1 != 0) {
          FUN_109f65aa4(lVar1 + -0x30);
          FUN_109f65ae0(lVar1 + -0x30);
        }
      }
      plVar2 = (long *)*plVar2;
      lVar1 = *plVar2;
    }
  }
  return;
}



/* Entry: 109e15020; end: 109e151db;  */

void FUN_109e15020(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  plVar2 = plVar7;
  (**(code **)(*plVar7 + 0x40))();
  if (((plVar2 != (long *)0x0) && ((*(byte *)(plVar2 + 8) & 1) == 0)) &&
     ((*(ushort *)((long)plVar2 + 0x44) >> 8 & 1) == 0)) {
    puVar3 = (undefined8 *)*param_2;
    FUN_109f658b0(puVar3,0x90);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    FUN_109eaba7c(puVar3,plVar7[4],&UNK_10f604410,0xb);
    puVar4 = (undefined8 *)*param_2;
    lVar1 = param_2[1];
    puVar3[1] = lVar1 + 0x10;
    plVar2 = (long *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      plVar2 = puVar3 + 1;
    }
    puVar5 = *(undefined8 **)(lVar1 + 0x18);
    puVar3[2] = puVar5;
    *puVar5 = plVar2;
    *(long **)(lVar1 + 0x18) = plVar2;
    FUN_109f658b0(puVar4,0x30);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 2;
    *puVar4 = &PTR_DAT_110b64048;
    puVar4[4] = puVar3[4];
    puVar4[5] = puVar3;
    puVar5 = (undefined8 *)*param_2;
    FUN_109f658b0(puVar5,0x38);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,*param_2,0);
    func_0x000109ea9180(puVar5,puVar4,plVar7);
    puVar4 = (undefined8 *)*param_2;
    lVar1 = param_2[1];
    puVar5[1] = lVar1 + 0x10;
    plVar2 = (long *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      plVar2 = puVar5 + 1;
    }
    puVar6 = *(undefined8 **)(lVar1 + 0x18);
    puVar5[2] = puVar6;
    *puVar6 = plVar2;
    *(long **)(lVar1 + 0x18) = plVar2;
    FUN_109f658b0(puVar4,0x30);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 3) = 2;
    *puVar4 = &PTR_DAT_110b64048;
    puVar4[4] = puVar3[4];
    puVar4[5] = puVar3;
    *(undefined8 **)(param_1 + 0x30) = puVar4;
  }
  return;
}



/* Entry: 109e151dc; end: 109e1571f;  */

void FUN_109e151dc(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  char *pcVar7;
  long *plVar8;
  undefined ***pppuVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong unaff_x23;
  undefined **ppuVar20;
  ulong unaff_x24;
  char *unaff_x25;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  uint uStack_194;
  undefined *puStack_190;
  byte bStack_188;
  long *plStack_180;
  char *pcStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109e64320();
  lVar11 = param_2[9];
  *(bool *)lVar11 = (int)param_2[0x1d] == 0x6e;
  param_2[0x4f] = 0;
  param_2[0x50] = (long)param_1;
  *(undefined2 *)((long)param_2 + 0x114) = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  FUN_109f61740(*(undefined8 *)(lVar11 + 8));
  for (plVar17 = (long *)param_2[5]; plVar15 = plVar17 + -5, *plVar17 != 0 && plVar15 != (long *)0x0
      ; plVar17 = (long *)*plVar17) {
    (**(code **)(*plVar15 + 8))(plVar15,param_1,param_2);
  }
  lStack_e8 = 0;
  ppuStack_f0 = (undefined **)0x0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  if (0 < (int)*(uint *)(param_2 + 0xb6)) {
    uVar12 = 0;
    do {
      lVar11 = *(long *)(param_2[0xb7] + uVar12 * 8);
      plVar17 = *(long **)(lVar11 + 0x28);
      plVar15 = (long *)*plVar17;
      if (plVar15 != (long *)0x0) {
        bVar5 = false;
        do {
          if ((*(byte *)(plVar17 + 8) & 1) != 0) {
            if (bVar5) {
              uVar12 = (ulong)*(uint *)(param_2 + 0x1f);
              func_0x000109f47670();
              uStack_128 = *(undefined8 *)(lVar11 + 0x20);
              uStack_130 = uVar12;
              FUN_109e9ed98(&ppuStack_f0,param_2,&UNK_10f609835);
              goto LAB_109e152f8;
            }
            bVar5 = true;
          }
          plVar16 = (long *)*plVar15;
          plVar17 = plVar15;
          plVar15 = plVar16;
        } while (plVar16 != (long *)0x0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != *(uint *)(param_2 + 0xb6));
  }
LAB_109e152f8:
  FUN_109eb39cc(param_2,param_1);
  uStack_108 = 0;
  ppuStack_110 = (undefined **)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  plVar15 = (long *)*param_1;
  plVar17 = (long *)*plVar15;
  if (plVar17 == (long *)0x0) {
    uVar12 = 0;
    uVar18 = 0;
  }
  else {
    bVar4 = 0;
    plVar16 = (long *)0x0;
    unaff_x24 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    do {
      if ((int)plVar15[2] == 7) {
        uVar10 = *(uint *)(plVar15 + 7);
        unaff_x23 = (ulong)uVar10;
        if ((uVar10 >> 8 & 1) != 0) {
          unaff_x25 = (char *)plVar15[4];
          pcVar7 = unaff_x25;
          _strcmp(unaff_x25,&UNK_10f609618);
          if ((int)pcVar7 == 0) {
            if ((plVar15[0xe] == 0) && ((int)param_2[0x1e] != 0)) {
              lStack_88 = 0;
              lStack_90 = 0;
              lStack_78 = 0;
              lStack_80 = 0;
              lStack_a8 = 0;
              lStack_b0 = 0;
              lStack_98 = 0;
              lStack_a0 = 0;
              uStack_c8 = 0;
              uStack_c7 = 0;
              uStack_d0 = 0;
              uStack_cf = 0;
              lStack_b8 = 0;
              uStack_c0 = 0;
              uStack_bf = 0;
              lStack_e8 = 0;
              ppuStack_f0 = (undefined **)0x0;
              lStack_d8 = 0;
              lStack_e0 = 0;
              *(uint *)(plVar15 + 7) = *(uint *)(plVar15 + 7) | 0x600000;
              plVar8 = (long *)0xe0;
              _malloc();
              plVar17 = plVar8;
              if (plVar8 != (long *)0x0) {
                plVar8[4] = 0;
                plVar8[1] = 0;
                *plVar8 = 0;
                plVar8[3] = 0;
                plVar8[2] = 0;
                *plVar8 = (long)(plVar15 + -7);
                lVar11 = plVar15[-6];
                plVar8[3] = lVar11;
                plVar15[-6] = (long)plVar8;
                if (lVar11 != 0) {
                  *(long **)(lVar11 + 0x10) = plVar8;
                }
                plVar17 = plVar8 + 6;
                plVar8[7] = 0;
                *plVar17 = 0;
                plVar8[0x19] = 0;
                plVar8[0x18] = 0;
                plVar8[0x1b] = 0;
                plVar8[0x1a] = 0;
                plVar8[0x15] = 0;
                plVar8[0x14] = 0;
                plVar8[0x17] = 0;
                plVar8[0x16] = 0;
                plVar8[0x11] = 0;
                plVar8[0x10] = 0;
                plVar8[0x13] = 0;
                plVar8[0x12] = 0;
                plVar8[0xd] = 0;
                plVar8[0xc] = 0;
                plVar8[0xf] = 0;
                plVar8[0xe] = 0;
                plVar8[9] = 0;
                plVar8[8] = 0;
                plVar8[0xb] = 0;
                plVar8[10] = 0;
              }
              lVar11 = plVar15[3];
              plVar17[0xe] = lStack_a8;
              plVar17[0xd] = lStack_b0;
              plVar17[0x10] = lStack_98;
              plVar17[0xf] = lStack_a0;
              plVar17[0x12] = lStack_88;
              plVar17[0x11] = lStack_90;
              plVar17[0x14] = lStack_78;
              plVar17[0x13] = lStack_80;
              plVar17[6] = lStack_e8;
              plVar17[5] = (long)ppuStack_f0;
              plVar17[8] = lStack_d8;
              plVar17[7] = lStack_e0;
              plVar17[10] = CONCAT71(uStack_c7,uStack_c8);
              plVar17[9] = CONCAT71(uStack_cf,uStack_d0);
              plVar17[1] = 0;
              plVar17[2] = 0;
              *(undefined4 *)(plVar17 + 3) = 3;
              *plVar17 = (long)&PTR_DAT_110b63f80;
              plVar17[0x15] = 0;
              plVar17[4] = lVar11;
              plVar17[0xc] = lStack_b8;
              plVar17[0xb] = CONCAT71(uStack_bf,uStack_c0);
              plVar15[0xe] = (long)plVar17;
              bVar4 = 1;
              plVar17 = (long *)*plVar15;
            }
            else {
              bVar4 = 1;
            }
          }
          else {
            pcVar7 = unaff_x25;
            _strcmp(unaff_x25,&UNK_10f609625);
            if ((int)pcVar7 == 0) {
              uStack_118 = CONCAT44(1,(uint)uStack_118);
            }
            else {
              pcVar7 = unaff_x25;
              _strcmp(unaff_x25,&UNK_10f609631);
              if ((int)pcVar7 == 0) {
                uStack_118 = CONCAT44(uStack_118._4_4_,1);
              }
              else {
                pcVar7 = unaff_x25;
                _strcmp(unaff_x25,&UNK_10f60964a);
                if ((int)pcVar7 == 0) {
                  uStack_11c = 1;
                }
                else if (((*unaff_x25 != 'g') || (unaff_x25[1] != 'l')) || (unaff_x25[2] != '_')) {
                  bVar5 = (uVar10 & 0x7800) == 0x2800;
                  plVar15 = plVar15 + -1;
                  if (!bVar5) {
                    plVar15 = plVar16;
                  }
                  bVar6 = (int)param_2[0x1f] == 4;
                  uVar10 = (uint)unaff_x24;
                  if (bVar6) {
                    uVar10 = (uint)bVar5 | (uint)unaff_x24;
                  }
                  unaff_x24 = (ulong)uVar10;
                  if (bVar6) {
                    plVar16 = plVar15;
                  }
                }
              }
            }
          }
        }
      }
      plVar15 = plVar17;
      plVar17 = (long *)*plVar15;
    } while (plVar17 != (long *)0x0);
    bVar5 = (bool)(bVar4 ^ 1);
    uVar10 = uStack_118._4_4_ ^ 1;
    if ((bVar5) || ((uVar10 & 1) != 0)) {
      uVar2 = (uint)unaff_x24 ^ 1;
      uVar12 = (ulong)uStack_11c;
      uVar18 = uStack_118 & 0xffffffff;
      if (bVar5 || uVar2 != 0) {
        if (((((uint)uStack_118 ^ 1) & 1) == 0) && (((uStack_11c ^ 1) & 1) == 0)) {
          puVar19 = &UNK_10f6096d9;
        }
        else if (bVar5 || ((uStack_11c ^ 1) & 1) != 0) {
          if (((uVar10 | (uint)uStack_118 ^ 1) & 1) == 0) {
            puVar19 = &UNK_10f60977d;
          }
          else {
            if ((uVar10 & 1) != 0 || uVar2 != 0) goto LAB_109e15584;
            uStack_130 = plVar16[5];
            puVar19 = &UNK_10f6097c9;
          }
        }
        else {
          puVar19 = &UNK_10f609731;
        }
      }
      else {
        uStack_130 = plVar16[5];
        puVar19 = &UNK_10f6096a2;
      }
      FUN_109e9ed98(&ppuStack_110,param_2,puVar19);
    }
    else {
      FUN_109e9ed98(&ppuStack_110,param_2,&UNK_10f609662);
      uVar12 = (ulong)uStack_11c;
      uVar18 = uStack_118 & 0xffffffff;
    }
  }
LAB_109e15584:
  if ((((uVar18 & 1) != 0) || ((uVar12 & 1) != 0)) && ((*(byte *)((long)param_2 + 0x3ad) & 1) == 0))
  {
    FUN_109e9ed98(&ppuStack_110,param_2,&UNK_10f6097ff);
  }
  param_2[0x50] = 0;
  plVar16 = *(long **)*param_1;
  plVar17 = (long *)*param_1;
  if (plVar16 != (long *)0x0) {
    while( true ) {
      lVar11 = *plVar16;
      if ((int)plVar17[2] == 7) {
        puVar13 = (undefined8 *)plVar17[1];
        plVar16[1] = (long)puVar13;
        *puVar13 = plVar16;
        *plVar17 = 0;
        plVar17[1] = 0;
        lVar14 = *param_1;
        *plVar17 = lVar14;
        plVar17[1] = (long)param_1;
        *(long **)(lVar14 + 8) = plVar17;
        *param_1 = (long)plVar17;
      }
      if (lVar11 == 0) break;
      plVar17 = plVar16;
      plVar16 = (long *)*plVar16;
    }
  }
  plVar17 = *(long **)(param_2[9] + 8);
  FUN_109f61800(plVar17,&UNK_10f62bc68);
  if ((plVar17 != (long *)0x0) && (*plVar17 != 0)) {
    *(byte *)((long)param_2 + 0x411) = (byte)(*(uint *)(*plVar17 + 0x40) >> 7) & 1;
  }
  FUN_109e15720(param_1,param_2,4);
  uVar10 = 5;
  FUN_109e15720(param_1,param_2);
  uStack_c7 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_cf = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  lStack_e8 = 0;
  ppuStack_f0 = &PTR_FUN_110b5e090;
  lStack_b8 = 0;
  pppuVar9 = &ppuStack_f0;
  plVar17 = param_1;
  FUN_109eb4670();
  if (lStack_b8 != 0) {
    uStack_108 = 0;
    ppuStack_110 = (undefined **)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_130 = *(ulong *)(lStack_b8 + 0x28);
    uVar10 = 0xf604504;
    pppuVar9 = &ppuStack_110;
    plVar17 = param_2;
    FUN_109e9ed98();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_109e15720;
  plVar16 = *(long **)(plVar17[9] + 8);
  if (uVar10 == 4) {
    puVar19 = &UNK_10f60601e;
  }
  else {
    puVar19 = &UNK_10f606096;
  }
  plStack_180 = plVar15;
  pcStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = uVar18;
  uStack_158 = uVar12;
  plStack_150 = param_1;
  plStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_109f61800(plVar16,puVar19);
  if (((plVar16 != (long *)0x0) && (*plVar16 != 0)) &&
     (puVar19 = *(undefined **)(*plVar16 + 0x88), puVar19 != (undefined *)0x0)) {
    uStack_19f = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1a7 = 0;
    uStack_1b0 = 0;
    ppuStack_1c8 = &PTR_FUN_110b5e628;
    bStack_188 = 0;
    uStack_194 = uVar10;
    puStack_190 = puVar19;
    FUN_109eb4670(&ppuStack_1c8,pppuVar9);
    if ((bStack_188 & 1) == 0) {
      plVar15 = (long *)**pppuVar9;
      if (plVar15 != (long *)0x0) {
        ppuVar20 = *pppuVar9 + -1;
        while( true ) {
          lVar11 = *plVar15;
          ppuVar1 = (undefined **)0x0;
          if (lVar11 != 0) {
            ppuVar1 = (undefined **)(plVar15 + -1);
          }
          if (((*(int *)(ppuVar20 + 3) == 7) && (ppuVar20[0x11] == puVar19)) &&
             ((*(uint *)(ppuVar20 + 8) & 0x600) == 0x400 &&
              (*(uint *)(ppuVar20 + 8) >> 0xb & 0xf) == uVar10)) {
            puVar13 = *(undefined8 **)(plVar17[9] + 8);
            FUN_109f61800(puVar13,ppuVar20[5]);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
            }
            puVar3 = ppuVar20[1];
            plVar16 = (long *)ppuVar20[2];
            *(long **)(puVar3 + 8) = plVar16;
            *plVar16 = (long)puVar3;
            ppuVar20[1] = (undefined *)0x0;
            ppuVar20[2] = (undefined *)0x0;
          }
          if (lVar11 == 0) break;
          plVar15 = (long *)*plVar15;
          ppuVar20 = ppuVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109e15720; end: 109e1585f;  */

void FUN_109e15720(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  uint uStack_64;
  long lStack_60;
  byte bStack_58;
  
  plVar4 = *(long **)(*(long *)(param_2 + 0x48) + 8);
  if (param_3 == 4) {
    puVar6 = &UNK_10f60601e;
  }
  else {
    puVar6 = &UNK_10f606096;
  }
  FUN_109f61800(plVar4,puVar6);
  if (((plVar4 != (long *)0x0) && (*plVar4 != 0)) && (lVar7 = *(long *)(*plVar4 + 0x88), lVar7 != 0)
     ) {
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    ppuStack_98 = &PTR_FUN_110b5e628;
    bStack_58 = 0;
    uStack_64 = param_3;
    lStack_60 = lVar7;
    FUN_109eb4670(&ppuStack_98,param_1);
    if ((bStack_58 & 1) == 0) {
      plVar4 = *(long **)*param_1;
      if (plVar4 != (long *)0x0) {
        plVar8 = (long *)*param_1 + -1;
        while( true ) {
          lVar9 = *plVar4;
          plVar1 = (long *)0x0;
          if (lVar9 != 0) {
            plVar1 = plVar4 + -1;
          }
          if ((((int)plVar8[3] == 7) && (plVar8[0x11] == lVar7)) &&
             ((*(uint *)(plVar8 + 8) & 0x600) == 0x400 &&
              (*(uint *)(plVar8 + 8) >> 0xb & 0xf) == param_3)) {
            puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x48) + 8);
            FUN_109f61800(puVar5,plVar8[5]);
            if (puVar5 != (undefined8 *)0x0) {
              *puVar5 = 0;
            }
            lVar2 = plVar8[1];
            plVar3 = (long *)plVar8[2];
            *(long **)(lVar2 + 8) = plVar3;
            *plVar3 = lVar2;
            plVar8[1] = 0;
            plVar8[2] = 0;
          }
          if (lVar9 == 0) break;
          plVar4 = (long *)*plVar4;
          plVar8 = plVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 109e15860; end: 109e1588b;  */

undefined8 FUN_109e15860(void)

{
  return 0;
}



/* Entry: 109e1588c; end: 109e15993;  */

void FUN_109e1588c(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0xf604527;
  _strcmp(&UNK_10f604527,param_1);
  if ((iVar1 == 0) && (*(uint *)(param_4 + 0x15c) < param_2)) {
    puVar2 = &UNK_10f604533;
  }
  else {
    iVar1 = 0xf60457b;
    _strcmp(&UNK_10f60457b,param_1);
    if (iVar1 == 0) {
      *(uint *)(param_4 + 0x5c4) = param_2;
      if (param_2 <= *(uint *)(param_4 + 0x154)) goto LAB_109e15950;
      puVar2 = &UNK_10f60458b;
    }
    else {
      iVar1 = 0xf6045d7;
      _strcmp(&UNK_10f6045d7,param_1);
      if (iVar1 != 0) goto LAB_109e15950;
      *(uint *)(param_4 + 0x5c8) = param_2;
      if (param_2 <= *(uint *)(param_4 + 0x154)) goto LAB_109e15950;
      puVar2 = &UNK_10f6045e7;
    }
  }
  FUN_109e9ed98(param_3,param_4,puVar2);
LAB_109e15950:
  if (*(uint *)(param_4 + 0x154) < (uint)(*(int *)(param_4 + 0x5c8) + *(int *)(param_4 + 0x5c4))) {
    FUN_109e9ed98(param_3,param_4,&UNK_10f604633);
  }
  return;
}



/* Entry: 109e15994; end: 109e1599b;  */

undefined ** FUN_109e15994(undefined **param_1,undefined **param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  char *pcVar20;
  long lVar21;
  undefined1 uVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar25 [16];
  
  ppuVar18 = (undefined **)0x1;
  puVar7 = (undefined1 *)register0x00000008;
  do {
    ppuVar17 = param_3;
    *(undefined ***)(puVar7 + -0x60) = unaff_x28;
    *(undefined ***)(puVar7 + -0x58) = unaff_x27;
    *(undefined ***)(puVar7 + -0x50) = unaff_x26;
    *(undefined ***)(puVar7 + -0x48) = unaff_x25;
    *(undefined ***)(puVar7 + -0x40) = unaff_x24;
    *(undefined ***)(puVar7 + -0x38) = unaff_x23;
    *(undefined ***)(puVar7 + -0x30) = unaff_x22;
    *(undefined ***)(puVar7 + -0x28) = unaff_x21;
    *(undefined ***)(puVar7 + -0x20) = unaff_x20;
    *(undefined ***)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = unaff_x29;
    *(code **)(puVar7 + -8) = unaff_x30;
    unaff_x29 = puVar7 + -0x10;
    *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)(puVar7 + -0x98) = 0;
    puVar7[-0x99] = 0;
    puVar19 = param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar6 = *(undefined8 *)((long)param_1 + 0x14);
    *(undefined8 *)(puVar7 + -0xb8) = *(undefined8 *)((long)param_1 + 0x1c);
    *(undefined8 *)(puVar7 + -0xc0) = uVar6;
    *(undefined4 *)(puVar7 + -0xb0) = uVar2;
    *(undefined **)(puVar7 + -0xa8) = puVar19;
    iVar9 = *(int *)(param_1 + 7);
    ppuVar12 = param_1;
    param_3 = ppuVar17;
    unaff_x21 = ppuVar17;
    unaff_x20 = param_1;
    switch(iVar9) {
    case 0:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      unaff_x23 = (undefined **)param_1[8];
      (**(code **)(*unaff_x23 + 8))(unaff_x23,param_2,ppuVar17);
      *(undefined ***)(puVar7 + -0x90) = unaff_x23;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      puVar19 = param_1[8];
      param_3 = *(undefined ***)(puVar19 + 0x80);
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
      ppuVar16 = ppuVar17;
      FUN_109e1847c();
      ppuVar12 = param_2;
      param_2 = ppuVar16;
      goto code_r0x000109e18344;
    case 1:
      ppuVar12 = (undefined **)param_1[8];
      (**(code **)(*ppuVar12 + 8))();
      *(undefined ***)(puVar7 + -0x90) = ppuVar12;
      bVar4 = ppuVar12[4][4];
      unaff_x21 = ppuVar12;
      if (10 < bVar4) {
        param_3 = (undefined **)&UNK_10f6069ca;
        ppuVar12 = (undefined **)(puVar7 + -0xc0);
        param_2 = ppuVar17;
        FUN_109e9ed98();
        unaff_x21 = *(undefined ***)(puVar7 + -0x90);
      }
      puVar7[-0x99] = 10 < bVar4;
      unaff_x20 = (undefined **)(ulong)bVar4;
      ppuVar16 = param_2;
      break;
    case 2:
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2);
      *(long **)(puVar7 + -0x90) = plVar13;
      unaff_x23 = (undefined **)plVar13[4];
      bVar4 = *(byte *)((long)unaff_x23 + 4);
      if (10 < bVar4) {
        param_3 = (undefined **)&UNK_10f6069ca;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17);
        unaff_x23 = (undefined **)&UNK_10e05d730;
      }
      puVar7[-0x99] = 10 < bVar4;
      ppuVar16 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
      uVar15 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar15 * 4);
      puVar19 = *(undefined **)(puVar7 + -0x90);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      ppuVar12[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar12 + 5) = uVar2;
      ppuVar12[6] = puVar19;
      ppuVar12[7] = (undefined *)0x0;
      goto code_r0x000109e17248;
    case 3:
    case 4:
    case 5:
    case 6:
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      param_3 = (undefined **)(ulong)(*(int *)(param_1 + 7) == 5);
      unaff_x23 = (undefined **)(puVar7 + -0x90);
      FUN_109e1896c(unaff_x23,(ulong)(puVar7 + -0x90) | 8,param_3,ppuVar17,puVar7 + -0xc0);
      puVar7[-0x99] = *(char *)((long)unaff_x23 + 4) == '\x16';
      ppuVar16 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
      uVar15 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar15 * 4);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      ppuVar12[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar12 + 5) = uVar2;
      puVar19 = *(undefined **)(puVar7 + -0x90);
      ppuVar12[7] = *(undefined **)(puVar7 + -0x88);
      ppuVar12[6] = puVar19;
      goto code_r0x000109e15af8;
    case 7:
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      puVar19 = puVar7 + -0x90;
      func_0x000109e18b18(puVar19,(ulong)(puVar7 + -0x90) | 8,ppuVar17,puVar7 + -0xc0);
      goto code_r0x000109e16a84;
    case 8:
    case 9:
      if (((*(byte *)((long)ppuVar17 + 0x3bd) & 1) == 0) &&
         (ppuVar18 = ppuVar17, FUN_109e9ebe4(ppuVar17,0x82,300,puVar7 + -0xc0,&UNK_10f606b5d),
         ((ulong)ppuVar18 & 1) == 0)) {
        puVar7[-0x99] = 1;
      }
      ppuVar18 = (undefined **)param_1[8];
      (**(code **)(*ppuVar18 + 8))(ppuVar18,param_2,ppuVar17);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      puVar19 = ppuVar18[4];
      param_2 = (undefined **)plVar13[4];
      param_3 = (undefined **)(ulong)*(uint *)(param_1 + 7);
      func_0x000109e18c90();
      ppuVar16 = (undefined **)0x90;
      _malloc();
      ppuVar12 = ppuVar16;
      if (ppuVar16 != (undefined **)0x0) {
        ppuVar16[1] = (undefined *)0x0;
        *ppuVar16 = (undefined *)0x0;
        ppuVar16[3] = (undefined *)0x0;
        ppuVar16[2] = (undefined *)0x0;
        *ppuVar16 = (undefined *)(ppuVar17 + -6);
        puVar24 = ppuVar17[-5];
        ppuVar16[3] = puVar24;
        ppuVar16[4] = (undefined *)0x0;
        ppuVar17[-5] = (undefined *)ppuVar16;
        if (puVar24 != (undefined *)0x0) {
          *(undefined ***)(puVar24 + 0x10) = ppuVar16;
        }
        ppuVar12 = ppuVar16 + 6;
        ppuVar16[7] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
        ppuVar16[0x10] = (undefined *)0x0;
        ppuVar16[0xd] = (undefined *)0x0;
        ppuVar16[0xc] = (undefined *)0x0;
        ppuVar16[0xf] = (undefined *)0x0;
        ppuVar16[0xe] = (undefined *)0x0;
        ppuVar16[9] = (undefined *)0x0;
        ppuVar16[8] = (undefined *)0x0;
        ppuVar16[0xb] = (undefined *)0x0;
        ppuVar16[10] = (undefined *)0x0;
      }
      goto code_r0x000109e16110;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      ppuVar18 = (undefined **)param_1[8];
      (**(code **)(*ppuVar18 + 8))(ppuVar18,param_2,ppuVar17);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      uVar5 = *(uint *)(ppuVar18[4] + 4);
      uVar15 = (ulong)uVar5;
      if ((uVar5 & 0xff) < 0xb) {
        lVar21 = plVar13[4];
        if (((10 < *(byte *)(lVar21 + 4)) || ((uVar5 & 0xf0) != 0 || ppuVar18[4][0xd] != '\x01')) ||
           ((*(byte *)(lVar21 + 4) & 0xf0) != 0 || *(char *)(lVar21 + 0xd) != '\x01'))
        goto code_r0x000109e15ba4;
        func_0x000109e18df8(uVar15,(ulong)(puVar7 + -0x90) | 8);
        if ((uVar15 & 1) == 0) {
          iVar9 = *(int *)(lVar21 + 4);
          param_3 = ppuVar17;
          func_0x000109e18df8(iVar9,puVar7 + -0x90);
          if (iVar9 != 0) goto code_r0x000109e17c20;
          param_3 = (undefined **)&UNK_10f606cb4;
          goto code_r0x000109e15bac;
        }
code_r0x000109e17c20:
        if (*(char *)(*(long *)(*(long *)(puVar7 + -0x88) + 0x20) + 4) !=
            *(char *)(*(long *)(*(long *)(puVar7 + -0x90) + 0x20) + 4)) {
          param_3 = (undefined **)&UNK_10f606cf1;
          goto code_r0x000109e15bac;
        }
        puVar19 = &DAT_10e05d7a0;
      }
      else {
code_r0x000109e15ba4:
        param_3 = (undefined **)&UNK_10f606c78;
code_r0x000109e15bac:
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17);
        puVar19 = &UNK_10e05d730;
      }
      if (*(int *)(param_1 + 7) - 0xbU < 2) {
        auVar25 = NEON_ext(*(undefined1 (*) [16])(puVar7 + -0x90),
                           *(undefined1 (*) [16])(puVar7 + -0x90),8,1);
        *(long *)(puVar7 + -0x88) = auVar25._8_8_;
        *(long *)(puVar7 + -0x90) = auVar25._0_8_;
      }
code_r0x000109e16a84:
      param_2 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      ppuVar12[4] = puVar19;
      *(undefined4 *)(ppuVar12 + 5) = uVar2;
      puVar24 = *(undefined **)(puVar7 + -0x90);
      ppuVar12[7] = *(undefined **)(puVar7 + -0x88);
      ppuVar12[6] = puVar24;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(ppuVar12 + 10) = uVar22;
      *(undefined ***)(puVar7 + -0x98) = ppuVar12;
      bVar8 = puVar19[4] == '\x16';
code_r0x000109e178c0:
      puVar7[-0x99] = bVar8;
      goto LAB_109e18348;
    case 0xe:
    case 0xf:
      ppuVar18 = (undefined **)param_1[8];
      (**(code **)(*ppuVar18 + 8))(ppuVar18,param_2,ppuVar17);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      if ((ppuVar18[4] == &DAT_10e05d768) || ((undefined *)plVar13[4] == &DAT_10e05d768)) {
        puVar19 = &DAT_10f2f497c;
        if (*(int *)(param_1 + 7) != 0xe) {
          puVar19 = &DAT_10f416771;
        }
        *(undefined **)(puVar7 + -0x140) = puVar19;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f6046b3);
      }
      else {
        uVar15 = (ulong)*(uint *)(ppuVar18[4] + 4);
        func_0x000109e18df8(uVar15,(ulong)(puVar7 + -0x90) | 8,ppuVar17);
        if ((uVar15 & 1) == 0) {
          iVar9 = *(int *)(*(long *)(*(long *)(puVar7 + -0x88) + 0x20) + 4);
          func_0x000109e18df8(iVar9,puVar7 + -0x90,ppuVar17);
          if (iVar9 != 0) goto code_r0x000109e15ff8;
        }
        else {
code_r0x000109e15ff8:
          param_3 = *(undefined ***)(puVar7 + -0x90);
          ppuVar18 = (undefined **)param_3[4];
          if (ppuVar18 == *(undefined ***)(*(long *)(puVar7 + -0x88) + 0x20)) {
            if ((*(char *)((long)ppuVar18 + 4) == '\x13') ||
               (*(char *)((long)*(undefined ***)(*(long *)(puVar7 + -0x88) + 0x20) + 4) == '\x13'))
            {
              ppuVar12 = ppuVar17;
              FUN_109e9ebe4(ppuVar17,0x78,300,puVar7 + -0xc0,&UNK_10f60475a);
              if ((int)ppuVar12 == 0) goto code_r0x000109e163d4;
              param_3 = *(undefined ***)(puVar7 + -0x90);
              ppuVar18 = (undefined **)param_3[4];
            }
            ppuVar12 = ppuVar18;
            func_0x000109ec6720();
            if (((ulong)ppuVar12 & 1) == 0) {
              unaff_x23 = *(undefined ***)(puVar7 + -0x88);
              unaff_x24 = (undefined **)unaff_x23[4];
              ppuVar12 = unaff_x24;
              func_0x000109ec6720();
              if ((int)ppuVar12 == 0) {
                ppuVar12 = ppuVar18;
                func_0x000109ec6694();
                if ((((ulong)ppuVar12 & 1) == 0) &&
                   (ppuVar12 = unaff_x24, func_0x000109ec6694(), (int)ppuVar12 == 0)) {
                  ppuVar16 = (undefined **)
                             (ulong)*(uint *)(&UNK_10e060c6c + (ulong)*(uint *)(param_1 + 7) * 4);
                  ppuVar12 = ppuVar17;
                  FUN_109e190e8();
                  unaff_x21 = ppuVar12;
                  break;
                }
                FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f604797);
                goto code_r0x000109e163d4;
              }
            }
            FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f604776);
            goto code_r0x000109e163d4;
          }
        }
        puVar19 = &DAT_10f2f497c;
        if (*(int *)(param_1 + 7) != 0xe) {
          puVar19 = &DAT_10f416771;
        }
        *(undefined **)(puVar7 + -0x140) = puVar19;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f604731);
      }
code_r0x000109e163d4:
      puVar7[-0x99] = 1;
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      unaff_x21[1] = (undefined *)0x0;
      unaff_x21[2] = (undefined *)0x0;
      *(undefined4 *)(unaff_x21 + 3) = 3;
      unaff_x21[4] = &UNK_10e05d730;
      *unaff_x21 = (undefined *)&PTR_DAT_110b63f80;
      unaff_x21[0x15] = (undefined *)0x0;
      ppuVar12 = (undefined **)0xb;
      ppuVar16 = (undefined **)0x1;
      param_3 = (undefined **)0x1;
      func_0x000109ec6c94();
      unaff_x21[5] = (undefined *)0x0;
      unaff_x21[6] = (undefined *)0x0;
      unaff_x21[4] = (undefined *)ppuVar12;
      unaff_x23 = ppuVar12;
      goto code_r0x000109e18354;
    case 0x10:
    case 0x11:
    case 0x12:
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      param_3 = (undefined **)(ulong)*(uint *)(param_1 + 7);
      puVar19 = puVar7 + -0x90;
      FUN_109e19590(puVar19,(ulong)(puVar7 + -0x90) | 8,param_3,ppuVar17,puVar7 + -0xc0);
      param_2 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
code_r0x000109e16110:
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      puVar24 = *(undefined **)(puVar7 + -0x90);
      puVar1 = *(undefined **)(puVar7 + -0x88);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      ppuVar12[4] = puVar19;
      *(undefined4 *)(ppuVar12 + 5) = uVar2;
      ppuVar12[6] = puVar24;
      ppuVar12[7] = puVar1;
      bVar8 = true;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(ppuVar12 + 10) = uVar22;
      *(undefined ***)(puVar7 + -0x98) = ppuVar12;
      if (*(char *)(*(long *)(puVar24 + 0x20) + 4) != '\x16') {
        bVar8 = *(char *)(*(long *)(puVar1 + 0x20) + 4) == '\x16';
      }
      puVar7[-0x99] = bVar8;
      goto LAB_109e18348;
    case 0x13:
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2);
      *(long **)(puVar7 + -0x90) = plVar13;
      if ((*(byte *)((long)ppuVar17 + 0x3bd) & 1) == 0) {
        param_3 = (undefined **)0x12c;
        ppuVar12 = ppuVar17;
        FUN_109e9ebe4(ppuVar17,0x82,300,puVar7 + -0xc0,&UNK_10f606b5d);
        if (((ulong)ppuVar12 & 1) != 0) goto code_r0x000109e17160;
        bVar8 = true;
        puVar7[-0x99] = 1;
      }
      else {
code_r0x000109e17160:
        bVar8 = false;
      }
      uVar5 = *(uint *)((long)*(undefined ***)(*(long *)(puVar7 + -0x90) + 0x20) + 4);
      if ((uVar5 & 0xfe) == 0 || (uVar5 & 0xff) - 9 < 2) {
        unaff_x23 = (undefined **)&UNK_10e05d730;
        if (!bVar8) {
          unaff_x23 = *(undefined ***)(*(long *)(puVar7 + -0x90) + 0x20);
        }
      }
      else {
        param_3 = (undefined **)&UNK_10f6047b9;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17);
        puVar7[-0x99] = 1;
        unaff_x23 = (undefined **)&UNK_10e05d730;
      }
      ppuVar16 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
      puVar19 = *(undefined **)(puVar7 + -0x90);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      ppuVar12[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar12 + 5) = 0;
      ppuVar12[6] = puVar19;
      ppuVar12[7] = (undefined *)0x0;
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[9] = (undefined *)0x0;
      uVar22 = 1;
      goto code_r0x000109e1727c;
    case 0x14:
      unaff_x24 = (undefined **)(puVar7 + -0xe0);
      unaff_x23 = (undefined **)(puVar7 + -0xd0);
      *(undefined ***)(puVar7 + -0xe0) = unaff_x23;
      *(undefined8 *)(puVar7 + -0xd8) = 0;
      *(undefined8 *)(puVar7 + -0xd0) = 0;
      *(undefined ***)(puVar7 + -200) = unaff_x24;
      ppuVar12 = param_2;
      FUN_109e197bc(param_2,ppuVar17,param_1,0,&UNK_10f6047db,puVar7 + -0x99);
      *(undefined ***)(puVar7 + -0x90) = ppuVar12;
      puVar11 = puVar7 + -0xe0;
      FUN_109e197bc(puVar11,ppuVar17,param_1,1,&UNK_10f6047df,puVar7 + -0x99);
      *(undefined1 **)(puVar7 + -0x88) = puVar11;
      if (*(undefined ***)(puVar7 + -0xe0) == unaff_x23) {
        FUN_109f658b0(ppuVar17,0x58);
        if (unaff_x21 != (undefined **)0x0) {
          unaff_x21[10] = (undefined *)0x0;
          unaff_x21[7] = (undefined *)0x0;
          unaff_x21[6] = (undefined *)0x0;
          unaff_x21[9] = (undefined *)0x0;
          unaff_x21[8] = (undefined *)0x0;
          unaff_x21[3] = (undefined *)0x0;
          unaff_x21[2] = (undefined *)0x0;
          unaff_x21[5] = (undefined *)0x0;
          unaff_x21[4] = (undefined *)0x0;
          unaff_x21[1] = (undefined *)0x0;
          *unaff_x21 = (undefined *)0x0;
        }
        param_3 = *(undefined ***)(puVar7 + -0x90);
        ppuVar16 = (undefined **)0x94;
        ppuVar12 = unaff_x21;
        func_0x000109ea9448();
      }
      else {
        unaff_x20 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,&DAT_10e05d7a0,&UNK_10f6047e3,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar14 = (undefined8 *)param_2[3];
        ppuVar18 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar18 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar14;
        *puVar14 = ppuVar18;
        param_2[3] = (undefined *)ppuVar18;
        ppuVar18 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x68);
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar18[0xc] = (undefined *)0x0;
          ppuVar18[9] = (undefined *)0x0;
          ppuVar18[8] = (undefined *)0x0;
          ppuVar18[0xb] = (undefined *)0x0;
          ppuVar18[10] = (undefined *)0x0;
          ppuVar18[5] = (undefined *)0x0;
          ppuVar18[4] = (undefined *)0x0;
          ppuVar18[7] = (undefined *)0x0;
          ppuVar18[6] = (undefined *)0x0;
          ppuVar18[1] = (undefined *)0x0;
          *ppuVar18 = (undefined *)0x0;
          ppuVar18[3] = (undefined *)0x0;
          ppuVar18[2] = (undefined *)0x0;
        }
        puVar19 = *(undefined **)(puVar7 + -0x90);
        ppuVar18[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar18 + 3) = 0xc;
        *ppuVar18 = (undefined *)&PTR_FUN_110b639a8;
        ppuVar18[4] = puVar19;
        ppuVar16 = ppuVar18 + 7;
        *ppuVar16 = (undefined *)0x0;
        ppuVar18[5] = (undefined *)ppuVar16;
        ppuVar18[8] = (undefined *)(ppuVar18 + 5);
        unaff_x25 = ppuVar18 + 0xb;
        *unaff_x25 = (undefined *)0x0;
        ppuVar18[9] = (undefined *)unaff_x25;
        ppuVar18[6] = (undefined *)0x0;
        ppuVar18[10] = (undefined *)0x0;
        ppuVar18[0xc] = (undefined *)(ppuVar18 + 9);
        ppuVar12 = ppuVar18 + 1;
        *ppuVar12 = (undefined *)(param_2 + 2);
        puVar14 = (undefined8 *)param_2[3];
        ppuVar18[2] = (undefined *)puVar14;
        *puVar14 = ppuVar12;
        param_2[3] = (undefined *)ppuVar12;
        if (*(undefined ***)(puVar7 + -0xe0) != unaff_x23) {
          puVar14 = (undefined8 *)ppuVar18[8];
          *puVar14 = *(undefined ***)(puVar7 + -0xe0);
          *(undefined8 **)(*(long *)(puVar7 + -0xe0) + 8) = puVar14;
          puVar14 = *(undefined8 **)(puVar7 + -200);
          ppuVar18[8] = (undefined *)puVar14;
          *puVar14 = ppuVar16;
          *(undefined8 *)(puVar7 + -0xd8) = 0;
          *(undefined8 *)(puVar7 + -0xd0) = 0;
          *(undefined ***)(puVar7 + -0xe0) = unaff_x23;
          *(undefined1 **)(puVar7 + -200) = puVar7 + -0xe0;
        }
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x30);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        unaff_x26 = &PTR_DAT_110b64048;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x38);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[6] = (undefined *)0x0;
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        bVar8 = ppuVar12 != (undefined **)0x0;
        func_0x000109ea9180();
        ppuVar12[1] = (undefined *)ppuVar16;
        ppuVar16 = (undefined **)0x0;
        if (bVar8) {
          ppuVar16 = ppuVar12 + 1;
        }
        puVar14 = (undefined8 *)ppuVar18[8];
        ppuVar12[2] = (undefined *)puVar14;
        *puVar14 = ppuVar16;
        ppuVar18[8] = (undefined *)ppuVar16;
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x30);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        ppuVar16 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x38);
        if (ppuVar16 != (undefined **)0x0) {
          ppuVar16[6] = (undefined *)0x0;
          ppuVar16[3] = (undefined *)0x0;
          ppuVar16[2] = (undefined *)0x0;
          ppuVar16[5] = (undefined *)0x0;
          ppuVar16[4] = (undefined *)0x0;
          ppuVar16[1] = (undefined *)0x0;
          *ppuVar16 = (undefined *)0x0;
        }
        unaff_x24 = ppuVar17;
        FUN_109f658b0(ppuVar17,0xb0);
        if (unaff_x24 != (undefined **)0x0) {
          unaff_x24[0x13] = (undefined *)0x0;
          unaff_x24[0x12] = (undefined *)0x0;
          unaff_x24[0x15] = (undefined *)0x0;
          unaff_x24[0x14] = (undefined *)0x0;
          unaff_x24[0xf] = (undefined *)0x0;
          unaff_x24[0xe] = (undefined *)0x0;
          unaff_x24[0x11] = (undefined *)0x0;
          unaff_x24[0x10] = (undefined *)0x0;
          unaff_x24[0xb] = (undefined *)0x0;
          unaff_x24[10] = (undefined *)0x0;
          unaff_x24[0xd] = (undefined *)0x0;
          unaff_x24[0xc] = (undefined *)0x0;
          unaff_x24[7] = (undefined *)0x0;
          unaff_x24[6] = (undefined *)0x0;
          unaff_x24[9] = (undefined *)0x0;
          unaff_x24[8] = (undefined *)0x0;
          unaff_x24[3] = (undefined *)0x0;
          unaff_x24[2] = (undefined *)0x0;
          unaff_x24[5] = (undefined *)0x0;
          unaff_x24[4] = (undefined *)0x0;
          unaff_x24[1] = (undefined *)0x0;
          *unaff_x24 = (undefined *)0x0;
        }
        unaff_x27 = (undefined **)(ulong)(ppuVar16 == (undefined **)0x0);
        func_0x000109ea9b70(unaff_x24,0,1);
        param_3 = unaff_x24;
        func_0x000109ea9180(ppuVar16,ppuVar12);
        unaff_x23 = ppuVar16 + 1;
        *unaff_x23 = (undefined *)unaff_x25;
        ppuVar12 = (undefined **)0x0;
        if (ppuVar16 != (undefined **)0x0) {
          ppuVar12 = unaff_x23;
        }
        puVar14 = (undefined8 *)ppuVar18[0xc];
        ppuVar16[2] = (undefined *)puVar14;
        *puVar14 = ppuVar12;
        ppuVar18[0xc] = (undefined *)ppuVar12;
        ppuVar16 = (undefined **)0x30;
        ppuVar12 = ppuVar17;
        FUN_109f658b0();
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
code_r0x000109e181d4:
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        unaff_x21 = ppuVar12;
      }
      break;
    case 0x15:
      ppuVar18 = param_2;
      FUN_109e197bc(param_2,ppuVar17,param_1,0,&UNK_10f6047db,puVar7 + -0x99);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      param_3 = param_1;
      FUN_109e197bc(param_2,ppuVar17,param_1,1,&UNK_10f6047df,puVar7 + -0x99);
      *(undefined ***)(puVar7 + -0x88) = param_2;
      ppuVar16 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
      uVar15 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar15 * 4);
      puVar19 = *(undefined **)(puVar7 + -0x90);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23 = (undefined **)&DAT_10e05d7a0;
      ppuVar12[4] = &DAT_10e05d7a0;
      *(undefined4 *)(ppuVar12 + 5) = uVar2;
      ppuVar12[6] = puVar19;
      ppuVar12[7] = (undefined *)param_2;
      ppuVar18 = param_2;
code_r0x000109e17248:
      uVar15 = 1L << (uVar15 & 0x3f);
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[9] = (undefined *)0x0;
      uVar22 = 4;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
code_r0x000109e17264:
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
code_r0x000109e1727c:
      *(undefined1 *)(ppuVar12 + 10) = uVar22;
      unaff_x21 = ppuVar12;
      goto code_r0x000109e18354;
    case 0x16:
      unaff_x25 = (undefined **)(puVar7 + -0xd0);
      *(undefined ***)(puVar7 + -0xe0) = unaff_x25;
      *(undefined8 *)(puVar7 + -0xd8) = 0;
      *(undefined8 *)(puVar7 + -0xd0) = 0;
      *(undefined1 **)(puVar7 + -200) = puVar7 + -0xe0;
      ppuVar12 = param_2;
      FUN_109e197bc(param_2,ppuVar17,param_1,0,&UNK_10f6047db,puVar7 + -0x99);
      *(undefined ***)(puVar7 + -0x90) = ppuVar12;
      puVar11 = puVar7 + -0xe0;
      FUN_109e197bc(puVar11,ppuVar17,param_1,1,&UNK_10f6047df,puVar7 + -0x99);
      *(undefined1 **)(puVar7 + -0x88) = puVar11;
      if (*(undefined ***)(puVar7 + -0xe0) != unaff_x25) {
        unaff_x20 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,&DAT_10e05d7a0,&UNK_10f6047eb,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar14 = (undefined8 *)param_2[3];
        ppuVar18 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar18 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar14;
        *puVar14 = ppuVar18;
        param_2[3] = (undefined *)ppuVar18;
        ppuVar18 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x68);
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar18[0xc] = (undefined *)0x0;
          ppuVar18[9] = (undefined *)0x0;
          ppuVar18[8] = (undefined *)0x0;
          ppuVar18[0xb] = (undefined *)0x0;
          ppuVar18[10] = (undefined *)0x0;
          ppuVar18[5] = (undefined *)0x0;
          ppuVar18[4] = (undefined *)0x0;
          ppuVar18[7] = (undefined *)0x0;
          ppuVar18[6] = (undefined *)0x0;
          ppuVar18[1] = (undefined *)0x0;
          *ppuVar18 = (undefined *)0x0;
          ppuVar18[3] = (undefined *)0x0;
          ppuVar18[2] = (undefined *)0x0;
        }
        puVar19 = *(undefined **)(puVar7 + -0x90);
        ppuVar18[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar18 + 3) = 0xc;
        *ppuVar18 = (undefined *)&PTR_FUN_110b639a8;
        unaff_x28 = ppuVar18 + 7;
        *unaff_x28 = (undefined *)0x0;
        ppuVar18[5] = (undefined *)unaff_x28;
        ppuVar18[4] = puVar19;
        ppuVar18[6] = (undefined *)0x0;
        ppuVar18[8] = (undefined *)(ppuVar18 + 5);
        unaff_x27 = ppuVar18 + 0xb;
        *unaff_x27 = (undefined *)0x0;
        ppuVar18[9] = (undefined *)unaff_x27;
        ppuVar18[10] = (undefined *)0x0;
        ppuVar18[0xc] = (undefined *)(ppuVar18 + 9);
        ppuVar12 = ppuVar18 + 1;
        *ppuVar12 = (undefined *)(param_2 + 2);
        puVar14 = (undefined8 *)param_2[3];
        ppuVar18[2] = (undefined *)puVar14;
        *puVar14 = ppuVar12;
        param_2[3] = (undefined *)ppuVar12;
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x30);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        ppuVar16 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x38);
        if (ppuVar16 != (undefined **)0x0) {
          ppuVar16[6] = (undefined *)0x0;
          ppuVar16[3] = (undefined *)0x0;
          ppuVar16[2] = (undefined *)0x0;
          ppuVar16[5] = (undefined *)0x0;
          ppuVar16[4] = (undefined *)0x0;
          ppuVar16[1] = (undefined *)0x0;
          *ppuVar16 = (undefined *)0x0;
        }
        unaff_x24 = ppuVar17;
        FUN_109f658b0(ppuVar17,0xb0);
        if (unaff_x24 != (undefined **)0x0) {
          unaff_x24[0x13] = (undefined *)0x0;
          unaff_x24[0x12] = (undefined *)0x0;
          unaff_x24[0x15] = (undefined *)0x0;
          unaff_x24[0x14] = (undefined *)0x0;
          unaff_x24[0xf] = (undefined *)0x0;
          unaff_x24[0xe] = (undefined *)0x0;
          unaff_x24[0x11] = (undefined *)0x0;
          unaff_x24[0x10] = (undefined *)0x0;
          unaff_x24[0xb] = (undefined *)0x0;
          unaff_x24[10] = (undefined *)0x0;
          unaff_x24[0xd] = (undefined *)0x0;
          unaff_x24[0xc] = (undefined *)0x0;
          unaff_x24[7] = (undefined *)0x0;
          unaff_x24[6] = (undefined *)0x0;
          unaff_x24[9] = (undefined *)0x0;
          unaff_x24[8] = (undefined *)0x0;
          unaff_x24[3] = (undefined *)0x0;
          unaff_x24[2] = (undefined *)0x0;
          unaff_x24[5] = (undefined *)0x0;
          unaff_x24[4] = (undefined *)0x0;
          unaff_x24[1] = (undefined *)0x0;
          *unaff_x24 = (undefined *)0x0;
        }
        unaff_x26 = (undefined **)(ulong)(ppuVar16 == (undefined **)0x0);
        func_0x000109ea9b70(unaff_x24,1,1);
        func_0x000109ea9180(ppuVar16,ppuVar12,unaff_x24);
        ppuVar16[1] = (undefined *)unaff_x28;
        ppuVar12 = (undefined **)0x0;
        if (ppuVar16 != (undefined **)0x0) {
          ppuVar12 = ppuVar16 + 1;
        }
        puVar14 = (undefined8 *)ppuVar18[8];
        ppuVar16[2] = (undefined *)puVar14;
        *puVar14 = ppuVar12;
        ppuVar18[8] = (undefined *)ppuVar12;
        if (*(undefined ***)(puVar7 + -0xe0) != unaff_x25) {
          puVar14 = (undefined8 *)ppuVar18[0xc];
          *puVar14 = *(undefined ***)(puVar7 + -0xe0);
          *(undefined8 **)(*(long *)(puVar7 + -0xe0) + 8) = puVar14;
          puVar14 = *(undefined8 **)(puVar7 + -200);
          ppuVar18[0xc] = (undefined *)puVar14;
          *puVar14 = unaff_x27;
          *(undefined8 *)(puVar7 + -0xd8) = 0;
          *(undefined8 *)(puVar7 + -0xd0) = 0;
          *(undefined ***)(puVar7 + -0xe0) = unaff_x25;
          *(undefined1 **)(puVar7 + -200) = puVar7 + -0xe0;
        }
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x30);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x38);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[6] = (undefined *)0x0;
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        bVar8 = ppuVar12 == (undefined **)0x0;
        unaff_x23 = (undefined **)(ulong)bVar8;
        param_3 = *(undefined ***)(puVar7 + -0x88);
        func_0x000109ea9180();
        ppuVar12[1] = (undefined *)unaff_x27;
        ppuVar16 = (undefined **)0x0;
        if (!bVar8) {
          ppuVar16 = ppuVar12 + 1;
        }
        puVar14 = (undefined8 *)ppuVar18[0xc];
        ppuVar12[2] = (undefined *)puVar14;
        *puVar14 = ppuVar16;
        ppuVar18[0xc] = (undefined *)ppuVar16;
        ppuVar16 = (undefined **)0x30;
        ppuVar12 = ppuVar17;
        FUN_109f658b0();
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        goto code_r0x000109e181d4;
      }
      FUN_109f658b0(ppuVar17,0x58);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      param_3 = *(undefined ***)(puVar7 + -0x90);
      ppuVar16 = (undefined **)0x96;
      ppuVar12 = unaff_x21;
      func_0x000109ea9448();
      break;
    case 0x17:
      param_3 = param_1;
      FUN_109e197bc(param_2,ppuVar17,param_1,0,&DAT_10f3dd801,puVar7 + -0x99);
      *(undefined ***)(puVar7 + -0x90) = param_2;
      ppuVar16 = (undefined **)0x58;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[10] = (undefined *)0x0;
        ppuVar12[7] = (undefined *)0x0;
        ppuVar12[6] = (undefined *)0x0;
        ppuVar12[9] = (undefined *)0x0;
        ppuVar12[8] = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        ppuVar12[5] = (undefined *)0x0;
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
      }
      uVar15 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar15 * 4);
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 4;
      *ppuVar12 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23 = (undefined **)&DAT_10e05d7a0;
      ppuVar12[4] = &DAT_10e05d7a0;
      *(undefined4 *)(ppuVar12 + 5) = uVar2;
      ppuVar12[6] = (undefined *)param_2;
      ppuVar12[7] = (undefined *)0x0;
      ppuVar18 = param_2;
code_r0x000109e15af8:
      uVar15 = 1L << (uVar15 & 0x3f);
      ppuVar12[8] = (undefined *)0x0;
      ppuVar12[9] = (undefined *)0x0;
      uVar22 = 4;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      goto code_r0x000109e17264;
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1c:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar10 = (long *)param_1[9];
      (**(code **)(*plVar10 + 8))(plVar10,param_2);
      *(long **)(puVar7 + -0x88) = plVar10;
      unaff_x24 = (undefined **)plVar13[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar10[4] == &UNK_10e05d730)
         ) {
code_r0x000109e16be4:
        unaff_x25 = (undefined **)0x1;
        puVar7[-0x99] = 1;
code_r0x000109e16be8:
        ppuVar16 = (undefined **)0x28;
        ppuVar12 = ppuVar17;
        FUN_109f658b0();
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 0x16;
        *ppuVar12 = (undefined *)&PTR_DAT_110b63eb8;
        goto code_r0x000109e16c20;
      }
      unaff_x25 = (undefined **)(puVar7 + -0x90);
      FUN_109e1896c(unaff_x25,(ulong)(puVar7 + -0x90) | 8,*(int *)(param_1 + 7) == 0x18,ppuVar17,
                    puVar7 + -0xc0);
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)(puVar7 + -0x140) = unaff_x25;
        *(undefined ***)(puVar7 + -0x138) = unaff_x24;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar17;
      FUN_109f658b0(ppuVar17,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar13 = *(long **)(puVar7 + -0x90);
      unaff_x23[7] = *(undefined **)(puVar7 + -0x88);
      unaff_x23[6] = (undefined *)plVar13;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar22;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar13 + 0x20))(plVar13,ppuVar17,0);
      puVar19 = param_1[8];
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
      ppuVar16 = ppuVar17;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar12 = param_2;
      param_2 = ppuVar16;
      goto code_r0x000109e18344;
    case 0x1a:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar10 = (long *)param_1[9];
      (**(code **)(*plVar10 + 8))(plVar10,param_2);
      *(long **)(puVar7 + -0x88) = plVar10;
      unaff_x24 = (undefined **)plVar13[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar10[4] == &UNK_10e05d730)
         ) goto code_r0x000109e16be4;
      unaff_x25 = (undefined **)(puVar7 + -0x90);
      func_0x000109e18b18(unaff_x25,(ulong)(puVar7 + -0x90) | 8,ppuVar17,puVar7 + -0xc0);
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)(puVar7 + -0x140) = unaff_x25;
        *(undefined ***)(puVar7 + -0x138) = unaff_x24;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar17;
      FUN_109f658b0(ppuVar17,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar13 = *(long **)(puVar7 + -0x90);
      unaff_x23[7] = *(undefined **)(puVar7 + -0x88);
      unaff_x23[6] = (undefined *)plVar13;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar22;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar13 + 0x20))(plVar13,ppuVar17,0);
      puVar19 = param_1[8];
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
      ppuVar16 = ppuVar17;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar12 = param_2;
      param_2 = ppuVar16;
      goto code_r0x000109e18344;
    case 0x1d:
    case 0x1e:
      unaff_x24 = (undefined **)0x1;
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar10 = (long *)param_1[9];
      (**(code **)(*plVar10 + 8))(plVar10,param_2);
      *(long **)(puVar7 + -0x88) = plVar10;
      puVar19 = (undefined *)plVar13[4];
      if ((puVar19 == &UNK_10e05d730) || ((undefined *)plVar10[4] == &UNK_10e05d730)) {
        puVar7[-0x99] = 1;
        goto code_r0x000109e16be8;
      }
      func_0x000109e18c90(puVar19,(undefined *)plVar10[4],*(undefined4 *)(param_1 + 7),ppuVar17,
                          puVar7 + -0xc0);
      unaff_x23 = ppuVar17;
      FUN_109f658b0(ppuVar17,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = puVar19;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar13 = *(long **)(puVar7 + -0x90);
      unaff_x23[7] = *(undefined **)(puVar7 + -0x88);
      unaff_x23[6] = (undefined *)plVar13;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar22;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar13 + 0x20))(plVar13,ppuVar17,0);
      puVar19 = param_1[8];
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
      ppuVar16 = ppuVar17;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar12 = param_2;
      param_2 = ppuVar16;
      goto code_r0x000109e18344;
    case 0x1f:
    case 0x20:
    case 0x21:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      plVar10 = (long *)param_1[9];
      (**(code **)(*plVar10 + 8))(plVar10,param_2);
      *(long **)(puVar7 + -0x88) = plVar10;
      unaff_x24 = (undefined **)plVar13[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar10[4] == &UNK_10e05d730)
         ) goto code_r0x000109e16be4;
      unaff_x25 = (undefined **)(puVar7 + -0x90);
      FUN_109e19590(unaff_x25,(ulong)(puVar7 + -0x90) | 8,*(undefined4 *)(param_1 + 7),ppuVar17,
                    puVar7 + -0xc0);
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)(puVar7 + -0x140) = unaff_x25;
        *(undefined ***)(puVar7 + -0x138) = unaff_x24;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar17;
      FUN_109f658b0(ppuVar17,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar13 = *(long **)(puVar7 + -0x90);
      unaff_x23[7] = *(undefined **)(puVar7 + -0x88);
      unaff_x23[6] = (undefined *)plVar13;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar22;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar13 + 0x20))(plVar13,ppuVar17,0);
      puVar19 = param_1[8];
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
      ppuVar16 = ppuVar17;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar12 = param_2;
      param_2 = ppuVar16;
      goto code_r0x000109e18344;
    case 0x22:
      ppuVar18 = param_2;
      FUN_109e197bc(param_2,ppuVar17,param_1,0,&DAT_10f3507c8,puVar7 + -0x99);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      unaff_x25 = (undefined **)(puVar7 + -0xd0);
      *(undefined ***)(puVar7 + -0xe0) = unaff_x25;
      *(undefined8 *)(puVar7 + -0xd8) = 0;
      *(undefined8 *)(puVar7 + -0xd0) = 0;
      *(undefined1 **)(puVar7 + -200) = puVar7 + -0xe0;
      *(undefined1 **)(puVar7 + -0x128) = puVar7 + -0xf0;
      *(undefined1 **)(puVar7 + -0x100) = puVar7 + -0xf0;
      *(undefined8 *)(puVar7 + -0xf8) = 0;
      *(undefined8 *)(puVar7 + -0xf0) = 0;
      *(undefined1 **)(puVar7 + -0xe8) = puVar7 + -0x100;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,puVar7 + -0xe0,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      plVar13 = (long *)param_1[10];
      (**(code **)(*plVar13 + 8))(plVar13,puVar7 + -0x100,ppuVar17);
      *(long **)(puVar7 + -0x80) = plVar13;
      uVar15 = (ulong)*(uint *)(*(long *)(*(long *)((ulong)(puVar7 + -0x90) | 8) + 0x20) + 4);
      func_0x000109e18df8(uVar15,puVar7 + -0x80,ppuVar17);
      if ((uVar15 & 1) == 0) {
        iVar9 = *(int *)(*(long *)(*(long *)(puVar7 + -0x80) + 0x20) + 4);
        func_0x000109e18df8(iVar9,(long *)((ulong)(puVar7 + -0x90) | 8),ppuVar17);
        if (iVar9 != 0) goto code_r0x000109e17478;
code_r0x000109e1748c:
        puVar19 = param_1[9];
        *(undefined8 *)(puVar7 + -0x108) = *(undefined8 *)(puVar19 + 8);
        *(undefined4 *)(puVar7 + -0x110) = *(undefined4 *)(puVar19 + 0x10);
        uVar6 = *(undefined8 *)(puVar19 + 0x14);
        *(undefined8 *)(puVar7 + -0x118) = *(undefined8 *)(puVar19 + 0x1c);
        *(undefined8 *)(puVar7 + -0x120) = uVar6;
        FUN_109e9ed98(puVar7 + -0x120,ppuVar17,&UNK_10f604818);
        puVar7[-0x99] = 1;
        ppuVar18 = (undefined **)&UNK_10e05d730;
      }
      else {
code_r0x000109e17478:
        ppuVar18 = *(undefined ***)(*(long *)(puVar7 + -0x88) + 0x20);
        if (ppuVar18 != *(undefined ***)(*(long *)(puVar7 + -0x80) + 0x20))
        goto code_r0x000109e1748c;
      }
      if ((*(char *)((long)ppuVar18 + 4) == '\x13') &&
         (ppuVar12 = ppuVar17, FUN_109e9ebe4(ppuVar17,0x78,300,puVar7 + -0xc0,&UNK_10f60485a),
         ((ulong)ppuVar12 & 1) == 0)) {
        puVar7[-0x99] = 1;
      }
      ppuVar12 = ppuVar18;
      func_0x000109ec6694();
      if (((int)ppuVar12 != 0) &&
         ((*(char *)((long)ppuVar17 + 0x2f7) != '\x01' ||
          ((*(byte *)((long)ppuVar18 + 4) | 2) != 0xf)))) {
        if ((*(byte *)((long)ppuVar18 + 0xc) >> 1 & 1) == 0) {
          ppuVar12 = ppuVar18;
          FUN_109eca058();
        }
        else {
          ppuVar12 = (undefined **)(&UNK_10e05bf38 + (long)ppuVar18[3]);
        }
        *(undefined ***)(puVar7 + -0x140) = ppuVar12;
        FUN_109e9ed98(puVar7 + -0xc0,ppuVar17,&UNK_10f604894);
        puVar7[-0x99] = 1;
      }
      ppuVar12 = *(undefined ***)(puVar7 + -0x90);
      param_3 = (undefined **)0x0;
      ppuVar16 = ppuVar17;
      (**(code **)(*ppuVar12 + 0x30))();
      if (((*(undefined ***)(puVar7 + -0xe0) != unaff_x25) ||
          (*(long *)(puVar7 + -0x100) != *(long *)(puVar7 + -0x128))) ||
         (ppuVar12 == (undefined **)0x0)) {
        if (*(char *)((long)ppuVar18 + 4) == '\x13') {
          lVar21 = *(long *)(puVar7 + -0x88);
          if (((lVar21 != 0) && (*(int *)(lVar21 + 0x18) == 2)) && (*(long *)(lVar21 + 0x28) != 0))
          {
            *(int *)(*(long *)(lVar21 + 0x28) + 0x60) =
                 *(int *)(*(long *)(lVar21 + 0x20) + 0x10) + -1;
          }
          lVar21 = *(long *)(puVar7 + -0x80);
          if (((lVar21 != 0) && (*(int *)(lVar21 + 0x18) == 2)) && (*(long *)(lVar21 + 0x28) != 0))
          {
            *(int *)(*(long *)(lVar21 + 0x28) + 0x60) =
                 *(int *)(*(long *)(lVar21 + 0x20) + 0x10) + -1;
          }
        }
        unaff_x20 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,ppuVar18,&UNK_10f6048cf,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar14 = (undefined8 *)param_2[3];
        ppuVar18 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar18 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar14;
        *puVar14 = ppuVar18;
        param_2[3] = (undefined *)ppuVar18;
        ppuVar18 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x68);
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar18[0xc] = (undefined *)0x0;
          ppuVar18[9] = (undefined *)0x0;
          ppuVar18[8] = (undefined *)0x0;
          ppuVar18[0xb] = (undefined *)0x0;
          ppuVar18[10] = (undefined *)0x0;
          ppuVar18[5] = (undefined *)0x0;
          ppuVar18[4] = (undefined *)0x0;
          ppuVar18[7] = (undefined *)0x0;
          ppuVar18[6] = (undefined *)0x0;
          ppuVar18[1] = (undefined *)0x0;
          *ppuVar18 = (undefined *)0x0;
          ppuVar18[3] = (undefined *)0x0;
          ppuVar18[2] = (undefined *)0x0;
        }
        puVar19 = *(undefined **)(puVar7 + -0x90);
        ppuVar18[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar18 + 3) = 0xc;
        *ppuVar18 = (undefined *)&PTR_FUN_110b639a8;
        ppuVar18[4] = puVar19;
        unaff_x26 = ppuVar18 + 7;
        *unaff_x26 = (undefined *)0x0;
        ppuVar12 = ppuVar18 + 5;
        ppuVar16 = ppuVar18 + 6;
        *ppuVar16 = (undefined *)0x0;
        ppuVar18[8] = (undefined *)ppuVar12;
        unaff_x27 = ppuVar18 + 0xb;
        *unaff_x27 = (undefined *)0x0;
        unaff_x28 = ppuVar18 + 9;
        *unaff_x28 = (undefined *)unaff_x27;
        unaff_x24 = ppuVar18 + 10;
        *unaff_x24 = (undefined *)0x0;
        ppuVar18[0xc] = (undefined *)unaff_x28;
        ppuVar23 = ppuVar18 + 1;
        *ppuVar23 = (undefined *)(param_2 + 2);
        puVar14 = (undefined8 *)param_2[3];
        ppuVar18[2] = (undefined *)puVar14;
        *puVar14 = ppuVar23;
        param_2[3] = (undefined *)ppuVar23;
        ppuVar23 = *(undefined ***)(puVar7 + -0xe0);
        if (ppuVar23 == unaff_x25) {
          ppuVar18[5] = (undefined *)unaff_x26;
          *ppuVar16 = (undefined *)0x0;
          ppuVar18[7] = (undefined *)0x0;
          ppuVar18[8] = (undefined *)ppuVar12;
        }
        else {
          ppuVar18[5] = (undefined *)ppuVar23;
          *ppuVar16 = (undefined *)0x0;
          ppuVar18[7] = (undefined *)0x0;
          ppuVar18[8] = *(undefined **)(puVar7 + -200);
          ppuVar23[1] = (undefined *)ppuVar12;
          *(undefined ***)ppuVar18[8] = unaff_x26;
          *(undefined8 *)(puVar7 + -0xd8) = 0;
          *(undefined8 *)(puVar7 + -0xd0) = 0;
          *(undefined ***)(puVar7 + -0xe0) = unaff_x25;
          *(undefined1 **)(puVar7 + -200) = puVar7 + -0xe0;
        }
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x30);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        unaff_x25 = &PTR_DAT_110b64048;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x38);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[6] = (undefined *)0x0;
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        bVar8 = ppuVar12 != (undefined **)0x0;
        func_0x000109ea9180();
        ppuVar12[1] = (undefined *)unaff_x26;
        ppuVar16 = (undefined **)0x0;
        if (bVar8) {
          ppuVar16 = ppuVar12 + 1;
        }
        puVar14 = (undefined8 *)ppuVar18[8];
        ppuVar12[2] = (undefined *)puVar14;
        *puVar14 = ppuVar16;
        ppuVar18[8] = (undefined *)ppuVar16;
        puVar19 = *(undefined **)(puVar7 + -0x100);
        puVar24 = *(undefined **)(puVar7 + -0x128);
        if (puVar19 == puVar24) {
          ppuVar18[9] = (undefined *)unaff_x27;
          *unaff_x24 = (undefined *)0x0;
          ppuVar18[0xb] = (undefined *)0x0;
          ppuVar18[0xc] = (undefined *)unaff_x28;
        }
        else {
          ppuVar18[9] = puVar19;
          *unaff_x24 = (undefined *)0x0;
          ppuVar18[0xb] = (undefined *)0x0;
          ppuVar18[0xc] = *(undefined **)(puVar7 + -0xe8);
          *(undefined ***)(puVar19 + 8) = unaff_x28;
          *(undefined ***)ppuVar18[0xc] = unaff_x27;
          *(undefined8 *)(puVar7 + -0xf8) = 0;
          *(undefined8 *)(puVar7 + -0xf0) = 0;
          *(undefined **)(puVar7 + -0x100) = puVar24;
          *(undefined1 **)(puVar7 + -0xe8) = puVar7 + -0x100;
        }
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x30);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)unaff_x20;
        ppuVar12[4] = unaff_x20[4];
        ppuVar12 = ppuVar17;
        FUN_109f658b0(ppuVar17,0x38);
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[6] = (undefined *)0x0;
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        bVar8 = ppuVar12 == (undefined **)0x0;
        unaff_x23 = (undefined **)(ulong)bVar8;
        param_3 = *(undefined ***)(puVar7 + -0x80);
        func_0x000109ea9180();
        ppuVar12[1] = (undefined *)unaff_x27;
        ppuVar16 = (undefined **)0x0;
        if (!bVar8) {
          ppuVar16 = ppuVar12 + 1;
        }
        puVar14 = (undefined8 *)ppuVar18[0xc];
        ppuVar12[2] = (undefined *)puVar14;
        *puVar14 = ppuVar16;
        ppuVar18[0xc] = (undefined *)ppuVar16;
        ppuVar16 = (undefined **)0x30;
        ppuVar12 = ppuVar17;
        FUN_109f658b0();
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        goto code_r0x000109e181d4;
      }
      lVar21 = 8;
      if (*(char *)(ppuVar12 + 5) == '\0') {
        lVar21 = 0x10;
      }
      unaff_x21 = *(undefined ***)(puVar7 + lVar21 + -0x90);
      break;
    case 0x23:
    case 0x24:
      puVar19 = &UNK_10f6048df;
      if (iVar9 != 0x23) {
        puVar19 = &UNK_10f6048f7;
      }
      param_1[0x10] = puVar19;
      plVar13 = (long *)param_1[8];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x90) = plVar13;
      ppuVar12 = ppuVar17;
      FUN_109e19918(ppuVar17,*(undefined4 *)(plVar13[4] + 4));
      *(undefined ***)(puVar7 + -0x88) = ppuVar12;
      puVar19 = puVar7 + -0x90;
      FUN_109e1896c(puVar19,(ulong)(puVar7 + -0x90) | 8,0,ppuVar17,puVar7 + -0xc0);
      unaff_x23 = ppuVar17;
      FUN_109f658b0(ppuVar17,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar22 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = puVar19;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar13 = *(long **)(puVar7 + -0x90);
      unaff_x23[7] = *(undefined **)(puVar7 + -0x88);
      unaff_x23[6] = (undefined *)plVar13;
      uVar15 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar15 & 0x7bff77fff8) != 0) {
        uVar22 = 2;
      }
      if ((uVar15 & 0x3fff8400880007) != 0) {
        uVar22 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar22;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar13 + 0x20))(plVar13,ppuVar17,0);
      puVar19 = param_1[8];
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
      ppuVar16 = ppuVar17;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar12 = param_2;
      param_2 = ppuVar16;
code_r0x000109e18344:
      puVar7[-0x99] = (char)ppuVar12;
LAB_109e18348:
      unaff_x21 = *(undefined ***)(puVar7 + -0x98);
      unaff_x20 = param_1;
      ppuVar16 = param_2;
      break;
    case 0x25:
    case 0x26:
      puVar19 = &UNK_10f60490f;
      if (iVar9 != 0x25) {
        puVar19 = &UNK_10f604928;
      }
      param_1[0x10] = puVar19;
      ppuVar18 = (undefined **)param_1[8];
      (**(code **)(*ppuVar18 + 8))(ppuVar18,param_2);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      ppuVar12 = ppuVar17;
      FUN_109e19918(ppuVar17,*(undefined4 *)(ppuVar18[4] + 4));
      *(undefined ***)(puVar7 + -0x88) = ppuVar12;
      if (ppuVar18[4][4] == '\x16') {
        puVar7[-0x99] = 1;
      }
      else {
        cVar3 = ppuVar12[4][4];
        puVar7[-0x99] = cVar3 == '\x16';
        if (cVar3 != '\x16') {
          puVar19 = puVar7 + -0x90;
          FUN_109e1896c(puVar19,(ulong)(puVar7 + -0x90) | 8,0,ppuVar17,puVar7 + -0xc0);
          ppuVar18 = ppuVar17;
          FUN_109f658b0(ppuVar17,0x58);
          if (ppuVar18 != (undefined **)0x0) {
            ppuVar18[10] = (undefined *)0x0;
            ppuVar18[7] = (undefined *)0x0;
            ppuVar18[6] = (undefined *)0x0;
            ppuVar18[9] = (undefined *)0x0;
            ppuVar18[8] = (undefined *)0x0;
            ppuVar18[3] = (undefined *)0x0;
            ppuVar18[2] = (undefined *)0x0;
            ppuVar18[5] = (undefined *)0x0;
            ppuVar18[4] = (undefined *)0x0;
            ppuVar18[1] = (undefined *)0x0;
            *ppuVar18 = (undefined *)0x0;
          }
          uVar5 = *(uint *)(param_1 + 7);
          uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
          ppuVar18[1] = (undefined *)0x0;
          ppuVar18[2] = (undefined *)0x0;
          uVar22 = 4;
          *(undefined4 *)(ppuVar18 + 3) = 4;
          *ppuVar18 = (undefined *)&PTR_FUN_110b64370;
          ppuVar18[4] = puVar19;
          *(undefined4 *)(ppuVar18 + 5) = uVar2;
          unaff_x23 = *(undefined ***)(puVar7 + -0x90);
          ppuVar18[7] = *(undefined **)(puVar7 + -0x88);
          ppuVar18[6] = (undefined *)unaff_x23;
          uVar15 = 1L << ((ulong)uVar5 & 0x3f);
          ppuVar18[8] = (undefined *)0x0;
          ppuVar18[9] = (undefined *)0x0;
          if ((uVar15 & 0x7bff77fff8) != 0) {
            uVar22 = 2;
          }
          if ((uVar15 & 0x3fff8400880007) != 0) {
            uVar22 = 1;
          }
          *(undefined1 *)(ppuVar18 + 10) = uVar22;
          ppuVar12 = unaff_x23;
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23,ppuVar17,0);
          ppuVar16 = param_2;
          FUN_109e199d0(param_2,ppuVar12);
          *(undefined ***)(puVar7 + -0x98) = ppuVar16;
          unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23,ppuVar17,0);
          puVar19 = param_1[8];
          *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
          *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
          uVar6 = *(undefined8 *)(puVar19 + 0x14);
          *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
          *(undefined8 *)(puVar7 + -0xe0) = uVar6;
          *(undefined1 **)(puVar7 + -0x140) = puVar7 + -0xe0;
          ppuVar16 = ppuVar17;
          param_3 = unaff_x24;
          FUN_109e1847c();
          ppuVar12 = param_2;
          param_2 = ppuVar16;
          goto code_r0x000109e18344;
        }
      }
      ppuVar16 = (undefined **)0x28;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
      }
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 0x16;
      *ppuVar12 = (undefined *)&PTR_DAT_110b63eb8;
code_r0x000109e16c20:
      ppuVar12[4] = &UNK_10e05d730;
      unaff_x21 = ppuVar12;
      unaff_x23 = (undefined **)&UNK_10e05d730;
      goto code_r0x000109e18354;
    case 0x27:
      func_0x000109ea8ce4();
      ppuVar16 = param_2;
      unaff_x21 = ppuVar12;
      break;
    case 0x28:
      plVar13 = (long *)param_1[8];
      puVar19 = param_1[9];
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar19 + 8);
      *(undefined4 *)(puVar7 + -0xd0) = *(undefined4 *)(puVar19 + 0x10);
      uVar6 = *(undefined8 *)(puVar19 + 0x14);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar19 + 0x1c);
      *(undefined8 *)(puVar7 + -0xe0) = uVar6;
      (**(code **)(*plVar13 + 0x18))(plVar13,1);
      ppuVar18 = (undefined **)param_1[8];
      (**(code **)(*ppuVar18 + 8))(ppuVar18,param_2,ppuVar17);
      *(undefined ***)(puVar7 + -0x90) = ppuVar18;
      plVar13 = (long *)param_1[9];
      (**(code **)(*plVar13 + 8))(plVar13,param_2,ppuVar17);
      *(long **)(puVar7 + -0x88) = plVar13;
      ppuVar12 = ppuVar17;
      param_2 = ppuVar17;
      param_3 = ppuVar18;
      FUN_109e0ef68();
      *(undefined ***)(puVar7 + -0x98) = ppuVar12;
      if (ppuVar12[4][4] == '\x16') goto code_r0x000109e178bc;
    default:
      goto LAB_109e18348;
    case 0x2b:
      puVar14 = *(undefined8 **)(ppuVar17[9] + 8);
      FUN_109f61800(puVar14,param_1[0xb]);
      if ((puVar14 != (undefined8 *)0x0) &&
         (ppuVar18 = (undefined **)*puVar14, ppuVar18 != (undefined **)0x0)) {
code_r0x000109e175a0:
        *(uint *)(ppuVar18 + 8) = *(uint *)(ppuVar18 + 8) | 0x80;
        param_2 = (undefined **)0x30;
        ppuVar12 = ppuVar17;
        FUN_109f658b0();
        if (ppuVar12 != (undefined **)0x0) {
          ppuVar12[3] = (undefined *)0x0;
          ppuVar12[2] = (undefined *)0x0;
          ppuVar12[5] = (undefined *)0x0;
          ppuVar12[4] = (undefined *)0x0;
          ppuVar12[1] = (undefined *)0x0;
          *ppuVar12 = (undefined *)0x0;
        }
        ppuVar12[1] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 3) = 2;
        *ppuVar12 = (undefined *)&PTR_DAT_110b64048;
        ppuVar12[5] = (undefined *)ppuVar18;
        ppuVar12[4] = ppuVar18[4];
        *(undefined ***)(puVar7 + -0x98) = ppuVar12;
        uVar5 = *(uint *)(ppuVar18 + 8) >> 0xb & 0xf;
        if ((((uVar5 == 5 || uVar5 == 0) && (((ulong)param_1[0x11] & 1) == 0)) &&
            (func_0x000109eadd3c(), (*(byte *)((long)ppuVar12 + 0x41) & 1) == 0)) &&
           (((pcVar20 = ppuVar18[5], pcVar20 == (char *)0x0 || (*pcVar20 != 'g')) ||
            ((pcVar20[1] != 'l' || (pcVar20[2] != '_')))))) {
          *(undefined **)(puVar7 + -0x140) = param_1[0xb];
          param_3 = (undefined **)&UNK_10f6040e3;
          ppuVar12 = (undefined **)(puVar7 + -0xc0);
          param_2 = ppuVar17;
          FUN_109e9f044();
        }
        if ((short)*(ushort *)((long)ppuVar18 + 0x44) < 0) {
          if (*(uint *)(ppuVar18 + 10) < 2) {
            if (*(char *)(ppuVar17 + 0x83) == '\x01') {
              param_3 = (undefined **)&UNK_10f604990;
              ppuVar12 = (undefined **)(puVar7 + -0xc0);
              param_2 = ppuVar17;
              FUN_109e9ed98();
            }
          }
          else if ((((*(ushort *)((long)ppuVar18 + 0x44) >> 10 & 1) != 0) &&
                   ((*(byte *)((long)ppuVar17 + 0x3c5) & 1) == 0)) &&
                  ((*(byte *)((long)ppuVar17 + 0x3a9) & 1) == 0)) {
            param_3 = (undefined **)&UNK_10f604941;
            ppuVar12 = (undefined **)(puVar7 + -0xc0);
            param_2 = ppuVar17;
            FUN_109e9ed98();
          }
        }
        goto LAB_109e18348;
      }
      uVar15 = (ulong)*(uint *)(ppuVar17 + 0x1f);
      FUN_109e19b4c();
      puVar19 = param_1[0xb];
      *(ulong *)(puVar7 + -0x140) = uVar15;
      *(undefined **)(puVar7 + -0x138) = puVar19;
      ppuVar12 = ppuVar17;
      FUN_109f65d74(ppuVar17,&UNK_10f603fa4);
      puVar14 = *(undefined8 **)(ppuVar17[9] + 8);
      FUN_109f61800(puVar14,ppuVar12);
      if (puVar14 == (undefined8 *)0x0) {
        FUN_109f65a74(ppuVar12);
      }
      else {
        ppuVar18 = (undefined **)*puVar14;
        FUN_109f65a74(ppuVar12);
        if (ppuVar18 != (undefined **)0x0) goto code_r0x000109e175a0;
      }
      *(undefined **)(puVar7 + -0x140) = param_1[0xb];
      param_3 = (undefined **)&UNK_10f6049d8;
      FUN_109e9ed98(puVar7 + -0xc0,ppuVar17);
      ppuVar16 = (undefined **)0x28;
      ppuVar12 = ppuVar17;
      FUN_109f658b0();
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar12[4] = (undefined *)0x0;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
      }
      ppuVar12[1] = (undefined *)0x0;
      ppuVar12[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar12 + 3) = 0x16;
      *ppuVar12 = (undefined *)&PTR_DAT_110b63eb8;
      ppuVar12[4] = &UNK_10e05d730;
      puVar7[-0x99] = 1;
      unaff_x21 = ppuVar12;
      unaff_x23 = (undefined **)&UNK_10e05d730;
      goto code_r0x000109e18354;
    case 0x2c:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)(ulong)*(uint *)(param_1 + 0xb);
      param_3 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea9960();
      break;
    case 0x2d:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)(ulong)*(uint *)(param_1 + 0xb);
      param_3 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea98b0();
      break;
    case 0x2e:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = unaff_x21;
      FUN_109f64b28();
      ppuVar16 = (undefined **)((ulong)ppuVar16 & 0xffffffff);
      param_3 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      FUN_109ea96a8();
      break;
    case 0x2f:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea9758();
      break;
    case 0x30:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)(ulong)(*(int *)(param_1 + 0xb) != 0);
      param_3 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea9b70();
      break;
    case 0x31:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea9804(param_1[0xb]);
      break;
    case 0x32:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)param_1[0xb];
      param_3 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea9ac0();
      break;
    case 0x33:
      FUN_109f658b0(ppuVar17,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar16 = (undefined **)param_1[0xb];
      param_3 = (undefined **)0x1;
      ppuVar12 = unaff_x21;
      func_0x000109ea9a10();
      break;
    case 0x34:
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar7 + -0xb8);
      *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0xc0);
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar7 + -0xa8);
      *(undefined8 *)(puVar7 + -0xd0) = *(undefined8 *)(puVar7 + -0xb0);
      ppuVar12 = param_1 + 0xc;
      param_1 = (undefined **)((long)*ppuVar12 + -0x28);
      if (*(long *)*ppuVar12 == 0 || param_1 == (undefined **)0x0) {
        ppuVar12 = (undefined **)0x0;
        ppuVar23 = param_2;
      }
      else {
        unaff_x23 = (undefined **)0x0;
        ppuVar18 = (undefined **)&UNK_10f6049e8;
        do {
          bVar8 = unaff_x23 == (undefined **)param_2[3];
          unaff_x23 = (undefined **)param_2[3];
          if (bVar8) {
            FUN_109e9f044(puVar7 + -0xe0,ppuVar17,&UNK_10f6049e8);
            unaff_x23 = (undefined **)param_2[3];
          }
          puVar19 = param_1[1];
          uVar2 = *(undefined4 *)(param_1 + 2);
          uVar6 = *(undefined8 *)((long)param_1 + 0x14);
          *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)((long)param_1 + 0x1c);
          *(undefined8 *)(puVar7 + -0xe0) = uVar6;
          *(undefined4 *)(puVar7 + -0xd0) = uVar2;
          *(undefined **)(puVar7 + -200) = puVar19;
          ppuVar12 = param_1;
          ppuVar23 = param_2;
          param_3 = ppuVar17;
          (**(code **)(*param_1 + 8))();
          ppuVar16 = param_1 + 5;
          param_1 = (undefined **)((long)*ppuVar16 + -0x28);
        } while (*(long *)*ppuVar16 != 0 && param_1 != (undefined **)0x0);
      }
      *(undefined ***)(puVar7 + -0x98) = ppuVar12;
      param_2 = ppuVar23;
code_r0x000109e178bc:
      bVar8 = true;
      goto code_r0x000109e178c0;
    }
    unaff_x22 = ppuVar18;
    if (unaff_x21 != (undefined **)0x0) {
      unaff_x23 = (undefined **)unaff_x21[4];
code_r0x000109e18354:
      unaff_x22 = ppuVar18;
      if ((*(char *)((long)unaff_x23 + 4) == '\x16') && ((puVar7[-0x99] & 1) == 0)) {
        param_3 = (undefined **)&UNK_10f604a1c;
        ppuVar12 = (undefined **)(puVar7 + -0xc0);
        ppuVar16 = ppuVar17;
        FUN_109e9ed98();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x70)) {
      return unaff_x21;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_109e18450;
    __Unwind_Resume();
    ppuVar18 = (undefined **)0x0;
    puVar7 = puVar7 + -0x140;
    param_1 = ppuVar12;
    param_2 = ppuVar16;
    unaff_x19 = ppuVar17;
  } while( true );
}



/* Entry: 109e1599c; end: 109e1844f;  */

undefined **
FUN_109e1599c(undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  char *pcVar18;
  long lVar19;
  undefined1 uVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar23 [16];
  
  do {
    ppuVar16 = param_3;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x99) = 0;
    puVar17 = param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar6 = *(undefined8 *)((long)param_1 + 0x14);
    *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)((long)param_1 + 0x1c);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar6;
    *(undefined4 *)((long)register0x00000008 + -0xb0) = uVar2;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar17;
    iVar8 = *(int *)(param_1 + 7);
    ppuVar11 = param_1;
    param_3 = ppuVar16;
    unaff_x21 = ppuVar16;
    unaff_x20 = param_1;
    switch(iVar8) {
    case 0:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      unaff_x23 = (undefined **)param_1[8];
      (**(code **)(*unaff_x23 + 8))(unaff_x23,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x23;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      puVar17 = param_1[8];
      param_3 = *(undefined ***)(puVar17 + 0x80);
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 1:
      ppuVar11 = (undefined **)param_1[8];
      (**(code **)(*ppuVar11 + 8))();
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      bVar4 = ppuVar11[4][4];
      unaff_x21 = ppuVar11;
      if (10 < bVar4) {
        param_3 = (undefined **)&UNK_10f6069ca;
        ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
        param_2 = ppuVar16;
        FUN_109e9ed98();
        unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x90);
      }
      *(bool *)((long)register0x00000008 + -0x99) = 10 < bVar4;
      unaff_x20 = (undefined **)(ulong)bVar4;
      ppuVar15 = param_2;
      break;
    case 2:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      unaff_x23 = (undefined **)plVar12[4];
      bVar4 = *(byte *)((long)unaff_x23 + 4);
      if (10 < bVar4) {
        param_3 = (undefined **)&UNK_10f6069ca;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
        unaff_x23 = (undefined **)&UNK_10e05d730;
      }
      *(bool *)((long)register0x00000008 + -0x99) = 10 < bVar4;
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = puVar17;
      ppuVar11[7] = (undefined *)0x0;
      goto code_r0x000109e17248;
    case 3:
    case 4:
    case 5:
    case 6:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      param_3 = (undefined **)(ulong)(*(int *)(param_1 + 7) == 5);
      unaff_x23 = (undefined **)((long)register0x00000008 + -0x90);
      FUN_109e1896c(unaff_x23,(ulong)((long)register0x00000008 + -0x90) | 8,param_3,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      *(bool *)((long)register0x00000008 + -0x99) = *(char *)((long)unaff_x23 + 4) == '\x16';
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[7] = *(undefined **)((long)register0x00000008 + -0x88);
      ppuVar11[6] = puVar17;
      goto code_r0x000109e15af8;
    case 7:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      puVar17 = (undefined *)((long)register0x00000008 + -0x90);
      func_0x000109e18b18(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,ppuVar16,
                          (undefined1 *)((long)register0x00000008 + -0xc0));
      goto code_r0x000109e16a84;
    case 8:
    case 9:
      if (((*(byte *)((long)ppuVar16 + 0x3bd) & 1) == 0) &&
         (ppuVar11 = ppuVar16,
         FUN_109e9ebe4(ppuVar16,0x82,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                       &UNK_10f606b5d), ((ulong)ppuVar11 & 1) == 0)) {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      param_4 = (undefined **)param_1[8];
      (**(code **)(*param_4 + 8))(param_4,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = param_4;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      puVar17 = param_4[4];
      param_2 = (undefined **)plVar12[4];
      param_3 = (undefined **)(ulong)*(uint *)(param_1 + 7);
      func_0x000109e18c90();
      ppuVar15 = (undefined **)0x90;
      _malloc();
      ppuVar11 = ppuVar15;
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar15[1] = (undefined *)0x0;
        *ppuVar15 = (undefined *)0x0;
        ppuVar15[3] = (undefined *)0x0;
        ppuVar15[2] = (undefined *)0x0;
        *ppuVar15 = (undefined *)(ppuVar16 + -6);
        puVar22 = ppuVar16[-5];
        ppuVar15[3] = puVar22;
        ppuVar15[4] = (undefined *)0x0;
        ppuVar16[-5] = (undefined *)ppuVar15;
        if (puVar22 != (undefined *)0x0) {
          *(undefined ***)(puVar22 + 0x10) = ppuVar15;
        }
        ppuVar11 = ppuVar15 + 6;
        ppuVar15[7] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar15[0x10] = (undefined *)0x0;
        ppuVar15[0xd] = (undefined *)0x0;
        ppuVar15[0xc] = (undefined *)0x0;
        ppuVar15[0xf] = (undefined *)0x0;
        ppuVar15[0xe] = (undefined *)0x0;
        ppuVar15[9] = (undefined *)0x0;
        ppuVar15[8] = (undefined *)0x0;
        ppuVar15[0xb] = (undefined *)0x0;
        ppuVar15[10] = (undefined *)0x0;
      }
      goto code_r0x000109e16110;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      param_4 = (undefined **)param_1[8];
      (**(code **)(*param_4 + 8))(param_4,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = param_4;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      uVar5 = *(uint *)(param_4[4] + 4);
      uVar14 = (ulong)uVar5;
      if ((uVar5 & 0xff) < 0xb) {
        lVar19 = plVar12[4];
        if (((10 < *(byte *)(lVar19 + 4)) || ((uVar5 & 0xf0) != 0 || param_4[4][0xd] != '\x01')) ||
           ((*(byte *)(lVar19 + 4) & 0xf0) != 0 || *(char *)(lVar19 + 0xd) != '\x01'))
        goto code_r0x000109e15ba4;
        func_0x000109e18df8(uVar14,(ulong)((long)register0x00000008 + -0x90) | 8);
        if ((uVar14 & 1) == 0) {
          iVar8 = *(int *)(lVar19 + 4);
          param_3 = ppuVar16;
          func_0x000109e18df8(iVar8,(undefined1 *)((long)register0x00000008 + -0x90));
          if (iVar8 != 0) goto code_r0x000109e17c20;
          param_3 = (undefined **)&UNK_10f606cb4;
          goto code_r0x000109e15bac;
        }
code_r0x000109e17c20:
        if (*(char *)(*(long *)(*(long *)((long)register0x00000008 + -0x88) + 0x20) + 4) !=
            *(char *)(*(long *)(*(long *)((long)register0x00000008 + -0x90) + 0x20) + 4)) {
          param_3 = (undefined **)&UNK_10f606cf1;
          goto code_r0x000109e15bac;
        }
        puVar17 = &DAT_10e05d7a0;
      }
      else {
code_r0x000109e15ba4:
        param_3 = (undefined **)&UNK_10f606c78;
code_r0x000109e15bac:
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
        puVar17 = &UNK_10e05d730;
      }
      if (*(int *)(param_1 + 7) - 0xbU < 2) {
        auVar23 = NEON_ext(*(undefined1 (*) [16])((long)register0x00000008 + -0x90),
                           *(undefined1 (*) [16])((long)register0x00000008 + -0x90),8,1);
        *(long *)((long)register0x00000008 + -0x88) = auVar23._8_8_;
        *(long *)((long)register0x00000008 + -0x90) = auVar23._0_8_;
      }
code_r0x000109e16a84:
      param_2 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = puVar17;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      puVar22 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[7] = *(undefined **)((long)register0x00000008 + -0x88);
      ppuVar11[6] = puVar22;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(ppuVar11 + 10) = uVar20;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      bVar7 = puVar17[4] == '\x16';
code_r0x000109e178c0:
      *(bool *)((long)register0x00000008 + -0x99) = bVar7;
      goto LAB_109e18348;
    case 0xe:
    case 0xf:
      param_4 = (undefined **)param_1[8];
      (**(code **)(*param_4 + 8))(param_4,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = param_4;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      if ((param_4[4] == &DAT_10e05d768) || ((undefined *)plVar12[4] == &DAT_10e05d768)) {
        puVar17 = &DAT_10f2f497c;
        if (*(int *)(param_1 + 7) != 0xe) {
          puVar17 = &DAT_10f416771;
        }
        *(undefined **)((long)register0x00000008 + -0x140) = puVar17;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6046b3);
      }
      else {
        uVar14 = (ulong)*(uint *)(param_4[4] + 4);
        func_0x000109e18df8(uVar14,(ulong)((long)register0x00000008 + -0x90) | 8,ppuVar16);
        if ((uVar14 & 1) == 0) {
          iVar8 = *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x88) + 0x20) + 4);
          func_0x000109e18df8(iVar8,(undefined1 *)((long)register0x00000008 + -0x90),ppuVar16);
          if (iVar8 != 0) goto code_r0x000109e15ff8;
        }
        else {
code_r0x000109e15ff8:
          param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
          param_4 = (undefined **)param_3[4];
          if (param_4 == *(undefined ***)(*(long *)((long)register0x00000008 + -0x88) + 0x20)) {
            if ((*(char *)((long)param_4 + 4) == '\x13') ||
               (*(char *)((long)*(undefined ***)(*(long *)((long)register0x00000008 + -0x88) + 0x20)
                         + 4) == '\x13')) {
              ppuVar11 = ppuVar16;
              FUN_109e9ebe4(ppuVar16,0x78,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                            &UNK_10f60475a);
              if ((int)ppuVar11 == 0) goto code_r0x000109e163d4;
              param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
              param_4 = (undefined **)param_3[4];
            }
            ppuVar11 = param_4;
            func_0x000109ec6720();
            if (((ulong)ppuVar11 & 1) == 0) {
              unaff_x23 = *(undefined ***)((long)register0x00000008 + -0x88);
              unaff_x24 = (undefined **)unaff_x23[4];
              ppuVar11 = unaff_x24;
              func_0x000109ec6720();
              if ((int)ppuVar11 == 0) {
                ppuVar11 = param_4;
                func_0x000109ec6694();
                if ((((ulong)ppuVar11 & 1) == 0) &&
                   (ppuVar11 = unaff_x24, func_0x000109ec6694(), (int)ppuVar11 == 0)) {
                  ppuVar15 = (undefined **)
                             (ulong)*(uint *)(&UNK_10e060c6c + (ulong)*(uint *)(param_1 + 7) * 4);
                  ppuVar11 = ppuVar16;
                  FUN_109e190e8();
                  unaff_x21 = ppuVar11;
                  break;
                }
                FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,
                              &UNK_10f604797);
                goto code_r0x000109e163d4;
              }
            }
            FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f604776);
            goto code_r0x000109e163d4;
          }
        }
        puVar17 = &DAT_10f2f497c;
        if (*(int *)(param_1 + 7) != 0xe) {
          puVar17 = &DAT_10f416771;
        }
        *(undefined **)((long)register0x00000008 + -0x140) = puVar17;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f604731);
      }
code_r0x000109e163d4:
      *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      unaff_x21[1] = (undefined *)0x0;
      unaff_x21[2] = (undefined *)0x0;
      *(undefined4 *)(unaff_x21 + 3) = 3;
      unaff_x21[4] = &UNK_10e05d730;
      *unaff_x21 = (undefined *)&PTR_DAT_110b63f80;
      unaff_x21[0x15] = (undefined *)0x0;
      ppuVar11 = (undefined **)0xb;
      ppuVar15 = (undefined **)0x1;
      param_3 = (undefined **)0x1;
      func_0x000109ec6c94();
      unaff_x21[5] = (undefined *)0x0;
      unaff_x21[6] = (undefined *)0x0;
      unaff_x21[4] = (undefined *)ppuVar11;
      unaff_x23 = ppuVar11;
      goto code_r0x000109e18354;
    case 0x10:
    case 0x11:
    case 0x12:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      param_3 = (undefined **)(ulong)*(uint *)(param_1 + 7);
      puVar17 = (undefined *)((long)register0x00000008 + -0x90);
      FUN_109e19590(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,param_3,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      param_2 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
code_r0x000109e16110:
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      puVar22 = *(undefined **)((long)register0x00000008 + -0x90);
      puVar1 = *(undefined **)((long)register0x00000008 + -0x88);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = puVar17;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = puVar22;
      ppuVar11[7] = puVar1;
      bVar7 = true;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(ppuVar11 + 10) = uVar20;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      if (*(char *)(*(long *)(puVar22 + 0x20) + 4) != '\x16') {
        bVar7 = *(char *)(*(long *)(puVar1 + 0x20) + 4) == '\x16';
      }
      *(bool *)((long)register0x00000008 + -0x99) = bVar7;
      goto LAB_109e18348;
    case 0x13:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      if ((*(byte *)((long)ppuVar16 + 0x3bd) & 1) == 0) {
        param_3 = (undefined **)0x12c;
        ppuVar11 = ppuVar16;
        FUN_109e9ebe4(ppuVar16,0x82,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                      &UNK_10f606b5d);
        if (((ulong)ppuVar11 & 1) != 0) goto code_r0x000109e17160;
        bVar7 = true;
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      else {
code_r0x000109e17160:
        bVar7 = false;
      }
      uVar5 = *(uint *)((long)*(undefined ***)(*(long *)((long)register0x00000008 + -0x90) + 0x20) +
                       4);
      if ((uVar5 & 0xfe) == 0 || (uVar5 & 0xff) - 9 < 2) {
        unaff_x23 = (undefined **)&UNK_10e05d730;
        if (!bVar7) {
          unaff_x23 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x90) + 0x20);
        }
      }
      else {
        param_3 = (undefined **)&UNK_10f6047b9;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
        unaff_x23 = (undefined **)&UNK_10e05d730;
      }
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar11 + 5) = 0;
      ppuVar11[6] = puVar17;
      ppuVar11[7] = (undefined *)0x0;
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      uVar20 = 1;
      goto code_r0x000109e1727c;
    case 0x14:
      unaff_x24 = (undefined **)((long)register0x00000008 + -0xe0);
      unaff_x23 = (undefined **)((long)register0x00000008 + -0xd0);
      *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined ***)((long)register0x00000008 + -200) = unaff_x24;
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&UNK_10f6047db,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xe0);
      FUN_109e197bc(puVar10,ppuVar16,param_1,1,&UNK_10f6047df,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar10;
      if (*(undefined ***)((long)register0x00000008 + -0xe0) == unaff_x23) {
        FUN_109f658b0(ppuVar16,0x58);
        if (unaff_x21 != (undefined **)0x0) {
          unaff_x21[10] = (undefined *)0x0;
          unaff_x21[7] = (undefined *)0x0;
          unaff_x21[6] = (undefined *)0x0;
          unaff_x21[9] = (undefined *)0x0;
          unaff_x21[8] = (undefined *)0x0;
          unaff_x21[3] = (undefined *)0x0;
          unaff_x21[2] = (undefined *)0x0;
          unaff_x21[5] = (undefined *)0x0;
          unaff_x21[4] = (undefined *)0x0;
          unaff_x21[1] = (undefined *)0x0;
          *unaff_x21 = (undefined *)0x0;
        }
        param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
        ppuVar15 = (undefined **)0x94;
        ppuVar11 = unaff_x21;
        func_0x000109ea9448();
      }
      else {
        unaff_x20 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,&DAT_10e05d7a0,&UNK_10f6047e3,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        ppuVar11 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar11 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        param_4 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x68);
        if (param_4 != (undefined **)0x0) {
          param_4[0xc] = (undefined *)0x0;
          param_4[9] = (undefined *)0x0;
          param_4[8] = (undefined *)0x0;
          param_4[0xb] = (undefined *)0x0;
          param_4[10] = (undefined *)0x0;
          param_4[5] = (undefined *)0x0;
          param_4[4] = (undefined *)0x0;
          param_4[7] = (undefined *)0x0;
          param_4[6] = (undefined *)0x0;
          param_4[1] = (undefined *)0x0;
          *param_4 = (undefined *)0x0;
          param_4[3] = (undefined *)0x0;
          param_4[2] = (undefined *)0x0;
        }
        puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
        param_4[2] = (undefined *)0x0;
        *(undefined4 *)(param_4 + 3) = 0xc;
        *param_4 = (undefined *)&PTR_FUN_110b639a8;
        param_4[4] = puVar17;
        ppuVar15 = param_4 + 7;
        *ppuVar15 = (undefined *)0x0;
        param_4[5] = (undefined *)ppuVar15;
        param_4[8] = (undefined *)(param_4 + 5);
        unaff_x25 = param_4 + 0xb;
        *unaff_x25 = (undefined *)0x0;
        param_4[9] = (undefined *)unaff_x25;
        param_4[6] = (undefined *)0x0;
        param_4[10] = (undefined *)0x0;
        param_4[0xc] = (undefined *)(param_4 + 9);
        ppuVar11 = param_4 + 1;
        *ppuVar11 = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        param_4[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        if (*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x23) {
          puVar13 = (undefined8 *)param_4[8];
          *puVar13 = *(undefined ***)((long)register0x00000008 + -0xe0);
          *(undefined8 **)(*(long *)((long)register0x00000008 + -0xe0) + 8) = puVar13;
          puVar13 = *(undefined8 **)((long)register0x00000008 + -200);
          param_4[8] = (undefined *)puVar13;
          *puVar13 = ppuVar15;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x23;
          *(undefined1 **)((long)register0x00000008 + -200) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        unaff_x26 = &PTR_DAT_110b64048;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 != (undefined **)0x0;
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)ppuVar15;
        ppuVar15 = (undefined **)0x0;
        if (bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)param_4[8];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        param_4[8] = (undefined *)ppuVar15;
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar15 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar15[6] = (undefined *)0x0;
          ppuVar15[3] = (undefined *)0x0;
          ppuVar15[2] = (undefined *)0x0;
          ppuVar15[5] = (undefined *)0x0;
          ppuVar15[4] = (undefined *)0x0;
          ppuVar15[1] = (undefined *)0x0;
          *ppuVar15 = (undefined *)0x0;
        }
        unaff_x24 = ppuVar16;
        FUN_109f658b0(ppuVar16,0xb0);
        if (unaff_x24 != (undefined **)0x0) {
          unaff_x24[0x13] = (undefined *)0x0;
          unaff_x24[0x12] = (undefined *)0x0;
          unaff_x24[0x15] = (undefined *)0x0;
          unaff_x24[0x14] = (undefined *)0x0;
          unaff_x24[0xf] = (undefined *)0x0;
          unaff_x24[0xe] = (undefined *)0x0;
          unaff_x24[0x11] = (undefined *)0x0;
          unaff_x24[0x10] = (undefined *)0x0;
          unaff_x24[0xb] = (undefined *)0x0;
          unaff_x24[10] = (undefined *)0x0;
          unaff_x24[0xd] = (undefined *)0x0;
          unaff_x24[0xc] = (undefined *)0x0;
          unaff_x24[7] = (undefined *)0x0;
          unaff_x24[6] = (undefined *)0x0;
          unaff_x24[9] = (undefined *)0x0;
          unaff_x24[8] = (undefined *)0x0;
          unaff_x24[3] = (undefined *)0x0;
          unaff_x24[2] = (undefined *)0x0;
          unaff_x24[5] = (undefined *)0x0;
          unaff_x24[4] = (undefined *)0x0;
          unaff_x24[1] = (undefined *)0x0;
          *unaff_x24 = (undefined *)0x0;
        }
        unaff_x27 = (undefined **)(ulong)(ppuVar15 == (undefined **)0x0);
        func_0x000109ea9b70(unaff_x24,0,1);
        param_3 = unaff_x24;
        func_0x000109ea9180(ppuVar15,ppuVar11);
        unaff_x23 = ppuVar15 + 1;
        *unaff_x23 = (undefined *)unaff_x25;
        ppuVar11 = (undefined **)0x0;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar11 = unaff_x23;
        }
        puVar13 = (undefined8 *)param_4[0xc];
        ppuVar15[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_4[0xc] = (undefined *)ppuVar11;
        ppuVar15 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
code_r0x000109e181d4:
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        unaff_x21 = ppuVar11;
      }
      break;
    case 0x15:
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&UNK_10f6047db,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      param_3 = param_1;
      FUN_109e197bc(param_2,ppuVar16,param_1,1,&UNK_10f6047df,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x88) = param_2;
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23 = (undefined **)&DAT_10e05d7a0;
      ppuVar11[4] = &DAT_10e05d7a0;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = puVar17;
      ppuVar11[7] = (undefined *)param_2;
      param_4 = param_2;
code_r0x000109e17248:
      uVar14 = 1L << (uVar14 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      uVar20 = 4;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
code_r0x000109e17264:
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
code_r0x000109e1727c:
      *(undefined1 *)(ppuVar11 + 10) = uVar20;
      unaff_x21 = ppuVar11;
      goto code_r0x000109e18354;
    case 0x16:
      unaff_x25 = (undefined **)((long)register0x00000008 + -0xd0);
      *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined1 **)((long)register0x00000008 + -200) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&UNK_10f6047db,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xe0);
      FUN_109e197bc(puVar10,ppuVar16,param_1,1,&UNK_10f6047df,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar10;
      if (*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x25) {
        unaff_x20 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,&DAT_10e05d7a0,&UNK_10f6047eb,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        ppuVar11 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar11 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        param_4 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x68);
        if (param_4 != (undefined **)0x0) {
          param_4[0xc] = (undefined *)0x0;
          param_4[9] = (undefined *)0x0;
          param_4[8] = (undefined *)0x0;
          param_4[0xb] = (undefined *)0x0;
          param_4[10] = (undefined *)0x0;
          param_4[5] = (undefined *)0x0;
          param_4[4] = (undefined *)0x0;
          param_4[7] = (undefined *)0x0;
          param_4[6] = (undefined *)0x0;
          param_4[1] = (undefined *)0x0;
          *param_4 = (undefined *)0x0;
          param_4[3] = (undefined *)0x0;
          param_4[2] = (undefined *)0x0;
        }
        puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
        param_4[2] = (undefined *)0x0;
        *(undefined4 *)(param_4 + 3) = 0xc;
        *param_4 = (undefined *)&PTR_FUN_110b639a8;
        unaff_x28 = param_4 + 7;
        *unaff_x28 = (undefined *)0x0;
        param_4[5] = (undefined *)unaff_x28;
        param_4[4] = puVar17;
        param_4[6] = (undefined *)0x0;
        param_4[8] = (undefined *)(param_4 + 5);
        unaff_x27 = param_4 + 0xb;
        *unaff_x27 = (undefined *)0x0;
        param_4[9] = (undefined *)unaff_x27;
        param_4[10] = (undefined *)0x0;
        param_4[0xc] = (undefined *)(param_4 + 9);
        ppuVar11 = param_4 + 1;
        *ppuVar11 = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        param_4[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar15 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar15[6] = (undefined *)0x0;
          ppuVar15[3] = (undefined *)0x0;
          ppuVar15[2] = (undefined *)0x0;
          ppuVar15[5] = (undefined *)0x0;
          ppuVar15[4] = (undefined *)0x0;
          ppuVar15[1] = (undefined *)0x0;
          *ppuVar15 = (undefined *)0x0;
        }
        unaff_x24 = ppuVar16;
        FUN_109f658b0(ppuVar16,0xb0);
        if (unaff_x24 != (undefined **)0x0) {
          unaff_x24[0x13] = (undefined *)0x0;
          unaff_x24[0x12] = (undefined *)0x0;
          unaff_x24[0x15] = (undefined *)0x0;
          unaff_x24[0x14] = (undefined *)0x0;
          unaff_x24[0xf] = (undefined *)0x0;
          unaff_x24[0xe] = (undefined *)0x0;
          unaff_x24[0x11] = (undefined *)0x0;
          unaff_x24[0x10] = (undefined *)0x0;
          unaff_x24[0xb] = (undefined *)0x0;
          unaff_x24[10] = (undefined *)0x0;
          unaff_x24[0xd] = (undefined *)0x0;
          unaff_x24[0xc] = (undefined *)0x0;
          unaff_x24[7] = (undefined *)0x0;
          unaff_x24[6] = (undefined *)0x0;
          unaff_x24[9] = (undefined *)0x0;
          unaff_x24[8] = (undefined *)0x0;
          unaff_x24[3] = (undefined *)0x0;
          unaff_x24[2] = (undefined *)0x0;
          unaff_x24[5] = (undefined *)0x0;
          unaff_x24[4] = (undefined *)0x0;
          unaff_x24[1] = (undefined *)0x0;
          *unaff_x24 = (undefined *)0x0;
        }
        unaff_x26 = (undefined **)(ulong)(ppuVar15 == (undefined **)0x0);
        func_0x000109ea9b70(unaff_x24,1,1);
        func_0x000109ea9180(ppuVar15,ppuVar11,unaff_x24);
        ppuVar15[1] = (undefined *)unaff_x28;
        ppuVar11 = (undefined **)0x0;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar11 = ppuVar15 + 1;
        }
        puVar13 = (undefined8 *)param_4[8];
        ppuVar15[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_4[8] = (undefined *)ppuVar11;
        if (*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x25) {
          puVar13 = (undefined8 *)param_4[0xc];
          *puVar13 = *(undefined ***)((long)register0x00000008 + -0xe0);
          *(undefined8 **)(*(long *)((long)register0x00000008 + -0xe0) + 8) = puVar13;
          puVar13 = *(undefined8 **)((long)register0x00000008 + -200);
          param_4[0xc] = (undefined *)puVar13;
          *puVar13 = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
          *(undefined1 **)((long)register0x00000008 + -200) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 == (undefined **)0x0;
        unaff_x23 = (undefined **)(ulong)bVar7;
        param_3 = *(undefined ***)((long)register0x00000008 + -0x88);
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)unaff_x27;
        ppuVar15 = (undefined **)0x0;
        if (!bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)param_4[0xc];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        param_4[0xc] = (undefined *)ppuVar15;
        ppuVar15 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        goto code_r0x000109e181d4;
      }
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
      ppuVar15 = (undefined **)0x96;
      ppuVar11 = unaff_x21;
      func_0x000109ea9448();
      break;
    case 0x17:
      param_3 = param_1;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&DAT_10f3dd801,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = param_2;
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23 = (undefined **)&DAT_10e05d7a0;
      ppuVar11[4] = &DAT_10e05d7a0;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = (undefined *)param_2;
      ppuVar11[7] = (undefined *)0x0;
      param_4 = param_2;
code_r0x000109e15af8:
      uVar14 = 1L << (uVar14 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      uVar20 = 4;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      goto code_r0x000109e17264;
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1c:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      unaff_x24 = (undefined **)plVar12[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730))
      {
code_r0x000109e16be4:
        unaff_x25 = (undefined **)0x1;
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
code_r0x000109e16be8:
        ppuVar15 = (undefined **)0x28;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 0x16;
        *ppuVar11 = (undefined *)&PTR_DAT_110b63eb8;
        goto code_r0x000109e16c20;
      }
      unaff_x25 = (undefined **)((long)register0x00000008 + -0x90);
      FUN_109e1896c(unaff_x25,(ulong)((long)register0x00000008 + -0x90) | 8,
                    *(int *)(param_1 + 7) == 0x18,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = unaff_x25;
        *(undefined ***)((long)register0x00000008 + -0x138) = unaff_x24;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x1a:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      unaff_x24 = (undefined **)plVar12[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730))
      goto code_r0x000109e16be4;
      unaff_x25 = (undefined **)((long)register0x00000008 + -0x90);
      func_0x000109e18b18(unaff_x25,(ulong)((long)register0x00000008 + -0x90) | 8,ppuVar16,
                          (undefined1 *)((long)register0x00000008 + -0xc0));
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = unaff_x25;
        *(undefined ***)((long)register0x00000008 + -0x138) = unaff_x24;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x1d:
    case 0x1e:
      unaff_x24 = (undefined **)0x1;
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      puVar17 = (undefined *)plVar12[4];
      if ((puVar17 == &UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730)) {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
        goto code_r0x000109e16be8;
      }
      func_0x000109e18c90(puVar17,(undefined *)plVar9[4],*(undefined4 *)(param_1 + 7),ppuVar16,
                          (undefined1 *)((long)register0x00000008 + -0xc0));
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = puVar17;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x1f:
    case 0x20:
    case 0x21:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      unaff_x24 = (undefined **)plVar12[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730))
      goto code_r0x000109e16be4;
      unaff_x25 = (undefined **)((long)register0x00000008 + -0x90);
      FUN_109e19590(unaff_x25,(ulong)((long)register0x00000008 + -0x90) | 8,
                    *(undefined4 *)(param_1 + 7),ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = unaff_x25;
        *(undefined ***)((long)register0x00000008 + -0x138) = unaff_x24;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x22:
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&DAT_10f3507c8,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      unaff_x25 = (undefined **)((long)register0x00000008 + -0xd0);
      *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined1 **)((long)register0x00000008 + -200) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      *(undefined1 **)((long)register0x00000008 + -0x128) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined1 **)((long)register0x00000008 + -0x100) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xe8) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,(undefined1 *)((long)register0x00000008 + -0xe0),ppuVar16)
      ;
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      plVar12 = (long *)param_1[10];
      (**(code **)(*plVar12 + 8))
                (plVar12,(undefined1 *)((long)register0x00000008 + -0x100),ppuVar16);
      *(long **)((long)register0x00000008 + -0x80) = plVar12;
      uVar14 = (ulong)*(uint *)(*(long *)(*(long *)((ulong)((long)register0x00000008 + -0x90) | 8) +
                                         0x20) + 4);
      func_0x000109e18df8(uVar14,(undefined1 *)((long)register0x00000008 + -0x80),ppuVar16);
      if ((uVar14 & 1) == 0) {
        iVar8 = *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x80) + 0x20) + 4);
        func_0x000109e18df8(iVar8,(long *)((ulong)((long)register0x00000008 + -0x90) | 8),ppuVar16);
        if (iVar8 != 0) goto code_r0x000109e17478;
code_r0x000109e1748c:
        puVar17 = param_1[9];
        *(undefined8 *)((long)register0x00000008 + -0x108) = *(undefined8 *)(puVar17 + 8);
        *(undefined4 *)((long)register0x00000008 + -0x110) = *(undefined4 *)(puVar17 + 0x10);
        uVar6 = *(undefined8 *)(puVar17 + 0x14);
        *(undefined8 *)((long)register0x00000008 + -0x118) = *(undefined8 *)(puVar17 + 0x1c);
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar6;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0x120),ppuVar16,&UNK_10f604818);
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
        param_4 = (undefined **)&UNK_10e05d730;
      }
      else {
code_r0x000109e17478:
        param_4 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x88) + 0x20);
        if (param_4 != *(undefined ***)(*(long *)((long)register0x00000008 + -0x80) + 0x20))
        goto code_r0x000109e1748c;
      }
      if ((*(char *)((long)param_4 + 4) == '\x13') &&
         (ppuVar11 = ppuVar16,
         FUN_109e9ebe4(ppuVar16,0x78,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                       &UNK_10f60485a), ((ulong)ppuVar11 & 1) == 0)) {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      ppuVar11 = param_4;
      func_0x000109ec6694();
      if (((int)ppuVar11 != 0) &&
         ((*(char *)((long)ppuVar16 + 0x2f7) != '\x01' ||
          ((*(byte *)((long)param_4 + 4) | 2) != 0xf)))) {
        if ((*(byte *)((long)param_4 + 0xc) >> 1 & 1) == 0) {
          ppuVar11 = param_4;
          FUN_109eca058();
        }
        else {
          ppuVar11 = (undefined **)(&UNK_10e05bf38 + (long)param_4[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = ppuVar11;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f604894);
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      ppuVar11 = *(undefined ***)((long)register0x00000008 + -0x90);
      param_3 = (undefined **)0x0;
      ppuVar15 = ppuVar16;
      (**(code **)(*ppuVar11 + 0x30))();
      if (((*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x25) ||
          (*(long *)((long)register0x00000008 + -0x100) !=
           *(long *)((long)register0x00000008 + -0x128))) || (ppuVar11 == (undefined **)0x0)) {
        if (*(char *)((long)param_4 + 4) == '\x13') {
          lVar19 = *(long *)((long)register0x00000008 + -0x88);
          if (((lVar19 != 0) && (*(int *)(lVar19 + 0x18) == 2)) && (*(long *)(lVar19 + 0x28) != 0))
          {
            *(int *)(*(long *)(lVar19 + 0x28) + 0x60) =
                 *(int *)(*(long *)(lVar19 + 0x20) + 0x10) + -1;
          }
          lVar19 = *(long *)((long)register0x00000008 + -0x80);
          if (((lVar19 != 0) && (*(int *)(lVar19 + 0x18) == 2)) && (*(long *)(lVar19 + 0x28) != 0))
          {
            *(int *)(*(long *)(lVar19 + 0x28) + 0x60) =
                 *(int *)(*(long *)(lVar19 + 0x20) + 0x10) + -1;
          }
        }
        unaff_x20 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,param_4,&UNK_10f6048cf,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        ppuVar11 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar11 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        param_4 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x68);
        if (param_4 != (undefined **)0x0) {
          param_4[0xc] = (undefined *)0x0;
          param_4[9] = (undefined *)0x0;
          param_4[8] = (undefined *)0x0;
          param_4[0xb] = (undefined *)0x0;
          param_4[10] = (undefined *)0x0;
          param_4[5] = (undefined *)0x0;
          param_4[4] = (undefined *)0x0;
          param_4[7] = (undefined *)0x0;
          param_4[6] = (undefined *)0x0;
          param_4[1] = (undefined *)0x0;
          *param_4 = (undefined *)0x0;
          param_4[3] = (undefined *)0x0;
          param_4[2] = (undefined *)0x0;
        }
        puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
        param_4[2] = (undefined *)0x0;
        *(undefined4 *)(param_4 + 3) = 0xc;
        *param_4 = (undefined *)&PTR_FUN_110b639a8;
        param_4[4] = puVar17;
        unaff_x26 = param_4 + 7;
        *unaff_x26 = (undefined *)0x0;
        ppuVar11 = param_4 + 5;
        ppuVar15 = param_4 + 6;
        *ppuVar15 = (undefined *)0x0;
        param_4[8] = (undefined *)ppuVar11;
        unaff_x27 = param_4 + 0xb;
        *unaff_x27 = (undefined *)0x0;
        unaff_x28 = param_4 + 9;
        *unaff_x28 = (undefined *)unaff_x27;
        unaff_x24 = param_4 + 10;
        *unaff_x24 = (undefined *)0x0;
        param_4[0xc] = (undefined *)unaff_x28;
        ppuVar21 = param_4 + 1;
        *ppuVar21 = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        param_4[2] = (undefined *)puVar13;
        *puVar13 = ppuVar21;
        param_2[3] = (undefined *)ppuVar21;
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0xe0);
        if (ppuVar21 == unaff_x25) {
          param_4[5] = (undefined *)unaff_x26;
          *ppuVar15 = (undefined *)0x0;
          param_4[7] = (undefined *)0x0;
          param_4[8] = (undefined *)ppuVar11;
        }
        else {
          param_4[5] = (undefined *)ppuVar21;
          *ppuVar15 = (undefined *)0x0;
          param_4[7] = (undefined *)0x0;
          param_4[8] = *(undefined **)((long)register0x00000008 + -200);
          ppuVar21[1] = (undefined *)ppuVar11;
          *(undefined ***)param_4[8] = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
          *(undefined1 **)((long)register0x00000008 + -200) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        unaff_x25 = &PTR_DAT_110b64048;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 != (undefined **)0x0;
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)unaff_x26;
        ppuVar15 = (undefined **)0x0;
        if (bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)param_4[8];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        param_4[8] = (undefined *)ppuVar15;
        puVar17 = *(undefined **)((long)register0x00000008 + -0x100);
        puVar22 = *(undefined **)((long)register0x00000008 + -0x128);
        if (puVar17 == puVar22) {
          param_4[9] = (undefined *)unaff_x27;
          *unaff_x24 = (undefined *)0x0;
          param_4[0xb] = (undefined *)0x0;
          param_4[0xc] = (undefined *)unaff_x28;
        }
        else {
          param_4[9] = puVar17;
          *unaff_x24 = (undefined *)0x0;
          param_4[0xb] = (undefined *)0x0;
          param_4[0xc] = *(undefined **)((long)register0x00000008 + -0xe8);
          *(undefined ***)(puVar17 + 8) = unaff_x28;
          *(undefined ***)param_4[0xc] = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined **)((long)register0x00000008 + -0x100) = puVar22;
          *(undefined1 **)((long)register0x00000008 + -0xe8) =
               (undefined1 *)((long)register0x00000008 + -0x100);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 == (undefined **)0x0;
        unaff_x23 = (undefined **)(ulong)bVar7;
        param_3 = *(undefined ***)((long)register0x00000008 + -0x80);
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)unaff_x27;
        ppuVar15 = (undefined **)0x0;
        if (!bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)param_4[0xc];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        param_4[0xc] = (undefined *)ppuVar15;
        ppuVar15 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        goto code_r0x000109e181d4;
      }
      lVar19 = 8;
      if (*(char *)(ppuVar11 + 5) == '\0') {
        lVar19 = 0x10;
      }
      unaff_x21 = *(undefined ***)((long)register0x00000008 + lVar19 + -0x90);
      break;
    case 0x23:
    case 0x24:
      puVar17 = &UNK_10f6048df;
      if (iVar8 != 0x23) {
        puVar17 = &UNK_10f6048f7;
      }
      param_1[0x10] = puVar17;
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      ppuVar11 = ppuVar16;
      FUN_109e19918(ppuVar16,*(undefined4 *)(plVar12[4] + 4));
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
      puVar17 = (undefined *)((long)register0x00000008 + -0x90);
      FUN_109e1896c(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,0,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = puVar17;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
code_r0x000109e18344:
      *(char *)((long)register0x00000008 + -0x99) = (char)ppuVar11;
LAB_109e18348:
      unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x98);
      unaff_x20 = param_1;
      ppuVar15 = param_2;
      break;
    case 0x25:
    case 0x26:
      puVar17 = &UNK_10f60490f;
      if (iVar8 != 0x25) {
        puVar17 = &UNK_10f604928;
      }
      param_1[0x10] = puVar17;
      param_4 = (undefined **)param_1[8];
      (**(code **)(*param_4 + 8))(param_4,param_2);
      *(undefined ***)((long)register0x00000008 + -0x90) = param_4;
      ppuVar11 = ppuVar16;
      FUN_109e19918(ppuVar16,*(undefined4 *)(param_4[4] + 4));
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
      if (param_4[4][4] == '\x16') {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      else {
        cVar3 = ppuVar11[4][4];
        *(bool *)((long)register0x00000008 + -0x99) = cVar3 == '\x16';
        if (cVar3 != '\x16') {
          puVar17 = (undefined *)((long)register0x00000008 + -0x90);
          FUN_109e1896c(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,0,ppuVar16,
                        (undefined1 *)((long)register0x00000008 + -0xc0));
          param_4 = ppuVar16;
          FUN_109f658b0(ppuVar16,0x58);
          if (param_4 != (undefined **)0x0) {
            param_4[10] = (undefined *)0x0;
            param_4[7] = (undefined *)0x0;
            param_4[6] = (undefined *)0x0;
            param_4[9] = (undefined *)0x0;
            param_4[8] = (undefined *)0x0;
            param_4[3] = (undefined *)0x0;
            param_4[2] = (undefined *)0x0;
            param_4[5] = (undefined *)0x0;
            param_4[4] = (undefined *)0x0;
            param_4[1] = (undefined *)0x0;
            *param_4 = (undefined *)0x0;
          }
          uVar5 = *(uint *)(param_1 + 7);
          uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
          param_4[1] = (undefined *)0x0;
          param_4[2] = (undefined *)0x0;
          uVar20 = 4;
          *(undefined4 *)(param_4 + 3) = 4;
          *param_4 = (undefined *)&PTR_FUN_110b64370;
          param_4[4] = puVar17;
          *(undefined4 *)(param_4 + 5) = uVar2;
          unaff_x23 = *(undefined ***)((long)register0x00000008 + -0x90);
          param_4[7] = *(undefined **)((long)register0x00000008 + -0x88);
          param_4[6] = (undefined *)unaff_x23;
          uVar14 = 1L << ((ulong)uVar5 & 0x3f);
          param_4[8] = (undefined *)0x0;
          param_4[9] = (undefined *)0x0;
          if ((uVar14 & 0x7bff77fff8) != 0) {
            uVar20 = 2;
          }
          if ((uVar14 & 0x3fff8400880007) != 0) {
            uVar20 = 1;
          }
          *(undefined1 *)(param_4 + 10) = uVar20;
          ppuVar11 = unaff_x23;
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23,ppuVar16,0);
          ppuVar15 = param_2;
          FUN_109e199d0(param_2,ppuVar11);
          *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar15;
          unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23,ppuVar16,0);
          puVar17 = param_1[8];
          *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
          *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
          uVar6 = *(undefined8 *)(puVar17 + 0x14);
          *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
          *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
          *(undefined1 **)((long)register0x00000008 + -0x140) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
          ppuVar15 = ppuVar16;
          param_3 = unaff_x24;
          FUN_109e1847c();
          ppuVar11 = param_2;
          param_2 = ppuVar15;
          goto code_r0x000109e18344;
        }
      }
      ppuVar15 = (undefined **)0x28;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
      }
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 0x16;
      *ppuVar11 = (undefined *)&PTR_DAT_110b63eb8;
code_r0x000109e16c20:
      ppuVar11[4] = &UNK_10e05d730;
      unaff_x21 = ppuVar11;
      unaff_x23 = (undefined **)&UNK_10e05d730;
      goto code_r0x000109e18354;
    case 0x27:
      func_0x000109ea8ce4();
      ppuVar15 = param_2;
      unaff_x21 = ppuVar11;
      break;
    case 0x28:
      plVar12 = (long *)param_1[8];
      puVar17 = param_1[9];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      (**(code **)(*plVar12 + 0x18))(plVar12,1);
      param_4 = (undefined **)param_1[8];
      (**(code **)(*param_4 + 8))(param_4,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = param_4;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      ppuVar11 = ppuVar16;
      param_2 = ppuVar16;
      param_3 = param_4;
      FUN_109e0ef68();
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      if (ppuVar11[4][4] == '\x16') goto code_r0x000109e178bc;
    default:
      goto LAB_109e18348;
    case 0x2b:
      puVar13 = *(undefined8 **)(ppuVar16[9] + 8);
      FUN_109f61800(puVar13,param_1[0xb]);
      if ((puVar13 != (undefined8 *)0x0) &&
         (param_4 = (undefined **)*puVar13, param_4 != (undefined **)0x0)) {
code_r0x000109e175a0:
        *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 0x80;
        param_2 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)param_4;
        ppuVar11[4] = param_4[4];
        *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
        uVar5 = *(uint *)(param_4 + 8) >> 0xb & 0xf;
        if ((((uVar5 == 5 || uVar5 == 0) && (((ulong)param_1[0x11] & 1) == 0)) &&
            (func_0x000109eadd3c(), (*(byte *)((long)ppuVar11 + 0x41) & 1) == 0)) &&
           (((pcVar18 = param_4[5], pcVar18 == (char *)0x0 || (*pcVar18 != 'g')) ||
            ((pcVar18[1] != 'l' || (pcVar18[2] != '_')))))) {
          *(undefined **)((long)register0x00000008 + -0x140) = param_1[0xb];
          param_3 = (undefined **)&UNK_10f6040e3;
          ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
          param_2 = ppuVar16;
          FUN_109e9f044();
        }
        if ((short)*(ushort *)((long)param_4 + 0x44) < 0) {
          if (*(uint *)(param_4 + 10) < 2) {
            if (*(char *)(ppuVar16 + 0x83) == '\x01') {
              param_3 = (undefined **)&UNK_10f604990;
              ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
              param_2 = ppuVar16;
              FUN_109e9ed98();
            }
          }
          else if ((((*(ushort *)((long)param_4 + 0x44) >> 10 & 1) != 0) &&
                   ((*(byte *)((long)ppuVar16 + 0x3c5) & 1) == 0)) &&
                  ((*(byte *)((long)ppuVar16 + 0x3a9) & 1) == 0)) {
            param_3 = (undefined **)&UNK_10f604941;
            ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
            param_2 = ppuVar16;
            FUN_109e9ed98();
          }
        }
        goto LAB_109e18348;
      }
      uVar14 = (ulong)*(uint *)(ppuVar16 + 0x1f);
      FUN_109e19b4c();
      puVar17 = param_1[0xb];
      *(ulong *)((long)register0x00000008 + -0x140) = uVar14;
      *(undefined **)((long)register0x00000008 + -0x138) = puVar17;
      ppuVar11 = ppuVar16;
      FUN_109f65d74(ppuVar16,&UNK_10f603fa4);
      puVar13 = *(undefined8 **)(ppuVar16[9] + 8);
      FUN_109f61800(puVar13,ppuVar11);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_109f65a74(ppuVar11);
      }
      else {
        param_4 = (undefined **)*puVar13;
        FUN_109f65a74(ppuVar11);
        if (param_4 != (undefined **)0x0) goto code_r0x000109e175a0;
      }
      *(undefined **)((long)register0x00000008 + -0x140) = param_1[0xb];
      param_3 = (undefined **)&UNK_10f6049d8;
      FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
      ppuVar15 = (undefined **)0x28;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
      }
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 0x16;
      *ppuVar11 = (undefined *)&PTR_DAT_110b63eb8;
      ppuVar11[4] = &UNK_10e05d730;
      *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      unaff_x21 = ppuVar11;
      unaff_x23 = (undefined **)&UNK_10e05d730;
      goto code_r0x000109e18354;
    case 0x2c:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)(ulong)*(uint *)(param_1 + 0xb);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9960();
      break;
    case 0x2d:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)(ulong)*(uint *)(param_1 + 0xb);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea98b0();
      break;
    case 0x2e:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = unaff_x21;
      FUN_109f64b28();
      ppuVar15 = (undefined **)((ulong)ppuVar15 & 0xffffffff);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      FUN_109ea96a8();
      break;
    case 0x2f:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9758();
      break;
    case 0x30:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)(ulong)(*(int *)(param_1 + 0xb) != 0);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9b70();
      break;
    case 0x31:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9804(param_1[0xb]);
      break;
    case 0x32:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)param_1[0xb];
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9ac0();
      break;
    case 0x33:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)param_1[0xb];
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9a10();
      break;
    case 0x34:
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      ppuVar11 = param_1 + 0xc;
      param_1 = (undefined **)((long)*ppuVar11 + -0x28);
      if (*(long *)*ppuVar11 == 0 || param_1 == (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
        ppuVar21 = param_2;
      }
      else {
        unaff_x23 = (undefined **)0x0;
        param_4 = (undefined **)&UNK_10f6049e8;
        do {
          bVar7 = unaff_x23 == (undefined **)param_2[3];
          unaff_x23 = (undefined **)param_2[3];
          if (bVar7) {
            FUN_109e9f044((undefined1 *)((long)register0x00000008 + -0xe0),ppuVar16,&UNK_10f6049e8);
            unaff_x23 = (undefined **)param_2[3];
          }
          puVar17 = param_1[1];
          uVar2 = *(undefined4 *)(param_1 + 2);
          uVar6 = *(undefined8 *)((long)param_1 + 0x14);
          *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)((long)param_1 + 0x1c);
          *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
          *(undefined4 *)((long)register0x00000008 + -0xd0) = uVar2;
          *(undefined **)((long)register0x00000008 + -200) = puVar17;
          ppuVar11 = param_1;
          ppuVar21 = param_2;
          param_3 = ppuVar16;
          (**(code **)(*param_1 + 8))();
          ppuVar15 = param_1 + 5;
          param_1 = (undefined **)((long)*ppuVar15 + -0x28);
        } while (*(long *)*ppuVar15 != 0 && param_1 != (undefined **)0x0);
      }
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      param_2 = ppuVar21;
code_r0x000109e178bc:
      bVar7 = true;
      goto code_r0x000109e178c0;
    }
    unaff_x22 = param_4;
    if (unaff_x21 != (undefined **)0x0) {
      unaff_x23 = (undefined **)unaff_x21[4];
code_r0x000109e18354:
      unaff_x22 = param_4;
      if ((*(char *)((long)unaff_x23 + 4) == '\x16') &&
         ((*(byte *)((long)register0x00000008 + -0x99) & 1) == 0)) {
        param_3 = (undefined **)&UNK_10f604a1c;
        ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
        ppuVar15 = ppuVar16;
        FUN_109e9ed98();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
      return unaff_x21;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_109e18450;
    __Unwind_Resume();
    param_4 = (undefined **)0x0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    param_1 = ppuVar11;
    param_2 = ppuVar15;
    unaff_x19 = ppuVar16;
  } while( true );
}



/* Entry: 109e18450; end: 109e1847b;  */

undefined ** FUN_109e18450(undefined **param_1,undefined **param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  char *pcVar18;
  long lVar19;
  undefined1 uVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar23 [16];
  
  do {
    ppuVar16 = param_3;
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined ***)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined ***)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x99) = 0;
    puVar17 = param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar6 = *(undefined8 *)((long)param_1 + 0x14);
    *(undefined8 *)((long)register0x00000008 + -0xb8) = *(undefined8 *)((long)param_1 + 0x1c);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar6;
    *(undefined4 *)((long)register0x00000008 + -0xb0) = uVar2;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar17;
    iVar8 = *(int *)(param_1 + 7);
    unaff_x22 = (undefined **)0x0;
    ppuVar11 = param_1;
    param_3 = ppuVar16;
    unaff_x21 = ppuVar16;
    unaff_x20 = param_1;
    switch(iVar8) {
    case 0:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      unaff_x23 = (undefined **)param_1[8];
      (**(code **)(*unaff_x23 + 8))(unaff_x23,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x23;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      puVar17 = param_1[8];
      param_3 = *(undefined ***)(puVar17 + 0x80);
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 1:
      ppuVar11 = (undefined **)param_1[8];
      (**(code **)(*ppuVar11 + 8))();
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      bVar4 = ppuVar11[4][4];
      unaff_x21 = ppuVar11;
      if (10 < bVar4) {
        param_3 = (undefined **)&UNK_10f6069ca;
        ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
        param_2 = ppuVar16;
        FUN_109e9ed98();
        unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x90);
      }
      *(bool *)((long)register0x00000008 + -0x99) = 10 < bVar4;
      unaff_x20 = (undefined **)(ulong)bVar4;
      ppuVar15 = param_2;
      break;
    case 2:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      unaff_x23 = (undefined **)plVar12[4];
      bVar4 = *(byte *)((long)unaff_x23 + 4);
      if (10 < bVar4) {
        param_3 = (undefined **)&UNK_10f6069ca;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
        unaff_x23 = (undefined **)&UNK_10e05d730;
      }
      *(bool *)((long)register0x00000008 + -0x99) = 10 < bVar4;
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = puVar17;
      ppuVar11[7] = (undefined *)0x0;
      goto code_r0x000109e17248;
    case 3:
    case 4:
    case 5:
    case 6:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      param_3 = (undefined **)(ulong)(*(int *)(param_1 + 7) == 5);
      unaff_x23 = (undefined **)((long)register0x00000008 + -0x90);
      FUN_109e1896c(unaff_x23,(ulong)((long)register0x00000008 + -0x90) | 8,param_3,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      *(bool *)((long)register0x00000008 + -0x99) = *(char *)((long)unaff_x23 + 4) == '\x16';
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[7] = *(undefined **)((long)register0x00000008 + -0x88);
      ppuVar11[6] = puVar17;
      goto code_r0x000109e15af8;
    case 7:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      puVar17 = (undefined *)((long)register0x00000008 + -0x90);
      func_0x000109e18b18(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,ppuVar16,
                          (undefined1 *)((long)register0x00000008 + -0xc0));
      goto code_r0x000109e16a84;
    case 8:
    case 9:
      if (((*(byte *)((long)ppuVar16 + 0x3bd) & 1) == 0) &&
         (ppuVar11 = ppuVar16,
         FUN_109e9ebe4(ppuVar16,0x82,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                       &UNK_10f606b5d), ((ulong)ppuVar11 & 1) == 0)) {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      unaff_x22 = (undefined **)param_1[8];
      (**(code **)(*unaff_x22 + 8))(unaff_x22,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x22;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      puVar17 = unaff_x22[4];
      param_2 = (undefined **)plVar12[4];
      param_3 = (undefined **)(ulong)*(uint *)(param_1 + 7);
      func_0x000109e18c90();
      ppuVar15 = (undefined **)0x90;
      _malloc();
      ppuVar11 = ppuVar15;
      if (ppuVar15 != (undefined **)0x0) {
        ppuVar15[1] = (undefined *)0x0;
        *ppuVar15 = (undefined *)0x0;
        ppuVar15[3] = (undefined *)0x0;
        ppuVar15[2] = (undefined *)0x0;
        *ppuVar15 = (undefined *)(ppuVar16 + -6);
        puVar22 = ppuVar16[-5];
        ppuVar15[3] = puVar22;
        ppuVar15[4] = (undefined *)0x0;
        ppuVar16[-5] = (undefined *)ppuVar15;
        if (puVar22 != (undefined *)0x0) {
          *(undefined ***)(puVar22 + 0x10) = ppuVar15;
        }
        ppuVar11 = ppuVar15 + 6;
        ppuVar15[7] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar15[0x10] = (undefined *)0x0;
        ppuVar15[0xd] = (undefined *)0x0;
        ppuVar15[0xc] = (undefined *)0x0;
        ppuVar15[0xf] = (undefined *)0x0;
        ppuVar15[0xe] = (undefined *)0x0;
        ppuVar15[9] = (undefined *)0x0;
        ppuVar15[8] = (undefined *)0x0;
        ppuVar15[0xb] = (undefined *)0x0;
        ppuVar15[10] = (undefined *)0x0;
      }
      goto code_r0x000109e16110;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      unaff_x22 = (undefined **)param_1[8];
      (**(code **)(*unaff_x22 + 8))(unaff_x22,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x22;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      uVar5 = *(uint *)(unaff_x22[4] + 4);
      uVar14 = (ulong)uVar5;
      if ((uVar5 & 0xff) < 0xb) {
        lVar19 = plVar12[4];
        if (((10 < *(byte *)(lVar19 + 4)) || ((uVar5 & 0xf0) != 0 || unaff_x22[4][0xd] != '\x01'))
           || ((*(byte *)(lVar19 + 4) & 0xf0) != 0 || *(char *)(lVar19 + 0xd) != '\x01'))
        goto code_r0x000109e15ba4;
        func_0x000109e18df8(uVar14,(ulong)((long)register0x00000008 + -0x90) | 8);
        if ((uVar14 & 1) == 0) {
          iVar8 = *(int *)(lVar19 + 4);
          param_3 = ppuVar16;
          func_0x000109e18df8(iVar8,(undefined1 *)((long)register0x00000008 + -0x90));
          if (iVar8 != 0) goto code_r0x000109e17c20;
          param_3 = (undefined **)&UNK_10f606cb4;
          goto code_r0x000109e15bac;
        }
code_r0x000109e17c20:
        if (*(char *)(*(long *)(*(long *)((long)register0x00000008 + -0x88) + 0x20) + 4) !=
            *(char *)(*(long *)(*(long *)((long)register0x00000008 + -0x90) + 0x20) + 4)) {
          param_3 = (undefined **)&UNK_10f606cf1;
          goto code_r0x000109e15bac;
        }
        puVar17 = &DAT_10e05d7a0;
      }
      else {
code_r0x000109e15ba4:
        param_3 = (undefined **)&UNK_10f606c78;
code_r0x000109e15bac:
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
        puVar17 = &UNK_10e05d730;
      }
      if (*(int *)(param_1 + 7) - 0xbU < 2) {
        auVar23 = NEON_ext(*(undefined1 (*) [16])((long)register0x00000008 + -0x90),
                           *(undefined1 (*) [16])((long)register0x00000008 + -0x90),8,1);
        *(long *)((long)register0x00000008 + -0x88) = auVar23._8_8_;
        *(long *)((long)register0x00000008 + -0x90) = auVar23._0_8_;
      }
code_r0x000109e16a84:
      param_2 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = puVar17;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      puVar22 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[7] = *(undefined **)((long)register0x00000008 + -0x88);
      ppuVar11[6] = puVar22;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(ppuVar11 + 10) = uVar20;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      bVar7 = puVar17[4] == '\x16';
code_r0x000109e178c0:
      *(bool *)((long)register0x00000008 + -0x99) = bVar7;
      goto LAB_109e18348;
    case 0xe:
    case 0xf:
      unaff_x22 = (undefined **)param_1[8];
      (**(code **)(*unaff_x22 + 8))(unaff_x22,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x22;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      if ((unaff_x22[4] == &DAT_10e05d768) || ((undefined *)plVar12[4] == &DAT_10e05d768)) {
        puVar17 = &DAT_10f2f497c;
        if (*(int *)(param_1 + 7) != 0xe) {
          puVar17 = &DAT_10f416771;
        }
        *(undefined **)((long)register0x00000008 + -0x140) = puVar17;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6046b3);
      }
      else {
        uVar14 = (ulong)*(uint *)(unaff_x22[4] + 4);
        func_0x000109e18df8(uVar14,(ulong)((long)register0x00000008 + -0x90) | 8,ppuVar16);
        if ((uVar14 & 1) == 0) {
          iVar8 = *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x88) + 0x20) + 4);
          func_0x000109e18df8(iVar8,(undefined1 *)((long)register0x00000008 + -0x90),ppuVar16);
          if (iVar8 != 0) goto code_r0x000109e15ff8;
        }
        else {
code_r0x000109e15ff8:
          param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
          unaff_x22 = (undefined **)param_3[4];
          if (unaff_x22 == *(undefined ***)(*(long *)((long)register0x00000008 + -0x88) + 0x20)) {
            if ((*(char *)((long)unaff_x22 + 4) == '\x13') ||
               (*(char *)((long)*(undefined ***)(*(long *)((long)register0x00000008 + -0x88) + 0x20)
                         + 4) == '\x13')) {
              ppuVar11 = ppuVar16;
              FUN_109e9ebe4(ppuVar16,0x78,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                            &UNK_10f60475a);
              if ((int)ppuVar11 == 0) goto code_r0x000109e163d4;
              param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
              unaff_x22 = (undefined **)param_3[4];
            }
            ppuVar11 = unaff_x22;
            func_0x000109ec6720();
            if (((ulong)ppuVar11 & 1) == 0) {
              unaff_x23 = *(undefined ***)((long)register0x00000008 + -0x88);
              unaff_x24 = (undefined **)unaff_x23[4];
              ppuVar11 = unaff_x24;
              func_0x000109ec6720();
              if ((int)ppuVar11 == 0) {
                ppuVar11 = unaff_x22;
                func_0x000109ec6694();
                if ((((ulong)ppuVar11 & 1) == 0) &&
                   (ppuVar11 = unaff_x24, func_0x000109ec6694(), (int)ppuVar11 == 0)) {
                  ppuVar15 = (undefined **)
                             (ulong)*(uint *)(&UNK_10e060c6c + (ulong)*(uint *)(param_1 + 7) * 4);
                  ppuVar11 = ppuVar16;
                  FUN_109e190e8();
                  unaff_x21 = ppuVar11;
                  break;
                }
                FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,
                              &UNK_10f604797);
                goto code_r0x000109e163d4;
              }
            }
            FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f604776);
            goto code_r0x000109e163d4;
          }
        }
        puVar17 = &DAT_10f2f497c;
        if (*(int *)(param_1 + 7) != 0xe) {
          puVar17 = &DAT_10f416771;
        }
        *(undefined **)((long)register0x00000008 + -0x140) = puVar17;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f604731);
      }
code_r0x000109e163d4:
      *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      unaff_x21[1] = (undefined *)0x0;
      unaff_x21[2] = (undefined *)0x0;
      *(undefined4 *)(unaff_x21 + 3) = 3;
      unaff_x21[4] = &UNK_10e05d730;
      *unaff_x21 = (undefined *)&PTR_DAT_110b63f80;
      unaff_x21[0x15] = (undefined *)0x0;
      ppuVar11 = (undefined **)0xb;
      ppuVar15 = (undefined **)0x1;
      param_3 = (undefined **)0x1;
      func_0x000109ec6c94();
      unaff_x21[5] = (undefined *)0x0;
      unaff_x21[6] = (undefined *)0x0;
      unaff_x21[4] = (undefined *)ppuVar11;
      unaff_x23 = ppuVar11;
      goto code_r0x000109e18354;
    case 0x10:
    case 0x11:
    case 0x12:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      param_3 = (undefined **)(ulong)*(uint *)(param_1 + 7);
      puVar17 = (undefined *)((long)register0x00000008 + -0x90);
      FUN_109e19590(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,param_3,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      param_2 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
code_r0x000109e16110:
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      puVar22 = *(undefined **)((long)register0x00000008 + -0x90);
      puVar1 = *(undefined **)((long)register0x00000008 + -0x88);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = puVar17;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = puVar22;
      ppuVar11[7] = puVar1;
      bVar7 = true;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(ppuVar11 + 10) = uVar20;
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      if (*(char *)(*(long *)(puVar22 + 0x20) + 4) != '\x16') {
        bVar7 = *(char *)(*(long *)(puVar1 + 0x20) + 4) == '\x16';
      }
      *(bool *)((long)register0x00000008 + -0x99) = bVar7;
      goto LAB_109e18348;
    case 0x13:
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      if ((*(byte *)((long)ppuVar16 + 0x3bd) & 1) == 0) {
        param_3 = (undefined **)0x12c;
        ppuVar11 = ppuVar16;
        FUN_109e9ebe4(ppuVar16,0x82,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                      &UNK_10f606b5d);
        if (((ulong)ppuVar11 & 1) != 0) goto code_r0x000109e17160;
        bVar7 = true;
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      else {
code_r0x000109e17160:
        bVar7 = false;
      }
      uVar5 = *(uint *)((long)*(undefined ***)(*(long *)((long)register0x00000008 + -0x90) + 0x20) +
                       4);
      if ((uVar5 & 0xfe) == 0 || (uVar5 & 0xff) - 9 < 2) {
        unaff_x23 = (undefined **)&UNK_10e05d730;
        if (!bVar7) {
          unaff_x23 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x90) + 0x20);
        }
      }
      else {
        param_3 = (undefined **)&UNK_10f6047b9;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
        unaff_x23 = (undefined **)&UNK_10e05d730;
      }
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      ppuVar11[4] = (undefined *)unaff_x23;
      *(undefined4 *)(ppuVar11 + 5) = 0;
      ppuVar11[6] = puVar17;
      ppuVar11[7] = (undefined *)0x0;
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      uVar20 = 1;
      goto code_r0x000109e1727c;
    case 0x14:
      unaff_x24 = (undefined **)((long)register0x00000008 + -0xe0);
      unaff_x23 = (undefined **)((long)register0x00000008 + -0xd0);
      *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined ***)((long)register0x00000008 + -200) = unaff_x24;
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&UNK_10f6047db,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xe0);
      FUN_109e197bc(puVar10,ppuVar16,param_1,1,&UNK_10f6047df,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar10;
      if (*(undefined ***)((long)register0x00000008 + -0xe0) == unaff_x23) {
        FUN_109f658b0(ppuVar16,0x58);
        if (unaff_x21 != (undefined **)0x0) {
          unaff_x21[10] = (undefined *)0x0;
          unaff_x21[7] = (undefined *)0x0;
          unaff_x21[6] = (undefined *)0x0;
          unaff_x21[9] = (undefined *)0x0;
          unaff_x21[8] = (undefined *)0x0;
          unaff_x21[3] = (undefined *)0x0;
          unaff_x21[2] = (undefined *)0x0;
          unaff_x21[5] = (undefined *)0x0;
          unaff_x21[4] = (undefined *)0x0;
          unaff_x21[1] = (undefined *)0x0;
          *unaff_x21 = (undefined *)0x0;
        }
        param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
        ppuVar15 = (undefined **)0x94;
        ppuVar11 = unaff_x21;
        func_0x000109ea9448();
      }
      else {
        unaff_x20 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,&DAT_10e05d7a0,&UNK_10f6047e3,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        ppuVar11 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar11 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        unaff_x22 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x68);
        if (unaff_x22 != (undefined **)0x0) {
          unaff_x22[0xc] = (undefined *)0x0;
          unaff_x22[9] = (undefined *)0x0;
          unaff_x22[8] = (undefined *)0x0;
          unaff_x22[0xb] = (undefined *)0x0;
          unaff_x22[10] = (undefined *)0x0;
          unaff_x22[5] = (undefined *)0x0;
          unaff_x22[4] = (undefined *)0x0;
          unaff_x22[7] = (undefined *)0x0;
          unaff_x22[6] = (undefined *)0x0;
          unaff_x22[1] = (undefined *)0x0;
          *unaff_x22 = (undefined *)0x0;
          unaff_x22[3] = (undefined *)0x0;
          unaff_x22[2] = (undefined *)0x0;
        }
        puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
        unaff_x22[2] = (undefined *)0x0;
        *(undefined4 *)(unaff_x22 + 3) = 0xc;
        *unaff_x22 = (undefined *)&PTR_FUN_110b639a8;
        unaff_x22[4] = puVar17;
        ppuVar15 = unaff_x22 + 7;
        *ppuVar15 = (undefined *)0x0;
        unaff_x22[5] = (undefined *)ppuVar15;
        unaff_x22[8] = (undefined *)(unaff_x22 + 5);
        unaff_x25 = unaff_x22 + 0xb;
        *unaff_x25 = (undefined *)0x0;
        unaff_x22[9] = (undefined *)unaff_x25;
        unaff_x22[6] = (undefined *)0x0;
        unaff_x22[10] = (undefined *)0x0;
        unaff_x22[0xc] = (undefined *)(unaff_x22 + 9);
        ppuVar11 = unaff_x22 + 1;
        *ppuVar11 = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        unaff_x22[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        if (*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x23) {
          puVar13 = (undefined8 *)unaff_x22[8];
          *puVar13 = *(undefined ***)((long)register0x00000008 + -0xe0);
          *(undefined8 **)(*(long *)((long)register0x00000008 + -0xe0) + 8) = puVar13;
          puVar13 = *(undefined8 **)((long)register0x00000008 + -200);
          unaff_x22[8] = (undefined *)puVar13;
          *puVar13 = ppuVar15;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x23;
          *(undefined1 **)((long)register0x00000008 + -200) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        unaff_x26 = &PTR_DAT_110b64048;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 != (undefined **)0x0;
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)ppuVar15;
        ppuVar15 = (undefined **)0x0;
        if (bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)unaff_x22[8];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        unaff_x22[8] = (undefined *)ppuVar15;
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar15 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar15[6] = (undefined *)0x0;
          ppuVar15[3] = (undefined *)0x0;
          ppuVar15[2] = (undefined *)0x0;
          ppuVar15[5] = (undefined *)0x0;
          ppuVar15[4] = (undefined *)0x0;
          ppuVar15[1] = (undefined *)0x0;
          *ppuVar15 = (undefined *)0x0;
        }
        unaff_x24 = ppuVar16;
        FUN_109f658b0(ppuVar16,0xb0);
        if (unaff_x24 != (undefined **)0x0) {
          unaff_x24[0x13] = (undefined *)0x0;
          unaff_x24[0x12] = (undefined *)0x0;
          unaff_x24[0x15] = (undefined *)0x0;
          unaff_x24[0x14] = (undefined *)0x0;
          unaff_x24[0xf] = (undefined *)0x0;
          unaff_x24[0xe] = (undefined *)0x0;
          unaff_x24[0x11] = (undefined *)0x0;
          unaff_x24[0x10] = (undefined *)0x0;
          unaff_x24[0xb] = (undefined *)0x0;
          unaff_x24[10] = (undefined *)0x0;
          unaff_x24[0xd] = (undefined *)0x0;
          unaff_x24[0xc] = (undefined *)0x0;
          unaff_x24[7] = (undefined *)0x0;
          unaff_x24[6] = (undefined *)0x0;
          unaff_x24[9] = (undefined *)0x0;
          unaff_x24[8] = (undefined *)0x0;
          unaff_x24[3] = (undefined *)0x0;
          unaff_x24[2] = (undefined *)0x0;
          unaff_x24[5] = (undefined *)0x0;
          unaff_x24[4] = (undefined *)0x0;
          unaff_x24[1] = (undefined *)0x0;
          *unaff_x24 = (undefined *)0x0;
        }
        unaff_x27 = (undefined **)(ulong)(ppuVar15 == (undefined **)0x0);
        func_0x000109ea9b70(unaff_x24,0,1);
        param_3 = unaff_x24;
        func_0x000109ea9180(ppuVar15,ppuVar11);
        unaff_x23 = ppuVar15 + 1;
        *unaff_x23 = (undefined *)unaff_x25;
        ppuVar11 = (undefined **)0x0;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar11 = unaff_x23;
        }
        puVar13 = (undefined8 *)unaff_x22[0xc];
        ppuVar15[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        unaff_x22[0xc] = (undefined *)ppuVar11;
        ppuVar15 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
code_r0x000109e181d4:
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        unaff_x21 = ppuVar11;
      }
      break;
    case 0x15:
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&UNK_10f6047db,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      param_3 = param_1;
      FUN_109e197bc(param_2,ppuVar16,param_1,1,&UNK_10f6047df,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x88) = param_2;
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23 = (undefined **)&DAT_10e05d7a0;
      ppuVar11[4] = &DAT_10e05d7a0;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = puVar17;
      ppuVar11[7] = (undefined *)param_2;
      unaff_x22 = param_2;
code_r0x000109e17248:
      uVar14 = 1L << (uVar14 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      uVar20 = 4;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
code_r0x000109e17264:
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
code_r0x000109e1727c:
      *(undefined1 *)(ppuVar11 + 10) = uVar20;
      unaff_x21 = ppuVar11;
      goto code_r0x000109e18354;
    case 0x16:
      unaff_x25 = (undefined **)((long)register0x00000008 + -0xd0);
      *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined1 **)((long)register0x00000008 + -200) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&UNK_10f6047db,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xe0);
      FUN_109e197bc(puVar10,ppuVar16,param_1,1,&UNK_10f6047df,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined1 **)((long)register0x00000008 + -0x88) = puVar10;
      if (*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x25) {
        unaff_x20 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,&DAT_10e05d7a0,&UNK_10f6047eb,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        ppuVar11 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar11 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        unaff_x22 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x68);
        if (unaff_x22 != (undefined **)0x0) {
          unaff_x22[0xc] = (undefined *)0x0;
          unaff_x22[9] = (undefined *)0x0;
          unaff_x22[8] = (undefined *)0x0;
          unaff_x22[0xb] = (undefined *)0x0;
          unaff_x22[10] = (undefined *)0x0;
          unaff_x22[5] = (undefined *)0x0;
          unaff_x22[4] = (undefined *)0x0;
          unaff_x22[7] = (undefined *)0x0;
          unaff_x22[6] = (undefined *)0x0;
          unaff_x22[1] = (undefined *)0x0;
          *unaff_x22 = (undefined *)0x0;
          unaff_x22[3] = (undefined *)0x0;
          unaff_x22[2] = (undefined *)0x0;
        }
        puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
        unaff_x22[2] = (undefined *)0x0;
        *(undefined4 *)(unaff_x22 + 3) = 0xc;
        *unaff_x22 = (undefined *)&PTR_FUN_110b639a8;
        unaff_x28 = unaff_x22 + 7;
        *unaff_x28 = (undefined *)0x0;
        unaff_x22[5] = (undefined *)unaff_x28;
        unaff_x22[4] = puVar17;
        unaff_x22[6] = (undefined *)0x0;
        unaff_x22[8] = (undefined *)(unaff_x22 + 5);
        unaff_x27 = unaff_x22 + 0xb;
        *unaff_x27 = (undefined *)0x0;
        unaff_x22[9] = (undefined *)unaff_x27;
        unaff_x22[10] = (undefined *)0x0;
        unaff_x22[0xc] = (undefined *)(unaff_x22 + 9);
        ppuVar11 = unaff_x22 + 1;
        *ppuVar11 = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        unaff_x22[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar15 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar15[6] = (undefined *)0x0;
          ppuVar15[3] = (undefined *)0x0;
          ppuVar15[2] = (undefined *)0x0;
          ppuVar15[5] = (undefined *)0x0;
          ppuVar15[4] = (undefined *)0x0;
          ppuVar15[1] = (undefined *)0x0;
          *ppuVar15 = (undefined *)0x0;
        }
        unaff_x24 = ppuVar16;
        FUN_109f658b0(ppuVar16,0xb0);
        if (unaff_x24 != (undefined **)0x0) {
          unaff_x24[0x13] = (undefined *)0x0;
          unaff_x24[0x12] = (undefined *)0x0;
          unaff_x24[0x15] = (undefined *)0x0;
          unaff_x24[0x14] = (undefined *)0x0;
          unaff_x24[0xf] = (undefined *)0x0;
          unaff_x24[0xe] = (undefined *)0x0;
          unaff_x24[0x11] = (undefined *)0x0;
          unaff_x24[0x10] = (undefined *)0x0;
          unaff_x24[0xb] = (undefined *)0x0;
          unaff_x24[10] = (undefined *)0x0;
          unaff_x24[0xd] = (undefined *)0x0;
          unaff_x24[0xc] = (undefined *)0x0;
          unaff_x24[7] = (undefined *)0x0;
          unaff_x24[6] = (undefined *)0x0;
          unaff_x24[9] = (undefined *)0x0;
          unaff_x24[8] = (undefined *)0x0;
          unaff_x24[3] = (undefined *)0x0;
          unaff_x24[2] = (undefined *)0x0;
          unaff_x24[5] = (undefined *)0x0;
          unaff_x24[4] = (undefined *)0x0;
          unaff_x24[1] = (undefined *)0x0;
          *unaff_x24 = (undefined *)0x0;
        }
        unaff_x26 = (undefined **)(ulong)(ppuVar15 == (undefined **)0x0);
        func_0x000109ea9b70(unaff_x24,1,1);
        func_0x000109ea9180(ppuVar15,ppuVar11,unaff_x24);
        ppuVar15[1] = (undefined *)unaff_x28;
        ppuVar11 = (undefined **)0x0;
        if (ppuVar15 != (undefined **)0x0) {
          ppuVar11 = ppuVar15 + 1;
        }
        puVar13 = (undefined8 *)unaff_x22[8];
        ppuVar15[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        unaff_x22[8] = (undefined *)ppuVar11;
        if (*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x25) {
          puVar13 = (undefined8 *)unaff_x22[0xc];
          *puVar13 = *(undefined ***)((long)register0x00000008 + -0xe0);
          *(undefined8 **)(*(long *)((long)register0x00000008 + -0xe0) + 8) = puVar13;
          puVar13 = *(undefined8 **)((long)register0x00000008 + -200);
          unaff_x22[0xc] = (undefined *)puVar13;
          *puVar13 = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
          *(undefined1 **)((long)register0x00000008 + -200) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 == (undefined **)0x0;
        unaff_x23 = (undefined **)(ulong)bVar7;
        param_3 = *(undefined ***)((long)register0x00000008 + -0x88);
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)unaff_x27;
        ppuVar15 = (undefined **)0x0;
        if (!bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)unaff_x22[0xc];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        unaff_x22[0xc] = (undefined *)ppuVar15;
        ppuVar15 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        goto code_r0x000109e181d4;
      }
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      param_3 = *(undefined ***)((long)register0x00000008 + -0x90);
      ppuVar15 = (undefined **)0x96;
      ppuVar11 = unaff_x21;
      func_0x000109ea9448();
      break;
    case 0x17:
      param_3 = param_1;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&DAT_10f3dd801,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = param_2;
      ppuVar15 = (undefined **)0x58;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[10] = (undefined *)0x0;
        ppuVar11[7] = (undefined *)0x0;
        ppuVar11[6] = (undefined *)0x0;
        ppuVar11[9] = (undefined *)0x0;
        ppuVar11[8] = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        ppuVar11[5] = (undefined *)0x0;
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
      }
      uVar14 = (ulong)*(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + uVar14 * 4);
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 4;
      *ppuVar11 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23 = (undefined **)&DAT_10e05d7a0;
      ppuVar11[4] = &DAT_10e05d7a0;
      *(undefined4 *)(ppuVar11 + 5) = uVar2;
      ppuVar11[6] = (undefined *)param_2;
      ppuVar11[7] = (undefined *)0x0;
      unaff_x22 = param_2;
code_r0x000109e15af8:
      uVar14 = 1L << (uVar14 & 0x3f);
      ppuVar11[8] = (undefined *)0x0;
      ppuVar11[9] = (undefined *)0x0;
      uVar20 = 4;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      goto code_r0x000109e17264;
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1c:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      unaff_x24 = (undefined **)plVar12[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730))
      {
code_r0x000109e16be4:
        unaff_x25 = (undefined **)0x1;
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
code_r0x000109e16be8:
        ppuVar15 = (undefined **)0x28;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 0x16;
        *ppuVar11 = (undefined *)&PTR_DAT_110b63eb8;
        goto code_r0x000109e16c20;
      }
      unaff_x25 = (undefined **)((long)register0x00000008 + -0x90);
      FUN_109e1896c(unaff_x25,(ulong)((long)register0x00000008 + -0x90) | 8,
                    *(int *)(param_1 + 7) == 0x18,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = unaff_x25;
        *(undefined ***)((long)register0x00000008 + -0x138) = unaff_x24;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x1a:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      unaff_x24 = (undefined **)plVar12[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730))
      goto code_r0x000109e16be4;
      unaff_x25 = (undefined **)((long)register0x00000008 + -0x90);
      func_0x000109e18b18(unaff_x25,(ulong)((long)register0x00000008 + -0x90) | 8,ppuVar16,
                          (undefined1 *)((long)register0x00000008 + -0xc0));
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = unaff_x25;
        *(undefined ***)((long)register0x00000008 + -0x138) = unaff_x24;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x1d:
    case 0x1e:
      unaff_x24 = (undefined **)0x1;
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      puVar17 = (undefined *)plVar12[4];
      if ((puVar17 == &UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730)) {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
        goto code_r0x000109e16be8;
      }
      func_0x000109e18c90(puVar17,(undefined *)plVar9[4],*(undefined4 *)(param_1 + 7),ppuVar16,
                          (undefined1 *)((long)register0x00000008 + -0xc0));
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = puVar17;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x1f:
    case 0x20:
    case 0x21:
      (**(code **)(*(long *)param_1[8] + 0x18))(param_1[8],1);
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      plVar9 = (long *)param_1[9];
      (**(code **)(*plVar9 + 8))(plVar9,param_2);
      *(long **)((long)register0x00000008 + -0x88) = plVar9;
      unaff_x24 = (undefined **)plVar12[4];
      if ((unaff_x24 == (undefined **)&UNK_10e05d730) || ((undefined *)plVar9[4] == &UNK_10e05d730))
      goto code_r0x000109e16be4;
      unaff_x25 = (undefined **)((long)register0x00000008 + -0x90);
      FUN_109e19590(unaff_x25,(ulong)((long)register0x00000008 + -0x90) | 8,
                    *(undefined4 *)(param_1 + 7),ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      if (unaff_x25 != unaff_x24) {
        if ((*(byte *)((long)unaff_x25 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x25 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x25[3]);
        }
        if ((*(byte *)((long)unaff_x24 + 0xc) >> 1 & 1) == 0) {
          FUN_109eca058();
        }
        else {
          unaff_x24 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x24[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = unaff_x25;
        *(undefined ***)((long)register0x00000008 + -0x138) = unaff_x24;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f6047f2);
        unaff_x25 = (undefined **)&UNK_10e05d730;
      }
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = (undefined *)unaff_x25;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
      goto code_r0x000109e18344;
    case 0x22:
      ppuVar11 = param_2;
      FUN_109e197bc(param_2,ppuVar16,param_1,0,&DAT_10f3507c8,
                    (undefined1 *)((long)register0x00000008 + -0x99));
      *(undefined ***)((long)register0x00000008 + -0x90) = ppuVar11;
      unaff_x25 = (undefined **)((long)register0x00000008 + -0xd0);
      *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined1 **)((long)register0x00000008 + -200) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      *(undefined1 **)((long)register0x00000008 + -0x128) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined1 **)((long)register0x00000008 + -0x100) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xe8) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,(undefined1 *)((long)register0x00000008 + -0xe0),ppuVar16)
      ;
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      plVar12 = (long *)param_1[10];
      (**(code **)(*plVar12 + 8))
                (plVar12,(undefined1 *)((long)register0x00000008 + -0x100),ppuVar16);
      *(long **)((long)register0x00000008 + -0x80) = plVar12;
      uVar14 = (ulong)*(uint *)(*(long *)(*(long *)((ulong)((long)register0x00000008 + -0x90) | 8) +
                                         0x20) + 4);
      func_0x000109e18df8(uVar14,(undefined1 *)((long)register0x00000008 + -0x80),ppuVar16);
      if ((uVar14 & 1) == 0) {
        iVar8 = *(int *)(*(long *)(*(long *)((long)register0x00000008 + -0x80) + 0x20) + 4);
        func_0x000109e18df8(iVar8,(long *)((ulong)((long)register0x00000008 + -0x90) | 8),ppuVar16);
        if (iVar8 != 0) goto code_r0x000109e17478;
code_r0x000109e1748c:
        puVar17 = param_1[9];
        *(undefined8 *)((long)register0x00000008 + -0x108) = *(undefined8 *)(puVar17 + 8);
        *(undefined4 *)((long)register0x00000008 + -0x110) = *(undefined4 *)(puVar17 + 0x10);
        uVar6 = *(undefined8 *)(puVar17 + 0x14);
        *(undefined8 *)((long)register0x00000008 + -0x118) = *(undefined8 *)(puVar17 + 0x1c);
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar6;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0x120),ppuVar16,&UNK_10f604818);
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
        unaff_x22 = (undefined **)&UNK_10e05d730;
      }
      else {
code_r0x000109e17478:
        unaff_x22 = *(undefined ***)(*(long *)((long)register0x00000008 + -0x88) + 0x20);
        if (unaff_x22 != *(undefined ***)(*(long *)((long)register0x00000008 + -0x80) + 0x20))
        goto code_r0x000109e1748c;
      }
      if ((*(char *)((long)unaff_x22 + 4) == '\x13') &&
         (ppuVar11 = ppuVar16,
         FUN_109e9ebe4(ppuVar16,0x78,300,(undefined1 *)((long)register0x00000008 + -0xc0),
                       &UNK_10f60485a), ((ulong)ppuVar11 & 1) == 0)) {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      ppuVar11 = unaff_x22;
      func_0x000109ec6694();
      if (((int)ppuVar11 != 0) &&
         ((*(char *)((long)ppuVar16 + 0x2f7) != '\x01' ||
          ((*(byte *)((long)unaff_x22 + 4) | 2) != 0xf)))) {
        if ((*(byte *)((long)unaff_x22 + 0xc) >> 1 & 1) == 0) {
          ppuVar11 = unaff_x22;
          FUN_109eca058();
        }
        else {
          ppuVar11 = (undefined **)(&UNK_10e05bf38 + (long)unaff_x22[3]);
        }
        *(undefined ***)((long)register0x00000008 + -0x140) = ppuVar11;
        FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16,&UNK_10f604894);
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      ppuVar11 = *(undefined ***)((long)register0x00000008 + -0x90);
      param_3 = (undefined **)0x0;
      ppuVar15 = ppuVar16;
      (**(code **)(*ppuVar11 + 0x30))();
      if (((*(undefined ***)((long)register0x00000008 + -0xe0) != unaff_x25) ||
          (*(long *)((long)register0x00000008 + -0x100) !=
           *(long *)((long)register0x00000008 + -0x128))) || (ppuVar11 == (undefined **)0x0)) {
        if (*(char *)((long)unaff_x22 + 4) == '\x13') {
          lVar19 = *(long *)((long)register0x00000008 + -0x88);
          if (((lVar19 != 0) && (*(int *)(lVar19 + 0x18) == 2)) && (*(long *)(lVar19 + 0x28) != 0))
          {
            *(int *)(*(long *)(lVar19 + 0x28) + 0x60) =
                 *(int *)(*(long *)(lVar19 + 0x20) + 0x10) + -1;
          }
          lVar19 = *(long *)((long)register0x00000008 + -0x80);
          if (((lVar19 != 0) && (*(int *)(lVar19 + 0x18) == 2)) && (*(long *)(lVar19 + 0x28) != 0))
          {
            *(int *)(*(long *)(lVar19 + 0x28) + 0x60) =
                 *(int *)(*(long *)(lVar19 + 0x20) + 0x10) + -1;
          }
        }
        unaff_x20 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x90);
        if (unaff_x20 != (undefined **)0x0) {
          unaff_x20[0xf] = (undefined *)0x0;
          unaff_x20[0xe] = (undefined *)0x0;
          unaff_x20[0x11] = (undefined *)0x0;
          unaff_x20[0x10] = (undefined *)0x0;
          unaff_x20[0xb] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          unaff_x20[0xd] = (undefined *)0x0;
          unaff_x20[0xc] = (undefined *)0x0;
          unaff_x20[7] = (undefined *)0x0;
          unaff_x20[6] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[3] = (undefined *)0x0;
          unaff_x20[2] = (undefined *)0x0;
          unaff_x20[5] = (undefined *)0x0;
          unaff_x20[4] = (undefined *)0x0;
          unaff_x20[1] = (undefined *)0x0;
          *unaff_x20 = (undefined *)0x0;
        }
        FUN_109eaba7c(unaff_x20,unaff_x22,&UNK_10f6048cf,0xb);
        unaff_x20[1] = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        ppuVar11 = (undefined **)0x0;
        if (unaff_x20 != (undefined **)0x0) {
          ppuVar11 = unaff_x20 + 1;
        }
        unaff_x20[2] = (undefined *)puVar13;
        *puVar13 = ppuVar11;
        param_2[3] = (undefined *)ppuVar11;
        unaff_x22 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x68);
        if (unaff_x22 != (undefined **)0x0) {
          unaff_x22[0xc] = (undefined *)0x0;
          unaff_x22[9] = (undefined *)0x0;
          unaff_x22[8] = (undefined *)0x0;
          unaff_x22[0xb] = (undefined *)0x0;
          unaff_x22[10] = (undefined *)0x0;
          unaff_x22[5] = (undefined *)0x0;
          unaff_x22[4] = (undefined *)0x0;
          unaff_x22[7] = (undefined *)0x0;
          unaff_x22[6] = (undefined *)0x0;
          unaff_x22[1] = (undefined *)0x0;
          *unaff_x22 = (undefined *)0x0;
          unaff_x22[3] = (undefined *)0x0;
          unaff_x22[2] = (undefined *)0x0;
        }
        puVar17 = *(undefined **)((long)register0x00000008 + -0x90);
        unaff_x22[2] = (undefined *)0x0;
        *(undefined4 *)(unaff_x22 + 3) = 0xc;
        *unaff_x22 = (undefined *)&PTR_FUN_110b639a8;
        unaff_x22[4] = puVar17;
        unaff_x26 = unaff_x22 + 7;
        *unaff_x26 = (undefined *)0x0;
        ppuVar11 = unaff_x22 + 5;
        ppuVar15 = unaff_x22 + 6;
        *ppuVar15 = (undefined *)0x0;
        unaff_x22[8] = (undefined *)ppuVar11;
        unaff_x27 = unaff_x22 + 0xb;
        *unaff_x27 = (undefined *)0x0;
        unaff_x28 = unaff_x22 + 9;
        *unaff_x28 = (undefined *)unaff_x27;
        unaff_x24 = unaff_x22 + 10;
        *unaff_x24 = (undefined *)0x0;
        unaff_x22[0xc] = (undefined *)unaff_x28;
        ppuVar21 = unaff_x22 + 1;
        *ppuVar21 = (undefined *)(param_2 + 2);
        puVar13 = (undefined8 *)param_2[3];
        unaff_x22[2] = (undefined *)puVar13;
        *puVar13 = ppuVar21;
        param_2[3] = (undefined *)ppuVar21;
        ppuVar21 = *(undefined ***)((long)register0x00000008 + -0xe0);
        if (ppuVar21 == unaff_x25) {
          unaff_x22[5] = (undefined *)unaff_x26;
          *ppuVar15 = (undefined *)0x0;
          unaff_x22[7] = (undefined *)0x0;
          unaff_x22[8] = (undefined *)ppuVar11;
        }
        else {
          unaff_x22[5] = (undefined *)ppuVar21;
          *ppuVar15 = (undefined *)0x0;
          unaff_x22[7] = (undefined *)0x0;
          unaff_x22[8] = *(undefined **)((long)register0x00000008 + -200);
          ppuVar21[1] = (undefined *)ppuVar11;
          *(undefined ***)unaff_x22[8] = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          *(undefined ***)((long)register0x00000008 + -0xe0) = unaff_x25;
          *(undefined1 **)((long)register0x00000008 + -200) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        unaff_x25 = &PTR_DAT_110b64048;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 != (undefined **)0x0;
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)unaff_x26;
        ppuVar15 = (undefined **)0x0;
        if (bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)unaff_x22[8];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        unaff_x22[8] = (undefined *)ppuVar15;
        puVar17 = *(undefined **)((long)register0x00000008 + -0x100);
        puVar22 = *(undefined **)((long)register0x00000008 + -0x128);
        if (puVar17 == puVar22) {
          unaff_x22[9] = (undefined *)unaff_x27;
          *unaff_x24 = (undefined *)0x0;
          unaff_x22[0xb] = (undefined *)0x0;
          unaff_x22[0xc] = (undefined *)unaff_x28;
        }
        else {
          unaff_x22[9] = puVar17;
          *unaff_x24 = (undefined *)0x0;
          unaff_x22[0xb] = (undefined *)0x0;
          unaff_x22[0xc] = *(undefined **)((long)register0x00000008 + -0xe8);
          *(undefined ***)(puVar17 + 8) = unaff_x28;
          *(undefined ***)unaff_x22[0xc] = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined **)((long)register0x00000008 + -0x100) = puVar22;
          *(undefined1 **)((long)register0x00000008 + -0xe8) =
               (undefined1 *)((long)register0x00000008 + -0x100);
        }
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x30);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x20;
        ppuVar11[4] = unaff_x20[4];
        ppuVar11 = ppuVar16;
        FUN_109f658b0(ppuVar16,0x38);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[6] = (undefined *)0x0;
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        bVar7 = ppuVar11 == (undefined **)0x0;
        unaff_x23 = (undefined **)(ulong)bVar7;
        param_3 = *(undefined ***)((long)register0x00000008 + -0x80);
        func_0x000109ea9180();
        ppuVar11[1] = (undefined *)unaff_x27;
        ppuVar15 = (undefined **)0x0;
        if (!bVar7) {
          ppuVar15 = ppuVar11 + 1;
        }
        puVar13 = (undefined8 *)unaff_x22[0xc];
        ppuVar11[2] = (undefined *)puVar13;
        *puVar13 = ppuVar15;
        unaff_x22[0xc] = (undefined *)ppuVar15;
        ppuVar15 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        goto code_r0x000109e181d4;
      }
      lVar19 = 8;
      if (*(char *)(ppuVar11 + 5) == '\0') {
        lVar19 = 0x10;
      }
      unaff_x21 = *(undefined ***)((long)register0x00000008 + lVar19 + -0x90);
      break;
    case 0x23:
    case 0x24:
      puVar17 = &UNK_10f6048df;
      if (iVar8 != 0x23) {
        puVar17 = &UNK_10f6048f7;
      }
      param_1[0x10] = puVar17;
      plVar12 = (long *)param_1[8];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x90) = plVar12;
      ppuVar11 = ppuVar16;
      FUN_109e19918(ppuVar16,*(undefined4 *)(plVar12[4] + 4));
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
      puVar17 = (undefined *)((long)register0x00000008 + -0x90);
      FUN_109e1896c(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,0,ppuVar16,
                    (undefined1 *)((long)register0x00000008 + -0xc0));
      unaff_x23 = ppuVar16;
      FUN_109f658b0(ppuVar16,0x58);
      if (unaff_x23 != (undefined **)0x0) {
        unaff_x23[10] = (undefined *)0x0;
        unaff_x23[7] = (undefined *)0x0;
        unaff_x23[6] = (undefined *)0x0;
        unaff_x23[9] = (undefined *)0x0;
        unaff_x23[8] = (undefined *)0x0;
        unaff_x23[3] = (undefined *)0x0;
        unaff_x23[2] = (undefined *)0x0;
        unaff_x23[5] = (undefined *)0x0;
        unaff_x23[4] = (undefined *)0x0;
        unaff_x23[1] = (undefined *)0x0;
        *unaff_x23 = (undefined *)0x0;
      }
      uVar5 = *(uint *)(param_1 + 7);
      uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
      unaff_x23[1] = (undefined *)0x0;
      unaff_x23[2] = (undefined *)0x0;
      uVar20 = 4;
      *(undefined4 *)(unaff_x23 + 3) = 4;
      *unaff_x23 = (undefined *)&PTR_FUN_110b64370;
      unaff_x23[4] = puVar17;
      *(undefined4 *)(unaff_x23 + 5) = uVar2;
      plVar12 = *(long **)((long)register0x00000008 + -0x90);
      unaff_x23[7] = *(undefined **)((long)register0x00000008 + -0x88);
      unaff_x23[6] = (undefined *)plVar12;
      uVar14 = 1L << ((ulong)uVar5 & 0x3f);
      unaff_x23[8] = (undefined *)0x0;
      unaff_x23[9] = (undefined *)0x0;
      if ((uVar14 & 0x7bff77fff8) != 0) {
        uVar20 = 2;
      }
      if ((uVar14 & 0x3fff8400880007) != 0) {
        uVar20 = 1;
      }
      *(undefined1 *)(unaff_x23 + 10) = uVar20;
      unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
      (**(code **)(*plVar12 + 0x20))(plVar12,ppuVar16,0);
      puVar17 = param_1[8];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      *(undefined1 **)((long)register0x00000008 + -0x140) =
           (undefined1 *)((long)register0x00000008 + -0xe0);
      ppuVar15 = ppuVar16;
      param_3 = unaff_x24;
      FUN_109e1847c();
      ppuVar11 = param_2;
      param_2 = ppuVar15;
code_r0x000109e18344:
      *(char *)((long)register0x00000008 + -0x99) = (char)ppuVar11;
LAB_109e18348:
      unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x98);
      unaff_x20 = param_1;
      ppuVar15 = param_2;
      break;
    case 0x25:
    case 0x26:
      puVar17 = &UNK_10f60490f;
      if (iVar8 != 0x25) {
        puVar17 = &UNK_10f604928;
      }
      param_1[0x10] = puVar17;
      unaff_x22 = (undefined **)param_1[8];
      (**(code **)(*unaff_x22 + 8))(unaff_x22,param_2);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x22;
      ppuVar11 = ppuVar16;
      FUN_109e19918(ppuVar16,*(undefined4 *)(unaff_x22[4] + 4));
      *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
      if (unaff_x22[4][4] == '\x16') {
        *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      }
      else {
        cVar3 = ppuVar11[4][4];
        *(bool *)((long)register0x00000008 + -0x99) = cVar3 == '\x16';
        if (cVar3 != '\x16') {
          puVar17 = (undefined *)((long)register0x00000008 + -0x90);
          FUN_109e1896c(puVar17,(ulong)((long)register0x00000008 + -0x90) | 8,0,ppuVar16,
                        (undefined1 *)((long)register0x00000008 + -0xc0));
          unaff_x22 = ppuVar16;
          FUN_109f658b0(ppuVar16,0x58);
          if (unaff_x22 != (undefined **)0x0) {
            unaff_x22[10] = (undefined *)0x0;
            unaff_x22[7] = (undefined *)0x0;
            unaff_x22[6] = (undefined *)0x0;
            unaff_x22[9] = (undefined *)0x0;
            unaff_x22[8] = (undefined *)0x0;
            unaff_x22[3] = (undefined *)0x0;
            unaff_x22[2] = (undefined *)0x0;
            unaff_x22[5] = (undefined *)0x0;
            unaff_x22[4] = (undefined *)0x0;
            unaff_x22[1] = (undefined *)0x0;
            *unaff_x22 = (undefined *)0x0;
          }
          uVar5 = *(uint *)(param_1 + 7);
          uVar2 = *(undefined4 *)(&UNK_10e060c6c + (ulong)uVar5 * 4);
          unaff_x22[1] = (undefined *)0x0;
          unaff_x22[2] = (undefined *)0x0;
          uVar20 = 4;
          *(undefined4 *)(unaff_x22 + 3) = 4;
          *unaff_x22 = (undefined *)&PTR_FUN_110b64370;
          unaff_x22[4] = puVar17;
          *(undefined4 *)(unaff_x22 + 5) = uVar2;
          unaff_x23 = *(undefined ***)((long)register0x00000008 + -0x90);
          unaff_x22[7] = *(undefined **)((long)register0x00000008 + -0x88);
          unaff_x22[6] = (undefined *)unaff_x23;
          uVar14 = 1L << ((ulong)uVar5 & 0x3f);
          unaff_x22[8] = (undefined *)0x0;
          unaff_x22[9] = (undefined *)0x0;
          if ((uVar14 & 0x7bff77fff8) != 0) {
            uVar20 = 2;
          }
          if ((uVar14 & 0x3fff8400880007) != 0) {
            uVar20 = 1;
          }
          *(undefined1 *)(unaff_x22 + 10) = uVar20;
          ppuVar11 = unaff_x23;
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23,ppuVar16,0);
          ppuVar15 = param_2;
          FUN_109e199d0(param_2,ppuVar11);
          *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar15;
          unaff_x24 = *(undefined ***)(param_1[8] + 0x80);
          (**(code **)(*unaff_x23 + 0x20))(unaff_x23,ppuVar16,0);
          puVar17 = param_1[8];
          *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
          *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
          uVar6 = *(undefined8 *)(puVar17 + 0x14);
          *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
          *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
          *(undefined1 **)((long)register0x00000008 + -0x140) =
               (undefined1 *)((long)register0x00000008 + -0xe0);
          ppuVar15 = ppuVar16;
          param_3 = unaff_x24;
          FUN_109e1847c();
          ppuVar11 = param_2;
          param_2 = ppuVar15;
          goto code_r0x000109e18344;
        }
      }
      ppuVar15 = (undefined **)0x28;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
      }
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 0x16;
      *ppuVar11 = (undefined *)&PTR_DAT_110b63eb8;
code_r0x000109e16c20:
      ppuVar11[4] = &UNK_10e05d730;
      unaff_x21 = ppuVar11;
      unaff_x23 = (undefined **)&UNK_10e05d730;
      goto code_r0x000109e18354;
    case 0x27:
      func_0x000109ea8ce4();
      ppuVar15 = param_2;
      unaff_x21 = ppuVar11;
      break;
    case 0x28:
      plVar12 = (long *)param_1[8];
      puVar17 = param_1[9];
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(puVar17 + 8);
      *(undefined4 *)((long)register0x00000008 + -0xd0) = *(undefined4 *)(puVar17 + 0x10);
      uVar6 = *(undefined8 *)(puVar17 + 0x14);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)(puVar17 + 0x1c);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
      (**(code **)(*plVar12 + 0x18))(plVar12,1);
      unaff_x22 = (undefined **)param_1[8];
      (**(code **)(*unaff_x22 + 8))(unaff_x22,param_2,ppuVar16);
      *(undefined ***)((long)register0x00000008 + -0x90) = unaff_x22;
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 8))(plVar12,param_2,ppuVar16);
      *(long **)((long)register0x00000008 + -0x88) = plVar12;
      ppuVar11 = ppuVar16;
      param_2 = ppuVar16;
      param_3 = unaff_x22;
      FUN_109e0ef68();
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      if (ppuVar11[4][4] == '\x16') goto code_r0x000109e178bc;
    default:
      goto LAB_109e18348;
    case 0x2b:
      puVar13 = *(undefined8 **)(ppuVar16[9] + 8);
      FUN_109f61800(puVar13,param_1[0xb]);
      if ((puVar13 != (undefined8 *)0x0) &&
         (unaff_x22 = (undefined **)*puVar13, unaff_x22 != (undefined **)0x0)) {
code_r0x000109e175a0:
        *(uint *)(unaff_x22 + 8) = *(uint *)(unaff_x22 + 8) | 0x80;
        param_2 = (undefined **)0x30;
        ppuVar11 = ppuVar16;
        FUN_109f658b0();
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar11[3] = (undefined *)0x0;
          ppuVar11[2] = (undefined *)0x0;
          ppuVar11[5] = (undefined *)0x0;
          ppuVar11[4] = (undefined *)0x0;
          ppuVar11[1] = (undefined *)0x0;
          *ppuVar11 = (undefined *)0x0;
        }
        ppuVar11[1] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 3) = 2;
        *ppuVar11 = (undefined *)&PTR_DAT_110b64048;
        ppuVar11[5] = (undefined *)unaff_x22;
        ppuVar11[4] = unaff_x22[4];
        *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
        uVar5 = *(uint *)(unaff_x22 + 8) >> 0xb & 0xf;
        if ((((uVar5 == 5 || uVar5 == 0) && (((ulong)param_1[0x11] & 1) == 0)) &&
            (func_0x000109eadd3c(), (*(byte *)((long)ppuVar11 + 0x41) & 1) == 0)) &&
           (((pcVar18 = unaff_x22[5], pcVar18 == (char *)0x0 || (*pcVar18 != 'g')) ||
            ((pcVar18[1] != 'l' || (pcVar18[2] != '_')))))) {
          *(undefined **)((long)register0x00000008 + -0x140) = param_1[0xb];
          param_3 = (undefined **)&UNK_10f6040e3;
          ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
          param_2 = ppuVar16;
          FUN_109e9f044();
        }
        if ((short)*(ushort *)((long)unaff_x22 + 0x44) < 0) {
          if (*(uint *)(unaff_x22 + 10) < 2) {
            if (*(char *)(ppuVar16 + 0x83) == '\x01') {
              param_3 = (undefined **)&UNK_10f604990;
              ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
              param_2 = ppuVar16;
              FUN_109e9ed98();
            }
          }
          else if ((((*(ushort *)((long)unaff_x22 + 0x44) >> 10 & 1) != 0) &&
                   ((*(byte *)((long)ppuVar16 + 0x3c5) & 1) == 0)) &&
                  ((*(byte *)((long)ppuVar16 + 0x3a9) & 1) == 0)) {
            param_3 = (undefined **)&UNK_10f604941;
            ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
            param_2 = ppuVar16;
            FUN_109e9ed98();
          }
        }
        goto LAB_109e18348;
      }
      uVar14 = (ulong)*(uint *)(ppuVar16 + 0x1f);
      FUN_109e19b4c();
      puVar17 = param_1[0xb];
      *(ulong *)((long)register0x00000008 + -0x140) = uVar14;
      *(undefined **)((long)register0x00000008 + -0x138) = puVar17;
      ppuVar11 = ppuVar16;
      FUN_109f65d74(ppuVar16,&UNK_10f603fa4);
      puVar13 = *(undefined8 **)(ppuVar16[9] + 8);
      FUN_109f61800(puVar13,ppuVar11);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_109f65a74(ppuVar11);
      }
      else {
        unaff_x22 = (undefined **)*puVar13;
        FUN_109f65a74(ppuVar11);
        if (unaff_x22 != (undefined **)0x0) goto code_r0x000109e175a0;
      }
      *(undefined **)((long)register0x00000008 + -0x140) = param_1[0xb];
      param_3 = (undefined **)&UNK_10f6049d8;
      FUN_109e9ed98((undefined1 *)((long)register0x00000008 + -0xc0),ppuVar16);
      ppuVar15 = (undefined **)0x28;
      ppuVar11 = ppuVar16;
      FUN_109f658b0();
      if (ppuVar11 != (undefined **)0x0) {
        ppuVar11[4] = (undefined *)0x0;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
      }
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *(undefined4 *)(ppuVar11 + 3) = 0x16;
      *ppuVar11 = (undefined *)&PTR_DAT_110b63eb8;
      ppuVar11[4] = &UNK_10e05d730;
      *(undefined1 *)((long)register0x00000008 + -0x99) = 1;
      unaff_x21 = ppuVar11;
      unaff_x23 = (undefined **)&UNK_10e05d730;
      goto code_r0x000109e18354;
    case 0x2c:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)(ulong)*(uint *)(param_1 + 0xb);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9960();
      break;
    case 0x2d:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)(ulong)*(uint *)(param_1 + 0xb);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea98b0();
      break;
    case 0x2e:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = unaff_x21;
      FUN_109f64b28();
      ppuVar15 = (undefined **)((ulong)ppuVar15 & 0xffffffff);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      FUN_109ea96a8();
      break;
    case 0x2f:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9758();
      break;
    case 0x30:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)(ulong)(*(int *)(param_1 + 0xb) != 0);
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9b70();
      break;
    case 0x31:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9804(param_1[0xb]);
      break;
    case 0x32:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)param_1[0xb];
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9ac0();
      break;
    case 0x33:
      FUN_109f658b0(ppuVar16,0xb0);
      if (unaff_x21 != (undefined **)0x0) {
        unaff_x21[0x13] = (undefined *)0x0;
        unaff_x21[0x12] = (undefined *)0x0;
        unaff_x21[0x15] = (undefined *)0x0;
        unaff_x21[0x14] = (undefined *)0x0;
        unaff_x21[0xf] = (undefined *)0x0;
        unaff_x21[0xe] = (undefined *)0x0;
        unaff_x21[0x11] = (undefined *)0x0;
        unaff_x21[0x10] = (undefined *)0x0;
        unaff_x21[0xb] = (undefined *)0x0;
        unaff_x21[10] = (undefined *)0x0;
        unaff_x21[0xd] = (undefined *)0x0;
        unaff_x21[0xc] = (undefined *)0x0;
        unaff_x21[7] = (undefined *)0x0;
        unaff_x21[6] = (undefined *)0x0;
        unaff_x21[9] = (undefined *)0x0;
        unaff_x21[8] = (undefined *)0x0;
        unaff_x21[3] = (undefined *)0x0;
        unaff_x21[2] = (undefined *)0x0;
        unaff_x21[5] = (undefined *)0x0;
        unaff_x21[4] = (undefined *)0x0;
        unaff_x21[1] = (undefined *)0x0;
        *unaff_x21 = (undefined *)0x0;
      }
      ppuVar15 = (undefined **)param_1[0xb];
      param_3 = (undefined **)0x1;
      ppuVar11 = unaff_x21;
      func_0x000109ea9a10();
      break;
    case 0x34:
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      ppuVar11 = param_1 + 0xc;
      param_1 = (undefined **)((long)*ppuVar11 + -0x28);
      if (*(long *)*ppuVar11 == 0 || param_1 == (undefined **)0x0) {
        ppuVar11 = (undefined **)0x0;
        ppuVar21 = param_2;
      }
      else {
        unaff_x23 = (undefined **)0x0;
        unaff_x22 = (undefined **)&UNK_10f6049e8;
        do {
          bVar7 = unaff_x23 == (undefined **)param_2[3];
          unaff_x23 = (undefined **)param_2[3];
          if (bVar7) {
            FUN_109e9f044((undefined1 *)((long)register0x00000008 + -0xe0),ppuVar16,&UNK_10f6049e8);
            unaff_x23 = (undefined **)param_2[3];
          }
          puVar17 = param_1[1];
          uVar2 = *(undefined4 *)(param_1 + 2);
          uVar6 = *(undefined8 *)((long)param_1 + 0x14);
          *(undefined8 *)((long)register0x00000008 + -0xd8) = *(undefined8 *)((long)param_1 + 0x1c);
          *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar6;
          *(undefined4 *)((long)register0x00000008 + -0xd0) = uVar2;
          *(undefined **)((long)register0x00000008 + -200) = puVar17;
          ppuVar11 = param_1;
          ppuVar21 = param_2;
          param_3 = ppuVar16;
          (**(code **)(*param_1 + 8))();
          ppuVar15 = param_1 + 5;
          param_1 = (undefined **)((long)*ppuVar15 + -0x28);
        } while (*(long *)*ppuVar15 != 0 && param_1 != (undefined **)0x0);
      }
      *(undefined ***)((long)register0x00000008 + -0x98) = ppuVar11;
      param_2 = ppuVar21;
code_r0x000109e178bc:
      bVar7 = true;
      goto code_r0x000109e178c0;
    }
    if (unaff_x21 != (undefined **)0x0) {
      unaff_x23 = (undefined **)unaff_x21[4];
code_r0x000109e18354:
      if ((*(char *)((long)unaff_x23 + 4) == '\x16') &&
         ((*(byte *)((long)register0x00000008 + -0x99) & 1) == 0)) {
        param_3 = (undefined **)&UNK_10f604a1c;
        ppuVar11 = (undefined **)((long)register0x00000008 + -0xc0);
        ppuVar15 = ppuVar16;
        FUN_109e9ed98();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
      return unaff_x21;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_109e18450;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    param_1 = ppuVar11;
    param_2 = ppuVar15;
    unaff_x19 = ppuVar16;
  } while( true );
}



/* Entry: 109e1847c; end: 109e1896b;  */

int FUN_109e1847c(long param_1,undefined8 *param_2,long param_3,long *param_4,undefined8 *param_5,
                 undefined8 *param_6,int param_7,undefined8 param_8,long *param_9)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if (*(char *)(param_4[4] + 4) == '\x16') {
    bVar1 = true;
  }
  else {
    bVar1 = *(char *)(param_5[4] + 4) == '\x16';
  }
  plVar2 = param_4;
  (**(code **)(*param_4 + 0x40))();
  if (plVar2 != (long *)0x0) {
    *(uint *)(plVar2 + 8) = *(uint *)(plVar2 + 8) | 0x100;
  }
  if (bVar1) {
LAB_109e18528:
    bVar1 = false;
    iVar12 = 1;
  }
  else {
    if (param_3 != 0) {
      puVar8 = &UNK_10f606851;
LAB_109e1851c:
      FUN_109e9ed98(param_9,param_2,puVar8);
      goto LAB_109e18528;
    }
    if ((plVar2 == (long *)0x0) ||
       (((*(uint *)(plVar2 + 8) & 1) == 0 &&
        (((*(uint *)(plVar2 + 8) & 0x7800) != 0x1000 ||
         ((*(ushort *)((long)plVar2 + 0x44) >> 8 & 1) == 0)))))) {
      if (*(char *)(param_4[4] + 4) == '\x13') {
        uVar6 = 0x6e;
        if (*(char *)((long)param_2 + 0x5a1) == '\0') {
          uVar6 = 0x78;
        }
        puVar4 = param_2;
        FUN_109e9ebe4(param_2,uVar6,300,param_9,&UNK_10f606888);
        if ((int)puVar4 == 0) goto LAB_109e18528;
      }
      plVar2 = param_4;
      (**(code **)(*param_4 + 0x38))(param_4,param_2);
      if (((ulong)plVar2 & 1) == 0) {
        puVar8 = &UNK_10f6068a9;
        goto LAB_109e1851c;
      }
      bVar1 = false;
      iVar12 = 0;
    }
    else {
      if ((*(byte *)((long)param_2 + 0x5a3) & 1) == 0) {
        puVar8 = &UNK_10f606862;
        goto LAB_109e1851c;
      }
      iVar12 = 0;
      bVar1 = true;
    }
  }
  lStack_78 = param_9[1];
  lStack_80 = *param_9;
  lStack_68 = param_9[3];
  lStack_70 = param_9[2];
  puVar4 = param_2;
  FUN_109e23a10(param_2,&lStack_80,param_4,param_5,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    iVar12 = 1;
    if (!bVar1) goto LAB_109e185a8;
LAB_109e188d8:
    if (param_7 == 0) {
LAB_109e18920:
      puVar4 = (undefined8 *)0x0;
      goto LAB_109e18924;
    }
LAB_109e188dc:
    FUN_109f658b0(param_2,0x28);
    if (param_2 != (undefined8 *)0x0) {
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
    }
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0x16;
    *param_2 = &PTR_DAT_110b63eb8;
    puVar8 = &UNK_10e05d730;
  }
  else {
    lVar3 = param_4[4];
    cVar5 = *(char *)(lVar3 + 4);
    if ((cVar5 == '\x13') && (*(int *)(lVar3 + 0x10) == 0)) {
      plVar2 = param_4;
      (**(code **)(*param_4 + 0x40))();
      lVar7 = puVar4[4];
      cVar5 = *(char *)(lVar7 + 4);
      if (cVar5 == '\x13') {
        iVar11 = *(int *)(lVar7 + 0x10);
      }
      else {
        iVar11 = -1;
      }
      if (iVar11 <= (int)plVar2[0xc]) {
        FUN_109e9ed98(param_9,param_2,&UNK_10f6068c2);
        lVar7 = puVar4[4];
        cVar5 = *(char *)(lVar7 + 4);
      }
      lVar3 = *(long *)(param_4[4] + 0x30);
      if (cVar5 == '\x13') {
        uVar6 = *(undefined4 *)(lVar7 + 0x10);
      }
      else {
        uVar6 = 0xffffffff;
      }
      FUN_109ec69f4(lVar3,uVar6,0);
      plVar2[4] = lVar3;
      param_4[4] = lVar3;
      cVar5 = *(char *)(lVar3 + 4);
    }
    if (cVar5 == '\x13') {
      if ((*(int *)(puVar4 + 3) == 2) && (puVar4[5] != 0)) {
        *(int *)(puVar4[5] + 0x60) = *(int *)(puVar4[4] + 0x10) + -1;
      }
      if (((int)param_4[3] == 2) && (param_4[5] != 0)) {
        *(int *)(param_4[5] + 0x60) = *(int *)(lVar3 + 0x10) + -1;
      }
    }
    param_5 = puVar4;
    if (bVar1) goto LAB_109e188d8;
LAB_109e185a8:
    if (param_7 == 0) {
      if (iVar12 == 0) {
        FUN_109f658b0(param_2,0x38);
        if (param_2 != (undefined8 *)0x0) {
          param_2[6] = 0;
          param_2[3] = 0;
          param_2[2] = 0;
          param_2[5] = 0;
          param_2[4] = 0;
          param_2[1] = 0;
          *param_2 = 0;
        }
        func_0x000109ea9180(param_2,param_4,param_5);
        puVar4 = (undefined8 *)0x0;
        param_2[1] = param_1 + 0x10;
        puVar9 = *(undefined8 **)(param_1 + 0x18);
        param_2[2] = puVar9;
        plVar2 = (long *)0x0;
        if (param_2 != (undefined8 *)0x0) {
          plVar2 = param_2 + 1;
        }
        *puVar9 = plVar2;
        *(long **)(param_1 + 0x18) = plVar2;
        goto LAB_109e18924;
      }
      goto LAB_109e18920;
    }
    if (iVar12 != 0) goto LAB_109e188dc;
    puVar4 = param_2;
    FUN_109f658b0(param_2,0x90);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    FUN_109eaba7c(puVar4,param_5[4],&UNK_10f6068f1,0xb);
    lVar3 = param_1 + 0x10;
    puVar4[1] = lVar3;
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    plVar2 = (long *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = puVar4 + 1;
    }
    puVar4[2] = puVar9;
    *puVar9 = plVar2;
    *(long **)(param_1 + 0x18) = plVar2;
    func_0x000109e244dc(&lStack_80,puVar4);
    lVar7 = lStack_80;
    func_0x000109eabfa8(lStack_80,param_5,
                        ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_80 + 0x20) + 0xd) & 0x1f)));
    *(long *)(lVar7 + 8) = lVar3;
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    plVar2 = (long *)0x0;
    if (lVar7 != 0) {
      plVar2 = (long *)(lVar7 + 8);
    }
    *(undefined8 **)(lVar7 + 0x10) = puVar9;
    *puVar9 = plVar2;
    *(long **)(param_1 + 0x18) = plVar2;
    puVar9 = param_2;
    FUN_109f658b0(param_2,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[5] = puVar4;
    puVar9[4] = puVar4[4];
    puVar9 = param_2;
    FUN_109f658b0(param_2,0x38);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[6] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    func_0x000109ea9180();
    puVar9[1] = lVar3;
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    plVar2 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar2 = puVar9 + 1;
    }
    puVar9[2] = puVar10;
    *puVar10 = plVar2;
    *(long **)(param_1 + 0x18) = plVar2;
    FUN_109f658b0(param_2,0x30);
    if (param_2 != (undefined8 *)0x0) {
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
    }
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 2;
    *param_2 = &PTR_DAT_110b64048;
    param_2[5] = puVar4;
    puVar8 = (undefined *)puVar4[4];
  }
  param_2[4] = puVar8;
  puVar4 = param_2;
LAB_109e18924:
  *param_6 = puVar4;
  return iVar12;
}



/* Entry: 109e1896c; end: 109e190e7;  */

void FUN_109e1896c(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(*param_1 + 0x20) + 4);
  uVar4 = (ulong)uVar1;
  if (((uVar1 & 0xff) < 0xb) && (lVar7 = *(long *)(*param_2 + 0x20), *(byte *)(lVar7 + 4) < 0xb)) {
    func_0x000109e18df8(uVar4,param_2,param_4);
    if ((uVar4 & 1) == 0) {
      iVar3 = *(int *)(lVar7 + 4);
      func_0x000109e18df8(iVar3,param_1,param_4);
      if (iVar3 == 0) {
        puVar5 = &UNK_10f6069fb;
        goto LAB_109e18a1c;
      }
    }
    puVar5 = *(undefined **)(*param_1 + 0x20);
    puVar6 = *(undefined **)(*param_2 + 0x20);
    uVar1 = *(uint *)(puVar5 + 4);
    uVar2 = *(uint *)(puVar6 + 4);
    if (((uVar2 ^ uVar1) & 0xff) == 0) {
      if (puVar5[0xd] == '\x01') {
        if ((uVar1 & 0xf0) == 0) {
          return;
        }
        if ((uVar2 & 0xf0) == 0 && puVar6[0xd] == '\x01') {
          return;
        }
      }
      else {
        if (puVar6[0xd] == 1 && (uVar2 & 0xf0) == 0) {
          return;
        }
        if (((puVar5[0xd] != '\0') &&
            ((1 < (byte)puVar6[0xd] && puVar5[0xe] == '\x01') && (uVar1 & 0xfc) < 0xc)) &&
           (puVar6[0xe] == '\x01' && (uVar2 & 0xfc) < 0xc)) {
          if (puVar5 == puVar6) {
            return;
          }
          puVar5 = &UNK_10f606a63;
          goto LAB_109e18a1c;
        }
      }
      if ((param_3 & 1) == 0) {
        if (puVar5 == puVar6) {
          return;
        }
        puVar5 = &UNK_10f604a1c;
      }
      else {
        FUN_109ec8408();
        if (puVar5 != &UNK_10e05d730) {
          return;
        }
        puVar5 = &UNK_10f606a90;
      }
    }
    else {
      puVar5 = &UNK_10f606a38;
    }
  }
  else {
    puVar5 = &UNK_10f6069ca;
  }
LAB_109e18a1c:
  FUN_109e9ed98(param_5,param_4,puVar5);
  return;
}



/* Entry: 109e190e8; end: 109e1958f;  */

undefined8 * FUN_109e190e8(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar5 = 0x94;
  if ((int)param_2 != 0x8d) {
    uVar5 = 0x96;
  }
  lVar7 = param_3[4];
  bVar1 = *(byte *)(lVar7 + 4);
  if (bVar1 < 0xc) {
    FUN_109f658b0(param_1,0x58);
    if (param_1 != (undefined8 *)0x0) {
      param_1[10] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    func_0x000109ea9448(param_1,param_2,param_3,param_4);
    return param_1;
  }
  if (bVar1 == 0x13) {
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar11 = (undefined8 *)0x0;
      iVar6 = -1;
    }
    else {
      uVar12 = 0;
      puVar10 = (undefined8 *)0x0;
      do {
        puVar2 = param_1;
        FUN_109f658b0(param_1,0x38);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[6] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
        }
        plVar3 = param_3;
        (**(code **)(*param_3 + 0x20))(param_3,param_1,0);
        puVar11 = param_1;
        FUN_109f658b0(param_1,0xb0);
        if (puVar11 != (undefined8 *)0x0) {
          puVar11[0x13] = 0;
          puVar11[0x12] = 0;
          puVar11[0x15] = 0;
          puVar11[0x14] = 0;
          puVar11[0xf] = 0;
          puVar11[0xe] = 0;
          puVar11[0x11] = 0;
          puVar11[0x10] = 0;
          puVar11[0xb] = 0;
          puVar11[10] = 0;
          puVar11[0xd] = 0;
          puVar11[0xc] = 0;
          puVar11[7] = 0;
          puVar11[6] = 0;
          puVar11[9] = 0;
          puVar11[8] = 0;
          puVar11[3] = 0;
          puVar11[2] = 0;
          puVar11[5] = 0;
          puVar11[4] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
        }
        FUN_109ea98b0();
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(undefined4 *)(puVar2 + 3) = 0;
        puVar2[4] = &UNK_10e05d730;
        *puVar2 = &PTR_DAT_110b640d0;
        puVar2[6] = puVar11;
        FUN_109eab364(puVar2,plVar3);
        puVar4 = param_1;
        FUN_109f658b0(param_1,0x38);
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[6] = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
        }
        plVar3 = param_4;
        (**(code **)(*param_4 + 0x20))(param_4,param_1,0);
        puVar11 = param_1;
        FUN_109f658b0(param_1,0xb0);
        if (puVar11 != (undefined8 *)0x0) {
          puVar11[0x13] = 0;
          puVar11[0x12] = 0;
          puVar11[0x15] = 0;
          puVar11[0x14] = 0;
          puVar11[0xf] = 0;
          puVar11[0xe] = 0;
          puVar11[0x11] = 0;
          puVar11[0x10] = 0;
          puVar11[0xb] = 0;
          puVar11[10] = 0;
          puVar11[0xd] = 0;
          puVar11[0xc] = 0;
          puVar11[7] = 0;
          puVar11[6] = 0;
          puVar11[9] = 0;
          puVar11[8] = 0;
          puVar11[3] = 0;
          puVar11[2] = 0;
          puVar11[5] = 0;
          puVar11[4] = 0;
          puVar11[1] = 0;
          *puVar11 = 0;
        }
        FUN_109ea98b0();
        puVar4[1] = 0;
        puVar4[2] = 0;
        *(undefined4 *)(puVar4 + 3) = 0;
        puVar4[4] = &UNK_10e05d730;
        *puVar4 = &PTR_DAT_110b640d0;
        puVar4[6] = puVar11;
        FUN_109eab364(puVar4,plVar3);
        puVar11 = param_1;
        FUN_109e190e8(param_1,param_2,puVar2,puVar4);
        if (puVar10 != (undefined8 *)0x0) {
          puVar11 = param_1;
          FUN_109f658b0(param_1,0x58);
          if (puVar11 != (undefined8 *)0x0) {
            puVar11[10] = 0;
            puVar11[7] = 0;
            puVar11[6] = 0;
            puVar11[9] = 0;
            puVar11[8] = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
          }
          func_0x000109ea9448();
        }
        uVar12 = uVar12 + 1;
        puVar10 = puVar11;
      } while (uVar12 < *(uint *)(param_3[4] + 0x10));
      iVar6 = *(uint *)(param_3[4] + 0x10) - 1;
    }
    if (((int)param_3[3] == 2) && (param_3[5] != 0)) {
      *(int *)(param_3[5] + 0x60) = iVar6;
    }
    if (((param_4 != (long *)0x0) && ((int)param_4[3] == 2)) && (param_4[5] != 0)) {
      *(int *)(param_4[5] + 0x60) = *(int *)(param_4[4] + 0x10) + -1;
    }
  }
  else {
    if ((bVar1 != 0x11) || (*(int *)(lVar7 + 0x10) == 0)) goto LAB_109e19504;
    uVar13 = 0;
    lVar8 = 8;
    puVar10 = (undefined8 *)0x0;
    do {
      uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x30) + lVar8);
      puVar2 = param_1;
      FUN_109f658b0(param_1,0x38);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[6] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
      }
      plVar3 = param_3;
      (**(code **)(*param_3 + 0x20))(param_3,param_1,0);
      FUN_109eab480(puVar2,plVar3,uVar9);
      puVar4 = param_1;
      FUN_109f658b0(param_1,0x38);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[6] = 0;
        puVar4[3] = 0;
        puVar4[2] = 0;
        puVar4[5] = 0;
        puVar4[4] = 0;
        puVar4[1] = 0;
        *puVar4 = 0;
      }
      plVar3 = param_4;
      (**(code **)(*param_4 + 0x20))(param_4,param_1,0);
      FUN_109eab480(puVar4,plVar3,uVar9);
      puVar11 = param_1;
      FUN_109e190e8(param_1,param_2,puVar2,puVar4);
      if (puVar10 != (undefined8 *)0x0) {
        puVar2 = param_1;
        FUN_109f658b0(param_1,0x58);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[10] = 0;
          puVar2[7] = 0;
          puVar2[6] = 0;
          puVar2[9] = 0;
          puVar2[8] = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
        }
        func_0x000109ea9448(puVar2,uVar5,puVar10,puVar11);
        puVar11 = puVar2;
      }
      uVar13 = uVar13 + 1;
      lVar7 = param_3[4];
      lVar8 = lVar8 + 0x30;
      puVar10 = puVar11;
    } while (uVar13 < *(uint *)(lVar7 + 0x10));
  }
  if (puVar11 != (undefined8 *)0x0) {
    return puVar11;
  }
LAB_109e19504:
  FUN_109f658b0(param_1,0xb0);
  if (param_1 != (undefined8 *)0x0) {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  param_1[4] = &UNK_10e05d730;
  *param_1 = &PTR_DAT_110b63f80;
  param_1[0x15] = 0;
  uVar9 = 0xb;
  func_0x000109ec6c94(0xb,1,1,0,0,0);
  param_1[4] = uVar9;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x29) = 0;
  param_1[6] = 0;
  return param_1;
}



/* Entry: 109e19590; end: 109e197bb;  */

undefined *
FUN_109e19590(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar6 = *(undefined **)(*param_1 + 0x20);
  puVar7 = *(undefined **)(*param_2 + 0x20);
  if (((*(byte *)(param_4 + 0x3bd) & 1) == 0) &&
     (lVar2 = param_4, FUN_109e9ebe4(param_4,0x82,300,param_5,&UNK_10f606b5d), (int)lVar2 == 0))
  goto LAB_109e19704;
  uVar5 = *(uint *)(puVar6 + 4);
  uVar3 = (ulong)uVar5;
  if ((uVar5 & 0xfe) == 0 || (uVar5 & 0xff) - 9 < 2) {
    uVar4 = *(uint *)(puVar7 + 4);
    if ((uVar4 & 0xfe) == 0 || (uVar4 & 0xff) - 9 < 2) {
      uVar5 = uVar4 ^ uVar5;
      if ((uVar5 & 0xff) != 0) {
        func_0x000109e18df8(uVar3,param_2,param_4);
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(puVar7 + 4);
          func_0x000109e18df8(uVar3,param_1,param_4);
          if ((uVar3 & 1) == 0) {
            puVar6 = &UNK_10f606d42;
            goto LAB_109e196f8;
          }
        }
        FUN_109e9f044(param_5,param_4,&UNK_10f606d79);
        puVar6 = *(undefined **)(*param_1 + 0x20);
        puVar7 = *(undefined **)(*param_2 + 0x20);
        uVar3 = (ulong)*(uint *)(puVar6 + 4);
        uVar4 = *(uint *)(puVar7 + 4);
        uVar5 = uVar4 ^ *(uint *)(puVar6 + 4);
      }
      if ((uVar5 & 0xff) == 0) {
        bVar1 = puVar6[0xd];
        if (bVar1 < 2) {
          if (bVar1 != 1) {
            return puVar6;
          }
          if ((uVar3 & 0xf0) == 0) {
            return puVar7;
          }
          return puVar6;
        }
        if (puVar6[0xe] != '\x01' || 0xb < ((uint)uVar3 & 0xfc)) {
          return puVar6;
        }
        if ((byte)puVar7[0xd] < 2) {
          return puVar6;
        }
        if ((puVar7[0xe] != '\x01' || bVar1 == puVar7[0xd]) || 0xb < (uVar4 & 0xfc)) {
          return puVar6;
        }
        puVar6 = &UNK_10f606e2d;
      }
      else {
        puVar6 = &UNK_10f606dff;
      }
    }
    else {
      puVar6 = &UNK_10f606d23;
    }
  }
  else {
    puVar6 = &UNK_10f606d04;
  }
LAB_109e196f8:
  FUN_109e9ed98(param_5,param_4,puVar6);
LAB_109e19704:
  return &UNK_10e05d730;
}



/* Entry: 109e197bc; end: 109e19917;  */

long * FUN_109e197bc(undefined8 param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,
                    byte *param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  plVar3 = *(long **)(param_3 + (param_4 & 0xffffffff) * 8 + 0x40);
  plVar1 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3,param_1,param_2);
  if ((*(char *)(plVar1[4] + 4) != '\v') || (*(char *)(plVar1[4] + 0xd) != '\x01')) {
    if ((*param_6 & 1) == 0) {
      lStack_48 = plVar3[1];
      uStack_50 = (undefined4)plVar3[2];
      uStack_58 = *(undefined8 *)((long)plVar3 + 0x1c);
      uStack_60 = *(undefined8 *)((long)plVar3 + 0x14);
      FUN_109e9ed98(&uStack_60,param_2,&UNK_10f606e63);
      *param_6 = 1;
    }
    FUN_109f658b0(param_2,0xb0);
    if (param_2 != (long *)0x0) {
      param_2[0x13] = 0;
      param_2[0x12] = 0;
      param_2[0x15] = 0;
      param_2[0x14] = 0;
      param_2[0xf] = 0;
      param_2[0xe] = 0;
      param_2[0x11] = 0;
      param_2[0x10] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[0xd] = 0;
      param_2[0xc] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[9] = 0;
      param_2[8] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[1] = 0;
      *param_2 = 0;
    }
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 3;
    param_2[4] = (long)&UNK_10e05d730;
    *param_2 = (long)&PTR_DAT_110b63f80;
    param_2[0x15] = 0;
    lVar2 = 0xb;
    func_0x000109ec6c94(0xb,1,1,0,0,0);
    param_2[4] = lVar2;
    *(undefined1 *)(param_2 + 5) = 1;
    *(undefined8 *)((long)param_2 + 0x29) = 0;
    param_2[6] = 0;
    plVar1 = param_2;
  }
  return plVar1;
}



/* Entry: 109e19918; end: 109e199cf;  */

void FUN_109e19918(undefined8 *param_1,byte param_2)

{
  FUN_109f658b0(param_1,0xb0);
  if (param_1 != (undefined8 *)0x0) {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  if (param_2 < 9) {
    if (param_2 == 0) {
      func_0x000109ea98b0();
      return;
    }
    if (param_2 == 1) {
      func_0x000109ea9960();
      return;
    }
  }
  else {
    if (param_2 == 9) {
      func_0x000109ea9a10();
      return;
    }
    if (param_2 == 10) {
      func_0x000109ea9ac0();
      return;
    }
  }
  FUN_109ea9758();
  return;
}



/* Entry: 109e199d0; end: 109e19b4b;  */

void FUN_109e199d0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x0;
    if (*(long *)(param_2 + -0x30) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
    }
  }
  puVar2 = puVar3;
  FUN_109f658b0(puVar3,0x90);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  FUN_109eaba7c(puVar2,*(undefined8 *)(param_2 + 0x20),&UNK_10f606e85,0xb);
  puVar2[1] = param_1 + 0x10;
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  plVar1 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = puVar2 + 1;
  }
  puVar2[2] = puVar4;
  *puVar4 = plVar1;
  *(long **)(param_1 + 0x18) = plVar1;
  puVar4 = puVar3;
  FUN_109f658b0(puVar3,0x38);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  puVar5 = puVar3;
  FUN_109f658b0(puVar3,0x30);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar5 + 3) = 2;
  *puVar5 = &PTR_DAT_110b64048;
  puVar5[4] = puVar2[4];
  puVar5[5] = puVar2;
  func_0x000109ea9180(puVar4,puVar5,param_2);
  puVar4[1] = param_1 + 0x10;
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  plVar1 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
  }
  puVar4[2] = puVar5;
  *puVar5 = plVar1;
  *(long **)(param_1 + 0x18) = plVar1;
  FUN_109f658b0(puVar3,0x30);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 2;
  *puVar3 = &PTR_DAT_110b64048;
  puVar3[4] = puVar2[4];
  puVar3[5] = puVar2;
  return;
}



/* Entry: 109e19b4c; end: 109e19b5b;  */

undefined * FUN_109e19b4c(ulong param_1)

{
  return (&PTR_DAT_110b5e850)[param_1 & 0xffffffff];
}



/* Entry: 109e19b5c; end: 109e19c0f;  */

long * FUN_109e19b5c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x1;
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x28:
    plVar1 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x10))();
    if (((ulong)plVar1 & 1) == 0) {
      plVar1 = *(long **)(param_1 + 0x48);
      goto code_r0x000109e19bcc;
    }
    break;
  case 1:
  case 2:
  case 0x13:
  case 0x17:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    plVar1 = *(long **)(param_1 + 0x40);
code_r0x000109e19bcc:
                    /* WARNING: Could not recover jumptable at 0x000109e19bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return plVar1;
  case 0x22:
    plVar1 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar1 + 0x10))();
    if (((ulong)plVar1 & 1) == 0) {
      plVar1 = *(long **)(param_1 + 0x48);
      (**(code **)(*plVar1 + 0x10))();
      if (((ulong)plVar1 & 1) == 0) {
        plVar1 = *(long **)(param_1 + 0x50);
        goto code_r0x000109e19bcc;
      }
    }
    break;
  default:
    plVar1 = (long *)0x0;
  case 0x34:
    goto code_r0x000109e19bbc;
  }
  plVar1 = (long *)0x1;
code_r0x000109e19bbc:
  return plVar1;
}



/* Entry: 109e19c10; end: 109e19c37;  */

undefined8 FUN_109e19c10(long param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  return 0;
}



/* Entry: 109e19c38; end: 109e19d5f;  */

undefined8 FUN_109e19c38(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_109f61740(*(undefined8 *)(*(long *)(param_3 + 0x48) + 8));
  }
  for (plVar1 = *(long **)(param_1 + 0x40); plVar2 = plVar1 + -5,
      *plVar1 != 0 && plVar2 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_109f61680(*(undefined8 *)(*(long *)(param_3 + 0x48) + 8));
  }
  return 0;
}



/* Entry: 109e19d60; end: 109e1c493;  */

undefined * FUN_109e19d60(undefined8 param_1,undefined *param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  
  if (param_3 != 0) {
    if ((param_2[4] == '\x13') && (lVar5 = param_4, FUN_109e23c88(param_4,param_1), (int)lVar5 == 0)
       ) {
      param_2 = &UNK_10e05d730;
    }
    else {
      lVar5 = *(long *)(param_3 + 0x50);
      plVar8 = (long *)(lVar5 + 8);
      if (*plVar8 != 0) {
        do {
          uStack_78 = 0;
          uStack_70 = 0;
          puStack_80 = &uStack_70;
          ppuStack_68 = &puStack_80;
          if (*(int *)(lVar5 + 0x10) == 0x29) {
LAB_109e19ec4:
            iVar2 = 0;
          }
          else {
            plVar7 = (long *)(lVar5 - 0x28);
            plVar1 = plVar7;
            (**(code **)(*plVar7 + 8))(plVar7,&puStack_80,param_4);
            uStack_88 = *(undefined8 *)(lVar5 + -0x20);
            uStack_90 = *(undefined4 *)(lVar5 + -0x18);
            uStack_98 = *(undefined8 *)(lVar5 + -0xc);
            uStack_a0 = *(undefined8 *)(lVar5 + -0x14);
            if (plVar1 == (long *)0x0) {
              puVar3 = &UNK_10f606ef3;
LAB_109e19eb8:
              FUN_109e9ed98(&uStack_a0,param_4,puVar3);
              goto LAB_109e19ec4;
            }
            puVar3 = &UNK_10f606f14;
            if (((*(byte *)(plVar1[4] + 4) & 0xfe) != 0) ||
               (puVar3 = &UNK_10f606f34, *(char *)(plVar1[4] + 0xd) != '\x01')) goto LAB_109e19eb8;
            (**(code **)(*plVar1 + 0x30))();
            if (plVar1 == (long *)0x0) {
LAB_109e19ea8:
              puVar3 = &UNK_10f606f53;
              goto LAB_109e19eb8;
            }
            uVar4 = *(uint *)(param_4 + 0xec);
            if (uVar4 == 0) {
              uVar4 = *(uint *)(param_4 + 0xe8);
            }
            uVar6 = 299;
            if (*(char *)(param_4 + 0xe4) == '\0') {
              uVar6 = 0x77;
            }
            if ((uVar6 < uVar4) && ((**(code **)(*plVar7 + 0x10))(), ((ulong)plVar7 & 1) != 0))
            goto LAB_109e19ea8;
            iVar2 = (int)plVar1[5];
            if (iVar2 < 1) {
              puVar3 = &UNK_10f606f83;
              goto LAB_109e19eb8;
            }
          }
          FUN_109ec69f4(param_2,iVar2,0);
          lVar5 = *plVar8;
          plVar8 = (long *)(lVar5 + 8);
        } while (*plVar8 != 0);
      }
    }
  }
  return param_2;
}



/* Entry: 109e1c494; end: 109e1c53f;  */

bool FUN_109e1c494(ulong param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_2 + 0xf8);
  uVar4 = param_1;
  FUN_109e23d10(param_1,iVar2);
  if ((uVar4 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x40) & 0x7800;
    uVar5 = *(uint *)(param_2 + 0xec);
    if (uVar1 == 0x5000) {
      uVar6 = uVar5;
      if (uVar5 == 0) {
        uVar6 = *(uint *)(param_2 + 0xe8);
      }
      if (((299 < uVar6) && ((*(byte *)(param_2 + 0xe4) & 1) != 0)) ||
         (*(int *)(param_1 + 0x50) == 0x15)) goto LAB_109e1c4bc;
    }
    if (uVar5 == 0) {
      uVar5 = *(uint *)(param_2 + 0xe8);
    }
    uVar6 = 99;
    if (*(byte *)(param_2 + 0xe4) == 0) {
      uVar6 = 0x81;
    }
    bVar3 = false;
    if (uVar6 < uVar5) {
      bVar3 = iVar2 == 4 && uVar1 == 0x2800;
    }
  }
  else {
LAB_109e1c4bc:
    bVar3 = true;
  }
  return bVar3;
}



/* Entry: 109e1c540; end: 109e1cde3;  */

void FUN_109e1c540(ulong *param_1,ulong param_2,long param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((*param_1 & 1) != 0) {
    if ((*(uint *)(param_2 + 0x40) >> 7 & 1) == 0) {
      *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x30;
    }
    else {
      FUN_109e9ed98(param_4,param_3,&UNK_10f604ade);
    }
  }
  if (((byte)*param_1 >> 1 & 1) != 0) {
    if ((*(uint *)(param_2 + 0x40) >> 7 & 1) == 0) {
      *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x40;
    }
    else {
      FUN_109e9ed98(param_4,param_3,&UNK_10f604ba1);
    }
  }
  uVar10 = *param_1;
  if ((((uVar10 >> 0x39 & 1) != 0) && (((uint)uVar10 >> 10 & 1) == 0)) && (param_1[0x1b] == 0)) {
    FUN_109e9ed98(param_4,param_3,&UNK_10f606fd8);
    uVar10 = *param_1;
  }
  uVar9 = (uint)uVar10;
  if (((uVar10 & 0x40c) != 0) || (((uVar9 >> 4 & 1) != 0 && (*(int *)(param_3 + 0xf8) == 4)))) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 1;
    uVar9 = (uint)*param_1;
  }
  if ((uVar9 >> 7 & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 2;
    uVar9 = (uint)*param_1;
  }
  if ((uVar9 >> 8 & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 4;
  }
  if (*(char *)(param_3 + 0xe4) == '\x01') {
    uVar9 = *(byte *)((long)param_1 + 0xc) & 3;
    FUN_109e1e5e0(uVar9,*(undefined8 *)(param_2 + 0x20),param_3,param_4);
    *(ushort *)(param_2 + 0x44) = *(ushort *)(param_2 + 0x44) & 0xffe7 | (ushort)(uVar9 << 3);
  }
  uVar10 = *param_1;
  if (((uint)uVar10 >> 9 & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 8;
    uVar10 = *param_1;
  }
  if ((((uint)uVar10 >> 3 & 1) != 0) && (*(int *)(param_3 + 0xf8) != 0)) {
    *(undefined **)(param_2 + 0x20) = &UNK_10e05d730;
    func_0x000109f47670();
    FUN_109e9ed98(param_4,param_3,&UNK_10f60703c);
    uVar10 = *param_1;
  }
  if ((int)uVar10 < 0) {
    FUN_109e9ed98(param_4,param_3,&UNK_10f607077);
    uVar10 = *param_1;
  }
  uVar9 = (uint)uVar10;
  if ((param_5 != 0) && ((uVar10 & 0x44) == 0x44)) {
    FUN_109e9ed98(param_4,param_3,&UNK_10f6070d8);
    uVar9 = (uint)*param_1;
  }
  if ((~uVar9 & 0x60) == 0) {
    uVar11 = 0x2800;
    uVar9 = 0x4000;
LAB_109e1c764:
    if (param_5 == 0) {
      uVar9 = uVar11;
    }
LAB_109e1c768:
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffff87ff | uVar9;
  }
  else {
    if ((uVar9 >> 5 & 1) != 0) {
      uVar11 = 0x2000;
      uVar9 = 0x3000;
      goto LAB_109e1c764;
    }
    if ((uVar9 >> 3 & 1) != 0) {
LAB_109e1c830:
      uVar9 = 0x2000;
      goto LAB_109e1c768;
    }
    if ((uVar9 >> 4 & 1) != 0) {
      if (*(int *)(param_3 + 0xf8) == 4) goto LAB_109e1c830;
      if ((uVar9 >> 6 & 1) == 0) {
        if (*(int *)(param_3 + 0xf8) != 0) goto LAB_109e1ca40;
        uVar9 = 0x2800;
        goto LAB_109e1c768;
      }
LAB_109e1ca54:
      uVar11 = 0x2800;
      uVar9 = 0x3800;
      goto LAB_109e1c764;
    }
    if ((uVar9 >> 6 & 1) != 0) goto LAB_109e1ca54;
LAB_109e1ca40:
    if ((uVar9 >> 10 & 1) != 0) {
      uVar9 = 0x800;
      goto LAB_109e1c768;
    }
    if ((uVar9 >> 0xb & 1) != 0) {
      uVar9 = 0x1000;
      goto LAB_109e1c768;
    }
    if ((uVar9 >> 0xc & 1) != 0) {
      uVar9 = 0x1800;
      goto LAB_109e1c768;
    }
  }
  if (((param_5 & 1) == 0) && (*(int *)(param_3 + 0xf8) == 4)) {
    if (((*(byte *)(param_3 + 0x3a9) & 1) != 0) ||
       (((*(byte *)(param_3 + 0x3c5) & 1) != 0 || (*(char *)(param_3 + 0x3c7) == '\x01')))) {
      uVar9 = *(uint *)(param_3 + 0xec);
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_3 + 0xe8);
      }
      uVar11 = 299;
      if (*(char *)(param_3 + 0xe4) == '\0') {
        uVar11 = 0x81;
      }
      if (uVar11 < uVar9) {
        uVar8 = 0;
        if ((*param_1 & 0x20) != 0) {
          uVar8 = (ushort)(((uint)*param_1 & 0x40) << 9);
        }
        uVar8 = uVar8 | *(ushort *)(param_2 + 0x44) & 0x7fff;
      }
      else {
        uVar13 = *(undefined8 *)(param_2 + 0x28);
        uVar4 = uVar13;
        _strcmp(uVar13,&UNK_10f60711b);
        if ((int)uVar4 == 0) {
          uVar8 = 0x8000;
        }
        else {
          _strcmp(uVar13,&UNK_10f60712b);
          uVar8 = 0x8000;
          if ((int)uVar13 != 0) {
            uVar8 = 0;
          }
        }
        uVar8 = *(ushort *)(param_2 + 0x44) & 0x7fff | uVar8;
      }
      *(ushort *)(param_2 + 0x44) = uVar8;
    }
    if (*(char *)(param_3 + 0x3ab) == '\x01') {
      uVar13 = *(undefined8 *)(param_2 + 0x28);
      uVar4 = uVar13;
      _strcmp(uVar13,&UNK_10f60713f);
      if (((int)uVar4 == 0) || (_strcmp(uVar13,&UNK_10f607153), (int)uVar13 == 0)) {
        *(ushort *)(param_2 + 0x44) = *(ushort *)(param_2 + 0x44) | 0x8000;
      }
    }
  }
  if (((short)*(ushort *)(param_2 + 0x44) < 0) &&
     (*(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x100, 1 < *(uint *)(param_2 + 0x50)))
  {
    uVar10 = param_1[1];
    *(ushort *)(param_2 + 0x44) =
         (((byte)uVar10 & 0x20) << 5 | *(ushort *)(param_2 + 0x44) & 0xfbff) ^ 0x400;
    if (((((byte)uVar10 >> 5 & 1) == 0) && ((*(byte *)(param_3 + 0x3c5) & 1) == 0)) &&
       ((*(byte *)(param_3 + 0x3a9) & 1) == 0)) {
      puVar7 = &UNK_10f607169;
LAB_109e1c8fc:
      FUN_109e9ed98(param_4,param_3,puVar7);
    }
  }
  else if (((byte)param_1[1] >> 5 & 1) != 0) {
    puVar7 = &UNK_10f6071c0;
    goto LAB_109e1c8fc;
  }
  if ((param_5 & 1) == 0) {
    iVar3 = *(int *)(param_3 + 0xf8);
    uVar10 = param_2;
    FUN_109e23d10(param_2,iVar3);
    if ((int)uVar10 != 0) {
      if (iVar3 == 5) {
        FUN_109e9ed98(param_4,param_3,&UNK_10f607217);
      }
      for (lVar12 = *(long *)(param_2 + 0x20); bVar1 = *(byte *)(lVar12 + 4), bVar1 == 0x13;
          lVar12 = *(long *)(lVar12 + 0x30)) {
      }
      if (bVar1 < 4) {
        if (bVar1 < 2) {
          uVar9 = *(uint *)(param_3 + 0xec);
          if (uVar9 == 0) {
            uVar9 = *(uint *)(param_3 + 0xe8);
          }
          uVar11 = 299;
          if (*(char *)(param_3 + 0xe4) == '\0') {
            uVar11 = 0x81;
          }
          if ((uVar9 <= uVar11) && ((*(byte *)(param_3 + 0x3bd) & 1) == 0)) {
            FUN_109f65d74(param_3,&UNK_10f612ea4);
            puVar7 = &UNK_10f607288;
LAB_109e1caa8:
            FUN_109e9ed98(param_4,param_3,puVar7);
          }
        }
        else if (bVar1 != 2) {
          if (bVar1 == 3) {
            bVar1 = *(byte *)(param_3 + 0x397);
            goto joined_r0x000109e1c9a4;
          }
          goto LAB_109e1caa0;
        }
      }
      else {
        uVar9 = (uint)bVar1;
        if (0x11 < uVar9) goto LAB_109e1caa0;
        uVar11 = 1 << (ulong)(uVar9 & 0x1f);
        if ((uVar11 & 0x610) == 0) {
          if ((uVar11 & 0xe000) == 0) {
            if (uVar9 != 0x11) goto LAB_109e1caa0;
            uVar9 = *(uint *)(param_3 + 0xec);
            if (uVar9 == 0) {
              uVar9 = *(uint *)(param_3 + 0xe8);
            }
            uVar11 = 299;
            if (*(char *)(param_3 + 0xe4) == '\0') {
              uVar11 = 0x95;
            }
            if (uVar9 <= uVar11) {
              puVar7 = &UNK_10f6072bb;
              goto LAB_109e1caa8;
            }
          }
          else {
            bVar1 = *(byte *)(param_3 + 0x2f7);
joined_r0x000109e1c9a4:
            if ((bVar1 & 1) == 0) {
LAB_109e1caa0:
              puVar7 = &UNK_10f607264;
              goto LAB_109e1caa8;
            }
          }
        }
      }
    }
  }
  uVar9 = *(uint *)(param_2 + 0x40);
  if ((*(char *)(param_3 + 0x28c) == '\x01') && ((uVar9 & 0x7800) == 0x2800)) {
    uVar9 = uVar9 | 0x30;
    *(uint *)(param_2 + 0x40) = uVar9;
  }
  puVar5 = param_1;
  FUN_109e23d78(param_1,*(undefined8 *)(param_2 + 0x20),uVar9 >> 0xb & 0xf,param_3,param_4);
  *(uint *)(param_2 + 0x40) =
       *(uint *)(param_2 + 0x40) & 0xfffe0000 |
       *(uint *)(param_2 + 0x40) & 0x7fff | ((uint)puVar5 & 3) << 0xf;
  uVar10 = *param_1;
  uVar9 = (uint)uVar10;
  if (((uVar9 >> 8 & 1) != 0) &&
     ((uVar6 = param_2, FUN_109e23d10(param_2,*(undefined4 *)(param_3 + 0xf8)), (uVar10 & 0x18) != 0
      || ((uVar6 & 1) == 0)))) {
    FUN_109e9ed98(param_4,param_3,&UNK_10f6072e7);
    uVar9 = (uint)*param_1;
  }
  if (((uVar9 >> 7 & 1) != 0) &&
     (uVar10 = param_2, FUN_109e23d10(param_2,*(undefined4 *)(param_3 + 0xf8)), (uVar10 & 1) == 0))
  {
    FUN_109e9ed98(param_4,param_3,&UNK_10f60733a);
    uVar9 = (uint)*param_1;
  }
  if (((uVar9 >> 0xc & 1) != 0) && (*(int *)(param_3 + 0xf8) != 5)) {
    FUN_109e9ed98(param_4,param_3,&UNK_10f60739c);
  }
  for (lVar12 = *(long *)(param_2 + 0x20); *(char *)(lVar12 + 4) == '\x13';
      lVar12 = *(long *)(lVar12 + 0x30)) {
  }
  if (*(char *)(lVar12 + 4) != '\x0f') {
    uVar10 = *param_1;
    if ((uVar10 >> 0x26 & 1) == 0) {
      if (((uint)uVar10 >> 0xb & 1) != 0) {
        return;
      }
      if ((uVar10 & 0xf8000000000) == 0) {
        return;
      }
      puVar7 = &UNK_10f6077f3;
    }
    else {
      puVar7 = &UNK_10f6077bc;
    }
    goto LAB_109e1cca8;
  }
  iVar3 = *(int *)(param_2 + 0x40);
  FUN_109e24028(iVar3,param_3,param_4);
  if (iVar3 == 0) {
    return;
  }
  uVar8 = *(ushort *)(param_2 + 0x44);
  uVar2 = (ushort)(uint)(*param_1 >> 0x22) & 0x100;
  *(ushort *)(param_2 + 0x44) = uVar2 | uVar8;
  uVar2 = uVar2 | uVar8 & 0x1ff | (ushort)((((uint)uVar8 | (uint)(*param_1 >> 0x22)) >> 9 & 1) << 9)
  ;
  *(ushort *)(param_2 + 0x44) = uVar8 & 0xfc00 | uVar2;
  uVar2 = uVar2 | (ushort)((((uint)uVar8 | (uint)(*param_1 >> 0x1d)) >> 10 & 1) << 10);
  *(ushort *)(param_2 + 0x44) = uVar8 & 0xf800 | uVar2;
  uVar2 = uVar2 | (ushort)((((uint)uVar8 | (uint)(*param_1 >> 0x1d)) >> 0xb & 1) << 0xb);
  *(ushort *)(param_2 + 0x44) = uVar8 & 0xf000 | uVar2;
  *(ushort *)(param_2 + 0x44) =
       uVar8 & 0xe000 | uVar2 | (uVar8 | (ushort)(*param_1 >> 0x1d)) & 0x1000;
  if ((*param_1 >> 0x26 & 1) == 0) {
    uVar9 = *(uint *)(param_2 + 0x40) & 0x7800;
    if (*(char *)(param_3 + 0x3cb) == '\x01') {
      if ((uVar9 == 0x800) && (*(char *)(param_3 + 0x3cc) == '\x01')) {
        FUN_109e9f044(param_4,param_3,&UNK_10f6076ad);
      }
    }
    else {
      if (uVar9 == 0x800) {
        if ((*(byte *)(param_3 + 0xe4) & 1) == 0) {
          uVar9 = *(uint *)(param_3 + 0xec);
          if (uVar9 == 0) {
            uVar9 = *(uint *)(param_3 + 0xe8);
          }
          if ((uVar9 < 0x1a4) && (*(char *)(param_3 + 0x32f) != '\x01')) goto LAB_109e1cd2c;
          if ((*param_1 >> 0x2b & 1) != 0) goto LAB_109e1cd78;
          puVar7 = &UNK_10f607705;
        }
        else {
LAB_109e1cd2c:
          puVar7 = &UNK_10f6076ce;
        }
        FUN_109e9ed98(param_4,param_3,puVar7);
      }
LAB_109e1cd78:
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0x40) & 0x7800) == 0x3000) {
      FUN_109e9ed98(param_4,param_3,&UNK_10f607630);
    }
    if ((uint)param_1[0x1a] != (uint)*(byte *)(lVar12 + 5)) {
      FUN_109e9ed98(param_4,param_3,&UNK_10f60766e);
    }
    *(int *)(param_2 + 0x48) = (int)param_1[0x19];
  }
  if ((((*(char *)(param_3 + 0xe4) != '\x01') || (iVar3 = *(int *)(param_2 + 0x48), iVar3 == 0xd))
      || (iVar3 == 0x68)) || ((iVar3 == 0x6c || ((*(ushort *)(param_2 + 0x44) & 0x300) != 0)))) {
    return;
  }
  puVar7 = &UNK_10f607757;
LAB_109e1cca8:
  *(undefined1 *)(param_3 + 0x28b) = 1;
  FUN_109e9ef7c(param_4,param_3,0,puVar7,&stack0x00000000);
  return;
}



/* Entry: 109e1cde4; end: 109e1ce5f;  */

void FUN_109e1cde4(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(char *)(param_1 + 0x114) == '\x01') {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x118) + 0x78);
    if (uVar1 < 0xe) {
      uVar2 = *(undefined4 *)(&UNK_10e060e6c + (ulong)uVar1 * 4);
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 0;
  }
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x13') {
    uStack_28 = param_2[1];
    uStack_30 = *param_2;
    uStack_18 = param_2[3];
    uStack_20 = param_2[2];
    FUN_109e243a8(param_1,&uStack_30,param_3,uVar2,param_1 + 0x414,&UNK_10f608503);
  }
  return;
}



/* Entry: 109e1ce60; end: 109e1cf07;  */

void FUN_109e1ce60(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 0x20);
  if (*(char *)(lVar2 + 4) == '\x13') {
    if ((*(uint *)(param_3 + 0x40) >> 3 & 1) == 0) {
      if (*(int *)(lVar2 + 0x10) == 0) {
        uVar1 = *(undefined8 *)(lVar2 + 0x30);
        FUN_109ec69f4(uVar1,*(undefined4 *)(param_1 + 0x240),0);
        *(undefined8 *)(param_3 + 0x20) = uVar1;
      }
      else if (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x240)) {
        FUN_109e9ed98(param_2,param_1,&UNK_10f6085c6);
      }
    }
  }
  else if ((*(uint *)(param_3 + 0x40) >> 3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x28b) = 1;
    FUN_109e9ef7c(param_2,param_1,0,&UNK_10f60629f,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 109e1cf08; end: 109e1cfef;  */

void FUN_109e1cf08(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  uint uStack_34;
  
  uStack_34 = 0;
  if (*(char *)(param_1 + 0x115) == '\x01') {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x140) + 0xc0);
    func_0x000109e2673c(uVar1,param_1,&DAT_10f59a612,&uStack_34,0);
    if ((int)uVar1 == 0) {
      return;
    }
    if (*(uint *)(param_1 + 0x240) < uStack_34) {
      puVar2 = &UNK_10f60861d;
      goto LAB_109e1cfd0;
    }
  }
  if (*(char *)(*(long *)(param_3 + 0x20) + 4) == '\x13' || (*(uint *)(param_3 + 0x40) & 8) != 0) {
    if ((*(uint *)(param_3 + 0x40) >> 3 & 1) != 0) {
      return;
    }
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    FUN_109e243a8(param_1,&uStack_60,param_3,uStack_34,param_1 + 0x424,&UNK_10f608649);
    return;
  }
  puVar2 = &UNK_10f6062d4;
LAB_109e1cfd0:
  FUN_109e9ed98(param_2,param_1,puVar2);
  return;
}



/* Entry: 109e1cff0; end: 109e1d03b;  */

void FUN_109e1cff0(long param_1)

{
  byte bVar1;
  
  for (; bVar1 = *(byte *)(param_1 + 4), bVar1 == 0x13; param_1 = *(long *)(param_1 + 0x30)) {
  }
  if (bVar1 != 2 && (bVar1 & 0xfe) != 0) {
    func_0x000109ec6694();
  }
  return;
}



/* Entry: 109e1d03c; end: 109e1d587;  */

long * FUN_109e1d03c(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,
                    undefined1 *param_5)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar10 = (long *)*param_1;
  plVar4 = *(long **)(*(long *)(param_3 + 0x48) + 8);
  FUN_109f61800(plVar4,plVar10[5]);
  if ((plVar4 == (long *)0x0) || (plVar4 = (long *)*plVar4, plVar4 == (long *)0x0)) {
LAB_109e1d0a8:
    *param_5 = 0;
    return plVar10;
  }
  if (*(long *)(param_3 + 0x278) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x48) + 8);
    FUN_109f61798(uVar5,plVar10[5]);
    if ((int)uVar5 != 0) goto LAB_109e1d0a8;
  }
  *param_5 = 1;
  if ((*(uint *)(plVar4 + 8) & 0x600) == 0x400) {
    uVar11 = *(uint *)(plVar4 + 8) >> 0xb & 0xf;
    uVar8 = *(uint *)(plVar10 + 8);
    uVar3 = uVar8 >> 0xb & 0xf;
    if ((uVar11 != uVar3) && (uVar11 != 10 || uVar3 != 4)) {
      lVar12 = plVar10[5];
      lVar9 = lVar12;
      _strcmp(lVar12,&UNK_10f60711b);
      if ((int)lVar9 == 0) {
        if ((uVar8 & 0x7800) != 0) goto LAB_109e1d13c;
      }
      else {
        _strcmp(lVar12,&UNK_10f60712b);
        if ((int)lVar12 != 0 || (uVar8 & 0x7800) != 0) {
LAB_109e1d13c:
          FUN_109e9ed98(param_2,param_3,&UNK_10f60868f);
        }
      }
    }
  }
  lVar9 = plVar4[4];
  if ((((*(char *)(lVar9 + 4) == '\x13') && (*(int *)(lVar9 + 0x10) == 0)) &&
      (lVar12 = plVar10[4], *(char *)(lVar12 + 4) == '\x13')) &&
     (*(long *)(lVar12 + 0x30) == *(long *)(lVar9 + 0x30))) {
    iVar1 = *(int *)(lVar12 + 0x10);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    FUN_109e1588c(plVar10[5],iVar1,&uStack_70,param_3);
    if ((0 < iVar1) && (iVar1 <= (int)plVar4[0xc])) {
      FUN_109e9ed98(param_2,param_3,&UNK_10f6068c2);
    }
    plVar4[4] = plVar10[4];
    (**(code **)(*plVar10 + 8))(plVar10);
    *param_1 = 0;
    return plVar4;
  }
  if (lVar9 != plVar10[4]) {
    puVar6 = &UNK_10f6086c1;
    goto LAB_109e1d1a8;
  }
  if ((*(byte *)(param_3 + 0x30f) & 1) == 0) {
    bVar13 = *(byte *)(param_3 + 0xe4);
    uVar11 = *(uint *)(param_3 + 0xec);
    uVar8 = uVar11;
    if (uVar11 == 0) {
      uVar8 = *(uint *)(param_3 + 0xe8);
    }
    if ((0x95 < uVar8) && ((bVar13 & 1) == 0)) goto LAB_109e1d1e0;
  }
  else {
LAB_109e1d1e0:
    lVar9 = plVar10[5];
    _strcmp(lVar9,&UNK_10f62bc68);
    if ((int)lVar9 == 0) {
      return plVar4;
    }
    uVar11 = *(uint *)(param_3 + 0xec);
    bVar13 = *(byte *)(param_3 + 0xe4);
  }
  uVar8 = uVar11;
  if (uVar11 == 0) {
    uVar8 = *(uint *)(param_3 + 0xe8);
  }
  if ((bVar13 & 1) == 0 && 0x81 < uVar8) {
    lVar12 = plVar10[5];
    lVar9 = lVar12;
    _strcmp(lVar12,&UNK_10f6086ea);
    if (((((int)lVar9 == 0) || (lVar9 = lVar12, _strcmp(lVar12,&UNK_10f6086f8), (int)lVar9 == 0)) ||
        (lVar9 = lVar12, _strcmp(lVar12,&UNK_10f608705), (int)lVar9 == 0)) ||
       (((lVar9 = lVar12, _strcmp(lVar12,&UNK_10f60871c), (int)lVar9 == 0 ||
         (lVar9 = lVar12, _strcmp(lVar12,&UNK_10f608732), (int)lVar9 == 0)) ||
        (_strcmp(lVar12,&UNK_10f60873b), (int)lVar12 == 0)))) {
      *(uint *)(plVar4 + 8) =
           *(uint *)(plVar4 + 8) & 0xfffe0000 |
           *(uint *)(plVar4 + 8) & 0x7fff | (*(uint *)(plVar10 + 8) >> 0xf & 3) << 0xf;
      return plVar4;
    }
  }
  uVar8 = uVar11;
  if (uVar11 == 0) {
    uVar8 = *(uint *)(param_3 + 0xe8);
  }
  if ((((0x1a3 < uVar8 & (bVar13 ^ 0xff)) != 0) || ((*(byte *)(param_3 + 0x395) & 1) != 0)) ||
     (*(char *)(param_3 + 0x2ff) == '\x01')) {
    lVar9 = plVar10[5];
    _strcmp(lVar9,&UNK_10f607c49);
    if ((int)lVar9 == 0) {
      if ((char)plVar4[8] < '\0') {
        FUN_109e9ed98(param_2,param_3,&UNK_10f60874d);
      }
      uVar7 = *(ushort *)((long)plVar4 + 0x44);
      if (((uVar7 >> 5 & 7) != 0) &&
         ((uVar7 >> 5 & 7) != (*(ushort *)((long)plVar10 + 0x44) >> 5 & 7))) {
        FUN_109e9ed98(param_2,param_3,&UNK_10f6087a0);
        uVar7 = *(ushort *)((long)plVar4 + 0x44);
      }
      uVar7 = *(ushort *)((long)plVar10 + 0x44) & 0xe0 | uVar7 & 0xff1f;
      goto LAB_109e1d580;
    }
  }
  if ((((*(byte *)(param_3 + 0x3a9) & 1) != 0) || ((*(byte *)(param_3 + 0x3c5) & 1) != 0)) ||
     (*(char *)(param_3 + 0x3c7) == '\x01')) {
    lVar12 = plVar10[5];
    lVar9 = lVar12;
    _strcmp(lVar12,&UNK_10f60711b);
    if ((((int)lVar9 == 0) || (_strcmp(lVar12,&UNK_10f60712b), (int)lVar12 == 0)) &&
       ((*(byte *)((long)plVar10 + 0x41) & 0x78) == 0)) {
      uVar2 = *(ushort *)((long)plVar4 + 0x44);
      uVar7 = uVar2 & 7 | (*(ushort *)((long)plVar10 + 0x44) >> 3 & 3) << 3;
      *(ushort *)((long)plVar4 + 0x44) = uVar2 & 0xffe0 | uVar7;
      uVar7 = uVar2 & 0xfbe0 | uVar7 | *(ushort *)((long)plVar10 + 0x44) & 0x400;
LAB_109e1d580:
      *(ushort *)((long)plVar4 + 0x44) = uVar7;
      return plVar4;
    }
  }
  if (*(char *)(param_3 + 0x3fd) == '\x01') {
    lVar9 = plVar10[5];
    _strcmp(lVar9,&UNK_10f607f02);
    if (((int)lVar9 == 0) && ((*(uint *)(plVar4 + 8) & 0x600) == 0x400)) {
      return plVar4;
    }
  }
  uVar8 = uVar11;
  if (uVar11 == 0) {
    uVar8 = *(uint *)(param_3 + 0xe8);
  }
  if (299 < uVar8 && ((bVar13 ^ 0xff) & 1) == 0) {
    if ((*(byte *)(param_3 + 799) & 1) == 0) {
      if (uVar11 == 0) {
        uVar11 = *(uint *)(param_3 + 0xe8);
      }
      if ((uVar11 < 0x136) && (*(char *)(param_3 + 0x3c3) != '\x01')) goto LAB_109e1d34c;
    }
    lVar12 = plVar10[5];
    lVar9 = lVar12;
    _strcmp(lVar12,&UNK_10f606096);
    if (((int)lVar9 == 0) || (_strcmp(lVar12,&UNK_10f6087fb), (int)lVar12 == 0)) {
      if (-1 < (char)plVar4[8]) {
        return plVar4;
      }
      puVar6 = &UNK_10f608808;
      goto LAB_109e1d1a8;
    }
  }
LAB_109e1d34c:
  if ((*(uint *)(plVar4 + 8) & 0x600) == 0x400) {
    if ((param_4 & 1) != 0) {
      return plVar4;
    }
    if ((*(byte *)(param_3 + 0x5a2) & 1) != 0) {
      return plVar4;
    }
  }
  else if ((param_4 & 1) != 0) {
    return plVar4;
  }
  puVar6 = &UNK_10f606429;
LAB_109e1d1a8:
  FUN_109e9ed98(param_2,param_3,puVar6);
  return plVar4;
}



/* Entry: 109e1d588; end: 109e1d62b;  */

void FUN_109e1d588(char *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((((param_1 == (char *)0x0) || (*param_1 != 'g')) || (param_1[1] != 'l')) ||
     (param_1[2] != '_')) {
    _strstr(param_1,&UNK_10f60895d);
    if (param_1 != (char *)0x0) {
      FUN_109e9f044(param_2,param_3,&UNK_10f608960);
    }
  }
  else {
    FUN_109e9ed98(param_2,param_3,&UNK_10f608932);
  }
  return;
}



/* Entry: 109e1d62c; end: 109e1d9af;  */

undefined8 FUN_109e1d62c(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uStack_60 = *(undefined4 *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 0x1c);
  uStack_70 = *(undefined8 *)(param_1 + 0x14);
  puVar1 = *(undefined **)(*(long *)(param_1 + 0x38) + 0x118);
  func_0x000109e19cc4(puVar1,&lStack_48);
  if (puVar1 == (undefined *)0x0) {
    if (lStack_48 == 0) {
      puVar1 = &UNK_10f604dcd;
    }
    else {
      puVar1 = &UNK_10f604da4;
    }
    FUN_109e9ed98(&uStack_70,param_3,puVar1);
    puVar1 = &UNK_10e05d730;
  }
  if (puVar1[4] == '\x14') {
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_109e9ed98(&uStack_70,param_3,&UNK_10f605480);
    }
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  else if ((*(char *)(param_1 + 0x50) == '\x01') && (*(long *)(param_1 + 0x40) == 0)) {
    FUN_109e9ed98(&uStack_70,param_3,&UNK_10f6054a8);
  }
  else {
    puVar11 = &uStack_70;
    FUN_109e19d60(puVar11,puVar1,*(undefined8 *)(param_1 + 0x48),param_3);
    if ((*(char *)((long)puVar11 + 4) == '\x13') && (*(int *)(puVar11 + 2) == 0)) {
      FUN_109e9ed98(&uStack_70,param_3,&UNK_10f6054c6);
      puVar11 = (undefined8 *)&UNK_10e05d730;
    }
    *(undefined1 *)(param_1 + 0x51) = 0;
    puVar2 = param_3;
    FUN_109f658b0(param_3,0x90);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    FUN_109eaba7c(puVar2,puVar11,*(undefined8 *)(param_1 + 0x40),6);
    FUN_109e1c540(*(long *)(param_1 + 0x38) + 0x38,puVar2,param_3,&uStack_70,1);
    uVar12 = *(uint *)(puVar2 + 8);
    uVar4 = uVar12 >> 0xb & 0xf;
    if (((*(uint *)(param_3 + 0x1e) >> (ulong)uVar4 & 1) != 0) &&
       (lVar13 = puVar2[4], (*(uint *)(lVar13 + 4) & 0xfc) < 0xc)) {
      uVar12 = uVar12 | 0x600000;
      *(uint *)(puVar2 + 8) = uVar12;
      puVar3 = (undefined8 *)0xe0;
      _malloc();
      puVar9 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *puVar3 = puVar2 + -6;
        lVar7 = puVar2[-5];
        puVar3[3] = lVar7;
        puVar2[-5] = puVar3;
        if (lVar7 != 0) {
          *(undefined8 **)(lVar7 + 0x10) = puVar3;
          lVar13 = puVar2[4];
          uVar12 = *(uint *)(puVar2 + 8);
        }
        puVar9 = puVar3 + 6;
        puVar3[7] = 0;
        *puVar9 = 0;
        puVar3[0x19] = 0;
        puVar3[0x18] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
        puVar3[0x17] = 0;
        puVar3[0x16] = 0;
        puVar3[0x11] = 0;
        puVar3[0x10] = 0;
        puVar3[0x13] = 0;
        puVar3[0x12] = 0;
        puVar3[0xd] = 0;
        puVar3[0xc] = 0;
        puVar3[0xf] = 0;
        puVar3[0xe] = 0;
        puVar3[9] = 0;
        puVar3[8] = 0;
        puVar3[0xb] = 0;
        puVar3[10] = 0;
      }
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 3;
      *puVar9 = &PTR_DAT_110b63f80;
      puVar9[0x15] = 0;
      puVar9[4] = lVar13;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[7] = 0;
      puVar9[10] = 0;
      puVar9[9] = 0;
      puVar9[0xc] = 0;
      puVar9[0xb] = 0;
      puVar9[0xe] = 0;
      puVar9[0xd] = 0;
      puVar9[0x10] = 0;
      puVar9[0xf] = 0;
      puVar9[0x12] = 0;
      puVar9[0x11] = 0;
      puVar9[0x14] = 0;
      puVar9[0x13] = 0;
      uVar4 = uVar12 >> 0xb & 0xf;
      puVar2[0xf] = puVar9;
    }
    if (uVar4 - 7 < 2) {
      iVar5 = 1;
      for (puVar9 = puVar11; *(char *)((long)puVar9 + 4) == '\x13'; puVar9 = (undefined8 *)puVar9[6]
          ) {
        iVar5 = *(int *)(puVar9 + 2) * iVar5;
      }
      iVar8 = 4;
      if (*(char *)((long)puVar9 + 4) != '\x10') {
        iVar8 = 0;
      }
      if ((iVar8 * iVar5 != 0) ||
         (((*(byte *)((long)param_3 + 0x2f7) & 1) == 0 &&
          (puVar9 = puVar11, func_0x000109ec6694(), (int)puVar9 != 0)))) {
        FUN_109e9ed98(&uStack_70,param_3,&UNK_10f6054fc);
        uVar12 = *(uint *)(puVar2 + 8);
        puVar11 = (undefined8 *)&UNK_10e05d730;
      }
    }
    if (((uVar12 >> 0xb & 0xf) - 7 < 2) && (*(char *)((long)puVar11 + 4) == '\x13')) {
      uVar6 = 0x6e;
      if (*(char *)((long)param_3 + 0x5a1) == '\0') {
        uVar6 = 0x78;
      }
      FUN_109e9ebe4(param_3,uVar6,100,&uStack_70,&UNK_10f605531);
    }
    plVar10 = puVar2 + 1;
    *plVar10 = param_2 + 0x10;
    puVar11 = *(undefined8 **)(param_2 + 0x18);
    puVar2[2] = puVar11;
    *puVar11 = plVar10;
    *(long **)(param_2 + 0x18) = plVar10;
  }
  return 0;
}



/* Entry: 109e1d9b0; end: 109e1e5df;  */

undefined8 FUN_109e1d9b0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  ppuStack_88 = &puStack_a0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_68 = *(long *)(param_1 + 8);
  uStack_70 = *(undefined4 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0x1c);
  uStack_80 = *(undefined8 *)(param_1 + 0x14);
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  uStack_c0 = uStack_80;
  uStack_b8 = uStack_78;
  uStack_b0 = uStack_70;
  lStack_a8 = lStack_68;
  puStack_a0 = &uStack_90;
  if (*(long *)(param_3 + 0x278) != 0) {
    uVar16 = *(uint *)(param_3 + 0xec);
    if (uVar16 == 0) {
      uVar16 = *(uint *)(param_3 + 0xe8);
    }
    uVar11 = 99;
    if (*(char *)(param_3 + 0xe4) == '\0') {
      uVar11 = 0x77;
    }
    if (uVar11 < uVar16) {
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f605582);
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
    }
  }
  FUN_109e1d588(uVar18,&uStack_80,param_3);
  plVar17 = *(long **)(param_1 + 0x48) + -5;
  if ((**(long **)(param_1 + 0x48) != 0) && (plVar17 != (long *)0x0)) {
    uVar16 = 0;
    uVar1 = *(undefined1 *)(param_1 + 0x68);
    plVar4 = (long *)0x0;
    do {
      *(undefined1 *)(plVar17 + 10) = uVar1;
      (**(code **)(*plVar17 + 8))(plVar17,&puStack_a0,param_3);
      plVar6 = plVar17;
      if (*(char *)((long)plVar17 + 0x51) == '\0') {
        plVar6 = plVar4;
      }
      uVar16 = uVar16 + 1;
      plVar15 = plVar17 + 5;
      plVar17 = (long *)*plVar15 + -5;
      plVar4 = plVar6;
    } while (*(long *)*plVar15 != 0 && plVar17 != (long *)0x0);
    if (plVar6 != (long *)0x0 && 1 < uVar16) {
      lStack_68 = plVar6[1];
      uStack_70 = (undefined4)plVar6[2];
      uStack_78 = *(undefined8 *)((long)plVar6 + 0x1c);
      uStack_80 = *(undefined8 *)((long)plVar6 + 0x14);
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f60555a);
    }
  }
  puVar2 = *(undefined **)(*(long *)(param_1 + 0x38) + 0x118);
  func_0x000109e19cc4(puVar2,auStack_c8,param_3);
  if (puVar2 == (undefined *)0x0) {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6055c0);
    puVar2 = &UNK_10e05d730;
  }
  lVar3 = *(long *)(param_1 + 0x38);
  if ((*(long *)(lVar3 + 0x110) != 0) && ((*(byte *)(param_1 + 0x68) & 1) == 0)) {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6055ee);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  FUN_109e24608(lVar3,param_3);
  if ((int)lVar3 != 0) {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f605629);
  }
  if ((puVar2[4] == '\x13') && (*(int *)(puVar2 + 0x10) == 0)) {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f605652);
  }
  if ((*(int *)(param_3 + 0xe8) == 100) &&
     (puVar12 = puVar2, func_0x000109ec652c(), (int)puVar12 != 0)) {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f60568b);
  }
  iVar9 = 1;
  for (puVar12 = puVar2; puVar12[4] == '\x13'; puVar12 = *(undefined **)(puVar12 + 0x30)) {
    iVar9 = *(int *)(puVar12 + 0x10) * iVar9;
  }
  if (puVar12[4] == '\x10') {
    iVar10 = 4;
  }
  else {
    iVar10 = 0;
  }
  if ((iVar10 * iVar9 != 0) ||
     (((*(byte *)(param_3 + 0x2f7) & 1) == 0 &&
      (puVar12 = puVar2, func_0x000109ec6694(), (int)puVar12 != 0)))) {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6056b7);
  }
  if (puVar2[4] == '\x15') {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6056ea);
  }
  if (*(char *)(param_3 + 0xe4) == '\x01') {
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    uVar16 = *(byte *)(*(long *)(param_1 + 0x38) + 0x44) & 3;
    FUN_109e1e5e0(uVar16,puVar2,param_3,&uStack_80);
  }
  else {
    uVar16 = 0;
  }
  lVar3 = *(long *)(*(long *)(param_3 + 0x48) + 8);
  FUN_109f61800(lVar3,uVar18);
  if ((lVar3 == 0) || (plVar17 = *(long **)(lVar3 + 8), plVar17 == (long *)0x0)) {
    plVar4 = (long *)0x90;
    _malloc();
    plVar17 = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4[3] = 0;
      plVar4[2] = 0;
      *plVar4 = param_3 + -0x30;
      lVar3 = *(long *)(param_3 + -0x28);
      plVar4[3] = lVar3;
      plVar4[4] = 0;
      *(long **)(param_3 + -0x28) = plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar4;
      }
      plVar17 = plVar4 + 6;
      plVar4[7] = 0;
      *plVar17 = 0;
      plVar4[0xf] = 0;
      plVar4[0xe] = 0;
      plVar4[0x11] = 0;
      plVar4[0x10] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
      plVar4[0xd] = 0;
      plVar4[0xc] = 0;
      plVar4[9] = 0;
      plVar4[8] = 0;
    }
    plVar6 = plVar17 + 1;
    *plVar6 = 0;
    plVar17[2] = 0;
    *(undefined4 *)(plVar17 + 3) = 10;
    *plVar17 = (long)&PTR_DAT_110b642e0;
    plVar17[7] = 0;
    plVar17[5] = (long)(plVar17 + 7);
    plVar17[6] = 0;
    plVar17[8] = (long)(plVar17 + 5);
    *(undefined4 *)(plVar17 + 0xb) = 0xffffffff;
    plVar4 = plVar17;
    FUN_109f65c2c(plVar17,uVar18);
    plVar17[4] = (long)plVar4;
    if (((*(byte *)(*(long *)(param_1 + 0x38) + 0x3f) >> 1 & 1) != 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x110) == 0)) {
LAB_109e1de84:
      lVar3 = *(long *)(param_3 + 0x280);
      plVar17[1] = lVar3 + 0x10;
      puVar13 = *(undefined8 **)(lVar3 + 0x18);
      plVar17[2] = (long)puVar13;
      *puVar13 = plVar6;
      *(long **)(lVar3 + 0x18) = plVar6;
      goto LAB_109e1dea0;
    }
    uVar5 = *(ulong *)(param_3 + 0x48);
    FUN_109ea2360(uVar5,plVar17);
    if ((uVar5 & 1) != 0) goto LAB_109e1de84;
    lStack_68 = *(long *)(param_1 + 8);
    uStack_70 = *(undefined4 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x1c);
    uStack_80 = *(undefined8 *)(param_1 + 0x14);
    puVar2 = &UNK_10f60571f;
LAB_109e1df14:
    puVar13 = &uStack_80;
    goto LAB_109e1df18;
  }
LAB_109e1dea0:
  if (*(char *)(param_3 + 0xe4) == '\x01') {
    uVar11 = *(uint *)(param_3 + 0xe8);
    if (299 < uVar11) {
      lVar3 = param_3;
      FUN_109e26e80(param_3,uVar18);
      if ((int)lVar3 != 0) {
        lStack_68 = *(long *)(param_1 + 8);
        uStack_70 = *(undefined4 *)(param_1 + 0x10);
        uStack_78 = *(undefined8 *)(param_1 + 0x1c);
        uStack_80 = *(undefined8 *)(param_1 + 0x14);
        puVar2 = &UNK_10f60574e;
        goto LAB_109e1df14;
      }
      uVar11 = *(uint *)(param_3 + 0xe8);
    }
    if (((uVar11 == 100) && (lVar3 = param_3, FUN_109e26ce0(param_3,uVar18,&puStack_a0), lVar3 != 0)
        ) && (*(long *)(lVar3 + 0x70) != 0)) {
      FUN_109e9ed98(&uStack_c0,param_3,&UNK_10f60579a);
    }
  }
  if ((*(byte *)(param_3 + 0xe4) & 1) == 0) {
    plVar4 = (long *)plVar17[5];
    do {
      if ((long *)*plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_109e1e0e4;
      }
      plVar6 = plVar4 + 0xd;
      plVar4 = (long *)*plVar4;
    } while (*plVar6 != 0);
  }
  plVar4 = plVar17;
  FUN_109eb38b8(plVar17,param_3,&puStack_a0);
  if (plVar4 != (long *)0x0) {
    plVar6 = plVar4;
    FUN_109eabbe4(plVar4,&puStack_a0);
    if (plVar6 != (long *)0x0) {
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6057da);
    }
    if ((undefined *)plVar4[4] != puVar2) {
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f605818);
    }
    bVar7 = *(byte *)(plVar4 + 9);
    if (uVar16 != (bVar7 >> 1 & 3)) {
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f60584a);
      bVar7 = *(byte *)(plVar4 + 9);
    }
    if ((bVar7 & 1) == 0) {
      if ((*(int *)(param_3 + 0xe8) != 100) || ((*(byte *)(param_1 + 0x68) & 1) != 0))
      goto LAB_109e1e0e4;
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      puVar12 = &UNK_10f60589e;
    }
    else {
      if (*(char *)(param_1 + 0x68) != '\x01') {
        return 0;
      }
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      puVar12 = &UNK_10f605886;
    }
    FUN_109e9ed98(&uStack_80,param_3,puVar12);
  }
LAB_109e1e0e4:
  _strcmp(uVar18,"main");
  if ((int)uVar18 == 0) {
    if (puVar2[4] != '\x14') {
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6058b7);
    }
    if (puStack_a0 != &uStack_90) {
      lStack_68 = *(long *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x1c);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      FUN_109e9ed98(&uStack_80,param_3,&UNK_10f6058cf);
    }
  }
  if (plVar4 == (long *)0x0) {
    plVar6 = (long *)0xc0;
    _malloc();
    plVar6[1] = 0;
    *plVar6 = 0;
    plVar6[3] = 0;
    plVar6[2] = 0;
    plVar6[4] = 0;
    if (param_3 != 0) {
      *plVar6 = param_3 + -0x30;
      lVar3 = *(long *)(param_3 + -0x28);
      plVar6[3] = lVar3;
      *(long **)(param_3 + -0x28) = plVar6;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar6;
      }
    }
    plVar4 = plVar6 + 6;
    *plVar4 = (long)&PTR_DAT_110b642a0;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    *(undefined8 *)((long)plVar6 + 0x74) = 0;
    *(undefined8 *)((long)plVar6 + 0x6c) = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    *(undefined4 *)(plVar6 + 9) = 0xb;
    plVar6[10] = (long)puVar2;
    plVar6[0xd] = 0;
    plVar6[0xb] = (long)(plVar6 + 0xd);
    plVar6[0xc] = 0;
    plVar6[0xe] = (long)(plVar6 + 0xb);
    *(undefined4 *)((long)plVar6 + 0x7c) = 0;
    plVar6[0x12] = 0;
    plVar6[0x10] = (long)(plVar6 + 0x12);
    plVar6[0x11] = 0;
    plVar6[0x13] = (long)(plVar6 + 0x10);
    plVar6[0x14] = 0;
    plVar6[0x15] = 0;
    plVar6[0x16] = 0;
    *(char *)(plVar6 + 0xf) = (char)(uVar16 << 1);
    plVar6[0x15] = (long)plVar17;
    plVar15 = plVar6 + 7;
    *plVar15 = (long)(plVar17 + 7);
    puVar13 = (undefined8 *)plVar17[8];
    plVar6[8] = (long)puVar13;
    *puVar13 = plVar15;
    plVar17[8] = (long)plVar15;
  }
  plVar6 = plVar4 + 5;
  if (puStack_a0 == &uStack_90) {
    plVar4[7] = 0;
    plVar4[5] = (long)(plVar4 + 7);
    plVar4[6] = 0;
    plVar4[8] = (long)plVar6;
  }
  else {
    plVar4[7] = 0;
    plVar4[5] = (long)puStack_a0;
    plVar4[6] = 0;
    plVar4[8] = (long)ppuStack_88;
    puStack_a0[1] = plVar6;
    *(long **)plVar4[8] = plVar4 + 7;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_88 = &puStack_a0;
    puStack_a0 = &uStack_90;
  }
  *(long **)(param_1 + 0x70) = plVar4;
  lVar3 = *(long *)(param_1 + 0x38);
  lVar14 = *(long *)(lVar3 + 0x110);
  if (lVar14 != 0) {
    if ((*(byte *)(lVar3 + 0x3a) >> 4 & 1) != 0) {
      lVar14 = param_3;
      FUN_109e25338(param_3,&uStack_c0,&DAT_10f2c4679,*(undefined8 *)(lVar3 + 0x60),&uStack_80);
      if ((int)lVar14 != 0) {
        if ((*(byte *)(param_3 + 0x30d) & 1) == 0) {
          uVar16 = *(uint *)(param_3 + 0xec);
          if (uVar16 == 0) {
            uVar16 = *(uint *)(param_3 + 0xe8);
          }
          uVar11 = 0x135;
          if (*(char *)(param_3 + 0xe4) == '\0') {
            uVar11 = 0x1ad;
          }
          if (uVar11 < uVar16) goto LAB_109e1e2e4;
          puVar2 = &UNK_10f6058f3;
        }
        else {
LAB_109e1e2e4:
          if ((uint)uStack_80 < 0x100) {
            *(uint *)(plVar17 + 0xb) = (uint)uStack_80;
            goto LAB_109e1e320;
          }
          puVar2 = &UNK_10f60593b;
        }
        FUN_109e9ed98(&uStack_c0,param_3,puVar2);
      }
LAB_109e1e320:
      lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x110);
    }
    plVar15 = *(long **)(lVar14 + 0x38);
    uVar5 = 0xffffffff;
    do {
      plVar15 = (long *)*plVar15;
      uVar16 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar16;
    } while (plVar15 != (long *)0x0);
    *(uint *)((long)plVar17 + 0x4c) = uVar16;
    lVar3 = param_3;
    FUN_109f658b0(param_3,uVar5 << 3);
    plVar17[10] = lVar3;
    plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x38) + 0x110) + 0x38);
    plVar22 = plVar15 + -5;
    if (*plVar15 != 0 && plVar22 != (long *)0x0) {
      lVar3 = 0;
      do {
        lVar14 = *(long *)(*(long *)(param_3 + 0x48) + 8);
        FUN_109f61800(lVar14,plVar22[7]);
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) {
          FUN_109e9ed98(&uStack_c0,param_3,&UNK_10f60599a);
          lVar14 = 0;
        }
        if (0 < *(int *)(param_3 + 0x5a4)) {
          lVar20 = 0;
          do {
            lVar21 = *(long *)(*(long *)(param_3 + 0x5a8) + lVar20 * 8);
            uVar18 = *(undefined8 *)(lVar21 + 0x20);
            _strcmp(uVar18,plVar22[7]);
            if ((int)uVar18 == 0) {
              if ((*(byte *)(param_3 + 0x3cf) & 1) == 0) {
                uVar16 = *(uint *)(param_3 + 0xec);
                if (uVar16 == 0) {
                  uVar16 = *(uint *)(param_3 + 0xe8);
                }
                uVar11 = 0x6d;
                if ((*(byte *)(param_3 + 0x5a1) & 1) == 0) {
                  uVar11 = 0x77;
                }
                bVar7 = uVar11 < uVar16 & (*(byte *)(param_3 + 0xe4) ^ 0xff);
              }
              else {
                bVar7 = 1;
              }
              if (((*(byte *)(param_3 + 0x315) & 1) == 0) &&
                 (((*(byte *)(param_3 + 0x3ef) | *(byte *)(param_3 + 0x3cf)) & 1) == 0)) {
                uVar16 = *(uint *)(param_3 + 0xec);
                if (uVar16 == 0) {
                  uVar16 = *(uint *)(param_3 + 0xe8);
                }
                bVar8 = 0;
                if (399 < uVar16) {
                  bVar8 = *(byte *)(param_3 + 0xe4) ^ 1;
                }
              }
              else {
                bVar8 = 1;
              }
              FUN_109eb35f0(lVar21,param_3,plVar6,bVar7,bVar8,0,&uStack_80);
              if (lVar21 == 0) {
                puVar2 = &UNK_10f6059ce;
              }
              else {
                puVar2 = &UNK_10f605a07;
                if (*(long *)(lVar21 + 0x20) == plVar4[4]) goto LAB_109e1e4a8;
              }
              FUN_109e9ed98(&uStack_c0,param_3,puVar2);
            }
LAB_109e1e4a8:
            lVar20 = lVar20 + 1;
          } while (lVar20 < *(int *)(param_3 + 0x5a4));
        }
        *(long *)(plVar17[10] + lVar3 * 8) = lVar14;
        lVar3 = lVar3 + 1;
        plVar15 = plVar22 + 5;
        plVar22 = (long *)*plVar15 + -5;
      } while (*(long *)*plVar15 != 0 && plVar22 != (long *)0x0);
    }
    lVar3 = param_3;
    FUN_109f65a40(param_3,*(undefined8 *)(param_3 + 0x5b8),8,*(int *)(param_3 + 0x5b0) + 1);
    *(long *)(param_3 + 0x5b8) = lVar3;
    iVar9 = *(int *)(param_3 + 0x5b0);
    *(long **)(lVar3 + (long)iVar9 * 8) = plVar17;
    *(int *)(param_3 + 0x5b0) = iVar9 + 1;
    lVar3 = *(long *)(param_1 + 0x38);
  }
  if ((*(byte *)(lVar3 + 0x3f) >> 1 & 1) == 0) {
    return 0;
  }
  if (*(long *)(lVar3 + 0x110) != 0) {
    return 0;
  }
  lVar3 = *(long *)(param_3 + 0x48);
  uVar19 = *(undefined8 *)(param_1 + 0x40);
  uVar18 = uVar19;
  func_0x000109ec8254();
  puVar13 = *(undefined8 **)(lVar3 + 0x18);
  FUN_109f6650c(puVar13,0x40);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = uVar18;
  puVar13[4] = 0;
  puVar13[3] = 0;
  puVar13[6] = 0;
  puVar13[5] = 0;
  puVar13[7] = 0;
  uVar18 = *(undefined8 *)(lVar3 + 8);
  FUN_109f61854(uVar18,uVar19,puVar13);
  if ((int)uVar18 == 0) {
    lVar3 = param_3;
    FUN_109f65a40(param_3,*(undefined8 *)(param_3 + 0x5a8),8,*(int *)(param_3 + 0x5a4) + 1);
    *(long *)(param_3 + 0x5a8) = lVar3;
    iVar9 = *(int *)(param_3 + 0x5a4);
    *(long **)(lVar3 + (long)iVar9 * 8) = plVar17;
    *(int *)(param_3 + 0x5a4) = iVar9 + 1;
    *(undefined1 *)(plVar17 + 9) = 1;
    return 0;
  }
  puVar2 = &UNK_10f605a42;
  puVar13 = &uStack_c0;
LAB_109e1df18:
  FUN_109e9ed98(puVar13,param_3,puVar2);
  return 0;
}



/* Entry: 109e1e5e0; end: 109e1e8e7;  */

undefined8 FUN_109e1e5e0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  if ((int)param_1 != 0) goto LAB_109e1e864;
  lVar6 = param_2;
  FUN_109e1cff0();
  if ((int)lVar6 == 0) {
    param_1 = 0;
    goto LAB_109e1e864;
  }
  uVar2 = *(uint *)(param_2 + 4);
  lVar6 = param_2;
  while ((uVar2 & 0xff) == 0x13) {
    lVar6 = *(long *)(lVar6 + 0x30);
    uVar2 = *(uint *)(lVar6 + 4);
  }
  uVar1 = uVar2 & 0xff;
  if (uVar1 < 0xd) {
    puVar4 = &DAT_10f62bbce;
    if (1 < uVar1) {
      puVar4 = &DAT_10f33a2d8;
    }
  }
  else if (uVar1 == 0xd || uVar1 == 0xf) {
    uVar1 = uVar2 >> 0x13 & 2 | uVar2 >> 0x15 & 1;
    uVar5 = 0;
    if ((uVar2 & 0xff) != 0xd) {
      uVar5 = 4;
    }
    uVar3 = uVar2 >> 0x10 & 0xf;
    uVar2 = uVar2 >> 8 & 0xff;
    if (uVar2 == 0) {
      uVar2 = uVar5 | uVar1;
      ppuVar7 = &PTR_DAT_110b5e5d8 + uVar2;
      if (uVar3 != 5) {
        ppuVar7 = &PTR_DAT_110b5e598 + uVar1;
      }
      ppuVar8 = &PTR_DAT_110b5e558 + uVar2;
      if (uVar3 != 3) {
        ppuVar8 = &PTR_DAT_110b5e5b8 + uVar1;
      }
      if (uVar3 < 5) {
        ppuVar7 = ppuVar8;
      }
      ppuVar8 = &PTR_DAT_110b5e4b8 + uVar1;
      ppuVar9 = &PTR_DAT_110b5e4d8 + uVar2;
      ppuVar10 = &PTR_DAT_110b5e518;
LAB_109e1e798:
      if (uVar3 != 1) {
        ppuVar9 = ppuVar10 + (uVar5 | uVar1);
      }
      if (uVar3 != 0) {
        ppuVar8 = ppuVar9;
      }
      if (uVar3 < 3) {
        ppuVar7 = ppuVar8;
      }
    }
    else {
      if (uVar2 == 1) {
        uVar2 = uVar5 | uVar1;
        ppuVar7 = &PTR_DAT_110b5e478 + uVar2;
        if (uVar3 != 5) {
          ppuVar7 = &PTR_DAT_110b5e438 + uVar1;
        }
        ppuVar8 = &PTR_DAT_110b5e3f8 + uVar2;
        if (uVar3 != 3) {
          ppuVar8 = &PTR_DAT_110b5e458 + uVar1;
        }
        if (uVar3 < 5) {
          ppuVar7 = ppuVar8;
        }
        ppuVar8 = &PTR_DAT_110b5e358 + uVar1;
        ppuVar9 = &PTR_DAT_110b5e378 + uVar2;
        ppuVar10 = &PTR_DAT_110b5e3b8;
        goto LAB_109e1e798;
      }
      ppuVar7 = &PTR_DAT_110b5e338 + uVar1;
      if (uVar3 != 6) {
        ppuVar7 = &PTR_DAT_110b5e2b8 + uVar1;
      }
      uVar5 = uVar5 | uVar1;
      ppuVar8 = &PTR_DAT_110b5e2d8 + uVar1;
      if (uVar3 != 4) {
        ppuVar8 = &PTR_DAT_110b5e2f8 + uVar5;
      }
      if (uVar3 < 6) {
        ppuVar7 = ppuVar8;
      }
      ppuVar8 = &PTR_DAT_110b5e238 + uVar5;
      if (uVar3 != 2) {
        ppuVar8 = &PTR_DAT_110b5e278 + uVar5;
      }
      ppuVar9 = &PTR_DAT_110b5e1d8 + uVar1;
      if (uVar3 != 0) {
        ppuVar9 = &PTR_DAT_110b5e1f8 + uVar5;
      }
      if (uVar3 < 2) {
        ppuVar8 = ppuVar9;
      }
      if (uVar3 < 4) {
        ppuVar7 = ppuVar8;
      }
    }
    puVar4 = *ppuVar7;
  }
  else {
    puVar4 = &UNK_10f48d5d3;
  }
  param_1 = *(undefined8 *)(param_3 + 0x48);
  FUN_109ea24e4(param_1,puVar4);
  if ((int)param_1 == 0) {
    if ((*(byte *)(param_2 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    FUN_109e9f044(param_4,param_3,&UNK_10f60898a);
    return 1;
  }
LAB_109e1e864:
  if (((int)param_1 != 1) && (*(char *)(param_2 + 4) == '\x10')) {
    FUN_109e9ed98(param_4,param_3,&UNK_10f6089bd);
  }
  return param_1;
}



/* Entry: 109e1e8e8; end: 109e1f2e3;  */

undefined8 FUN_109e1e8e8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined1 *)(plVar1 + 0xd) = 1;
  (**(code **)(*plVar1 + 8))();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x70);
  if (lVar4 != 0) {
    *(long *)(param_3 + 0x278) = lVar4;
    *(undefined2 *)(param_3 + 0x288) = 0;
    *(undefined1 *)(param_3 + 0x28a) = 0;
    FUN_109f61740(*(undefined8 *)(*(long *)(param_3 + 0x48) + 8));
    plVar1 = *(long **)(lVar4 + 0x28);
    lVar3 = *plVar1;
    while (lVar3 != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x48) + 8);
      FUN_109f61798(uVar2,plVar1[4]);
      if ((int)uVar2 == 0) {
        uStack_48 = *(undefined8 *)(param_1 + 8);
        uStack_50 = *(undefined4 *)(param_1 + 0x10);
        uStack_58 = *(undefined8 *)(param_1 + 0x1c);
        uStack_60 = *(undefined8 *)(param_1 + 0x14);
        FUN_109e9ed98(&uStack_60,param_3,&UNK_10f605a5f);
      }
      else {
        FUN_109ea2118(*(undefined8 *)(param_3 + 0x48),plVar1 + -1);
      }
      plVar1 = (long *)*plVar1;
      lVar3 = *plVar1;
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 8))(*(long **)(param_1 + 0x40),lVar4 + 0x50,param_3);
    *(byte *)(lVar4 + 0x48) = *(byte *)(lVar4 + 0x48) | 1;
    FUN_109f61680(*(undefined8 *)(*(long *)(param_3 + 0x48) + 8));
    *(undefined8 *)(param_3 + 0x278) = 0;
    if ((*(char *)(*(long *)(lVar4 + 0x20) + 4) != '\x14') &&
       ((*(byte *)(param_3 + 0x288) & 1) == 0)) {
      uStack_48 = *(undefined8 *)(param_1 + 8);
      uStack_50 = *(undefined4 *)(param_1 + 0x10);
      uStack_58 = *(undefined8 *)(param_1 + 0x1c);
      uStack_60 = *(undefined8 *)(param_1 + 0x14);
      if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0xc) >> 1 & 1) == 0) {
        FUN_109eca058();
      }
      FUN_109e9ed98(&uStack_60,param_3,&UNK_10f605a79);
    }
  }
  return 0;
}



/* Entry: 109e1f2e4; end: 109e1f3a3;  */

undefined8 FUN_109e1f2e4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_3 + 0xf8) != 4) {
    uStack_28 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_38 = *(undefined8 *)(param_1 + 0x1c);
    uStack_40 = *(undefined8 *)(param_1 + 0x14);
    FUN_109e9ed98(&uStack_40,param_3,&UNK_10f605c30);
  }
  plVar1 = (long *)0x50;
  _malloc();
  plVar1[1] = 0;
  *plVar1 = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  *plVar1 = param_3 + -0x30;
  lVar3 = *(long *)(param_3 + -0x28);
  plVar1[3] = lVar3;
  plVar1[4] = 0;
  *(long **)(param_3 + -0x28) = plVar1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 0x10) = plVar1;
  }
  plVar2 = plVar1 + 7;
  *plVar2 = param_2 + 0x10;
  plVar1[9] = 0x11;
  plVar1[6] = (long)&PTR_DAT_110b63b80;
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  plVar1[8] = (long)puVar4;
  *puVar4 = plVar2;
  *(long **)(param_2 + 0x18) = plVar2;
  return 0;
}



/* Entry: 109e1f3a4; end: 109e1f54b;  */

undefined8 FUN_109e1f3a4(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  plVar1 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar1 + 8))();
  if ((*(char *)(plVar1[4] + 4) != '\v') || (*(char *)(plVar1[4] + 0xd) != '\x01')) {
    lVar3 = *(long *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(lVar3 + 8);
    uStack_60 = *(undefined4 *)(lVar3 + 0x10);
    uStack_68 = *(undefined8 *)(lVar3 + 0x1c);
    uStack_70 = *(undefined8 *)(lVar3 + 0x14);
    FUN_109e9ed98(&uStack_70,param_3,&UNK_10f605c5e);
  }
  puVar2 = param_3;
  FUN_109f658b0(param_3,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xc] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar6 = puVar2 + 1;
  *puVar6 = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0xc;
  *puVar2 = &PTR_FUN_110b639a8;
  puVar2[7] = 0;
  puVar5 = puVar2 + 5;
  *puVar5 = puVar2 + 7;
  puVar2[4] = plVar1;
  puVar2[6] = 0;
  puVar2[8] = puVar5;
  puVar2[0xb] = 0;
  puVar4 = puVar2 + 9;
  *puVar4 = puVar2 + 0xb;
  puVar2[10] = 0;
  puVar2[0xc] = puVar4;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_109f61740(*(undefined8 *)(param_3[9] + 8));
    (**(code **)(**(long **)(param_1 + 0x40) + 8))(*(long **)(param_1 + 0x40),puVar5,param_3);
    FUN_109f61680(*(undefined8 *)(param_3[9] + 8));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_109f61740(*(undefined8 *)(param_3[9] + 8));
    (**(code **)(**(long **)(param_1 + 0x48) + 8))(*(long **)(param_1 + 0x48),puVar4,param_3);
    FUN_109f61680(*(undefined8 *)(param_3[9] + 8));
  }
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  puVar2[1] = param_2 + 0x10;
  puVar2[2] = puVar4;
  *puVar4 = puVar6;
  *(undefined8 **)(param_2 + 0x18) = puVar6;
  return 0;
}



/* Entry: 109e1f54c; end: 109e1fd9f;  */

undefined8 FUN_109e1f54c(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
    *(long **)(param_1 + 0x48) = plVar2;
  }
  if ((*(char *)(plVar2[4] + 0xd) == '\x01') && ((*(byte *)(plVar2[4] + 4) & 0xfe) == 0)) {
    plVar2 = param_3 + 0x53;
    uStack_98 = param_3[0x54];
    lStack_a0 = *plVar2;
    uStack_88 = param_3[0x56];
    uStack_90 = param_3[0x55];
    uStack_78 = param_3[0x58];
    uStack_80 = param_3[0x57];
    uStack_68 = param_3[0x5a];
    uStack_70 = param_3[0x59];
    *(undefined1 *)(param_3 + 0x5a) = 1;
    param_3[0x55] = param_1;
    uVar3 = 0;
    FUN_109f64c74(0,FUN_109e1fda0,0x109e1fda8);
    param_3[0x58] = uVar3;
    param_3[0x59] = 0;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 3;
    puVar9[4] = &UNK_10e05d730;
    *puVar9 = &PTR_DAT_110b63f80;
    puVar9[0x15] = 0;
    uVar3 = 0xb;
    func_0x000109ec6c94(0xb,1,1,0,0,0);
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[4] = uVar3;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x90);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109eaba7c();
    param_3[0x54] = puVar9;
    lVar7 = param_2 + 0x10;
    puVar9[1] = lVar7;
    plVar4 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = puVar9 + 1;
    }
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    puVar9[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(param_2 + 0x18) = plVar4;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    lVar8 = param_3[0x54];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[5] = lVar8;
    puVar9[4] = *(undefined8 *)(lVar8 + 0x20);
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x38);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[6] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    func_0x000109ea9180();
    puVar9[1] = lVar7;
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    plVar4 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = puVar9 + 1;
    }
    puVar9[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(param_2 + 0x18) = plVar4;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x90);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109eaba7c();
    param_3[0x56] = puVar9;
    puVar9[1] = lVar7;
    plVar4 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = puVar9 + 1;
    }
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    puVar9[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(param_2 + 0x18) = plVar4;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0xb0);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0x13] = 0;
      puVar9[0x12] = 0;
      puVar9[0x15] = 0;
      puVar9[0x14] = 0;
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 3;
    puVar9[4] = &UNK_10e05d730;
    *puVar9 = &PTR_DAT_110b63f80;
    puVar9[0x15] = 0;
    uVar3 = 0xb;
    func_0x000109ec6c94(0xb,1,1,0,0,0);
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[4] = uVar3;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x30);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    lVar8 = param_3[0x56];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 2;
    *puVar9 = &PTR_DAT_110b64048;
    puVar9[5] = lVar8;
    puVar9[4] = *(undefined8 *)(lVar8 + 0x20);
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x38);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[6] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    func_0x000109ea9180();
    puVar9[1] = lVar7;
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    plVar4 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = puVar9 + 1;
    }
    puVar9[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(param_2 + 0x18) = plVar4;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x90);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[0xf] = 0;
      puVar9[0xe] = 0;
      puVar9[0x11] = 0;
      puVar9[0x10] = 0;
      puVar9[0xb] = 0;
      puVar9[10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xc] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[9] = 0;
      puVar9[8] = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
    }
    FUN_109eaba7c();
    param_3[0x57] = puVar9;
    puVar9[1] = lVar7;
    plVar4 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = puVar9 + 1;
    }
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    puVar9[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(param_2 + 0x18) = plVar4;
    puVar9 = param_3;
    FUN_109f658b0(param_3,0x40);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
    }
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0xd;
    *puVar9 = &PTR_FUN_110b64008;
    puVar12 = puVar9 + 6;
    *puVar12 = 0;
    puVar6 = puVar9 + 4;
    *puVar6 = puVar12;
    puVar9[5] = 0;
    puVar9[7] = puVar6;
    plVar4 = puVar9 + 1;
    *plVar4 = lVar7;
    puVar10 = *(undefined8 **)(param_2 + 0x18);
    puVar9[2] = puVar10;
    *puVar10 = plVar4;
    *(long **)(param_2 + 0x18) = plVar4;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(*(long **)(param_1 + 0x38),1);
    if (*(long *)(param_1 + 0x48) == 0) {
      plVar4 = *(long **)(param_1 + 0x38);
      (**(code **)(*plVar4 + 8))(plVar4,puVar6,param_3);
      *(long **)(param_1 + 0x48) = plVar4;
    }
    puVar10 = param_3;
    FUN_109f658b0(param_3,0x90);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[0xf] = 0;
      puVar10[0xe] = 0;
      puVar10[0x11] = 0;
      puVar10[0x10] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      puVar10[0xd] = 0;
      puVar10[0xc] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    FUN_109eaba7c();
    param_3[0x53] = puVar10;
    puVar10 = param_3;
    FUN_109f658b0(param_3,0x30);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
    }
    lVar8 = *plVar2;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 2;
    *puVar10 = &PTR_DAT_110b64048;
    puVar10[5] = lVar8;
    puVar10[4] = *(undefined8 *)(lVar8 + 0x20);
    lVar8 = *plVar2;
    *(undefined8 *)(lVar8 + 8) = puVar12;
    puVar5 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      puVar5 = (undefined8 *)(lVar8 + 8);
    }
    puVar13 = (undefined8 *)puVar9[7];
    *(undefined8 **)(lVar8 + 0x10) = puVar13;
    *puVar13 = puVar5;
    puVar9[7] = puVar5;
    puVar5 = (undefined8 *)0x70;
    _malloc();
    if (puVar5 == (undefined8 *)0x0) {
      func_0x000109ea9180();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109e1fda0);
      (*pcVar1)();
    }
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar13 = param_3 + -6;
    *puVar5 = puVar13;
    lVar8 = param_3[-5];
    puVar5[3] = lVar8;
    puVar5[4] = 0;
    param_3[-5] = puVar5;
    if (lVar8 != 0) {
      *(undefined8 **)(lVar8 + 0x10) = puVar5;
    }
    puVar5[0xc] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    func_0x000109ea9180(puVar5 + 6,puVar10,*(undefined8 *)(param_1 + 0x48));
    puVar10 = puVar5 + 7;
    *puVar10 = puVar12;
    puVar11 = (undefined8 *)puVar9[7];
    puVar5[8] = puVar11;
    *puVar11 = puVar10;
    puVar9[7] = puVar10;
    (**(code **)(**(long **)(param_1 + 0x40) + 8))(*(long **)(param_1 + 0x40),puVar6,param_3);
    puVar10 = param_3;
    FUN_109f658b0(param_3,0x20);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
    }
    puVar10[2] = 0;
    *puVar10 = &PTR_DAT_110b63ad0;
    puVar6 = puVar10 + 1;
    *puVar6 = puVar12;
    puVar10[3] = 0xe;
    puVar12 = (undefined8 *)puVar9[7];
    puVar10[2] = puVar12;
    *puVar12 = puVar6;
    puVar9[7] = puVar6;
    if (param_3[0x52] != 0) {
      puVar10 = (undefined8 *)0x60;
      _malloc();
      puVar9 = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        *puVar10 = puVar13;
        lVar8 = param_3[-5];
        puVar10[3] = lVar8;
        puVar10[4] = 0;
        param_3[-5] = puVar10;
        if (lVar8 != 0) {
          *(undefined8 **)(lVar8 + 0x10) = puVar10;
        }
        puVar9 = puVar10 + 6;
        puVar10[7] = 0;
        *puVar9 = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
      }
      lVar8 = param_3[0x56];
      puVar9[1] = 0;
      puVar9[2] = 0;
      *(undefined4 *)(puVar9 + 3) = 2;
      *puVar9 = &PTR_DAT_110b64048;
      puVar9[5] = lVar8;
      puVar9[4] = *(undefined8 *)(lVar8 + 0x20);
      puVar6 = (undefined8 *)0xa0;
      _malloc();
      puVar10 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        *puVar6 = puVar13;
        lVar8 = param_3[-5];
        puVar6[3] = lVar8;
        puVar6[4] = 0;
        param_3[-5] = puVar6;
        if (lVar8 != 0) {
          *(undefined8 **)(lVar8 + 0x10) = puVar6;
        }
        puVar10 = puVar6 + 6;
        puVar6[7] = 0;
        *puVar10 = 0;
        puVar6[0x12] = 0;
        puVar6[0xf] = 0;
        puVar6[0xe] = 0;
        puVar6[0x11] = 0;
        puVar6[0x10] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        puVar6[0xd] = 0;
        puVar6[0xc] = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
      }
      puVar5 = puVar10 + 1;
      *puVar5 = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0xc;
      *puVar10 = &PTR_FUN_110b639a8;
      puVar10[4] = puVar9;
      puVar11 = puVar10 + 7;
      *puVar11 = 0;
      puVar12 = puVar10 + 5;
      *puVar12 = puVar11;
      puVar10[6] = 0;
      puVar10[0xb] = 0;
      puVar10[8] = puVar12;
      puVar10[9] = puVar10 + 0xb;
      puVar10[10] = 0;
      puVar10[0xc] = puVar10 + 9;
      puVar6 = (undefined8 *)0x50;
      _malloc();
      puVar9 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        *puVar6 = puVar13;
        lVar8 = param_3[-5];
        puVar6[3] = lVar8;
        puVar6[4] = 0;
        param_3[-5] = puVar6;
        if (lVar8 != 0) {
          *(undefined8 **)(lVar8 + 0x10) = puVar6;
        }
        puVar9 = puVar6 + 6;
        puVar6[7] = 0;
        *puVar9 = 0;
        puVar6[9] = 0;
        puVar6[8] = 0;
      }
      puVar6 = puVar9 + 1;
      puVar9[2] = 0;
      *puVar6 = 0;
      *puVar9 = &PTR_DAT_110b63ad0;
      puVar9[3] = 0x10000000e;
      lVar8 = param_3[0x52];
      if (lVar8 != 0) {
        if (*(long *)(lVar8 + 0x50) != 0) {
          FUN_109ead888(param_3,puVar12,lVar8 + 0x58);
          lVar8 = param_3[0x52];
        }
        if (*(int *)(lVar8 + 0x38) == 2) {
          func_0x000109e1f128(lVar8,puVar12,param_3);
        }
      }
      puVar12 = (undefined8 *)puVar10[8];
      puVar9[1] = puVar11;
      puVar9[2] = puVar12;
      *puVar12 = puVar6;
      puVar10[8] = puVar6;
      puVar9 = *(undefined8 **)(param_2 + 0x18);
      puVar10[1] = lVar7;
      puVar10[2] = puVar9;
      *puVar9 = puVar5;
      *(undefined8 **)(param_2 + 0x18) = puVar5;
    }
    if (param_3[0x58] != 0) {
      lVar7 = param_3[0x58] + -0x30;
      FUN_109f65aa4(lVar7);
      FUN_109f65ae0(lVar7);
    }
    param_3[0x54] = uStack_98;
    *plVar2 = lStack_a0;
    param_3[0x56] = uStack_88;
    param_3[0x55] = uStack_90;
    param_3[0x58] = uStack_78;
    param_3[0x57] = uStack_80;
    param_3[0x5a] = uStack_68;
    param_3[0x59] = uStack_70;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x38);
    uStack_88 = *(undefined8 *)(lVar7 + 8);
    uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar7 + 0x10));
    uStack_98 = *(undefined8 *)(lVar7 + 0x1c);
    lStack_a0 = *(long *)(lVar7 + 0x14);
    FUN_109e9ed98(&lStack_a0,param_3,&UNK_10f605c8c);
  }
  return 0;
}



/* Entry: 109e1fda0; end: 109e1fdbb;  */

undefined4 FUN_109e1fda0(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 109e1fdbc; end: 109e1fe23;  */

undefined8 FUN_109e1fdbc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109f61740(*(undefined8 *)(*(long *)(param_3 + 0x48) + 8));
    (**(code **)(**(long **)(param_1 + 0x38) + 8))(*(long **)(param_1 + 0x38),param_2,param_3);
    FUN_109f61680(*(undefined8 *)(*(long *)(param_3 + 0x48) + 8));
  }
  return 0;
}



/* Entry: 109e1fe24; end: 109e2023f;  */

undefined8 FUN_109e1fe24(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 **ppuVar13;
  long lVar14;
  long lStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  
  ppuStack_68 = &puStack_80;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &puStack_a0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  plVar9 = *(long **)(param_1 + 0x38) + -5;
  if (**(long **)(param_1 + 0x38) != 0 && plVar9 != (long *)0x0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    puStack_c0 = &uStack_b0;
    ppuStack_a8 = &puStack_c0;
    puStack_a0 = &uStack_90;
    puStack_80 = &uStack_70;
    do {
      (**(code **)(*plVar9 + 8))(plVar9,&puStack_c0,param_3);
      if (param_3[0x59] == 0 || puStack_80 != &uStack_70) {
        if (puStack_80 == &uStack_70) {
          if (puStack_c0 != &uStack_b0) {
            puVar11 = *(undefined8 **)(param_2 + 0x18);
            *puVar11 = puStack_c0;
            puStack_c0[1] = puVar11;
            *(undefined8 ***)(param_2 + 0x18) = ppuStack_a8;
            *ppuStack_a8 = puVar2;
            goto LAB_109e1ff40;
          }
        }
        else if (puStack_c0 != &uStack_b0) {
          *ppuStack_88 = puStack_c0;
          puStack_c0[1] = ppuStack_88;
          ppuStack_88 = ppuStack_a8;
          *ppuStack_a8 = &uStack_90;
LAB_109e1ff40:
          uStack_b8 = 0;
          uStack_b0 = 0;
          puStack_c0 = &uStack_b0;
          ppuStack_a8 = &puStack_c0;
        }
      }
      else if (puStack_c0 != &uStack_b0) {
        *ppuStack_68 = puStack_c0;
        puStack_c0[1] = ppuStack_68;
        ppuStack_68 = ppuStack_a8;
        *ppuStack_a8 = &uStack_70;
        goto LAB_109e1ff40;
      }
      plVar1 = plVar9 + 5;
      plVar9 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar9 != (long *)0x0);
    if (puStack_80 != &uStack_70) {
      plVar9 = (long *)param_3[0x58];
      if (*(uint *)(plVar9 + 4) != 0) {
        lVar14 = *plVar9;
        lVar12 = (ulong)*(uint *)(plVar9 + 4) * 0x18;
        do {
          if ((*(long *)(lVar14 + 8) != 0) && (*(long *)(lVar14 + 8) != plVar9[3])) {
            puVar11 = (undefined8 *)0x0;
            goto LAB_109e200f0;
          }
          lVar14 = lVar14 + 0x18;
          lVar12 = lVar12 + -0x18;
        } while (lVar12 != 0);
      }
LAB_109e1ffa4:
      func_0x000109e244dc(&lStack_c8,param_3[0x57]);
      FUN_109f658b0(param_3,0xb0);
      if (param_3 != (undefined8 *)0x0) {
        param_3[0x13] = 0;
        param_3[0x12] = 0;
        param_3[0x15] = 0;
        param_3[0x14] = 0;
        param_3[0xf] = 0;
        param_3[0xe] = 0;
        param_3[0x11] = 0;
        param_3[0x10] = 0;
        param_3[0xb] = 0;
        param_3[10] = 0;
        param_3[0xd] = 0;
        param_3[0xc] = 0;
        param_3[7] = 0;
        param_3[6] = 0;
        param_3[9] = 0;
        param_3[8] = 0;
        param_3[3] = 0;
        param_3[2] = 0;
        param_3[5] = 0;
        param_3[4] = 0;
        param_3[1] = 0;
        *param_3 = 0;
      }
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined4 *)(param_3 + 3) = 3;
      param_3[4] = &UNK_10e05d730;
      *param_3 = &PTR_DAT_110b63f80;
      param_3[0x15] = 0;
      uVar6 = 0xb;
      func_0x000109ec6c94(0xb,1,1,0,0,0);
      param_3[4] = uVar6;
      *(undefined1 *)(param_3 + 5) = 1;
      *(undefined8 *)((long)param_3 + 0x29) = 0;
      param_3[6] = 0;
      bVar4 = *(byte *)(*(long *)(lStack_c8 + 0x20) + 0xd);
LAB_109e20054:
      func_0x000109eabfa8(lStack_c8,param_3,~(-1 << (ulong)(bVar4 & 0x1f)));
      ppuVar13 = (undefined8 **)(lStack_c8 + 8);
      *ppuVar13 = puVar2;
      ppuVar10 = (undefined8 **)0x0;
      if (lStack_c8 != 0) {
        ppuVar10 = ppuVar13;
      }
      plVar9 = *(long **)(param_2 + 0x18);
      *(long **)(lStack_c8 + 0x10) = plVar9;
      *plVar9 = (long)ppuVar10;
      *(undefined8 ***)(param_2 + 0x18) = ppuVar10;
      if (puStack_80 != &uStack_70) {
        *ppuVar13 = puStack_80;
        puStack_80[1] = ppuVar13;
        *(undefined8 ***)(param_2 + 0x18) = ppuStack_68;
        *ppuStack_68 = puVar2;
        ppuVar10 = ppuStack_68;
      }
      if (puStack_a0 != &uStack_90) {
        *ppuVar10 = puStack_a0;
        puStack_a0[1] = ppuVar10;
        *(undefined8 ***)(param_2 + 0x18) = ppuStack_88;
        *ppuStack_88 = puVar2;
      }
    }
  }
  return 0;
LAB_109e200f0:
  puVar7 = puVar11;
  if (*(char *)(*(undefined4 **)(lVar14 + 0x10) + 1) == '\x01') {
    cVar5 = *(char *)(*(long *)(param_3[0x53] + 0x20) + 4);
    uVar3 = **(undefined4 **)(lVar14 + 0x10);
    puVar7 = (undefined8 *)0xe0;
    _malloc();
    puVar8 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      *puVar7 = param_3 + -6;
      lVar12 = param_3[-5];
      puVar7[3] = lVar12;
      puVar7[4] = 0;
      param_3[-5] = puVar7;
      if (lVar12 != 0) {
        *(undefined8 **)(lVar12 + 0x10) = puVar7;
      }
      puVar8 = puVar7 + 6;
      puVar7[7] = 0;
      *puVar8 = 0;
      puVar7[0x19] = 0;
      puVar7[0x18] = 0;
      puVar7[0x1b] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x15] = 0;
      puVar7[0x14] = 0;
      puVar7[0x17] = 0;
      puVar7[0x16] = 0;
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
    }
    if (cVar5 == '\0') {
      func_0x000109ea98b0(puVar8,uVar3,1);
      if (puVar11 == (undefined8 *)0x0) goto LAB_109e201a8;
LAB_109e20174:
      func_0x000109e24460(&lStack_c8,param_3[0x53]);
      lVar12 = 0x8b;
      FUN_109eac310(0x8b,puVar8,lStack_c8);
      puVar7 = (undefined8 *)0x96;
      puVar8 = puVar11;
    }
    else {
      func_0x000109ea9960();
      if (puVar11 != (undefined8 *)0x0) goto LAB_109e20174;
LAB_109e201a8:
      func_0x000109e24460(&lStack_c8,param_3[0x53]);
      puVar7 = (undefined8 *)0x8b;
      lVar12 = lStack_c8;
    }
    FUN_109eac310(puVar7,puVar8,lVar12);
  }
  plVar9 = (long *)param_3[0x58];
  lVar12 = lVar14;
  do {
    lVar14 = lVar12 + 0x18;
    if (lVar14 == *plVar9 + (ulong)*(uint *)(plVar9 + 4) * 0x18) {
      if (puVar7 == (undefined8 *)0x0) goto LAB_109e1ffa4;
      func_0x000109e244dc(&lStack_c8,param_3[0x57]);
      param_3 = (undefined8 *)0x1;
      FUN_109eac2ac(1,puVar7);
      bVar4 = *(byte *)(*(long *)(lStack_c8 + 0x20) + 0xd);
      goto LAB_109e20054;
    }
    plVar1 = (long *)(lVar12 + 0x20);
    lVar12 = lVar14;
  } while ((*plVar1 == 0) || (puVar11 = puVar7, *plVar1 == plVar9[3]));
  goto LAB_109e200f0;
}



/* Entry: 109e20240; end: 109e20397;  */

undefined8 FUN_109e20240(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  (**(code **)(**(long **)(param_1 + 0x38) + 8))();
  puVar4 = param_3;
  FUN_109f658b0(param_3,0x30);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  lVar3 = param_3[0x54];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 2;
  *puVar4 = &PTR_DAT_110b64048;
  puVar4[4] = *(undefined8 *)(lVar3 + 0x20);
  puVar4[5] = lVar3;
  puVar2 = param_3;
  FUN_109f658b0(param_3,0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0xc] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
  }
  puVar6 = puVar2 + 1;
  *puVar6 = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0xc;
  *puVar2 = &PTR_FUN_110b639a8;
  puVar2[4] = puVar4;
  puVar2[7] = 0;
  puVar4 = puVar2 + 5;
  *puVar4 = puVar2 + 7;
  puVar2[6] = 0;
  puVar2[0xb] = 0;
  puVar2[9] = puVar2 + 0xb;
  puVar2[8] = puVar4;
  puVar2[10] = 0;
  puVar2[0xc] = puVar2 + 9;
  plVar5 = *(long **)(param_1 + 0x40) + -5;
  if ((**(long **)(param_1 + 0x40) != 0) && (plVar5 != (long *)0x0)) {
    do {
      (**(code **)(*plVar5 + 8))(plVar5,puVar4,param_3);
      plVar1 = plVar5 + 5;
      plVar5 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar5 != (long *)0x0);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  puVar2[1] = param_2 + 0x10;
  puVar2[2] = puVar4;
  *puVar4 = puVar6;
  *(undefined8 **)(param_2 + 0x18) = puVar6;
  return 0;
}



/* Entry: 109e20398; end: 109e20403;  */

undefined8 FUN_109e20398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38) + -5;
  if (**(long **)(param_1 + 0x38) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
      plVar1 = plVar2 + 5;
      plVar2 = (long *)*plVar1 + -5;
    } while (*(long *)*plVar1 != 0 && plVar2 != (long *)0x0);
  }
  return 0;
}



/* Entry: 109e20404; end: 109e20a9b;  */

undefined8 FUN_109e20404(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long **pplVar7;
  byte bVar8;
  undefined *puVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  lVar15 = param_3[0x54];
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == (long *)0x0) {
    if (param_3[0x59] != 0) {
      uStack_58 = *(undefined8 *)(param_1 + 8);
      uStack_60 = *(undefined4 *)(param_1 + 0x10);
      uStack_68 = *(undefined8 *)(param_1 + 0x1c);
      lStack_70 = *(long *)(param_1 + 0x14);
      FUN_109e9ed98(&lStack_70,param_3,&UNK_10f605ddc);
      lVar16 = param_3[0x59];
      uStack_58 = *(undefined8 *)(lVar16 + 8);
      uStack_60 = *(undefined4 *)(lVar16 + 0x10);
      uStack_68 = *(undefined8 *)(lVar16 + 0x1c);
      lStack_70 = *(long *)(lVar16 + 0x14);
      FUN_109e9ed98(&lStack_70,param_3,&UNK_10f605e02);
    }
    param_3[0x59] = param_1;
    func_0x000109e244dc(&lStack_70,lVar15);
    func_0x000109e24460(&plStack_78,lVar15);
    func_0x000109e24460(&plStack_80,param_3[0x57]);
    plStack_88 = plStack_78;
    plVar4 = plStack_80;
    goto LAB_109e207ec;
  }
  (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
  (**(code **)(*plVar2 + 0x30))();
  if (plVar2 == (long *)0x0) {
    lVar16 = *(long *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(lVar16 + 8);
    uStack_60 = *(undefined4 *)(lVar16 + 0x10);
    uStack_68 = *(undefined8 *)(lVar16 + 0x1c);
    lStack_70 = *(long *)(lVar16 + 0x14);
    FUN_109e9ed98(&lStack_70,param_3,&UNK_10f605d0a);
    plVar2 = param_3;
    FUN_109f658b0(param_3,0xb0);
    if (plVar2 != (long *)0x0) {
      plVar2[0x13] = 0;
      plVar2[0x12] = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      plVar2[0xf] = 0;
      plVar2[0xe] = 0;
      plVar2[0x11] = 0;
      plVar2[0x10] = 0;
      plVar2[0xb] = 0;
      plVar2[10] = 0;
      plVar2[0xd] = 0;
      plVar2[0xc] = 0;
      plVar2[7] = 0;
      plVar2[6] = 0;
      plVar2[9] = 0;
      plVar2[8] = 0;
      plVar2[3] = 0;
      plVar2[2] = 0;
      plVar2[5] = 0;
      plVar2[4] = 0;
      plVar2[1] = 0;
      *plVar2 = 0;
    }
    func_0x000109ea9960(plVar2,0,1);
  }
  else {
    lVar16 = param_3[0x58];
    plVar4 = plVar2 + 5;
    (**(code **)(lVar16 + 8))(plVar4);
    FUN_109f64fdc(lVar16,plVar4,plVar2 + 5);
    if (lVar16 == 0) {
      puVar3 = (undefined4 *)param_3[0x58];
      FUN_109f658b0(puVar3,0x10);
      *puVar3 = (int)plVar2[5];
      *(bool *)(puVar3 + 1) = param_3[0x59] != 0;
      *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_1 + 0x38);
      lVar16 = param_3[0x58];
      plVar4 = plVar2 + 5;
      (**(code **)(lVar16 + 8))(plVar4);
      func_0x000109f650c0(lVar16,plVar4,plVar2 + 5,puVar3);
    }
    else {
      lVar17 = *(long *)(*(long *)(lVar16 + 0x10) + 8);
      lVar16 = *(long *)(param_1 + 0x38);
      uStack_58 = *(undefined8 *)(lVar16 + 8);
      uStack_60 = *(undefined4 *)(lVar16 + 0x10);
      uStack_68 = *(undefined8 *)(lVar16 + 0x1c);
      lStack_70 = *(long *)(lVar16 + 0x14);
      FUN_109e9ed98(&lStack_70,param_3,&UNK_10f605d44);
      uStack_58 = *(undefined8 *)(lVar17 + 8);
      uStack_60 = *(undefined4 *)(lVar17 + 0x10);
      uStack_68 = *(undefined8 *)(lVar17 + 0x1c);
      lStack_70 = *(long *)(lVar17 + 0x14);
      FUN_109e9ed98(&lStack_70,param_3,&UNK_10f605d59);
    }
  }
  plVar4 = param_3;
  plStack_78 = plVar2;
  FUN_109f658b0(param_3,0x30);
  if (plVar4 != (long *)0x0) {
    plVar4[3] = 0;
    plVar4[2] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[1] = 0;
    *plVar4 = 0;
  }
  lVar16 = param_3[0x53];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *(undefined4 *)(plVar4 + 3) = 2;
  *plVar4 = (long)&PTR_DAT_110b64048;
  plVar4[5] = lVar16;
  plVar4[4] = *(long *)(lVar16 + 0x20);
  lVar17 = plVar2[4];
  lVar16 = *(long *)(param_3[0x53] + 0x20);
  plStack_80 = plVar4;
  if (lVar17 != lVar16) {
    lVar11 = *(long *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(lVar11 + 8);
    uStack_60 = *(undefined4 *)(lVar11 + 0x10);
    uStack_68 = *(undefined8 *)(lVar11 + 0x1c);
    lStack_70 = *(long *)(lVar11 + 0x14);
    if ((*(byte *)((long)param_3 + 0x3cf) & 1) == 0) {
      uVar13 = *(uint *)((long)param_3 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(param_3 + 0x1d);
      }
      uVar14 = 0x6d;
      if ((*(byte *)((long)param_3 + 0x5a1) & 1) == 0) {
        uVar14 = 0x77;
      }
      bVar8 = uVar14 < uVar13 & (*(byte *)((long)param_3 + 0xe4) ^ 0xff);
    }
    else {
      bVar8 = 1;
    }
    if (((*(byte *)((long)param_3 + 0x315) & 1) == 0) &&
       (((*(byte *)((long)param_3 + 0x3ef) | *(byte *)((long)param_3 + 0x3cf)) & 1) == 0)) {
      uVar13 = *(uint *)((long)param_3 + 0xec);
      if (uVar13 == 0) {
        uVar13 = *(uint *)(param_3 + 0x1d);
      }
      bVar10 = 0;
      if (399 < uVar13) {
        bVar10 = *(byte *)((long)param_3 + 0xe4) ^ 1;
      }
    }
    else {
      bVar10 = 1;
    }
    uVar13 = *(uint *)(lVar17 + 4);
    if ((uVar13 & 0xfe) == 0) {
      uVar6 = 0;
      FUN_109eb8cc8(&DAT_10e05d928,&DAT_10e05dab0,bVar8,bVar10);
      if (((*(byte *)(lVar16 + 4) & 0xfe) != 0) || ((uVar6 & 1) == 0)) goto LAB_109e20754;
      if ((uVar13 & 1) == 0) {
        pplVar7 = &plStack_80;
      }
      else {
        pplVar7 = &plStack_78;
      }
      uVar6 = 0;
      func_0x000109e18df8(0,pplVar7,param_3);
      if ((uVar6 & 1) == 0) {
        puVar9 = &UNK_10f605dbd;
        goto LAB_109e207a4;
      }
    }
    else {
LAB_109e20754:
      if ((*(byte *)(lVar17 + 0xc) >> 1 & 1) == 0) {
        FUN_109eca058();
      }
      if ((*(byte *)(lVar16 + 0xc) >> 1 & 1) == 0) {
        FUN_109eca058();
      }
      puVar9 = &UNK_10f605d79;
LAB_109e207a4:
      FUN_109e9ed98(&lStack_70,param_3,puVar9);
    }
    plStack_78[4] = plStack_80[4];
    plVar2 = plStack_78;
  }
  plVar1 = plStack_80;
  func_0x000109e244dc(&lStack_70,lVar15);
  func_0x000109e24460(&plStack_88,lVar15);
  plVar4 = (long *)0x8b;
  FUN_109eac310(0x8b,plVar2,plVar1);
LAB_109e207ec:
  uVar5 = 0x96;
  FUN_109eac310(0x96,plStack_88,plVar4);
  func_0x000109eabfa8(lStack_70,uVar5,
                      ~(-1 << (ulong)(*(byte *)(*(long *)(lStack_70 + 0x20) + 0xd) & 0x1f)));
  *(long *)(lStack_70 + 8) = param_2 + 0x10;
  puVar12 = *(undefined8 **)(param_2 + 0x18);
  *(undefined8 **)(lStack_70 + 0x10) = puVar12;
  plVar2 = (long *)0x0;
  if (lStack_70 != 0) {
    plVar2 = (long *)(lStack_70 + 8);
  }
  *puVar12 = plVar2;
  *(long **)(param_2 + 0x18) = plVar2;
  return 0;
}



/* Entry: 109e20a9c; end: 109e20bef;  */

void FUN_109e20a9c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if (((*(byte *)(param_1 + 0x58) & 3) != 0) || (*(long *)(param_1 + 0x48) != 0)) {
    uStack_28 = *(undefined8 *)(param_1 + 8);
    uStack_30 = *(undefined4 *)(param_1 + 0x10);
    uStack_38 = *(undefined8 *)(param_1 + 0x1c);
    uStack_40 = *(undefined8 *)(param_1 + 0x14);
    if ((*(byte *)(param_1 + 0x58) & 3) == 0) {
      plVar1 = *(long **)(param_1 + 0x48);
      if ((plVar1 != (long *)0x0) && ((char)plVar1[0xd] == '\x01')) {
        (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
      }
    }
    else {
      lVar2 = param_3;
      FUN_109e9ebe4(param_3,0x82,100,&uStack_40,&UNK_10f60866c);
      if ((int)lVar2 != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
          if (*(long *)(param_1 + 0x50) == 0) {
            lVar2 = *(long *)(*(long *)(param_3 + 0x48) + 8);
            FUN_109f61800(lVar2,*(undefined8 *)(param_1 + 0x40));
            if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) &&
               ((*(byte *)(lVar2 + 4) - 0xd < 4 ||
                (((*(byte *)(lVar2 + 4) - 1 < 2 && (*(char *)(lVar2 + 0xd) == '\x01')) &&
                 (*(char *)(lVar2 + 0xe) == '\x01')))))) {
              if (*(char *)(param_3 + 0xe4) != '\x01') {
                return;
              }
              FUN_109ea23f8(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_1 + 0x40),
                            *(byte *)(param_1 + 0x58) & 3);
              return;
            }
            puVar3 = &UNK_10f605eac;
          }
          else {
            puVar3 = &UNK_10f605e78;
          }
        }
        else {
          puVar3 = &UNK_10f605e48;
        }
        FUN_109e9ed98(&uStack_40,param_3,puVar3);
      }
    }
  }
  return;
}



/* Entry: 109e20bf0; end: 109e20e37;  */

undefined8 FUN_109e20bf0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uStack_50 = *(undefined4 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x1c);
  uStack_60 = *(undefined8 *)(param_1 + 0x14);
  iStack_64 = 0;
  lVar4 = *(long *)(param_1 + 0x40);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 2) >> 3 & 1) == 0)) {
    iVar5 = 0;
  }
  else {
    lVar7 = param_3;
    FUN_109e25338(param_3,&uStack_60,"location",*(undefined8 *)(lVar4 + 0x20),&iStack_64);
    if ((int)lVar7 == 0) {
      return 0;
    }
    iVar5 = iStack_64 + 0x20;
    lVar4 = *(long *)(param_1 + 0x40);
  }
  FUN_109e20e38(param_2,param_3,param_1 + 0x48,&lStack_70,0,0,0,0,lVar4,0,0,iVar5,0);
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  FUN_109e1d588(*(undefined8 *)(param_1 + 0x38),&uStack_90,param_3);
  lVar4 = lStack_70;
  FUN_109ec7c64(lStack_70,param_2,*(undefined8 *)(param_1 + 0x38),0,0);
  *(long *)(param_1 + 0x70) = lVar4;
  if ((*(byte *)(lVar4 + 0xc) >> 1 & 1) == 0) {
    lVar7 = lVar4;
    FUN_109eca058();
    iVar5 = (int)lVar7;
  }
  else {
    iVar5 = (int)*(undefined8 *)(lVar4 + 0x18) + 0xe05bf38;
  }
  _strncmp();
  if (iVar5 != 0) {
    lVar7 = *(long *)(param_3 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = *(undefined8 **)(lVar7 + 0x18);
    FUN_109f6650c(puVar1,0x40);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = lVar4;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[7] = 0;
    uVar2 = *(undefined8 *)(lVar7 + 8);
    FUN_109f61854(uVar2,uVar6,puVar1);
    if ((int)uVar2 != 0) {
      lVar4 = *(long *)(*(long *)(param_3 + 0x48) + 8);
      FUN_109f61800(lVar4,*(undefined8 *)(param_1 + 0x38));
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
        uVar3 = *(uint *)(param_3 + 0xec);
        if (uVar3 == 0) {
          uVar3 = *(uint *)(param_3 + 0xe8);
        }
        if (((0x81 < uVar3) && ((*(byte *)(param_3 + 0xe4) & 1) == 0)) &&
           (FUN_109ec7a90(lVar4,*(undefined8 *)(param_1 + 0x70),1,0,1), (int)lVar4 != 0)) {
          FUN_109e9f044(&uStack_60,param_3,&UNK_10f605ef4);
          return 0;
        }
      }
      FUN_109e9ed98(&uStack_60,param_3,&UNK_10f605ef4);
      return 0;
    }
  }
  lVar4 = param_3;
  FUN_109f65a40(param_3,*(undefined8 *)(param_3 + 0x2d8),8,*(int *)(param_3 + 0x2e0) + 1);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(param_3 + 0x2e0);
    *(undefined8 *)(lVar4 + (ulong)uVar3 * 8) = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_3 + 0x2d8) = lVar4;
    *(uint *)(param_3 + 0x2e0) = uVar3 + 1;
  }
  return 0;
}



/* Entry: 109e20e38; end: 109e22fbb;  */

ulong FUN_109e20e38(undefined8 param_1,long param_2,long *param_3,long *param_4,uint param_5,
                   int param_6,uint param_7,undefined8 param_8,ulong *param_9,int param_10,
                   int param_11,int param_12,int param_13,int param_14)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong *puVar7;
  bool bVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_fc;
  int iStack_f8;
  uint uStack_ec;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  
  plVar17 = (long *)*param_3;
  uVar30 = 0;
  lVar24 = *plVar17;
  while (lVar24 != 0 && plVar17 != (long *)0x28) {
    plVar25 = (long *)plVar17[3];
    uVar30 = (ulong)((int)uVar30 - 1);
    do {
      plVar25 = (long *)*plVar25;
      uVar30 = (ulong)((int)uVar30 + 1);
    } while (plVar25 != (long *)0x0);
    plVar17 = (long *)*plVar17;
    lVar24 = *plVar17;
  }
  lVar24 = param_2;
  func_0x000109f6590c(param_2,uVar30 * 0x30);
  plVar17 = (long *)*param_3 + -5;
  if (*(long *)*param_3 != 0 && plVar17 != (long *)0x0) {
    uStack_ec = 0;
    uVar31 = 0;
    bVar13 = 0;
    uVar2 = 0;
    if (param_9 != (ulong *)0x0) {
      uVar2 = param_5;
    }
    iStack_120 = param_13;
    iStack_11c = param_12;
    bVar6 = true;
    do {
      lStack_78 = plVar17[1];
      uStack_80 = (undefined4)plVar17[2];
      uStack_88 = *(undefined8 *)((long)plVar17 + 0x1c);
      uStack_90 = *(undefined8 *)((long)plVar17 + 0x14);
      (**(code **)(**(long **)(plVar17[7] + 0x118) + 8))
                (*(long **)(plVar17[7] + 0x118),param_1,param_2);
      lVar18 = plVar17[7];
      if ((*(int *)(param_2 + 0xe8) != 0x6e) && (*(long *)(*(long *)(lVar18 + 0x118) + 0x48) != 0))
      {
        FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608cb6);
        lVar18 = plVar17[7];
      }
      lVar9 = *(long *)(lVar18 + 0x118);
      func_0x000109e19cc4(lVar9,auStack_70,param_2);
      lVar29 = plVar17[7];
      iVar14 = 1;
      for (lVar18 = lVar9; *(char *)(lVar18 + 4) == '\x13'; lVar18 = *(long *)(lVar18 + 0x30)) {
        iVar14 = *(int *)(lVar18 + 0x10) * iVar14;
      }
      if (*(char *)(lVar18 + 4) == '\x10') {
        iVar21 = 4;
      }
      else {
        iVar21 = 0;
      }
      if (param_5 == 0) {
        if (iVar21 * iVar14 != 0) {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608d29);
        }
        if (((*(byte *)(param_2 + 0x2f7) & 1) == 0) &&
           (lVar18 = lVar9, func_0x000109ec6798(), (int)lVar18 != 0)) {
          puVar12 = &UNK_10f608d45;
          goto LAB_109e21080;
        }
      }
      else if ((iVar21 * iVar14 != 0) ||
              (((*(byte *)(param_2 + 0x2f7) & 1) == 0 &&
               (lVar18 = lVar9, func_0x000109ec6694(), (int)lVar18 != 0)))) {
        puVar12 = &UNK_10f608ce6;
LAB_109e21080:
        FUN_109e9ed98(&uStack_90,param_2,puVar12);
      }
      if ((*(byte *)(lVar29 + 0x3a) >> 6 & 1) != 0) {
        FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608d58);
      }
      if (param_5 != 0) {
        if (bVar6) {
          bVar13 = *(byte *)(lVar29 + 0x3a) >> 3 & 1;
LAB_109e210b8:
          bVar6 = false;
        }
        else {
          if ((*(byte *)((long)param_9 + 2) >> 3 & 1) == 0) {
            uVar27 = (uint)*(undefined8 *)(lVar29 + 0x38);
            if (bVar13 == 0) {
              if ((uVar27 >> 0x13 & 1) == 0) {
                bVar6 = false;
                bVar13 = 0;
                goto LAB_109e21128;
              }
            }
            else if ((uVar27 >> 0x13 & 1) != 0) {
              bVar13 = 1;
              goto LAB_109e210b8;
            }
            FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608da8);
          }
          bVar6 = false;
        }
      }
LAB_109e21128:
      uVar19 = *(ulong *)(lVar29 + 0x38);
      if ((uVar19 & 0x1e000000) != 0) {
        FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608e55);
        uVar19 = *(ulong *)(lVar29 + 0x38);
      }
      if (((uint)uVar19 >> 2 & 1) != 0) {
        FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608ee9);
        uVar19 = *(ulong *)(lVar29 + 0x38);
      }
      if (*(char *)(lVar9 + 4) != '\x0f') {
        bVar8 = false;
        if ((((uint)uVar19 >> 0xb & 1) == 0) && ((uVar19 & 0xf8000000000) != 0)) {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f6077f3);
          uVar19 = *(ulong *)(lVar29 + 0x38);
          bVar8 = *(char *)(lVar9 + 4) == '\x0f';
        }
        if ((!bVar8) && ((uVar19 >> 0x26 & 1) != 0)) {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f6077bc);
          uVar19 = *(ulong *)(lVar29 + 0x38);
        }
      }
      if ((uVar19 >> 0x2e & 1) != 0) {
        lVar18 = param_2;
        FUN_109e25338(param_2,&uStack_90,&DAT_10f34fa9f,*(undefined8 *)(lVar29 + 0x78),&uStack_b0);
        if (((int)lVar18 != 0) && ((int)uStack_b0 != param_10)) {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608f38);
        }
        uVar19 = *(ulong *)(lVar29 + 0x38);
      }
      if ((uVar19 >> 0x31 & 1) == 0) {
        if (param_9 == (ulong *)0x0) {
          uVar27 = 0;
        }
        else {
          uVar27 = (uint)(*param_9 >> 0x31) & 1;
        }
        iStack_f8 = param_11;
        if ((uVar19 >> 0x33 & 1) == 0) goto LAB_109e21320;
LAB_109e21290:
        lVar18 = param_2;
        FUN_109e25338(param_2,&uStack_90,&UNK_10f605fb9,*(undefined8 *)(lVar29 + 0x88),&uStack_b0);
        uStack_fc = (int)uStack_b0;
        if ((int)lVar18 == 0) {
          uStack_fc = 0xffffffff;
        }
        uVar19 = *(ulong *)(lVar29 + 0x38);
        if (((uint)uVar19 >> 10 & 1) == 0) goto LAB_109e2132c;
LAB_109e212c4:
        if ((uVar19 & 0xe000) == 0) {
          uVar22 = 0;
        }
        else {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608ffc);
          uVar19 = *(ulong *)(lVar29 + 0x38);
          uVar22 = (uint)((uVar19 & 0x400) == 0);
        }
      }
      else {
        lVar18 = param_2;
        FUN_109e25338(param_2,&uStack_90,&UNK_10f605fa3,*(undefined8 *)(lVar29 + 0x80),&uStack_b0);
        iStack_f8 = (int)uStack_b0;
        if ((int)lVar18 == 0) {
          uVar27 = 0;
        }
        else if ((int)uStack_b0 == param_11) {
          uVar27 = 1;
          iStack_f8 = param_11;
        }
        else {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f608f98);
          uVar27 = 1;
        }
        uVar19 = *(ulong *)(lVar29 + 0x38);
        if ((uVar19 >> 0x33 & 1) != 0) goto LAB_109e21290;
LAB_109e21320:
        uStack_fc = 0xffffffff;
        if (((uint)uVar19 >> 10 & 1) != 0) goto LAB_109e212c4;
LAB_109e2132c:
        uVar22 = 1;
      }
      if (((uVar19 & 0x380) != 0) && ((param_5 & uVar22) == 0)) {
        FUN_109e9ed98(&uStack_90,param_2,&UNK_10f609042);
        uVar19 = *(ulong *)(lVar29 + 0x38);
      }
      if ((uVar19 & 0x60000000) != 0) {
        if ((uVar19 & 0xc00) == 0) {
          FUN_109e9ed98(&uStack_90,param_2,&UNK_10f60908f);
        }
        else {
          FUN_109e241d0(param_2,&uStack_90,lVar9,0);
        }
      }
      plVar25 = (long *)plVar17[8] + -5;
      if ((*(long *)plVar17[8] != 0) && (plVar25 != (long *)0x0)) {
        do {
          lStack_98 = plVar25[1];
          uStack_a0 = (undefined4)plVar25[2];
          uStack_a8 = *(undefined8 *)((long)plVar25 + 0x1c);
          uStack_b0 = *(ulong *)((long)plVar25 + 0x14);
          if ((param_7 & 1) == 0) {
            uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
            uStack_d0 = uStack_b0;
            uStack_c8 = uStack_a8;
            lStack_b8 = lStack_98;
            FUN_109e1d588(plVar25[7],&uStack_d0,param_2);
          }
          puVar10 = &uStack_b0;
          FUN_109e19d60(puVar10,lVar9,plVar25[8],param_2);
          puVar20 = puVar10;
          if (*(char *)((long)puVar10 + 4) == '\x13') {
            do {
              puVar20 = (ulong *)puVar20[6];
              if (*(char *)((long)puVar20 + 4) != '\x13') goto LAB_109e21464;
            } while ((int)puVar20[2] != 0);
            if ((*(byte *)((long)puVar10 + 0xc) >> 1 & 1) == 0) {
              FUN_109eca058();
            }
            FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f606f9a);
          }
LAB_109e21464:
          puVar28 = (undefined8 *)(lVar24 + uVar31 * 0x30);
          *puVar28 = puVar10;
          puVar28[1] = plVar25[7];
          lVar18 = lVar29 + 0x38;
          FUN_109e23d78(lVar18,puVar10,param_8,param_2,&uStack_b0);
          uVar26 = *(uint *)(puVar28 + 5) & 0xfffffff8 | (uint)lVar18;
          *(uint *)(puVar28 + 5) = uVar26;
          uVar22 = *(uint *)(lVar29 + 0x38) >> 4 & 8;
          *(uint *)(puVar28 + 5) = uVar22 | uVar26 & 0xfffffff3;
          uVar15 = *(uint *)(lVar29 + 0x38) >> 4 & 0x10;
          *(uint *)(puVar28 + 5) = uVar22 | uVar26 & 0xffffffe3 | uVar15;
          *(uint *)(puVar28 + 5) =
               *(uint *)(lVar29 + 0x38) >> 2 & 0x80 | uVar27 << 0xf |
               uVar22 | uVar26 & 0xffff7f63 | uVar15;
          *(undefined4 *)(puVar28 + 3) = 0xffffffff;
          *(int *)((long)puVar28 + 0x1c) = iStack_f8;
          *(undefined4 *)(puVar28 + 4) = uStack_fc;
          if ((*(byte *)(lVar29 + 0x3a) >> 3 & 1) == 0) {
            if ((param_9 == (ulong *)0x0) || ((*(byte *)((long)param_9 + 2) >> 3 & 1) == 0)) {
              *(undefined4 *)(puVar28 + 2) = 0xffffffff;
            }
            else {
              *(int *)(puVar28 + 2) = iStack_120;
              uVar11 = *puVar28;
              FUN_109ec9e40(uVar11,0,1);
              iStack_120 = (int)uVar11 + iStack_120;
            }
          }
          else {
            lVar18 = param_2;
            FUN_109e25338(param_2,&uStack_b0,"location",*(undefined8 *)(lVar29 + 0x58),&uStack_d0);
            if ((int)lVar18 != 0) {
              iStack_120 = 0x20;
              if ((*(uint *)(puVar28 + 5) & 0x80) != 0) {
                iStack_120 = 0x40;
              }
              iStack_120 = iStack_120 + (uint)uStack_d0;
              *(int *)(puVar28 + 2) = iStack_120;
              uVar11 = *puVar28;
              FUN_109ec9e40(uVar11,0,1);
              iStack_120 = iStack_120 + (int)uVar11;
            }
          }
          if ((*(byte *)(lVar29 + 0x3a) >> 5 & 1) == 0) {
            *(undefined4 *)((long)puVar28 + 0x14) = 0xffffffff;
          }
          else {
            lVar18 = param_2;
            FUN_109e25338(param_2,&uStack_b0,"component",*(undefined8 *)(lVar29 + 0x68),&uStack_d0);
            if ((int)lVar18 != 0) {
              uVar16 = (uint)uStack_d0;
              FUN_109e24098(param_2,&uStack_b0,*puVar28,uStack_d0 & 0xffffffff);
              *(undefined4 *)((long)puVar28 + 0x14) = uVar16;
            }
          }
          if (param_9 == (ulong *)0x0) {
LAB_109e21630:
            uVar22 = 0;
            iVar14 = 0;
          }
          else {
            bVar4 = *(byte *)(lVar29 + 0x3b) >> 6 & 1;
            if (param_6 == 2) {
              bVar4 = 1;
            }
            if (((uint)*param_9 >> 0x19 & 1) == 0) {
              if (((uint)*param_9 >> 0x1a & 1) == 0) goto LAB_109e21630;
              puVar20 = puVar10;
              FUN_109ec920c(puVar10,bVar4);
              uVar22 = (uint)puVar20;
              puVar20 = puVar10;
              FUN_109ec9468(puVar10,bVar4);
              iVar14 = (int)puVar20;
            }
            else {
              puVar20 = puVar10;
              FUN_109ec8a54(puVar10,bVar4);
              uVar22 = (uint)puVar20;
              puVar20 = puVar10;
              FUN_109ec8c8c(puVar10,bVar4);
              iVar14 = (int)puVar20;
            }
          }
          uVar15 = (uint)*(undefined8 *)(lVar29 + 0x38);
          if ((uVar15 >> 0x17 & 1) != 0) {
            lVar18 = param_2;
            FUN_109e25338(param_2,&uStack_b0,&DAT_10f63975c,*(undefined8 *)(lVar29 + 200),&uStack_d0
                         );
            if ((int)lVar18 != 0) {
              if ((uVar22 == 0) || (iVar14 == 0)) {
                FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f60914a);
              }
              else {
                uVar15 = (uint)uStack_d0;
                if ((uint)uStack_d0 < uStack_ec) {
                  FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f6090d2);
                }
                uVar26 = 0;
                if (uVar22 != 0) {
                  uVar26 = uVar15 / uVar22;
                }
                if (uVar15 != uVar26 * uVar22) {
                  if ((*(byte *)((long)puVar10 + 0xc) >> 1 & 1) == 0) {
                    FUN_109eca058();
                  }
                  FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f609103);
                }
                *(uint *)(puVar28 + 3) = uVar15;
                uStack_ec = uVar15 + iVar14;
              }
            }
            uVar15 = (uint)*(undefined8 *)(lVar29 + 0x38);
          }
          if ((param_14 == 0) && ((uVar15 >> 0x12 & 1) == 0)) {
            if ((((uVar15 >> 0x17 & 1) == 0) && (uVar22 != 0)) && (iVar14 != 0)) {
              uStack_ec = (uVar22 + uStack_ec) - 1 & -uVar22;
LAB_109e21798:
              uStack_ec = uStack_ec + iVar14;
            }
          }
          else {
            uVar26 = uStack_ec;
            if (*(uint *)(puVar28 + 3) != 0xffffffff) {
              uVar26 = *(uint *)(puVar28 + 3);
            }
            if ((uVar22 == 0) || (iVar14 == 0)) {
              FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f609181);
            }
            else {
              if ((uVar15 >> 0x12 & 1) == 0) {
                uStack_ec = param_14 + -1 + uVar26 & -param_14;
                *(uint *)(puVar28 + 3) = uStack_ec;
                goto LAB_109e21798;
              }
              lVar18 = param_2;
              FUN_109e25338(param_2,&uStack_b0,&DAT_10f2db2fc,*(undefined8 *)(lVar29 + 0x48),
                            &uStack_d0);
              if ((int)lVar18 != 0) {
                if ((uint)uStack_d0 - 1 < ((uint)uStack_d0 ^ (uint)uStack_d0 - 1)) {
                  uStack_ec = (uVar26 + (uint)uStack_d0) - 1 & -(uint)uStack_d0;
                  *(uint *)(puVar28 + 3) = uStack_ec;
                  uStack_ec = uStack_ec + iVar14;
                }
                else {
                  FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f6091b7);
                }
              }
            }
          }
          if (*(char *)(lVar29 + 0x3d) < '\0') {
            lVar18 = param_2;
            FUN_109e25338(param_2,&uStack_b0,&UNK_10f605fae,*(undefined8 *)(lVar29 + 200),&uStack_d0
                         );
            if ((int)lVar18 != 0) {
              iStack_11c = (uint)uStack_d0;
              *(uint *)(puVar28 + 3) = (uint)uStack_d0;
              puVar20 = puVar10;
              func_0x000109ec8650();
              iStack_11c = iStack_11c + (int)puVar20 * 4;
            }
LAB_109e218c4:
            if ((uVar2 != 0) && ((*param_9 & 0xc00) != 0)) {
              bVar3 = *(byte *)((long)puVar10 + 4);
              uVar15 = (uint)bVar3;
              puVar20 = puVar10;
              uVar22 = uVar15;
              bVar4 = bVar3;
              while (bVar4 == 0x13) {
                puVar20 = (ulong *)puVar20[6];
                bVar4 = *(byte *)((long)puVar20 + 4);
                uVar22 = (uint)bVar4;
              }
              puVar7 = puVar10;
              if ((*(byte *)((long)puVar20 + 0xe) < 2) || (2 < uVar22 - 2)) {
                while (bVar3 == 0x13) {
                  bVar3 = *(byte *)((long)puVar7[6] + 4);
                  uVar15 = (uint)bVar3;
                  puVar7 = (ulong *)puVar7[6];
                }
                if (uVar15 != 0x11) goto LAB_109e21970;
              }
              uVar22 = *(uint *)(puVar28 + 5);
              *(uint *)(puVar28 + 5) = uVar22 & 0xffffff9f | param_6 << 5;
              uVar15 = (uint)*(undefined8 *)(lVar29 + 0x38);
              if ((uVar15 >> 0x1e & 1) == 0) {
                if ((uVar15 >> 0x1d & 1) == 0) goto LAB_109e21970;
                uVar15 = 0x20;
              }
              else {
                uVar15 = 0x40;
              }
              *(uint *)(puVar28 + 5) = uVar15 | uVar22 & 0xffffff9f;
            }
          }
          else if (param_9 != (ulong *)0x0) {
            if (*(char *)((long)param_9 + 5) < '\0') {
              uVar22 = *(byte *)((long)puVar10 + 4) - 4;
              if (uVar22 < 0xc) {
                iVar14 = *(int *)(&UNK_10e060e3c + ((ulong)uVar22 & 0xff) * 4);
              }
              else {
                iVar14 = 4;
              }
              *(uint *)(puVar28 + 3) = (iStack_11c + iVar14) - 1U & -iVar14;
              puVar20 = puVar10;
              func_0x000109ec8650();
              iStack_11c = iStack_11c + (int)puVar20 * 4;
            }
            goto LAB_109e218c4;
          }
LAB_109e21970:
          if ((int)param_8 == 2) {
LAB_109e219a0:
            if ((*(ulong *)(lVar29 + 0x38) & 0xc0000000000) == 0) {
              if (param_9 == (ulong *)0x0) {
                uVar22 = 0;
                uVar15 = *(uint *)(puVar28 + 5) & 0xfffffbff;
              }
              else {
                uVar22 = *(uint *)((long)param_9 + 4);
                uVar15 = *(uint *)(puVar28 + 5) & 0xfffff800 |
                         *(uint *)(puVar28 + 5) & 0x3ff | (uVar22 >> 10 & 1) << 10;
                *(uint *)(puVar28 + 5) = uVar15;
                uVar22 = uVar22 & 0x800;
              }
              uVar22 = uVar15 & 0xfffff7ff | uVar22;
            }
            else {
              uVar15 = *(uint *)(puVar28 + 5);
              uVar22 = uVar15 & 0x3ff | ((uint)(*(ulong *)(lVar29 + 0x38) >> 0x2a) & 1) << 10;
              *(uint *)(puVar28 + 5) = uVar15 & 0xfffff800 | uVar22;
              uVar22 = uVar15 & 0xfffff000 | uVar22 | (*(uint *)(lVar29 + 0x3c) >> 0xb & 1) << 0xb;
            }
            *(uint *)(puVar28 + 5) = uVar22;
            uVar19 = *(ulong *)(lVar29 + 0x38) & 0x8000000000;
            uVar15 = (uint)(uVar19 >> 0x1b);
            if ((param_9 != (ulong *)0x0) && (uVar19 == 0)) {
              uVar15 = (uint)(*param_9 >> 0x1b) & 0x1000;
            }
            *(uint *)(puVar28 + 5) = uVar15 | uVar22 & 0xffffefff;
            uVar19 = *(ulong *)(lVar29 + 0x38) & 0x10000000000;
            uVar26 = (uint)(uVar19 >> 0x1b);
            if ((param_9 != (ulong *)0x0) && (uVar19 == 0)) {
              uVar26 = (uint)(*param_9 >> 0x1b) & 0x2000;
            }
            *(uint *)(puVar28 + 5) = uVar26 | uVar15 | uVar22 & 0xffffcfff;
            uVar19 = *(ulong *)(lVar29 + 0x38) & 0x20000000000;
            uVar23 = (uint)(uVar19 >> 0x1b);
            if ((param_9 != (ulong *)0x0) && (uVar19 == 0)) {
              uVar23 = (uint)(*param_9 >> 0x1b) & 0x4000;
            }
            *(uint *)(puVar28 + 5) = uVar23 | uVar26 | uVar15 | uVar22 & 0xffff8fff;
            uVar15 = *(uint *)((long)puVar10 + 4);
            uVar22 = uVar15 & 0xff;
            uVar26 = uVar15;
            puVar20 = puVar10;
            uVar23 = uVar22;
            while (uVar23 == 0x13) {
              puVar20 = (ulong *)puVar20[6];
              uVar26 = (uint)*(byte *)((long)puVar20 + 4);
              uVar23 = uVar26;
            }
            if ((uVar26 & 0xff) == 0xf) {
              puVar20 = puVar10;
              if ((*(ulong *)(lVar29 + 0x38) >> 0x26 & 1) == 0) {
                if (*(char *)(param_2 + 0x3cb) == '\x01') {
                  if (*(char *)(param_2 + 0x3cc) == '\x01') {
                    FUN_109e9f044(&uStack_b0,param_2,&UNK_10f6076ad);
                  }
                }
                else if ((*(ulong *)(lVar29 + 0x38) >> 0x2b & 1) == 0) {
                  FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f6091e2);
                }
                uVar16 = 0;
              }
              else {
                while (uVar22 == 0x13) {
                  uVar15 = *(uint *)((long)puVar20[6] + 4);
                  puVar20 = (ulong *)puVar20[6];
                  uVar22 = uVar15 & 0xff;
                }
                if (*(uint *)(lVar29 + 0x108) != (uVar15 >> 8 & 0xff)) {
                  FUN_109e9ed98(&uStack_b0,param_2,&UNK_10f60766e);
                }
                uVar16 = *(undefined4 *)(lVar29 + 0x100);
              }
              *(undefined4 *)((long)puVar28 + 0x24) = uVar16;
            }
          }
          else {
            cVar5 = *(char *)((long)puVar10 + 4);
            puVar20 = puVar10;
            while (cVar5 == '\x13') {
              puVar20 = (ulong *)puVar20[6];
              cVar5 = *(char *)((long)puVar20 + 4);
            }
            if (cVar5 == '\x0f') goto LAB_109e219a0;
          }
          uVar22 = *(byte *)(lVar29 + 0x44) & 3;
          if (*(char *)(param_2 + 0xe4) == '\x01') {
            FUN_109e1e5e0(uVar22,puVar10,param_2,&uStack_b0);
          }
          *(uint *)(puVar28 + 5) =
               *(uint *)(puVar28 + 5) & 0xfffffc00 |
               *(uint *)(puVar28 + 5) & 0xff | (uVar22 & 3) << 8;
          uVar31 = (ulong)((int)uVar31 + 1);
          plVar1 = plVar25 + 5;
          plVar25 = (long *)*plVar1 + -5;
        } while (*(long *)*plVar1 != 0 && plVar25 != (long *)0x0);
      }
      plVar25 = plVar17 + 5;
      plVar17 = (long *)*plVar25 + -5;
    } while (*(long *)*plVar25 != 0 && plVar17 != (long *)0x0);
  }
  *param_4 = lVar24;
  return uVar30;
}



/* Entry: 109e22fbc; end: 109e2301f;  */

bool FUN_109e22fbc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (((((*(byte *)(param_1 + 0x381) & 1) == 0) && ((*(byte *)(param_1 + 0x3d3) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x377) & 1) == 0)) &&
     ((((*(byte *)(param_1 + 0x3bb) & 1) == 0 && ((*(byte *)(param_1 + 0x389) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x3dd) & 1) == 0)))) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = 0x13f;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar2 = 0x95;
    }
    return uVar2 < uVar1;
  }
  return true;
}



/* Entry: 109e23020; end: 109e23073;  */

void FUN_109e23020(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar2 = *(long *)(param_1 + 0x80) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(long *)(param_1 + 0x88) = param_2;
  for (lVar2 = *(long *)(param_1 + 0x20); *(char *)(lVar2 + 4) == '\x13';
      lVar2 = *(long *)(lVar2 + 0x30)) {
  }
  if (lVar2 == param_2) {
    lVar2 = param_1;
    FUN_109f658b0(param_1,(ulong)*(uint *)(param_2 + 0x10) << 2);
    *(long *)(param_1 + 0x80) = lVar2;
    if (*(int *)(param_2 + 0x10) != 0) {
      uVar1 = 0;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x80) + uVar1 * 4) = 0xffffffff;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_2 + 0x10));
    }
  }
  return;
}



/* Entry: 109e23074; end: 109e232ab;  */

void FUN_109e23074(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uStack_44;
  
  if ((*(byte *)((long)param_5 + 1) & 0xc) == 0) {
    puVar5 = &UNK_10f6093b6;
    goto LAB_109e2310c;
  }
  lVar11 = param_1;
  FUN_109e25338(param_1,param_2,&DAT_10f491dce,param_5[0x10],&uStack_44);
  if ((int)lVar11 == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_4 + 4);
  uVar3 = uStack_44;
  if (bVar2 == 0x13) {
    lVar4 = param_4;
    FUN_109ec88a0();
    do {
      param_4 = *(long *)(param_4 + 0x30);
      bVar2 = *(byte *)(param_4 + 4);
    } while (bVar2 == 0x13);
    uVar3 = ((int)lVar4 + uStack_44) - 1;
  }
  uVar6 = (uint)bVar2;
  if (uVar6 == 0xd) {
    if (*(uint *)(lVar11 + 0x20) <= uVar3) {
      puVar5 = &UNK_10f6094b9;
      goto LAB_109e23288;
    }
    goto LAB_109e2325c;
  }
  if (uVar6 == 0x12) {
    if ((((uint)*param_5 >> 10 & 1) == 0) || (uVar3 < *(uint *)(lVar11 + 0x408))) {
      if ((((uint)*param_5 >> 0xb & 1) == 0) || (uVar3 < *(uint *)(lVar11 + 0x418)))
      goto LAB_109e2325c;
      puVar5 = &UNK_10f609460;
    }
    else {
      puVar5 = &UNK_10f609409;
    }
    goto LAB_109e23288;
  }
  iVar7 = 1;
  uVar8 = uVar6;
  while ((uVar8 & 0xff) == 0x13) {
    piVar1 = (int *)(param_4 + 0x10);
    param_4 = *(long *)(param_4 + 0x30);
    iVar7 = *piVar1 * iVar7;
    uVar8 = *(uint *)(param_4 + 4);
  }
  iVar9 = 4;
  if ((uVar8 & 0xff) != 0x10) {
    iVar9 = 0;
  }
  if (iVar9 * iVar7 != 0) {
    if (uStack_44 < *(uint *)(lVar11 + 0x6d0)) goto LAB_109e2325c;
    puVar5 = &UNK_10f609515;
    goto LAB_109e23288;
  }
  uVar8 = *(uint *)(param_1 + 0xec);
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0xe8);
  }
  uVar10 = 0x135;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar10 = 0x1a3;
  }
  if (uVar10 < uVar8) {
    if (uVar6 == 0xf) {
LAB_109e23250:
      if (*(uint *)(lVar11 + 0x6e8) <= uVar3) {
        puVar5 = &UNK_10f60956c;
LAB_109e23288:
        FUN_109e9ed98(param_2,param_1,puVar5);
        return;
      }
LAB_109e2325c:
      *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) | 0x80000;
      *(short *)(param_3 + 0x4e) = (short)uStack_44;
      return;
    }
  }
  else if ((uVar6 == 0xf) && ((*(byte *)(param_1 + 0x341) & 1) != 0)) goto LAB_109e23250;
  puVar5 = &UNK_10f6095ac;
LAB_109e2310c:
  *(undefined1 *)(param_1 + 0x28b) = 1;
  FUN_109e9ef7c(param_2,param_1,0,puVar5,&stack0x00000000);
  return;
}



/* Entry: 109e232ac; end: 109e2332b;  */

void FUN_109e232ac(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(long *)(param_1 + 0x88) = param_2;
  for (lVar1 = *(long *)(param_1 + 0x20); *(char *)(lVar1 + 4) == '\x13';
      lVar1 = *(long *)(lVar1 + 0x30)) {
  }
  if (lVar1 == param_2) {
    lVar1 = param_1;
    FUN_109f658b0(param_1,(ulong)*(uint *)(param_2 + 0x10) << 2);
    *(long *)(param_1 + 0x80) = lVar1;
    if (*(int *)(param_2 + 0x10) != 0) {
      uVar2 = 0;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x80) + uVar2 * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_2 + 0x10));
    }
  }
  return;
}



/* Entry: 109e2332c; end: 109e235a3;  */

undefined8 FUN_109e2332c(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined4 *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x1c);
  uStack_50 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x140) + 0xc0);
  func_0x000109e2673c(uVar1,param_3,&DAT_10f59a612,&iStack_54,0);
  if ((int)uVar1 != 0) {
    if ((*(int *)(param_3 + 0x424) == 0) || (*(int *)(param_3 + 0x424) == iStack_54)) {
      *(undefined1 *)(param_3 + 0x115) = 1;
      param_2 = (long *)*param_2;
      lVar2 = *param_2;
      while (lVar2 != 0) {
        if ((((*(int *)(param_2 + 2) == 7) && ((*(uint *)(param_2 + 7) & 0x7800) == 0x2800)) &&
            (lVar2 = param_2[3], *(char *)(lVar2 + 4) == '\x13')) &&
           (*(int *)(lVar2 + 0x10) == 0 && (*(uint *)(param_2 + 7) & 8) == 0)) {
          if (*(int *)(param_2 + 0xb) < iStack_54) {
            uVar1 = *(undefined8 *)(lVar2 + 0x30);
            FUN_109ec69f4(uVar1,iStack_54,0);
            param_2[3] = uVar1;
          }
          else {
            FUN_109e9ed98(&uStack_50,param_3,&UNK_10f6065bf);
          }
        }
        param_2 = (long *)*param_2;
        lVar2 = *param_2;
      }
    }
    else {
      FUN_109e9ed98(&uStack_50,param_3,&UNK_10f60654a);
    }
  }
  return 0;
}



/* Entry: 109e235a4; end: 109e23987;  */

undefined8 FUN_109e235a4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = *(undefined8 *)(param_1 + 8);
  uStack_120 = *(undefined4 *)(param_1 + 0x10);
  uStack_128 = *(undefined8 *)(param_1 + 0x1c);
  uStack_130 = *(undefined8 *)(param_1 + 0x14);
  lVar9 = 0x1c1;
  uVar10 = 1;
  puVar8 = (uint *)&uStack_84;
  puVar4 = (undefined8 *)(param_1 + 0x38);
  do {
    puVar2 = (undefined *)0x0;
    FUN_109f65d74(0,&UNK_10f606722);
    puVar3 = (undefined8 *)*puVar4;
    if (puVar3 == (undefined8 *)0x0) {
      *puVar8 = 1;
    }
    else {
      puVar5 = puVar2;
      func_0x000109e2673c(puVar3,param_3,puVar2,puVar8,0);
      if ((int)puVar3 == 0) {
        if (puVar2 != (undefined *)0x0) {
          puVar3 = (undefined8 *)(puVar2 + -0x30);
          FUN_109f65aa4(puVar3);
          FUN_109f65ae0();
        }
        goto LAB_109e2392c;
      }
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_109f65aa4(puVar2 + -0x30);
      FUN_109f65ae0(puVar2 + -0x30);
    }
    if (*(uint *)(*(long *)(param_3 + 0x10) + lVar9 * 4) < *puVar8) {
      puVar2 = &UNK_10f606738;
LAB_109e236c0:
      FUN_109e9ed98(&uStack_130,param_3,puVar2);
      break;
    }
    uVar10 = uVar10 * *puVar8;
    uVar6 = (ulong)*(uint *)(*(long *)(param_3 + 0x10) + 0x710);
    if (uVar6 <= uVar10 && uVar10 - uVar6 != 0) {
      puVar2 = &UNK_10f60676f;
      goto LAB_109e236c0;
    }
    lVar9 = lVar9 + 1;
    puVar8 = puVar8 + 1;
    puVar4 = puVar4 + 1;
  } while (lVar9 != 0x1c4);
  if (*(char *)(param_3 + 0x120) == '\x01') {
    lVar9 = 0x124;
    piVar7 = (int *)&uStack_84;
    do {
      if (*(int *)(param_3 + lVar9) != *piVar7) {
        puVar5 = &UNK_10f6067b6;
        goto LAB_109e23920;
      }
      lVar9 = lVar9 + 4;
      piVar7 = piVar7 + 1;
    } while (lVar9 != 0x130);
  }
  if (*(char *)(param_3 + 0x130) == '\x01') {
    puVar5 = &UNK_10f6067f6;
LAB_109e23920:
    puVar3 = &uStack_130;
    FUN_109e9ed98(puVar3,param_3);
  }
  else {
    *(undefined1 *)(param_3 + 0x120) = 1;
    *(undefined4 *)(param_3 + 300) = uStack_7c;
    *(undefined8 *)(param_3 + 0x124) = uStack_84;
    puVar4 = *(undefined8 **)(param_3 + 0x48);
    FUN_109f658b0(puVar4,0x90);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0x11] = 0;
      puVar4[0x10] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    puVar5 = &UNK_10f606840;
    FUN_109eaba7c(puVar4,&DAT_10e05db20,&UNK_10f606840,0);
    *(uint *)(puVar4 + 8) = *(uint *)(puVar4 + 8) & 0xfffff9ff | 0x401;
    puVar4[1] = param_2 + 0x10;
    plVar1 = (long *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar1 = puVar4 + 1;
    }
    puVar3 = *(undefined8 **)(param_2 + 0x18);
    puVar4[2] = puVar3;
    *puVar3 = plVar1;
    *(long **)(param_2 + 0x18) = plVar1;
    FUN_109ea2118(*(undefined8 *)(param_3 + 0x48),puVar4);
    uStack_8c = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_108 = uStack_84;
    uStack_100 = uStack_7c;
    puVar3 = puVar4;
    FUN_109f658b0(puVar4,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    puVar3[0xe] = CONCAT44(uStack_bc,uStack_c0);
    puVar3[0xd] = CONCAT44(uStack_c4,uStack_c8);
    puVar3[0x10] = CONCAT44(uStack_ac,uStack_b0);
    puVar3[0xf] = CONCAT44(uStack_b4,uStack_b8);
    puVar3[0x12] = CONCAT44(uStack_9c,uStack_a0);
    puVar3[0x11] = CONCAT44(uStack_a4,uStack_a8);
    puVar3[0x14] = CONCAT44(uStack_8c,uStack_90);
    puVar3[0x13] = CONCAT44(uStack_94,uStack_98);
    puVar3[6] = CONCAT44(uStack_fc,uStack_100);
    puVar3[5] = uStack_108;
    puVar3[8] = CONCAT44(uStack_ec,uStack_f0);
    puVar3[7] = CONCAT44(uStack_f4,uStack_f8);
    puVar3[10] = CONCAT44(uStack_dc,uStack_e0);
    puVar3[9] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 3;
    *puVar3 = &PTR_DAT_110b63f80;
    puVar3[0x15] = 0;
    puVar3[4] = &DAT_10e05db20;
    puVar3[0xc] = CONCAT44(uStack_cc,uStack_d0);
    puVar3[0xb] = CONCAT44(uStack_d4,uStack_d8);
    puVar4[0xe] = puVar3;
    puVar3 = puVar4;
    FUN_109f658b0(puVar4,0xb0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x15] = 0;
      puVar3[0x14] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      puVar3[0x11] = 0;
      puVar3[0x10] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    puVar3[0xe] = CONCAT44(uStack_bc,uStack_c0);
    puVar3[0xd] = CONCAT44(uStack_c4,uStack_c8);
    puVar3[0x10] = CONCAT44(uStack_ac,uStack_b0);
    puVar3[0xf] = CONCAT44(uStack_b4,uStack_b8);
    puVar3[0x12] = CONCAT44(uStack_9c,uStack_a0);
    puVar3[0x11] = CONCAT44(uStack_a4,uStack_a8);
    puVar3[0x14] = CONCAT44(uStack_8c,uStack_90);
    puVar3[0x13] = CONCAT44(uStack_94,uStack_98);
    puVar3[6] = CONCAT44(uStack_fc,uStack_100);
    puVar3[5] = uStack_108;
    puVar3[8] = CONCAT44(uStack_ec,uStack_f0);
    puVar3[7] = CONCAT44(uStack_f4,uStack_f8);
    puVar3[10] = CONCAT44(uStack_dc,uStack_e0);
    puVar3[9] = CONCAT44(uStack_e4,uStack_e8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 3;
    *puVar3 = &PTR_DAT_110b63f80;
    puVar3[0x15] = 0;
    puVar3[4] = &DAT_10e05db20;
    puVar3[0xc] = CONCAT44(uStack_cc,uStack_d0);
    puVar3[0xb] = CONCAT44(uStack_d4,uStack_d8);
    puVar4[0xf] = puVar3;
    *(uint *)(puVar4 + 8) = *(uint *)(puVar4 + 8) & 0xff9fffff | 0x200000;
  }
LAB_109e2392c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    puVar5[0x2f0] = *(undefined1 *)(puVar3 + 7);
    return 0;
  }
  return 0;
}



/* Entry: 109e23988; end: 109e23997;  */

undefined8 FUN_109e23988(long param_1,undefined8 param_2,long param_3)

{
  *(undefined1 *)(param_3 + 0x2f0) = *(undefined1 *)(param_1 + 0x38);
  return 0;
}



/* Entry: 109e23998; end: 109e239ff;  */

undefined8 FUN_109e23998(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x40))();
  uVar1 = 0;
  if (param_2 != (long *)0x0) {
    if (((*(uint *)(param_2 + 8) & 0x7800) == 0x1000) &&
       ((*(ushort *)((long)param_2 + 0x44) >> 9 & 1) != 0)) {
      *(long **)(param_1 + 0x38) = param_2;
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 109e23a00; end: 109e23a0f;  */

bool FUN_109e23a00(undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 0x28) == 0x75;
}



/* Entry: 109e23a10; end: 109e23c87;  */

long FUN_109e23a10(long param_1,undefined8 param_2,long *param_3,long param_4,int param_5)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  long lStack_58;
  
  if (*(char *)(*(long *)(param_4 + 0x20) + 4) == '\x16') {
    return param_4;
  }
  lStack_58 = param_4;
  if ((((*(int *)(param_1 + 0xf8) == 1) && (*(char *)(param_3[4] + 4) != '\x16')) &&
      (plVar7 = param_3, (**(code **)(*param_3 + 0x40))(), plVar7 != (long *)0x0)) &&
     ((*(uint *)(plVar7 + 8) & 0x7808) == 0x2800)) {
    plVar4 = (long *)0x0;
    plVar7 = param_3;
    do {
      iVar1 = (int)plVar7[3];
      plVar2 = plVar7;
      if ((iVar1 != 0) && (plVar2 = plVar4, iVar1 != 5 && iVar1 != 1)) break;
      plVar4 = plVar2;
      plVar7 = (long *)plVar7[5];
    } while (plVar7 != (long *)0x0);
    if (((plVar4 != (long *)0x0) && (plVar7 = (long *)plVar4[6], plVar7 != (long *)0x0)) &&
       ((**(code **)(*plVar7 + 0x40))(), plVar7 != (long *)0x0)) {
      lVar5 = plVar7[5];
      _strcmp(lVar5,&UNK_10f606900);
      if ((int)lVar5 == 0) goto LAB_109e23b08;
    }
    puVar6 = &UNK_10f606910;
  }
  else {
LAB_109e23b08:
    lVar5 = *(long *)(param_4 + 0x20);
    lVar11 = param_3[4];
    if (lVar5 == lVar11) {
      return param_4;
    }
    uVar3 = *(uint *)(lVar11 + 4);
    if ((uVar3 & 0xff) == 0x13) {
      bVar10 = false;
      lVar8 = lVar5;
      lVar9 = lVar11;
      do {
        while( true ) {
          if (*(char *)(lVar8 + 4) != '\x13') goto LAB_109e23bb0;
          if (*(int *)(lVar9 + 0x10) != *(int *)(lVar8 + 0x10)) break;
          lVar9 = *(long *)(lVar9 + 0x30);
          lVar8 = *(long *)(lVar8 + 0x30);
          if (*(char *)(lVar9 + 4) != '\x13' || lVar8 == lVar9) {
            if (!bVar10) goto LAB_109e23bb0;
            goto LAB_109e23b94;
          }
        }
        if (*(int *)(lVar9 + 0x10) != 0) goto LAB_109e23bb0;
        lVar9 = *(long *)(lVar9 + 0x30);
        lVar8 = *(long *)(lVar8 + 0x30);
        bVar10 = true;
      } while (*(char *)(lVar9 + 4) == '\x13' && lVar8 != lVar9);
LAB_109e23b94:
      if (param_5 == 0) {
        puVar6 = &UNK_10f60695b;
        goto LAB_109e23c4c;
      }
      FUN_109ec6840();
      FUN_109ec6840();
      if (lVar5 == lVar11) {
        return param_4;
      }
    }
LAB_109e23bb0:
    func_0x000109e18df8(uVar3,&lStack_58,param_1);
    if ((uVar3 != 0) && (*(long *)(lStack_58 + 0x20) == param_3[4])) {
      return lStack_58;
    }
    if ((*(byte *)(*(long *)(lStack_58 + 0x20) + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    if ((*(byte *)(param_3[4] + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    puVar6 = &UNK_10f606986;
  }
LAB_109e23c4c:
  FUN_109e9ed98(param_2,param_1,puVar6);
  return 0;
}



/* Entry: 109e23c88; end: 109e23d0f;  */

undefined8 FUN_109e23c88(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x2f5) & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = 0x135;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar2 = 0x1ad;
    }
    if (uVar1 <= uVar2) {
      FUN_109e9ed98(param_2,param_1,&UNK_10f606ec8);
      return 0;
    }
  }
  return 1;
}



/* Entry: 109e23d10; end: 109e23d77;  */

bool FUN_109e23d10(long param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (param_2 != 4) {
    bVar2 = (uVar1 & 0x7000) == 0x2000;
    if (param_2 == 0) {
      bVar2 = (uVar1 & 0x7800) == 0x2800;
    }
    return bVar2;
  }
  uVar1 = uVar1 >> 0xb & 0xf;
  if (uVar1 != 4) {
    if (uVar1 == 10) {
      return *(int *)(param_1 + 0x50) == 0x13;
    }
    return false;
  }
  return true;
}



/* Entry: 109e23d78; end: 109e24027;  */

uint FUN_109e23d78(ulong *param_1,ulong param_2,int param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  iVar3 = (int)param_2;
  uVar6 = *param_1;
  uVar5 = 3;
  if ((uVar6 & 0x8000) == 0) {
    uVar5 = (uint)uVar6 >> 0xd & 1;
  }
  uVar1 = 2;
  if ((uVar6 & 0x4000) == 0) {
    uVar1 = uVar5;
  }
  uVar5 = *(uint *)(param_4 + 0xec);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_4 + 0xe8);
  }
  uVar7 = 299;
  if (*(char *)(param_4 + 0xe4) == '\0') {
    uVar7 = 0x81;
  }
  if (uVar7 < uVar5) {
    if ((1 < uVar1) || (uVar1 != 0)) {
LAB_109e23e44:
      if (param_3 - 6U < 0xfffffffe) {
        FUN_109e9ed98(param_5,param_4,&UNK_10f6073e0);
      }
      if (*(int *)(param_4 + 0xf8) == 4) {
        if (param_3 == 5) {
          puVar4 = &UNK_10f607475;
          goto LAB_109e23e9c;
        }
      }
      else if ((*(int *)(param_4 + 0xf8) == 0) && (param_3 == 4)) {
        puVar4 = &UNK_10f60742e;
LAB_109e23e9c:
        FUN_109e9ed98(param_5,param_4,puVar4);
      }
    }
  }
  else if ((uVar1 != 0) && ((*(byte *)(param_4 + 0x3bd) & 1) != 0)) goto LAB_109e23e44;
  uVar5 = *(uint *)(param_4 + 0xec);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_4 + 0xe8);
  }
  if ((((0x81 < uVar5) && ((*(byte *)(param_4 + 0xe4) & 1) == 0)) && (uVar1 != 0)) &&
     (((*(byte *)(param_4 + 0x3bd) & 1) == 0 && (((uint)*param_1 >> 4 & 1) != 0)))) {
    FUN_109e9ed98(param_5,param_4,&UNK_10f6074d0);
  }
  if (param_3 != 4) {
    return uVar1;
  }
  if (uVar1 == 2) {
    return 2;
  }
  if (*(int *)(param_4 + 0xf8) != 4) {
    return uVar1;
  }
  uVar5 = *(uint *)(param_4 + 0xec);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_4 + 0xe8);
  }
  uVar7 = 299;
  if (*(char *)(param_4 + 0xe4) == '\0') {
    uVar7 = 0x81;
  }
  if (((uVar7 < uVar5) || (*(char *)(param_4 + 0x3bd) == '\x01')) &&
     (iVar2 = iVar3, func_0x000109ec6594(), iVar2 != 0)) {
    FUN_109e9ed98(param_5,param_4,&UNK_10f60751a);
  }
  if ((*(byte *)(param_4 + 0x317) & 1) == 0) {
    uVar5 = *(uint *)(param_4 + 0xec);
    if (uVar5 == 0) {
      uVar5 = *(uint *)(param_4 + 0xe8);
    }
    if ((uVar5 < 400) || ((*(byte *)(param_4 + 0xe4) & 1) != 0)) goto LAB_109e23fd0;
  }
  iVar2 = iVar3;
  func_0x000109ec661c();
  if (iVar2 != 0) {
    FUN_109e9ed98(param_5,param_4,&UNK_10f607571);
  }
LAB_109e23fd0:
  if ((*(char *)(param_4 + 0x2f7) == '\x01') &&
     ((func_0x000109ec64b4(), (param_2 & 1) != 0 || (func_0x000109ec6798(), iVar3 != 0)))) {
    FUN_109e9ed98(param_5,param_4,&UNK_10f6075c6);
  }
  return uVar1;
}



/* Entry: 109e24028; end: 109e24097;  */

undefined8 FUN_109e24028(uint param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 >> 0xb & 0xf;
  if (*(char *)(param_2 + 0x2f7) == '\x01') {
    puVar2 = &UNK_10f60786d;
    if ((uVar1 < 9) && ((499U >> (ulong)uVar1 & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (uVar1 == 1) {
      return 1;
    }
    if (uVar1 == 6) {
      return 1;
    }
    puVar2 = &UNK_10f607909;
  }
  FUN_109e9ed98(param_3,param_2,puVar2);
  return 0;
}



/* Entry: 109e24098; end: 109e241cf;  */

void FUN_109e24098(long param_1,undefined8 param_2,long param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_3 + 4);
  while (uVar5 = (uint)bVar1, uVar5 == 0x13) {
    param_3 = *(long *)(param_3 + 0x30);
    bVar1 = *(byte *)(param_3 + 4);
  }
  lVar3 = param_3;
  func_0x000109ec8650();
  bVar2 = uVar5 - 2 < 3;
  if ((bVar2 && *(char *)(param_3 + 0xe) != '\0') && (!bVar2 || *(char *)(param_3 + 0xe) != '\x01')
      || uVar5 == 0x11) {
    puVar4 = &UNK_10f608223;
LAB_109e24104:
    *(undefined1 *)(param_1 + 0x28b) = 1;
    FUN_109e9ef7c(param_2,param_1,0,puVar4,&stack0x00000000);
    return;
  }
  if ((((uint)lVar3 < 5) || (0xf < uVar5)) || ((1 << (ulong)(uVar5 & 0x1f) & 0xe610U) == 0)) {
    if (param_4 == 0) {
      return;
    }
    if ((param_4 + (uint)lVar3) - 1 < 4) {
      if (param_4 != 1) {
        return;
      }
      if (0xf < uVar5) {
        return;
      }
      if ((1 << (ulong)(uVar5 & 0x1f) & 0xe610U) == 0) {
        return;
      }
      puVar4 = &UNK_10f6082ec;
      goto LAB_109e24104;
    }
    puVar4 = &UNK_10f6082d0;
  }
  else {
    puVar4 = &UNK_10f608298;
  }
  FUN_109e9ed98(param_2,param_1,puVar4);
  return;
}



/* Entry: 109e241d0; end: 109e24247;  */

void FUN_109e241d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_4 != 0) &&
     ((1 < (*(uint *)(param_4 + 0x40) >> 0xb & 0xf) - 1 || (*(long *)(param_4 + 0x88) == 0)))) {
    *(undefined1 *)(param_1 + 0x28b) = 1;
    FUN_109e9ef7c(param_2,param_1,0,&UNK_10f608315,&stack0x00000000);
    return;
  }
  for (; *(byte *)(param_3 + 4) == 0x13; param_3 = *(long *)(param_3 + 0x30)) {
  }
  if ((1 < *(byte *)(param_3 + 0xe)) && (*(byte *)(param_3 + 4) - 2 < 3)) {
    return;
  }
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    FUN_109e9ef7c(param_2,param_1,5,&UNK_10f60838a,&stack0x00000000);
  }
  return;
}



/* Entry: 109e24248; end: 109e243a7;  */

bool FUN_109e24248(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x30b) & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = 299;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar2 = 0x149;
    }
    if (uVar1 <= uVar2) {
      FUN_109eabce8();
      FUN_109e9ed98(param_2,param_1,&UNK_10f608193);
    }
    return uVar1 > uVar2;
  }
  return true;
}



/* Entry: 109e243a8; end: 109e24557;  */

void FUN_109e243a8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,int *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_3 + 0x20);
  uVar3 = (uint)param_4;
  if ((*(char *)(lVar4 + 4) == '\x13') && (*(int *)(lVar4 + 0x10) == 0)) {
    if (uVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar4 + 0x30);
      FUN_109ec69f4(uVar1,param_4,0);
      *(undefined8 *)(param_3 + 0x20) = uVar1;
    }
  }
  else {
    uVar5 = (ulong)*(uint *)(lVar4 + 0x10);
    if ((uVar3 == 0) || (uVar5 = param_4, *(uint *)(lVar4 + 0x10) == uVar3)) {
      if (*param_5 == 0 || (int)uVar5 == *param_5) {
        *param_5 = (int)uVar5;
        return;
      }
      puVar2 = &UNK_10f608577;
    }
    else {
      puVar2 = &UNK_10f608519;
    }
    FUN_109e9ed98(param_2,param_1,puVar2);
  }
  return;
}



/* Entry: 109e24558; end: 109e24597;  */

undefined8 FUN_109e24558(long param_1,long param_2)

{
  if (((*(uint *)(*(long *)(param_2 + 0x28) + 0x40) >> 0xb & 0xf) == *(uint *)(param_1 + 0x34)) &&
     (*(long *)(*(long *)(param_2 + 0x28) + 0x88) == *(long *)(param_1 + 0x38))) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    return 2;
  }
  return 0;
}



/* Entry: 109e24598; end: 109e24607;  */

void FUN_109e24598(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x48) == (undefined8 *)0x0) {
    _printf(&UNK_10f6038cb);
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x48))();
  }
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000109e245f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x50))();
    return;
  }
  return;
}



/* Entry: 109e24608; end: 109e2470b;  */

bool FUN_109e24608(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint auStack_120 [8];
  uint auStack_100 [56];
  uint auStack_20 [4];
  
  auStack_100[2] = 0;
  auStack_100[0] = 0;
  auStack_100[1] = 0x2000000;
  if ((*(byte *)(param_2 + 0x30d) & 1) == 0) {
    uVar2 = *(uint *)(param_2 + 0xec);
    if (uVar2 == 0) {
      uVar2 = *(uint *)(param_2 + 0xe8);
    }
    uVar3 = 0x135;
    if (*(char *)(param_2 + 0xe4) == '\0') {
      uVar3 = 0x1ad;
    }
    if (uVar2 <= uVar3) goto LAB_109e24664;
  }
  auStack_100[0] = 0x100000;
  auStack_100[1] = 0x2000000;
LAB_109e24664:
  lVar1 = 0;
  do {
    *(uint *)((long)auStack_20 + lVar1) = ~*(uint *)((long)auStack_100 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  lVar1 = 0;
  auStack_120[2] = auStack_20[2];
  auStack_20[0] = (uint)*(undefined8 *)(param_1 + 0x38);
  auStack_20[1] = (uint)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  auStack_20[2] = *(int *)(param_1 + 0x40);
  do {
    *(uint *)((long)auStack_20 + lVar1) =
         *(uint *)((long)auStack_20 + lVar1) & *(uint *)((long)auStack_120 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  return CONCAT44(auStack_20[1],auStack_20[0]) != 0 || auStack_20[2] != 0;
}



/* Entry: 109e2470c; end: 109e25337;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_109e2470c(ulong *param_1,undefined8 param_2,long param_3,ulong *param_4,uint param_5,
                  uint param_6)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_5d0;
  int iStack_5c8;
  long lStack_5c0;
  int iStack_5b8;
  undefined8 uStack_5b0;
  undefined4 uStack_5a8;
  uint auStack_4d0 [56];
  uint auStack_3f0 [56];
  uint auStack_310 [56];
  uint auStack_230 [56];
  uint auStack_150 [56];
  uint auStack_70 [4];
  
  auStack_150[2] = 0;
  auStack_150[0] = 0x60000000;
  auStack_150[1] = 0;
  auStack_230[2] = 0;
  auStack_230[0] = 0x1e000000;
  auStack_230[1] = 0;
  auStack_310[2] = 0;
  auStack_310[0] = 0xc00000;
  auStack_310[1] = 0;
  auStack_3f0[2] = 0;
  auStack_3f0[0] = 0;
  auStack_3f0[1] = 0x2000;
  auStack_4d0[2] = 0x20;
  auStack_4d0[0] = 0x2be3e7;
  auStack_4d0[1] = 0x100000;
  if (*(char *)(param_3 + 0x2f7) == '\x01') {
    auStack_4d0[0] = 0x2be3e7;
    auStack_4d0[1] = 0x100fc0;
  }
  auStack_4d0[0] = 0x2be3e7;
  lVar8 = 0;
  uStack_5b0 = 0x60000000;
  uStack_5a8 = 0;
  do {
    *(uint *)((long)&uStack_5b0 + lVar8) =
         *(uint *)((long)&uStack_5b0 + lVar8) | *(uint *)((long)auStack_230 + lVar8);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  lVar8 = 0;
  do {
    *(uint *)((long)&uStack_5b0 + lVar8) =
         *(uint *)((long)&uStack_5b0 + lVar8) | *(uint *)((long)auStack_310 + lVar8);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  if (*(int *)(param_3 + 0xf8) == 3) {
    lVar8 = 0;
    do {
      *(uint *)((long)&uStack_5b0 + lVar8) =
           *(uint *)((long)&uStack_5b0 + lVar8) | *(uint *)((long)auStack_3f0 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
  }
  if ((param_5 != 0) && ((*(byte *)(param_3 + 0x309) & 1) == 0)) {
    uVar7 = *(uint *)(param_3 + 0xec);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(param_3 + 0xe8);
    }
    if ((uVar7 < 0x1b8) || (*(char *)(param_3 + 0xe4) != '\0')) {
      lVar8 = 0;
      auStack_70[0] = (uint)*param_1;
      auStack_70[1] = (uint)(*param_1 >> 0x20);
      auStack_70[2] = (int)param_1[1];
      do {
        *(uint *)((long)auStack_70 + lVar8) =
             *(uint *)((long)auStack_70 + lVar8) & *(uint *)((long)param_4 + lVar8);
        uVar2 = auStack_70[2];
        uVar11 = auStack_70[1];
        uVar7 = auStack_70[0];
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      lVar8 = 0;
      do {
        *(uint *)((long)auStack_70 + lVar8) = ~*(uint *)((long)&uStack_5b0 + lVar8);
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      lVar8 = 0;
      uStack_5d0 = CONCAT44(auStack_70[1],auStack_70[0]);
      iStack_5c8 = auStack_70[2];
      auStack_70[0] = uVar7;
      auStack_70[1] = uVar11;
      auStack_70[2] = uVar2;
      do {
        *(uint *)((long)auStack_70 + lVar8) =
             *(uint *)((long)auStack_70 + lVar8) & *(uint *)((long)&uStack_5d0 + lVar8);
        uVar7 = auStack_70[2];
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0xc);
      lStack_5c0 = CONCAT44(auStack_70[1],auStack_70[0]);
      iStack_5b8 = auStack_70[2];
      auStack_70[0] = 0;
      auStack_70[1] = 0;
      auStack_70[2] = 0;
      if (lStack_5c0 != 0 || uVar7 != 0) {
        puVar6 = &UNK_10f6098a6;
        goto LAB_109e24fe4;
      }
    }
  }
  if ((param_6 != 0) && ((*(byte *)(param_3 + 0x341) & 1) == 0)) {
    uVar7 = *(uint *)(param_3 + 0xec);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(param_3 + 0xe8);
    }
    uVar11 = 0x135;
    if (*(char *)(param_3 + 0xe4) == '\0') {
      uVar11 = 0x1a3;
    }
    if (uVar7 <= uVar11) {
      puVar6 = &UNK_10f6098c7;
      goto LAB_109e24fe4;
    }
  }
  uVar10 = *param_4;
  if ((int)uVar10 < 0) {
    uVar10 = *param_1;
    bVar5 = (uint)uVar10 < 0x80000000;
    bVar4 = (int)param_1[0xf] == (int)param_4[0xf];
    bVar3 = bVar5 || bVar4;
    if (!bVar5 && !bVar4) {
      FUN_109e9ed98(param_2,param_3,&UNK_10f609ec1);
      uVar10 = *param_1;
    }
    *param_1 = uVar10 | 0x80000000;
    *(int *)(param_1 + 0xf) = (int)param_4[0xf];
    uVar10 = *param_4;
  }
  else {
    bVar3 = true;
  }
  if ((uVar10 >> 0x20 & 1) != 0) {
    if ((((param_6 & 1) == 0) && ((param_5 & 1) == 0)) && ((*param_1 >> 0x20 & 1) != 0)) {
      uVar10 = param_4[7];
      lVar8 = *(long *)(uVar10 + 0x38);
      if (lVar8 != uVar10 + 0x48) {
        uVar12 = param_1[7];
        plVar13 = *(long **)(uVar12 + 0x50);
        *plVar13 = lVar8;
        *(long **)(*(long *)(uVar10 + 0x38) + 8) = plVar13;
        plVar13 = *(long **)(uVar10 + 0x50);
        *(long **)(uVar12 + 0x50) = plVar13;
        *plVar13 = uVar12 + 0x48;
        *(ulong *)(uVar10 + 0x38) = uVar10 + 0x48;
        *(undefined8 *)(uVar10 + 0x40) = 0;
        *(undefined8 *)(uVar10 + 0x48) = 0;
        *(long **)(uVar10 + 0x50) = (long *)(uVar10 + 0x38);
      }
    }
    else {
      *param_1 = *param_1 | 0x100000000;
      param_1[7] = param_4[7];
    }
  }
  if (param_4[0x1b] != 0) {
    if (param_1[0x1b] == 0) {
      param_1[0x1b] = param_4[0x1b];
    }
    else {
      FUN_109e9ed98(param_2,param_3,&UNK_10f6098e8);
    }
  }
  if ((*(byte *)((long)param_4 + 5) >> 4 & 1) != 0) {
    if ((((param_6 & 1) == 0) && ((param_5 & 1) == 0)) && ((*param_1 >> 0x2c & 1) != 0)) {
      uVar10 = param_4[3];
      lVar8 = *(long *)(uVar10 + 0x38);
      if (lVar8 != uVar10 + 0x48) {
        uVar12 = param_1[3];
        plVar13 = *(long **)(uVar12 + 0x50);
        *plVar13 = lVar8;
        *(long **)(*(long *)(uVar10 + 0x38) + 8) = plVar13;
        plVar13 = *(long **)(uVar10 + 0x50);
        *(long **)(uVar12 + 0x50) = plVar13;
        *plVar13 = uVar12 + 0x48;
        *(ulong *)(uVar10 + 0x38) = uVar10 + 0x48;
        *(undefined8 *)(uVar10 + 0x40) = 0;
        *(undefined8 *)(uVar10 + 0x48) = 0;
        *(long **)(uVar10 + 0x50) = (long *)(uVar10 + 0x38);
      }
    }
    else {
      *param_1 = *param_1 | 0x100000000000;
      param_1[3] = param_4[3];
    }
  }
  if (*(int *)(param_3 + 0xf8) == 3) {
    if ((*(byte *)(param_3 + 0x315) & 1) == 0) {
      uVar7 = *(uint *)(param_3 + 0xec);
      if (uVar7 == 0) {
        uVar7 = *(uint *)(param_3 + 0xe8);
      }
      if ((uVar7 < 400) || ((*(byte *)(param_3 + 0xe4) & 1) != 0)) goto LAB_109e24bd4;
    }
    uVar10 = *param_1;
    if ((uVar10 >> 0x2e & 1) == 0) {
      if ((*(byte *)((long)param_4 + 5) >> 5 & 1) == 0) {
        if ((uVar10 & 0x200000000060) != 0x40) goto LAB_109e24bd4;
        *param_1 = uVar10 | 0x200000000000;
        puVar9 = *(ulong **)(param_3 + 0x140);
      }
      else {
        *param_1 = uVar10 | 0x200000000000;
        puVar9 = param_4;
      }
      param_1[8] = puVar9[8];
    }
  }
LAB_109e24bd4:
  if ((*(byte *)(param_3 + 0x309) & 1) == 0) {
    uVar7 = *(uint *)(param_3 + 0xec);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(param_3 + 0xe8);
    }
    if ((0x1b7 < uVar7) && ((*(byte *)(param_3 + 0xe4) & 1) == 0)) goto LAB_109e24bf8;
  }
  else {
LAB_109e24bf8:
    uVar10 = *param_1;
    uVar12 = *param_4;
    if ((uVar10 >> 0x31 & 1) == 0) {
      if ((uVar12 >> 0x30 & 1) == 0) {
        if ((uVar10 & 0x1000000000060) != 0x40) goto LAB_109e24c40;
        *param_1 = uVar10 | 0x1000000000000;
        puVar9 = *(ulong **)(param_3 + 0x140);
      }
      else {
        *param_1 = uVar10 | 0x1000000000000;
        puVar9 = param_4;
      }
      uVar10 = uVar10 | 0x1000000000000;
      param_1[9] = puVar9[9];
      uVar12 = *param_4;
    }
LAB_109e24c40:
    if ((uVar12 >> 0x33 & 1) != 0) {
      *param_1 = uVar10 | 0xc000000000000;
      param_1[10] = param_4[10];
    }
  }
  if ((*param_4 & 0x100000000000000) != 0) {
    if ((((param_6 & 1) == 0) && ((param_5 & 1) == 0)) && ((*param_1 >> 0x38 & 1) != 0)) {
      uVar10 = param_4[0x18];
      lVar8 = *(long *)(uVar10 + 0x38);
      if (lVar8 != uVar10 + 0x48) {
        uVar12 = param_1[0x18];
        plVar13 = *(long **)(uVar12 + 0x50);
        *plVar13 = lVar8;
        *(long **)(*(long *)(uVar10 + 0x38) + 8) = plVar13;
        plVar13 = *(long **)(uVar10 + 0x50);
        *(long **)(uVar12 + 0x50) = plVar13;
        *plVar13 = uVar12 + 0x48;
        *(ulong *)(uVar10 + 0x38) = uVar10 + 0x48;
        *(undefined8 *)(uVar10 + 0x40) = 0;
        *(undefined8 *)(uVar10 + 0x48) = 0;
        *(long **)(uVar10 + 0x50) = (long *)(uVar10 + 0x38);
      }
    }
    else {
      *param_1 = *param_1 | 0x100000000000000;
      param_1[0x18] = param_4[0x18];
    }
  }
  uVar10 = *param_4;
  if ((uVar10 >> 0x35 & 1) != 0) {
    uVar10 = *param_1;
    bVar5 = (uVar10 & 0x20000000000000) == 0;
    bVar4 = (int)param_1[0x16] == (int)param_4[0x16];
    if (!bVar5 && !bVar4) {
      FUN_109e9ed98(param_2,param_3,&UNK_10f609eea);
      uVar10 = *param_1;
    }
    bVar3 = (bool)(bVar3 & (bVar5 || bVar4));
    *param_1 = uVar10 | 0x20000000000000;
    *(int *)(param_1 + 0x16) = (int)param_4[0x16];
    uVar10 = *param_4;
  }
  if ((uVar10 >> 0x36 & 1) != 0) {
    uVar10 = *param_1;
    bVar5 = (uVar10 & 0x40000000000000) == 0;
    bVar4 = *(int *)((long)param_1 + 0xb4) == *(int *)((long)param_4 + 0xb4);
    if (!bVar5 && !bVar4) {
      FUN_109e9ed98(param_2,param_3,&UNK_10f609f0f);
      uVar10 = *param_1;
    }
    bVar3 = (bool)(bVar3 & (bVar5 || bVar4));
    *param_1 = uVar10 | 0x40000000000000;
    *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)((long)param_4 + 0xb4);
    uVar10 = *param_4;
  }
  if ((uVar10 >> 0x37 & 1) != 0) {
    *param_1 = *param_1 | 0x80000000000000;
    *(byte *)(param_1 + 0x17) = (byte)param_4[0x17];
    uVar10 = *param_4;
  }
  if ((uVar10 >> 0x25 & 1) != 0) {
    *param_1 = *param_1 | 0x2000000000;
  }
  lVar8 = 0;
  auStack_70[0] = (uint)*param_4;
  auStack_70[1] = (uint)(*param_4 >> 0x20);
  auStack_70[2] = (int)param_4[1];
  do {
    *(uint *)((long)auStack_70 + lVar8) =
         *(uint *)((long)auStack_70 + lVar8) & *(uint *)((long)auStack_150 + lVar8);
    uVar7 = auStack_70[2];
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  lVar8 = CONCAT44(auStack_70[1],auStack_70[0]);
  auStack_70[0] = 0;
  auStack_70[1] = 0;
  auStack_70[2] = 0;
  if (lVar8 != 0 || uVar7 != 0) {
    lVar8 = 0;
    do {
      *(uint *)((long)auStack_70 + lVar8) = ~*(uint *)((long)auStack_150 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
    lVar8 = 0;
    do {
      *(uint *)((long)param_1 + lVar8) =
           *(uint *)((long)param_1 + lVar8) & *(uint *)((long)auStack_70 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
  }
  lVar8 = 0;
  auStack_70[0] = (uint)*param_4;
  auStack_70[1] = (uint)(*param_4 >> 0x20);
  auStack_70[2] = (int)param_4[1];
  do {
    *(uint *)((long)auStack_70 + lVar8) =
         *(uint *)((long)auStack_70 + lVar8) & *(uint *)((long)auStack_230 + lVar8);
    uVar7 = auStack_70[2];
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  lStack_5c0 = CONCAT44(auStack_70[1],auStack_70[0]);
  iStack_5b8 = auStack_70[2];
  auStack_70[0] = 0;
  auStack_70[1] = 0;
  auStack_70[2] = 0;
  if (lStack_5c0 != 0 || uVar7 != 0) {
    lVar8 = 0;
    do {
      *(uint *)((long)auStack_70 + lVar8) = ~*(uint *)((long)auStack_230 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
    lVar8 = 0;
    do {
      *(uint *)((long)param_1 + lVar8) =
           *(uint *)((long)param_1 + lVar8) & *(uint *)((long)auStack_70 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
  }
  lVar8 = 0x13;
  do {
    if (((uint)(*param_4 >> 0x21) >> (ulong)((int)lVar8 - 0x13U & 0x1f) & 1) != 0) {
      uVar10 = param_1[lVar8];
      uVar7 = param_5 | param_6;
      if (uVar10 == 0) {
        uVar7 = 1;
      }
      uVar12 = param_4[lVar8];
      if ((uVar7 & 1) == 0) {
        lVar14 = *(long *)(uVar12 + 0x38);
        if (lVar14 != uVar12 + 0x48) {
          plVar13 = *(long **)(uVar10 + 0x50);
          *plVar13 = lVar14;
          *(long **)(*(long *)(uVar12 + 0x38) + 8) = plVar13;
          plVar13 = *(long **)(uVar12 + 0x50);
          *(long **)(uVar10 + 0x50) = plVar13;
          *plVar13 = uVar10 + 0x48;
          *(ulong *)(uVar12 + 0x38) = uVar12 + 0x48;
          *(undefined8 *)(uVar12 + 0x40) = 0;
          *(undefined8 *)(uVar12 + 0x48) = 0;
          *(long **)(uVar12 + 0x50) = (long *)(uVar12 + 0x38);
        }
      }
      else {
        param_1[lVar8] = uVar12;
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x16);
  if ((*(byte *)((long)param_4 + 4) >> 4 & 1) != 0) {
    *param_1 = *param_1 | 0x1000000000;
  }
  bVar1 = (byte)param_4[1];
  if ((bVar1 >> 1 & 1) != 0) {
    *(byte *)(param_1 + 1) = (byte)param_1[1] | 2;
    bVar1 = (byte)param_4[1];
  }
  if ((bVar1 >> 2 & 1) != 0) {
    *(byte *)(param_1 + 1) = (byte)param_1[1] | 4;
    bVar1 = (byte)param_4[1];
  }
  if ((bVar1 >> 3 & 1) != 0) {
    *(byte *)(param_1 + 1) = (byte)param_1[1] | 8;
    bVar1 = (byte)param_4[1];
  }
  if ((bVar1 >> 4 & 1) != 0) {
    *(byte *)(param_1 + 1) = (byte)param_1[1] | 0x10;
    bVar1 = (byte)param_4[1];
  }
  if ((bVar1 >> 6 & 1) != 0) {
    *(byte *)(param_1 + 1) = (byte)param_1[1] | 0x40;
    *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)((long)param_4 + 0xcc);
  }
  lVar8 = 0;
  do {
    *(uint *)((long)param_1 + lVar8) =
         *(uint *)((long)param_1 + lVar8) | *(uint *)((long)param_4 + lVar8);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  if (((uint)*param_1 >> 5 & 1) != 0) {
    lVar8 = 0;
    do {
      *(uint *)((long)auStack_70 + lVar8) = ~*(uint *)((long)auStack_4d0 + lVar8);
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
    lVar8 = 0;
    uStack_5d0 = CONCAT44(auStack_70[1],auStack_70[0]);
    iStack_5c8 = auStack_70[2];
    auStack_70[0] = (uint)*param_1;
    auStack_70[1] = (uint)(*param_1 >> 0x20);
    auStack_70[2] = (int)param_1[1];
    do {
      *(uint *)((long)auStack_70 + lVar8) =
           *(uint *)((long)auStack_70 + lVar8) & *(uint *)((long)&uStack_5d0 + lVar8);
      uVar7 = auStack_70[2];
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0xc);
    lStack_5c0 = CONCAT44(auStack_70[1],auStack_70[0]);
    iStack_5b8 = auStack_70[2];
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    if (lStack_5c0 != 0 || uVar7 != 0) {
      puVar6 = &UNK_10f60990f;
LAB_109e24fe4:
      FUN_109e9ed98(param_2,param_3,puVar6);
      return false;
    }
  }
  uVar10 = *param_4;
  uVar7 = (uint)uVar10;
  if ((uVar7 >> 0x12 & 1) != 0) {
    param_1[2] = param_4[2];
    uVar10 = *param_4;
    uVar7 = (uint)uVar10;
  }
  if ((uVar7 >> 0x13 & 1) == 0) {
    uVar7 = (uint)uVar10;
  }
  else {
    param_1[4] = param_4[4];
    uVar10 = *param_4;
    uVar7 = (uint)uVar10;
  }
  if ((uVar7 >> 0x14 & 1) == 0) {
    uVar7 = (uint)uVar10;
  }
  else {
    param_1[5] = param_4[5];
    uVar10 = *param_4;
    uVar7 = (uint)uVar10;
  }
  if ((uVar7 >> 0x15 & 1) == 0) {
    uVar7 = (uint)uVar10;
  }
  else {
    param_1[6] = param_4[6];
    uVar10 = *param_4;
    uVar7 = (uint)uVar10;
  }
  if ((uVar7 >> 0x16 & 1) != 0) {
    param_1[0x10] = param_4[0x10];
    uVar10 = *param_4;
  }
  if ((uVar10 & 0x800000800000) != 0) {
    param_1[0x12] = param_4[0x12];
  }
  if ((*(byte *)((long)param_4 + 0xc) & 3) != 0) {
    *(byte *)((long)param_1 + 0xc) =
         *(byte *)((long)param_1 + 0xc) & 0xfc | *(byte *)((long)param_4 + 0xc) & 3;
  }
  if ((*(byte *)((long)param_4 + 4) >> 6 & 1) != 0) {
    *(int *)(param_1 + 0x19) = (int)param_4[0x19];
    *(int *)(param_1 + 0x1a) = (int)param_4[0x1a];
  }
  if ((param_4[1] & 0x1e) != 0) {
    lVar8 = *(long *)(param_3 + 0x100);
    bVar1 = *(byte *)(lVar8 + 8);
    if ((bVar1 >> 1 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x138) = 1;
      *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xfd;
      lVar8 = *(long *)(param_3 + 0x100);
      bVar1 = *(byte *)(lVar8 + 8);
    }
    if ((bVar1 >> 2 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x139) = 1;
      *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xfb;
      lVar8 = *(long *)(param_3 + 0x100);
      bVar1 = *(byte *)(lVar8 + 8);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x13a) = 1;
      *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xf7;
      lVar8 = *(long *)(param_3 + 0x100);
      bVar1 = *(byte *)(lVar8 + 8);
    }
    if ((bVar1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x13b) = 1;
      *(byte *)(lVar8 + 8) = *(byte *)(lVar8 + 8) & 0xef;
    }
  }
  if (((*(char *)(param_3 + 0x3bd) == '\x01') && (*(int *)(param_3 + 0xf8) == 4)) &&
     ((((uint)*param_1 >> 4 & 1) != 0 && (((byte)*param_4 >> 6 & 1) != 0)))) {
    *param_1 = *param_1 & 0xffffffffffffffef | 0x40;
  }
  if ((*(byte *)((long)param_4 + 6) >> 4 & 1) != 0) {
    uVar10 = param_4[0x11];
    param_1[0x11] = uVar10;
    lVar8 = param_3;
    FUN_109e25338(param_3,param_2,&UNK_10f609933,uVar10,auStack_70);
    if ((int)lVar8 != 0) {
      if (auStack_70[0] < 7) {
        if (auStack_70[0] != 0) {
          *(uint *)(param_3 + 0x5cc) = auStack_70[0];
          return bVar3;
        }
        puVar6 = &UNK_10f609f6b;
      }
      else {
        puVar6 = &UNK_10f609f2e;
      }
      FUN_109e9ed98(param_2,param_3,puVar6);
      FUN_109e9ed98(param_2,param_3,&UNK_10f60993d);
    }
  }
  return bVar3;
}



/* Entry: 109e25338; end: 109e256cb;  */

undefined8
FUN_109e25338(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 **ppuStack_38;
  
  ppuStack_38 = &puStack_50;
  puStack_50 = &uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  if (param_4 == (long *)0x0) {
    *param_5 = 0;
LAB_109e253a4:
    uVar1 = 1;
  }
  else {
    (**(code **)(*param_4 + 8))(param_4,&puStack_50,param_1);
    (**(code **)(*param_4 + 0x30))();
    if ((param_4 == (long *)0x0) || ((*(byte *)(param_4[4] + 4) & 0xfe) != 0)) {
      puVar2 = &UNK_10f609e02;
    }
    else {
      if (-1 < (int)param_4[5]) {
        *param_5 = (int)param_4[5];
        goto LAB_109e253a4;
      }
      puVar2 = &UNK_10f609e99;
    }
    FUN_109e9ed98(param_2,param_1,puVar2);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 109e256cc; end: 109e25a0b;  */

byte FUN_109e256cc(ulong *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  uint auStack_160 [4];
  long lStack_150;
  int iStack_148;
  uint auStack_140 [56];
  uint auStack_60 [4];
  
  auStack_140[0] = 0;
  auStack_140[1] = 0;
  auStack_140[2] = 0;
  iVar1 = *(int *)(param_3 + 0xf8);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      uVar13 = *param_1;
      if ((uVar13 >> 0x34 & 1) != 0) {
        auStack_140[0] = 0;
        auStack_140[1] = 0x100000;
        goto LAB_109e25834;
      }
    }
    else {
      if (iVar1 != 2) {
LAB_109e25794:
        FUN_109e9ed98(param_2,param_3,&UNK_10f609a6e);
        bVar15 = 0;
        goto LAB_109e25838;
      }
      uVar13 = *param_1;
    }
    if ((int)uVar13 < 0) {
      iVar1 = (int)param_1[0xf];
      bVar15 = 1;
      if (((iVar1 != 4) && (iVar1 != 7)) && (iVar1 != 0x8e7a)) {
        FUN_109e9ed98(param_2,param_3,&UNK_10f609a05);
        bVar15 = 0;
      }
    }
    else {
      bVar15 = 1;
    }
    uVar13 = CONCAT44(auStack_140[1],auStack_140[0]);
    uVar14 = 0xe0000080000000;
  }
  else if (iVar1 == 3) {
    if (*(char *)((long)param_1 + 3) < '\0') {
      bVar15 = 1;
      if (0xc < (uint)param_1[0xf] || (1 << (ulong)((uint)param_1[0xf] & 0x1f) & 0x1413U) == 0) {
        FUN_109e9ed98(param_2,param_3,&UNK_10f609a41);
        bVar15 = 0;
      }
    }
    else {
      bVar15 = 1;
    }
    uVar13 = CONCAT44(auStack_140[1],auStack_140[0]);
    uVar14 = 0x100080000000;
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 != 5) goto LAB_109e25794;
      auStack_140[0] = 0;
      auStack_140[1] = 0x1e;
      auStack_140[2] = 0x40;
LAB_109e25834:
      auStack_140[0] = 0;
      bVar15 = 1;
      goto LAB_109e25838;
    }
    uVar13 = 0;
    bVar15 = 1;
    auStack_140[2] = 1;
    uVar14 = 0xf800002000000000;
  }
  auStack_140[0] = (uint)(uVar13 | uVar14);
  auStack_140[1] = (uint)((uVar13 | uVar14) >> 0x20);
LAB_109e25838:
  lVar11 = 0;
  do {
    *(uint *)((long)auStack_60 + lVar11) = ~*(uint *)((long)auStack_140 + lVar11);
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0xc);
  lVar11 = 0;
  auStack_160[2] = auStack_60[2];
  auStack_60[0] = (uint)*param_1;
  auStack_60[1] = (uint)(*param_1 >> 0x20);
  auStack_60[2] = (int)param_1[1];
  do {
    *(uint *)((long)auStack_60 + lVar11) =
         *(uint *)((long)auStack_60 + lVar11) & *(uint *)((long)auStack_160 + lVar11);
    uVar2 = auStack_60[2];
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0xc);
  lStack_150 = CONCAT44(auStack_60[1],auStack_60[0]);
  iStack_148 = auStack_60[2];
  auStack_60[0] = 0;
  auStack_60[1] = 0;
  auStack_60[2] = 0;
  if (lStack_150 != 0 || uVar2 != 0) {
    FUN_109e9ed98(param_2,param_3,&UNK_10f609ac9);
    bVar15 = 0;
  }
  puVar12 = *(ulong **)(param_3 + 0x118);
  uVar13 = *puVar12;
  uVar14 = *param_1;
  bVar3 = -1 < (int)((uint)uVar13 & (uint)uVar14);
  bVar4 = (int)puVar12[0xf] == (int)param_1[0xf];
  if (!bVar3 && !bVar4) {
    FUN_109e9ed98(param_2,param_3,&UNK_10f609ec1);
    puVar12 = *(ulong **)(param_3 + 0x118);
    uVar13 = *puVar12;
    uVar14 = *param_1;
  }
  bVar5 = (uVar13 & 0x20000000000000) == 0;
  bVar6 = (uVar14 & 0x20000000000000) == 0;
  bVar7 = (int)puVar12[0x16] == (int)param_1[0x16];
  if (!bVar7 && (!bVar6 && !bVar5)) {
    FUN_109e9ed98(param_2,param_3,&UNK_10f609eea);
    puVar12 = *(ulong **)(param_3 + 0x118);
    uVar13 = *puVar12;
    uVar14 = *param_1;
  }
  bVar8 = (uVar13 & 0x40000000000000) == 0;
  bVar9 = (uVar14 & 0x40000000000000) == 0;
  bVar10 = *(int *)((long)puVar12 + 0xb4) == *(int *)((long)param_1 + 0xb4);
  if (!bVar10 && (!bVar9 && !bVar8)) {
    FUN_109e9ed98(param_2,param_3,&UNK_10f609f0f);
  }
  return bVar15 & (bVar3 || bVar4) & (bVar7 || (bVar6 || bVar5)) & (bVar10 || (bVar9 || bVar8));
}



/* Entry: 109e25a0c; end: 109e25e9f;  */

undefined8 FUN_109e25a0c(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined8 **)(param_3 + 0x50);
  if (((*(int *)(param_3 + 0xf8) == 3) && (*(char *)(param_1 + 3) < '\0')) &&
     (-1 < *(char *)(*(long *)(param_3 + 0x118) + 3))) {
    puVar2 = puVar8;
    FUN_109f6650c(puVar8,0x40);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x78);
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_110b5e800;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 7) = uVar9;
    puVar2[1] = param_2[3];
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    uVar3 = *param_2;
    *(undefined8 *)((long)puVar2 + 0x1c) = param_2[1];
    *(undefined8 *)((long)puVar2 + 0x14) = uVar3;
    *param_4 = puVar2;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x118);
  FUN_109e2470c(uVar3,param_2,param_3,param_1,0,0);
  puVar4 = *(ulong **)(param_3 + 0x118);
  uVar6 = *puVar4;
  if ((uVar6 >> 0x25 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x418) = 1;
    *puVar4 = *puVar4 & 0xffffffdfffffffff;
    puVar4 = *(ulong **)(param_3 + 0x118);
    uVar6 = *puVar4;
  }
  *puVar4 = uVar6 & 0xffefffffffffffff;
  puVar4 = *(ulong **)(param_3 + 0x118);
  if ((puVar4[1] & 1) != 0) {
    *(undefined1 *)(param_3 + 0x419) = 1;
    *(byte *)(puVar4 + 1) = (byte)puVar4[1] & 0xfe;
    puVar4 = *(ulong **)(param_3 + 0x118);
  }
  if ((*(byte *)((long)puVar4 + 7) >> 3 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x41a) = 1;
    *puVar4 = *puVar4 & 0xf7ffffffffffffff;
  }
  if ((*(char *)(param_3 + 0x419) == '\x01') && (*(char *)(param_3 + 0x41a) == '\x01')) {
    FUN_109e9ed98(param_2,param_3,&UNK_10f609aee);
    uVar3 = 0;
  }
  puVar4 = *(ulong **)(param_3 + 0x118);
  uVar6 = *puVar4;
  if ((uVar6 >> 0x3c & 1) != 0) {
    *(undefined1 *)(param_3 + 0x41b) = 1;
    *puVar4 = *puVar4 & 0xefffffffffffffff;
    puVar4 = *(ulong **)(param_3 + 0x118);
    uVar6 = *puVar4;
  }
  if ((uVar6 >> 0x3d & 1) != 0) {
    *(undefined1 *)(param_3 + 0x41c) = 1;
    *puVar4 = *puVar4 & 0xdfffffffffffffff;
    puVar4 = *(ulong **)(param_3 + 0x118);
    uVar6 = *puVar4;
  }
  if ((uVar6 >> 0x3e & 1) != 0) {
    *(undefined1 *)(param_3 + 0x41d) = 1;
    *puVar4 = *puVar4 & 0xbfffffffffffffff;
    puVar4 = *(ulong **)(param_3 + 0x118);
    uVar6 = *puVar4;
  }
  if ((long)uVar6 < 0) {
    *(undefined1 *)(param_3 + 0x41e) = 1;
    *puVar4 = *puVar4 & 0x7fffffffffffffff;
  }
  uVar9 = *(undefined4 *)(param_3 + 0x41b);
  if (1 < (byte)((char)uVar9 + (char)((uint)uVar9 >> 8) + (char)((uint)uVar9 >> 0x10) +
                (char)((uint)uVar9 >> 0x18))) {
    FUN_109e9ed98(param_2,param_3,&UNK_10f609b3c);
    uVar3 = 0;
  }
  puVar4 = *(ulong **)(param_3 + 0x118);
  if (((byte)puVar4[1] >> 6 & 1) != 0) {
    iVar1 = *(int *)((long)puVar4 + 0xcc);
    if (*(int *)(param_3 + 0x134) == 0) {
      *(int *)(param_3 + 0x134) = iVar1;
    }
    else if ((iVar1 != 0) && (*(int *)(param_3 + 0x134) != iVar1)) {
      FUN_109e9ed98(param_2,param_3,&UNK_10f609b6d);
      uVar3 = 0;
      puVar4 = *(ulong **)(param_3 + 0x118);
    }
  }
  uVar6 = *puVar4;
  if ((uVar6 & 0xe00000000) != 0) {
    FUN_109f6650c(puVar8,0x50);
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
    }
    lVar5 = 0;
    lVar7 = *(long *)(param_3 + 0x118);
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *puVar8 = &PTR_FUN_110b5e830;
    puVar8[1] = 0;
    do {
      *(undefined8 *)((long)puVar8 + lVar5 + 0x38) = *(undefined8 *)(lVar7 + 0x98 + lVar5);
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x18);
    puVar8[1] = param_2[3];
    *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_2 + 2);
    uVar10 = *param_2;
    *(undefined8 *)((long)puVar8 + 0x1c) = param_2[1];
    *(undefined8 *)((long)puVar8 + 0x14) = uVar10;
    *param_4 = puVar8;
    **(ulong **)(param_3 + 0x118) = **(ulong **)(param_3 + 0x118) & 0xfffffff1ffffffff;
    lVar5 = 0x98;
    do {
      *(undefined8 *)(*(long *)(param_3 + 0x118) + lVar5) = 0;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0xb0);
    puVar4 = *(ulong **)(param_3 + 0x118);
    uVar6 = *puVar4;
  }
  if ((uVar6 >> 0x24 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x130) = 1;
    *puVar4 = *puVar4 & 0xffffffefffffffff;
  }
  return uVar3;
}



/* Entry: 109e25ea0; end: 109e268d3;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_109e25ea0(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uStack_150;
  uint uStack_148;
  uint auStack_70 [4];
  
  lVar5 = 0;
  do {
    *(uint *)((long)&uStack_150 + lVar5) = ~*(uint *)(param_4 + lVar5);
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0xc);
  lVar5 = 0;
  auStack_70[0] = (uint)uStack_150;
  auStack_70[1] = (uint)(uStack_150 >> 0x20);
  auStack_70[2] = uStack_148;
  uStack_150 = *param_1;
  uStack_148 = (uint)param_1[1];
  do {
    *(uint *)((long)&uStack_150 + lVar5) =
         *(uint *)((long)&uStack_150 + lVar5) & *(uint *)((long)auStack_70 + lVar5);
    uVar2 = uStack_148;
    uVar1 = uStack_150;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0xc);
  auStack_70[0] = 0;
  auStack_70[1] = 0;
  auStack_70[2] = 0;
  bVar3 = uStack_150 == 0;
  bVar4 = uStack_148 == 0;
  if (!bVar3 || !bVar4) {
    lVar5 = 0;
    FUN_109f684bc(0,100);
    uVar6 = (uint)uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609b97,9);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f393a07,7);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f571fae,8);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f40ac14,9);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f604fed,7);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f416776,2);
    }
    if ((uVar6 >> 6 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f4653a3,3);
    }
    if ((uVar6 >> 7 & 1) != 0) {
      FUN_109f68530(lVar5,"centroid",8);
    }
    if ((uVar6 >> 8 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f49180d,6);
    }
    if ((uVar6 >> 9 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f2e4651,5);
    }
    if ((uVar6 >> 10 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f6036e6,7);
    }
    if ((uVar6 >> 0xb & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f637e74,6);
    }
    if ((uVar6 >> 0xc & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609ba1,0xe);
    }
    if ((uVar6 >> 0xd & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f609bb0,6);
    }
    if ((uVar6 >> 0xe & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f48702d,4);
    }
    if ((uVar6 >> 0xf & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f609bb7,0xd);
    }
    if ((uVar6 >> 0x10 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f491df5,0x11);
    }
    if ((uVar6 >> 0x11 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f6079ff,0x14);
    }
    if ((uVar6 >> 0x12 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609bc5,6);
    }
    if ((uVar6 >> 0x15 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609bcc,10);
    }
    if ((uVar6 >> 0x13 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609bd7,9);
    }
    if ((uVar6 >> 0x14 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609be1,6);
    }
    if ((uVar6 >> 0x16 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609be8,8);
    }
    if ((uVar6 >> 0x17 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609bf1,7);
    }
    if ((uVar6 >> 0x18 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609bf9,10);
    }
    if ((uVar6 >> 0x19 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f609c04,6);
    }
    if ((uVar6 >> 0x1a & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f609c0b,6);
    }
    if ((uVar6 >> 0x1b & 1) != 0) {
      FUN_109f68530(lVar5,"shared",6);
    }
    if ((uVar6 >> 0x1c & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f52a32a,6);
    }
    if ((uVar6 >> 0x1d & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c12,0xc);
    }
    if ((uVar6 >> 0x1e & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c1f,9);
    }
    if ((int)uVar6 < 0) {
      FUN_109f68530(lVar5,&UNK_10f609c29,9);
    }
    if ((uVar1 >> 0x20 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c33,0xc);
    }
    if ((uVar1 & 0xe00000000) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c40,10);
    }
    if ((uVar1 >> 0x24 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c4b,0x13);
    }
    if ((uVar1 >> 0x25 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c5f,0x14);
    }
    if ((uVar1 >> 0x26 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c74,0xd);
    }
    if ((uVar1 >> 0x27 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f609c82,8);
    }
    if ((uVar1 >> 0x28 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f5af5f2,9);
    }
    if ((uVar1 >> 0x29 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c8b,0xd);
    }
    if ((uVar1 >> 0x2a & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609c99,9);
    }
    if ((uVar1 >> 0x2b & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609ca3,10);
    }
    if ((uVar1 >> 0x2c & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f609cae,0xb);
    }
    if ((uVar1 >> 0x2d & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f34fa9f,6);
      FUN_109f68530(lVar5,&DAT_10f34fa9f,6);
    }
    if ((uVar1 >> 0x2f & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cba,0xb);
    }
    if ((uVar1 >> 0x30 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cc6,0xb);
    }
    if ((uVar1 >> 0x31 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cc6,0xb);
    }
    if ((uVar1 >> 0x32 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cd2,0xb);
    }
    if ((uVar1 >> 0x33 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cd2,0xb);
    }
    if ((uVar1 >> 0x34 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cde,10);
    }
    if ((uVar1 >> 0x35 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609ce9,0xe);
    }
    if ((uVar1 >> 0x36 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609cf8,8);
    }
    if ((uVar1 >> 0x37 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d01,10);
    }
    if ((uVar1 >> 0x38 & 1) != 0) {
      FUN_109f68530(lVar5,&DAT_10f59a612,8);
    }
    uVar6 = uVar2 & 0xff;
    if ((uVar1 >> 0x39 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d0c,10);
    }
    if ((uVar1 >> 0x3a & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d17,0xd);
    }
    if ((uVar2 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d25,0xe);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d34,0x10);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d45,0xe);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d54,0xd);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d62,0xb);
    }
    if ((uVar1 >> 0x3b & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d6e,0x13);
    }
    if ((uVar1 >> 0x3c & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d82,0x17);
    }
    if ((uVar1 >> 0x3d & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609d9a,0x19);
    }
    if ((uVar1 >> 0x3e & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609db4,0x18);
    }
    if ((long)uVar1 < 0) {
      FUN_109f68530(lVar5,&UNK_10f609dcd,0x1a);
    }
    if ((uVar6 >> 5 & 1) != 0) {
      FUN_109f68530(lVar5,&UNK_10f609de8,0xc);
    }
    FUN_109e9ed98(param_2,param_3,&UNK_10f609df5);
    FUN_109f65aa4(lVar5 + -0x30);
    FUN_109f65ae0(lVar5 + -0x30);
  }
  return bVar3 && bVar4;
}



/* Entry: 109e268d4; end: 109e26927;  */

void FUN_109e268d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110b5e910;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = param_2[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = param_2[1];
  *(undefined8 *)((long)param_1 + 0x14) = uVar2;
  puVar1 = (undefined8 *)(param_3 + 0x28);
  *puVar1 = param_1 + 9;
  param_1[7] = puVar1;
  *(undefined8 **)(param_3 + 0x30) = param_1 + 7;
  param_1[10] = puVar1;
  return;
}



/* Entry: 109e26928; end: 109e26cdf;  */

long * FUN_109e26928(long *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132fefa8 & 1) == 0) {
    ppuVar1 = ppuVar2;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar1 = (undefined *)0x1132fefa8;
    ppuVar1[1] = FUN_109f67048;
    _pthread_once(0x1132fefb0,0x109f686dc);
    bRam00000001132fefa8 = 1;
  }
  _pthread_mutex_lock(0x1132fefc0);
  if (param_1[1] != 0) {
    lVar3 = param_1[1] + -0x30;
    FUN_109f65aa4(lVar3);
    FUN_109f65ae0(lVar3);
  }
  param_1[1] = 0;
  if (*param_1 != 0) {
    lVar3 = *param_1 + -0x30;
    FUN_109f65aa4(lVar3);
    FUN_109f65ae0(lVar3);
  }
  *param_1 = 0;
  if ((bRam00000001132fefa8 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar2 = (undefined *)0x1132fefa8;
    ppuVar2[1] = FUN_109f67048;
    _pthread_once(0x1132fefb0,0x109f686dc);
    bRam00000001132fefa8 = 1;
  }
  _pthread_mutex_unlock(0x1132fefc0);
  return param_1;
}



/* Entry: 109e26ce0; end: 109e26e7f;  */

long FUN_109e26ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uStack_51;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132fefa8 & 1) == 0) {
    ppuVar1 = ppuVar3;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar1 = (undefined *)0x1132fefa8;
    ppuVar1[1] = FUN_109f67048;
    _pthread_once(0x1132fefb0,0x109f686dc);
    bRam00000001132fefa8 = 1;
  }
  _pthread_mutex_lock(0x1132fefc0);
  *(undefined1 *)(param_1 + 0x410) = 1;
  lVar2 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar2,param_2);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 8), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x3cf) & 1) == 0) {
      uVar6 = *(uint *)(param_1 + 0xec);
      if (uVar6 == 0) {
        uVar6 = *(uint *)(param_1 + 0xe8);
      }
      uVar7 = 0x6d;
      if ((*(byte *)(param_1 + 0x5a1) & 1) == 0) {
        uVar7 = 0x77;
      }
      bVar4 = uVar7 < uVar6 & (*(byte *)(param_1 + 0xe4) ^ 0xff);
    }
    else {
      bVar4 = 1;
    }
    if (((*(byte *)(param_1 + 0x315) & 1) == 0) &&
       (((*(byte *)(param_1 + 0x3ef) | *(byte *)(param_1 + 0x3cf)) & 1) == 0)) {
      uVar6 = *(uint *)(param_1 + 0xec);
      if (uVar6 == 0) {
        uVar6 = *(uint *)(param_1 + 0xe8);
      }
      bVar5 = 0;
      if (399 < uVar6) {
        bVar5 = *(byte *)(param_1 + 0xe4) ^ 1;
      }
    }
    else {
      bVar5 = 1;
    }
    FUN_109eb35f0(lVar2,param_1,param_3,bVar4,bVar5,1,&uStack_51);
  }
  if ((bRam00000001132fefa8 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar3 = (undefined *)0x1132fefa8;
    ppuVar3[1] = FUN_109f67048;
    _pthread_once(0x1132fefb0,0x109f686dc);
    bRam00000001132fefa8 = 1;
  }
  _pthread_mutex_unlock(0x1132fefc0);
  return lVar2;
}



/* Entry: 109e26e80; end: 109e26fb3;  */

ulong FUN_109e26e80(ulong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((bRam00000001132fefa8 & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340ddb0;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar1 = (undefined *)0x1132fefa8;
    ppuVar1[1] = FUN_109f67048;
    _pthread_once(0x1132fefb0,0x109f686dc);
    bRam00000001132fefa8 = 1;
  }
  _pthread_mutex_lock(0x1132fefc0);
  lVar2 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
  FUN_109f61800(lVar2,param_2);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 8) == 0)) ||
     (plVar4 = *(long **)(*(long *)(lVar2 + 8) + 0x28), *plVar4 == 0)) {
    uVar3 = 0;
  }
  else if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    do {
      uVar3 = param_1;
      (*(code *)plVar4[0xd])();
      if ((uVar3 & 1) != 0) break;
      plVar4 = (long *)*plVar4;
    } while (*plVar4 != 0);
  }
  if ((bRam00000001132fefa8 & 1) == 0) {
    ppuVar1 = &PTR___tlv_bootstrap_11340ddb0;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar1 = (undefined *)0x1132fefa8;
    ppuVar1[1] = FUN_109f67048;
    _pthread_once(0x1132fefb0,0x109f686dc);
    bRam00000001132fefa8 = 1;
  }
  _pthread_mutex_unlock(0x1132fefc0);
  return uVar3;
}



/* Entry: 109e26fb4; end: 109e4c603;  */

void FUN_109e26fb4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_109e4c700();
  FUN_109e4c608();
  FUN_109e4c700();
  FUN_109e4c608();
  FUN_109e4c700();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,3);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,3);
  FUN_109e4c7dc(0x109e4c904,&DAT_10e05dc38,3);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,3);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,7);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,7);
  FUN_109e4c7dc(0x109e4ca94,&DAT_10e05dc38,7);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e258,7);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,7);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,8);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,8);
  FUN_109e4c7dc(0x109e4ca94,&DAT_10e05dc38,8);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e258,8);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,8);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,4);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,4);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e258,4);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,4);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,5);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,5);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e258,5);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,5);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,6);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,6);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e258,6);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,6);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05dab0,9);
  FUN_109e4c7dc(FUN_109e4c8bc,&DAT_10e05d928,9);
  FUN_109e4c7dc(0x109e4c918,&DAT_10e05e0d0,9);
  FUN_109e4c7dc(0x109e4c904,&DAT_10e05dc38,9);
  FUN_109e4c974();
  FUN_109e4c608();
  FUN_109e4caa8(FUN_109e4c8bc,&DAT_10e05dab0);
  FUN_109e4caa8(FUN_109e4c8bc,&DAT_10e05d928);
  FUN_109e4caa8(0x109e4c918,&DAT_10e05e0d0);
  FUN_109e4caa8(0x109e4ca94,&DAT_10e05dc38);
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,&DAT_10e05efe8,&DAT_10f2e4588,6);
  *(ushort *)((long)puVar1 + 0x44) = *(ushort *)((long)puVar1 + 0x44) & 0xffef | 8;
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,&DAT_10e05dab0,&UNK_10f594ecd,6);
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar3 = 0x113834718;
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05dab0,FUN_109e4ca64,3);
  *(undefined4 *)(lVar2 + 0x4c) = 0x15;
  FUN_109e4c608();
  FUN_109e4cbd0(0);
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e4cf94,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x25;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4cfd8,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x27;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4cfe8,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x28;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4cfe8,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x29;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4cfe8,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x2a;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4cfd8,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x2b;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4d024,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x2c;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4d024,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x2d;
  FUN_109e4c608();
  FUN_109e4db30(0x113834718,&DAT_10e05dae8,0x109e4d02c,0);
  *(undefined4 *)(lVar3 + 0x4c) = 0x26;
  FUN_109e4c608();
  FUN_109e4d034(&DAT_10e05d7a0,FUN_109e4d0cc,0x2e);
  FUN_109e4c608();
  FUN_109e4d034(&DAT_10e05d7a0,FUN_109e4d0cc,0x2f);
  FUN_109e4c608();
  FUN_109e4d034(&DAT_10e05dc38,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05dc70,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05dca8,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05dce0,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d928,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d960,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d998,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d9d0,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05dab0,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05dae8,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05db20,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05db58,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d7a0,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d7d8,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d810,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05d848,FUN_109e4d0cc,0x30);
  FUN_109e4d034(&DAT_10e05df48,0x109e4d10c,0x30);
  FUN_109e4d034(&DAT_10e05df80,0x109e4d10c,0x30);
  FUN_109e4d034(&DAT_10e05dfb8,0x109e4d10c,0x30);
  lVar3 = 0x113834718;
  FUN_109e4d034(&DAT_10e05dff0,0x109e4d10c,0x30);
  FUN_109e4c608();
  FUN_109e4d178();
  FUN_109e4d178();
  FUN_109e4c608();
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,0x109e4ea28,1);
  *(undefined4 *)(lVar2 + 0x4c) = 0x32;
  FUN_109e4c608();
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,&DAT_10e05db58,"value",6);
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,0x109e4ea28,2);
  *(undefined4 *)(lVar3 + 0x4c) = 0x33;
  FUN_109e4c608();
  func_0x000109e4d208();
  FUN_109e4c608();
  func_0x000109e4d208();
  FUN_109e4c608();
  func_0x000109e4d208();
  FUN_109e4c608();
  func_0x000109e4d208();
  FUN_109e4c608();
  func_0x000109e4d208();
  FUN_109e4c608();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4d298();
  FUN_109e4c608();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4d388();
  FUN_109e4c608();
  lVar3 = 0x113834718;
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,0x109e4ea7c,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x3b;
  FUN_109e4c608();
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,0x109e4ea84,1);
  *(undefined4 *)(lVar2 + 0x4c) = 0x3c;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e4d428,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x3d;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e4d428,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x3e;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e4d428,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x3f;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,0x109e4d430,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x40;
  FUN_109e4c608();
  lVar2 = lVar3;
  FUN_109e4db30(0x113834718,&DAT_10e05d768,FUN_109e4d428,0);
  *(undefined4 *)(lVar2 + 0x4c) = 0x41;
  FUN_109e4c608();
  FUN_109e4db30(0x113834718,&DAT_10e05d7a0,FUN_109e4d428,0);
  *(undefined4 *)(lVar3 + 0x4c) = 0x42;
  FUN_109e4c608();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4d450();
  FUN_109e4c608();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  func_0x000109e4d540();
  FUN_109e4c608();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  func_0x000109e4d630();
  FUN_109e4c608();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  func_0x000109e4d720();
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x47);
  FUN_109e4d810(&DAT_10e05dc70,0x47);
  FUN_109e4d810(&DAT_10e05dca8,0x47);
  FUN_109e4d810(&DAT_10e05dce0,0x47);
  FUN_109e4d810(&DAT_10e05d928,0x47);
  FUN_109e4d810(&DAT_10e05d960,0x47);
  FUN_109e4d810(&DAT_10e05d998,0x47);
  FUN_109e4d810(&DAT_10e05d9d0,0x47);
  FUN_109e4d810(&DAT_10e05dab0,0x47);
  FUN_109e4d810(&DAT_10e05dae8,0x47);
  FUN_109e4d810(&DAT_10e05db20,0x47);
  FUN_109e4d810(&DAT_10e05db58,0x47);
  FUN_109e4d810(&DAT_10e05df48,0x47);
  FUN_109e4d810(&DAT_10e05df80,0x47);
  FUN_109e4d810(&DAT_10e05dfb8,0x47);
  FUN_109e4d810(&DAT_10e05dff0,0x47);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x48);
  FUN_109e4d810(&DAT_10e05dc70,0x48);
  FUN_109e4d810(&DAT_10e05dca8,0x48);
  FUN_109e4d810(&DAT_10e05dce0,0x48);
  FUN_109e4d810(&DAT_10e05d928,0x48);
  FUN_109e4d810(&DAT_10e05d960,0x48);
  FUN_109e4d810(&DAT_10e05d998,0x48);
  FUN_109e4d810(&DAT_10e05d9d0,0x48);
  FUN_109e4d810(&DAT_10e05dab0,0x48);
  FUN_109e4d810(&DAT_10e05dae8,0x48);
  FUN_109e4d810(&DAT_10e05db20,0x48);
  FUN_109e4d810(&DAT_10e05db58,0x48);
  FUN_109e4d810(&DAT_10e05df48,0x48);
  FUN_109e4d810(&DAT_10e05df80,0x48);
  FUN_109e4d810(&DAT_10e05dfb8,0x48);
  FUN_109e4d810(&DAT_10e05dff0,0x48);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x49);
  FUN_109e4d810(&DAT_10e05dc70,0x49);
  FUN_109e4d810(&DAT_10e05dca8,0x49);
  FUN_109e4d810(&DAT_10e05dce0,0x49);
  FUN_109e4d810(&DAT_10e05d928,0x49);
  FUN_109e4d810(&DAT_10e05d960,0x49);
  FUN_109e4d810(&DAT_10e05d998,0x49);
  FUN_109e4d810(&DAT_10e05d9d0,0x49);
  FUN_109e4d810(&DAT_10e05dab0,0x49);
  FUN_109e4d810(&DAT_10e05dae8,0x49);
  FUN_109e4d810(&DAT_10e05db20,0x49);
  FUN_109e4d810(&DAT_10e05db58,0x49);
  FUN_109e4d810(&DAT_10e05df48,0x49);
  FUN_109e4d810(&DAT_10e05df80,0x49);
  FUN_109e4d810(&DAT_10e05dfb8,0x49);
  FUN_109e4d810(&DAT_10e05dff0,0x49);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x4a);
  FUN_109e4d810(&DAT_10e05dc70,0x4a);
  FUN_109e4d810(&DAT_10e05dca8,0x4a);
  FUN_109e4d810(&DAT_10e05dce0,0x4a);
  FUN_109e4d810(&DAT_10e05d928,0x4a);
  FUN_109e4d810(&DAT_10e05d960,0x4a);
  FUN_109e4d810(&DAT_10e05d998,0x4a);
  FUN_109e4d810(&DAT_10e05d9d0,0x4a);
  FUN_109e4d810(&DAT_10e05dab0,0x4a);
  FUN_109e4d810(&DAT_10e05dae8,0x4a);
  FUN_109e4d810(&DAT_10e05db20,0x4a);
  FUN_109e4d810(&DAT_10e05db58,0x4a);
  FUN_109e4d810(&DAT_10e05df48,0x4a);
  FUN_109e4d810(&DAT_10e05df80,0x4a);
  FUN_109e4d810(&DAT_10e05dfb8,0x4a);
  FUN_109e4d810(&DAT_10e05dff0,0x4a);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x4b);
  FUN_109e4d810(&DAT_10e05d960,0x4b);
  FUN_109e4d810(&DAT_10e05d998,0x4b);
  FUN_109e4d810(&DAT_10e05d9d0,0x4b);
  FUN_109e4d810(&DAT_10e05dab0,0x4b);
  FUN_109e4d810(&DAT_10e05dae8,0x4b);
  FUN_109e4d810(&DAT_10e05db20,0x4b);
  FUN_109e4d810(&DAT_10e05db58,0x4b);
  FUN_109e4d810(&DAT_10e05d7a0,0x4b);
  FUN_109e4d810(&DAT_10e05d7d8,0x4b);
  FUN_109e4d810(&DAT_10e05d810,0x4b);
  FUN_109e4d810(&DAT_10e05d848,0x4b);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x4c);
  FUN_109e4d810(&DAT_10e05d960,0x4c);
  FUN_109e4d810(&DAT_10e05d998,0x4c);
  FUN_109e4d810(&DAT_10e05d9d0,0x4c);
  FUN_109e4d810(&DAT_10e05dab0,0x4c);
  FUN_109e4d810(&DAT_10e05dae8,0x4c);
  FUN_109e4d810(&DAT_10e05db20,0x4c);
  FUN_109e4d810(&DAT_10e05db58,0x4c);
  FUN_109e4d810(&DAT_10e05d7a0,0x4c);
  FUN_109e4d810(&DAT_10e05d7d8,0x4c);
  FUN_109e4d810(&DAT_10e05d810,0x4c);
  FUN_109e4d810(&DAT_10e05d848,0x4c);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x4d);
  FUN_109e4d810(&DAT_10e05d960,0x4d);
  FUN_109e4d810(&DAT_10e05d998,0x4d);
  FUN_109e4d810(&DAT_10e05d9d0,0x4d);
  FUN_109e4d810(&DAT_10e05dab0,0x4d);
  FUN_109e4d810(&DAT_10e05dae8,0x4d);
  FUN_109e4d810(&DAT_10e05db20,0x4d);
  FUN_109e4d810(&DAT_10e05db58,0x4d);
  FUN_109e4d810(&DAT_10e05d7a0,0x4d);
  FUN_109e4d810(&DAT_10e05d7d8,0x4d);
  FUN_109e4d810(&DAT_10e05d810,0x4d);
  FUN_109e4d810(&DAT_10e05d848,0x4d);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x4e);
  FUN_109e4d810(&DAT_10e05dc70,0x4e);
  FUN_109e4d810(&DAT_10e05dca8,0x4e);
  FUN_109e4d810(&DAT_10e05dce0,0x4e);
  FUN_109e4d810(&DAT_10e05d928,0x4e);
  FUN_109e4d810(&DAT_10e05d960,0x4e);
  FUN_109e4d810(&DAT_10e05d998,0x4e);
  FUN_109e4d810(&DAT_10e05d9d0,0x4e);
  FUN_109e4d810(&DAT_10e05dab0,0x4e);
  FUN_109e4d810(&DAT_10e05dae8,0x4e);
  FUN_109e4d810(&DAT_10e05db20,0x4e);
  FUN_109e4d810(&DAT_10e05db58,0x4e);
  FUN_109e4d810(&DAT_10e05df48,0x4e);
  FUN_109e4d810(&DAT_10e05df80,0x4e);
  FUN_109e4d810(&DAT_10e05dfb8,0x4e);
  FUN_109e4d810(&DAT_10e05dff0,0x4e);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x4f);
  FUN_109e4d810(&DAT_10e05dc70,0x4f);
  FUN_109e4d810(&DAT_10e05dca8,0x4f);
  FUN_109e4d810(&DAT_10e05dce0,0x4f);
  FUN_109e4d810(&DAT_10e05d928,0x4f);
  FUN_109e4d810(&DAT_10e05d960,0x4f);
  FUN_109e4d810(&DAT_10e05d998,0x4f);
  FUN_109e4d810(&DAT_10e05d9d0,0x4f);
  FUN_109e4d810(&DAT_10e05dab0,0x4f);
  FUN_109e4d810(&DAT_10e05dae8,0x4f);
  FUN_109e4d810(&DAT_10e05db20,0x4f);
  FUN_109e4d810(&DAT_10e05db58,0x4f);
  FUN_109e4d810(&DAT_10e05df48,0x4f);
  FUN_109e4d810(&DAT_10e05df80,0x4f);
  FUN_109e4d810(&DAT_10e05dfb8,0x4f);
  FUN_109e4d810(&DAT_10e05dff0,0x4f);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x50);
  FUN_109e4d810(&DAT_10e05dc70,0x50);
  FUN_109e4d810(&DAT_10e05dca8,0x50);
  FUN_109e4d810(&DAT_10e05dce0,0x50);
  FUN_109e4d810(&DAT_10e05d928,0x50);
  FUN_109e4d810(&DAT_10e05d960,0x50);
  FUN_109e4d810(&DAT_10e05d998,0x50);
  FUN_109e4d810(&DAT_10e05d9d0,0x50);
  FUN_109e4d810(&DAT_10e05dab0,0x50);
  FUN_109e4d810(&DAT_10e05dae8,0x50);
  FUN_109e4d810(&DAT_10e05db20,0x50);
  FUN_109e4d810(&DAT_10e05db58,0x50);
  FUN_109e4d810(&DAT_10e05df48,0x50);
  FUN_109e4d810(&DAT_10e05df80,0x50);
  FUN_109e4d810(&DAT_10e05dfb8,0x50);
  FUN_109e4d810(&DAT_10e05dff0,0x50);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x51);
  FUN_109e4d810(&DAT_10e05dc70,0x51);
  FUN_109e4d810(&DAT_10e05dca8,0x51);
  FUN_109e4d810(&DAT_10e05dce0,0x51);
  FUN_109e4d810(&DAT_10e05d928,0x51);
  FUN_109e4d810(&DAT_10e05d960,0x51);
  FUN_109e4d810(&DAT_10e05d998,0x51);
  FUN_109e4d810(&DAT_10e05d9d0,0x51);
  FUN_109e4d810(&DAT_10e05dab0,0x51);
  FUN_109e4d810(&DAT_10e05dae8,0x51);
  FUN_109e4d810(&DAT_10e05db20,0x51);
  FUN_109e4d810(&DAT_10e05db58,0x51);
  FUN_109e4d810(&DAT_10e05df48,0x51);
  FUN_109e4d810(&DAT_10e05df80,0x51);
  FUN_109e4d810(&DAT_10e05dfb8,0x51);
  FUN_109e4d810(&DAT_10e05dff0,0x51);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x52);
  FUN_109e4d810(&DAT_10e05d960,0x52);
  FUN_109e4d810(&DAT_10e05d998,0x52);
  FUN_109e4d810(&DAT_10e05d9d0,0x52);
  FUN_109e4d810(&DAT_10e05dab0,0x52);
  FUN_109e4d810(&DAT_10e05dae8,0x52);
  FUN_109e4d810(&DAT_10e05db20,0x52);
  FUN_109e4d810(&DAT_10e05db58,0x52);
  FUN_109e4d810(&DAT_10e05d7a0,0x52);
  FUN_109e4d810(&DAT_10e05d7d8,0x52);
  FUN_109e4d810(&DAT_10e05d810,0x52);
  FUN_109e4d810(&DAT_10e05d848,0x52);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x53);
  FUN_109e4d810(&DAT_10e05d960,0x53);
  FUN_109e4d810(&DAT_10e05d998,0x53);
  FUN_109e4d810(&DAT_10e05d9d0,0x53);
  FUN_109e4d810(&DAT_10e05dab0,0x53);
  FUN_109e4d810(&DAT_10e05dae8,0x53);
  FUN_109e4d810(&DAT_10e05db20,0x53);
  FUN_109e4d810(&DAT_10e05db58,0x53);
  FUN_109e4d810(&DAT_10e05d7a0,0x53);
  FUN_109e4d810(&DAT_10e05d7d8,0x53);
  FUN_109e4d810(&DAT_10e05d810,0x53);
  FUN_109e4d810(&DAT_10e05d848,0x53);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x54);
  FUN_109e4d810(&DAT_10e05d960,0x54);
  FUN_109e4d810(&DAT_10e05d998,0x54);
  FUN_109e4d810(&DAT_10e05d9d0,0x54);
  FUN_109e4d810(&DAT_10e05dab0,0x54);
  FUN_109e4d810(&DAT_10e05dae8,0x54);
  FUN_109e4d810(&DAT_10e05db20,0x54);
  FUN_109e4d810(&DAT_10e05db58,0x54);
  FUN_109e4d810(&DAT_10e05d7a0,0x54);
  FUN_109e4d810(&DAT_10e05d7d8,0x54);
  FUN_109e4d810(&DAT_10e05d810,0x54);
  FUN_109e4d810(&DAT_10e05d848,0x54);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x55);
  FUN_109e4d810(&DAT_10e05dc70,0x55);
  FUN_109e4d810(&DAT_10e05dca8,0x55);
  FUN_109e4d810(&DAT_10e05dce0,0x55);
  FUN_109e4d810(&DAT_10e05d928,0x55);
  FUN_109e4d810(&DAT_10e05d960,0x55);
  FUN_109e4d810(&DAT_10e05d998,0x55);
  FUN_109e4d810(&DAT_10e05d9d0,0x55);
  FUN_109e4d810(&DAT_10e05dab0,0x55);
  FUN_109e4d810(&DAT_10e05dae8,0x55);
  FUN_109e4d810(&DAT_10e05db20,0x55);
  FUN_109e4d810(&DAT_10e05db58,0x55);
  FUN_109e4d810(&DAT_10e05df48,0x55);
  FUN_109e4d810(&DAT_10e05df80,0x55);
  FUN_109e4d810(&DAT_10e05dfb8,0x55);
  FUN_109e4d810(&DAT_10e05dff0,0x55);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x56);
  FUN_109e4d810(&DAT_10e05dc70,0x56);
  FUN_109e4d810(&DAT_10e05dca8,0x56);
  FUN_109e4d810(&DAT_10e05dce0,0x56);
  FUN_109e4d810(&DAT_10e05d928,0x56);
  FUN_109e4d810(&DAT_10e05d960,0x56);
  FUN_109e4d810(&DAT_10e05d998,0x56);
  FUN_109e4d810(&DAT_10e05d9d0,0x56);
  FUN_109e4d810(&DAT_10e05dab0,0x56);
  FUN_109e4d810(&DAT_10e05dae8,0x56);
  FUN_109e4d810(&DAT_10e05db20,0x56);
  FUN_109e4d810(&DAT_10e05db58,0x56);
  FUN_109e4d810(&DAT_10e05df48,0x56);
  FUN_109e4d810(&DAT_10e05df80,0x56);
  FUN_109e4d810(&DAT_10e05dfb8,0x56);
  FUN_109e4d810(&DAT_10e05dff0,0x56);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x57);
  FUN_109e4d810(&DAT_10e05dc70,0x57);
  FUN_109e4d810(&DAT_10e05dca8,0x57);
  FUN_109e4d810(&DAT_10e05dce0,0x57);
  FUN_109e4d810(&DAT_10e05d928,0x57);
  FUN_109e4d810(&DAT_10e05d960,0x57);
  FUN_109e4d810(&DAT_10e05d998,0x57);
  FUN_109e4d810(&DAT_10e05d9d0,0x57);
  FUN_109e4d810(&DAT_10e05dab0,0x57);
  FUN_109e4d810(&DAT_10e05dae8,0x57);
  FUN_109e4d810(&DAT_10e05db20,0x57);
  FUN_109e4d810(&DAT_10e05db58,0x57);
  FUN_109e4d810(&DAT_10e05df48,0x57);
  FUN_109e4d810(&DAT_10e05df80,0x57);
  FUN_109e4d810(&DAT_10e05dfb8,0x57);
  FUN_109e4d810(&DAT_10e05dff0,0x57);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05dc38,0x58);
  FUN_109e4d810(&DAT_10e05dc70,0x58);
  FUN_109e4d810(&DAT_10e05dca8,0x58);
  FUN_109e4d810(&DAT_10e05dce0,0x58);
  FUN_109e4d810(&DAT_10e05d928,0x58);
  FUN_109e4d810(&DAT_10e05d960,0x58);
  FUN_109e4d810(&DAT_10e05d998,0x58);
  FUN_109e4d810(&DAT_10e05d9d0,0x58);
  FUN_109e4d810(&DAT_10e05dab0,0x58);
  FUN_109e4d810(&DAT_10e05dae8,0x58);
  FUN_109e4d810(&DAT_10e05db20,0x58);
  FUN_109e4d810(&DAT_10e05db58,0x58);
  FUN_109e4d810(&DAT_10e05df48,0x58);
  FUN_109e4d810(&DAT_10e05df80,0x58);
  FUN_109e4d810(&DAT_10e05dfb8,0x58);
  FUN_109e4d810(&DAT_10e05dff0,0x58);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x59);
  FUN_109e4d810(&DAT_10e05d960,0x59);
  FUN_109e4d810(&DAT_10e05d998,0x59);
  FUN_109e4d810(&DAT_10e05d9d0,0x59);
  FUN_109e4d810(&DAT_10e05dab0,0x59);
  FUN_109e4d810(&DAT_10e05dae8,0x59);
  FUN_109e4d810(&DAT_10e05db20,0x59);
  FUN_109e4d810(&DAT_10e05db58,0x59);
  FUN_109e4d810(&DAT_10e05d7a0,0x59);
  FUN_109e4d810(&DAT_10e05d7d8,0x59);
  FUN_109e4d810(&DAT_10e05d810,0x59);
  FUN_109e4d810(&DAT_10e05d848,0x59);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x5a);
  FUN_109e4d810(&DAT_10e05d960,0x5a);
  FUN_109e4d810(&DAT_10e05d998,0x5a);
  FUN_109e4d810(&DAT_10e05d9d0,0x5a);
  FUN_109e4d810(&DAT_10e05dab0,0x5a);
  FUN_109e4d810(&DAT_10e05dae8,0x5a);
  FUN_109e4d810(&DAT_10e05db20,0x5a);
  FUN_109e4d810(&DAT_10e05db58,0x5a);
  FUN_109e4d810(&DAT_10e05d7a0,0x5a);
  FUN_109e4d810(&DAT_10e05d7d8,0x5a);
  FUN_109e4d810(&DAT_10e05d810,0x5a);
  FUN_109e4d810(&DAT_10e05d848,0x5a);
  FUN_109e4c608();
  FUN_109e4d810(&DAT_10e05d928,0x5b);
  FUN_109e4d810(&DAT_10e05d960,0x5b);
  FUN_109e4d810(&DAT_10e05d998,0x5b);
  FUN_109e4d810(&DAT_10e05d9d0,0x5b);
  FUN_109e4d810(&DAT_10e05dab0,0x5b);
  FUN_109e4d810(&DAT_10e05dae8,0x5b);
  FUN_109e4d810(&DAT_10e05db20,0x5b);
  FUN_109e4d810(&DAT_10e05db58,0x5b);
  FUN_109e4d810(&DAT_10e05d7a0,0x5b);
  FUN_109e4d810(&DAT_10e05d7d8,0x5b);
  FUN_109e4d810(&DAT_10e05d810,0x5b);
  FUN_109e4d810(&DAT_10e05d848,0x5b);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05dc38,0x5c);
  FUN_109e4d8b0(&DAT_10e05dc70,0x5c);
  FUN_109e4d8b0(&DAT_10e05dca8,0x5c);
  FUN_109e4d8b0(&DAT_10e05dce0,0x5c);
  FUN_109e4d8b0(&DAT_10e05d928,0x5c);
  FUN_109e4d8b0(&DAT_10e05d960,0x5c);
  FUN_109e4d8b0(&DAT_10e05d998,0x5c);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x5c);
  FUN_109e4d8b0(&DAT_10e05dab0,0x5c);
  FUN_109e4d8b0(&DAT_10e05dae8,0x5c);
  FUN_109e4d8b0(&DAT_10e05db20,0x5c);
  FUN_109e4d8b0(&DAT_10e05db58,0x5c);
  FUN_109e4d8b0(&DAT_10e05df48,0x5c);
  FUN_109e4d8b0(&DAT_10e05df80,0x5c);
  FUN_109e4d8b0(&DAT_10e05dfb8,0x5c);
  FUN_109e4d8b0(&DAT_10e05dff0,0x5c);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05dc38,0x5d);
  FUN_109e4d8b0(&DAT_10e05dc70,0x5d);
  FUN_109e4d8b0(&DAT_10e05dca8,0x5d);
  FUN_109e4d8b0(&DAT_10e05dce0,0x5d);
  FUN_109e4d8b0(&DAT_10e05d928,0x5d);
  FUN_109e4d8b0(&DAT_10e05d960,0x5d);
  FUN_109e4d8b0(&DAT_10e05d998,0x5d);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x5d);
  FUN_109e4d8b0(&DAT_10e05dab0,0x5d);
  FUN_109e4d8b0(&DAT_10e05dae8,0x5d);
  FUN_109e4d8b0(&DAT_10e05db20,0x5d);
  FUN_109e4d8b0(&DAT_10e05db58,0x5d);
  FUN_109e4d8b0(&DAT_10e05df48,0x5d);
  FUN_109e4d8b0(&DAT_10e05df80,0x5d);
  FUN_109e4d8b0(&DAT_10e05dfb8,0x5d);
  FUN_109e4d8b0(&DAT_10e05dff0,0x5d);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05dc38,0x5e);
  FUN_109e4d8b0(&DAT_10e05dc70,0x5e);
  FUN_109e4d8b0(&DAT_10e05dca8,0x5e);
  FUN_109e4d8b0(&DAT_10e05dce0,0x5e);
  FUN_109e4d8b0(&DAT_10e05d928,0x5e);
  FUN_109e4d8b0(&DAT_10e05d960,0x5e);
  FUN_109e4d8b0(&DAT_10e05d998,0x5e);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x5e);
  FUN_109e4d8b0(&DAT_10e05dab0,0x5e);
  FUN_109e4d8b0(&DAT_10e05dae8,0x5e);
  FUN_109e4d8b0(&DAT_10e05db20,0x5e);
  FUN_109e4d8b0(&DAT_10e05db58,0x5e);
  FUN_109e4d8b0(&DAT_10e05df48,0x5e);
  FUN_109e4d8b0(&DAT_10e05df80,0x5e);
  FUN_109e4d8b0(&DAT_10e05dfb8,0x5e);
  FUN_109e4d8b0(&DAT_10e05dff0,0x5e);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05dc38,0x5f);
  FUN_109e4d8b0(&DAT_10e05dc70,0x5f);
  FUN_109e4d8b0(&DAT_10e05dca8,0x5f);
  FUN_109e4d8b0(&DAT_10e05dce0,0x5f);
  FUN_109e4d8b0(&DAT_10e05d928,0x5f);
  FUN_109e4d8b0(&DAT_10e05d960,0x5f);
  FUN_109e4d8b0(&DAT_10e05d998,0x5f);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x5f);
  FUN_109e4d8b0(&DAT_10e05dab0,0x5f);
  FUN_109e4d8b0(&DAT_10e05dae8,0x5f);
  FUN_109e4d8b0(&DAT_10e05db20,0x5f);
  FUN_109e4d8b0(&DAT_10e05db58,0x5f);
  FUN_109e4d8b0(&DAT_10e05df48,0x5f);
  FUN_109e4d8b0(&DAT_10e05df80,0x5f);
  FUN_109e4d8b0(&DAT_10e05dfb8,0x5f);
  FUN_109e4d8b0(&DAT_10e05dff0,0x5f);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05d928,0x60);
  FUN_109e4d8b0(&DAT_10e05d960,0x60);
  FUN_109e4d8b0(&DAT_10e05d998,0x60);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x60);
  FUN_109e4d8b0(&DAT_10e05dab0,0x60);
  FUN_109e4d8b0(&DAT_10e05dae8,0x60);
  FUN_109e4d8b0(&DAT_10e05db20,0x60);
  FUN_109e4d8b0(&DAT_10e05db58,0x60);
  FUN_109e4d8b0(&DAT_10e05d7a0,0x60);
  FUN_109e4d8b0(&DAT_10e05d7d8,0x60);
  FUN_109e4d8b0(&DAT_10e05d810,0x60);
  FUN_109e4d8b0(&DAT_10e05d848,0x60);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05d928,0x61);
  FUN_109e4d8b0(&DAT_10e05d960,0x61);
  FUN_109e4d8b0(&DAT_10e05d998,0x61);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x61);
  FUN_109e4d8b0(&DAT_10e05dab0,0x61);
  FUN_109e4d8b0(&DAT_10e05dae8,0x61);
  FUN_109e4d8b0(&DAT_10e05db20,0x61);
  FUN_109e4d8b0(&DAT_10e05db58,0x61);
  FUN_109e4d8b0(&DAT_10e05d7a0,0x61);
  FUN_109e4d8b0(&DAT_10e05d7d8,0x61);
  FUN_109e4d8b0(&DAT_10e05d810,0x61);
  FUN_109e4d8b0(&DAT_10e05d848,0x61);
  FUN_109e4c608();
  FUN_109e4d8b0(&DAT_10e05d928,0x62);
  FUN_109e4d8b0(&DAT_10e05d960,0x62);
  FUN_109e4d8b0(&DAT_10e05d998,0x62);
  FUN_109e4d8b0(&DAT_10e05d9d0,0x62);
  FUN_109e4d8b0(&DAT_10e05dab0,0x62);
  FUN_109e4d8b0(&DAT_10e05dae8,0x62);
  FUN_109e4d8b0(&DAT_10e05db20,0x62);
  FUN_109e4d8b0(&DAT_10e05db58,0x62);
  FUN_109e4d8b0(&DAT_10e05d7a0,0x62);
  FUN_109e4d8b0(&DAT_10e05d7d8,0x62);
  FUN_109e4d8b0(&DAT_10e05d810,0x62);
  FUN_109e4d8b0(&DAT_10e05d848,0x62);
  FUN_109e4c608();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  func_0x000109e4d9a0();
  FUN_109e4c608();
  FUN_109e4da90(&DAT_10e05dc38,100);
  FUN_109e4da90(&DAT_10e05dc70,100);
  FUN_109e4da90(&DAT_10e05dca8,100);
  FUN_109e4da90(&DAT_10e05dce0,100);
  FUN_109e4da90(&DAT_10e05d928,100);
  FUN_109e4da90(&DAT_10e05d960,100);
  FUN_109e4da90(&DAT_10e05d998,100);
  FUN_109e4da90(&DAT_10e05d9d0,100);
  FUN_109e4da90(&DAT_10e05dab0,100);
  FUN_109e4da90(&DAT_10e05dae8,100);
  FUN_109e4da90(&DAT_10e05db20,100);
  FUN_109e4da90(&DAT_10e05db58,100);
  FUN_109e4da90(&DAT_10e05d7a0,100);
  FUN_109e4da90(&DAT_10e05d7d8,100);
  FUN_109e4da90(&DAT_10e05d810,100);
  FUN_109e4da90(&DAT_10e05d848,100);
  FUN_109e4da90(&DAT_10e05df48,100);
  FUN_109e4da90(&DAT_10e05df80,100);
  FUN_109e4da90(&DAT_10e05dfb8,100);
  FUN_109e4da90(&DAT_10e05dff0,100);
  FUN_109e4c608();
  FUN_109e4da90(&DAT_10e05dc38,0x65);
  FUN_109e4da90(&DAT_10e05dc70,0x65);
  FUN_109e4da90(&DAT_10e05dca8,0x65);
  FUN_109e4da90(&DAT_10e05dce0,0x65);
  FUN_109e4da90(&DAT_10e05d928,0x65);
  FUN_109e4da90(&DAT_10e05d960,0x65);
  FUN_109e4da90(&DAT_10e05d998,0x65);
  FUN_109e4da90(&DAT_10e05d9d0,0x65);
  FUN_109e4da90(&DAT_10e05dab0,0x65);
  FUN_109e4da90(&DAT_10e05dae8,0x65);
  FUN_109e4da90(&DAT_10e05db20,0x65);
  FUN_109e4da90(&DAT_10e05db58,0x65);
  FUN_109e4da90(&DAT_10e05d7a0,0x65);
  FUN_109e4da90(&DAT_10e05d7d8,0x65);
  FUN_109e4da90(&DAT_10e05d810,0x65);
  FUN_109e4da90(&DAT_10e05d848,0x65);
  FUN_109e4da90(&DAT_10e05df48,0x65);
  FUN_109e4da90(&DAT_10e05df80,0x65);
  FUN_109e4da90(&DAT_10e05dfb8,0x65);
  FUN_109e4da90(&DAT_10e05dff0,0x65);
  FUN_109e4c608();
  FUN_109e4da90(&DAT_10e05dc38,0x66);
  FUN_109e4da90(&DAT_10e05dc70,0x66);
  FUN_109e4da90(&DAT_10e05dca8,0x66);
  FUN_109e4da90(&DAT_10e05dce0,0x66);
  FUN_109e4da90(&DAT_10e05d928,0x66);
  FUN_109e4da90(&DAT_10e05d960,0x66);
  FUN_109e4da90(&DAT_10e05d998,0x66);
  FUN_109e4da90(&DAT_10e05d9d0,0x66);
  FUN_109e4da90(&DAT_10e05dab0,0x66);
  FUN_109e4da90(&DAT_10e05dae8,0x66);
  FUN_109e4da90(&DAT_10e05db20,0x66);
  FUN_109e4da90(&DAT_10e05db58,0x66);
  FUN_109e4da90(&DAT_10e05d7a0,0x66);
  FUN_109e4da90(&DAT_10e05d7d8,0x66);
  FUN_109e4da90(&DAT_10e05d810,0x66);
  FUN_109e4da90(&DAT_10e05d848,0x66);
  FUN_109e4da90(&DAT_10e05df48,0x66);
  FUN_109e4da90(&DAT_10e05df80,0x66);
  FUN_109e4da90(&DAT_10e05dfb8,0x66);
  FUN_109e4da90(&DAT_10e05dff0,0x66);
  FUN_109e4c608();
  return;
}



/* Entry: 109e4c604; end: 109e4c607;  */

long FUN_109e4c604(long param_1)

{
  long lVar1;
  
  func_0x000109f61a2c(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + -0x30;
    FUN_109f65aa4(lVar1);
    FUN_109f65ae0(lVar1);
  }
  return param_1;
}



/* Entry: 109e4c608; end: 109e4c6ff;  */

void FUN_109e4c608(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_stack_00000000;
  long *plStack_38;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 10;
  *puVar1 = &PTR_DAT_110b642e0;
  puVar5 = puVar1 + 7;
  *puVar5 = 0;
  puVar1[5] = puVar5;
  puVar1[6] = 0;
  puVar1[8] = puVar1 + 5;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  puVar2 = puVar1;
  FUN_109f65c2c(puVar1,param_2);
  puVar1[4] = puVar2;
  if (in_stack_00000000 != 0) {
    lVar4 = in_stack_00000000;
    puVar2 = (undefined8 *)puVar1[8];
    plStack_38 = (long *)((ulong)&stack0x00000000 | 8);
    do {
      puVar3 = (undefined8 *)(lVar4 + 8);
      *puVar3 = puVar5;
      *(undefined8 **)(lVar4 + 0x78) = puVar1;
      *(undefined8 **)(lVar4 + 0x10) = puVar2;
      *puVar2 = puVar3;
      puVar1[8] = puVar3;
      lVar4 = *plStack_38;
      puVar2 = puVar3;
      plStack_38 = plStack_38 + 1;
    } while (lVar4 != 0);
  }
  FUN_109ea2360(*(undefined8 *)(lRam0000000113834718 + 200),puVar1);
  return;
}



/* Entry: 109e4c700; end: 109e4c79f;  */

void FUN_109e4c700(undefined4 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  *(ushort *)((long)puVar1 + 0x44) = *(ushort *)((long)puVar1 + 0x44) & 0xffef | 8;
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05dab0,FUN_109e4c7a0,1);
  *(undefined4 *)(lVar2 + 0x4c) = param_1;
  return;
}



/* Entry: 109e4c7a0; end: 109e4c7db;  */

bool FUN_109e4c7a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x323) & 1) != 0) {
    return true;
  }
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe8);
  }
  uVar2 = 0x135;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar2 = 0x1a3;
  }
  return uVar2 < uVar1;
}



/* Entry: 109e4c7dc; end: 109e4c8bb;  */

void FUN_109e4c7dc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,param_2,&UNK_10f5aee29,6);
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,2);
  *(undefined4 *)(lVar2 + 0x4c) = param_3;
  return;
}



/* Entry: 109e4c8bc; end: 109e4c973;  */

bool FUN_109e4c8bc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xf8) != 5) && ((*(byte *)(param_1 + 0x337) & 1) == 0)) {
    uVar1 = *(uint *)(param_1 + 0xec);
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = 0x135;
    if (*(char *)(param_1 + 0xe4) == '\0') {
      uVar2 = 0x1ad;
    }
    return uVar2 < uVar1;
  }
  return true;
}



/* Entry: 109e4c974; end: 109e4ca63;  */

void FUN_109e4c974(undefined4 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,&DAT_10e05efe8,&DAT_10f2e4588,6);
  *(ushort *)((long)puVar1 + 0x44) = *(ushort *)((long)puVar1 + 0x44) & 0xffef | 8;
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,&DAT_10e05dab0,FUN_109e4ca64,2);
  *(undefined4 *)(lVar2 + 0x4c) = param_1;
  return;
}



/* Entry: 109e4ca64; end: 109e4caa7;  */

byte FUN_109e4ca64(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x321) & 1) != 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  bVar1 = 0;
  if (0x1cb < uVar2) {
    bVar1 = *(byte *)(param_1 + 0xe4) ^ 1;
  }
  return bVar1;
}



/* Entry: 109e4caa8; end: 109e4cbcf;  */

void FUN_109e4caa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,param_2,&UNK_10f5aee29,6);
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c(puVar1,param_2,&UNK_10f60a7f3,6);
  puVar1 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x90);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  FUN_109eaba7c();
  lVar2 = 0x113834718;
  FUN_109e4db30(0x113834718,param_2,param_1,3);
  *(undefined4 *)(lVar2 + 0x4c) = 10;
  return;
}



/* Entry: 109e4cbd0; end: 109e4cf93;  */

/* WARNING: Removing unreachable block (ram,0x000109e4ddd8) */

void FUN_109e4cbd0(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  byte bVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  
  bVar16 = param_1 == 0;
  puVar1 = &UNK_10f60a7ff;
  if (bVar16) {
    puVar1 = &UNK_10f60a809;
  }
  puVar2 = &UNK_10f60a820;
  if (bVar16) {
    puVar2 = &UNK_10f60a82b;
  }
  puVar3 = &UNK_10f604326;
  puVar14 = &UNK_10f604317;
  if (bVar16) {
    puVar3 = &UNK_10f60a860;
    puVar14 = &UNK_10f60a843;
  }
  puVar4 = &UNK_10f604335;
  if (bVar16) {
    puVar4 = &UNK_10f60a87d;
  }
  puVar5 = &UNK_10f604344;
  if (bVar16) {
    puVar5 = &UNK_10f60a89a;
  }
  puVar6 = &UNK_10f604353;
  if (bVar16) {
    puVar6 = &UNK_10f60a8b7;
  }
  puVar7 = &UNK_10f604361;
  if (bVar16) {
    puVar7 = &UNK_10f60a8d3;
  }
  puVar8 = &UNK_10f604384;
  puVar15 = &UNK_10f604370;
  if (bVar16) {
    puVar8 = &UNK_10f60a912;
    puVar15 = &UNK_10f60a8f0;
  }
  puVar9 = &DAT_10f37eeb0;
  if (bVar16) {
    puVar9 = &UNK_10f60a935;
  }
  puVar10 = &UNK_10f60a94c;
  if (bVar16) {
    puVar10 = &UNK_10f60a959;
  }
  puStack_78 = (undefined8 *)&UNK_10f604398;
  if (bVar16) {
    puStack_78 = (undefined8 *)&UNK_10f60a973;
  }
  puStack_70 = &UNK_10f6043ab;
  if (bVar16) {
    puStack_70 = &UNK_10f60a995;
  }
  puStack_68 = (undefined8 *)&UNK_10f60a9b7;
  if (bVar16) {
    puStack_68 = (undefined8 *)&UNK_10f60a9ca;
  }
  FUN_109e4dca0(puVar1,&UNK_10f60a809,0x109e4e11c,0,0,param_1 | 0x81c,0x16);
  FUN_109e4dca0(puVar2,&UNK_10f60a82b,0x109e4e11c,0,1,param_1 | 0x82e,0x17);
  FUN_109e4dca0(puVar14,&UNK_10f60a843,0x109e4e11c,0,1,param_1 | 0xa08,0x18);
  FUN_109e4dca0(puVar3,&UNK_10f60a860,0x109e4e11c,0,1,param_1 | 0x840,0x1c);
  FUN_109e4dca0(puVar4,&UNK_10f60a87d,0x109e4e11c,0,1,param_1 | 0x840,0x1d);
  FUN_109e4dca0(puVar5,&UNK_10f60a89a,0x109e4e11c,0,1,param_1 | 0x840,0x19);
  FUN_109e4dca0(puVar6,&UNK_10f60a8b7,0x109e4e11c,0,1,param_1 | 0x840,0x1a);
  FUN_109e4dca0(puVar7,&UNK_10f60a8d3,0x109e4e11c,0,1,param_1 | 0x840,0x1b);
  FUN_109e4dca0(puVar15,&UNK_10f60a8f0,0x109e4e11c,0,1,param_1 | 0x908,0x1e);
  FUN_109e4dca0(puVar8,&UNK_10f60a912,0x109e4e11c,0,2,param_1 | 0x840,0x1f);
  FUN_109e4dca0(puVar9,&UNK_10f60a935,FUN_109e4e4d4,0,1,param_1 | 0x808,0x20);
  FUN_109e4dca0(puVar10,&UNK_10f60a959,0x109e4e5d0,0,1,param_1 | 0x888,0x21);
  FUN_109e4dca0(puStack_78,&UNK_10f60a973,0x109e4e11c,0,1,param_1 | 0x440,0x22);
  FUN_109e4dca0(puStack_70,&UNK_10f60a995,0x109e4e11c,0,1,param_1 | 0x440,0x23);
  puVar23 = puStack_68;
  uVar13 = param_1 | 0x181c;
  puVar17 = puRam0000000113834720;
  FUN_109f658b0(puRam0000000113834720,0x60);
  if (puVar17 != (undefined8 *)0x0) {
    puVar17[9] = 0;
    puVar17[8] = 0;
    puVar17[0xb] = 0;
    puVar17[10] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[7] = 0;
    puVar17[6] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
  }
  puVar17[1] = 0;
  puVar17[2] = 0;
  *(undefined4 *)(puVar17 + 3) = 10;
  *puVar17 = &PTR_DAT_110b642e0;
  puVar24 = puVar17 + 7;
  *puVar24 = 0;
  puVar17[5] = puVar24;
  puVar17[6] = 0;
  puVar17[8] = puVar17 + 5;
  *(undefined4 *)(puVar17 + 0xb) = 0xffffffff;
  puVar27 = puVar17;
  FUN_109f65c2c(puVar17,puVar23);
  lVar28 = 0;
  puVar17[4] = puVar27;
  do {
    lVar18 = 0x113834718;
    uVar12 = *(uint *)(*(long *)((long)&PTR_DAT_110b5e948 + lVar28) + 4);
    if (((((uVar12 & 0xff00) != 0x200 || (uVar13 & 8) != 0) &&
         ((uVar13 & 0x800) != 0 || (uVar12 & 0xff00) != 0x100)) &&
        (((param_1 & 0x80) == 0 || ((uVar12 & 0xf0000) == 0x70000)))) &&
       ((uVar13 < 0x1000 || (uVar12 = uVar12 >> 0x10 & 0xf, uVar12 - 1 < 4 || uVar12 == 7)))) {
      (*(code *)0x109e4e11c)(0x113834718,*(long *)((long)&PTR_DAT_110b5e948 + lVar28),0,uVar13);
      if ((param_1 & 1) == 0) {
        *(undefined4 *)(lVar18 + 0x4c) = 0x24;
        bVar22 = *(byte *)(lVar18 + 0x48);
      }
      else {
        puStack_70 = (undefined *)(lVar18 + 0x50);
        puStack_68 = puRam0000000113834720;
        lVar19 = *(long *)(*(long *)(lRam0000000113834718 + 200) + 8);
        FUN_109f61800(lVar19,&UNK_10f60a9ca);
        if (lVar19 == 0) {
          puVar23 = (undefined8 *)0x0;
          if ((param_1 & 2) != 0) goto LAB_109e4ded0;
LAB_109e4de3c:
          if (uVar13 < 0x1000) {
            ppuVar20 = &puStack_70;
            FUN_109eabf1c(ppuVar20,*(undefined8 *)(lVar18 + 0x20),&UNK_10f60a9e8);
            *(ushort *)((long)ppuVar20 + 0x44) = *(ushort *)((long)ppuVar20 + 0x44) & 0xffef | 8;
            FUN_109e4e670(puVar23,ppuVar20,*(undefined8 *)(lVar18 + 0x28));
            puVar23[1] = lVar18 + 0x60;
            puVar27 = *(undefined8 **)(lVar18 + 0x68);
            puVar23[2] = puVar27;
            plVar11 = (long *)0x0;
            if (puVar23 != (undefined8 *)0x0) {
              plVar11 = puVar23 + 1;
            }
            *puVar27 = plVar11;
            *(long **)(lVar18 + 0x68) = plVar11;
            func_0x000109e24460(&puStack_78,ppuVar20);
            puVar23 = puStack_78;
            FUN_109eac02c();
          }
          else {
            puVar27 = puVar23;
            FUN_109eb38b8(puVar23,0,lVar18 + 0x28);
            ppuVar20 = &puStack_70;
            FUN_109eabf1c(ppuVar20,puVar27[4],&UNK_10f60a9e8);
            puVar27 = puRam0000000113834720;
            FUN_109f658b0(puRam0000000113834720,0x38);
            if (puVar27 != (undefined8 *)0x0) {
              puVar27[6] = 0;
              puVar27[3] = 0;
              puVar27[2] = 0;
              puVar27[5] = 0;
              puVar27[4] = 0;
              puVar27[1] = 0;
              *puVar27 = 0;
            }
            func_0x000109eab518(puVar27,ppuVar20,&UNK_10f60a9f1);
            uVar26 = puVar27[4];
            puVar21 = puRam0000000113834720;
            FUN_109f658b0(puRam0000000113834720,0x90);
            if (puVar21 != (undefined8 *)0x0) {
              puVar21[0xf] = 0;
              puVar21[0xe] = 0;
              puVar21[0x11] = 0;
              puVar21[0x10] = 0;
              puVar21[0xb] = 0;
              puVar21[10] = 0;
              puVar21[0xd] = 0;
              puVar21[0xc] = 0;
              puVar21[7] = 0;
              puVar21[6] = 0;
              puVar21[9] = 0;
              puVar21[8] = 0;
              puVar21[3] = 0;
              puVar21[2] = 0;
              puVar21[5] = 0;
              puVar21[4] = 0;
              puVar21[1] = 0;
              *puVar21 = 0;
            }
            FUN_109eaba7c(puVar21,uVar26,&UNK_10f60a9f1,7);
            FUN_109e4e670(puVar23,ppuVar20,*(undefined8 *)(lVar18 + 0x28));
            puVar23[1] = lVar18 + 0x60;
            plVar11 = (long *)0x0;
            if (puVar23 != (undefined8 *)0x0) {
              plVar11 = puVar23 + 1;
            }
            puVar25 = *(undefined8 **)(lVar18 + 0x68);
            puVar23[2] = puVar25;
            *puVar25 = plVar11;
            *(long **)(lVar18 + 0x68) = plVar11;
            puVar21[1] = lVar18 + 0x38;
            plVar11 = (long *)0x0;
            if (puVar21 != (undefined8 *)0x0) {
              plVar11 = puVar21 + 1;
            }
            puVar23 = *(undefined8 **)(lVar18 + 0x40);
            puVar21[2] = puVar23;
            *puVar23 = plVar11;
            *(long **)(lVar18 + 0x40) = plVar11;
            func_0x000109e244dc(&puStack_78,puVar21);
            puVar23 = puStack_78;
            func_0x000109eabfa8(puStack_78,puVar27,
                                ~(-1 << (ulong)(*(byte *)(puStack_78[4] + 0xd) & 0x1f)));
            puVar23[1] = lVar18 + 0x60;
            plVar11 = (long *)0x0;
            if (puVar23 != (undefined8 *)0x0) {
              plVar11 = puVar23 + 1;
            }
            puVar27 = *(undefined8 **)(lVar18 + 0x68);
            puVar23[2] = puVar27;
            *puVar27 = plVar11;
            *(long **)(lVar18 + 0x68) = plVar11;
            puVar23 = puRam0000000113834720;
            FUN_109f658b0(puRam0000000113834720,0x38);
            if (puVar23 != (undefined8 *)0x0) {
              puVar23[6] = 0;
              puVar23[3] = 0;
              puVar23[2] = 0;
              puVar23[5] = 0;
              puVar23[4] = 0;
              puVar23[1] = 0;
              *puVar23 = 0;
            }
            func_0x000109eab518();
            FUN_109eac02c();
          }
        }
        else {
          puVar23 = *(undefined8 **)(lVar19 + 8);
          if ((param_1 & 2) == 0) goto LAB_109e4de3c;
LAB_109e4ded0:
          FUN_109e4e670(puVar23,0,*(undefined8 *)(lVar18 + 0x28));
        }
        puVar23[1] = lVar18 + 0x60;
        plVar11 = (long *)0x0;
        if (puVar23 != (undefined8 *)0x0) {
          plVar11 = puVar23 + 1;
        }
        puVar27 = *(undefined8 **)(lVar18 + 0x68);
        puVar23[2] = puVar27;
        *puVar27 = plVar11;
        *(long **)(lVar18 + 0x68) = plVar11;
        bVar22 = *(byte *)(lVar18 + 0x48) | 1;
      }
      puVar27 = (undefined8 *)(lVar18 + 8);
      *puVar27 = puVar24;
      *(byte *)(lVar18 + 0x48) = bVar22 & 0xfb | 2;
      *(undefined8 **)(lVar18 + 0x78) = puVar17;
      puVar23 = (undefined8 *)puVar17[8];
      *(undefined8 **)(lVar18 + 0x10) = puVar23;
      *puVar23 = puVar27;
      puVar17[8] = puVar27;
    }
    lVar28 = lVar28 + 8;
    if (lVar28 == 0x108) {
      FUN_109ea2360(*(undefined8 *)(lRam0000000113834718 + 200),puVar17);
      return;
    }
  } while( true );
}



/* Entry: 109e4cf94; end: 109e4d033;  */

byte FUN_109e4cf94(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xe8);
  }
  uVar3 = 0x135;
  if (*(char *)(param_1 + 0xe4) == '\0') {
    uVar3 = 0x1a3;
  }
  if ((uVar3 < uVar2) || ((*(byte *)(param_1 + 0x32f) & 1) != 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3cd);
  }
  return bVar1 & 1;
}


