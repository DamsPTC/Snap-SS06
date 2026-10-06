/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082926d0; end: 1082926db;  */

void FUN_1082926d0(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000108294494(param_1,&uStack_30);
  func_0x000108293e6c(&uStack_28);
  return;
}



/* Entry: 1082926dc; end: 108292763;  */

undefined8 FUN_1082926dc(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (*param_2 == 0) {
    uVar6 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      puVar5 = (undefined8 *)(param_1 + 0x10);
      FUN_108292764();
      uVar6 = *puVar5;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x28);
      if ((*(long *)(param_1 + 0x20) != lVar2) && (*(int *)(lVar2 + -4) == iVar3)) {
        *(int *)(lVar2 + -4) = iVar3 + 1;
      }
      FUN_108292764(param_1 + 0x10);
      if ((int)*(uint *)(param_1 + 0x18) < 2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x108292764);
        (*pcVar4)();
      }
      lVar2 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 8;
      uVar1 = *(undefined8 *)(lVar2 + -0x10);
      uVar6 = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -0x10) = uVar6;
      *(undefined8 *)(lVar2 + -8) = uVar1;
    }
  }
  return uVar6;
}



/* Entry: 108292764; end: 1082927ef;  */

long * FUN_108292764(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x000108294e1c();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    lVar3 = *unaff_x20;
    plVar1 = (long *)(*unaff_x19 + (long)iVar2 * 8);
    *unaff_x20 = 0;
    *plVar1 = lVar3;
  }
  else {
    plVar1 = unaff_x19;
    FUN_108294664(0x3ff8000000000000);
    lVar3 = *unaff_x20;
    plVar1 = plVar1 + (int)unaff_x19[1];
    *unaff_x20 = 0;
    *plVar1 = lVar3;
    FUN_108294628();
    iVar2 = (int)unaff_x19[1];
  }
  *(int *)(unaff_x19 + 1) = iVar2 + 1;
  return plVar1;
}



/* Entry: 1082927f0; end: 108292847;  */

undefined8 FUN_1082927f0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long extraout_x8;
  long unaff_x20;
  undefined4 uStack_24;
  
  if (*param_2 != 0) {
    func_0x000108294fb0();
    if ((*(byte *)(extraout_x8 + 0x4c) >> 4 & 1) != 0) {
      uStack_24 = *(undefined4 *)(unaff_x20 + 0x18);
      func_0x00010066048c(unaff_x20 + 0x20,&uStack_24);
    }
    puVar1 = (undefined8 *)(unaff_x20 + 0x10);
    FUN_108292764();
    return *puVar1;
  }
  return 0;
}



/* Entry: 108292848; end: 108293213;  */

byte FUN_108292848(ulong *param_1,undefined8 *param_2,long param_3,int param_4,long *param_5,
                  long param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined4 uVar11;
  code *extraout_x8;
  ulong uVar12;
  long *plVar13;
  code *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar21;
  bool bVar22;
  long *plVar23;
  int iVar24;
  ulong *puVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  ulong uStack_1b10;
  ulong uStack_1b08;
  ulong uStack_1b00;
  int *piStack_1ac8;
  undefined1 auStack_1ac0 [352];
  long lStack_1960;
  long *plStack_1930;
  long *plStack_1928;
  ulong uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined4 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined4 uStack_18b0;
  undefined1 auStack_18a8 [6144];
  undefined1 auStack_a8 [48];
  undefined1 uStack_78;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *param_1;
  func_0x000108294f54();
  if ((int)uVar4 == 0) {
    func_0x000108294eb8();
    uVar17 = *(undefined8 *)(uVar4 + 0x70);
    if (*(char *)(*(long *)(*param_1 + 0x20) + 0x54) == '\x01') {
      FUN_10827b938(*(long *)(*param_1 + 0x20),&UNK_10f482154);
    }
    if ((param_1[0xd] & 1) == 0) {
      uVar5 = *param_1;
      func_0x000108294f54();
      if ((int)uVar5 != 0) goto LAB_108292914;
      if ((((param_3 == 0) || (*param_5 != 0)) || (param_6 != 0)) ||
         ((param_4 != 0 || (param_5[3] != 0)))) {
LAB_1082929b0:
        func_0x000108294eb8();
        FUN_10828f2a4(*(undefined8 *)(uVar5 + 0x98));
        plVar16 = *(long **)(uVar5 + 0x70);
        *(undefined1 *)(param_1 + 0xd) = 1;
        uVar14 = *(undefined8 *)(uVar5 + 0x78);
        uVar9 = *(undefined8 *)(uVar5 + 0x80);
        FUN_1082924e4(param_1);
        param_1[7] = 0;
        FUN_1082925c8(param_1);
        piStack_1ac8 = (int *)param_1[1];
        if (piStack_1ac8 == (int *)0x0) {
          uVar11 = 6;
          if ((*(ulong *)(*(long *)(*(long *)(*param_1 + 0x10) + 0xb8) + 0x18) & 0x20000) != 0) {
            uVar11 = 2;
          }
          FUN_108288f3c(&uStack_1920,uVar11);
          uVar12 = uStack_1920;
          uStack_1920 = 0;
          uVar20 = param_1[1];
          param_1[1] = uVar12;
          FUN_108294254(uVar20);
          FUN_108289ea0(&uStack_1920);
          piStack_1ac8 = (int *)param_1[1];
          if (piStack_1ac8 != (int *)0x0) goto LAB_108292a4c;
        }
        else {
LAB_108292a4c:
          *piStack_1ac8 = *piStack_1ac8 + 1;
        }
        FUN_1082a0d24(auStack_1ac0,plVar16,uVar9,param_1 + 0xb,&piStack_1ac8);
        FUN_108289ea0(&piStack_1ac8);
        if ((param_5[4] == 0) || ((*(byte *)(param_5 + 1) & 1) == 0)) {
          uStack_1b10 = 0;
          uStack_1b08 = 0;
          uStack_1b00 = 0;
        }
        else {
          plVar8 = plVar16;
          (**(code **)(*plVar16 + 0x70))();
          uStack_1b08 = (ulong)plVar8 & 0xff00000000;
          uStack_1b00 = (ulong)plVar8 & 0xffffff00;
          uStack_1b10 = (ulong)plVar8 & 0xff;
        }
        uVar18 = 1;
        puVar21 = (undefined8 *)param_1[0xe];
        for (lVar26 = (long)(int)param_1[0xf] << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
          uVar3 = (uint)*puVar21;
          func_0x000108294e50();
          (*extraout_x8)();
          uVar18 = uVar18 & uVar3;
          puVar21 = puVar21 + 1;
        }
        if (uVar18 == 0) {
          uVar18 = 0;
        }
        else {
          uStack_1910 = 0;
          uStack_1918 = 0;
          uStack_1908 = 0;
          uStack_18f8 = 0;
          uStack_1900 = 0;
          uStack_18e8 = 0;
          uStack_18f0 = 0;
          uStack_18d8 = 0;
          uStack_18e0 = 0;
          uStack_18c8 = 0;
          uStack_18d0 = 0;
          uStack_18b8 = 0;
          uStack_18c0 = 0;
          uStack_18b0 = 0;
          uStack_1920 = uVar5;
          FUN_10840f97c(auStack_a8,auStack_18a8,0x1800,0x1800);
          uStack_78 = 0;
          if (*(char *)((long)param_1 + 0x69) == '\x01') {
            uVar5 = 0;
            uVar18 = 0;
            uVar12 = 0;
            plVar7 = (long *)0x0;
            plVar8 = (long *)0x0;
            while (uVar20 = (ulong)(int)param_1[3], uVar12 < uVar20) {
              if (uVar5 != (long)(param_1[5] - param_1[4]) >> 2) {
                uVar20 = (ulong)*(int *)(param_1[4] + uVar5 * 4);
              }
              lVar26 = param_1[2] + uVar12 * 8;
              plStack_1930 = (long *)0x0;
              plStack_1928 = (long *)0x0;
              FUN_1082a9054(lVar26,uVar20 - uVar12,&plStack_1930);
              if (uVar5 < (ulong)((long)(param_1[5] - param_1[4]) >> 2)) {
                uVar3 = *(uint *)(param_1[4] + uVar5 * 4);
                if (((int)uVar3 < 0) || ((int)param_1[3] <= (int)uVar3)) goto LAB_108293180;
                plVar13 = *(long **)(param_1[2] + (ulong)uVar3 * 8);
                plVar13[2] = (long)plStack_1928;
                plVar13[3] = 0;
                if (plStack_1928 != (long *)0x0) {
                  plStack_1928[3] = (long)plVar13;
                }
                plStack_1928 = plVar13;
                if (plStack_1930 != (long *)0x0) {
                  plVar13 = plStack_1930;
                }
LAB_108292bf4:
                plVar13[2] = (long)plVar7;
                plVar23 = plStack_1928;
                plVar27 = plVar13;
                if (plVar8 != (long *)0x0) {
                  plVar7[3] = (long)plVar13;
                  plVar27 = plVar8;
                }
              }
              else {
                plVar13 = plStack_1930;
                plVar23 = plVar7;
                plVar27 = plVar8;
                if (plStack_1930 != (long *)0x0) goto LAB_108292bf4;
              }
              uVar18 = (uint)lVar26 | uVar18;
              uVar5 = uVar5 + 1;
              plVar7 = plVar23;
              plVar8 = plVar27;
              uVar12 = uVar20 + 1;
            }
            plVar7 = plVar8;
            if ((uVar18 & 1) != 0) {
              for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[3]) {
                (**(code **)(*plVar7 + 0x38))(plVar7,&uStack_1920);
              }
              uVar5 = 0;
              FUN_1082aa284();
              if ((uVar5 & 1) == 0) goto LAB_108292d74;
              iVar24 = (int)&uStack_1920;
              func_0x0001082aa350();
              if (iVar24 == 0) {
                (**(code **)(*(long *)*param_1 + 0x18))();
                goto LAB_108292d74;
              }
              lVar15 = 0;
              lVar26 = 0;
              for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[3]) {
                if ((int)param_1[3] <= lVar26) goto LAB_108293180;
                uVar5 = param_1[2];
                *(undefined8 *)(uVar5 + lVar15) = 0;
                FUN_1082945a4(uVar5 + lVar15,plVar8);
                lVar26 = lVar26 + 1;
                lVar15 = lVar15 + 8;
              }
              lVar26 = 0;
              uVar18 = 0;
              while( true ) {
                uVar3 = (uint)param_1[3];
                uVar5 = (ulong)uVar3;
                if ((int)uVar3 <= (int)uVar18) break;
                if ((int)uVar18 < 0) goto LAB_108293180;
                uVar5 = param_1[2];
                plVar8 = *(long **)(uVar5 + (ulong)uVar18 * 8);
                (**(code **)(*plVar8 + 0x30))();
                uVar3 = uVar18;
                if (plVar8 != (long *)0x0) {
                  uVar12 = param_1[3];
                  uVar3 = (int)uVar12 + ~uVar18;
                  uVar20 = param_1[2];
                  FUN_1082ff740();
                  if (uVar3 < (uint)plVar8) goto LAB_108293180;
                  puVar21 = (undefined8 *)(uVar20 + (long)(int)uVar12 * 8 + (long)(int)uVar3 * -8);
                  for (uVar28 = -((ulong)plVar8 >> 0x1f & 1) & 0xfffffff800000000 |
                                ((ulong)plVar8 & 0xffffffff) << 3; uVar28 != 0; uVar28 = uVar28 - 8)
                  {
                    func_0x000108294fbc(*puVar21);
                    (*extraout_x8_00)();
                    puVar21 = puVar21 + 1;
                  }
                  uVar3 = (uint)plVar8 + uVar18;
                }
                if ((int)param_1[3] <= lVar26) goto LAB_108293180;
                uVar12 = param_1[2];
                uVar9 = *(undefined8 *)(uVar5 + (ulong)uVar18 * 8);
                *(undefined8 *)(uVar5 + (ulong)uVar18 * 8) = 0;
                FUN_1082945a4(uVar12 + lVar26 * 8,uVar9);
                lVar26 = lVar26 + 1;
                uVar18 = uVar3 + 1;
              }
              iVar24 = (int)lVar26;
              if (iVar24 - uVar3 == 0 || iVar24 < (int)uVar3) {
                if (iVar24 < (int)uVar3) {
                  lVar26 = uVar5 * 8;
                  uVar12 = uVar5;
                  while( true ) {
                    lVar26 = lVar26 + -8;
                    iVar1 = (int)uVar5 + (iVar24 - uVar3);
                    iVar19 = (int)uVar12;
                    if (iVar19 <= iVar1) break;
                    uVar12 = (ulong)(iVar19 - 1);
                    if (iVar19 < 1 || (int)uVar5 < iVar19) goto LAB_108293180;
                    FUN_10828ea04(param_1[2] + lVar26);
                    uVar5 = (ulong)(uint)param_1[3];
                  }
                  *(int *)(param_1 + 3) = iVar1;
                }
              }
              else {
                if (uVar3 == 0) {
                  FUN_1082945dc(0x3ff0000000000000,param_1 + 2,lVar26);
                  uVar3 = (uint)param_1[3];
                }
                FUN_1082945dc(0x3ff8000000000000,param_1 + 2,iVar24 - uVar3);
                uVar12 = param_1[3];
                *(uint *)(param_1 + 3) = (int)uVar12 + (iVar24 - uVar3);
                puVar21 = (undefined8 *)(param_1[2] + (long)(int)uVar12 * 8);
                for (uVar5 = (ulong)(iVar24 - uVar3 & ((int)(iVar24 - uVar3) >> 0x1f ^ 0xffffffffU))
                    ; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar21 = 0;
                  puVar21 = puVar21 + 1;
                }
              }
              func_0x000108294f10();
              if ((extraout_x8_03 & 1) != 0) goto LAB_108292dc8;
              goto LAB_108292db8;
            }
LAB_108292d74:
            func_0x0001082aa42c(&uStack_1920);
            func_0x000108294f10();
            if ((extraout_x8_01 & 1) == 0) goto LAB_108292d84;
LAB_108292dc8:
            uVar18 = 0;
          }
          else {
LAB_108292d84:
            puVar21 = (undefined8 *)param_1[2];
            for (lVar26 = (long)(int)param_1[3] << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
              (**(code **)(*(long *)*puVar21 + 0x38))((long *)*puVar21,&uStack_1920);
              puVar21 = puVar21 + 1;
            }
            FUN_1082aa284(&uStack_1920);
LAB_108292db8:
            FUN_1082aa470(&uStack_1920);
            func_0x000108294f10();
            if ((extraout_x8_02 & 1) != 0) goto LAB_108292dc8;
            plVar8 = (long *)param_1[2];
            for (lVar26 = (long)(int)param_1[3] << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
              lVar15 = *plVar8;
              if ((lVar15 != 0) && (lVar6 = lVar15, FUN_1082a8cec(), (int)lVar6 != 0)) {
                FUN_1082a889c(lVar15,auStack_1ac0);
              }
              plVar8 = plVar8 + 1;
            }
            FUN_1082a1218(auStack_1ac0);
            iVar24 = 0;
            uVar18 = 0;
            puVar21 = (undefined8 *)param_1[2];
            for (lVar26 = (long)(int)param_1[3] << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
              plVar7 = (long *)*puVar21;
              plVar8 = plVar7;
              FUN_1082a8cec();
              if ((int)plVar8 != 0) {
                (**(code **)(*plVar7 + 0x68))(plVar7,auStack_1ac0);
                uVar18 = (uint)plVar7 | uVar18;
                if ((iVar24 < 99) && (*(int *)(lStack_1960 + 0x7c) < 100)) {
                  iVar24 = iVar24 + 1;
                }
                else {
                  FUN_1082683c8();
                  iVar24 = 0;
                }
              }
              puVar21 = puVar21 + 1;
            }
            FUN_1082a1308(auStack_1ac0);
          }
          FUN_1082a96bc(&uStack_1920);
        }
        func_0x000108292528(param_1);
        FUN_10829fc04(plVar16,param_2,param_3,param_4,param_5,
                      uStack_1b08 | uStack_1b10 | uStack_1b00,param_6);
        if ((uVar18 & 1) != 0) {
          FUN_1082ab230(uVar14);
        }
        bVar22 = false;
        puVar21 = (undefined8 *)param_1[0xe];
        for (lVar26 = (long)(int)param_1[0xf] << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
          (**(code **)(*(long *)*puVar21 + 0x18))((long *)*puVar21,param_1[0xc] + 1);
          bVar22 = true;
          puVar21 = puVar21 + 1;
        }
        if (bVar22) {
          FUN_1082ab230(uVar14);
        }
        *(undefined1 *)(param_1 + 0xd) = 0;
        FUN_108294210(auStack_1ac0);
        bVar22 = true;
      }
      else {
        for (puVar21 = param_2; puVar21 != param_2 + param_3; puVar21 = puVar21 + 1) {
          uVar14 = *puVar21;
          puVar25 = (ulong *)param_1[2];
          for (lVar26 = (long)(int)param_1[3] << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
            uVar5 = *puVar25;
            if ((uVar5 != 0) && (func_0x00010828ca44(uVar5,uVar14), (uVar5 & 1) != 0))
            goto LAB_1082929b0;
            puVar25 = puVar25 + 1;
          }
        }
        if ((code *)param_5[6] != (code *)0x0) {
          (*(code *)param_5[6])(param_5[7],1);
        }
        bVar22 = false;
      }
    }
    else {
LAB_108292914:
      if (param_5[6] != 0) {
        func_0x000108294fa4();
      }
      if ((code *)param_5[3] != (code *)0x0) {
        (*(code *)param_5[3])(param_5[5]);
      }
      bVar22 = false;
    }
    for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
      plVar16 = (long *)*param_2;
      if (plVar16[2] != 0) {
        if ((*(byte *)(plVar16 + 3) >> 2 & 1) != 0) {
          plVar8 = plVar16;
          (**(code **)(*plVar16 + 0x28))();
          plVar7 = plVar8;
          func_0x000108293408();
          if ((int)plVar7 != 0) {
            plVar7 = *(long **)((long)plVar8 + *(long *)(*plVar8 + -0x18) + 0x10);
            if (plVar7 == (long *)0x0) {
              plVar7 = (long *)0x0;
            }
            else {
              (**(code **)(*plVar7 + 0x68))();
            }
            FUN_10829fbc0(uVar17,plVar7,(long)plVar8 + 0xc);
            FUN_1082683c8(uVar17);
            *(undefined8 *)((long)plVar8 + 0x14) = 0;
            *(undefined8 *)((long)plVar8 + 0xc) = 0;
          }
        }
        (**(code **)(*plVar16 + 0x18))();
        if (((plVar16 != (long *)0x0) && ((char)plVar16[1] == '\x01')) &&
           (*(int *)((long)plVar16 + 0xc) != 2)) {
          plVar8 = *(long **)((long)plVar16 + *(long *)(*plVar16 + -0x18) + 0x10);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)0x0;
          }
          else {
            (**(code **)(*plVar8 + 0x58))();
          }
          FUN_10829fb54(uVar17,plVar8);
          *(undefined4 *)((long)plVar16 + 0xc) = 2;
        }
      }
      param_2 = param_2 + 1;
    }
    if (bVar22) {
      bVar10 = *(byte *)(*(long *)(*(long *)(uVar4 + 0x10) + 0xb8) + 0x1e) | *param_5 == 0;
      goto LAB_108293050;
    }
  }
  else {
    if (param_5[6] != 0) {
      func_0x000108294fa4();
    }
    bVar10 = 0;
    if ((code *)param_5[3] == (code *)0x0) goto LAB_108293050;
    (*(code *)param_5[3])(param_5[5]);
  }
  bVar10 = 0;
LAB_108293050:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return bVar10 & 1;
  }
  ___stack_chk_fail();
LAB_108293180:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108293184);
  (*pcVar2)();
}



/* Entry: 108293214; end: 108293237;  */

void FUN_108293214(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108293238(param_1 + 0x70,&uStack_18);
  return;
}



/* Entry: 108293238; end: 1082932bb;  */

long * FUN_108293238(long param_1)

{
  long *plVar1;
  int iVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x000108294e1c();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    plVar1 = (long *)(*unaff_x19 + (long)iVar2 * 8);
    *plVar1 = *unaff_x20;
  }
  else {
    plVar1 = unaff_x19;
    func_0x0001082946b0(0x3ff8000000000000);
    plVar1 = plVar1 + (int)unaff_x19[1];
    *plVar1 = *unaff_x20;
    FUN_1082946d4();
    iVar2 = (int)unaff_x19[1];
  }
  *(int *)(unaff_x19 + 1) = iVar2 + 1;
  return plVar1;
}



/* Entry: 1082932bc; end: 108293397;  */

void FUN_1082932bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iStack_24;
  
  iStack_24 = *(int *)(param_2 + 0xa4);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x80;
    if ((*(long **)(param_1 + 0x98) == (long *)0x0) || (iStack_24 != *(int *)(param_1 + 0x90))) {
      *(int *)(param_1 + 0x90) = iStack_24;
      func_0x000108294738();
      *(long *)(param_1 + 0x98) = lVar1;
    }
    else {
      **(long **)(param_1 + 0x98) = param_3;
    }
    return;
  }
  lVar1 = param_1 + 0x80;
  func_0x000108293358(lVar1,&iStack_24);
  if (lVar1 != 0) {
    FUN_108293398(param_1 + 0x80,iStack_24);
  }
  return;
}



/* Entry: 108293398; end: 1082933ab;  */

undefined4 FUN_108293398(int *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar9;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = param_2;
  uVar12 = 0;
  uVar9 = param_1[4];
  uVar6 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar4 = param_1[1];
  uVar8 = uVar6 & uVar4 - 1;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  do {
    if (uVar2 == uVar12) {
      uVar7 = 0;
      uVar12 = uVar2;
LAB_108294b24:
      uVar3 = 0;
      if ((int)uVar12 < (int)uVar4) {
        uVar3 = uVar7;
      }
      return uVar3;
    }
    lVar11 = *(long *)(param_1 + 2);
    puVar14 = (uint *)(lVar11 + (long)(int)uVar8 * 0x18);
    uVar5 = *puVar14;
    if (uVar5 == 0) {
      uVar7 = 0;
      goto LAB_108294b24;
    }
    if ((uVar6 == uVar5) && (uVar9 == puVar14[2])) {
      *param_1 = *param_1 + -1;
      uVar6 = uVar8;
      while( true ) {
        uVar9 = uVar6;
        uVar6 = uVar8 - 1;
        bVar1 = (int)uVar8 < 1;
        uVar8 = uVar6;
        if (bVar1) {
          uVar8 = param_1[1] + uVar6;
        }
        puVar14 = (uint *)(lVar11 + (long)(int)uVar8 * 0x18);
        uVar2 = *puVar14;
        if (uVar2 == 0) break;
        uVar5 = param_1[1] - 1U & uVar2;
        uVar6 = uVar9;
        if ((int)uVar5 < (int)uVar8 || (int)uVar9 <= (int)uVar5) {
          if ((((int)uVar8 <= (int)uVar9) || ((int)uVar9 <= (int)uVar5 && (int)uVar5 < (int)uVar8))
             && (uVar6 = uVar8, uVar9 != uVar8)) {
            puVar13 = (uint *)(lVar11 + (long)(int)uVar9 * 0x18);
            if (*puVar13 == 0) {
              uVar15 = *(undefined8 *)(puVar14 + 2);
              *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar14 + 4);
              *(undefined8 *)(puVar13 + 2) = uVar15;
              lVar11 = *(long *)(param_1 + 2);
            }
            else {
              puVar13[2] = puVar14[2];
              *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar14 + 4);
            }
            *puVar13 = uVar2;
          }
        }
      }
      piVar10 = (int *)(lVar11 + (long)(int)uVar9 * 0x18);
      if (*piVar10 != 0) {
        *piVar10 = 0;
      }
      uVar6 = param_1[1];
      if ((4 < (int)uVar6) && (*param_1 * 4 <= (int)uVar6)) {
        FUN_1082947a8(param_1,uVar6 >> 1);
      }
      uVar7 = 1;
      goto LAB_108294b24;
    }
    uVar5 = 0;
    if ((int)uVar8 < 1) {
      uVar5 = uVar4;
    }
    uVar8 = (uVar8 + uVar5) - 1;
    uVar12 = uVar12 + 1;
  } while( true );
}



/* Entry: 1082933ac; end: 108293463;  */

void FUN_1082933ac(long param_1,long param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_2 + 0xa4);
  func_0x000108293358(param_1 + 0x80,&uStack_14);
  return;
}



/* Entry: 108293464; end: 10829348b;  */

void FUN_108293464(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000108294f78();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10829348c; end: 108293573;  */

void FUN_10829348c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  FUN_108293464();
  uVar1 = 0x8e8;
  __Znwm();
  uStack_50 = *param_3;
  *param_3 = 0;
  uStack_48 = *(undefined4 *)(param_3 + 1);
  uStack_44 = *(undefined2 *)((long)param_3 + 0xc);
  uStack_58 = *param_4;
  *param_4 = 0;
  FUN_1082fe8dc();
  *param_1 = uVar1;
  FUN_108294260(&uStack_58);
  func_0x000108294ea8();
  do {
    func_0x000108294dd0();
  } while (extraout_w10 != 0);
  uStack_60 = uVar1;
  FUN_1082927f0(param_2,&uStack_60);
  FUN_10828ea04(&uStack_60);
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  return;
}



/* Entry: 108293574; end: 108293613;  */

void FUN_108293574(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar1;
  long *plVar2;
  long lVar3;
  
  func_0x000108294e1c();
  if (param_3 != 0) {
    FUN_1082a8774(param_3,*unaff_x19);
    plVar2 = *(long **)(param_3 + 0x70);
    for (lVar3 = (long)*(int *)(param_3 + 0x78) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      lVar1 = *plVar2;
      FUN_1082a885c(*unaff_x20,lVar1);
      func_0x000108294f6c();
      if (lVar1 == unaff_x19[7]) {
        unaff_x19[7] = 0;
      }
      plVar2 = plVar2 + 1;
    }
  }
  *(uint *)(*unaff_x20 + 0x4c) = *(uint *)(*unaff_x20 + 0x4c) | 8;
  *unaff_x20 = 0;
  func_0x000108294f28();
  func_0x000108294dc8();
  return;
}



/* Entry: 108293614; end: 108293663;  */

undefined8 FUN_108293614(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108293664(&uStack_30);
  uStack_28 = uStack_30;
  uStack_30 = 0;
  func_0x000108294f28();
  func_0x000108294d68();
  FUN_108294bb0(&uStack_30);
  return param_1;
}



/* Entry: 108293664; end: 108293697;  */

void FUN_108293664(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xe8;
  __Znwm();
  FUN_108294b78();
  *param_1 = uVar1;
  return;
}



/* Entry: 108293698; end: 108293883;  */

void FUN_108293698(long param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    do {
      func_0x000108294dd0();
    } while (extraout_w10 != 0);
  }
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_74 = 0x3210;
  puVar2 = (undefined8 *)0xa8;
  lStack_80 = lVar5;
  __Znwm();
  lStack_80 = 0;
  uStack_58 = uStack_78;
  uStack_54 = uStack_74;
  uVar6 = *param_3;
  *param_3 = 0;
  puVar3 = puVar2;
  FUN_1082a8654();
  *puVar3 = &PTR_FUN_110a36fe0;
  uStack_68 = 0;
  uStack_60 = 0;
  puVar3[0x11] = uVar6;
  *(undefined4 *)(puVar3 + 0x12) = param_4;
  puVar3[0x13] = lVar5;
  *(undefined4 *)(puVar3 + 0x14) = uStack_78;
  *(undefined2 *)((long)puVar3 + 0xa4) = uStack_74;
  puStack_70 = puVar3;
  FUN_108294bf0(&uStack_68);
  FUN_1082764bc(&uStack_60);
  func_0x000108294e74();
  func_0x000108294eb0();
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    lVar4 = *param_2;
  }
  else {
    if (*(int *)(lVar5 + 0x30) < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108293844);
      (*pcVar1)();
    }
    lVar4 = *param_2;
    if (**(long **)(lVar5 + 0x28) == lVar4) {
      do {
        func_0x000108294dd0();
      } while (extraout_w10_00 != 0);
      puStack_90 = puVar2;
      FUN_1082926dc(param_1,&puStack_90);
      func_0x000108294f94();
      FUN_1082a8970(puVar2,*(undefined8 *)(param_1 + 0x38));
      FUN_1082a885c(*(undefined8 *)(param_1 + 0x38),puVar2);
      goto LAB_108293814;
    }
  }
  lVar5 = param_1;
  FUN_1082933ac(param_1,lVar4);
  if (lVar5 != 0) {
    FUN_1082a885c(puVar2);
  }
  FUN_1082932bc(param_1,*param_2,puVar2);
  FUN_108293464(param_1);
  do {
    func_0x000108294dd0();
  } while (extraout_w10_01 != 0);
  func_0x000108294db0();
  func_0x000108294dc8();
LAB_108293814:
  func_0x000108294f40();
  FUN_108294c70(&puStack_70);
  return;
}



/* Entry: 108293884; end: 10829392b;  */

void FUN_108293884(void)

{
  undefined4 in_w3;
  undefined4 in_w4;
  undefined8 in_x6;
  undefined8 unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_34 = in_w3;
  uStack_38 = in_w4;
  func_0x000108294e1c();
  uStack_40 = in_x6;
  FUN_108293464();
  FUN_10829392c(&uStack_50);
  uStack_48 = uStack_50;
  uStack_50 = 0;
  func_0x000108294db0();
  func_0x000108294dc8();
  FUN_108294d28(&uStack_50);
  FUN_1082a8a00(unaff_x20);
  func_0x000108294f6c();
  return;
}



/* Entry: 10829392c; end: 1082939ef;  */

void FUN_10829392c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = 0xb8;
  __Znwm();
  uStack_58 = 0;
  if (*param_2 != 0) {
    do {
      func_0x000108294f00();
      uStack_58 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  uStack_60 = *param_6;
  *param_6 = 0;
  FUN_108294cb0(uVar3,&uStack_58,param_3,uVar1,uVar2,&uStack_60,*param_7);
  *param_1 = uVar3;
  FUN_10826b598(&uStack_60);
  FUN_1082764bc(&uStack_58);
  return;
}



/* Entry: 1082939f0; end: 108293b5f;  */

void FUN_1082939f0(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((*(byte *)(*param_6 + 0x18) >> 3 & 1) == 0) {
    FUN_108293464();
    uStack_70 = *param_3;
    *param_3 = 0;
    uStack_78 = 0;
    if (*param_6 != 0) {
      do {
        func_0x000108294f00();
        uStack_78 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10828c6b8(&lStack_68,param_2,&uStack_70,param_4,param_5,&uStack_78,param_7,param_8,param_9,
                  param_10);
    func_0x000108294eb0();
    func_0x000108294e74();
    lVar1 = lStack_68;
    if (lStack_68 != 0) {
      do {
        func_0x000108294f00();
      } while (extraout_w11_00 != 0);
      FUN_1082927f0(param_2,auStack_80);
      func_0x000108294f94();
      FUN_1082a8a00(lStack_68,param_2,*param_6,0,param_2,
                    *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0xb8));
      FUN_1082a8774(lStack_68,*param_2);
      lVar1 = lStack_68;
      lStack_68 = 0;
    }
    *param_1 = lVar1;
    FUN_10828ea04(&lStack_68);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 108293b60; end: 108293c73;  */

bool FUN_108293b60(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_108293464();
  if ((*(byte *)(*(long *)(*(long *)(*param_1 + 0x10) + 0xb8) + 0x1d) >> 6 & 1) == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_108292848(param_1,0,0,0,&uStack_90,0);
  }
  uStack_a0 = *param_2;
  *param_2 = 0;
  FUN_1082b6a4c(auStack_98,param_1,&uStack_a0,param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000108294db0();
  func_0x000108294dc8();
  FUN_1082764bc(&uStack_a0);
  if (param_1 != (long *)0x0) {
    func_0x000108294f40();
  }
  return param_1 != (long *)0x0;
}



/* Entry: 108293c74; end: 108293d23;  */

void FUN_108293c74(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uStack_48;
  
  func_0x000108294fb0();
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    FUN_108293d24(&uStack_48);
    uVar1 = uStack_48;
    uStack_48 = 0;
    FUN_108294304((long *)(param_1 + 0x48),uVar1);
    func_0x000108294f9c();
    lVar2 = unaff_x20[9];
  }
  FUN_1082b7c60();
  if ((param_3 != 0) && (lVar2 == 0)) {
    FUN_108293d6c();
    (**(code **)(*unaff_x20 + 0x30))();
  }
  return;
}



/* Entry: 108293d24; end: 108293d6b;  */

void FUN_108293d24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_1082b791c();
  *param_1 = uVar1;
  return;
}



/* Entry: 108293d6c; end: 108293dd3;  */

long FUN_108293d6c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[10];
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)0x20;
    __Znwm();
    uVar3 = *(undefined8 *)(*param_1 + 0x48);
    lVar1 = param_1[8];
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_110a3b1a8;
    puVar2[2] = uVar3;
    *(char *)(puVar2 + 3) = (char)lVar1;
    FUN_108293dd4(param_1 + 10,puVar2);
    lVar1 = param_1[10];
  }
  return lVar1;
}



/* Entry: 108293dd4; end: 108293de3;  */

void FUN_108293dd4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  plVar3 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar3 != (long *)0x0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000108294f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108293de4; end: 108293e8b;  */

undefined8 FUN_108293de4(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    func_0x000108294e88();
    FUN_108294304((long *)(param_1 + 0x48),uStack_28);
    func_0x000108294f9c();
    lVar1 = *(long *)(unaff_x19 + 0x48);
  }
  return *(undefined8 *)(lVar1 + 0x50);
}



/* Entry: 108293e8c; end: 108293ed7;  */

void FUN_108293e8c(long *param_1)

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



/* Entry: 108293ed8; end: 108293ef7;  */

void FUN_108293ed8(void)

{
  func_0x000108294e7c();
  FUN_108293ef8();
  return;
}



/* Entry: 108293ef8; end: 108293f0b;  */

void FUN_108293ef8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x48;
      lVar2 = lVar1 + lVar2 * 0x48;
      do {
        lVar2 = lVar2 + -0x48;
        FUN_108293f6c(lVar2);
        lVar3 = lVar3 + 0x48;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108293f0c; end: 108293f6b;  */

void FUN_108293f0c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x48;
      lVar1 = param_2 + lVar1 * 0x48;
      do {
        lVar1 = lVar1 + -0x48;
        FUN_108293f6c(lVar1);
        lVar2 = lVar2 + 0x48;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108293f6c; end: 108293fbb;  */

void FUN_108293f6c(int *param_1)

{
  if (*param_1 != 0) {
    func_0x00010827a384(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 108293fbc; end: 108294007;  */

void FUN_108293fbc(long *param_1)

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



/* Entry: 108294008; end: 108294033;  */

long FUN_108294008(long param_1)

{
  FUN_108294034();
  FUN_1082941dc(param_1 + 8);
  return param_1;
}



/* Entry: 108294034; end: 108294063;  */

void FUN_108294034(long param_1)

{
  undefined1 uStack_21;
  
  FUN_108294064(param_1,&uStack_21);
  func_0x000108294114(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 108294064; end: 108294083;  */

void FUN_108294064(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108294084(param_1,&uStack_18);
  return;
}



/* Entry: 108294084; end: 1082940db;  */

void FUN_108294084(void)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  func_0x000108294fb0();
  lVar1 = 0;
  for (lVar2 = 0; lVar2 < *(int *)(unaff_x20 + 4); lVar2 = lVar2 + 1) {
    if (*(int *)(*(long *)(unaff_x20 + 8) + lVar1) != 0) {
      FUN_1082940dc();
    }
    lVar1 = lVar1 + 0x10;
  }
  return;
}



/* Entry: 1082940dc; end: 1082940e7;  */

void FUN_1082940dc(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
    __ZdlPv();
  }
  return;
}



/* Entry: 1082940e8; end: 108294193;  */

void FUN_1082940e8(undefined8 param_1,long param_2)

{
  while (param_2 != 0) {
    param_2 = *(long *)(param_2 + 8);
    __ZdlPv();
  }
  return;
}



/* Entry: 108294194; end: 1082941db;  */

void FUN_108294194(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 1082941dc; end: 1082941fb;  */

void FUN_1082941dc(void)

{
  func_0x000108294e7c();
  FUN_1082941fc();
  return;
}



/* Entry: 1082941fc; end: 10829420f;  */

void FUN_1082941fc(long *param_1)

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
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 108294210; end: 108294253;  */

long FUN_108294210(long param_1)

{
  FUN_1082a1308();
  FUN_108289364(param_1 + 0xd0);
  FUN_108289364(param_1 + 0x88);
  FUN_108289364(param_1 + 0x40);
  FUN_10840f740(param_1 + 0x10);
  return param_1;
}



/* Entry: 108294254; end: 10829425f;  */

void FUN_108294254(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    func_0x000108289f10(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108294260; end: 108294283;  */

void FUN_108294260(long param_1)

{
  func_0x000108294e28();
  if (param_1 != 0) {
    FUN_108294284();
  }
  return;
}



/* Entry: 108294284; end: 1082942b7;  */

void FUN_108294284(int *param_1)

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
      FUN_1082942b8();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1082942b8; end: 108294303;  */

long FUN_1082942b8(long param_1)

{
  FUN_108316384(param_1 + 0x28);
  FUN_10840f740(param_1 + 8);
  return param_1;
}



/* Entry: 108294304; end: 10829431b;  */

void FUN_108294304(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108294348(lVar1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10829431c; end: 108294347;  */

void FUN_10829431c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108294348(param_2 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108294348; end: 108294377;  */

long FUN_108294348(long param_1)

{
  FUN_108294378();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108294e34();
  }
  return param_1;
}



/* Entry: 108294378; end: 1082943af;  */

void FUN_108294378(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_1082943b0();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1082943b0; end: 1082943ef;  */

void FUN_1082943b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108294e28();
  if (param_1 != 0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108294e50();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1082943f0; end: 108294413;  */

void FUN_1082943f0(void)

{
  func_0x000108294e28();
  FUN_108294414();
  return;
}



/* Entry: 108294414; end: 10829443b;  */

void FUN_108294414(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000108294f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10829443c; end: 1082944e3;  */

long FUN_10829443c(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x000108294e34();
  }
  return param_1;
}



/* Entry: 1082944e4; end: 1082944fb;  */

void FUN_1082944e4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
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



/* Entry: 1082944fc; end: 1082945a3;  */

uint FUN_1082944fc(long param_1)

{
  undefined8 uVar1;
  uint extraout_w8;
  long unaff_x19;
  int *unaff_x20;
  uint uVar2;
  long lVar3;
  
  if ((*(uint *)(param_1 + 0x4c) >> 6 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x4c) >> 5 & 1) == 0) {
      func_0x000108294e1c();
      *(uint *)(param_1 + 0x4c) = extraout_w8 | 0x40;
      uVar2 = 1;
      for (lVar3 = 0; lVar3 < *(int *)(unaff_x19 + 0x60); lVar3 = lVar3 + 1) {
        uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x58) + lVar3 * 8);
        FUN_1082944fc(uVar1);
        uVar2 = (uint)uVar1 & uVar2;
      }
      *(uint *)(unaff_x19 + 0x4c) = *(uint *)(unaff_x19 + 0x4c) | *unaff_x20 << 7 | 0x20;
      *unaff_x20 = *unaff_x20 + 1;
      *(uint *)(unaff_x19 + 0x4c) = *(uint *)(unaff_x19 + 0x4c) & 0xffffffbf;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1082945a4; end: 1082945db;  */

void FUN_1082945a4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  plVar3 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar3 != (long *)0x0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000108294f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1082945dc; end: 108294627;  */

void FUN_1082945dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)param_2) {
    lVar1 = param_1;
    FUN_108294664();
    func_0x000108294e1c(param_1,lVar1,param_2);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x000108294e5c();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x000108294e34();
    }
    func_0x000108294df8();
    return;
  }
  return;
}



/* Entry: 108294628; end: 108294663;  */

void FUN_108294628(long param_1)

{
  long unaff_x19;
  
  func_0x000108294e1c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108294e5c();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108294e34();
  }
  func_0x000108294df8();
  return;
}



/* Entry: 108294664; end: 1082946d3;  */

void FUN_108294664(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_2 + 8) ^ 0x7fffffff) < param_3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x108294688;
    func_0x00010bdb1a68();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000108294f34(param_1,8);
  return;
}



/* Entry: 1082946d4; end: 10829470f;  */

void FUN_1082946d4(long param_1)

{
  long unaff_x19;
  
  func_0x000108294e1c();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108294e5c();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108294e34();
  }
  func_0x000108294df8();
  return;
}



/* Entry: 108294710; end: 108294753;  */

void FUN_108294710(undefined8 param_1,undefined8 param_2)

{
  func_0x000108294f34(param_1,8,param_2,param_2);
  return;
}



/* Entry: 108294754; end: 1082947a7;  */

void FUN_108294754(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1082947a8(param_1,iVar2);
  }
  FUN_1082948a0(param_1,&uStack_30);
  return;
}



/* Entry: 1082947a8; end: 10829489f;  */

void FUN_1082947a8(undefined4 *param_1,ulong param_2)

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
  uVar6 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar6 + 0x10);
  if (0xffffffffffffffef < uVar6 || SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x18;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar5 = uVar8 * 0x18;
    puVar3 = puVar3 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar5 = lVar5 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar5 != 0);
  }
  FUN_1082944e4(plVar7);
  for (lVar5 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar5 != 0;
      lVar5 = lVar5 + 0x18) {
    if (*(int *)(lStack_48 + lVar5) != 0) {
      FUN_1082948a0(param_1,lStack_48 + lVar5 + 8);
    }
  }
  func_0x000108293e6c(&lStack_48);
  return;
}



/* Entry: 1082948a0; end: 10829492f;  */

int * FUN_1082948a0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int extraout_w8;
  int extraout_w9;
  int extraout_w10;
  int iVar2;
  ulong extraout_x11;
  ulong uVar3;
  uint uVar4;
  ulong extraout_x12;
  ulong uVar5;
  int extraout_w13;
  int *piVar6;
  undefined8 uVar7;
  
  func_0x000108294ec8();
  uVar4 = (uint)extraout_x12;
  uVar3 = extraout_x11;
  uVar5 = extraout_x12;
  while( true ) {
    if (uVar4 == 0) {
      return (int *)0x0;
    }
    iVar2 = (int)uVar3;
    piVar6 = (int *)(*(long *)(param_1 + 2) + (long)iVar2 * (long)extraout_w13);
    if (*piVar6 == 0) break;
    if ((extraout_w9 == *piVar6) && (extraout_w8 == piVar6[2])) {
      *piVar6 = 0;
      uVar7 = *param_2;
      *(undefined8 *)(piVar6 + 4) = param_2[1];
      *(undefined8 *)(piVar6 + 2) = uVar7;
      *piVar6 = extraout_w9;
      return piVar6 + 2;
    }
    iVar1 = 0;
    if (iVar2 < 1) {
      iVar1 = extraout_w10;
    }
    uVar3 = (ulong)((iVar2 + iVar1) - 1);
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar4;
  }
  uVar7 = *param_2;
  *(undefined8 *)(piVar6 + 4) = param_2[1];
  *(undefined8 *)(piVar6 + 2) = uVar7;
  *piVar6 = extraout_w9;
  *param_1 = *param_1 + 1;
  return piVar6 + 2;
}



/* Entry: 108294930; end: 10829494f;  */

long FUN_108294930(long param_1)

{
  long lVar1;
  
  FUN_108294950();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 108294950; end: 1082949ab;  */

int * FUN_108294950(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w9;
  int extraout_w10;
  int iVar2;
  ulong extraout_x11;
  ulong uVar3;
  uint uVar4;
  ulong extraout_x12;
  ulong uVar5;
  int extraout_w13;
  int *piVar6;
  
  func_0x000108294ec8();
  uVar4 = (uint)extraout_x12;
  uVar3 = extraout_x11;
  uVar5 = extraout_x12;
  while( true ) {
    if (uVar4 == 0) {
      return (int *)0x0;
    }
    iVar2 = (int)uVar3;
    piVar6 = (int *)(*(long *)(param_1 + 8) + (long)iVar2 * (long)extraout_w13);
    if (*piVar6 == 0) break;
    if ((extraout_w9 == *piVar6) && (extraout_w8 == piVar6[2])) {
      return piVar6 + 2;
    }
    iVar1 = 0;
    if (iVar2 < 1) {
      iVar1 = extraout_w10;
    }
    uVar3 = (ulong)((iVar2 + iVar1) - 1);
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar4;
  }
  return (int *)0x0;
}



/* Entry: 1082949ac; end: 108294b37;  */

undefined4 FUN_1082949ac(int *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar9;
  
  uVar12 = 0;
  uVar9 = *param_2;
  uVar6 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar4 = param_1[1];
  uVar8 = uVar6 & uVar4 - 1;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  do {
    if (uVar2 == uVar12) {
      uVar7 = 0;
      uVar12 = uVar2;
LAB_108294b24:
      uVar3 = 0;
      if ((int)uVar12 < (int)uVar4) {
        uVar3 = uVar7;
      }
      return uVar3;
    }
    lVar11 = *(long *)(param_1 + 2);
    puVar14 = (uint *)(lVar11 + (long)(int)uVar8 * 0x18);
    uVar5 = *puVar14;
    if (uVar5 == 0) {
      uVar7 = 0;
      goto LAB_108294b24;
    }
    if ((uVar6 == uVar5) && (uVar9 == puVar14[2])) {
      *param_1 = *param_1 + -1;
      uVar6 = uVar8;
      while( true ) {
        uVar9 = uVar6;
        uVar6 = uVar8 - 1;
        bVar1 = (int)uVar8 < 1;
        uVar8 = uVar6;
        if (bVar1) {
          uVar8 = param_1[1] + uVar6;
        }
        puVar14 = (uint *)(lVar11 + (long)(int)uVar8 * 0x18);
        uVar2 = *puVar14;
        if (uVar2 == 0) break;
        uVar5 = param_1[1] - 1U & uVar2;
        uVar6 = uVar9;
        if ((int)uVar5 < (int)uVar8 || (int)uVar9 <= (int)uVar5) {
          if ((((int)uVar8 <= (int)uVar9) || ((int)uVar9 <= (int)uVar5 && (int)uVar5 < (int)uVar8))
             && (uVar6 = uVar8, uVar9 != uVar8)) {
            puVar13 = (uint *)(lVar11 + (long)(int)uVar9 * 0x18);
            if (*puVar13 == 0) {
              uVar15 = *(undefined8 *)(puVar14 + 2);
              *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar14 + 4);
              *(undefined8 *)(puVar13 + 2) = uVar15;
              lVar11 = *(long *)(param_1 + 2);
            }
            else {
              puVar13[2] = puVar14[2];
              *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(puVar14 + 4);
            }
            *puVar13 = uVar2;
          }
        }
      }
      piVar10 = (int *)(lVar11 + (long)(int)uVar9 * 0x18);
      if (*piVar10 != 0) {
        *piVar10 = 0;
      }
      uVar6 = param_1[1];
      if ((4 < (int)uVar6) && (*param_1 * 4 <= (int)uVar6)) {
        FUN_1082947a8(param_1,uVar6 >> 1);
      }
      uVar7 = 1;
      goto LAB_108294b24;
    }
    uVar5 = 0;
    if ((int)uVar8 < 1) {
      uVar5 = uVar4;
    }
    uVar8 = (uVar8 + uVar5) - 1;
    uVar12 = uVar12 + 1;
  } while( true );
}



/* Entry: 108294b38; end: 108294b77;  */

void FUN_108294b38(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108294e28();
  if (param_1 != 0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108294e50();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108294b78; end: 108294baf;  */

void FUN_108294b78(undefined8 *param_1)

{
  FUN_1082a8654();
  *param_1 = &PTR_FUN_110a36d10;
  param_1[0x1b] = param_1 + 0x11;
  param_1[0x1c] = 0x800000000;
  return;
}



/* Entry: 108294bb0; end: 108294bef;  */

void FUN_108294bb0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108294e28();
  if (param_1 != 0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108294e50();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108294bf0; end: 108294c0f;  */

void FUN_108294bf0(void)

{
  func_0x000108294e7c();
  FUN_108294c10();
  return;
}



/* Entry: 108294c10; end: 108294c23;  */

void FUN_108294c10(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -8;
      lVar2 = lVar1 + lVar2 * 8;
      do {
        lVar2 = lVar2 + -8;
        FUN_1082837a8(lVar2);
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108294c24; end: 108294c6f;  */

void FUN_108294c24(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -8;
      lVar1 = param_2 + lVar1 * 8;
      do {
        lVar1 = lVar1 + -8;
        FUN_1082837a8(lVar1);
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108294c70; end: 108294caf;  */

void FUN_108294c70(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108294e28();
  if (param_1 != 0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108294e50();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108294cb0; end: 108294d27;  */

void FUN_108294cb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  FUN_1082a8654();
  *param_1 = &PTR_FUN_110a36e50;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[0x11] = uVar1;
  uVar1 = *param_3;
  param_1[0x13] = param_3[1];
  param_1[0x12] = uVar1;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)((long)param_1 + 0xa4) = param_5;
  uVar1 = *param_6;
  *param_6 = 0;
  param_1[0x15] = uVar1;
  param_1[0x16] = param_7;
  return;
}



/* Entry: 108294d28; end: 108294d67;  */

void FUN_108294d28(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108294e28();
  if (param_1 != 0) {
    do {
      func_0x000108294ff0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108294e50();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108294d68; end: 10829501f;  */

undefined8 * FUN_108294d68(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 != (long *)0x0) {
    plVar1 = in_stack_00000008 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*in_stack_00000008 + 0x10))();
    }
  }
  return &stack0x00000008;
}



/* Entry: 108295020; end: 1082950ab;  */

void FUN_108295020(long param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  long unaff_x19;
  
  func_0x000108295b44();
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_7;
  FUN_108295728(param_1 + 0x28,0x200);
  *(undefined8 *)(unaff_x19 + 0x268) = 0;
  *(undefined8 *)(unaff_x19 + 0x260) = 0;
  *(undefined8 *)(unaff_x19 + 600) = 0;
  FUN_1082950ac();
  return;
}



/* Entry: 1082950ac; end: 10829522b;  */

long FUN_1082950ac(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined ***pppuStack_b0;
  undefined1 auStack_a8 [88];
  char cStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010840f9b4(param_1 + 0x228);
  uVar5 = NEON_ushl(0x100000001,
                    CONCAT44(0x20 - LZCOUNT((int)((ulong)param_2 >> 0x20) + -1),
                             0x20 - LZCOUNT((int)param_2 + -1)),4);
  uVar5 = NEON_smin(CONCAT44(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x10)),uVar5,
                    4);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  ppuStack_c8 = &PTR_DAT_110a35548;
  pppuStack_b0 = &ppuStack_c8;
  cVar1 = *(char *)(param_1 + 0xc);
  lStack_c0 = param_1;
  FUN_10828a818(auStack_a8,param_3,*(undefined4 *)(param_1 + 8),1);
  if (cVar1 == '\0') {
    iVar4 = 1;
  }
  else {
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,auStack_a8);
    iVar4 = (int)plVar2;
    if (*(int *)((long)param_3 + 0x44) <= (int)plVar2) {
      iVar4 = *(int *)((long)param_3 + 0x44);
    }
  }
  FUN_1082a5a7c(&uStack_d0,&ppuStack_c8,auStack_a8,1,iVar4,0,param_3,0);
  if (cStack_50 == '\x01') {
    func_0x000108295ab0();
  }
  FUN_108287b1c(param_1 + 0x260,uStack_d0);
  FUN_1082956f8(0);
  FUN_10827683c(&ppuStack_c8);
  param_1 = param_1 + 0x268;
  func_0x000108295774(param_1,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar3 = param_1;
    func_0x000108295aa8();
    func_0x000108295b44();
    FUN_108283764(lVar3 + 0x268);
    func_0x00010827aaa0(param_1 + 0x260);
    FUN_10840f740(param_1 + 0x228);
    return param_1;
  }
  return param_1;
}



/* Entry: 10829522c; end: 10829525f;  */

void FUN_10829522c(long param_1)

{
  long unaff_x19;
  
  func_0x000108295b44();
  FUN_108283764(param_1 + 0x268);
  func_0x00010827aaa0(unaff_x19 + 0x260);
  FUN_10840f740(unaff_x19 + 0x228);
  return;
}



/* Entry: 108295260; end: 108295263;  */

void FUN_108295260(long param_1)

{
  long unaff_x19;
  
  func_0x000108295b44();
  FUN_108283764(param_1 + 0x268);
  func_0x00010827aaa0(unaff_x19 + 0x260);
  FUN_10840f740(unaff_x19 + 0x228);
  return;
}



/* Entry: 108295264; end: 108295277;  */

void FUN_108295264(void)

{
  FUN_10829522c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108295278; end: 10829537b;  */

void FUN_108295278(long param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x228);
    FUN_10840f8d0(puVar3,0x39,8);
    iVar1 = *(int *)(param_1 + 0x230);
    *(undefined8 **)(param_1 + 0x230) = puVar3 + 6;
    puVar3[6] = FUN_108295908;
    func_0x000108295a84((int)puVar3 - iVar1);
    FUN_10829592c();
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x228);
    FUN_10840f8d0(puVar3,0xa1,8);
    iVar1 = *(int *)(param_1 + 0x230);
    *(undefined8 **)(param_1 + 0x230) = puVar3 + 0x13;
    puVar3[0x13] = 0x108295a34;
    puVar2 = puVar3;
    func_0x000108295a84((int)puVar3 - iVar1);
    *(int *)(puVar2 + 1) = param_5 - param_3;
    *(int *)((long)puVar2 + 0xc) = param_6 - param_4;
    *puVar2 = &PTR_DAT_110a3c310;
    _bzero(puVar2 + 2,0x88);
  }
  puVar2 = (undefined8 *)(param_1 + 0x228);
  func_0x0001081865e0(puVar2,0x18,8);
  *(undefined8 **)(param_1 + 0x230) = puVar2 + 3;
  *puVar2 = param_2;
  puVar2[1] = puVar3;
  *(int *)(puVar2 + 2) = param_3;
  *(int *)((long)puVar2 + 0x14) = param_4;
  return;
}



/* Entry: 10829537c; end: 1082953c3;  */

void FUN_10829537c(void)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  undefined8 extraout_x9;
  int *extraout_x10;
  
  func_0x000108295ac4();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x10,0x10);
    if (bVar2) {
      *extraout_x10 = *extraout_x10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x000108295a44();
  func_0x00010828a9ac(extraout_x9,extraout_x8 + 0x20);
  func_0x000108295a6c();
  return;
}



/* Entry: 1082953c4; end: 108295413;  */

void FUN_1082953c4(void)

{
  char cVar1;
  bool bVar2;
  long extraout_x8;
  long *extraout_x9;
  int *extraout_x10;
  
  func_0x000108295ac4();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x10,0x10);
    if (bVar2) {
      *extraout_x10 = *extraout_x10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  func_0x000108295a44();
  (**(code **)(*extraout_x9 + 0x70))(extraout_x9,extraout_x8 + 0x20);
  func_0x000108295a6c();
  return;
}



/* Entry: 108295414; end: 108295473;  */

void FUN_108295414(long param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  FUN_108295474();
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) <= param_2 + *param_4) {
      iVar2 = param_2 + *param_4;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x24) <= param_3 + param_4[1]) {
      iVar1 = param_3 + param_4[1];
    }
    *(int *)(param_1 + 0x20) = iVar2;
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}



/* Entry: 108295474; end: 1082955df;  */

bool FUN_108295474(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  long *plVar13;
  
  iVar12 = param_3;
  if (param_3 <= param_2) {
    iVar12 = param_2;
  }
  if (*(int *)(param_1 + 0x10) < iVar12) {
    return false;
  }
  iVar12 = param_2;
  if (param_3 <= param_2) {
    iVar12 = param_3;
  }
  if (iVar12 < 1) {
    *param_4 = 0;
  }
  else {
    if (*(long *)(param_1 + 600) == 0) {
      iVar12 = *(int *)(param_1 + 0x18);
      cVar4 = SBORROW4(param_2,iVar12);
      cVar5 = param_2 - iVar12 < 0;
      if (iVar12 < param_2) {
        func_0x000108295af4();
        uVar2 = extraout_w8;
        if (cVar5 == cVar4) {
          uVar2 = extraout_w9;
        }
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      iVar12 = *(int *)(param_1 + 0x1c);
      cVar4 = SBORROW4(param_3,iVar12);
      cVar5 = param_3 - iVar12 < 0;
      if (iVar12 < param_3) {
        func_0x000108295af4();
        uVar2 = extraout_w8_00;
        if (cVar5 == cVar4) {
          uVar2 = extraout_w9_00;
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      lVar6 = param_1;
      FUN_108295278(param_1,0,0,0);
      *(long *)(param_1 + 600) = lVar6;
    }
    plVar13 = (long *)(param_1 + 600);
    do {
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) {
        do {
          iVar12 = *(int *)(param_1 + 0x10);
          iVar3 = *(int *)(param_1 + 0x18);
          iVar10 = *(int *)(param_1 + 0x1c);
          bVar1 = iVar3 < iVar12 || iVar10 < iVar12;
          if (iVar3 >= iVar12 && iVar10 >= iVar12) {
            return bVar1;
          }
          if (iVar3 < iVar10) {
            if (iVar3 * 2 <= iVar12) {
              iVar12 = iVar3 << 1;
            }
            *(int *)(param_1 + 0x18) = iVar12;
            uVar8 = *(undefined8 *)(param_1 + 600);
            iVar11 = iVar12;
            iVar9 = iVar3;
            iVar12 = iVar10;
            iVar10 = 0;
          }
          else {
            if (iVar10 * 2 <= iVar12) {
              iVar12 = iVar10 << 1;
            }
            *(int *)(param_1 + 0x1c) = iVar12;
            uVar8 = *(undefined8 *)(param_1 + 600);
            iVar9 = 0;
            iVar11 = iVar3;
          }
          lVar6 = param_1;
          FUN_108295278(param_1,uVar8,iVar9,iVar10,iVar11,iVar12);
          *(long *)(param_1 + 600) = lVar6;
          func_0x000108295ae4();
        } while ((int)lVar6 == 0);
        return bVar1;
      }
      plVar7 = plVar13;
      func_0x000108295ae4();
    } while (((ulong)plVar7 & 1) == 0);
  }
  return true;
}



/* Entry: 1082955e0; end: 1082956f7;  */

void FUN_1082955e0(long param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  iVar2 = (int)plVar4[1];
  iVar3 = *(int *)((long)plVar4 + 0xc);
  iVar1 = iVar2;
  if (param_2 + 1 <= iVar2) {
    iVar1 = param_2 + 1;
  }
  if (iVar2 <= param_2) {
    iVar1 = param_2;
  }
  iVar2 = iVar3;
  if (param_3 + 1 <= iVar3) {
    iVar2 = param_3 + 1;
  }
  if (iVar3 <= param_3) {
    iVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,iVar1,iVar2);
  if ((int)plVar4 != 0) {
    *param_4 = *param_4 + *(short *)(param_1 + 0x10);
    param_4[1] = param_4[1] + *(short *)(param_1 + 0x14);
  }
  return;
}



/* Entry: 1082956f8; end: 108295727;  */

void FUN_1082956f8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108295b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108295728; end: 108295757;  */

long FUN_108295728(long param_1,undefined8 param_2)

{
  FUN_10840f97c(param_1 + 0x200,param_1,0x200,param_2);
  return param_1;
}



/* Entry: 108295758; end: 10829578b;  */

void FUN_108295758(long *param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  plVar1 = param_1 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (param_1[0x10] == 0) {
    if ((*(int *)((long)param_1 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(param_1[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 10829578c; end: 1082957bb;  */

void FUN_10829578c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110a35548;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082957bc; end: 1082957df;  */

void FUN_1082957bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a35548;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082957e0; end: 1082958c3;  */

void FUN_1082957e0(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar6;
  long lStack_38;
  
  lVar5 = *(long *)(param_2 + 8);
  if (*(long *)(lVar5 + 0x268) == 0) {
    uVar6 = *param_3;
    func_0x000108295b38(*(undefined8 *)(lVar5 + 0x260));
    lVar4 = extraout_x8 + extraout_x9;
    FUN_1082b1dfc(lVar4);
    FUN_1082aebe0(&lStack_38,uVar6,lVar4,*(undefined8 *)(param_4 + 0x18),
                  *(undefined4 *)(param_4 + 0x20),*(undefined1 *)(param_4 + 0xc),
                  *(undefined4 *)(param_4 + 0x10),*(undefined1 *)(param_4 + 0xd),
                  *(undefined1 *)(param_4 + 0x25),*(undefined1 *)(param_4 + 0x24));
    lVar4 = lStack_38;
    lStack_38 = 0;
    func_0x000108295774((long *)(lVar5 + 0x268),lVar4);
    func_0x000108295b24();
    lVar4 = 0;
    if (*(long *)(lVar5 + 0x268) == 0) goto LAB_108295890;
  }
  func_0x000108295b38();
  piVar1 = (int *)(extraout_x8_00 + extraout_x9_00 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    lVar4 = extraout_x8_00;
  } while (cVar2 != '\0');
LAB_108295890:
  lStack_38 = lVar4;
  FUN_1082b1840(param_1,&lStack_38);
  func_0x000108295b24();
  return;
}



/* Entry: 1082958c4; end: 1082958fb;  */

long FUN_1082958c4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a355a8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082958fc; end: 108295907;  */

undefined ** FUN_1082958fc(void)

{
  return &PTR_DAT_110a355a8;
}



/* Entry: 108295908; end: 10829592b;  */

long FUN_108295908(long param_1)

{
  FUN_10840f118(param_1 + -0x29);
  return param_1 + -0x39;
}



/* Entry: 10829592c; end: 10829597f;  */

undefined8 * FUN_10829592c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *param_1 = &PTR_FUN_110a3c370;
  *(undefined4 *)(param_1 + 2) = 0xc;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_108295980();
  return param_1;
}



/* Entry: 108295980; end: 1082959b7;  */

void FUN_108295980(long param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  *(undefined8 *)(param_1 + 0x24) = 0;
  uStack_20 = 0;
  uStack_18 = *(undefined4 *)(param_1 + 8);
  FUN_1082959b8(param_1 + 0x10,&uStack_20);
  return;
}



/* Entry: 1082959b8; end: 108295a33;  */

void FUN_1082959b8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000108295a04();
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 0xc;
    uVar3 = *param_2;
    *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + -0xc) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108295a04);
  (*pcVar1)();
}


