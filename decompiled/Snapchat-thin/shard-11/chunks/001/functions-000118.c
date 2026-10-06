/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10821d208; end: 10821d303;  */

void FUN_10821d208(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uStack_28 = 0;
  if ((param_2 != 0) &&
     (lVar1 = param_2, FUN_108220278(param_2,&uStack_21,&uStack_28), (int)lVar1 != 0)) {
    func_0x00010813fad0(&lStack_30,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    uStack_40 = 0;
    if (lStack_30 != 0) {
      do {
        func_0x00010821dd44();
        uStack_40 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    FUN_108220340(&uStack_38,&uStack_40,uStack_21,uStack_28,1);
    func_0x0001078bddf8(&uStack_40);
    lStack_48 = lStack_30;
    uStack_50 = uStack_38;
    uStack_38 = 0;
    lStack_30 = 0;
    FUN_10821d304(param_1,&lStack_48,&uStack_50,uStack_21,1);
    FUN_10821dc90(&uStack_50);
    func_0x0001078bddf8(&lStack_48);
    FUN_10821dc90(&uStack_38);
    func_0x00010821dd70();
  }
  return;
}



/* Entry: 10821d304; end: 10821d80f;  */

void FUN_10821d304(ulong *param_1,long *param_2,long *param_3,ulong param_4,int param_5)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  
  lVar8 = *param_3;
  if (lVar8 != 0) {
    puVar2 = param_1;
    for (uVar5 = 0; uVar5 < *(ushort *)(lVar8 + 0x10); uVar5 = uVar5 + 1) {
      func_0x00010821dd18();
      FUN_10822044c();
      iVar1 = (int)puVar2;
      if (iVar1 == 0xa003) {
        uStack_b0 = (ulong)uStack_b0._2_6_ << 0x10;
        if ((param_1[6] & 1) == 0) {
          func_0x00010821dd0c();
          if ((int)puVar2 == 0) {
            uStack_a8 = uStack_a8 & 0xffffffff00000000;
            if (((param_1[6] & 1) == 0) && (func_0x00010821dd2c(), (int)puVar2 != 0)) {
              *(undefined4 *)((long)param_1 + 0x2c) = (undefined4)uStack_a8;
              *(undefined1 *)(param_1 + 6) = 1;
            }
          }
          else {
            if ((param_1[6] & 1) == 0) {
              *(undefined1 *)(param_1 + 6) = 1;
            }
            *(uint *)((long)param_1 + 0x2c) = (uint)(ushort)uStack_b0;
          }
        }
      }
      else if (iVar1 == 0x11a) {
        uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
        if ((param_1[3] & 1) == 0) {
          func_0x00010821dd18();
          func_0x00010821dc78();
          if ((int)puVar2 != 0) {
            *(undefined4 *)((long)param_1 + 0x14) = (undefined4)uStack_a8;
            *(undefined1 *)(param_1 + 3) = 1;
          }
        }
      }
      else if (iVar1 == 0x11b) {
        uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
        if ((param_1[4] & 1) == 0) {
          func_0x00010821dd18();
          func_0x00010821dc78();
          if ((int)puVar2 != 0) {
            *(undefined4 *)((long)param_1 + 0x1c) = (undefined4)uStack_a8;
            *(undefined1 *)(param_1 + 4) = 1;
          }
        }
      }
      else if (iVar1 == 0x128) {
        uStack_a8 = (ulong)uStack_a8._2_6_ << 0x10;
        if (((*(byte *)((long)param_1 + 0x12) & 1) == 0) &&
           (func_0x00010821dd0c(), (int)puVar2 != 0)) {
          *(ushort *)(param_1 + 2) = (ushort)uStack_a8;
          *(undefined1 *)((long)param_1 + 0x12) = 1;
        }
      }
      else if (iVar1 == 0x8769) {
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        if (param_5 != 0) {
          func_0x00010821dd18();
          func_0x00010821dc6c();
          if ((int)puVar2 != 0) {
            uVar3 = 0;
            if (*param_2 != 0) {
              do {
                func_0x00010821dd44();
                uVar3 = extraout_x8;
              } while (extraout_w10 != 0);
            }
            uStack_d0 = uVar3;
            FUN_108220340(&uStack_a8,&uStack_d0,param_4,uStack_b0 & 0xffffffff,1);
            func_0x00010821dd70();
            uVar9 = 0;
            if (*param_2 != 0) {
              do {
                func_0x00010821dd44();
                uVar9 = extraout_x8_00;
              } while (extraout_w10_00 != 0);
            }
            uStack_e0 = uStack_a8;
            uStack_a8 = 0;
            uStack_d8 = uVar9;
            FUN_10821d304(param_1,&uStack_d8,&uStack_e0,param_4,0);
            FUN_10821dc90(&uStack_e0);
            puVar2 = &uStack_d8;
            func_0x0001078bddf8();
            func_0x00010821dd68();
          }
        }
      }
      else if (iVar1 == 0x927c) {
        if ((*(byte *)((long)param_1 + 0xc) & 1) == 0) {
          func_0x00010821dd18(&uStack_c0);
          FUN_1082205c0();
          uVar9 = uStack_c0;
          if (uStack_c0 != 0) {
            uStack_c8 = uStack_c0;
            uStack_c0 = 0;
            if (*(ulong *)(uVar9 + 0x20) < 0xe) {
LAB_10821d53c:
              uVar6 = 0;
              fVar12 = 0.0;
            }
            else {
              uVar3 = *(undefined8 *)(uVar9 + 0x18);
              _memcmp(uVar3,&UNK_10df0a8ec,0xe);
              if ((int)uVar3 != 0) goto LAB_10821d53c;
              uStack_c8 = 0;
              uStack_b0 = uVar9;
              FUN_108220340(&uStack_a8,&uStack_b0,0,0xe,0);
              func_0x0001078bddf8(&uStack_b0);
              if (uStack_a8 == 0) {
                fVar12 = 0.0;
                uVar6 = 0;
              }
              else {
                uVar9 = 0;
                uVar10 = 0;
                uStack_b8 = 0;
                for (uVar7 = 0; uVar7 < *(ushort *)(uStack_a8 + 0x10); uVar7 = uVar7 + 1) {
                  uVar4 = uStack_a8;
                  FUN_10822044c(uStack_a8,uVar7);
                  if ((int)uVar4 == 0x30) {
                    if ((uVar10 & 1) == 0) {
                      func_0x00010821dd5c();
                      uVar10 = uVar4;
                    }
                    else {
                      uVar10 = 1;
                    }
                  }
                  else if ((int)uVar4 == 0x21) {
                    if ((uVar9 & 1) == 0) {
                      func_0x00010821dd5c();
                      uVar9 = uVar4;
                    }
                    else {
                      uVar9 = 1;
                    }
                  }
                }
                if ((uVar9 & 1) == 0) {
                  uVar6 = 0;
                  fVar12 = 0.0;
                  param_4 = param_4 & 0xffffffff;
                }
                else {
                  param_4 = param_4 & 0xffffffff;
                  if (1.0 <= uStack_b8._4_4_) {
                    if ((float)uStack_b8 <= 0.01) {
                      fVar11 = (float)uStack_b8 * -70.0 + 3.0;
                    }
                    else {
                      fVar11 = (float)uStack_b8 * -0.303 + 2.303;
                    }
                  }
                  else if ((float)uStack_b8 <= 0.01) {
                    fVar11 = (float)uStack_b8 * -20.0 + 1.8;
                  }
                  else {
                    fVar11 = (float)uStack_b8 * -0.101 + 1.601;
                  }
                  fVar12 = 0.0;
                  if (0.0 <= fVar11) {
                    fVar12 = fVar11;
                  }
                  _exp2f();
                  uVar6 = 1;
                }
              }
              func_0x00010821dd68();
            }
            *(undefined1 *)((long)param_1 + 0xc) = uVar6;
            *(float *)(param_1 + 1) = fVar12;
            func_0x0001078bddf8(&uStack_c8);
          }
          puVar2 = &uStack_c0;
          func_0x0001078bddf8();
        }
      }
      else if (iVar1 == 0xa002) {
        uStack_b0 = (ulong)uStack_b0._2_6_ << 0x10;
        if ((param_1[5] & 1) == 0) {
          func_0x00010821dd0c();
          if ((int)puVar2 == 0) {
            uStack_a8 = uStack_a8 & 0xffffffff00000000;
            if (((param_1[5] & 1) == 0) && (func_0x00010821dd2c(), (int)puVar2 != 0)) {
              *(undefined4 *)((long)param_1 + 0x24) = (undefined4)uStack_a8;
              *(undefined1 *)(param_1 + 5) = 1;
            }
          }
          else {
            if ((param_1[5] & 1) == 0) {
              *(undefined1 *)(param_1 + 5) = 1;
            }
            *(uint *)((long)param_1 + 0x24) = (uint)(ushort)uStack_b0;
          }
        }
      }
      else if (((iVar1 == 0x112) &&
               (uStack_a8 = (ulong)uStack_a8._2_6_ << 0x10, (*param_1 & 0x100000000) == 0)) &&
              (func_0x00010821dd0c(), (int)puVar2 != 0)) {
        if ((ushort)uStack_a8 - 1 < 8) {
          *(uint *)param_1 = (uint)(ushort)uStack_a8;
          *(undefined1 *)((long)param_1 + 4) = 1;
        }
      }
      lVar8 = *param_3;
    }
  }
  return;
}



/* Entry: 10821d810; end: 10821d973;  */

uint FUN_10821d810(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  long *param_5,long *param_6)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  plVar2 = param_5;
  FUN_10821d974(param_5,param_1);
  plVar3 = param_5;
  FUN_10821d974(param_5,param_2);
  uStack_54 = 0x1000000;
  plVar4 = param_5;
  func_0x00010821dd24(*(undefined8 *)(*param_5 + 0x10),param_5,&uStack_54);
  uVar1 = (uint)plVar2 & (uint)plVar3 & (uint)plVar4;
  iVar6 = (int)param_1;
  if (iVar6 - 0x11aU < 2) {
    func_0x00010821d9a8(param_5,*param_4);
    *param_4 = *param_4 + 8;
    plVar2 = param_6;
    func_0x00010821d9a8(param_6,param_3);
    uStack_58 = 0x1000000;
    func_0x00010821dd24(*(undefined8 *)(*param_6 + 0x10),param_6,&uStack_58);
    uVar5 = (uint)param_5 & (uint)plVar2 & (uint)param_6;
  }
  else {
    if (iVar6 - 0xa002U < 2) {
LAB_10821d8f0:
      func_0x00010821d9a8(param_5,param_3);
      return uVar1 & (uint)param_5;
    }
    if (iVar6 != 0x112) {
      if (iVar6 == 0x8769) goto LAB_10821d8f0;
      if (iVar6 != 0x128) {
        return 0;
      }
    }
    plVar2 = param_5;
    FUN_10821d974(param_5,(uint)param_3 & 0xffff);
    uStack_5a = 0;
    (**(code **)(*param_5 + 0x10))(param_5,&uStack_5a,2);
    uVar5 = (uint)plVar2 & (uint)param_5;
  }
  return uVar1 & uVar5;
}



/* Entry: 10821d974; end: 10821d9d7;  */

void FUN_10821d974(long *param_1,uint param_2)

{
  ushort uStack_12;
  
  uStack_12 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_12,2);
  return;
}



/* Entry: 10821d9d8; end: 10821dc5f;  */

void FUN_10821d9d8(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_1 = 0;
    return;
  }
  ppuStack_58 = &PTR_FUN_110a403f8;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_78 = &PTR_FUN_110a403f8;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  pppuVar3 = &ppuStack_58;
  FUN_1083a034c(pppuVar3,&UNK_10df0a8e8,4);
  if (((ulong)pppuVar3 & 1) != 0) {
    uStack_34 = 0x8000000;
    func_0x00010821dcfc(ppuStack_58[2]);
    if (((ulong)pppuVar3 & 1) != 0) {
      iVar1 = (uint)*(byte *)(param_2 + 0x30) + (uint)*(byte *)(param_2 + 0x28);
      iVar2 = (int)&ppuStack_58;
      FUN_10821d974();
      if (*(char *)(param_2 + 4) == '\x01') {
        func_0x00010821dcec();
        uVar4 = 0x112;
        FUN_10821d810(0x112,3);
        iVar2 = (int)uVar4;
        if ((uVar4 & 1) == 0) goto LAB_10821dc1c;
      }
      if (*(char *)(param_2 + 0x12) == '\x01') {
        func_0x00010754d110();
        func_0x00010821dcec();
        iVar2 = 0x128;
        FUN_10821d810(0x128,3);
        if (iVar2 == 0) goto LAB_10821dc1c;
      }
      if (*(char *)(param_2 + 0x18) == '\x01') {
        func_0x00010730ebcc();
        func_0x00010821dcec();
        iVar2 = 0x11a;
        FUN_10821d810(0x11a,5);
        if (iVar2 == 0) goto LAB_10821dc1c;
      }
      if (*(char *)(param_2 + 0x20) == '\x01') {
        func_0x00010730ebcc();
        func_0x00010821dcec();
        iVar2 = 0x11b;
        FUN_10821d810(0x11b,5);
        if (iVar2 == 0) goto LAB_10821dc1c;
      }
      if (iVar1 != 0) {
        func_0x00010821dcec();
        iVar2 = 0x8769;
        func_0x00010821dd54();
        if (iVar2 == 0) goto LAB_10821dc1c;
      }
      uStack_34 = 0;
      func_0x00010821dcfc(ppuStack_58[2]);
      if (iVar2 != 0) {
        if (iVar1 == 0) {
LAB_10821dbfc:
          pppuVar3 = &ppuStack_78;
          FUN_1083a04a4(pppuVar3,&ppuStack_58);
          if ((int)pppuVar3 != 0) {
            FUN_1083a05b4(param_1,&ppuStack_58);
            goto LAB_10821dc20;
          }
        }
        else {
          pppuVar3 = &ppuStack_58;
          FUN_10821d974(pppuVar3,iVar1);
          iVar2 = (int)pppuVar3;
          if (iVar2 != 0) {
            if (*(char *)(param_2 + 0x28) == '\x01') {
              func_0x000107312278();
              func_0x00010821dcec();
              iVar2 = 0xa002;
              func_0x00010821dd54();
              if (iVar2 == 0) goto LAB_10821dc1c;
            }
            if (*(char *)(param_2 + 0x30) == '\x01') {
              func_0x000107312278();
              func_0x00010821dcec();
              iVar2 = 0xa003;
              func_0x00010821dd54();
              if (iVar2 == 0) goto LAB_10821dc1c;
            }
            uStack_34 = 0;
            func_0x00010821dcfc(ppuStack_58[2]);
            if (iVar2 != 0) goto LAB_10821dbfc;
          }
        }
      }
    }
  }
LAB_10821dc1c:
  *param_1 = 0;
LAB_10821dc20:
  FUN_1083a02a4(&ppuStack_78);
  FUN_1083a02a4(&ppuStack_58);
  return;
}



/* Entry: 10821dc60; end: 10821dc8f;  */

bool FUN_10821dc60(long param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  undefined1 *puStack_60;
  int iStack_58;
  short sStack_52;
  
  sStack_52 = 0;
  iStack_58 = 0;
  puStack_60 = (undefined1 *)0x0;
  lVar4 = param_1;
  FUN_108220484(param_1,param_2,0,&sStack_52,&iStack_58,&puStack_60,0);
  bVar3 = false;
  if (((int)lVar4 != 0) && (sStack_52 == 3 && iStack_58 == 1)) {
    for (lVar4 = 1; bVar3 = lVar4 == 0, lVar4 != 0; lVar4 = lVar4 + -1) {
      if (*(char *)(param_1 + 8) == '\0') {
        puVar1 = puStack_60;
        puVar2 = puStack_60 + 1;
      }
      else {
        puVar1 = puStack_60 + 1;
        puVar2 = puStack_60;
      }
      *param_3 = CONCAT11(*puVar1,*puVar2);
      puStack_60 = puStack_60 + 4;
      param_3 = param_3 + 1;
    }
  }
  return bVar3;
}



/* Entry: 10821dc90; end: 10821dcb7;  */

undefined8 FUN_10821dc90(undefined8 param_1)

{
  FUN_10821dcb8(param_1,0);
  return param_1;
}



/* Entry: 10821dcb8; end: 10821dccf;  */

void FUN_10821dcb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078bddf8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10821dcd0; end: 10821dceb;  */

void FUN_10821dcd0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078bddf8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10821dcec; end: 10821dd7f;  */

void FUN_10821dcec(void)

{
  return;
}



/* Entry: 10821dd80; end: 10821e0a7;  */

long * FUN_10821dd80(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  float *pfVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  long alStack_158 [4];
  undefined2 uStack_132;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  ulong uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  float fStack_ec;
  float fStack_e8;
  byte bStack_e1;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float afStack_c0 [4];
  ulong uStack_b0;
  undefined4 uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    plVar10 = (long *)0x0;
    plVar8 = (long *)0x0;
  }
  else {
    FUN_1083a00b0(&plStack_100,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    plVar8 = plStack_100;
    uStack_a0 = uStack_a0 & 0xffffffffffff0000;
    plVar10 = plStack_100;
    func_0x00010821e3ac(plStack_100,&uStack_a0);
    uVar7 = 0;
    if ((short)uStack_a0 == 0) {
      uVar7 = (uint)plVar10;
    }
    if ((uVar7 & 1) != 0) {
      uStack_b0 = uStack_b0 & 0xffffffffffff0000;
      plVar10 = plVar8;
      func_0x00010821e3ac(plVar8,&uStack_b0);
      if ((int)plVar10 != 0) {
        bStack_e1 = 0;
        (**(code **)(*plVar8 + 0x10))(plVar8,&bStack_e1,1);
        bVar5 = bStack_e1;
        if (plVar8 == (long *)0x1) {
          fStack_e8 = 0.0;
          func_0x00010821e590();
          if ((int)plVar8 != 0) {
            fStack_ec = 0.0;
            func_0x00010821e590();
            if ((int)plVar8 != 0) {
              lVar13 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              afStack_c0[2] = 0.0;
              afStack_c0[0] = 0.0;
              afStack_c0[1] = 0.0;
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_108 = 3;
              if (-1 < (char)bVar5) {
                uStack_108 = 1;
              }
              lVar9 = uStack_108 * 4;
              uStack_d8 = 0;
              uStack_e0 = 0;
LAB_10821dea4:
              lVar13 = lVar13 + 4;
              bVar6 = lVar9 + 4 == lVar13;
              plVar10 = (long *)(ulong)bVar6;
              if (!bVar6) goto code_r0x00010821deb4;
              auVar20 = NEON_fmov(0x3f800000,4);
              param_2[1] = auVar20._8_8_;
              *param_2 = auVar20._0_8_;
              param_2[3] = 0x3f80000040000000;
              param_2[2] = 0x4000000040000000;
              pfVar11 = (float *)(param_2 + 4);
              param_2[5] = auVar20._8_8_;
              *(long *)pfVar11 = auVar20._0_8_;
              puVar12 = param_2 + 6;
              param_2[7] = 0x3f80000000000000;
              *puVar12 = 0;
              puVar14 = param_2 + 8;
              param_2[9] = 0x3f80000000000000;
              *puVar14 = 0;
              param_2[10] = 0x400000003f800000;
              param_2[0xb] = 0;
              FUN_1081fa8f8(param_2 + 0xc,0);
              func_0x00010821e588();
              if ((bVar5 >> 6 & 1) == 0) {
                FUN_108343a94(&uStack_f8);
                FUN_1081fa8f8(param_2 + 0xc,uStack_f8);
                func_0x00010821e588();
              }
              fVar4 = fStack_e8;
              fVar19 = fStack_ec;
              uVar16 = _exp2f(fStack_e8);
              uVar17 = _exp2f(fVar19);
              uVar15 = 0;
              bVar6 = fVar19 <= fVar4;
              uVar18 = uVar16;
              if (!bVar6) {
                uVar18 = uVar17;
                uVar17 = uVar16;
              }
              *(uint *)(param_2 + 0xb) = (uint)bVar6;
              *(undefined4 *)(param_2 + 10) = uVar17;
              *(undefined4 *)((long)param_2 + 0x54) = uVar18;
              puVar2 = puVar14;
              if (!bVar6) {
                puVar2 = puVar12;
                puVar12 = puVar14;
              }
              for (; uVar15 != 3; uVar15 = uVar15 + 1) {
                uVar1 = uVar15;
                if (uStack_108 <= uVar15) {
                  uVar1 = 0;
                }
                fVar19 = (float)_exp2f();
                pfVar11[-8] = fVar19;
                fVar19 = (float)_exp2f();
                pfVar11[-4] = fVar19;
                *pfVar11 = 1.0 / afStack_c0[uVar1];
                *(undefined4 *)((long)puVar2 + uVar15 * 4) =
                     *(undefined4 *)((long)&uStack_d0 + uVar1 * 4);
                *(undefined4 *)((long)puVar12 + uVar15 * 4) =
                     *(undefined4 *)((long)&uStack_e0 + uVar1 * 4);
                pfVar11 = pfVar11 + 1;
              }
              goto LAB_10821df04;
            }
          }
        }
      }
    }
    plVar10 = (long *)0x0;
LAB_10821df04:
    plVar8 = plStack_100;
    plStack_100 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      func_0x00010821e598();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    func_0x00010821e588();
    plVar3 = plStack_100;
    plStack_100 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      func_0x00010821e598();
    }
    func_0x00010821e574();
    pcStack_118 = FUN_10821e0a8;
    plStack_130 = plVar10;
    plStack_128 = plVar8;
    puStack_120 = &stack0xfffffffffffffff0;
    func_0x00010821e528();
    uStack_132 = 0;
    FUN_1083a034c(alStack_158,&uStack_132,2);
    uStack_132 = 0;
    plVar8 = alStack_158;
    (**(code **)(alStack_158[0] + 0x10))(plVar8,&uStack_132,2);
    func_0x00010821e5b0();
    func_0x00010821e554();
    return plVar8;
  }
  return plVar10;
code_r0x00010821deb4:
  func_0x00010821e544();
  if (((((int)plVar8 == 0) || (func_0x00010821e544(), (int)plVar8 == 0)) ||
      (func_0x00010821e590(), (int)plVar8 == 0)) ||
     ((func_0x00010821e544(), (int)plVar8 == 0 || (func_0x00010821e544(), ((ulong)plVar8 & 1) == 0))
     )) goto LAB_10821df04;
  goto LAB_10821dea4;
}



/* Entry: 10821e0a8; end: 10821e10f;  */

void FUN_10821e0a8(void)

{
  long alStack_48 [4];
  undefined2 uStack_22;
  
  func_0x00010821e528();
  uStack_22 = 0;
  FUN_1083a034c(alStack_48,&uStack_22,2);
  uStack_22 = 0;
  (**(code **)(alStack_48[0] + 0x10))(alStack_48,&uStack_22,2);
  func_0x00010821e5b0();
  func_0x00010821e554();
  return;
}



/* Entry: 10821e110; end: 10821e2f3;  */

void FUN_10821e110(float *param_1)

{
  float *pfVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  long alStack_68 [4];
  undefined2 uStack_42;
  
  func_0x00010821e528();
  uStack_42 = 0;
  FUN_1083a034c(alStack_68,&uStack_42,2);
  uStack_42 = 0;
  (**(code **)(alStack_68[0] + 0x10))(alStack_68,&uStack_42,2);
  fVar6 = param_1[1];
  bVar2 = false;
  if ((*param_1 == fVar6) && (bVar2 = false, !NAN(fVar6) && !NAN(param_1[2]))) {
    bVar2 = fVar6 == param_1[2];
  }
  if (bVar2) {
    fVar6 = param_1[5];
    bVar2 = false;
    if ((param_1[4] == fVar6) && (bVar2 = false, !NAN(fVar6) && !NAN(param_1[6]))) {
      bVar2 = fVar6 == param_1[6];
    }
    if (!bVar2) goto LAB_10821e1b0;
    fVar6 = param_1[9];
    bVar2 = false;
    if ((param_1[8] == fVar6) && (bVar2 = false, !NAN(fVar6) && !NAN(param_1[10]))) {
      bVar2 = fVar6 == param_1[10];
    }
    if (!bVar2) goto LAB_10821e1b0;
    fVar6 = param_1[0xd];
    bVar2 = false;
    if ((param_1[0xc] == fVar6) && (bVar2 = false, !NAN(fVar6) && !NAN(param_1[0xe]))) {
      bVar2 = fVar6 == param_1[0xe];
    }
    if (!bVar2) goto LAB_10821e1b0;
    fVar6 = param_1[0x11];
    bVar2 = false;
    if ((fVar6 == param_1[0x12]) && (bVar2 = false, !NAN(param_1[0x10]) && !NAN(fVar6))) {
      bVar2 = param_1[0x10] == fVar6;
    }
  }
  else {
LAB_10821e1b0:
    bVar2 = false;
  }
  bVar3 = 0x40;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar3 = 0;
  }
  if (!bVar2) {
    bVar3 = bVar3 | 0x80;
  }
  uStack_42 = CONCAT11(uStack_42._1_1_,bVar3);
  (**(code **)(alStack_68[0] + 0x10))(alStack_68,&uStack_42,1);
  if (param_1[0x16] == 1.4013e-45) {
    _log2f(param_1[0x15]);
    func_0x00010821e54c();
    lVar4 = 0x50;
  }
  else {
    if (param_1[0x16] != 0.0) goto LAB_10821e22c;
    _log2f(param_1[0x14]);
    func_0x00010821e54c();
    lVar4 = 0x54;
  }
  _log2f(*(undefined4 *)((long)param_1 + lVar4));
  func_0x00010821e54c();
LAB_10821e22c:
  lVar4 = 3;
  pfVar1 = param_1;
  if (bVar2) {
    lVar4 = 1;
  }
  do {
    if (lVar4 == 0) {
      func_0x00010821e5b0();
      func_0x00010821e554();
      return;
    }
    _log2f(*pfVar1);
    func_0x00010821e520();
    _log2f(pfVar1[4]);
    func_0x00010821e520();
    func_0x00010821e54c(1.0 / pfVar1[8]);
    if (param_1[0x16] == 0.0) {
      func_0x00010821e520(pfVar1[0xc]);
      lVar5 = 0x40;
LAB_10821e294:
      func_0x00010821e520(*(undefined4 *)((long)pfVar1 + lVar5));
    }
    else if (param_1[0x16] == 1.4013e-45) {
      func_0x00010821e520(pfVar1[0x10]);
      lVar5 = 0x30;
      goto LAB_10821e294;
    }
    lVar4 = lVar4 + -1;
    pfVar1 = pfVar1 + 1;
  } while( true );
}



/* Entry: 10821e2f4; end: 10821e513;  */

/* WARNING: Possible PIC construction at 0x00010821e328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010821e32c) */

void FUN_10821e2f4(float param_1,long *param_2)

{
  uint uVar1;
  uint uStack_34;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &stack0xfffffffffffffff0;
  uVar1 = 0x1000;
  if (param_1 <= 1.0) {
    uVar1 = 0x10000000;
  }
  uStack_28 = 0x10821e32c;
  uVar1 = (uint)(long)(param_1 * (float)uVar1);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
  func_0x00010821dd24(*(undefined8 *)(*param_2 + 0x10),param_2,&uStack_34);
  return;
}



/* Entry: 10821e514; end: 10821e5c7;  */

void FUN_10821e514(int *param_1)

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



/* Entry: 10821e5c8; end: 10821e62b;  */

void FUN_10821e5c8(undefined8 *param_1,long *param_2,ulong param_3)

{
  long lStack_28;
  
  lStack_28 = *param_2;
  if (lStack_28 == 0 || (param_3 & 0x1ffffffff) == 0x100000001) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    FUN_10821c988(&lStack_28);
    func_0x0001078bddf8(&lStack_28);
  }
  return;
}



/* Entry: 10821e62c; end: 10821e6bb;  */

void FUN_10821e62c(undefined8 *param_1,long *param_2)

{
  long lStack_30;
  long lStack_28;
  
  lStack_30 = *param_2;
  if ((lStack_30 == 0) || (*(long *)(lStack_30 + 0x20) == 0)) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    FUN_10821e5c8(&lStack_28,&lStack_30);
    FUN_1083b71d4(param_1,&lStack_28);
    if (lStack_28 != 0) {
      FUN_10821e6ec();
    }
    func_0x0001078bddf8(&lStack_30);
  }
  return;
}



/* Entry: 10821e6bc; end: 10821e6eb;  */

long * FUN_10821e6bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10821e6ec();
  }
  return param_1;
}



/* Entry: 10821e6ec; end: 10821e703;  */

void FUN_10821e6ec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010821e6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10821e704; end: 10821e7a3;  */

void FUN_10821e704(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uStack_60;
  uint uStack_54;
  char cStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  
  uStack_54 = uStack_54 & 0xffffff00;
  cStack_50 = '\0';
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  func_0x00010813fad0(&uStack_60);
  FUN_10821d208(&uStack_54,uStack_60);
  func_0x0001078bddf8(&uStack_60);
  if (cStack_50 == '\x01') {
    *param_3 = uStack_54;
  }
  return;
}



/* Entry: 10821e7a4; end: 10821ea6b;  */

bool FUN_10821e7a4(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((int)param_2[3] != (int)param_1[3]) {
    return false;
  }
  iVar1 = (int)param_2[4];
  iVar2 = *(int *)((long)param_2 + 0x24);
  if (param_3 < 5) {
    iVar1 = *(int *)((long)param_2 + 0x24);
    iVar2 = (int)param_2[4];
  }
  if ((int)param_1[4] != iVar2) {
    return false;
  }
  if (*(int *)((long)param_1 + 0x24) != iVar1) {
    return false;
  }
  if (iVar2 == 0) {
    return true;
  }
  if (iVar1 == 0) {
    return true;
  }
  if (*param_2 == *param_1) {
    return param_3 == 1;
  }
  FUN_1083b9a30(&lStack_48,param_1 + 2,*param_1,param_1[1],0);
  bVar4 = lStack_48 != 0;
  if (lStack_48 == 0) goto LAB_10821e9fc;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_108330c70(&uStack_80,param_2);
  if (7 < param_3 - 1U) {
    FUN_10841076c(&UNK_10f47f455);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10821ea28);
    (*pcVar3)();
  }
  iVar1 = (int)param_1[4];
  iVar2 = *(int *)((long)param_1 + 0x24);
  uVar9 = 0x3f800000;
  uVar6 = 0;
  uVar7 = 0x3f800000;
  fVar8 = 0.0;
  uVar10 = 0;
  fVar11 = 0.0;
  switch(param_3) {
  case 1:
    uStack_a8 = uRam0000000113254e28;
    uStack_b0 = uRam0000000113254e20;
    uStack_98 = uRam0000000113254e38;
    uStack_a0 = uRam0000000113254e30;
    uStack_90 = uRam0000000113254e40;
    goto code_r0x00010821e968;
  case 2:
    fVar8 = (float)iVar1;
    uVar10 = 0x3f800000;
    uVar6 = 0xbf800000;
    goto code_r0x00010821e908;
  case 3:
    fVar8 = (float)iVar1;
    fVar11 = (float)iVar2;
    uVar7 = 0;
    uVar6 = 0xbf800000;
    uVar9 = 0;
    uVar10 = 0xbf800000;
    break;
  case 4:
    fVar11 = (float)iVar2;
    uVar10 = 0xbf800000;
    uVar6 = 0x3f800000;
code_r0x00010821e908:
    uVar7 = 0;
    uVar9 = 0;
    break;
  case 6:
    fVar8 = (float)iVar1;
    uVar7 = 0xbf800000;
    break;
  case 7:
    fVar8 = (float)iVar1;
    uVar7 = 0xbf800000;
    goto code_r0x00010821e94c;
  case 8:
code_r0x00010821e94c:
    fVar11 = (float)iVar2;
    uVar9 = 0xbf800000;
  }
  FUN_10816eae8(&uStack_b0,uVar6,uVar7,fVar8,uVar9,uVar10,fVar11,0,0);
code_r0x00010821e968:
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_c4 = 0x3f800000;
  uStack_bc = 0x40800000;
  FUN_1083762f4(&uStack_100,1);
  FUN_1083b8df0(lStack_48);
  FUN_10833e2b0();
  lVar5 = lStack_48;
  FUN_1083b8df0(lStack_48);
  func_0x0001083b812c(&uStack_108,&uStack_80);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  FUN_10834001c(0,0,lVar5,uStack_108,&uStack_120,&uStack_100);
  func_0x000106f47184(&uStack_108);
  FUN_108375e94(&uStack_100);
  FUN_108330548(&uStack_80);
LAB_10821e9fc:
  func_0x000106f471d4(&lStack_48);
  return bVar4;
}



/* Entry: 10821ea6c; end: 10821eb5f;  */

void FUN_10821ea6c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_4 != 0) &&
     (uVar4 = *(int *)(param_1 + 8) - 2U >> 1 | *(int *)(param_1 + 8) << 0x1f, uVar4 < 8)) {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar1 = (int)uVar3 >> 0x1f;
    switch(uVar4) {
    case 0:
      while ((uVar3 & (uVar1 ^ 0xffffffff)) != 0) {
        func_0x00010821eb60();
        func_0x00010821eb74();
      }
      break;
    case 1:
    case 2:
      while ((uVar3 & (uVar1 ^ 0xffffffff)) != 0) {
        func_0x00010821eb60();
        func_0x00010821eb74();
      }
      break;
    case 6:
      while ((uVar3 & (uVar1 ^ 0xffffffff)) != 0) {
        _bzero(param_2,(long)iVar2);
        func_0x00010821eb74();
      }
      break;
    case 7:
      while ((uVar3 & (uVar1 ^ 0xffffffff)) != 0) {
        (*(code *)PTR_DAT_113254e80)(param_2,0,(long)iVar2);
        func_0x00010821eb74();
      }
    }
  }
  return;
}



/* Entry: 10821eb60; end: 10821eb7f;  */

void FUN_10821eb60(void)

{
  undefined8 *unaff_x23;
  
                    /* WARNING: Could not recover jumptable at 0x00010821eb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*unaff_x23)();
  return;
}



/* Entry: 10821eb80; end: 10821ec1b;  */

void FUN_10821eb80(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 - 1U < 8) && ((0xabU >> (ulong)(param_2 - 1U & 0x1f) & 1) != 0)) {
    func_0x00010835c63c();
    uVar1 = 0x60;
    __Znwm();
    func_0x00010821ffbc();
    *param_1 = uVar1;
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10821ec1c; end: 10821eceb;  */

void FUN_10821ec1c(undefined1 *param_1,long param_2,uint param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  
  puVar1 = (undefined1 *)(param_2 + param_6);
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + param_5;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10821ecec; end: 10821edb7;  */

void FUN_10821ecec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  func_0x00010821ffbc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10821edb8; end: 10821edc7;  */

void FUN_10821edb8(undefined8 param_1,long param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2 + param_6,(long)(param_4 * param_3));
  return;
}



/* Entry: 10821edc8; end: 10821f39f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10821edc8(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((param_3 == 0) && (iVar1 == 4)) goto LAB_10821ee04;
  bVar4 = iVar1 == 0xc;
  switch(iVar1) {
  case 0:
    if (*(char *)(param_2 + 0x10) == '\b') {
      uVar3 = *(int *)(param_4 + 8) - 2U >> 1;
      if (6 < (uVar3 | *(int *)(param_4 + 8) << 0x1f)) break;
      uVar3 = 0x47 >> (ulong)(uVar3 & 0x1f);
    }
    else {
      if ((*(char *)(param_2 + 0x10) != '\x01') ||
         (uVar3 = *(int *)(param_4 + 8) - 2U >> 1, 7 < (uVar3 | *(int *)(param_4 + 8) << 0x1f)))
      break;
      uVar3 = 199 >> (ulong)(uVar3 & 0x1f);
    }
    if ((uVar3 & 1) == 0) break;
    goto code_r0x00010821f34c;
  case 1:
  case 2:
    iVar1 = *(int *)(param_4 + 8);
    if ((iVar1 == 1) || (iVar1 == 6 || iVar1 == 4)) goto code_r0x00010821f34c;
    break;
  case 3:
  case 5:
    func_0x0001082201d0();
    if ((bVar4) || ((extraout_w8 == 6 || (extraout_w8 == 4)))) goto code_r0x00010821f34c;
    break;
  case 4:
    bVar2 = *(byte *)(param_2 + 0x10);
    if (1 < bVar2 - 1) {
      if (bVar2 == 8) {
        switch(*(undefined4 *)(param_4 + 8)) {
        case 2:
          break;
        default:
          goto LAB_10821ee04;
        case 4:
        case 6:
        case 0xb:
        }
        goto code_r0x00010821f34c;
      }
      if (bVar2 != 4) break;
    }
    iVar1 = *(int *)(param_4 + 8);
    if ((iVar1 == 6 || iVar1 == 4) || (iVar1 == 2)) goto code_r0x00010821f34c;
    break;
  case 6:
    iVar1 = *(int *)(param_4 + 8);
    if (iVar1 == 6) goto code_r0x00010821f34c;
    goto joined_r0x00010821efd8;
  case 7:
    func_0x0001082201d0();
    iVar1 = extraout_w8_00;
    if (bVar4) goto code_r0x00010821f34c;
    goto joined_r0x00010821efd0;
  case 8:
    func_0x0001082201d0();
    iVar1 = extraout_w8_02;
    if (bVar4) goto code_r0x00010821f34c;
joined_r0x00010821efd0:
    if (iVar1 != 6) {
joined_r0x00010821efd8:
      if (iVar1 != 4) break;
    }
code_r0x00010821f34c:
    func_0x000108154708();
    func_0x00010835c63c();
    uVar5 = 0x60;
    __Znwm();
    func_0x00010821ffbc();
    *param_1 = uVar5;
    return;
  case 9:
    iVar1 = *(int *)(param_4 + 8);
    goto joined_r0x00010821efa4;
  case 0xc:
    func_0x0001082201d0();
    iVar1 = extraout_w8_01;
    if (bVar4) goto code_r0x00010821f34c;
joined_r0x00010821efa4:
    if ((iVar1 != 4) && (iVar1 != 6)) break;
    goto code_r0x00010821f34c;
  }
LAB_10821ee04:
  *param_1 = 0;
  return;
}



/* Entry: 10821f3a0; end: 10821f787;  */

void FUN_10821f3a0(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5
                  )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 in_ZR;
  int extraout_w8;
  byte *extraout_x9;
  byte *pbVar5;
  ulong extraout_x10;
  ulong uVar6;
  int extraout_w11;
  long lVar7;
  
  func_0x000108220148();
  uVar2 = 0xff000000;
  if (!(bool)in_ZR) {
    uVar2 = 0xffffffff;
  }
  *param_1 = uVar2;
  pbVar5 = extraout_x9;
  uVar6 = extraout_x10;
  for (lVar7 = 1; lVar7 < param_3; lVar7 = lVar7 + 1) {
    iVar1 = (int)uVar6 + param_5;
    iVar3 = 0;
    if (extraout_w8 != 0) {
      iVar3 = iVar1 / extraout_w8;
    }
    uVar4 = iVar1 + iVar3 * -8;
    uVar6 = (ulong)uVar4;
    pbVar5 = pbVar5 + iVar3;
    uVar2 = 0xff000000;
    if ((*pbVar5 >> (ulong)(extraout_w11 - uVar4 & 0x1f) & 1) != 0) {
      uVar2 = 0xffffffff;
    }
    param_1[lVar7] = uVar2;
  }
  return;
}



/* Entry: 10821f788; end: 10821f853;  */

void FUN_10821f788(undefined2 *param_1,long param_2,int param_3,uint param_4,int param_5,int param_6
                  ,long param_7)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar4 = (byte *)(param_2 + param_6 / 8);
  param_6 = param_6 % 8;
  uVar2 = (-1 << (ulong)(param_4 & 0x1f) ^ 0xffffffffU) & 0xff;
  uVar3 = (undefined2)
          *(undefined4 *)
           (param_7 + (ulong)(*pbVar4 >> (ulong)((8 - param_4) - param_6 & 0x1f) & uVar2) * 4);
  func_0x000108220104();
  *param_1 = uVar3;
  for (lVar5 = 1; lVar5 < param_3; lVar5 = lVar5 + 1) {
    iVar1 = param_6 + param_5;
    param_6 = iVar1 % 8;
    pbVar4 = pbVar4 + iVar1 / 8;
    uVar3 = (undefined2)
            *(undefined4 *)
             (param_7 + (ulong)(*pbVar4 >> (ulong)((8 - param_4) - param_6 & 0x1f) & uVar2) * 4);
    func_0x000108220104();
    param_1[lVar5] = uVar3;
  }
  return;
}



/* Entry: 10821f854; end: 10821f8b3;  */

void FUN_10821f854(int *param_1,long param_2,uint param_3,undefined8 param_4,int param_5,int param_6
                  ,long param_7)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  
  pbVar1 = (byte *)(param_2 + param_6);
  for (uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    iVar2 = *(int *)(param_7 + (ulong)*pbVar1 * 4);
    if (iVar2 != 0) {
      *param_1 = iVar2;
    }
    pbVar1 = pbVar1 + param_5;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10821f8b4; end: 10821f903;  */

void FUN_10821f8b4(undefined2 *param_1,long param_2,uint param_3,undefined8 param_4,int param_5,
                  int param_6,long param_7)

{
  byte *pbVar1;
  undefined2 uVar2;
  ulong uVar3;
  
  pbVar1 = (byte *)(param_2 + param_6);
  for (uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar2 = (undefined2)*(undefined4 *)(param_7 + (ulong)*pbVar1 * 4);
    func_0x000108220104();
    *param_1 = uVar2;
    pbVar1 = pbVar1 + param_5;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10821f904; end: 10821fa6b;  */

void FUN_10821f904(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long extraout_x9;
  undefined8 unaff_x30;
  
  if ((param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)) != 0) {
    do {
      func_0x000108220204(param_1,unaff_x30);
    } while (extraout_x9 != 0);
  }
  return;
}



/* Entry: 10821fa6c; end: 10821fa9f;  */

void FUN_10821fa6c(void)

{
  long unaff_x21;
  
  func_0x000108220128();
  while (unaff_x21 != 0) {
    func_0x0001082201f0();
    func_0x0001081fb60c();
    func_0x000108220170();
  }
  return;
}



/* Entry: 10821faa0; end: 10821fb5b;  */

void FUN_10821faa0(uint *param_1,long param_2,uint param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)(param_2 + param_6 + 4);
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *param_1 = (uint)pbVar1[2] << 0x18 | (uint)*pbVar1 << 0x10 | (uint)pbVar1[-2] << 8 |
               (uint)pbVar1[-4];
    pbVar1 = pbVar1 + param_5;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10821fb5c; end: 10821fb8f;  */

void FUN_10821fb5c(void)

{
  long unaff_x21;
  
  func_0x000108220128();
  while (unaff_x21 != 0) {
    func_0x0001082201dc();
    func_0x0001081fb60c();
    func_0x000108220170();
  }
  return;
}



/* Entry: 10821fb90; end: 10821fc43;  */

void FUN_10821fb90(undefined8 param_1,long param_2)

{
  int in_w5;
  
                    /* WARNING: Could not recover jumptable at 0x000108220124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_DAT_113255f00)(param_1,param_2 + in_w5);
  return;
}



/* Entry: 10821fc44; end: 10821fc77;  */

void FUN_10821fc44(void)

{
  long unaff_x21;
  
  func_0x000108220128();
  while (unaff_x21 != 0) {
    func_0x0001082201f0();
    func_0x0001081fb624();
    func_0x000108220170();
  }
  return;
}



/* Entry: 10821fc78; end: 10821fd33;  */

void FUN_10821fc78(uint *param_1,long param_2,uint param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)(param_2 + param_6 + 4);
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *param_1 = (uint)pbVar1[2] << 0x18 | (uint)pbVar1[-4] << 0x10 | (uint)pbVar1[-2] << 8 |
               (uint)*pbVar1;
    pbVar1 = pbVar1 + param_5;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 10821fd34; end: 10821fd67;  */

void FUN_10821fd34(void)

{
  long unaff_x21;
  
  func_0x000108220128();
  while (unaff_x21 != 0) {
    func_0x0001082201dc();
    func_0x0001081fb624();
    func_0x000108220170();
  }
  return;
}



/* Entry: 10821fd68; end: 108220277;  */

void FUN_10821fd68(undefined8 param_1,long param_2)

{
  int in_w5;
  
                    /* WARNING: Could not recover jumptable at 0x000108220124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_DAT_113255f08)(param_1,param_2 + in_w5);
  return;
}



/* Entry: 108220278; end: 1082202db;  */

undefined8 FUN_108220278(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(ulong *)(param_1 + 0x20) < 8) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_1082202dc();
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18) + 4;
    func_0x000108220328(lVar2,*param_2);
    *param_3 = (int)lVar2;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1082202dc; end: 10822033f;  */

undefined8 FUN_1082202dc(char *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == 'I') {
    if (param_1[1] == 'I') {
LAB_10822030c:
      *(bool *)param_2 = cVar1 == 'I';
      return 1;
    }
  }
  else if ((cVar1 == 'M') && (param_1[1] == 'M')) goto LAB_10822030c;
  return 0;
}



/* Entry: 108220340; end: 10822044b;  */

void FUN_108220340(long *param_1,long *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  ushort uVar9;
  undefined8 uStack_48;
  
  uVar6 = *(ulong *)(*param_2 + 0x20);
  if (param_4 <= uVar6) {
    uVar6 = uVar6 - param_4;
    uVar2 = uVar6 - 2;
    if (1 < uVar6) {
      puVar4 = (undefined1 *)(*(long *)(*param_2 + 0x18) + (ulong)param_4);
      if ((int)param_3 == 0) {
        puVar1 = puVar4;
        puVar3 = puVar4 + 1;
      }
      else {
        puVar1 = puVar4 + 1;
        puVar3 = puVar4;
      }
      uVar9 = CONCAT11(*puVar1,*puVar3);
      uVar6 = (ulong)uVar9;
      if (uVar2 < uVar6 * 0xc) {
        if (param_5 == 0) goto LAB_108220380;
        uVar8 = 0;
        uVar9 = (ushort)((uint)uVar2 / 0xc);
      }
      else if (uVar2 + uVar6 * -0xc < 4) {
        if ((param_5 & 1) == 0) goto LAB_108220380;
        uVar8 = 0;
      }
      else {
        puVar4 = puVar4 + uVar6 * 0xc + 2;
        func_0x000108220328(puVar4,param_3);
        uVar8 = SUB84(puVar4,0);
      }
      plVar5 = (long *)0x18;
      __Znwm();
      lVar7 = *param_2;
      *param_2 = 0;
      uStack_48 = 0;
      *plVar5 = lVar7;
      *(char *)(plVar5 + 1) = (char)param_3;
      *(uint *)((long)plVar5 + 0xc) = param_4;
      *(ushort *)(plVar5 + 2) = uVar9;
      *(undefined4 *)((long)plVar5 + 0x14) = uVar8;
      *param_1 = (long)plVar5;
      func_0x0001078bddf8(&uStack_48);
      return;
    }
  }
LAB_108220380:
  *param_1 = 0;
  return;
}



/* Entry: 10822044c; end: 108220483;  */

undefined2 FUN_10822044c(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  
  func_0x000108220780();
  puVar1 = (undefined1 *)(extraout_x8 + 3);
  puVar2 = (undefined1 *)(extraout_x8 + 2);
  if (*(char *)(param_1 + 8) == '\0') {
    puVar1 = (undefined1 *)(extraout_x8 + 2);
    puVar2 = (undefined1 *)(extraout_x8 + 3);
  }
  return CONCAT11(*puVar1,*puVar2);
}



/* Entry: 108220484; end: 1082205bf;  */

undefined8
FUN_108220484(long *param_1,undefined8 param_2,undefined2 *param_3,short *param_4,
             undefined4 *param_5,ulong *param_6,ulong *param_7)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  undefined1 *puVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long extraout_x8;
  ulong uVar13;
  ulong uVar14;
  
  func_0x000108220780();
  puVar1 = (undefined1 *)(extraout_x8 + 2);
  bVar9 = (char)param_1[1] == '\0';
  puVar4 = (undefined1 *)(extraout_x8 + 3);
  puVar8 = puVar1;
  if (bVar9) {
    puVar4 = puVar1;
    puVar8 = (undefined1 *)(extraout_x8 + 3);
  }
  lVar2 = 2;
  if (bVar9) {
    lVar2 = 3;
  }
  lVar3 = 2;
  if (!bVar9) {
    lVar3 = 3;
  }
  sVar7 = CONCAT11(puVar1[lVar3],puVar1[lVar2]);
  if ((ushort)(sVar7 - 1U) < 0xc) {
    uVar5 = *puVar4;
    uVar6 = *puVar8;
    uVar10 = extraout_x8 + 6;
    func_0x000108220328();
    uVar11 = extraout_x8 + 10;
    uVar14 = *(long *)(&UNK_10df0a950 + (ulong)(ushort)(sVar7 - 1) * 8) * (uVar10 & 0xffffffff);
    if (4 < uVar14) {
      func_0x000108220328(uVar11,(char)param_1[1]);
      uVar13 = *(ulong *)(*param_1 + 0x20);
      if (uVar13 < (uVar11 & 0xffffffff) || uVar13 - (uVar11 & 0xffffffff) < uVar14)
      goto LAB_108220558;
      uVar11 = *(long *)(*param_1 + 0x18) + (uVar11 & 0xffffffff);
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = CONCAT11(uVar5,uVar6);
    }
    if (param_4 != (short *)0x0) {
      *param_4 = sVar7;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = (int)uVar10;
    }
    if (param_6 != (ulong *)0x0) {
      *param_6 = uVar11;
    }
    if (param_7 != (ulong *)0x0) {
      *param_7 = uVar14;
    }
    uVar12 = 1;
  }
  else {
LAB_108220558:
    uVar12 = 0;
  }
  return uVar12;
}



/* Entry: 1082205c0; end: 108220637;  */

void FUN_1082205c0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_38;
  long lStack_30;
  undefined1 auStack_28 [6];
  short sStack_22;
  
  sStack_22 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  plVar1 = param_2;
  FUN_108220484(param_2,param_3,0,&sStack_22,auStack_28,&lStack_30,&uStack_38);
  if ((((ulong)plVar1 & 1) == 0) || (sStack_22 != 7)) {
    *param_1 = 0;
  }
  else {
    FUN_10834661c(param_1,*param_2,lStack_30 - *(long *)(*param_2 + 0x18),uStack_38);
  }
  return;
}



/* Entry: 108220638; end: 108220773;  */

ulong FUN_108220638(long param_1,undefined8 param_2,uint param_3,uint param_4,float *param_5)

{
  undefined1 *puVar1;
  float fVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  float *pfVar8;
  undefined1 *puStack_60;
  uint uStack_58;
  ushort uStack_52;
  
  uStack_52 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined1 *)0x0;
  lVar3 = param_1;
  FUN_108220484(param_1,param_2,0,&uStack_52,&uStack_58,&puStack_60,0);
  uVar4 = 0;
  if (((int)lVar3 != 0) && (param_3 == uStack_52 && param_4 == uStack_58)) {
    uVar7 = (ulong)param_4;
    puVar6 = puStack_60;
    pfVar8 = param_5;
    while( true ) {
      uVar4 = (ulong)(uVar7 == 0);
      fVar2 = (float)(uint)(uVar7 == 0);
      if (uVar7 == 0) break;
      switch(param_3) {
      case 3:
        if (*(char *)(param_1 + 8) == '\0') {
          puVar5 = puVar6;
          puVar1 = puVar6 + 1;
        }
        else {
          puVar5 = puVar6 + 1;
          puVar1 = puVar6;
        }
        *(ushort *)pfVar8 = CONCAT11(*puVar5,*puVar1);
        break;
      case 4:
        FUN_108220774();
        *param_5 = fVar2;
        break;
      case 5:
      case 10:
        FUN_108220774();
        puVar5 = puVar6 + 4;
        func_0x000108220328(puVar5,*(undefined1 *)(param_1 + 8));
        if ((int)puVar5 == 0) {
          *param_5 = 0.0;
        }
        else {
          *param_5 = (float)(uVar4 & 0xffffffff) / (float)((ulong)puVar5 & 0xffffffff);
        }
        break;
      default:
        goto LAB_108220758;
      }
      puVar6 = puVar6 + 4;
      pfVar8 = (float *)((long)pfVar8 + 2);
      param_5 = param_5 + 1;
      uVar7 = uVar7 - 1;
    }
  }
LAB_108220758:
  return uVar4;
}



/* Entry: 108220774; end: 10822079b;  */

uint FUN_108220774(void)

{
  uint uVar1;
  long unaff_x20;
  uint *unaff_x21;
  
  if (*(char *)(unaff_x20 + 8) != '\0') {
    return *unaff_x21;
  }
  uVar1 = (*unaff_x21 & 0xff00ff00) >> 8 | (*unaff_x21 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



/* Entry: 10822079c; end: 10822092b;  */

undefined8 * FUN_10822079c(long *param_1,uint *param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_1 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_3 & 0xffffff00) != 0x100) {
    return (undefined8 *)0x0;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  FUN_10822d4a4(lVar3,param_1[1],&uStack_60,(ulong)&uStack_60 | 4,(ulong)&uStack_60 | 8,
                (ulong)&uStack_60 | 0xc,&uStack_50,0);
  if ((int)lVar3 != 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)0x1;
  _calloc(1,0x198);
  if (puVar4 != (undefined8 *)0x0) {
    if (param_2 == (uint *)0x0) {
      uVar7 = 0;
      uVar6 = 1;
    }
    else {
      uVar6 = *param_2;
      if ((8 < uVar6) || ((1 << (ulong)(uVar6 & 0x1f) & 0x18aU) == 0)) goto LAB_108220908;
      uVar7 = param_2[1];
    }
    pcVar1 = FUN_108220cdc;
    if ((uVar6 & 0xd) != 1) {
      pcVar1 = (code *)0x108220d90;
    }
    puVar4[0x1f] = pcVar1;
    *(uint *)(puVar4 + 6) = uVar6;
    *(undefined4 *)((long)puVar4 + 0x3c) = 1;
    *(uint *)(puVar4 + 0x1a) = uVar7;
    FUN_108220df4(param_1,0,0,0x107);
    *puVar4 = param_1;
    if (param_1 != (long *)0x0) {
      uVar8 = *(ulong *)((long)param_1 + 0x34);
      puVar4[0x21] = *(undefined8 *)((long)param_1 + 0x3c);
      puVar4[0x20] = uVar8;
      *(undefined4 *)(puVar4 + 0x22) = *(undefined4 *)((long)param_1 + 0x44);
      uVar2 = uVar8 >> 0x20;
      uVar6 = (int)uVar8 << 2;
      uVar8 = (ulong)uVar6;
      if (uVar6 != 0) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = 0x400000000 / uVar8;
        }
        if (uVar5 < uVar2) goto LAB_108220908;
      }
      uVar5 = uVar8;
      _calloc(uVar8,uVar2);
      puVar4[0x25] = uVar5;
      if (uVar5 != 0) {
        _calloc(uVar8,uVar2);
        puVar4[0x26] = uVar8;
        if (uVar8 != 0) {
          *(undefined4 *)(puVar4 + 0x27) = 0;
          *(undefined4 *)((long)puVar4 + 0x194) = 1;
          return puVar4;
        }
      }
    }
  }
LAB_108220908:
  FUN_10822092c(puVar4);
  return (undefined8 *)0x0;
}



/* Entry: 10822092c; end: 10822096b;  */

void FUN_10822092c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1082210c4(*param_1);
    _free(param_1[0x25]);
    _free(param_1[0x26]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10822096c; end: 108220cdb;  */

void FUN_10822096c(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  int iStack_c4;
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
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  iVar9 = *(int *)((long)param_1 + 0x194);
  if (*(int *)(param_1 + 0x22) < iVar9) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar18 = (ulong)uVar2;
  uVar3 = *(uint *)((long)param_1 + 0x104);
  uVar20 = (ulong)uVar3;
  pcVar11 = (code *)param_1[0x1f];
  uStack_68 = *param_1;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  func_0x000108221148(iVar9,&uStack_b0);
  if (iVar9 == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x27);
  iVar8 = (int)uStack_98;
  iVar19 = (int)uStack_b0;
  if ((int)uStack_b0 != 1) {
    if ((((((int)uStack_78 != 0) && (uStack_78._4_4_ != 1)) || ((uint)uStack_a0 != uVar2)) ||
        (uStack_a0._4_4_ != uVar3)) &&
       ((*(int *)((long)param_1 + 0x15c) != 1 ||
        (*(int *)(param_1 + 0x32) == 0 &&
         (*(uint *)(param_1 + 0x2a) != uVar2 || *(uint *)((long)param_1 + 0x154) != uVar3))))) {
      _memcpy(param_1[0x25],param_1[0x26],uVar18 * uVar20 * 4);
      iStack_c4 = 0;
      goto LAB_108220a74;
    }
  }
  _bzero(param_1[0x25],uVar18 * uVar20 * 4);
  iStack_c4 = 1;
LAB_108220a74:
  uVar3 = uVar2 << 2;
  iVar1 = uStack_a0._4_4_;
  lVar22 = (long)(int)uStack_a0._4_4_;
  iVar7 = (int)uStack_a8;
  iVar21 = uStack_a8._4_4_;
  lVar15 = (long)uStack_a8._4_4_;
  *(uint *)(param_1 + 9) = uVar3;
  param_1[10] = lVar22 * (ulong)uVar3;
  param_1[8] = param_1[0x25] + lVar15 * (ulong)uVar3 + (long)(int)uStack_a8 * 4;
  uVar10 = uStack_88;
  FUN_10822dbe4(uStack_88,uStack_80,param_1 + 1);
  if ((int)uVar10 == 0) {
    if ((1 < iVar19) && (uStack_78._4_4_ == 0 && iStack_c4 == 0)) {
      iVar19 = (uint)uStack_a0;
      if (*(int *)((long)param_1 + 0x15c) == 0) {
        if (0 < iVar1) {
          uVar14 = uStack_a0 & 0xffffffff;
          uVar17 = iVar7 + iVar21 * uVar2;
          do {
            (*pcVar11)(param_1[0x25] + (ulong)uVar17 * 4,param_1[0x26] + (ulong)uVar17 * 4,uVar14);
            uVar17 = uVar17 + uVar2;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
      }
      else if (0 < iVar1) {
        iVar1 = (uint)uStack_a0 + iVar7;
        iVar21 = iVar21 * uVar2;
        do {
          iVar4 = *(int *)(param_1 + 0x29);
          iVar16 = *(int *)(param_1 + 0x2a) + iVar4;
          lVar12 = (long)*(int *)((long)param_1 + 0x14c);
          bVar6 = *(int *)((long)param_1 + 0x154) + lVar12 <= lVar15;
          if ((((lVar15 >= lVar12 && !bVar6) && iVar16 > iVar7) && iVar1 != iVar4) &&
              (((lVar15 < lVar12 || bVar6) || iVar16 <= iVar7) || iVar4 <= iVar1)) {
            iVar13 = iVar1 - iVar16;
            if (iVar13 == 0 || iVar1 < iVar16) {
              iVar16 = -1;
              iVar13 = 0;
            }
            iVar5 = iVar4 - iVar7;
            if (iVar5 != 0 && iVar7 <= iVar4) goto LAB_108220b70;
          }
          else {
            iVar13 = 0;
            iVar16 = -1;
            iVar5 = iVar19;
LAB_108220b70:
            if (0 < iVar5) {
              (*pcVar11)(param_1[0x25] + (ulong)(uint)(iVar7 + iVar21) * 4,
                         param_1[0x26] + (ulong)(uint)(iVar7 + iVar21) * 4);
            }
          }
          if (0 < iVar13) {
            (*pcVar11)(param_1[0x25] + (ulong)(uint)(iVar16 + iVar21) * 4,
                       param_1[0x26] + (ulong)(uint)(iVar16 + iVar21) * 4,iVar13);
          }
          iVar21 = iVar21 + uVar2;
          lVar15 = lVar15 + 1;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
    }
    *(int *)(param_1 + 0x27) = iVar8 + iVar9;
    param_1[0x2d] = uStack_88;
    param_1[0x2c] = uStack_90;
    param_1[0x2f] = uStack_78;
    param_1[0x2e] = uStack_80;
    param_1[0x31] = uStack_68;
    param_1[0x30] = uStack_70;
    param_1[0x29] = uStack_a8;
    param_1[0x28] = uStack_b0;
    param_1[0x2b] = uStack_98;
    param_1[0x2a] = uStack_a0;
    *(int *)(param_1 + 0x32) = iStack_c4;
    _memcpy(param_1[0x26],param_1[0x25],uVar18 * uVar20 * 4);
    if ((*(int *)((long)param_1 + 0x15c) == 1) &&
       (iVar19 = *(int *)((long)param_1 + 0x154), 0 < iVar19)) {
      iVar21 = *(int *)(param_1 + 0x2a);
      lVar15 = param_1[0x26] +
               (long)*(int *)(param_1 + 0x29) * 4 +
               (long)*(int *)((long)param_1 + 0x14c) * (long)(int)uVar3;
      do {
        _bzero(lVar15,(long)iVar21 << 2);
        lVar15 = lVar15 + (int)uVar3;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    *(int *)((long)param_1 + 0x194) = *(int *)((long)param_1 + 0x194) + 1;
    *param_2 = param_1[0x25];
    *param_3 = iVar8 + iVar9;
  }
  return;
}



/* Entry: 108220cdc; end: 108220df3;  */

void FUN_108220cdc(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (0 < (int)param_3) {
    uVar7 = (ulong)param_3;
    do {
      uVar3 = *param_1;
      uVar4 = uVar3 >> 0x18;
      if (uVar4 < 0xff) {
        uVar8 = *param_2;
        if (uVar4 != 0) {
          uVar5 = (uVar8 >> 0x18) * (0x100 - (uVar3 >> 0x18)) >> 8;
          uVar1 = uVar5 + (uVar3 >> 0x18);
          uVar2 = uVar1 & 0xff;
          uVar6 = 0;
          if (uVar2 != 0) {
            uVar6 = 0x1000000 / uVar2;
          }
          uVar8 = uVar6 * ((uVar3 & 0xff) * uVar4 + uVar5 * (uVar8 & 0xff)) >> 0x18 |
                  uVar1 * 0x1000000 |
                  (uVar6 * ((uVar3 >> 8 & 0xff) * uVar4 + uVar5 * (uVar8 >> 8 & 0xff)) >> 0x18) << 8
                  | (uVar6 * ((uVar3 >> 0x10 & 0xff) * uVar4 + uVar5 * (uVar8 >> 0x10 & 0xff)) >>
                    0x18) << 0x10;
        }
        *param_1 = uVar8;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



/* Entry: 108220df4; end: 1082210c3;  */

undefined8 * FUN_108220df4(undefined8 *param_1,int param_2,int *param_3,uint param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_3 != (int *)0x0) {
    *param_3 = -1;
  }
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_4 & 0xffffff00) != 0x100) {
    return (undefined8 *)0x0;
  }
  piVar10 = (int *)*param_1;
  if ((piVar10 != (int *)0x0) && (uVar11 = param_1[1], uVar11 != 0)) {
    if (uVar11 < 0x14) {
      iVar3 = 0;
    }
    else {
      if (((*piVar10 == 0x46464952) && (piVar10[2] == 0x50424557)) && (0x10 < piVar10[1] + 9U)) {
        uVar12 = (ulong)(piVar10[1] + 8);
        bVar2 = uVar11 < uVar12;
        if (uVar12 < uVar11) {
          bVar2 = false;
          uVar11 = uVar12;
        }
        else if ((param_2 == 0) && (uVar11 < uVar12)) {
          return (undefined8 *)0x0;
        }
        puVar9 = (undefined8 *)0x1;
        _calloc(1,0x68);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        *(undefined8 *)((long)puVar9 + 0x3c) = 0xffffffff00000001;
        *(undefined8 *)((long)puVar9 + 0x34) = 0xffffffffffffffff;
        puVar9[10] = puVar9 + 9;
        puVar9[0xc] = puVar9 + 0xb;
        *puVar9 = 0xc;
        puVar9[1] = uVar11;
        puVar9[2] = uVar12;
        puVar9[3] = uVar11;
        puVar9[4] = piVar10;
        if (piVar10[3] == 0x20385056) {
          piVar4 = (int *)&UNK_110a32598;
          pcVar7 = FUN_1082212ec;
        }
        else {
          piVar1 = (int *)&UNK_110a325b0;
          do {
            piVar4 = piVar1;
            pcVar7 = *(code **)(piVar4 + 2);
            if (pcVar7 == (code *)0x0) goto LAB_108221088;
            piVar1 = piVar4 + 6;
          } while (*piVar4 != piVar10[3]);
        }
        puVar6 = puVar9;
        (*pcVar7)();
        iVar3 = (int)puVar6;
        if (iVar3 == 0) {
          *(undefined4 *)(puVar9 + 5) = 2;
        }
        if (iVar3 != 1) {
          bVar2 = true;
        }
        if ((iVar3 == 2 || !bVar2) ||
           (puVar6 = puVar9, (**(code **)(piVar4 + 4))(), (int)puVar6 == 0)) {
          *(undefined4 *)(puVar9 + 5) = 0xffffffff;
LAB_108221088:
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (param_3 != (int *)0x0) {
          *param_3 = *(int *)(puVar9 + 5);
        }
        if (bVar2) {
          FUN_1082210c4(puVar9);
          return (undefined8 *)0x0;
        }
        return puVar9;
      }
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      piVar4 = piVar10;
      FUN_10822d4a4(piVar10,uVar11,&uStack_70,(ulong)&uStack_70 | 4,(ulong)&uStack_70 | 8,
                    (ulong)&uStack_70 | 0xc,&uStack_60,0);
      if ((int)piVar4 == 0) {
        puVar9 = (undefined8 *)0x1;
        _calloc(1,0x68);
        lVar5 = 1;
        _calloc(1,0x50);
        if ((puVar9 != (undefined8 *)0x0) && (lVar5 != 0)) {
          *(undefined8 *)((long)puVar9 + 0x3c) = 0xffffffff00000001;
          puVar9[0xc] = puVar9 + 0xb;
          puVar9[1] = uVar11;
          puVar9[3] = uVar11;
          puVar9[4] = piVar10;
          *(ulong *)(lVar5 + 0x30) = uVar11;
          *(undefined4 *)(lVar5 + 8) = (undefined4)uStack_70;
          *(undefined4 *)(lVar5 + 0xc) = uStack_70._4_4_;
          *(int *)(lVar5 + 0x10) = (int)uStack_68;
          *(undefined8 *)(lVar5 + 0x20) = 0x100000001;
          puVar9[9] = lVar5;
          puVar9[10] = lVar5 + 0x48;
          iVar3 = 2;
          *(undefined4 *)(puVar9 + 5) = 2;
          *(undefined4 *)((long)puVar9 + 0x34) = (undefined4)uStack_70;
          *(undefined4 *)(puVar9 + 7) = uStack_70._4_4_;
          uVar8 = 0;
          if ((int)uStack_68 != 0) {
            uVar8 = 0x10;
          }
          *(undefined4 *)(puVar9 + 6) = uVar8;
          *(undefined4 *)((long)puVar9 + 0x44) = 1;
          if (param_3 == (int *)0x0) {
            return puVar9;
          }
          goto LAB_108220f84;
        }
        _free(puVar9);
        _free(lVar5);
        iVar3 = -1;
      }
      else {
        iVar3 = -(uint)((int)piVar4 != 7);
      }
    }
    if (param_3 != (int *)0x0) {
      puVar9 = (undefined8 *)0x0;
LAB_108220f84:
      *param_3 = iVar3;
      return puVar9;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 1082210c4; end: 10822111b;  */

void FUN_1082210c4(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x48);
    _free();
  }
  lVar1 = *(long *)(param_1 + 0x58);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10822111c; end: 1082212eb;  */

undefined8 FUN_10822111c(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  *(undefined8 *)(param_3 + 0x12) = param_1;
  if ((param_2 < 0) || (puVar6 = *(undefined8 **)(param_3 + 0x12), puVar6 == (undefined8 *)0x0)) {
    return 0;
  }
  iVar4 = *(int *)((long)puVar6 + 0x44);
  if (param_2 <= iVar4) {
    puVar5 = puVar6;
    iVar1 = iVar4;
    if (param_2 != 0) {
      iVar1 = param_2;
    }
    do {
      puVar5 = (undefined8 *)puVar5[9];
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
    } while (*(int *)(puVar5 + 4) != iVar1);
    lVar8 = puVar6[4];
    lVar3 = puVar5[5];
    lVar7 = puVar5[6];
    lVar9 = puVar5[8];
    lVar10 = lVar3;
    if (lVar9 != 0) {
      lVar10 = puVar5[7];
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = lVar3 - (lVar9 + lVar10);
      }
      lVar7 = lVar9 + lVar7 + lVar2;
    }
    if (lVar8 != 0) {
      *param_3 = iVar1;
      param_3[1] = iVar4;
      uVar11 = *puVar5;
      *(undefined8 *)(param_3 + 4) = puVar5[1];
      *(undefined8 *)(param_3 + 2) = uVar11;
      param_3[0xe] = *(int *)(puVar5 + 2);
      *(undefined8 *)(param_3 + 6) = *(undefined8 *)((long)puVar5 + 0x14);
      param_3[0xf] = *(int *)((long)puVar5 + 0x1c);
      param_3[8] = *(int *)((long)puVar5 + 0x24);
      *(long *)(param_3 + 10) = lVar8 + lVar10;
      *(long *)(param_3 + 0xc) = lVar7;
      return 1;
    }
  }
  return 0;
}



/* Entry: 1082212ec; end: 10822140b;  */

undefined8 FUN_1082212ec(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1[9] != 0) {
    return 2;
  }
  if (7 < (ulong)(param_1[2] - *param_1)) {
    if ((ulong)(param_1[1] - *param_1) < 8) {
      return 1;
    }
    lVar4 = 1;
    _calloc(1,0x50);
    if (lVar4 != 0) {
      uVar5 = 1;
      FUN_1082216d8(1,0,param_1,lVar4);
      if ((int)uVar5 != 2) {
        uVar1 = *(uint *)(param_1 + 6);
        if (((uVar1 >> 4 & 1) == 0) && (*(long *)(lVar4 + 0x40) != 0)) {
          *(undefined4 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x40) = 0;
        }
        if (((*(int *)((long)param_1 + 0x2c) == 0) && (iVar2 = *(int *)(lVar4 + 8), 0 < iVar2)) &&
           (iVar3 = *(int *)(lVar4 + 0xc), 0 < iVar3)) {
          *(undefined4 *)(param_1 + 5) = 1;
          *(int *)((long)param_1 + 0x34) = iVar2;
          *(int *)(param_1 + 7) = iVar3;
          uVar7 = 0;
          if (*(int *)(lVar4 + 0x10) != 0) {
            uVar7 = 0x10;
          }
          *(uint *)(param_1 + 6) = uVar7 | uVar1;
        }
        lVar6 = *(long *)param_1[10];
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x24) != 0)) {
          *(long *)param_1[10] = lVar4;
          *(undefined8 *)(lVar4 + 0x48) = 0;
          param_1[10] = lVar4 + 0x48;
          *(undefined4 *)((long)param_1 + 0x44) = 1;
          return uVar5;
        }
      }
      _free(lVar4);
    }
  }
  return 2;
}



/* Entry: 10822140c; end: 1082216d7;  */

bool FUN_10822140c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return true;
  }
  if ((((0 < *(int *)(param_1 + 0x34)) && (0 < *(int *)(param_1 + 0x38))) &&
      (lVar1 = *(long *)(param_1 + 0x48), *(int *)(param_1 + 0x28) != 2 || lVar1 != 0)) &&
     (0 < *(int *)(lVar1 + 8))) {
    return 0 < *(int *)(lVar1 + 0xc);
  }
  return false;
}



/* Entry: 1082216d8; end: 108221cff;  */

bool FUN_1082216d8(undefined4 param_1,ulong param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar16 = *param_3;
  lVar12 = param_3[1];
  if ((ulong)(lVar12 - lVar16) < 8 || (ulong)(lVar12 - lVar16) < (param_2 & 0xffffffff)) {
LAB_108221710:
    bVar15 = true;
  }
  else {
    bVar8 = false;
    bVar7 = false;
    do {
      lVar13 = param_3[4];
      iVar5 = *(int *)(lVar13 + lVar16);
      *param_3 = lVar16 + 4;
      uVar6 = *(uint *)(lVar13 + lVar16 + 4);
      lVar1 = lVar16 + 8;
      *param_3 = lVar1;
      if (0xfffffff6 < uVar6) {
        return (bool)2;
      }
      uVar17 = (ulong)((uVar6 & 1) + uVar6);
      uVar14 = lVar12 - lVar1;
      uVar4 = uVar14;
      if (uVar17 <= uVar14) {
        uVar4 = uVar17;
      }
      lVar12 = param_3[2];
      if ((ulong)(lVar12 - lVar1) < uVar17) {
        return (bool)2;
      }
      lVar2 = uVar4 + 8;
      bVar10 = uVar14 < uVar17;
      if (iVar5 == 0x20385056) {
LAB_1082217d4:
        if (bVar8) {
LAB_1082217d8:
          bVar9 = false;
          goto LAB_1082217dc;
        }
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        lVar13 = lVar13 + lVar16;
        FUN_10822d4a4(lVar13,lVar2,&uStack_90,(ulong)&uStack_90 | 4,&uStack_88,(long)&uStack_88 + 4,
                      &uStack_80,0);
        if (uVar14 < uVar17 && (int)lVar13 == 7) goto LAB_108221710;
        if ((int)lVar13 != 0) {
          return (bool)2;
        }
        *(long *)(param_4 + 0x28) = lVar16;
        *(long *)(param_4 + 0x30) = lVar2;
        *(undefined8 *)(param_4 + 8) = uStack_90;
        *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | (uint)uStack_88;
        *(undefined4 *)(param_4 + 0x20) = param_1;
        *(uint *)(param_4 + 0x24) = (uint)(uVar17 <= uVar14);
        lVar16 = *param_3 + uVar4;
        *param_3 = lVar16;
        lVar12 = param_3[2];
        bVar9 = true;
        bVar8 = true;
      }
      else {
        if (iVar5 == 0x4c385056) {
          if (bVar7) {
            return (bool)2;
          }
          goto LAB_1082217d4;
        }
        if (iVar5 != 0x48504c41 || bVar7) goto LAB_1082217d8;
        *(long *)(param_4 + 0x38) = lVar16;
        *(long *)(param_4 + 0x40) = lVar2;
        bVar9 = true;
        *(undefined4 *)(param_4 + 0x10) = 1;
        *(undefined4 *)(param_4 + 0x20) = param_1;
        lVar16 = uVar4 + lVar1;
        bVar7 = true;
LAB_1082217dc:
        *param_3 = lVar16;
      }
      if (lVar16 == lVar12) {
        return bVar10;
      }
      lVar12 = param_3[1];
      bVar11 = (ulong)(lVar12 - lVar16) < 8;
      bVar15 = bVar11 || bVar10;
      bVar3 = false;
      if (!bVar11 && !bVar10) {
        bVar3 = bVar9;
      }
    } while (bVar3);
  }
  return bVar15;
}



/* Entry: 108221d00; end: 108221db7;  */

void FUN_108221d00(undefined **param_1)

{
  int iVar1;
  
  iVar1 = 0x132547f0;
  _pthread_mutex_lock();
  if (iVar1 == 0) {
    if (param_1 != &PTR_FUN_113254830) {
      PTR_FUN_113254830 = (undefined *)param_1;
    }
    if (PTR_LOOP_1132547e8 != PTR_FUN_113254830) {
      pcRam0000000113869a50 = FUN_108223698;
      uRam0000000113869a48 = 0x10822377c;
      uRam0000000113869a40 = 0x108223808;
      FUN_108222ef8();
      PTR_LOOP_1132547e8 = PTR_FUN_113254830;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132547f0);
    return;
  }
  return;
}



/* Entry: 108221db8; end: 108222bcb;  */

undefined8
FUN_108221db8(long param_1,long param_2,long param_3,uint param_4,ulong param_5,ulong param_6,
             long param_7,uint param_8,long param_9,uint param_10,undefined4 param_11,long param_12,
             uint param_13,uint param_14,uint param_15,uint param_16,long *param_17)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  int iVar21;
  long lVar22;
  ushort *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ushort *puVar32;
  ushort *puVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  ushort *puVar40;
  ulong uVar41;
  int iVar42;
  int *piVar43;
  long lVar44;
  ushort *puVar45;
  long lVar46;
  int iVar47;
  int *piVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  undefined8 *puVar53;
  ushort *puVar54;
  long lVar55;
  uint uVar56;
  ulong uVar57;
  long lVar58;
  long lVar59;
  uint uVar60;
  ulong uVar61;
  long lVar62;
  int iVar63;
  long lVar64;
  int iVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  ulong uStack_1d8;
  long lStack_120;
  long lStack_110;
  ulong uStack_f0;
  long lStack_d0;
  ushort *puStack_c8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar52 = 0;
  uVar34 = (uint)param_6;
  uVar7 = 2;
  if (0xc < (int)uVar34) {
    uVar7 = 0xe - uVar34;
  }
  if ((((((param_12 != 0) && (param_9 != 0)) && (param_7 != 0)) &&
       (((param_3 != 0 && (param_2 != 0)) &&
        ((param_1 != 0 &&
         ((0x80000001 < param_15 + 0x80000001 && (0x80000001 < param_16 + 0x80000001)))))))) &&
      (uVar52 = 0, uVar34 < 0x11)) &&
     ((((1 << (ulong)(uVar34 & 0x1f) & 0x11500U) != 0 && (uVar52 = 0, param_14 < 0xd)) &&
      ((1 << (ulong)(param_14 & 0x1f) & 0x1500U) != 0)))) {
    puVar53 = (undefined8 *)*param_17;
    uVar14 = (undefined4)param_17[1];
    if (((uVar34 < 9) || ((((uint)param_5 | param_4) & 1) == 0)) &&
       ((param_14 < 9 || (((param_10 | param_8 | param_13) & 1) == 0)))) {
      uVar16 = ~(-1 << (ulong)(param_14 & 0x1f));
      FUN_108221d00(&PTR_FUN_113254830);
      if (uVar34 == param_14) {
        iStack_a8 = (int)puVar53[1];
        uStack_b0 = *puVar53;
        uStack_98 = puVar53[3];
        uStack_a0 = puVar53[2];
        uStack_88 = puVar53[5];
        uStack_90 = puVar53[4];
      }
      else {
        uVar18 = ~(-1 << (ulong)(uVar34 & 0x1f));
        iVar42 = 1 << (ulong)(uVar34 - 1 & 0x1f);
        piVar43 = (int *)&uStack_a0;
        lVar50 = 3;
        piVar48 = (int *)(puVar53 + 4);
        do {
          iVar19 = 0;
          if (uVar18 != 0) {
            iVar19 = (int)(iVar42 + piVar48[-8] * uVar16) / (int)uVar18;
          }
          piVar43[-4] = iVar19;
          iVar19 = 0;
          if (uVar18 != 0) {
            iVar19 = (int)(iVar42 + piVar48[-4] * uVar16) / (int)uVar18;
          }
          *piVar43 = iVar19;
          iVar19 = 0;
          if (uVar18 != 0) {
            iVar19 = (int)(iVar42 + *piVar48 * uVar16) / (int)uVar18;
          }
          piVar43[4] = iVar19;
          piVar43 = piVar43 + 1;
          lVar50 = lVar50 + -1;
          piVar48 = piVar48 + 1;
        } while (lVar50 != 0);
      }
      uVar18 = -uVar7;
      bVar20 = -1 < (int)uVar7;
      iVar42 = *(int *)((long)puVar53 + 0xc) >> (uVar18 & 0x1f);
      if (bVar20) {
        iVar42 = *(int *)((long)puVar53 + 0xc) << (ulong)(uVar7 & 0x1f);
      }
      iVar19 = *(int *)((long)puVar53 + 0x1c) >> (uVar18 & 0x1f);
      if (bVar20) {
        iVar19 = *(int *)((long)puVar53 + 0x1c) << (ulong)(uVar7 & 0x1f);
      }
      iVar10 = *(int *)((long)puVar53 + 0x2c) >> (uVar18 & 0x1f);
      if (bVar20) {
        iVar10 = *(int *)((long)puVar53 + 0x2c) << (ulong)(uVar7 & 0x1f);
      }
      uVar61 = (long)(int)param_15 + 1U & 0xfffffffffffffffe;
      uVar6 = param_16 + 1 & 0xfffffffe;
      iVar8 = (int)(param_16 + 1) >> 1;
      uVar60 = (uint)uVar61;
      lVar50 = (long)(int)uVar60 * 2 + (long)(int)uVar60;
      lVar22 = lVar50 * 4;
      _malloc();
      puVar54 = (ushort *)(uVar61 * (long)(int)uVar6 * 2);
      puVar23 = puVar54;
      _malloc();
      _malloc();
      lVar24 = uVar61 << 2;
      _malloc();
      uVar56 = (uint)((long)(int)param_15 + 1U);
      uVar18 = (int)uVar56 >> 1;
      uVar56 = (uVar56 & 0xfffffffe) + uVar18;
      lVar55 = (long)iVar8 * (long)(int)uVar56 * 2;
      lVar25 = lVar55;
      _malloc();
      _malloc();
      uVar26 = -(ulong)(uVar56 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar56 << 1;
      uVar27 = uVar26;
      _malloc();
      uVar52 = 0;
      if (((lVar22 != 0) && (uVar27 != 0)) &&
         ((lVar24 != 0 &&
          ((((lVar55 != 0 && (puVar54 != (ushort *)0x0)) && (puVar23 != (ushort *)0x0)) &&
           (lVar25 != 0)))))) {
        uVar38 = (ulong)uVar18;
        uVar3 = uVar7 + uVar34;
        lVar62 = (long)(int)uVar56;
        puVar33 = (ushort *)(lVar22 + lVar50 * 2);
        lVar36 = lVar22 + uVar61 * 2;
        if ((int)param_16 < 1) {
          uStack_1d8 = (ulong)(uVar60 << 1);
          uVar13 = uVar60;
          if ((int)uVar60 < 2) {
            uVar13 = 1;
          }
          uStack_f0 = (ulong)uVar13;
        }
        else {
          iVar47 = 0;
          uStack_1d8 = (ulong)(uVar60 << 1);
          lVar35 = lVar22 + (long)(int)(uVar60 << 1) * 2;
          uVar57 = -(ulong)((uVar60 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | uStack_1d8 << 1;
          uVar13 = uVar60;
          if ((int)uVar60 < 2) {
            uVar13 = 1;
          }
          uStack_f0 = (ulong)uVar13;
          lVar44 = (long)(int)(uint)param_5;
          uVar41 = -(param_5 >> 0x1f & 1) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
          uVar28 = param_6;
          puVar45 = puVar23;
          lStack_120 = lVar25;
          lStack_110 = lVar55;
          puStack_c8 = puVar54;
          do {
            FUN_108222bcc(param_1,param_2,param_3,param_4,uVar28,param_15,lVar22);
            if (iVar47 == param_16 - 1) {
              _memcpy(puVar33,lVar22,lVar50 * 2);
            }
            else {
              FUN_108222bcc(param_1 + lVar44,param_2 + lVar44,param_3 + lVar44,param_4,uVar34,
                            param_15,puVar33);
            }
            lVar39 = 0;
            do {
              *(short *)((long)puVar45 + lVar39) =
                   (short)((uint)*(ushort *)(lVar36 + lVar39) * 0xb717 +
                           (uint)*(ushort *)(lVar22 + lVar39) * 0x366d +
                           (uint)*(ushort *)(lVar35 + lVar39) * 0x127c + 0x8000 >> 0x10);
              lVar39 = lVar39 + 2;
              puVar40 = puVar33;
              puVar32 = puVar45;
              uVar28 = uStack_f0;
            } while (uStack_f0 << 1 != lVar39);
            do {
              puVar32[uVar61] =
                   (ushort)((uint)puVar40[uVar61] * 0xb717 + (uint)*puVar40 * 0x366d +
                            (uint)*(ushort *)((long)puVar40 + uVar57) * 0x127c + 0x8000 >> 0x10);
              uVar28 = uVar28 - 1;
              puVar40 = puVar40 + 1;
              puVar32 = puVar32 + 1;
            } while (uVar28 != 0);
            lVar39 = 0;
            do {
              uVar28 = (ulong)*(ushort *)(lVar22 + lVar39);
              FUN_108223058(uVar28,uVar3,uVar14);
              uVar29 = (ulong)*(ushort *)(lVar36 + lVar39);
              FUN_108223058(uVar29,uVar3,uVar14);
              uVar30 = (ulong)*(ushort *)(lVar35 + lVar39);
              FUN_108223058(uVar30,uVar3,uVar14);
              uVar28 = (uVar29 & 0xffffffff) * 0xb717 + (uVar28 & 0xffffffff) * 0x366d +
                       (uVar30 & 0xffffffff) * 0x127c + 0x8000 >> 0x10;
              FUN_108223374(uVar28,uVar3,uVar14);
              *(short *)((long)puStack_c8 + lVar39) = (short)uVar28;
              lVar39 = lVar39 + 2;
              puVar40 = puStack_c8;
              uVar28 = uStack_f0;
              puVar32 = puVar33;
            } while (uStack_f0 << 1 != lVar39);
            do {
              uVar29 = (ulong)*puVar32;
              FUN_108223058(uVar29,uVar3,uVar14);
              uVar30 = (ulong)puVar32[uVar61];
              FUN_108223058(uVar30,uVar3,uVar14);
              uVar31 = (ulong)*(ushort *)((long)puVar32 + uVar57);
              FUN_108223058(uVar31,uVar3,uVar14);
              uVar29 = (uVar30 & 0xffffffff) * 0xb717 + (uVar29 & 0xffffffff) * 0x366d +
                       (uVar31 & 0xffffffff) * 0x127c + 0x8000 >> 0x10;
              FUN_108223374(uVar29,uVar3,uVar14);
              puVar40[uVar61] = (ushort)uVar29;
              uVar28 = uVar28 - 1;
              puVar40 = puVar40 + 1;
              puVar32 = puVar32 + 1;
            } while (uVar28 != 0);
            uVar28 = param_6 & 0xffffffff;
            FUN_108222cc8(lVar22,puVar33,lStack_110,uVar38,uVar28,uVar14);
            _memcpy(lStack_120,lStack_110,uVar26);
            lStack_120 = lStack_120 + lVar62 * 2;
            param_1 = param_1 + uVar41;
            lStack_110 = lStack_110 + lVar62 * 2;
            param_2 = param_2 + uVar41;
            param_3 = param_3 + uVar41;
            iVar47 = iVar47 + 2;
            puVar45 = (ushort *)((long)puVar45 + uVar57);
            puStack_c8 = (ushort *)((long)puStack_c8 + uVar57);
          } while (iVar47 < (int)param_16);
        }
        lVar68 = (long)(int)(uVar60 << 1);
        lVar64 = (long)(int)uVar60 + -1;
        iVar21 = (int)lVar64;
        iVar47 = iVar21 >> 1;
        uVar13 = -1 << (ulong)(uVar3 & 0x1f);
        uVar17 = ~uVar13;
        lVar44 = (long)(int)uVar18;
        lVar39 = uVar61 * 2;
        uVar57 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | uVar38 << 1;
        lVar49 = uVar57 - 2;
        lVar35 = (-(ulong)(uVar60 - 2 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar60 - 2) << 1) + 2;
        uVar26 = 0xffffffffffffffff;
        uVar11 = 0;
        do {
          uVar37 = uVar11;
          uVar28 = uVar26;
          iVar63 = 0;
          uVar26 = 0;
          lVar1 = lVar25;
          puVar45 = puVar23;
          lVar58 = lVar25;
          puVar40 = puVar54;
          lVar69 = lVar55;
          lStack_d0 = lVar25;
          do {
            lVar46 = lVar1;
            lVar67 = 0;
            lVar70 = 0;
            uVar11 = uVar56;
            if ((int)(uVar6 - 2) <= iVar63) {
              uVar11 = 0;
            }
            lVar1 = lVar46 + (long)(int)uVar11 * 2;
            lVar5 = lVar46 + lVar49;
            iVar65 = -3;
            lVar51 = lVar50 * 2;
            lVar59 = lVar35 + lVar50 * 2;
            lVar66 = lVar35;
            do {
              iVar2 = *(short *)(lVar46 + lVar70) * 3 + 2;
              uVar4 = (uint)*puVar45 + (iVar2 + *(short *)(lStack_d0 + lVar70) >> 2);
              uVar12 = 0;
              if (-1 < (int)uVar4) {
                uVar12 = uVar17;
              }
              if ((uVar4 & uVar13) != 0) {
                uVar4 = uVar12;
              }
              *(undefined2 *)(lVar22 + lVar67) = (short)uVar4;
              uVar4 = (uint)puVar45[uVar61] + (iVar2 + *(short *)(lVar1 + lVar70) >> 2);
              uVar12 = 0;
              if (-1 < (int)uVar4) {
                uVar12 = uVar17;
              }
              if ((uVar4 & uVar13) != 0) {
                uVar4 = uVar12;
              }
              *(undefined2 *)(lVar22 + lVar51) = (short)uVar4;
              (*pcRam0000000113869a40)
                        (lVar46 + lVar70,lStack_d0 + lVar70,iVar47,puVar45 + 1,
                         (undefined2 *)(lVar22 + lVar67) + 1,uVar3);
              (*pcRam0000000113869a40)
                        (lVar46 + lVar70,lVar1 + lVar70,iVar47,puVar45 + uVar61 + 1,
                         (undefined2 *)(lVar22 + lVar51) + 1,uVar3);
              iVar2 = *(short *)(lVar5 + lVar70) * 3 + 2;
              uVar4 = (uint)puVar45[lVar64] + (iVar2 + *(short *)(lStack_d0 + lVar49 + lVar70) >> 2)
              ;
              uVar12 = 0;
              if (-1 < (int)uVar4) {
                uVar12 = uVar17;
              }
              if ((uVar4 & uVar13) != 0) {
                uVar4 = uVar12;
              }
              *(short *)(lVar22 + lVar66) = (short)uVar4;
              uVar4 = (uint)puVar45[(int)(iVar21 + uVar60)] +
                      (iVar2 + *(short *)(lVar5 + (long)(int)uVar11 * 2 + lVar70) >> 2);
              uVar12 = 0;
              if (-1 < (int)uVar4) {
                uVar12 = uVar17;
              }
              if ((uVar4 & uVar13) != 0) {
                uVar4 = uVar12;
              }
              *(short *)(lVar22 + lVar59) = (short)uVar4;
              lVar70 = lVar70 + uVar57;
              lVar66 = lVar66 + lVar39;
              lVar67 = lVar67 + lVar39;
              lVar59 = lVar59 + lVar39;
              lVar51 = lVar51 + lVar39;
              bVar20 = iVar65 != -1;
              iVar65 = iVar65 + 1;
            } while (bVar20);
            uVar41 = 0;
            do {
              uVar29 = (ulong)*(ushort *)(lVar22 + uVar41 * 2);
              FUN_108223058(uVar29,uVar3,uVar14);
              uVar30 = (ulong)*(ushort *)(lVar36 + uVar41 * 2);
              FUN_108223058(uVar30,uVar3,uVar14);
              uVar31 = (ulong)*(ushort *)(lVar22 + lVar68 * 2 + uVar41 * 2);
              FUN_108223058(uVar31,uVar3,uVar14);
              uVar29 = (uVar30 & 0xffffffff) * 0xb717 + (uVar29 & 0xffffffff) * 0x366d +
                       (uVar31 & 0xffffffff) * 0x127c + 0x8000 >> 0x10;
              FUN_108223374(uVar29,uVar3,uVar14);
              *(short *)(lVar24 + uVar41 * 2) = (short)uVar29;
              uVar41 = uVar41 + 1;
              puVar32 = puVar33;
              lVar70 = lVar24;
              uVar29 = uStack_f0;
            } while (uStack_f0 != uVar41);
            do {
              uVar41 = (ulong)*puVar32;
              FUN_108223058(uVar41,uVar3,uVar14);
              uVar30 = (ulong)puVar32[uVar61];
              FUN_108223058(uVar30,uVar3,uVar14);
              uVar31 = (ulong)puVar32[lVar68];
              FUN_108223058(uVar31,uVar3,uVar14);
              uVar41 = (uVar30 & 0xffffffff) * 0xb717 + (uVar41 & 0xffffffff) * 0x366d +
                       (uVar31 & 0xffffffff) * 0x127c + 0x8000 >> 0x10;
              FUN_108223374(uVar41,uVar3,uVar14);
              *(short *)(lVar70 + lVar39) = (short)uVar41;
              uVar29 = uVar29 - 1;
              puVar32 = puVar32 + 1;
              lVar70 = lVar70 + 2;
            } while (uVar29 != 0);
            FUN_108222cc8(lVar22,puVar33,uVar27,uVar38,uVar34,uVar14);
            puVar32 = puVar40;
            (*pcRam0000000113869a50)(puVar40,lVar24,puVar45,uStack_1d8,uVar3);
            uVar26 = (long)puVar32 + uVar26;
            (*pcRam0000000113869a48)(lVar69,uVar27,lVar58,lVar62);
            puVar45 = puVar45 + lVar68;
            lVar58 = lVar58 + lVar62 * 2;
            puVar40 = puVar40 + lVar68;
            iVar63 = iVar63 + 2;
            lVar69 = lVar69 + lVar62 * 2;
            lStack_d0 = lVar46;
          } while (iVar63 < (int)uVar6);
          uVar11 = 1;
        } while ((uVar37 == 0) ||
                ((((ulong)(long)((double)(int)uVar60 * 3.0 * (double)(int)uVar6) <= uVar26 &&
                  (uVar26 <= uVar28)) && (uVar11 = uVar37 + 1, uVar37 < 3))));
        uVar56 = 0;
        uVar34 = uVar7 + 0x10;
        iVar47 = 1 << (ulong)(uVar7 + 0xf & 0x1f);
        if ((int)param_15 < 2) {
          param_15 = 1;
        }
        if ((int)param_16 < 2) {
          param_16 = 1;
        }
        puVar33 = puVar23;
        lVar50 = lVar25;
        do {
          uVar26 = 0;
          do {
            uVar15 = puVar33[uVar26];
            uVar7 = (int)(iVar42 + iVar47 +
                          ((int)*(short *)(lVar50 + (ulong)(uint)((int)(uVar26 >> 1) << 1)) +
                          (uint)uVar15) * (int)uStack_b0 +
                          ((int)*(short *)(lVar50 + (long)(int)(uVar18 + ((uint)uVar26 >> 1)) * 2) +
                          (uint)uVar15) * uStack_b0._4_4_ +
                         ((int)*(short *)(lVar50 + (long)(int)(uVar60 + ((uint)uVar26 >> 1)) * 2) +
                         (uint)uVar15) * iStack_a8) >> (uVar34 & 0x1f);
            if ((int)param_14 < 9) {
              if ((uVar7 & 0xff00) != 0) {
                uVar7 = ~((uint)(int)(short)uVar7 >> 0xf);
              }
              *(char *)(param_7 + uVar26) = (char)uVar7;
            }
            else {
              uVar6 = uVar16;
              if ((int)(short)uVar7 <= (int)uVar16) {
                uVar6 = uVar7;
              }
              uVar9 = (undefined2)uVar6;
              if ((uVar7 & 0x8000) != 0) {
                uVar9 = 0;
              }
              *(undefined2 *)(param_7 + uVar26 * 2) = uVar9;
            }
            uVar26 = uVar26 + 1;
          } while (param_15 != uVar26);
          iVar21 = 3;
          if ((uVar56 & 1) == 0) {
            iVar21 = 0;
          }
          lVar50 = lVar50 + (long)(int)(iVar21 * uVar18) * 2;
          param_7 = param_7 + (int)param_8;
          uVar56 = uVar56 + 1;
          puVar33 = puVar33 + uVar61;
        } while (uVar56 != param_16);
        iVar42 = 0;
        if ((int)uVar18 < 2) {
          uVar18 = 1;
        }
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        lVar62 = lVar62 * 2;
        lVar50 = lVar25 + uVar61 * 2;
        lVar36 = lVar25 + lVar44 * 2;
        lVar35 = lVar25;
        do {
          uVar26 = 0;
          do {
            iVar21 = (int)*(short *)(lVar35 + uVar26 * 2);
            iVar63 = (int)*(short *)(lVar36 + uVar26 * 2);
            iVar65 = (int)*(short *)(lVar50 + uVar26 * 2);
            uVar7 = iVar19 + iVar47 + (int)uStack_a0 * iVar21 + uStack_a0._4_4_ * iVar63 +
                    (int)uStack_98 * iVar65 >> (uVar34 & 0x1f);
            uVar56 = iVar10 + iVar47 + (int)uStack_90 * iVar21 + uStack_90._4_4_ * iVar63 +
                     (int)uStack_88 * iVar65 >> (uVar34 & 0x1f);
            if ((int)param_14 < 9) {
              if ((uVar7 & 0xff00) != 0) {
                uVar7 = ~((uint)(int)(short)uVar7 >> 0xf);
              }
              *(char *)(param_9 + uVar26) = (char)uVar7;
              if ((uVar56 & 0xff00) != 0) {
                uVar56 = ~((uint)(int)(short)uVar56 >> 0xf);
              }
              *(char *)(param_12 + uVar26) = (char)uVar56;
            }
            else {
              uVar6 = uVar16;
              if ((int)(short)uVar7 <= (int)uVar16) {
                uVar6 = uVar7;
              }
              uVar9 = (undefined2)uVar6;
              if ((uVar7 & 0x8000) != 0) {
                uVar9 = 0;
              }
              *(undefined2 *)(param_9 + uVar26 * 2) = uVar9;
              uVar7 = uVar16;
              if ((int)(short)uVar56 <= (int)uVar16) {
                uVar7 = uVar56;
              }
              uVar9 = (undefined2)uVar7;
              if ((uVar56 & 0x8000) != 0) {
                uVar9 = 0;
              }
              *(undefined2 *)(param_12 + uVar26 * 2) = uVar9;
            }
            uVar26 = uVar26 + 1;
          } while (uVar18 != uVar26);
          param_9 = param_9 + (int)param_10;
          param_12 = param_12 + (int)param_13;
          iVar42 = iVar42 + 1;
          lVar50 = lVar50 + lVar62;
          lVar36 = lVar36 + lVar62;
          lVar35 = lVar35 + lVar62;
        } while (iVar42 != iVar8);
        uVar52 = 1;
      }
      _free(puVar23);
      _free(lVar25);
      _free(puVar54);
      _free(lVar55);
      _free(lVar24);
      _free(uVar27);
      _free(lVar22);
    }
    else {
      uVar52 = 0;
    }
  }
  return uVar52;
}



/* Entry: 108222bcc; end: 108222cc7;  */

void FUN_108222bcc(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6,
                  ushort *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort uVar11;
  
  lVar8 = 0;
  iVar2 = param_4 / 2;
  if (param_5 < 9) {
    iVar2 = param_4;
  }
  uVar1 = param_6 + 1 & 0xfffffffe;
  uVar3 = 2;
  if (0xc < param_5) {
    uVar3 = 0xe - param_5;
  }
  uVar6 = -uVar3;
  uVar4 = param_6;
  if ((int)param_6 < 2) {
    uVar4 = 1;
  }
  uVar9 = (ulong)uVar4;
  puVar10 = param_7;
  do {
    if (param_5 == 8) {
      *puVar10 = (ushort)*(byte *)(param_1 + lVar8) << 2;
      puVar10[(int)uVar1] = (ushort)*(byte *)(param_2 + lVar8) << 2;
      uVar11 = (ushort)*(byte *)(param_3 + lVar8) << 2;
    }
    else {
      uVar11 = *(ushort *)(param_1 + lVar8 * 2);
      bVar7 = -1 < (int)uVar3;
      uVar5 = uVar11 >> (ulong)(uVar6 & 0x1f);
      if (bVar7) {
        uVar5 = uVar11 << (ulong)(uVar3 & 0x1f);
      }
      *puVar10 = uVar5;
      uVar11 = *(ushort *)(param_2 + lVar8 * 2);
      uVar5 = uVar11 >> (ulong)(uVar6 & 0x1f);
      if (bVar7) {
        uVar5 = uVar11 << (ulong)(uVar3 & 0x1f);
      }
      puVar10[(int)uVar1] = uVar5;
      uVar5 = *(ushort *)(param_3 + lVar8 * 2);
      uVar11 = uVar5 >> (ulong)(uVar6 & 0x1f);
      if (bVar7) {
        uVar11 = uVar5 << (ulong)(uVar3 & 0x1f);
      }
    }
    puVar10[(int)(uVar1 << 1)] = uVar11;
    puVar10 = puVar10 + 1;
    lVar8 = lVar8 + iVar2;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  if ((param_6 & 1) != 0) {
    param_7[(int)param_6] = (param_7 + (int)param_6)[-1];
    param_7[(int)(uVar1 + param_6)] = (param_7 + (int)(uVar1 + param_6))[-1];
    param_7[(int)(param_6 + (param_6 + 1) * 2)] = (param_7 + (int)(param_6 + (param_6 + 1) * 2))[-1]
    ;
  }
  return;
}



/* Entry: 108222cc8; end: 108222e2b;  */

void FUN_108222cc8(long param_1,long param_2,short *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  lVar9 = 0;
  uVar4 = param_4 << 1;
  param_1 = param_1 + 2;
  uVar10 = param_4;
  if ((int)param_4 < 2) {
    uVar10 = 1;
  }
  do {
    uVar3 = ((undefined2 *)(param_1 + lVar9))[-1];
    uVar6 = (uint)uVar3;
    FUN_108222e2c(uVar3,*(undefined2 *)(param_1 + lVar9),*(undefined2 *)(param_2 + lVar9),
                  ((undefined2 *)(param_2 + lVar9))[1],param_5,param_6);
    puVar1 = (undefined2 *)(param_1 + (long)(int)uVar4 * 2 + lVar9);
    uVar3 = puVar1[-1];
    uVar7 = (uint)uVar3;
    puVar2 = (undefined2 *)(param_2 + (long)(int)uVar4 * 2 + lVar9);
    FUN_108222e2c(uVar3,*puVar1,*puVar2,puVar2[1],param_5,param_6);
    puVar1 = (undefined2 *)(param_1 + (long)(int)(param_4 << 2) * 2 + lVar9);
    uVar3 = puVar1[-1];
    uVar8 = (uint)uVar3;
    puVar2 = (undefined2 *)(param_2 + (long)(int)(param_4 << 2) * 2 + lVar9);
    FUN_108222e2c(uVar3,*puVar1,*puVar2,puVar2[1],param_5,param_6);
    sVar5 = (short)((ulong)(uVar7 * 0xb717) + (ulong)(uVar6 * 0x366d + 0x8000) +
                    (ulong)(uVar8 * 0x127c) >> 0x10);
    *param_3 = (short)uVar6 - sVar5;
    param_3[(int)param_4] = (short)uVar7 - sVar5;
    *(short *)((long)param_3 +
              (-(ulong)((param_4 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | (ulong)uVar4 << 1)) =
         (short)uVar8 - sVar5;
    param_3 = param_3 + 1;
    lVar9 = lVar9 + 4;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  return;
}



/* Entry: 108222e2c; end: 108222eeb;  */

void FUN_108222e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = 2;
  if (0xc < param_5) {
    iVar1 = 0xe - param_5;
  }
  FUN_108223058(param_1,iVar1 + param_5,param_6);
  FUN_108223058(param_2,iVar1 + param_5,param_6);
  FUN_108223058(param_3,iVar1 + param_5,param_6);
  FUN_108223058(param_4,iVar1 + param_5,param_6);
  FUN_108223374((int)param_1 + (int)param_2 + (int)param_3 + (int)param_4 + 2U >> 2,iVar1 + param_5,
                param_6);
  return;
}



/* Entry: 108222eec; end: 108222ef7;  */

bool FUN_108222eec(int param_1)

{
  return param_1 == 6;
}



/* Entry: 108222ef8; end: 108223057;  */

void FUN_108222ef8(void)

{
  ulong uVar1;
  double dVar2;
  
  if (iRam0000000113824e80 == 0) {
    uVar1 = 0;
    do {
      dVar2 = (double)(uVar1 & 0xffffffff) / 1024.0;
      if (dVar2 <= 0.08124285829863151) {
        dVar2 = dVar2 / 4.5;
      }
      else {
        dVar2 = (dVar2 + 0.09929682680944) * 0.909672415686275;
        _pow(dVar2,0x4001c71c71c71c72);
      }
      *(int *)(uVar1 * 4 + 0x113824e84) = (int)(dVar2 * 65536.0 + 0.5);
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x401);
    uVar1 = 0;
    uRam0000000113825e88 = uRam0000000113825e84;
    do {
      dVar2 = (double)(uVar1 & 0xffffffff) / 512.0;
      if (dVar2 <= 0.018053968510807) {
        dVar2 = dVar2 * 4.5;
      }
      else {
        _pow(dVar2,0x3fdccccccccccccc);
        dVar2 = dVar2 * 1.09929682680944 + -0.09929682680944;
      }
      *(int *)(uVar1 * 4 + 0x113825e8c) = (int)(dVar2 * 65536.0 + 0.5);
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0x201);
    uRam0000000113826690 = uRam000000011382668c;
    iRam0000000113824e80 = 1;
  }
  return;
}



/* Entry: 108223058; end: 108223373;  */

ulong FUN_108223058(ulong param_1,uint param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined8 uVar11;
  
  uVar6 = (uint)param_1;
  if (param_3 == 0xd) {
    if ((int)param_2 < 10) {
      return (ulong)*(uint *)((long)(int)(uVar6 << (ulong)(10 - param_2 & 0x1f)) * 4 + 0x113824e84);
    }
    uVar5 = param_2 - 10;
    uVar4 = uVar6 >> (ulong)(uVar5 & 0x1f);
    lVar1 = (ulong)uVar4 * 4;
    iVar3 = *(int *)(lVar1 + 0x113824e84);
    iVar2 = 0;
    if (uVar5 != 0) {
      iVar2 = 1 << (ulong)(param_2 - 0xb & 0x1f);
    }
    return (ulong)((iVar2 + (*(int *)(lVar1 + 0x113824e88) - iVar3) *
                            (uVar6 - (uVar4 << (ulong)(uVar5 & 0x1f))) >> (ulong)(uVar5 & 0x1f)) +
                  iVar3);
  }
  fVar8 = 0.0;
  if (0x11 < param_3 - 1U) goto LAB_108223330;
  fVar7 = (float)(param_1 & 0xffffffff) / (float)(uint)~(-1 << (ulong)(param_2 & 0x1f));
  fVar8 = 0.0;
  switch(param_3) {
  default:
    if (fVar7 < 0.08124286) {
code_r0x0001082230dc:
      fVar8 = 4.5;
      goto code_r0x0001082232d4;
    }
    fVar8 = 1.0;
    if (fVar7 < 1.0) goto code_r0x0001082231ac;
    break;
  case 2:
  case 3:
  case 0xd:
    break;
  case 4:
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    dVar9 = (double)fVar8;
    uVar11 = 0x40019999a0000000;
    goto code_r0x000108223328;
  case 5:
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    dVar9 = (double)fVar8;
    uVar11 = 0x4006666660000000;
    goto code_r0x000108223328;
  case 7:
    if (0.09128634 <= fVar7) {
      fVar8 = 1.0;
      if (fVar7 < 1.0) {
        fVar8 = 0.1115722;
        fVar10 = 1.1115721;
        goto code_r0x0001082231c0;
      }
    }
    else {
      fVar8 = fVar7 * 0.25;
    }
    break;
  case 8:
    goto LAB_108223360;
  case 9:
    if (fVar7 <= 0.0) {
      fVar8 = 0.005;
      break;
    }
    fVar8 = (float)NEON_fminnm(fVar7,0x3f800000);
    fVar8 = fVar8 + -1.0 + fVar8 + -1.0;
code_r0x0001082232a8:
    dVar9 = (double)fVar8;
    ___exp10();
    goto code_r0x00010822332c;
  case 10:
    if (0.0 < fVar7) {
      fVar8 = (float)NEON_fminnm(fVar7,0x3f800000);
      fVar8 = (fVar8 + -1.0) * 2.5;
      goto code_r0x0001082232a8;
    }
    fVar8 = 0.0015811388;
    break;
  case 0xb:
    if (fVar7 < 0.08124286) goto code_r0x0001082230dc;
code_r0x0001082231ac:
    fVar8 = 0.09929682;
    fVar10 = 1.0992968;
code_r0x0001082231c0:
    dVar9 = (double)((fVar7 + fVar8) / fVar10);
    uVar11 = 0x4001c71c80000000;
    goto code_r0x000108223328;
  case 0x10:
    if (0.0 < fVar7) {
      dVar9 = (double)fVar7;
      _pow(dVar9,0x3f89f9b580000000);
      fVar8 = (float)dVar9 + -0.8359375;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar7 = (float)dVar9 * -18.6875 + 18.851562;
      if (fVar7 <= 1.1754944e-38) {
        fVar7 = 1.1754944e-38;
      }
      dVar9 = (double)(fVar8 / fVar7);
      uVar11 = 0x4019172160000000;
      goto code_r0x000108223328;
    }
    break;
  case 0x11:
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar9 = (double)fVar7;
    _pow(dVar9,0x4004ccccc0000000);
    fVar7 = (float)dVar9;
    fVar8 = 0.9165553;
code_r0x0001082232d4:
    fVar8 = fVar7 / fVar8;
    break;
  case 0x12:
    if (fVar7 <= 0.5) {
      fVar8 = fVar7 * fVar7 * 0.33333334;
    }
    else {
      fVar8 = (fVar7 + -0.5599107) / 0.17883277;
      _expf();
      fVar8 = (fVar8 + 0.28466892) / 12.0;
    }
    dVar9 = (double)fVar8;
    uVar11 = 0x3ff3333340000000;
code_r0x000108223328:
    _pow(dVar9,uVar11);
code_r0x00010822332c:
    fVar8 = (float)dVar9;
  }
LAB_108223330:
  fVar8 = fVar8 * 65535.0;
  fVar7 = fVar8 + -0.5;
  if (0.0 <= fVar8) {
    fVar7 = fVar8 + 0.5;
  }
  param_1 = (ulong)(uint)(int)(float)(int)fVar7;
LAB_108223360:
  return param_1;
}



/* Entry: 108223374; end: 108223697;  */

uint FUN_108223374(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  
  if (param_3 == 0xd) {
    iVar2 = *(int *)((ulong)(uint)((int)param_1 >> 7) * 4 + 0x113825e8c);
    iVar1 = iVar2 >> (0x10 - param_2 & 0x1f);
    if (0xf < (int)param_2) {
      iVar1 = iVar2 << (ulong)(param_2 - 0x10 & 0x1f);
    }
    iVar3 = *(int *)((ulong)(((int)param_1 >> 7) + 1) * 4 + 0x113825e8c);
    iVar2 = iVar3 >> (0x10 - param_2 & 0x1f);
    if (0xf < (int)param_2) {
      iVar2 = iVar3 << (ulong)(param_2 - 0x10 & 0x1f);
    }
    param_1 = iVar1 + ((iVar2 - iVar1) * (param_1 & 0x7f) + 0x40 >> 7);
    goto LAB_108223640;
  }
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (0x11 < param_3 - 1U) goto LAB_108223608;
  fVar4 = (float)param_1 / 65535.0;
  fVar6 = fVar5;
  switch(param_3) {
  default:
    if (0.01805397 <= fVar4) {
      fVar6 = 1.0;
      if (fVar4 < 1.0) goto code_r0x0001082234ac;
    }
    else {
code_r0x00010822342c:
      fVar6 = 4.5;
code_r0x000108223430:
      fVar6 = fVar4 * fVar6;
    }
    break;
  case 2:
  case 3:
  case 0xd:
    break;
  case 4:
    fVar6 = 1.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4;
    }
    dVar7 = (double)fVar6;
    uVar8 = 0x3fdd1745c0000000;
    goto code_r0x000108223600;
  case 5:
    fVar6 = 1.0;
    if (fVar4 <= 1.0) {
      fVar6 = fVar4;
    }
    dVar7 = (double)fVar6;
    uVar8 = 0x3fd6db6dc0000000;
    goto code_r0x000108223600;
  case 7:
    if (fVar4 < 0.022821585) {
      fVar6 = 4.0;
      goto code_r0x000108223430;
    }
    fVar6 = 1.0;
    if (fVar4 < 1.0) {
      dVar7 = (double)fVar4;
      _pow(dVar7,0x3fdcccccc0000000);
      fVar6 = (float)dVar7;
      fVar5 = -0.1115722;
      fVar4 = 1.1115721;
      goto code_r0x0001082234d0;
    }
    break;
  case 8:
    goto LAB_108223640;
  case 9:
    if (0.01 <= fVar4) {
      fVar6 = (float)NEON_fminnm(fVar4,0x3f800000);
      dVar7 = (double)fVar6;
      _log10();
      fVar6 = (float)dVar7 * 0.5;
code_r0x0001082235d8:
      fVar6 = fVar6 + 1.0;
    }
    break;
  case 10:
    if (0.0031622776 <= fVar4) {
      fVar6 = (float)NEON_fminnm(fVar4,0x3f800000);
      dVar7 = (double)fVar6;
      _log10();
      fVar6 = (float)dVar7 / 2.5;
      goto code_r0x0001082235d8;
    }
    break;
  case 0xb:
    if (fVar4 < 0.01805397) goto code_r0x00010822342c;
code_r0x0001082234ac:
    dVar7 = (double)fVar4;
    _pow(dVar7,0x3fdcccccc0000000);
    fVar6 = (float)dVar7;
    fVar5 = -0.09929682;
    fVar4 = 1.0992968;
code_r0x0001082234d0:
    fVar6 = fVar5 + fVar4 * fVar6;
    break;
  case 0x10:
    if (0.0 < fVar4) {
      dVar7 = (double)fVar4;
      _pow(dVar7,0x3fc4680000000000);
      dVar7 = (double)(((float)dVar7 * 18.851562 + 0.8359375) / ((float)dVar7 * 18.6875 + 1.0));
      uVar8 = 0x4053b60000000000;
      goto code_r0x000108223600;
    }
    break;
  case 0x11:
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    dVar7 = (double)(fVar4 * 0.9165553);
    uVar8 = 0x3fd89d89e0000000;
code_r0x000108223600:
    _pow(dVar7,uVar8);
    fVar6 = (float)dVar7;
    break;
  case 0x12:
    dVar7 = (double)fVar4;
    _pow(dVar7,0x3feaaaaaa0000000);
    fVar5 = (float)dVar7;
    if (0.0 <= fVar5) {
      if (0.083333336 < fVar5) {
        fVar6 = fVar5 * 12.0 + -0.28466892;
        _logf();
        fVar5 = 0.5599107;
        fVar4 = 0.17883277;
        goto code_r0x0001082234d0;
      }
      fVar6 = SQRT(fVar5 * 3.0);
    }
  }
LAB_108223608:
  fVar6 = fVar6 * (float)(uint)~(-1 << (ulong)(param_2 & 0x1f));
  fVar5 = fVar6 + -0.5;
  if (0.0 <= fVar6) {
    fVar5 = fVar6 + 0.5;
  }
  param_1 = (uint)(float)(int)fVar5;
LAB_108223640:
  return param_1 & 0xffff;
}



/* Entry: 108223698; end: 108223ad7;  */

long FUN_108223698(undefined8 *param_1,short *param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  long lVar8;
  short *psVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  short sVar16;
  ushort uVar17;
  short sVar18;
  ushort uVar19;
  short sVar20;
  ushort uVar21;
  short sVar22;
  ushort uVar23;
  short sVar24;
  ushort uVar25;
  short sVar26;
  ushort uVar27;
  short sVar28;
  ushort uVar29;
  short sVar30;
  ushort uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  
  uVar1 = ~(-1 << (ulong)(param_5 & 0x1f));
  if ((int)param_4 < 8) {
    uVar13 = 0;
    lVar15 = 0;
    lVar8 = 0;
  }
  else {
    uVar6 = (undefined2)uVar1;
    uVar5 = 8;
    lVar15 = 0;
    lVar8 = 0;
    puVar7 = param_1;
    psVar9 = param_2;
    puVar11 = param_3;
    do {
      uVar4 = puVar7[1];
      uVar3 = *puVar7;
      uVar35 = puVar11[1];
      uVar34 = *puVar11;
      sVar16 = (short)uVar3 - *psVar9;
      sVar18 = (short)((ulong)uVar3 >> 0x10) - psVar9[1];
      sVar20 = (short)((ulong)uVar3 >> 0x20) - psVar9[2];
      sVar22 = (short)((ulong)uVar3 >> 0x30) - psVar9[3];
      sVar24 = (short)uVar4 - psVar9[4];
      sVar26 = (short)((ulong)uVar4 >> 0x10) - psVar9[5];
      sVar28 = (short)((ulong)uVar4 >> 0x20) - psVar9[6];
      sVar30 = (short)((ulong)uVar4 >> 0x30) - psVar9[7];
      auVar32._0_2_ = (short)uVar34 + sVar16;
      auVar32._2_2_ = (short)((ulong)uVar34 >> 0x10) + sVar18;
      auVar32._4_2_ = (short)((ulong)uVar34 >> 0x20) + sVar20;
      auVar32._6_2_ = (short)((ulong)uVar34 >> 0x30) + sVar22;
      auVar32._8_2_ = (short)uVar35 + sVar24;
      auVar32._10_2_ = (short)((ulong)uVar35 >> 0x10) + sVar26;
      auVar32._12_2_ = (short)((ulong)uVar35 >> 0x20) + sVar28;
      auVar32._14_2_ = (short)((ulong)uVar35 >> 0x30) + sVar30;
      auVar33._2_2_ = uVar6;
      auVar33._0_2_ = uVar6;
      auVar33._4_2_ = uVar6;
      auVar33._6_2_ = uVar6;
      auVar33._8_2_ = uVar6;
      auVar33._10_2_ = uVar6;
      auVar33._12_2_ = uVar6;
      auVar33._14_2_ = uVar6;
      auVar33 = NEON_smin(auVar32,auVar33,2);
      auVar33 = NEON_smax(auVar33,ZEXT216(0),2);
      uVar17 = MP_INT_ABS(sVar16);
      uVar19 = MP_INT_ABS(sVar18);
      uVar21 = MP_INT_ABS(sVar20);
      uVar23 = MP_INT_ABS(sVar22);
      uVar25 = MP_INT_ABS(sVar24);
      uVar27 = MP_INT_ABS(sVar26);
      uVar29 = MP_INT_ABS(sVar28);
      uVar31 = MP_INT_ABS(sVar30);
      puVar11[1] = auVar33._8_8_;
      *puVar11 = auVar33._0_8_;
      lVar15 = lVar15 + (ulong)((uint)uVar17 + (uint)uVar19) + (ulong)((uint)uVar21 + (uint)uVar23);
      lVar8 = lVar8 + (ulong)((uint)uVar25 + (uint)uVar27) + (ulong)((uint)uVar29 + (uint)uVar31);
      uVar5 = uVar5 + 8;
      puVar7 = puVar7 + 2;
      psVar9 = psVar9 + 8;
      puVar11 = puVar11 + 2;
    } while (uVar5 <= param_4);
    uVar13 = param_4 & 0x7ffffff8;
  }
  lVar15 = lVar15 + lVar8;
  if ((int)uVar13 < (int)param_4) {
    lVar8 = (ulong)param_4 - (ulong)uVar13;
    puVar10 = (ushort *)((long)param_3 + (ulong)uVar13 * 2);
    puVar12 = (ushort *)(param_2 + uVar13);
    puVar14 = (ushort *)((long)param_1 + (ulong)uVar13 * 2);
    do {
      uVar17 = *puVar14;
      uVar19 = *puVar12;
      uVar13 = ((uint)*puVar10 - (uint)uVar19) + (uint)uVar17;
      uVar2 = uVar13;
      if ((int)uVar1 <= (int)uVar13) {
        uVar2 = uVar1;
      }
      uVar21 = 0;
      if (-1 < (int)uVar13) {
        uVar21 = (ushort)uVar2;
      }
      *puVar10 = uVar21;
      uVar2 = (uint)uVar17 - (uint)uVar19;
      uVar13 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar13 = uVar2;
      }
      lVar15 = lVar15 + (ulong)uVar13;
      lVar8 = lVar8 + -1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar8 != 0);
  }
  return lVar15;
}



/* Entry: 108223ad8; end: 108223b17;  */

void FUN_108223ad8(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      FUN_10822aec0(lVar1);
      _free(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 108223b18; end: 108223e9f;  */

long FUN_108223b18(int *param_1,int *param_2,int param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  if (param_3 < 0) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  iVar9 = param_2[0x21];
  if (iVar9 < param_4 + param_3) {
    return 0;
  }
  iVar5 = *param_2;
  if (param_1[0x2ea] != 0) goto LAB_108223b74;
  piVar12 = *(int **)(param_1 + 0x2e4);
  if (piVar12 != (int *)0x0) {
LAB_108223ba4:
    iVar9 = piVar12[0x29];
    if (piVar12[2] == 0) {
      lVar8 = *(long *)(param_1 + 0x2f0);
      if (0 < param_4) {
        iVar11 = *piVar12;
        lVar13 = (long)iVar11;
        lVar14 = *(long *)(param_1 + 0x2e6) + (long)iVar11 * (long)param_3 + 1;
        lVar10 = *(long *)(param_1 + 0x2ee) + (long)iVar11 * (long)param_3;
        iVar11 = param_4;
        do {
          (**(code **)((ulong)(uint)piVar12[3] * 8 + 0x113869c30))(lVar8,lVar14,lVar10,lVar13);
          lVar1 = lVar10 + lVar13;
          lVar14 = lVar14 + lVar13;
          iVar11 = iVar11 + -1;
          lVar8 = lVar10;
          lVar10 = lVar1;
        } while (iVar11 != 0);
        lVar8 = lVar1 - lVar13;
      }
      *(long *)(param_1 + 0x2f0) = lVar8;
    }
    else {
      FUN_10822bacc(piVar12,param_4 + param_3);
      if ((int)piVar12 == 0) goto LAB_108223dbc;
    }
    if (param_4 + param_3 < iVar9) {
      if (param_1[0x2ea] == 0) goto LAB_108223b74;
    }
    else {
      param_1[0x2ea] = 1;
    }
    FUN_108223ad8(*(undefined8 *)(param_1 + 0x2e4));
    param_1[0x2e4] = 0;
    param_1[0x2e5] = 0;
    if (param_1[0x2f2] < 1) {
LAB_108223b74:
      return *(long *)(param_1 + 0x2ee) + (long)iVar5 * (long)param_3;
    }
    lVar8 = *(long *)(param_1 + 0x2ee) + (long)(param_2[0x20] * iVar5) + (long)param_2[0x1e];
    func_0x000108253624(lVar8,param_2[0x1f] - param_2[0x1e],param_2[0x21] - param_2[0x20],
                        (long)iVar5);
    if ((int)lVar8 != 0) goto LAB_108223b74;
    goto LAB_108223dbc;
  }
  piVar12 = (int *)0x1;
  _calloc(1,0xd8);
  *(int **)(param_1 + 0x2e4) = piVar12;
  if (piVar12 == (int *)0x0) {
    if (*param_1 != 0) {
      return 0;
    }
    *(undefined **)(param_1 + 2) = &UNK_10f47fa91;
    param_1[0] = 1;
    param_1[1] = 0;
    return 0;
  }
  uVar7 = (long)iVar9 * (long)iVar5;
  if (uVar7 < 0x400000001) {
    _malloc();
    *(ulong *)(param_1 + 0x2ec) = uVar7;
    if (uVar7 == 0) goto LAB_108223d70;
    *(ulong *)(param_1 + 0x2ee) = uVar7;
    param_1[0x2f0] = 0;
    param_1[0x2f1] = 0;
    pbVar15 = *(byte **)(param_1 + 0x2e6);
    uVar16 = *(ulong *)(param_1 + 0x2e8);
    FUN_10822e85c();
    *(ulong *)(piVar12 + 0x32) = uVar7;
    iVar11 = *param_2;
    iVar3 = param_2[1];
    *piVar12 = iVar11;
    piVar12[1] = iVar3;
    if (1 < uVar16) {
      bVar4 = *pbVar15;
      uVar2 = bVar4 & 3;
      piVar12[2] = uVar2;
      piVar12[3] = *pbVar15 >> 2 & 3;
      uVar6 = *pbVar15 >> 4 & 3;
      piVar12[4] = uVar6;
      if (((uVar2 < 2) && (uVar6 < 2)) && (*pbVar15 < 0x40)) {
        piVar12[0x18] = 0;
        piVar12[0x19] = 0;
        piVar12[0x16] = 0;
        piVar12[0x17] = 0;
        piVar12[0x1c] = 0;
        piVar12[0x1d] = 0;
        piVar12[0x1a] = 0;
        piVar12[0x1b] = 0;
        piVar12[0x28] = 0;
        piVar12[0x29] = 0;
        piVar12[0x26] = 0;
        piVar12[0x27] = 0;
        piVar12[0x24] = 0;
        piVar12[0x25] = 0;
        piVar12[0x22] = 0;
        piVar12[0x23] = 0;
        piVar12[0x2e] = 0;
        piVar12[0x2f] = 0;
        piVar12[0x2c] = 0;
        piVar12[0x2d] = 0;
        piVar12[0x2a] = 0;
        piVar12[0x2b] = 0;
        piVar12[0x20] = 0;
        piVar12[0x21] = 0;
        piVar12[0x1e] = 0;
        piVar12[0x1f] = 0;
        piVar12[0x14] = 0;
        piVar12[0x15] = 0;
        piVar12[0x12] = 0;
        piVar12[0x13] = 0;
        piVar12[0x10] = 0;
        piVar12[0x11] = 0;
        piVar12[0xe] = 0;
        piVar12[0xf] = 0;
        piVar12[0xc] = 0;
        piVar12[0xd] = 0;
        piVar12[10] = 0;
        piVar12[0xb] = 0;
        *(code **)(piVar12 + 0x1a) = FUN_108226708;
        *(code **)(piVar12 + 0x1c) = FUN_108226c34;
        *(int **)(piVar12 + 0x16) = piVar12;
        piVar12[0x18] = 0x8226690;
        piVar12[0x19] = 1;
        piVar12[8] = iVar11;
        piVar12[9] = iVar3;
        uVar17 = *(undefined8 *)(param_2 + 0x1d);
        *(undefined8 *)(piVar12 + 0x27) = *(undefined8 *)(param_2 + 0x1f);
        *(undefined8 *)(piVar12 + 0x25) = uVar17;
        piVar12[0x29] = param_2[0x21];
        if ((bVar4 & 3) == 0) {
          if ((ulong)(long)(iVar3 * iVar11) <= uVar16 - 1) goto LAB_108223e7c;
        }
        else {
          func_0x00010822af40(piVar12,pbVar15 + 1);
          if ((int)piVar12 != 0) {
LAB_108223e7c:
            piVar12 = *(int **)(param_1 + 0x2e4);
            if (piVar12[4] == 1) {
              param_4 = iVar9 - param_3;
            }
            else {
              param_1[0x2f2] = 0;
            }
            goto LAB_108223ba4;
          }
        }
      }
    }
    if (*(int **)(*(long *)(param_1 + 0x2e4) + 0x18) == (int *)0x0) {
      iVar9 = 1;
    }
    else {
      iVar9 = **(int **)(*(long *)(param_1 + 0x2e4) + 0x18);
    }
    if (*param_1 != 0) goto LAB_108223dbc;
  }
  else {
    param_1[0x2ec] = 0;
    param_1[0x2ed] = 0;
LAB_108223d70:
    if (*param_1 != 0) goto LAB_108223dbc;
    iVar9 = 1;
  }
  *(undefined **)(param_1 + 2) = &UNK_10f47fa91;
  *param_1 = iVar9;
  param_1[1] = 0;
LAB_108223dbc:
  _free(*(undefined8 *)(param_1 + 0x2ec));
  param_1[0x2ee] = 0;
  param_1[0x2ef] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  FUN_108223ad8(*(undefined8 *)(param_1 + 0x2e4));
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  return 0;
}



/* Entry: 108223ea0; end: 108223f4b;  */

undefined8 FUN_108223ea0(uint *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 2;
  }
  else if (*param_1 < 0xb) {
    uVar1 = 0;
    *(long *)(param_1 + 4) =
         *(long *)(param_1 + 4) + (long)(int)param_1[6] * ((long)(int)param_1[2] + -1);
    param_1[6] = -param_1[6];
  }
  else {
    lVar2 = (long)(int)param_1[2] + -1;
    iVar3 = (int)(lVar2 >> 1);
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + lVar2 * (int)param_1[0xc];
    *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + (long)iVar3 * (long)(int)param_1[0xd];
    param_1[0xc] = -param_1[0xc];
    param_1[0xd] = -param_1[0xd];
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)iVar3 * (long)(int)param_1[0xe];
    param_1[0xe] = -param_1[0xe];
    if (*(long *)(param_1 + 10) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + lVar2 * (int)param_1[0xf];
      param_1[0xf] = -param_1[0xf];
    }
  }
  return uVar1;
}



/* Entry: 108223f4c; end: 1082241a7;  */

uint * FUN_108223f4c(ulong param_1,ulong param_2,long param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint uStack_68;
  uint uStack_64;
  
  uVar9 = (uint)param_2;
  if ((int)uVar9 < 1) {
    return (uint *)0x2;
  }
  uVar8 = (uint)param_1;
  if ((int)uVar8 < 1) {
    return (uint *)0x2;
  }
  if (param_4 == (uint *)0x0) {
    return (uint *)0x2;
  }
  if (param_3 == 0) {
LAB_10822402c:
    uVar9 = (uint)param_1;
    uVar8 = (uint)param_2;
    param_4[1] = uVar9;
    param_4[2] = uVar8;
    if ((int)uVar9 < 1) {
      return (uint *)0x2;
    }
    if ((int)uVar8 < 1) {
      return (uint *)0x2;
    }
    uVar5 = *param_4;
    if (0xc < uVar5) {
      return (uint *)0x2;
    }
    if (((int)param_4[3] < 1) && (*(long *)(param_4 + 0x1c) == 0)) {
      if ((ulong)(byte)(&UNK_10df0ab08)[uVar5] * (param_1 & 0xffffffff) >> 0x1f != 0)
      goto LAB_1082240bc;
      uVar2 = uVar9 * (byte)(&UNK_10df0ab08)[uVar5];
      lVar14 = (ulong)uVar2 * (param_2 & 0xffffffff);
      uVar6 = uVar9 + 1 >> 1;
      lVar12 = (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
      if (uVar5 != 0xc) {
        lVar12 = 0;
        uVar9 = 0;
      }
      bVar7 = 10 < uVar5;
      lVar4 = 0;
      if (bVar7) {
        lVar4 = lVar12;
      }
      lVar12 = 0;
      if (bVar7) {
        lVar12 = (ulong)uVar6 * (ulong)(uVar8 + 1 >> 1);
      }
      uVar8 = 0;
      if (bVar7) {
        uVar8 = uVar9;
      }
      uVar9 = 0;
      if (bVar7) {
        uVar9 = uVar6;
      }
      uVar10 = lVar4 + lVar14 + lVar12 * 2;
      if ((0x400000000 < uVar10) || (_malloc(), uVar10 == 0)) {
        return (uint *)0x1;
      }
      *(ulong *)(param_4 + 0x1c) = uVar10;
      *(ulong *)(param_4 + 4) = uVar10;
      if (uVar5 < 0xb) {
        param_4[6] = uVar2;
        *(long *)(param_4 + 8) = lVar14;
      }
      else {
        lVar1 = uVar10 + lVar14;
        param_4[0xc] = uVar2;
        param_4[0xd] = uVar9;
        *(long *)(param_4 + 0x10) = lVar14;
        *(long *)(param_4 + 0x12) = lVar12;
        *(long *)(param_4 + 6) = lVar1;
        *(long *)(param_4 + 8) = lVar1 + lVar12;
        param_4[0xe] = uVar9;
        *(long *)(param_4 + 0x14) = lVar12;
        if (uVar5 == 0xc) {
          *(long *)(param_4 + 10) = lVar1 + lVar12 * 2;
        }
        *(long *)(param_4 + 0x16) = lVar4;
        param_4[0xf] = uVar8;
      }
    }
    puVar11 = param_4;
    FUN_108224404();
    if (((param_3 != 0) && ((int)puVar11 == 0)) &&
       (puVar11 = (uint *)(ulong)*(uint *)(param_3 + 0x30), *(uint *)(param_3 + 0x30) != 0)) {
      if (param_4 == (uint *)0x0) {
        puVar11 = (uint *)0x2;
      }
      else if (*param_4 < 0xb) {
        puVar11 = (uint *)0x0;
        *(long *)(param_4 + 4) =
             *(long *)(param_4 + 4) + (long)(int)param_4[6] * ((long)(int)param_4[2] + -1);
        param_4[6] = -param_4[6];
      }
      else {
        lVar12 = (long)(int)param_4[2] + -1;
        iVar13 = (int)(lVar12 >> 1);
        *(long *)(param_4 + 4) = *(long *)(param_4 + 4) + lVar12 * (int)param_4[0xc];
        *(long *)(param_4 + 6) = *(long *)(param_4 + 6) + (long)iVar13 * (long)(int)param_4[0xd];
        param_4[0xc] = -param_4[0xc];
        param_4[0xd] = -param_4[0xd];
        *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + (long)iVar13 * (long)(int)param_4[0xe];
        param_4[0xe] = -param_4[0xe];
        if (*(long *)(param_4 + 10) == 0) {
          puVar11 = (uint *)0x0;
        }
        else {
          puVar11 = (uint *)0x0;
          *(long *)(param_4 + 10) = *(long *)(param_4 + 10) + lVar12 * (int)param_4[0xf];
          param_4[0xf] = -param_4[0xf];
        }
      }
      return puVar11;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 0) {
      uVar5 = *(uint *)(param_3 + 0x14);
      param_1 = (ulong)uVar5;
      if ((int)uVar5 < 1) {
        return (uint *)0x2;
      }
      uVar6 = *(uint *)(param_3 + 0x18);
      param_2 = (ulong)uVar6;
      if ((int)uVar6 < 1) {
        return (uint *)0x2;
      }
      if ((int)(*(uint *)(param_3 + 0x10) | *(uint *)(param_3 + 0xc)) < 0) {
        return (uint *)0x2;
      }
      if (uVar9 < uVar6) {
        return (uint *)0x2;
      }
      uVar2 = *(uint *)(param_3 + 0x10) & 0xfffffffe;
      if ((int)uVar9 <= (int)uVar2) {
        return (uint *)0x2;
      }
      if (uVar8 < uVar5) {
        return (uint *)0x2;
      }
      uVar3 = *(uint *)(param_3 + 0xc) & 0xfffffffe;
      if ((int)uVar8 <= (int)uVar3) {
        return (uint *)0x2;
      }
      if ((int)(uVar8 - uVar3) < (int)uVar5) {
        return (uint *)0x2;
      }
      if ((int)(uVar9 - uVar2) < (int)uVar6) {
        return (uint *)0x2;
      }
    }
    if (*(int *)(param_3 + 0x1c) == 0) goto LAB_10822402c;
    uStack_64 = *(uint *)(param_3 + 0x20);
    uStack_68 = *(uint *)(param_3 + 0x24);
    FUN_108253bf0(param_1,param_2,&uStack_64,&uStack_68);
    if ((int)param_1 != 0) {
      param_2 = (ulong)uStack_68;
      param_1 = (ulong)uStack_64;
      goto LAB_10822402c;
    }
LAB_1082240bc:
    puVar11 = (uint *)0x2;
  }
  return puVar11;
}



/* Entry: 1082241a8; end: 1082241df;  */

void FUN_1082241a8(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) < 1) {
      _free(*(undefined8 *)(param_1 + 0x70));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 1082241e0; end: 108224403;  */

undefined8 FUN_1082241e0(uint *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar1 = param_1[1];
  uVar8 = param_1[2];
  *(uint *)(param_2 + 4) = uVar1;
  *(uint *)(param_2 + 8) = uVar8;
  lVar6 = param_2;
  FUN_108224404();
  if ((int)lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 4);
    lVar7 = *(long *)(param_2 + 0x10);
    if (*param_1 < 0xb) {
      if (0 < (int)uVar8) {
        bVar2 = (&UNK_10df0ab08)[*param_1];
        iVar3 = *(int *)(param_2 + 0x18);
        uVar4 = param_1[6];
        uVar8 = uVar8 + 1;
        do {
          _memcpy(lVar7,lVar6,(long)(int)uVar1 * (long)(int)(uint)bVar2);
          lVar6 = lVar6 + (int)uVar4;
          lVar7 = lVar7 + iVar3;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
    }
    else {
      if (0 < (int)uVar8) {
        iVar3 = *(int *)(param_2 + 0x30);
        uVar4 = param_1[0xc];
        uVar8 = uVar8 + 1;
        do {
          _memcpy(lVar7,lVar6,(long)(int)uVar1);
          lVar6 = lVar6 + (int)uVar4;
          lVar7 = lVar7 + iVar3;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
        if (0 < (int)param_1[2]) {
          uVar1 = param_1[1];
          iVar3 = *(int *)(param_2 + 0x34);
          lVar7 = *(long *)(param_2 + 0x18);
          uVar4 = param_1[0xd];
          lVar6 = *(long *)(param_1 + 6);
          uVar8 = (param_1[2] + 1 >> 1) + 1;
          do {
            _memcpy(lVar7,lVar6,
                    (long)((ulong)((uVar1 + 1) - ((int)(uVar1 + 1) >> 0x1f)) << 0x20) >> 0x21);
            lVar6 = lVar6 + (int)uVar4;
            lVar7 = lVar7 + iVar3;
            uVar8 = uVar8 - 1;
          } while (1 < uVar8);
          if (0 < (int)param_1[2]) {
            uVar1 = param_1[1];
            iVar3 = *(int *)(param_2 + 0x38);
            lVar7 = *(long *)(param_2 + 0x20);
            uVar4 = param_1[0xe];
            lVar6 = *(long *)(param_1 + 8);
            uVar8 = (param_1[2] + 1 >> 1) + 1;
            do {
              _memcpy(lVar7,lVar6,
                      (long)((ulong)((uVar1 + 1) - ((int)(uVar1 + 1) >> 0x1f)) << 0x20) >> 0x21);
              lVar6 = lVar6 + (int)uVar4;
              lVar7 = lVar7 + iVar3;
              uVar8 = uVar8 - 1;
            } while (1 < uVar8);
          }
        }
      }
      uVar8 = *param_1;
      if (((uVar8 < 0xd && (1 << (ulong)(uVar8 & 0x1f) & 0x103aU) != 0) ||
          (0xfffffffb < uVar8 - 0xb)) && (0 < (int)param_1[2])) {
        uVar1 = param_1[1];
        iVar3 = *(int *)(param_2 + 0x3c);
        lVar7 = *(long *)(param_2 + 0x28);
        uVar4 = param_1[0xf];
        uVar8 = param_1[2] + 1;
        lVar6 = *(long *)(param_1 + 10);
        do {
          _memcpy(lVar7,lVar6,(long)(int)uVar1);
          lVar6 = lVar6 + (int)uVar4;
          lVar7 = lVar7 + iVar3;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  return uVar5;
}



/* Entry: 108224404; end: 10822465f;  */

undefined8 FUN_108224404(uint *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  uVar9 = *param_1;
  if (uVar9 < 0xd) {
    uVar7 = param_1[1];
    uVar8 = param_1[2];
    if (uVar9 < 0xb) {
      uVar5 = param_1[6];
      uVar11 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar11 = uVar5;
      }
      if (((ulong)uVar11 * (long)(int)(uVar8 - 1) +
           (long)(int)(uint)(byte)(&UNK_10df0ab08)[uVar9] * (long)(int)uVar7 <=
           *(ulong *)(param_1 + 8) && (int)(uVar7 * (byte)(&UNK_10df0ab08)[uVar9]) <= (int)uVar11)
          && *(long *)(param_1 + 4) != 0) {
        return 0;
      }
    }
    else {
      iVar4 = (int)(uVar7 + 1) / 2;
      uVar5 = param_1[0xc];
      uVar6 = param_1[0xd];
      uVar11 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar11 = uVar5;
      }
      uVar5 = -uVar6;
      if (-1 < (int)uVar6) {
        uVar5 = uVar6;
      }
      uVar10 = param_1[0xe];
      uVar6 = -uVar10;
      if (-1 < (int)uVar10) {
        uVar6 = uVar10;
      }
      lVar12 = (long)((int)(uVar8 + 1) / 2 + -1);
      uVar2 = (ulong)uVar5 * lVar12 + (long)iVar4;
      uVar3 = (ulong)uVar6 * lVar12 + (long)iVar4;
      bVar1 = *(ulong *)(param_1 + 0x10) <
              (long)(int)uVar7 + (ulong)uVar11 * ((long)(int)uVar8 + -1);
      bVar1 = (((bVar1 || *(ulong *)(param_1 + 0x12) < uVar2) || *(ulong *)(param_1 + 0x14) < uVar3)
              || (int)(uVar11 - uVar7) < 0) ==
              (((!bVar1 && uVar2 <= *(ulong *)(param_1 + 0x12)) &&
               uVar3 <= *(ulong *)(param_1 + 0x14)) && SBORROW4(uVar11,uVar7));
      if (uVar9 == 0xc) {
        uVar11 = param_1[0xf];
        uVar9 = -uVar11;
        if (-1 < (int)uVar11) {
          uVar9 = uVar11;
        }
        if ((((((bVar1 && iVar4 <= (int)uVar5) && iVar4 <= (int)uVar6) &&
              *(long *)(param_1 + 4) != 0) && *(long *)(param_1 + 6) != 0) &&
            *(long *)(param_1 + 8) != 0) &&
            (((int)uVar7 <= (int)uVar9 &&
             (long)(int)uVar7 + (ulong)uVar9 * ((long)(int)uVar8 + -1) <= *(ulong *)(param_1 + 0x16)
             ) && *(long *)(param_1 + 10) != 0)) {
          return 0;
        }
      }
      else if (((((bVar1 && iVar4 <= (int)uVar5) && iVar4 <= (int)uVar6) &&
                *(long *)(param_1 + 4) != 0) && *(long *)(param_1 + 6) != 0) &&
               *(long *)(param_1 + 8) != 0) {
        return 0;
      }
    }
  }
  return 2;
}



/* Entry: 108224660; end: 1082247af;  */

int * FUN_108224660(int *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  if ((param_1[0x2da] < 1) || (param_1[0x2d7] < param_1[0x69])) {
    uVar23 = 0;
  }
  else {
    uVar23 = (uint)(param_1[0x2d7] <= param_1[0x6b]);
  }
  if (param_1[0x32] == 0) {
    param_1[0x37] = param_1[0x2d7];
    param_1[0x38] = uVar23;
    FUN_1082247b0(param_1,param_1 + 0x36);
    iVar12 = param_1[0x36];
    bVar11 = (&UNK_10df0ab22)[param_1[0x2da]];
    iVar13 = param_1[0x2d0];
    iVar4 = param_1[0x2d1];
    lVar24 = *(long *)(param_1 + 0x2ca);
    lVar21 = *(long *)(param_1 + 0x2cc);
    lVar22 = *(long *)(param_1 + 0x2ce);
    iVar5 = param_1[0x37];
    iVar6 = param_1[0x6b];
    if (param_1[0x32] == 2) {
      FUN_1082247b0(param_1);
    }
    iVar16 = (uint)(bVar11 >> 1) * iVar4;
    if ((param_1[0x38] != 0) && (lVar28 = (long)param_1[0x68], param_1[0x68] < param_1[0x6a])) {
      lVar29 = lVar28 << 3;
      lVar27 = lVar28 << 4;
      lVar25 = lVar28 << 2;
      iVar19 = param_1[0x37];
      do {
        lVar26 = *(long *)(param_1 + 0x3a);
        bVar8 = *(byte *)(lVar26 + lVar25);
        if (bVar8 != 0) {
          iVar7 = param_1[0x2d0];
          lVar1 = *(long *)(param_1 + 0x2ca) + (long)(param_1[0x36] * iVar7 * 0x10);
          uVar23 = (uint)bVar8;
          if (param_1[0x2da] == 1) {
            if (0 < lVar28) {
              (*pcRam0000000113869ba0)(lVar1 + lVar27,iVar7,bVar8 + 4);
            }
            if (*(char *)(lVar26 + lVar25 + 2) != '\0') {
              (*pcRam0000000113869ba8)(lVar1 + lVar27,iVar7,bVar8);
            }
            if (0 < iVar19) {
              (*pcRam0000000113869bb0)(lVar1 + lVar27,iVar7,uVar23 + 4);
            }
            if (*(char *)(lVar26 + lVar25 + 2) != '\0') {
              (*pcRam0000000113869bb8)(lVar1 + lVar27,iVar7,bVar8);
            }
          }
          else {
            bVar9 = ((byte *)(lVar26 + lVar25))[1];
            iVar14 = param_1[0x2d1];
            iVar15 = param_1[0x36] * iVar14 * 8;
            lVar2 = *(long *)(param_1 + 0x2cc) + (long)iVar15;
            lVar3 = *(long *)(param_1 + 0x2ce) + (long)iVar15;
            lVar26 = lVar26 + lVar25;
            uVar10 = *(undefined1 *)(lVar26 + 3);
            if (0 < lVar28) {
              (*pcRam0000000113869ac0)(lVar1 + lVar27,iVar7,bVar8 + 4,bVar9,uVar10);
              (*pcRam0000000113869ad0)(lVar2 + lVar29,lVar3 + lVar29,iVar14,uVar23 + 4,bVar9,uVar10)
              ;
            }
            if (*(char *)(lVar26 + 2) != '\0') {
              (*pcRam0000000113869ac8)(lVar1 + lVar27,iVar7,bVar8,bVar9,uVar10);
              (*pcRam0000000113869ad8)(lVar2 + lVar29,lVar3 + lVar29,iVar14,bVar8,bVar9,uVar10);
            }
            if (0 < iVar19) {
              (*pcRam0000000113869bf0)(lVar1 + lVar27,iVar7,uVar23 + 4,bVar9,uVar10);
              (*pcRam0000000113869c00)(lVar2 + lVar29,lVar3 + lVar29,iVar14,bVar8 + 4,bVar9,uVar10);
            }
            if (*(char *)(lVar26 + 2) != '\0') {
              (*pcRam0000000113869bf8)(lVar1 + lVar27,iVar7,bVar8,bVar9,uVar10);
              (*pcRam0000000113869c08)(lVar2 + lVar29,lVar3 + lVar29,iVar14,bVar8,bVar9,uVar10);
            }
          }
        }
        lVar28 = lVar28 + 1;
        lVar29 = lVar29 + 8;
        lVar27 = lVar27 + 0x10;
        lVar25 = lVar25 + 4;
      } while (lVar28 < param_1[0x6a]);
    }
    iVar4 = iVar12 * iVar4 * 8;
    uVar23 = (uint)bVar11;
    if (param_1[0xce] != 0) {
      iVar7 = param_1[0x68];
      lVar28 = (long)iVar7;
      iVar19 = param_1[0x6a];
      if (iVar7 < iVar19) {
        lVar27 = lVar28 << 3;
        lVar29 = (long)iVar7 * 800 + 0x31c;
        do {
          lVar25 = *(long *)(param_1 + 0x3c);
          if (3 < *(byte *)(lVar25 + lVar29)) {
            iVar19 = param_1[0x2d1];
            iVar7 = iVar19 * param_1[0x36] * 8;
            lVar26 = *(long *)(param_1 + 0x2ce);
            FUN_108225858(param_1 + 0xcf,*(long *)(param_1 + 0x2cc) + (long)iVar7 + lVar27,iVar19);
            FUN_108225858(param_1 + 0xcf,lVar26 + iVar7 + lVar27,iVar19,
                          *(undefined1 *)(lVar25 + lVar29));
            iVar19 = param_1[0x6a];
          }
          lVar28 = lVar28 + 1;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + 800;
        } while (lVar28 < iVar19);
      }
    }
    lVar24 = (lVar24 - (long)iVar13 * (long)(int)uVar23) + (long)iVar12 * (long)iVar13 * 0x10;
    lVar21 = (lVar21 - iVar16) + (long)iVar4;
    lVar22 = (lVar22 - iVar16) + (long)iVar4;
    if (*(long *)(param_2 + 0x10) == 0) {
      param_2 = (int *)0x1;
    }
    else {
      if (iVar5 == 0) {
        iVar19 = 0;
        lVar28 = *(long *)(param_1 + 0x2ca) + (long)iVar12 * (long)iVar13 * 0x10;
        lVar29 = *(long *)(param_1 + 0x2cc) + (long)iVar4;
        lVar27 = *(long *)(param_1 + 0x2ce) + (long)iVar4;
      }
      else {
        iVar19 = iVar5 * 0x10 - uVar23;
        lVar28 = lVar24;
        lVar29 = lVar21;
        lVar27 = lVar22;
      }
      piVar18 = (int *)0x0;
      *(long *)(param_2 + 6) = lVar28;
      *(long *)(param_2 + 8) = lVar29;
      *(long *)(param_2 + 10) = lVar27;
      uVar17 = 0;
      if (iVar5 < iVar6 + -1) {
        uVar17 = uVar23;
      }
      iVar4 = (iVar5 * 0x10 + 0x10) - uVar17;
      if (param_2[0x21] <= iVar4) {
        iVar4 = param_2[0x21];
      }
      param_2[0x26] = 0;
      param_2[0x27] = 0;
      if ((*(long *)(param_1 + 0x2e6) != 0) && (iVar4 - iVar19 != 0 && iVar19 <= iVar4)) {
        piVar18 = param_1;
        FUN_108223b18(param_1,param_2,iVar19,iVar4 - iVar19);
        *(int **)(param_2 + 0x26) = piVar18;
        if (piVar18 == (int *)0x0) {
          if (*param_1 != 0) {
            return (int *)0x0;
          }
          *(undefined **)(param_1 + 2) = &UNK_10f47fac9;
          param_1[0] = 3;
          param_1[1] = 0;
          return (int *)0x0;
        }
      }
      iVar7 = param_2[0x20];
      uVar17 = iVar7 - iVar19;
      if (uVar17 != 0 && iVar19 <= iVar7) {
        iVar19 = param_1[0x2d1];
        *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + (long)param_1[0x2d0] * (long)(int)uVar17;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)iVar19 * (long)(int)(uVar17 >> 1);
        *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)iVar19 * (long)(int)(uVar17 >> 1);
        iVar19 = iVar7;
        if (piVar18 != (int *)0x0) {
          piVar18 = (int *)((long)piVar18 + (long)*param_2 * (long)(int)uVar17);
          *(int **)(param_2 + 0x26) = piVar18;
        }
      }
      if (iVar4 - iVar19 == 0 || iVar4 < iVar19) {
        param_2 = (int *)0x1;
      }
      else {
        iVar14 = param_2[0x1e];
        *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + (long)iVar14;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + (long)(iVar14 >> 1);
        *(long *)(param_2 + 10) = *(long *)(param_2 + 10) + (long)(iVar14 >> 1);
        if (piVar18 != (int *)0x0) {
          *(long *)(param_2 + 0x26) = (long)piVar18 + (long)iVar14;
        }
        param_2[2] = iVar19 - iVar7;
        param_2[3] = param_2[0x1f] - iVar14;
        param_2[4] = iVar4 - iVar19;
        (**(code **)(param_2 + 0x10))(param_2);
      }
    }
    if ((iVar12 + 1 == param_1[0x34]) && (iVar5 < iVar6 + -1)) {
      _memcpy(*(long *)(param_1 + 0x2ca) - (long)iVar13 * (long)(int)uVar23,
              lVar24 + (long)param_1[0x2d0] * 0x10,(long)iVar13 * (long)(int)uVar23);
      _memcpy(*(long *)(param_1 + 0x2cc) + -(long)iVar16,lVar21 + (long)param_1[0x2d1] * 8,
              (long)iVar16);
      _memcpy(*(long *)(param_1 + 0x2ce) + -(long)iVar16,lVar22 + (long)param_1[0x2d1] * 8,
              (long)iVar16);
    }
    return param_2;
  }
  piVar18 = param_1 + 0x26;
  (*(code *)PTR_FUN_113254c88)();
  if (((ulong)piVar18 & 1) == 0) {
    piVar18 = (int *)0x0;
  }
  else {
    uVar30 = *(undefined8 *)(param_2 + 2);
    uVar20 = *(undefined8 *)param_2;
    uVar31 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x42) = uVar31;
    *(undefined8 *)(param_1 + 0x40) = uVar30;
    *(undefined8 *)(param_1 + 0x3e) = uVar20;
    uVar30 = *(undefined8 *)(param_2 + 10);
    uVar20 = *(undefined8 *)(param_2 + 8);
    uVar32 = *(undefined8 *)(param_2 + 0xe);
    uVar31 = *(undefined8 *)(param_2 + 0xc);
    uVar33 = *(undefined8 *)(param_2 + 0x10);
    uVar35 = *(undefined8 *)(param_2 + 0x16);
    uVar34 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x4e) = uVar33;
    *(undefined8 *)(param_1 + 0x54) = uVar35;
    *(undefined8 *)(param_1 + 0x52) = uVar34;
    *(undefined8 *)(param_1 + 0x48) = uVar30;
    *(undefined8 *)(param_1 + 0x46) = uVar20;
    *(undefined8 *)(param_1 + 0x4c) = uVar32;
    *(undefined8 *)(param_1 + 0x4a) = uVar31;
    uVar30 = *(undefined8 *)(param_2 + 0x1a);
    uVar20 = *(undefined8 *)(param_2 + 0x18);
    uVar32 = *(undefined8 *)(param_2 + 0x1e);
    uVar31 = *(undefined8 *)(param_2 + 0x1c);
    uVar33 = *(undefined8 *)(param_2 + 0x20);
    uVar35 = *(undefined8 *)(param_2 + 0x26);
    uVar34 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x5e) = uVar33;
    *(undefined8 *)(param_1 + 100) = uVar35;
    *(undefined8 *)(param_1 + 0x62) = uVar34;
    *(undefined8 *)(param_1 + 0x58) = uVar30;
    *(undefined8 *)(param_1 + 0x56) = uVar20;
    *(undefined8 *)(param_1 + 0x5c) = uVar32;
    *(undefined8 *)(param_1 + 0x5a) = uVar31;
    param_1[0x36] = param_1[0x33];
    param_1[0x37] = param_1[0x2d7];
    param_1[0x38] = uVar23;
    if (param_1[0x32] == 2) {
      uVar20 = *(undefined8 *)(param_1 + 0x3c);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x2d8) = uVar20;
    }
    else {
      FUN_1082247b0(param_1,param_1 + 0x36);
    }
    if (uVar23 != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x3a);
      *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_1 + 0x2c6);
      *(undefined8 *)(param_1 + 0x2c6) = uVar20;
    }
    (*(code *)PTR_FUN_113254c90)(param_1 + 0x26);
    iVar4 = 0;
    if (param_1[0x33] + 1 != param_1[0x34]) {
      iVar4 = param_1[0x33] + 1;
    }
    param_1[0x33] = iVar4;
    piVar18 = (int *)0x1;
  }
  return piVar18;
}



/* Entry: 1082247b0; end: 10822530b;  */

void FUN_1082247b0(long param_1,int *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  int iVar10;
  undefined4 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  int *piStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar13 = 0;
  iVar3 = *param_2;
  iVar4 = param_2[1];
  lVar19 = *(long *)(param_1 + 0xb20);
  do {
    *(undefined1 *)(lVar19 + 0x27 + lVar13) = 0x81;
    lVar13 = lVar13 + 0x20;
  } while (lVar13 != 0x200);
  puStack_90 = (undefined8 *)(lVar19 + 600);
  lVar13 = 8;
  puVar14 = (undefined1 *)(lVar19 + 599);
  do {
    puVar14[-0x10] = 0x81;
    *puVar14 = 0x81;
    lVar13 = lVar13 + -1;
    puVar14 = puVar14 + 0x20;
  } while (lVar13 != 0);
  if (iVar4 < 1) {
    *(undefined8 *)(lVar19 + 0x14) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar19 + 0xf) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar19 + 7) = 0x7f7f7f7f7f7f7f7f;
    *(undefined8 *)(lVar19 + 0x227) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar19 + 0x22f) = 0x7f;
    *(undefined8 *)(lVar19 + 0x237) = 0x7f7f7f7f7f7f7f7f;
    *(undefined1 *)(lVar19 + 0x23f) = 0x7f;
  }
  else {
    *(undefined1 *)(lVar19 + 0x237) = 0x81;
    *(undefined1 *)(lVar19 + 0x227) = 0x81;
    *(undefined1 *)(lVar19 + 7) = 0x81;
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    lVar13 = 0;
    lVar23 = 0;
    puVar1 = (undefined8 *)(lVar19 + 0x28);
    uStack_98 = 4;
    if (iVar4 != 0) {
      uStack_98 = 0;
    }
    uStack_a0 = 5;
    if (iVar4 == 0) {
      uStack_a0 = 6;
    }
    lStack_70 = 0x301;
    lVar20 = lVar19;
    lStack_88 = lVar19;
    piStack_80 = param_2;
    do {
      lVar24 = *(long *)(piStack_80 + 6);
      if (lVar23 != 0) {
        lVar15 = 0x11;
        puVar11 = (undefined4 *)(lVar19 + 0x14);
        do {
          puVar11[-4] = *puVar11;
          puVar11 = puVar11 + 8;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar15 = 9;
        puVar11 = (undefined4 *)(lVar19 + 0x23c);
        do {
          puVar11[-6] = puVar11[-4];
          puVar11[-2] = *puVar11;
          puVar11 = puVar11 + 8;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lVar15 = lVar24 + lVar23 * 800;
      puStack_78 = (undefined8 *)(*(long *)(param_1 + 0xb08) + lVar23 * 0x20);
      uVar22 = *(uint *)(lVar15 + 0x314);
      lStack_68 = lVar13;
      if (iVar4 < 1) {
        if (*(char *)(lVar15 + 0x300) != '\0') goto LAB_108224a3c;
LAB_108224978:
        puVar9 = &uStack_a0;
        if (lVar23 != 0) {
          puVar9 = &uStack_98;
        }
        uVar18 = *puVar9;
        uVar2 = uVar18;
        if (*(byte *)(lVar15 + 0x301) != 0) {
          uVar2 = (ulong)*(byte *)(lVar15 + 0x301);
        }
        (**(code **)(uVar2 * 8 + 0x113869b18))(puVar1);
        if (uVar22 != 0) {
          lVar20 = 0;
          lVar24 = lVar24 + lVar13;
          do {
            uVar7 = uVar22 >> 0x1e;
            if (uVar7 < 2) {
              pcVar12 = pcRam0000000113869bd0;
              if (uVar7 != 0) {
LAB_1082249e4:
                (*pcVar12)(lVar24,(long)puVar1 + (ulong)*(ushort *)(&UNK_10df0ab26 + lVar20));
              }
            }
            else {
              pcVar12 = pcRam0000000113869bc8;
              if (uVar7 == 2) goto LAB_1082249e4;
              (*pcRam0000000113869bc0)
                        (lVar24,(long)puVar1 + (ulong)*(ushort *)(&UNK_10df0ab26 + lVar20),0);
            }
            uVar22 = uVar22 << 2;
            lVar20 = lVar20 + 2;
            lVar24 = lVar24 + 0x20;
          } while (lVar20 != 0x20);
        }
      }
      else {
        uVar25 = *puStack_78;
        *(undefined8 *)(lVar20 + 0x10) = puStack_78[1];
        *(undefined8 *)(lVar20 + 8) = uVar25;
        *(undefined8 *)(lVar20 + 0x228) = puStack_78[2];
        *(undefined8 *)(lVar20 + 0x238) = puStack_78[3];
        if (*(char *)(lVar15 + 0x300) == '\0') goto LAB_108224978;
        if (lVar23 < (long)*(int *)(param_1 + 0x198) + -1) {
          iVar10 = *(int *)(puStack_78 + 4);
        }
        else {
          iVar10 = (uint)*(byte *)((long)puStack_78 + 0xf) * 0x1010101;
        }
        *(int *)(lVar20 + 0x18) = iVar10;
LAB_108224a3c:
        lVar21 = 0;
        uVar5 = *(undefined4 *)(lVar20 + 0x18);
        *(undefined4 *)(lVar20 + 0x198) = uVar5;
        *(undefined4 *)(lVar20 + 0x118) = uVar5;
        *(undefined4 *)(lVar20 + 0x98) = uVar5;
        lVar13 = lVar24 + lVar13;
        lVar24 = lVar24 + lStack_70;
        do {
          uVar18 = (ulong)*(ushort *)(&UNK_10df0ab26 + lVar21 * 2);
          (**(code **)((ulong)*(byte *)(lVar24 + lVar21) * 8 + 0x113869b50))((long)puVar1 + uVar18);
          uVar7 = uVar22 >> 0x1e;
          if (uVar7 < 2) {
            pcVar12 = pcRam0000000113869bd0;
            if (uVar7 != 0) {
LAB_108224aa0:
              (*pcVar12)(lVar13,(long)puVar1 + uVar18);
            }
          }
          else {
            pcVar12 = pcRam0000000113869bc8;
            if (uVar7 == 2) goto LAB_108224aa0;
            (*pcRam0000000113869bc0)(lVar13,(long)puVar1 + uVar18,0);
          }
          lVar21 = lVar21 + 1;
          uVar22 = uVar22 << 2;
          lVar13 = lVar13 + 0x20;
        } while (lVar21 != 0x10);
        puVar9 = &uStack_a0;
        if (lVar23 != 0) {
          puVar9 = &uStack_98;
        }
        uVar18 = *puVar9;
      }
      lVar20 = lStack_88;
      uVar22 = *(uint *)(lVar15 + 0x318);
      if (*(byte *)(lVar15 + 0x311) != 0) {
        uVar18 = (ulong)*(byte *)(lVar15 + 0x311);
      }
      (**(code **)(uVar18 * 8 + 0x113869ae0))(lStack_88 + 0x248);
      puVar16 = puStack_90;
      (**(code **)(uVar18 * 8 + 0x113869ae0))(puStack_90);
      if ((uVar22 & 0xff) != 0) {
        puVar17 = (undefined8 *)0x113869bd8;
        if ((uVar22 & 0xaa) != 0) {
          puVar17 = (undefined8 *)0x113869be0;
        }
        (*(code *)*puVar17)(lVar15 + 0x200,lVar20 + 0x248);
      }
      if ((uVar22 & 0xff00) != 0) {
        puVar17 = (undefined8 *)0x113869bd8;
        if ((uVar22 & 0xaa00) != 0) {
          puVar17 = (undefined8 *)0x113869be0;
        }
        (*(code *)*puVar17)(lVar15 + 0x280,puVar16);
      }
      if (iVar4 < *(int *)(param_1 + 0x19c) + -1) {
        uVar25 = *(undefined8 *)(lVar19 + 0x208);
        puStack_78[1] = *(undefined8 *)(lVar19 + 0x210);
        *puStack_78 = uVar25;
        puStack_78[2] = *(undefined8 *)(lVar20 + 0x328);
        puStack_78[3] = *(undefined8 *)(lVar20 + 0x338);
      }
      lVar13 = 0;
      iVar10 = *(int *)(param_1 + 0xb40);
      iVar6 = *(int *)(param_1 + 0xb44);
      lVar15 = *(long *)(param_1 + 0xb28);
      lVar24 = *(long *)(param_1 + 0xb30);
      lVar21 = *(long *)(param_1 + 0xb38);
      puVar17 = puVar1;
      do {
        uVar25 = *puVar17;
        puVar8 = (undefined8 *)
                 (lVar15 + lVar23 * 0x10 + (long)iVar3 * 0x10 * (long)iVar10 +
                 (long)*(int *)(param_1 + 0xb40) * (long)(int)lVar13);
        puVar8[1] = puVar17[1];
        *puVar8 = uVar25;
        lVar13 = lVar13 + 1;
        puVar17 = puVar17 + 4;
      } while (lVar13 != 0x10);
      lVar13 = 0;
      lVar15 = (long)iVar3 * 8 * (long)iVar6;
      do {
        *(undefined8 *)
         (lVar24 + lVar23 * 8 + lVar15 + (long)*(int *)(param_1 + 0xb44) * (long)(int)lVar13) =
             puVar16[-2];
        *(undefined8 *)
         (lVar21 + lVar23 * 8 + lVar15 + (long)*(int *)(param_1 + 0xb44) * (long)(int)lVar13) =
             *puVar16;
        lVar13 = lVar13 + 1;
        puVar16 = puVar16 + 4;
      } while (lVar13 != 8);
      lVar23 = lVar23 + 1;
      lVar13 = lStack_68 + 800;
      lStack_70 = lStack_70 + 800;
    } while (lVar23 < *(int *)(param_1 + 0x198));
  }
  return;
}



/* Entry: 10822530c; end: 108225527;  */

int FUN_10822530c(int *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  if ((*(code **)(param_2 + 0x48) != (code *)0x0) &&
     (lVar13 = param_2, (**(code **)(param_2 + 0x48))(), (int)lVar13 == 0)) {
    if (*param_1 != 0) {
      return *param_1;
    }
    *(undefined **)(param_1 + 2) = &UNK_10f47fab6;
    param_1[0] = 6;
    param_1[1] = 0;
    return 6;
  }
  if (*(int *)(param_2 + 0x70) == 0) {
    iVar12 = param_1[0x2da];
    uVar14 = (uint)(byte)(&UNK_10df0ab22)[iVar12];
    if (iVar12 != 2) goto LAB_108225374;
    param_1[0x68] = 0;
    iVar12 = 2;
  }
  else {
    uVar14 = 0;
    iVar12 = 0;
    param_1[0x2da] = 0;
LAB_108225374:
    iVar2 = (int)(*(int *)(param_2 + 0x78) - uVar14) >> 4;
    param_1[0x68] = iVar2;
    iVar3 = (int)(*(int *)(param_2 + 0x80) - uVar14) >> 4;
    param_1[0x69] = iVar3;
    if (iVar2 < 0) {
      param_1[0x68] = 0;
    }
    if (-1 < iVar3) goto LAB_1082253d8;
  }
  param_1[0x69] = 0;
LAB_1082253d8:
  iVar2 = (int)(*(int *)(param_2 + 0x84) + uVar14 + 0xf) >> 4;
  param_1[0x6b] = iVar2;
  iVar3 = (int)(*(int *)(param_2 + 0x7c) + uVar14 + 0xf) >> 4;
  if (param_1[0x66] <= iVar3) {
    iVar3 = param_1[0x66];
  }
  param_1[0x6a] = iVar3;
  if (param_1[0x67] < iVar2) {
    param_1[0x6b] = param_1[0x67];
  }
  if (0 < iVar12) {
    lVar13 = 0;
    iVar12 = param_1[0x21];
    iVar2 = param_1[0x18];
    do {
      if (iVar12 == 0) {
        uVar14 = param_1[0x16];
      }
      else {
        uVar14 = (uint)*(char *)((long)param_1 + lVar13 + 0x94);
        if (param_1[0x23] == 0) {
          uVar14 = param_1[0x16] + uVar14;
        }
      }
      lVar10 = 0;
      bVar9 = true;
      do {
        bVar8 = bVar9;
        uVar11 = uVar14;
        if ((iVar2 != 0) && (uVar11 = param_1[0x19] + uVar14, !bVar8)) {
          uVar11 = param_1[0x1d] + uVar11;
        }
        piVar1 = param_1 + lVar13 * 2 + lVar10 + 0x2db;
        uVar4 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        if (0x3e < (int)uVar4) {
          uVar4 = 0x3f;
        }
        if ((int)uVar11 < 1) {
          *(undefined1 *)piVar1 = 0;
        }
        else {
          uVar7 = param_1[0x17];
          uVar15 = 1;
          if (4 < uVar7) {
            uVar15 = 2;
          }
          uVar6 = uVar4 >> (ulong)uVar15;
          if ((int)(9 - uVar7) <= (int)(uVar4 >> (ulong)uVar15)) {
            uVar6 = 9 - uVar7;
          }
          uVar15 = uVar4;
          if (0 < (int)uVar7) {
            uVar15 = uVar6;
          }
          if ((int)uVar15 < 2) {
            uVar15 = 1;
          }
          *(char *)((long)piVar1 + 1) = (char)uVar15;
          *(char *)piVar1 = (char)uVar15 + (char)(uVar4 << 1);
          uVar5 = 2;
          if (uVar11 < 0x28) {
            uVar5 = 0xe < uVar11;
          }
          *(undefined1 *)((long)piVar1 + 3) = uVar5;
        }
        *(char *)((long)piVar1 + 2) = (char)lVar10;
        lVar10 = 1;
        bVar9 = false;
      } while (bVar8);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 4);
  }
  return 0;
}



/* Entry: 108225528; end: 108225857;  */

undefined8 FUN_108225528(int *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  
  param_1[0x33] = 0;
  iVar12 = param_1[0x32];
  if (iVar12 < 1) {
    uVar17 = 1;
    param_1[0x34] = 1;
    iVar13 = param_1[0x2da];
  }
  else {
    iVar12 = (int)param_1 + 0x98;
    (*(code *)PTR_FUN_113254c80)();
    if (iVar12 == 0) {
      if (*param_1 != 0) {
        return 0;
      }
      puVar8 = &UNK_10f47fae6;
      goto LAB_108225828;
    }
    *(int **)(param_1 + 0x2c) = param_1;
    *(int **)(param_1 + 0x2e) = param_1 + 0x3e;
    param_1[0x2a] = 0x8224c90;
    param_1[0x2b] = 1;
    iVar13 = param_1[0x2da];
    uVar9 = 2;
    if (0 < iVar13) {
      uVar9 = 3;
    }
    uVar17 = (ulong)uVar9;
    param_1[0x34] = uVar9;
    iVar12 = param_1[0x32];
  }
  iVar6 = param_1[0x66];
  lVar16 = (long)iVar6;
  lVar1 = lVar16 * 2 + 2;
  uVar9 = iVar6 << (0 < iVar12);
  uVar11 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
  if (iVar13 < 1) {
    uVar11 = 0;
  }
  lVar18 = (long)(iVar6 << (iVar12 == 2)) * 800;
  uVar9 = (int)(uVar17 * 0x10) + (uint)(byte)(&UNK_10df0ab22)[iVar13];
  lVar14 = lVar16 * 0x20 * (ulong)(uVar9 + (uVar9 >> 1));
  if (*(long *)(param_1 + 0x2e6) == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = (ulong)*(ushort *)((long)param_1 + 0x4e) * (ulong)*(ushort *)(param_1 + 0x13);
  }
  uVar2 = lVar16 * 0x24 + lVar1 + uVar11 + lVar18 + lVar15 + lVar14 + 0x35f;
  uVar7 = *(ulong *)(param_1 + 0x2d2);
  if (*(ulong *)(param_1 + 0x2d4) < uVar2) {
    _free();
    param_1[0x2d4] = 0;
    param_1[0x2d5] = 0;
    if (uVar2 < 0x400000001) {
      uVar7 = uVar2;
      _malloc();
      *(ulong *)(param_1 + 0x2d2) = uVar7;
      if (uVar7 != 0) {
        *(ulong *)(param_1 + 0x2d4) = uVar2;
        iVar13 = param_1[0x2da];
        iVar12 = param_1[0x32];
        goto LAB_1082256cc;
      }
    }
    else {
      param_1[0x2d2] = 0;
      param_1[0x2d3] = 0;
    }
    if (*param_1 != 0) {
      return 0;
    }
    puVar8 = &UNK_10f47fb04;
LAB_108225828:
    *(undefined **)(param_1 + 2) = puVar8;
    param_1[0] = 1;
    param_1[1] = 0;
    return 0;
  }
LAB_1082256cc:
  *(ulong *)(param_1 + 0x2be) = uVar7;
  lVar3 = uVar7 + lVar16 * 4;
  *(long *)(param_1 + 0x2c2) = lVar3;
  lVar3 = lVar3 + lVar16 * 0x20;
  *(long *)(param_1 + 0x2c4) = lVar3 + 2;
  lVar10 = 0;
  if (uVar11 != 0) {
    lVar10 = lVar3 + lVar1;
  }
  *(long *)(param_1 + 0x2c6) = lVar10;
  lVar4 = lVar3 + lVar1 + uVar11;
  param_1[0x36] = 0;
  *(long *)(param_1 + 0x3a) = lVar10;
  if (0 < iVar13) {
    if (iVar12 < 1) {
      uVar11 = lVar4 + 0x1fU & 0xffffffffffffffe0;
      *(ulong *)(param_1 + 0x2c8) = uVar11;
      lVar10 = uVar11 + 0x340;
      *(long *)(param_1 + 0x2d8) = lVar10;
      goto LAB_108225768;
    }
    *(long *)(param_1 + 0x3a) = lVar10 + lVar16 * 4;
  }
  uVar11 = lVar4 + 0x1fU & 0xffffffffffffffe0;
  *(ulong *)(param_1 + 0x2c8) = uVar11;
  *(ulong *)(param_1 + 0x2d8) = uVar11 + 0x340;
  lVar10 = lVar16;
  if (iVar12 != 2) {
    lVar10 = 0;
  }
  lVar10 = uVar11 + 0x340 + lVar10 * 800;
LAB_108225768:
  *(long *)(param_1 + 0x3c) = lVar10;
  lVar18 = uVar11 + lVar18 + 0x340;
  iVar12 = (int)(lVar16 * 0x10);
  param_1[0x2d0] = iVar12;
  bVar5 = (&UNK_10df0ab22)[iVar13];
  iVar13 = (int)(lVar16 * 8);
  param_1[0x2d1] = iVar13;
  uVar9 = (uint)(bVar5 >> 1);
  lVar10 = lVar18 + lVar16 * 0x10 * (ulong)bVar5;
  *(long *)(param_1 + 0x2ca) = lVar10;
  lVar10 = lVar10 + (long)iVar12 * uVar17 * 0x10 + (long)(int)uVar9 * (long)iVar13;
  *(long *)(param_1 + 0x2cc) = lVar10;
  *(long *)(param_1 + 0x2ce) =
       lVar10 + (long)(int)uVar17 * lVar16 * 8 * 8 + (long)(int)uVar9 * (long)iVar13;
  param_1[0x33] = 0;
  lVar10 = 0;
  if (lVar15 != 0) {
    lVar10 = lVar18 + lVar14;
  }
  *(long *)(param_1 + 0x2ee) = lVar10;
  _bzero(lVar3,lVar1);
  *(undefined2 *)(*(long *)(param_1 + 0x2c4) + -2) = 0;
  param_1[0x2c0] = 0;
  param_1[0x2d6] = 0;
  _bzero(*(undefined8 *)(param_1 + 0x2be),lVar16 * 4);
  *(undefined4 *)(param_2 + 8) = 0;
  uVar19 = *(undefined8 *)(param_1 + 0x2ca);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x2cc);
  *(undefined8 *)(param_2 + 0x18) = uVar19;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x2ce);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_2 + 0x98) = 0;
  FUN_10822e268();
  return 1;
}



/* Entry: 108225858; end: 108225913;  */

void FUN_108225858(undefined8 *param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte abStack_58 [64];
  long lStack_18;
  
  lVar5 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_1;
  do {
    uVar3 = *(int *)((long)param_1 + (long)(int)uVar7 * 4 + 8) -
            *(int *)((long)param_1 + (long)(int)((ulong)uVar7 >> 0x20) * 4 + 8);
    *(uint *)((long)param_1 + (long)(int)uVar7 * 4 + 8) = uVar3 & 0x7fffffff;
    iVar6 = (int)*param_1 + 1;
    iVar8 = (int)((ulong)*param_1 >> 0x20) + 1;
    iVar9 = -(uint)(iVar6 == 0x37);
    iVar10 = -(uint)(iVar8 == 0x37);
    uVar7 = CONCAT17((byte)((uint)iVar8 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                     CONCAT16((byte)((uint)iVar8 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                              CONCAT15((byte)((uint)iVar8 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                       CONCAT14((byte)iVar8 & ~(byte)iVar10,
                                                CONCAT13((byte)((uint)iVar6 >> 0x18) &
                                                         ~(byte)((uint)iVar9 >> 0x18),
                                                         CONCAT12((byte)((uint)iVar6 >> 0x10) &
                                                                  ~(byte)((uint)iVar9 >> 0x10),
                                                                  CONCAT11((byte)((uint)iVar6 >> 8)
                                                                           & ~(byte)((uint)iVar9 >>
                                                                                    8),
                                                                           (byte)iVar6 &
                                                                           ~(byte)iVar9)))))));
    *param_1 = uVar7;
    abStack_58[lVar5] = (byte)((uint)(((int)(uVar3 * 2) >> 0x18) * param_4) >> 8) ^ 0x80;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  pbVar4 = abStack_58;
  (*pcRam0000000113869ab8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lVar5 = 1;
    _calloc(1,0x1f0);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x1e8) = 0xffffffff;
      piVar1 = (int *)(lVar5 + 0x160);
      plVar2 = (long *)(lVar5 + 8);
      if (pbVar4 == (byte *)0x0) {
        *plVar2 = (long)piVar1;
      }
      else if ((((*(int *)(pbVar4 + 0xc) < 2) || (param_2 == 0)) ||
               (iVar6 = *(int *)pbVar4, 3 < iVar6 - 7U)) || (*(int *)(param_2 + 8) == 0)) {
        *plVar2 = (long)pbVar4;
        *(undefined8 *)(lVar5 + 0x1d8) = 0;
      }
      else {
        *plVar2 = (long)piVar1;
        *(byte **)(lVar5 + 0x1d8) = pbVar4;
        *piVar1 = iVar6;
      }
      *(code **)(lVar5 + 0xd0) = FUN_108226708;
      *(code **)(lVar5 + 0xd8) = FUN_108226c34;
      *(long **)(lVar5 + 0xc0) = plVar2;
      *(undefined8 *)(lVar5 + 200) = 0x108226690;
    }
    return;
  }
  return;
}



/* Entry: 108225914; end: 108225b63;  */

void FUN_108225914(int *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 1;
  _calloc(1,0x1f0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x1e8) = 0xffffffff;
    piVar1 = (int *)(lVar4 + 0x160);
    plVar2 = (long *)(lVar4 + 8);
    if (param_1 == (int *)0x0) {
      *plVar2 = (long)piVar1;
    }
    else if ((((param_1[3] < 2) || (param_2 == 0)) || (iVar3 = *param_1, 3 < iVar3 - 7U)) ||
            (*(int *)(param_2 + 8) == 0)) {
      *plVar2 = (long)param_1;
      *(undefined8 *)(lVar4 + 0x1d8) = 0;
    }
    else {
      *plVar2 = (long)piVar1;
      *(int **)(lVar4 + 0x1d8) = param_1;
      *piVar1 = iVar3;
    }
    *(code **)(lVar4 + 0xd0) = FUN_108226708;
    *(code **)(lVar4 + 0xd8) = FUN_108226c34;
    *(long **)(lVar4 + 0xc0) = plVar2;
    *(undefined8 *)(lVar4 + 200) = 0x108226690;
  }
  return;
}



/* Entry: 108225b64; end: 108226323;  */

uint * FUN_108225b64(uint *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_x21;
  uint *unaff_x22;
  uint *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar11;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(uint **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = *param_1;
    puVar5 = param_1;
    if (uVar6 == 0) {
      lVar8 = *(long *)(param_1 + 0x4c);
      lVar1 = *(long *)(param_1 + 0x4e);
      *(long *)((long)register0x00000008 + -0xa0) = *(long *)(param_1 + 0x52) + lVar8;
      *(long *)((long)register0x00000008 + -0x98) = lVar1 - lVar8;
      *(undefined4 *)((long)register0x00000008 + -0x90) = 0;
      puVar10 = (uint *)((long)register0x00000008 + -0xa0);
      FUN_10822d42c();
      if ((int)puVar10 == 0) {
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)((long)register0x00000008 + -0x70);
        uVar6 = *(uint *)((long)register0x00000008 + -0x60);
        param_1[0x1e] = uVar6;
        if (uVar6 == 0) {
          FUN_108228d00();
          puVar9 = (uint *)0x1;
          puVar5 = puVar10;
          if (puVar10 != (uint *)0x0) {
            puVar10[0x10] = 1;
            *(uint **)(param_1 + 0x20) = puVar10;
            lVar8 = *(long *)((long)register0x00000008 + -0x88);
            *(undefined8 *)(puVar10 + 0x2e6) = *(undefined8 *)((long)register0x00000008 + -0x80);
            *(undefined8 *)(puVar10 + 0x2e8) = *(undefined8 *)((long)register0x00000008 + -0x78);
            *param_1 = 1;
            lVar8 = *(long *)(param_1 + 0x4c) + lVar8;
            *(long *)(param_1 + 0x4c) = lVar8;
            *(long *)(param_1 + 0x3a) = *(long *)(param_1 + 0x4e) - lVar8;
            *(long *)(param_1 + 0x3c) = *(long *)(param_1 + 0x52) + lVar8;
            puVar9 = (uint *)0x0;
          }
        }
        else {
          FUN_10822ae84();
          puVar5 = puVar10;
          if (puVar10 == (uint *)0x0) {
            puVar9 = (uint *)0x1;
          }
          else {
            puVar9 = (uint *)0x0;
            *(uint **)(param_1 + 0x20) = puVar10;
            lVar8 = *(long *)((long)register0x00000008 + -0x88);
            *param_1 = 4;
            lVar8 = *(long *)(param_1 + 0x4c) + lVar8;
            *(long *)(param_1 + 0x4c) = lVar8;
            *(long *)(param_1 + 0x3a) = *(long *)(param_1 + 0x4e) - lVar8;
            *(long *)(param_1 + 0x3c) = *(long *)(param_1 + 0x52) + lVar8;
          }
        }
      }
      else {
        puVar5 = puVar10;
        if ((int)puVar10 == 7) {
          puVar9 = (uint *)0x5;
        }
        else {
          if (*param_1 == 3) {
            if (0 < *(int *)(*(long *)(param_1 + 0x20) + 200)) {
              puVar5 = (uint *)(*(long *)(param_1 + 0x20) + 0x98);
              (*(code *)PTR_FUN_113254c88)();
            }
            if (*(code **)(param_1 + 0x36) != (code *)0x0) {
              puVar5 = param_1 + 0x22;
              (**(code **)(param_1 + 0x36))();
            }
          }
          *param_1 = 7;
          puVar9 = puVar10;
        }
      }
      uVar6 = *param_1;
LAB_108225c7c:
      if (uVar6 == 1) {
        unaff_x21 = (uint *)(*(long *)(param_1 + 0x4e) - *(long *)(param_1 + 0x4c));
        if (unaff_x21 < (uint *)0xa) {
          puVar9 = (uint *)0x5;
          uVar6 = 1;
        }
        else {
          unaff_x22 = (uint *)(*(long *)(param_1 + 0x52) + *(long *)(param_1 + 0x4c));
          param_3 = *(uint **)(param_1 + 0x78);
          puVar5 = unaff_x22;
          param_2 = unaff_x21;
          FUN_108228e34();
          if ((int)puVar5 == 0) {
            puVar9 = (uint *)0x3;
            uVar6 = 7;
          }
          else {
            puVar9 = (uint *)0x0;
            *(ulong *)(param_1 + 0x54) = (ulong)((uint3)((uint3)*unaff_x22 >> 5) + 10);
            *(uint **)(param_1 + 0x3a) = unaff_x21;
            *(uint **)(param_1 + 0x3c) = unaff_x22;
            uVar6 = 2;
          }
          *param_1 = uVar6;
        }
      }
      if (uVar6 == 2) {
        if ((ulong)(*(long *)(param_1 + 0x4e) - *(long *)(param_1 + 0x4c)) <
            *(ulong *)(param_1 + 0x54)) {
LAB_108225d14:
          puVar9 = (uint *)0x5;
          goto LAB_1082260e8;
        }
        unaff_x21 = *(uint **)(param_1 + 0x20);
        param_2 = param_1 + 0x22;
        puVar5 = unaff_x21;
        FUN_108228ee8();
        if ((int)puVar5 != 0) {
          puVar5 = (uint *)(ulong)param_1[0x22];
          param_2 = (uint *)(ulong)param_1[0x23];
          param_3 = *(uint **)(param_1 + 0xc);
          FUN_108223f4c();
          *unaff_x21 = (uint)puVar5;
          puVar9 = puVar5;
          if ((uint)puVar5 == 0) {
            puVar5 = *(uint **)(param_1 + 0xc);
            if (puVar5 == (uint *)0x0) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              if ((puVar5[10] != 0) && (uVar6 = 2, (int)param_1[0x22] < 0x200)) {
                uVar6 = 0;
              }
            }
            unaff_x21[0x32] = uVar6;
            param_2 = unaff_x21;
            func_0x000108224544();
            unaff_x24 = *(long *)(param_1 + 0x20);
            unaff_x22 = *(uint **)(unaff_x24 + 0x20);
            puVar10 = (uint *)(*(long *)(unaff_x24 + 0x28) - (long)unaff_x22);
            if (puVar10 == (uint *)0x0) {
              puVar9 = (uint *)0x3;
            }
            else {
              puVar9 = unaff_x23;
              if (param_1[0x4a] != 1) {
LAB_108226054:
                *(long *)(param_1 + 0x4c) = *(long *)(param_1 + 0x4c) + (long)puVar10;
                *unaff_x21 = 0;
                param_2 = param_1 + 0x22;
                puVar5 = unaff_x21;
                FUN_10822530c();
                unaff_x23 = puVar9;
                if ((int)puVar5 == 0) {
                  *param_1 = 3;
                  param_2 = param_1 + 0x22;
                  puVar5 = unaff_x21;
                  FUN_108225528();
                  uVar6 = *param_1;
                  if ((int)puVar5 != 0) {
                    puVar9 = (uint *)0x0;
                    goto LAB_108225d88;
                  }
                  puVar9 = (uint *)(ulong)*unaff_x21;
                  goto LAB_108226180;
                }
                puVar9 = (uint *)(ulong)*unaff_x21;
                goto LAB_10822617c;
              }
              if (puVar10 < (uint *)0x400000001) {
                puVar9 = puVar10;
                _malloc();
                puVar5 = (uint *)0x0;
                if (puVar9 != (uint *)0x0) {
                  param_3 = puVar10;
                  _memcpy();
                  *(uint **)(param_1 + 0x56) = puVar9;
                  *(uint **)(unaff_x24 + 0x20) = puVar9;
                  *(long *)(unaff_x24 + 0x28) = (long)puVar9 + (long)puVar10;
                  puVar5 = (uint *)((long)puVar9 + (long)puVar10 + -7);
                  if (puVar10 < (uint *)0x8) {
                    puVar5 = puVar9;
                  }
                  *(uint **)(unaff_x24 + 0x30) = puVar5;
                  goto LAB_108226054;
                }
              }
              puVar9 = (uint *)0x1;
            }
            *unaff_x21 = (uint)puVar9;
          }
          goto LAB_10822617c;
        }
        puVar9 = (uint *)(ulong)*unaff_x21;
        uVar6 = *param_1;
        if ((*unaff_x21 & 0xfffffffd) == 5) {
          puVar9 = (uint *)0x5;
          goto LAB_108225d88;
        }
      }
      else {
LAB_108225d88:
        if (uVar6 == 3) {
          puVar10 = *(uint **)(param_1 + 0x20);
          if (puVar10 != (uint *)0x0) {
            if (puVar10[1] == 0) {
              if (0 < (int)puVar10[0x32]) {
                puVar5 = puVar10 + 0x26;
                (*(code *)PTR_FUN_113254c88)();
              }
LAB_108225ee0:
              if (*(code **)(param_1 + 0x36) != (code *)0x0) {
                puVar5 = param_1 + 0x22;
                (**(code **)(param_1 + 0x36))();
              }
LAB_108225ef0:
              *param_1 = 7;
              puVar9 = (uint *)0x3;
            }
            else {
              uVar6 = puVar10[0x2d7];
              if ((int)uVar6 < (int)puVar10[0x67]) {
                unaff_x23 = puVar10 + 0x6e;
                unaff_x22 = (uint *)((long)register0x00000008 + -0xa0);
                unaff_x24 = 0x30;
                do {
                  if (param_1[0x7a] != uVar6) {
                    puVar5 = puVar10 + 4;
                    param_2 = puVar10;
                    FUN_108227d64();
                    if ((int)puVar5 == 0) {
                      if (*param_1 == 3) {
                        if (0 < *(int *)(*(long *)(param_1 + 0x20) + 200)) {
                          puVar5 = (uint *)(*(long *)(param_1 + 0x20) + 0x98);
                          (*(code *)PTR_FUN_113254c88)();
                        }
                        if (*(code **)(param_1 + 0x36) != (code *)0x0) {
                          puVar5 = param_1 + 0x22;
                          (**(code **)(param_1 + 0x36))();
                        }
                      }
                      *param_1 = 7;
                      puVar9 = (uint *)0x3;
                      goto LAB_1082261c0;
                    }
                    param_1[0x7a] = puVar10[0x2d7];
                  }
                  uVar6 = puVar10[0x2d6];
                  if ((int)uVar6 < (int)puVar10[0x66]) {
                    uVar7 = puVar10[0x6c];
                    do {
                      unaff_x21 = unaff_x23 + (ulong)(puVar10[0x2d7] & uVar7) * 0xc;
                      uVar4 = *(ushort *)(*(long *)(puVar10 + 0x2c4) + -2);
                      unaff_x26 = (ulong)uVar4;
                      uVar3 = *(ushort *)(*(long *)(puVar10 + 0x2c4) + (long)(int)uVar6 * 2);
                      unaff_x25 = (ulong)uVar3;
                      uVar11 = *(undefined8 *)unaff_x21;
                      *(undefined8 *)((long)register0x00000008 + -0x94) =
                           *(undefined8 *)(unaff_x21 + 2);
                      *(undefined8 *)((long)register0x00000008 + -0x9c) = uVar11;
                      uVar11 = *(undefined8 *)(unaff_x21 + 4);
                      *(undefined8 *)((long)register0x00000008 + -0x84) =
                           *(undefined8 *)(unaff_x21 + 6);
                      *(undefined8 *)((long)register0x00000008 + -0x8c) = uVar11;
                      uVar11 = *(undefined8 *)(unaff_x21 + 8);
                      *(undefined8 *)((long)register0x00000008 + -0x74) =
                           *(undefined8 *)(unaff_x21 + 10);
                      *(undefined8 *)((long)register0x00000008 + -0x7c) = uVar11;
                      puVar5 = puVar10;
                      param_2 = unaff_x21;
                      func_0x000108229594();
                      uVar7 = puVar10[0x6c];
                      if ((int)puVar5 == 0) {
                        if ((uVar7 != 0) ||
                           ((ulong)(*(long *)(param_1 + 0x4e) - *(long *)(param_1 + 0x4c)) < 0x1001)
                           ) {
                          if (0 < (int)puVar10[0x32]) {
                            unaff_x23 = (uint *)0x113254000;
                            puVar5 = puVar10 + 0x26;
                            (*(code *)PTR_FUN_113254c88)();
                            if ((int)puVar5 == 0) {
                              if (*param_1 == 3) {
                                lVar8 = *(long *)(param_1 + 0x20);
                                iVar2 = *(int *)(lVar8 + 200);
                                goto joined_r0x000108225f78;
                              }
                              goto LAB_108225ef0;
                            }
                          }
                          *(ushort *)(*(long *)(puVar10 + 0x2c4) + -2) = uVar4;
                          *(ushort *)(*(long *)(puVar10 + 0x2c4) + (long)(int)puVar10[0x2d6] * 2) =
                               uVar3;
                          uVar11 = *(undefined8 *)((long)register0x00000008 + -0x9c);
                          *(undefined8 *)(unaff_x21 + 2) =
                               *(undefined8 *)((long)register0x00000008 + -0x94);
                          *(undefined8 *)unaff_x21 = uVar11;
                          uVar11 = *(undefined8 *)((long)register0x00000008 + -0x8c);
                          *(undefined8 *)(unaff_x21 + 6) =
                               *(undefined8 *)((long)register0x00000008 + -0x84);
                          *(undefined8 *)(unaff_x21 + 4) = uVar11;
                          uVar11 = *(undefined8 *)((long)register0x00000008 + -0x7c);
                          *(undefined8 *)(unaff_x21 + 10) =
                               *(undefined8 *)((long)register0x00000008 + -0x74);
                          *(undefined8 *)(unaff_x21 + 8) = uVar11;
                          puVar9 = (uint *)0x5;
                          goto LAB_1082260bc;
                        }
                        if (*param_1 != 3) goto LAB_108225ef0;
                        lVar8 = *(long *)(param_1 + 0x20);
                        iVar2 = *(int *)(lVar8 + 200);
joined_r0x000108225f78:
                        if (0 < iVar2) {
                          puVar5 = (uint *)(lVar8 + 0x98);
                          (*(code *)PTR_FUN_113254c88)();
                        }
                        goto LAB_108225ee0;
                      }
                      if (uVar7 == 0) {
                        *(long *)(param_1 + 0x4c) =
                             *(long *)(unaff_x21 + 4) - *(long *)(param_1 + 0x52);
                      }
                      uVar6 = puVar10[0x2d6] + 1;
                      puVar10[0x2d6] = uVar6;
                    } while ((int)uVar6 < (int)puVar10[0x66]);
                  }
                  *(undefined2 *)(*(long *)(puVar10 + 0x2c4) + -2) = 0;
                  puVar10[0x2c0] = 0;
                  puVar10[0x2d6] = 0;
                  param_2 = param_1 + 0x22;
                  puVar5 = puVar10;
                  FUN_108224660();
                  if ((int)puVar5 == 0) {
                    if (*param_1 == 3) {
                      if (0 < *(int *)(*(long *)(param_1 + 0x20) + 200)) {
                        puVar5 = (uint *)(*(long *)(param_1 + 0x20) + 0x98);
                        (*(code *)PTR_FUN_113254c88)();
                      }
                      if (*(code **)(param_1 + 0x36) != (code *)0x0) {
                        puVar5 = param_1 + 0x22;
                        (**(code **)(param_1 + 0x36))();
                      }
                    }
                    goto LAB_10822609c;
                  }
                  uVar6 = puVar10[0x2d7] + 1;
                  puVar10[0x2d7] = uVar6;
                  if ((int)puVar10[0x67] <= (int)uVar6) break;
                } while( true );
              }
              if ((int)puVar10[0x32] < 1) {
                unaff_x21 = (uint *)0x0;
              }
              else {
                puVar5 = puVar10 + 0x26;
                (*(code *)PTR_FUN_113254c88)();
                unaff_x21 = (uint *)(ulong)((int)puVar5 == 0);
              }
              if (*(code **)(param_1 + 0x36) != (code *)0x0) {
                puVar5 = param_1 + 0x22;
                (**(code **)(param_1 + 0x36))();
              }
              if ((int)unaff_x21 == 0) {
                puVar10[1] = 0;
                puVar5 = param_1;
                FUN_1082265d4();
                puVar9 = puVar5;
              }
              else {
LAB_10822609c:
                *param_1 = 7;
                puVar9 = (uint *)0x6;
              }
            }
LAB_1082260bc:
            uVar6 = *param_1;
            goto LAB_1082260c0;
          }
LAB_108226144:
          puVar9 = (uint *)0x5;
          goto LAB_1082261c0;
        }
LAB_1082260c0:
        if (uVar6 == 4) {
          unaff_x21 = *(uint **)(param_1 + 0x20);
          unaff_x22 = (uint *)(*(long *)(param_1 + 0x4e) - *(long *)(param_1 + 0x4c));
          if (unaff_x22 < (uint *)(*(ulong *)(param_1 + 0x78) >> 3)) {
LAB_1082260e0:
            puVar9 = (uint *)0x5;
            *unaff_x21 = 5;
            goto LAB_1082260e8;
          }
          param_2 = param_1 + 0x22;
          puVar5 = unaff_x21;
          FUN_10822caa0();
          if ((int)puVar5 != 0) {
            puVar5 = (uint *)(ulong)param_1[0x22];
            param_2 = (uint *)(ulong)param_1[0x23];
            param_3 = *(uint **)(param_1 + 0xc);
            FUN_108223f4c();
            *unaff_x21 = (uint)puVar5;
            puVar9 = puVar5;
            if ((uint)puVar5 != 0) goto LAB_10822617c;
            *param_1 = 5;
            goto LAB_1082260f4;
          }
          uVar6 = *unaff_x21;
          puVar9 = (uint *)(ulong)uVar6;
          if (uVar6 == 3) {
            if (unaff_x22 < *(uint **)(param_1 + 0x78)) goto LAB_1082260e0;
          }
          else if ((uVar6 & 0xfffffffd) == 5) goto LAB_108225d14;
        }
        else {
LAB_1082260e8:
          if (*param_1 != 5) goto LAB_1082261c0;
LAB_1082260f4:
          puVar10 = *(uint **)(param_1 + 0x20);
          puVar10[0x14] =
               (uint)((ulong)(*(long *)(param_1 + 0x4e) - *(long *)(param_1 + 0x4c)) <
                     *(ulong *)(param_1 + 0x78));
          puVar5 = puVar10;
          FUN_10822cbb4();
          uVar6 = *puVar10;
          puVar9 = (uint *)(ulong)uVar6;
          if ((int)puVar5 != 0) {
            if (uVar6 != 5) {
              puVar9 = param_1;
              FUN_1082265d4();
              puVar5 = puVar9;
            }
            goto LAB_1082261c0;
          }
          if ((uVar6 & 0xfffffffd) == 5) goto LAB_108226144;
        }
LAB_10822617c:
        uVar6 = *param_1;
      }
LAB_108226180:
      if (uVar6 == 3) {
        if (0 < *(int *)(*(long *)(param_1 + 0x20) + 200)) {
          puVar5 = (uint *)(*(long *)(param_1 + 0x20) + 0x98);
          (*(code *)PTR_FUN_113254c88)();
        }
        if (*(code **)(param_1 + 0x36) != (code *)0x0) {
          puVar5 = param_1 + 0x22;
          (**(code **)(param_1 + 0x36))();
        }
      }
      *param_1 = 7;
    }
    else {
      puVar9 = (uint *)0x5;
      if (*(long *)(param_1 + 0x20) != 0) goto LAB_108225c7c;
    }
LAB_1082261c0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return puVar9;
    }
    ___stack_chk_fail();
    *(uint **)((long)register0x00000008 + -0xd0) = puVar9;
    *(uint **)((long)register0x00000008 + -200) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xb8) = FUN_108226324;
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x2;
    }
    if (param_2 == (uint *)0x0) {
      return (uint *)0x2;
    }
    uVar6 = 0;
    if (*puVar5 != 6) {
      uVar6 = 5;
    }
    uVar7 = 3;
    if (*puVar5 != 7) {
      uVar7 = uVar6;
    }
    if (uVar7 != 5) {
      return (uint *)(ulong)uVar7;
    }
    if (puVar5[0x4a] != 2) {
      if (puVar5[0x4a] != 0) {
        return (uint *)0x2;
      }
      puVar5[0x4a] = 2;
    }
    lVar8 = *(long *)(puVar5 + 0x52);
    if (lVar8 != 0) {
      lVar8 = lVar8 + *(long *)(puVar5 + 0x4c);
    }
    if (param_3 < *(uint **)(puVar5 + 0x50)) {
      return (uint *)0x2;
    }
    *(uint **)(puVar5 + 0x50) = param_3;
    *(uint **)(puVar5 + 0x52) = param_2;
    *(uint **)(puVar5 + 0x4e) = param_3;
    param_2 = (uint *)((long)param_2 + (*(long *)(puVar5 + 0x4c) - lVar8));
    func_0x000108226448(puVar5);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -200);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_1 = puVar5;
  } while( true );
}



/* Entry: 108226324; end: 1082263d3;  */

uint * FUN_108226324(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *unaff_x19;
  uint *puVar11;
  uint *unaff_x20;
  uint *unaff_x21;
  uint *unaff_x22;
  uint *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar12;
  
  do {
    puVar7 = param_1;
    *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar7 == (uint *)0x0) {
      return (uint *)0x2;
    }
    if (param_2 == (uint *)0x0) {
      return (uint *)0x2;
    }
    uVar8 = 0;
    if (*puVar7 != 6) {
      uVar8 = 5;
    }
    uVar9 = 3;
    if (*puVar7 != 7) {
      uVar9 = uVar8;
    }
    if (uVar9 != 5) {
      return (uint *)(ulong)uVar9;
    }
    if (puVar7[0x4a] != 2) {
      if (puVar7[0x4a] != 0) {
        return (uint *)0x2;
      }
      puVar7[0x4a] = 2;
    }
    lVar10 = *(long *)(puVar7 + 0x52);
    if (lVar10 != 0) {
      lVar10 = lVar10 + *(long *)(puVar7 + 0x4c);
    }
    if (param_3 < *(uint **)(puVar7 + 0x50)) {
      return (uint *)0x2;
    }
    *(uint **)(puVar7 + 0x50) = param_3;
    *(uint **)(puVar7 + 0x52) = param_2;
    *(uint **)(puVar7 + 0x4e) = param_3;
    param_2 = (uint *)((long)param_2 + (*(long *)(puVar7 + 0x4c) - lVar10));
    func_0x000108226448(puVar7);
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(uint **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar8 = *puVar7;
    param_1 = puVar7;
    if (uVar8 == 0) {
      lVar10 = *(long *)(puVar7 + 0x4c);
      lVar2 = *(long *)(puVar7 + 0x4e);
      *(long *)((long)register0x00000008 + -0xa0) = *(long *)(puVar7 + 0x52) + lVar10;
      *(long *)((long)register0x00000008 + -0x98) = lVar2 - lVar10;
      *(undefined4 *)((long)register0x00000008 + -0x90) = 0;
      puVar11 = (uint *)((long)register0x00000008 + -0xa0);
      FUN_10822d42c();
      if ((int)puVar11 == 0) {
        *(undefined8 *)(puVar7 + 0x78) = *(undefined8 *)((long)register0x00000008 + -0x70);
        uVar8 = *(uint *)((long)register0x00000008 + -0x60);
        puVar7[0x1e] = uVar8;
        if (uVar8 == 0) {
          FUN_108228d00();
          unaff_x20 = (uint *)0x1;
          param_1 = puVar11;
          if (puVar11 != (uint *)0x0) {
            puVar11[0x10] = 1;
            *(uint **)(puVar7 + 0x20) = puVar11;
            lVar10 = *(long *)((long)register0x00000008 + -0x88);
            *(undefined8 *)(puVar11 + 0x2e6) = *(undefined8 *)((long)register0x00000008 + -0x80);
            *(undefined8 *)(puVar11 + 0x2e8) = *(undefined8 *)((long)register0x00000008 + -0x78);
            *puVar7 = 1;
            lVar10 = *(long *)(puVar7 + 0x4c) + lVar10;
            *(long *)(puVar7 + 0x4c) = lVar10;
            *(long *)(puVar7 + 0x3a) = *(long *)(puVar7 + 0x4e) - lVar10;
            *(long *)(puVar7 + 0x3c) = *(long *)(puVar7 + 0x52) + lVar10;
            unaff_x20 = (uint *)0x0;
          }
        }
        else {
          FUN_10822ae84();
          param_1 = puVar11;
          if (puVar11 == (uint *)0x0) {
            unaff_x20 = (uint *)0x1;
          }
          else {
            unaff_x20 = (uint *)0x0;
            *(uint **)(puVar7 + 0x20) = puVar11;
            lVar10 = *(long *)((long)register0x00000008 + -0x88);
            *puVar7 = 4;
            lVar10 = *(long *)(puVar7 + 0x4c) + lVar10;
            *(long *)(puVar7 + 0x4c) = lVar10;
            *(long *)(puVar7 + 0x3a) = *(long *)(puVar7 + 0x4e) - lVar10;
            *(long *)(puVar7 + 0x3c) = *(long *)(puVar7 + 0x52) + lVar10;
          }
        }
      }
      else {
        param_1 = puVar11;
        if ((int)puVar11 == 7) {
          unaff_x20 = (uint *)0x5;
        }
        else {
          if (*puVar7 == 3) {
            if (0 < *(int *)(*(long *)(puVar7 + 0x20) + 200)) {
              param_1 = (uint *)(*(long *)(puVar7 + 0x20) + 0x98);
              (*(code *)PTR_FUN_113254c88)();
            }
            if (*(code **)(puVar7 + 0x36) != (code *)0x0) {
              param_1 = puVar7 + 0x22;
              (**(code **)(puVar7 + 0x36))();
            }
          }
          *puVar7 = 7;
          unaff_x20 = puVar11;
        }
      }
      uVar8 = *puVar7;
LAB_108225c7c:
      if (uVar8 == 1) {
        unaff_x21 = (uint *)(*(long *)(puVar7 + 0x4e) - *(long *)(puVar7 + 0x4c));
        if (unaff_x21 < (uint *)0xa) {
          unaff_x20 = (uint *)0x5;
          uVar8 = 1;
        }
        else {
          unaff_x22 = (uint *)(*(long *)(puVar7 + 0x52) + *(long *)(puVar7 + 0x4c));
          param_3 = *(uint **)(puVar7 + 0x78);
          param_1 = unaff_x22;
          param_2 = unaff_x21;
          FUN_108228e34();
          if ((int)param_1 == 0) {
            unaff_x20 = (uint *)0x3;
            uVar8 = 7;
          }
          else {
            unaff_x20 = (uint *)0x0;
            *(ulong *)(puVar7 + 0x54) = (ulong)((uint3)((uint3)*unaff_x22 >> 5) + 10);
            *(uint **)(puVar7 + 0x3a) = unaff_x21;
            *(uint **)(puVar7 + 0x3c) = unaff_x22;
            uVar8 = 2;
          }
          *puVar7 = uVar8;
        }
      }
      if (uVar8 == 2) {
        if ((ulong)(*(long *)(puVar7 + 0x4e) - *(long *)(puVar7 + 0x4c)) < *(ulong *)(puVar7 + 0x54)
           ) {
LAB_108225d14:
          unaff_x20 = (uint *)0x5;
          goto LAB_1082260e8;
        }
        unaff_x21 = *(uint **)(puVar7 + 0x20);
        param_2 = puVar7 + 0x22;
        param_1 = unaff_x21;
        FUN_108228ee8();
        if ((int)param_1 != 0) {
          param_1 = (uint *)(ulong)puVar7[0x22];
          param_2 = (uint *)(ulong)puVar7[0x23];
          param_3 = *(uint **)(puVar7 + 0xc);
          FUN_108223f4c();
          *unaff_x21 = (uint)param_1;
          unaff_x20 = param_1;
          if ((uint)param_1 == 0) {
            param_1 = *(uint **)(puVar7 + 0xc);
            if (param_1 == (uint *)0x0) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              if ((param_1[10] != 0) && (uVar8 = 2, (int)puVar7[0x22] < 0x200)) {
                uVar8 = 0;
              }
            }
            unaff_x21[0x32] = uVar8;
            param_2 = unaff_x21;
            func_0x000108224544();
            unaff_x24 = *(long *)(puVar7 + 0x20);
            unaff_x22 = *(uint **)(unaff_x24 + 0x20);
            puVar11 = (uint *)(*(long *)(unaff_x24 + 0x28) - (long)unaff_x22);
            if (puVar11 == (uint *)0x0) {
              unaff_x20 = (uint *)0x3;
            }
            else {
              puVar6 = unaff_x23;
              if (puVar7[0x4a] != 1) {
LAB_108226054:
                *(long *)(puVar7 + 0x4c) = *(long *)(puVar7 + 0x4c) + (long)puVar11;
                *unaff_x21 = 0;
                param_2 = puVar7 + 0x22;
                param_1 = unaff_x21;
                FUN_10822530c();
                unaff_x23 = puVar6;
                if ((int)param_1 == 0) {
                  *puVar7 = 3;
                  param_2 = puVar7 + 0x22;
                  param_1 = unaff_x21;
                  FUN_108225528();
                  uVar8 = *puVar7;
                  if ((int)param_1 != 0) {
                    unaff_x20 = (uint *)0x0;
                    goto LAB_108225d88;
                  }
                  unaff_x20 = (uint *)(ulong)*unaff_x21;
                  goto LAB_108226180;
                }
                unaff_x20 = (uint *)(ulong)*unaff_x21;
                goto LAB_10822617c;
              }
              if (puVar11 < (uint *)0x400000001) {
                puVar6 = puVar11;
                _malloc();
                param_1 = (uint *)0x0;
                if (puVar6 != (uint *)0x0) {
                  param_3 = puVar11;
                  _memcpy();
                  *(uint **)(puVar7 + 0x56) = puVar6;
                  *(uint **)(unaff_x24 + 0x20) = puVar6;
                  *(long *)(unaff_x24 + 0x28) = (long)puVar6 + (long)puVar11;
                  puVar1 = (uint *)((long)puVar6 + (long)puVar11 + -7);
                  if (puVar11 < (uint *)0x8) {
                    puVar1 = puVar6;
                  }
                  *(uint **)(unaff_x24 + 0x30) = puVar1;
                  goto LAB_108226054;
                }
              }
              unaff_x20 = (uint *)0x1;
            }
            *unaff_x21 = (uint)unaff_x20;
          }
          goto LAB_10822617c;
        }
        unaff_x20 = (uint *)(ulong)*unaff_x21;
        uVar8 = *puVar7;
        if ((*unaff_x21 & 0xfffffffd) == 5) {
          unaff_x20 = (uint *)0x5;
          goto LAB_108225d88;
        }
      }
      else {
LAB_108225d88:
        if (uVar8 == 3) {
          puVar11 = *(uint **)(puVar7 + 0x20);
          if (puVar11 != (uint *)0x0) {
            if (puVar11[1] == 0) {
              if (0 < (int)puVar11[0x32]) {
                param_1 = puVar11 + 0x26;
                (*(code *)PTR_FUN_113254c88)();
              }
LAB_108225ee0:
              if (*(code **)(puVar7 + 0x36) != (code *)0x0) {
                param_1 = puVar7 + 0x22;
                (**(code **)(puVar7 + 0x36))();
              }
LAB_108225ef0:
              *puVar7 = 7;
              unaff_x20 = (uint *)0x3;
            }
            else {
              uVar8 = puVar11[0x2d7];
              if ((int)uVar8 < (int)puVar11[0x67]) {
                unaff_x23 = puVar11 + 0x6e;
                unaff_x22 = (uint *)((long)register0x00000008 + -0xa0);
                unaff_x24 = 0x30;
                do {
                  if (puVar7[0x7a] != uVar8) {
                    param_1 = puVar11 + 4;
                    param_2 = puVar11;
                    FUN_108227d64();
                    if ((int)param_1 == 0) {
                      if (*puVar7 == 3) {
                        if (0 < *(int *)(*(long *)(puVar7 + 0x20) + 200)) {
                          param_1 = (uint *)(*(long *)(puVar7 + 0x20) + 0x98);
                          (*(code *)PTR_FUN_113254c88)();
                        }
                        if (*(code **)(puVar7 + 0x36) != (code *)0x0) {
                          param_1 = puVar7 + 0x22;
                          (**(code **)(puVar7 + 0x36))();
                        }
                      }
                      *puVar7 = 7;
                      unaff_x20 = (uint *)0x3;
                      goto LAB_1082261c0;
                    }
                    puVar7[0x7a] = puVar11[0x2d7];
                  }
                  uVar8 = puVar11[0x2d6];
                  if ((int)uVar8 < (int)puVar11[0x66]) {
                    uVar9 = puVar11[0x6c];
                    do {
                      unaff_x21 = unaff_x23 + (ulong)(puVar11[0x2d7] & uVar9) * 0xc;
                      uVar5 = *(ushort *)(*(long *)(puVar11 + 0x2c4) + -2);
                      unaff_x26 = (ulong)uVar5;
                      uVar4 = *(ushort *)(*(long *)(puVar11 + 0x2c4) + (long)(int)uVar8 * 2);
                      unaff_x25 = (ulong)uVar4;
                      uVar12 = *(undefined8 *)unaff_x21;
                      *(undefined8 *)((long)register0x00000008 + -0x94) =
                           *(undefined8 *)(unaff_x21 + 2);
                      *(undefined8 *)((long)register0x00000008 + -0x9c) = uVar12;
                      uVar12 = *(undefined8 *)(unaff_x21 + 4);
                      *(undefined8 *)((long)register0x00000008 + -0x84) =
                           *(undefined8 *)(unaff_x21 + 6);
                      *(undefined8 *)((long)register0x00000008 + -0x8c) = uVar12;
                      uVar12 = *(undefined8 *)(unaff_x21 + 8);
                      *(undefined8 *)((long)register0x00000008 + -0x74) =
                           *(undefined8 *)(unaff_x21 + 10);
                      *(undefined8 *)((long)register0x00000008 + -0x7c) = uVar12;
                      param_1 = puVar11;
                      param_2 = unaff_x21;
                      func_0x000108229594();
                      uVar9 = puVar11[0x6c];
                      if ((int)param_1 == 0) {
                        if ((uVar9 != 0) ||
                           ((ulong)(*(long *)(puVar7 + 0x4e) - *(long *)(puVar7 + 0x4c)) < 0x1001))
                        {
                          if (0 < (int)puVar11[0x32]) {
                            unaff_x23 = (uint *)0x113254000;
                            param_1 = puVar11 + 0x26;
                            (*(code *)PTR_FUN_113254c88)();
                            if ((int)param_1 == 0) {
                              if (*puVar7 == 3) {
                                lVar10 = *(long *)(puVar7 + 0x20);
                                iVar3 = *(int *)(lVar10 + 200);
                                goto joined_r0x000108225f78;
                              }
                              goto LAB_108225ef0;
                            }
                          }
                          *(ushort *)(*(long *)(puVar11 + 0x2c4) + -2) = uVar5;
                          *(ushort *)(*(long *)(puVar11 + 0x2c4) + (long)(int)puVar11[0x2d6] * 2) =
                               uVar4;
                          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x9c);
                          *(undefined8 *)(unaff_x21 + 2) =
                               *(undefined8 *)((long)register0x00000008 + -0x94);
                          *(undefined8 *)unaff_x21 = uVar12;
                          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x8c);
                          *(undefined8 *)(unaff_x21 + 6) =
                               *(undefined8 *)((long)register0x00000008 + -0x84);
                          *(undefined8 *)(unaff_x21 + 4) = uVar12;
                          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x7c);
                          *(undefined8 *)(unaff_x21 + 10) =
                               *(undefined8 *)((long)register0x00000008 + -0x74);
                          *(undefined8 *)(unaff_x21 + 8) = uVar12;
                          unaff_x20 = (uint *)0x5;
                          goto LAB_1082260bc;
                        }
                        if (*puVar7 != 3) goto LAB_108225ef0;
                        lVar10 = *(long *)(puVar7 + 0x20);
                        iVar3 = *(int *)(lVar10 + 200);
joined_r0x000108225f78:
                        if (0 < iVar3) {
                          param_1 = (uint *)(lVar10 + 0x98);
                          (*(code *)PTR_FUN_113254c88)();
                        }
                        goto LAB_108225ee0;
                      }
                      if (uVar9 == 0) {
                        *(long *)(puVar7 + 0x4c) =
                             *(long *)(unaff_x21 + 4) - *(long *)(puVar7 + 0x52);
                      }
                      uVar8 = puVar11[0x2d6] + 1;
                      puVar11[0x2d6] = uVar8;
                    } while ((int)uVar8 < (int)puVar11[0x66]);
                  }
                  *(undefined2 *)(*(long *)(puVar11 + 0x2c4) + -2) = 0;
                  puVar11[0x2c0] = 0;
                  puVar11[0x2d6] = 0;
                  param_2 = puVar7 + 0x22;
                  param_1 = puVar11;
                  FUN_108224660();
                  if ((int)param_1 == 0) {
                    if (*puVar7 == 3) {
                      if (0 < *(int *)(*(long *)(puVar7 + 0x20) + 200)) {
                        param_1 = (uint *)(*(long *)(puVar7 + 0x20) + 0x98);
                        (*(code *)PTR_FUN_113254c88)();
                      }
                      if (*(code **)(puVar7 + 0x36) != (code *)0x0) {
                        param_1 = puVar7 + 0x22;
                        (**(code **)(puVar7 + 0x36))();
                      }
                    }
                    goto LAB_10822609c;
                  }
                  uVar8 = puVar11[0x2d7] + 1;
                  puVar11[0x2d7] = uVar8;
                  if ((int)puVar11[0x67] <= (int)uVar8) break;
                } while( true );
              }
              if ((int)puVar11[0x32] < 1) {
                unaff_x21 = (uint *)0x0;
              }
              else {
                param_1 = puVar11 + 0x26;
                (*(code *)PTR_FUN_113254c88)();
                unaff_x21 = (uint *)(ulong)((int)param_1 == 0);
              }
              if (*(code **)(puVar7 + 0x36) != (code *)0x0) {
                param_1 = puVar7 + 0x22;
                (**(code **)(puVar7 + 0x36))();
              }
              if ((int)unaff_x21 == 0) {
                puVar11[1] = 0;
                param_1 = puVar7;
                FUN_1082265d4();
                unaff_x20 = param_1;
              }
              else {
LAB_10822609c:
                *puVar7 = 7;
                unaff_x20 = (uint *)0x6;
              }
            }
LAB_1082260bc:
            uVar8 = *puVar7;
            goto LAB_1082260c0;
          }
LAB_108226144:
          unaff_x20 = (uint *)0x5;
          goto LAB_1082261c0;
        }
LAB_1082260c0:
        if (uVar8 == 4) {
          unaff_x21 = *(uint **)(puVar7 + 0x20);
          unaff_x22 = (uint *)(*(long *)(puVar7 + 0x4e) - *(long *)(puVar7 + 0x4c));
          if (unaff_x22 < (uint *)(*(ulong *)(puVar7 + 0x78) >> 3)) {
LAB_1082260e0:
            unaff_x20 = (uint *)0x5;
            *unaff_x21 = 5;
            goto LAB_1082260e8;
          }
          param_2 = puVar7 + 0x22;
          param_1 = unaff_x21;
          FUN_10822caa0();
          if ((int)param_1 != 0) {
            param_1 = (uint *)(ulong)puVar7[0x22];
            param_2 = (uint *)(ulong)puVar7[0x23];
            param_3 = *(uint **)(puVar7 + 0xc);
            FUN_108223f4c();
            *unaff_x21 = (uint)param_1;
            unaff_x20 = param_1;
            if ((uint)param_1 != 0) goto LAB_10822617c;
            *puVar7 = 5;
            goto LAB_1082260f4;
          }
          uVar8 = *unaff_x21;
          unaff_x20 = (uint *)(ulong)uVar8;
          if (uVar8 == 3) {
            if (unaff_x22 < *(uint **)(puVar7 + 0x78)) goto LAB_1082260e0;
          }
          else if ((uVar8 & 0xfffffffd) == 5) goto LAB_108225d14;
        }
        else {
LAB_1082260e8:
          if (*puVar7 != 5) goto LAB_1082261c0;
LAB_1082260f4:
          puVar11 = *(uint **)(puVar7 + 0x20);
          puVar11[0x14] =
               (uint)((ulong)(*(long *)(puVar7 + 0x4e) - *(long *)(puVar7 + 0x4c)) <
                     *(ulong *)(puVar7 + 0x78));
          param_1 = puVar11;
          FUN_10822cbb4();
          uVar8 = *puVar11;
          unaff_x20 = (uint *)(ulong)uVar8;
          if ((int)param_1 != 0) {
            if (uVar8 != 5) {
              unaff_x20 = puVar7;
              FUN_1082265d4();
              param_1 = unaff_x20;
            }
            goto LAB_1082261c0;
          }
          if ((uVar8 & 0xfffffffd) == 5) goto LAB_108226144;
        }
LAB_10822617c:
        uVar8 = *puVar7;
      }
LAB_108226180:
      if (uVar8 == 3) {
        if (0 < *(int *)(*(long *)(puVar7 + 0x20) + 200)) {
          param_1 = (uint *)(*(long *)(puVar7 + 0x20) + 0x98);
          (*(code *)PTR_FUN_113254c88)();
        }
        if (*(code **)(puVar7 + 0x36) != (code *)0x0) {
          param_1 = puVar7 + 0x22;
          (**(code **)(puVar7 + 0x36))();
        }
      }
      *puVar7 = 7;
    }
    else {
      unaff_x20 = (uint *)0x5;
      if (*(long *)(puVar7 + 0x20) != 0) goto LAB_108225c7c;
    }
LAB_1082261c0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return unaff_x20;
    }
    unaff_x30 = FUN_108226324;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = puVar7;
  } while( true );
}



/* Entry: 1082263d4; end: 1082265d3;  */

undefined8 FUN_1082263d4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  
  if ((((param_1 != (uint *)0x0) && (*(long *)(param_1 + 0x20) != 0)) && (2 < *param_1)) &&
     (((*(long *)(param_1 + 0x76) == 0 && (puVar1 = *(uint **)(param_1 + 2), puVar1 != (uint *)0x0))
      && (*puVar1 < 0xb)))) {
    if (param_2 != (uint *)0x0) {
      *param_2 = param_1[10];
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = puVar1[1];
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = puVar1[2];
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = puVar1[6];
    }
    return *(undefined8 *)(puVar1 + 4);
  }
  return 0;
}



/* Entry: 1082265d4; end: 108226707;  */

undefined8 * FUN_1082265d4(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  *param_1 = 6;
  if (((*(long *)(param_1 + 0xc) == 0) || (*(int *)(*(long *)(param_1 + 0xc) + 0x30) == 0)) ||
     (puVar3 = puVar2, FUN_108223ea0(), (int)puVar3 == 0)) {
    if (*(long *)(param_1 + 0x76) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = puVar2;
      FUN_1082241e0();
      if ((int)param_1[0x5b] < 1) {
        _free(*(undefined8 *)(param_1 + 0x74));
      }
      *(undefined8 *)(param_1 + 0x74) = 0;
      if ((int)puVar3 == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x76);
        uVar5 = puVar1[1];
        uVar4 = *puVar1;
        uVar7 = puVar1[3];
        uVar6 = puVar1[2];
        uVar8 = puVar1[4];
        uVar10 = puVar1[7];
        uVar9 = puVar1[6];
        puVar2[5] = puVar1[5];
        puVar2[4] = uVar8;
        puVar2[7] = uVar10;
        puVar2[6] = uVar9;
        puVar2[1] = uVar5;
        *puVar2 = uVar4;
        puVar2[3] = uVar7;
        puVar2[2] = uVar6;
        uVar5 = puVar1[9];
        uVar4 = puVar1[8];
        uVar7 = puVar1[0xb];
        uVar6 = puVar1[10];
        uVar9 = puVar1[0xd];
        uVar8 = puVar1[0xc];
        puVar2[0xe] = puVar1[0xe];
        puVar2[0xb] = uVar7;
        puVar2[10] = uVar6;
        puVar2[0xd] = uVar9;
        puVar2[0xc] = uVar8;
        puVar2[9] = uVar5;
        puVar2[8] = uVar4;
        *(undefined8 *)(param_1 + 0x76) = 0;
      }
    }
  }
  return puVar3;
}



/* Entry: 108226708; end: 108226c33;  */

void FUN_108226708(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  
  puVar19 = *(undefined8 **)(param_1 + 0x38);
  uVar6 = *(uint *)*puVar19;
  if (uVar6 < 0xd && (1 << (ulong)(uVar6 & 0x1f) & 0x103aU) != 0) {
    bVar9 = false;
    puVar19[0xb] = 0;
    puVar19[10] = 0;
    puVar19[0xd] = 0;
    puVar19[0xc] = 0;
    uVar14 = 0xb;
  }
  else {
    bVar9 = uVar6 - 0xb < 0xfffffffc;
    puVar19[0xb] = 0;
    puVar19[10] = 0;
    puVar19[0xd] = 0;
    puVar19[0xc] = 0;
    uVar14 = 0xb;
    if (bVar9) {
      uVar14 = 0xc;
    }
  }
  puVar18 = puVar19 + 10;
  uVar11 = puVar19[5];
  func_0x00010822dd40(uVar11,param_1,uVar14);
  if ((int)uVar11 == 0) {
    return;
  }
  bVar10 = bVar9;
  if (uVar6 - 0xb < 0xfffffffc) {
    bVar10 = true;
  }
  if (!bVar10) {
    func_0x000108230034();
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    if (uVar6 < 0xb) {
      func_0x0001082308a0();
      puVar19[0xb] = FUN_108226c5c;
      if (*(int *)(param_1 + 0x58) != 0) {
        iVar7 = *(int *)(param_1 + 0xc);
        uVar2 = (iVar7 + 1U & 0xfffffffe) + iVar7;
        uVar12 = (ulong)uVar2;
        if ((int)uVar2 < 0) goto LAB_108226a84;
        _malloc();
        *puVar18 = uVar12;
        if (uVar12 == 0) {
          return;
        }
        puVar19[1] = uVar12;
        puVar19[2] = uVar12 + (long)iVar7;
        puVar19[3] = uVar12 + (long)iVar7 + (long)((int)(iVar7 + 1U) >> 1);
        puVar19[0xb] = 0x108226d38;
        func_0x000108230034();
      }
    }
    else {
      puVar19[0xb] = 0x108226f40;
    }
    if (bVar9) {
      return;
    }
    if (uVar6 == 10 || uVar6 == 5) {
      pcVar15 = FUN_10822707c;
LAB_108226884:
      puVar19[0xc] = pcVar15;
    }
    else {
      pcVar15 = FUN_108227240;
      if (uVar6 < 0xb) {
        pcVar15 = FUN_10822716c;
      }
      puVar19[0xc] = pcVar15;
      if (10 < uVar6) {
        return;
      }
    }
LAB_108226888:
    FUN_10822dff4();
  }
  else {
    piVar20 = (int *)*puVar19;
    iVar7 = *piVar20;
    uVar2 = (uint)(iVar7 - 1U < 0xc) & 0x81dU >> (ulong)(iVar7 - 1U & 0x1f);
    if (uVar6 < 0xb) {
      bVar9 = uVar2 == 0;
      bVar10 = iVar7 - 0xbU < 0xfffffffc;
      iVar7 = *(int *)(param_1 + 0x8c);
      lVar16 = (long)iVar7;
      lVar4 = 3;
      if (!bVar9 || !bVar10) {
        lVar4 = 4;
      }
      lVar17 = lVar16 * 2 * lVar4;
      lVar1 = lVar4 * lVar16 + lVar17 * 4;
      uVar12 = lVar1 + lVar4 * 0x68 + 0x1f;
      if (uVar12 < 0x400000001) {
        uVar14 = *(undefined4 *)(param_1 + 0x90);
        iVar5 = *(int *)(param_1 + 0xc);
        iVar8 = *(int *)(param_1 + 0x10);
        _malloc();
        *puVar18 = uVar12;
        if (uVar12 == 0) {
          return;
        }
        lVar4 = uVar12 + lVar17 * 4;
        uVar13 = uVar12 + lVar1 + 0x1f & 0xffffffffffffffe0;
        puVar19[6] = uVar13;
        puVar19[7] = uVar13 + 0x68;
        lVar1 = 0;
        if (!bVar9 || !bVar10) {
          lVar1 = uVar13 + 0x138;
        }
        puVar19[8] = uVar13 + 0xd0;
        puVar19[9] = lVar1;
        FUN_108253b0c(uVar13,iVar5,iVar8,lVar4,lVar16,uVar14,0,1,uVar12);
        if ((int)uVar13 == 0) {
          return;
        }
        iVar5 = iVar5 + 1 >> 1;
        iVar8 = iVar8 + 1 >> 1;
        uVar11 = puVar19[7];
        FUN_108253b0c(uVar11,iVar5,iVar8,lVar4 + lVar16,lVar16,uVar14,0,1,uVar12 + lVar16 * 8);
        if ((int)uVar11 == 0) {
          return;
        }
        uVar11 = puVar19[8];
        FUN_108253b0c(uVar11,iVar5,iVar8,lVar4 + lVar16 * 2,lVar16,uVar14,0,1,uVar12 + lVar16 * 0x10
                     );
        if ((int)uVar11 == 0) {
          return;
        }
        puVar19[0xb] = FUN_1082272f8;
        FUN_1082307f8();
        if (bVar9 && bVar10) {
          return;
        }
        uVar11 = puVar19[9];
        FUN_108253b0c(uVar11,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                      lVar4 + iVar7 * 3,lVar16,uVar14,0,1,uVar12 + (long)iVar7 * 0x18);
        if ((int)uVar11 == 0) {
          return;
        }
        pcVar15 = FUN_108227564;
        if (*(int *)*puVar19 != 10 && *(int *)*puVar19 != 5) {
          pcVar15 = (code *)0x108227694;
        }
        puVar19[0xc] = FUN_1082274c8;
        puVar19[0xd] = pcVar15;
        goto LAB_108226888;
      }
    }
    else {
      bVar9 = uVar2 != 0;
      bVar10 = 0xfffffffb < iVar7 - 0xbU;
      lVar16 = (long)*(int *)(param_1 + 0x8c);
      uVar6 = *(int *)(param_1 + 0x8c) + 1;
      uVar2 = uVar6 & 0xfffffffe;
      lVar4 = 0x157;
      if (bVar9 || bVar10) {
        lVar4 = 0x1bf;
      }
      lVar1 = 0;
      if (bVar9 || bVar10) {
        lVar1 = lVar16 << 3;
      }
      lVar1 = lVar1 + (lVar16 * 2 + (long)(int)uVar2 * 2) * 4;
      uVar12 = lVar1 + lVar4;
      if (uVar12 < 0x400000001) {
        iVar8 = *(int *)(param_1 + 0x90);
        iVar7 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 0x10);
        _malloc();
        *puVar18 = uVar12;
        if (uVar12 == 0) {
          return;
        }
        uVar13 = uVar12 + lVar1 + 0x1f & 0xffffffffffffffe0;
        puVar19[6] = uVar13;
        puVar19[7] = uVar13 + 0x68;
        lVar4 = 0;
        if (bVar9 || bVar10) {
          lVar4 = uVar13 + 0x138;
        }
        puVar19[8] = uVar13 + 0xd0;
        puVar19[9] = lVar4;
        FUN_108253b0c(uVar13,iVar7,iVar5,*(undefined8 *)(piVar20 + 4),lVar16,iVar8,piVar20[0xc],1,
                      uVar12);
        if ((int)uVar13 == 0) {
          return;
        }
        iVar3 = iVar8 + 1 >> 1;
        iVar7 = iVar7 + 1 >> 1;
        iVar5 = iVar5 + 1 >> 1;
        uVar11 = puVar19[7];
        lVar4 = uVar12 + lVar16 * 8;
        FUN_108253b0c(uVar11,iVar7,iVar5,*(undefined8 *)(piVar20 + 6),(int)uVar6 >> 1,iVar3,
                      piVar20[0xd],1,lVar4);
        if ((int)uVar11 == 0) {
          return;
        }
        uVar11 = puVar19[8];
        FUN_108253b0c(uVar11,iVar7,iVar5,*(undefined8 *)(piVar20 + 8),(int)uVar6 >> 1,iVar3,
                      piVar20[0xe],1,lVar4 + (long)(int)uVar2 * 4);
        if ((int)uVar11 == 0) {
          return;
        }
        puVar19[0xb] = 0x1082277e0;
        if (!bVar9 && !bVar10) {
          return;
        }
        uVar11 = puVar19[9];
        FUN_108253b0c(uVar11,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                      *(undefined8 *)(piVar20 + 10),lVar16,iVar8,piVar20[0xf],1,
                      lVar4 + (-(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) * 4
                     );
        if ((int)uVar11 == 0) {
          return;
        }
        pcVar15 = FUN_108227904;
        goto LAB_108226884;
      }
    }
LAB_108226a84:
    *puVar18 = 0;
  }
  return;
}



/* Entry: 108226c34; end: 108226c5b;  */

void FUN_108226c34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  _free(*(undefined8 *)(lVar1 + 0x50));
  *(undefined8 *)(lVar1 + 0x50) = 0;
  return;
}



/* Entry: 108226c5c; end: 10822707b;  */

uint FUN_108226c5c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar5) {
    uVar13 = 0;
    puVar7 = (uint *)*param_2;
    uVar6 = puVar7[6];
    pcVar8 = *(code **)((ulong)*puVar7 * 8 + 0x113869f30);
    lVar11 = *(long *)(param_1 + 0x20);
    lVar9 = *(long *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x30);
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar10 = *(long *)(puVar7 + 4) + (long)*(int *)(param_1 + 8) * (long)(int)uVar6;
    lVar12 = *(long *)(param_1 + 0x18);
    do {
      (*pcVar8)(lVar12,lVar11,lVar9,lVar10,uVar4);
      lVar12 = lVar12 + iVar2;
      uVar1 = -(uVar13 & 1) & uVar3;
      lVar9 = lVar9 + (int)uVar1;
      lVar11 = lVar11 + (int)uVar1;
      lVar10 = lVar10 + (int)uVar6;
      uVar13 = uVar13 + 1;
    } while (uVar5 != uVar13);
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  return uVar5;
}



/* Entry: 10822707c; end: 10822716b;  */

undefined8 FUN_10822707c(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  int *piVar14;
  int iStack_3c;
  byte *pbStack_38;
  
  pbStack_38 = *(byte **)(param_1 + 0x26);
  if (pbStack_38 != (byte *)0x0) {
    uVar1 = param_1[3];
    piVar14 = (int *)*param_2;
    iVar2 = *piVar14;
    piVar4 = param_1;
    FUN_108227a78(param_1,&pbStack_38,&iStack_3c);
    if (0 < iStack_3c) {
      iVar7 = 0;
      iVar6 = piVar14[6];
      lVar5 = *(long *)(piVar14 + 4) + (long)iVar6 * (long)(int)piVar4;
      pbVar10 = (byte *)(lVar5 + 1);
      bVar9 = 0xf;
      pbVar8 = pbStack_38;
      do {
        pbVar11 = pbVar8;
        pbVar12 = pbVar10;
        uVar13 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          do {
            bVar3 = *pbVar11;
            *pbVar12 = *pbVar12 & 0xf0 | bVar3 >> 4;
            bVar9 = bVar9 & bVar3 >> 4;
            uVar13 = uVar13 - 1;
            pbVar11 = pbVar11 + 1;
            pbVar12 = pbVar12 + 2;
          } while (uVar13 != 0);
          iVar6 = piVar14[6];
        }
        pbVar8 = pbVar8 + *param_1;
        pbVar10 = pbVar10 + iVar6;
        iVar7 = iVar7 + 1;
      } while (iVar7 != iStack_3c);
      if ((bVar9 != 0xf) && (0xfffffffb < iVar2 - 0xbU)) {
        (*pcRam0000000113869a68)(lVar5,(ulong)uVar1);
      }
    }
  }
  return 0;
}



/* Entry: 10822716c; end: 10822723f;  */

undefined8 FUN_10822716c(undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)(param_1 + 0x26);
  if (lStack_48 != 0) {
    uVar2 = param_1[3];
    piVar7 = (int *)*param_2;
    iVar3 = *piVar7;
    puVar4 = param_1;
    FUN_108227a78(param_1,&lStack_48,&uStack_4c);
    lVar6 = *(long *)(piVar7 + 4) + (long)piVar7[6] * (long)(int)puVar4;
    lVar1 = 0;
    if (iVar3 != 4 && iVar3 != 9) {
      lVar1 = 3;
    }
    lVar5 = lStack_48;
    (*pcRam0000000113869a70)(lStack_48,*param_1,uVar2,uStack_4c,lVar6 + lVar1);
    if (0xfffffffb < iVar3 - 0xbU && (int)lVar5 != 0) {
      (*pcRam0000000113869a60)(lVar6,iVar3 == 4 || iVar3 == 9,uVar2,uStack_4c,piVar7[6]);
    }
  }
  return 0;
}



/* Entry: 108227240; end: 1082272f7;  */

undefined8 FUN_108227240(int *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x26);
  lVar6 = *param_2;
  iVar1 = param_1[3];
  iVar5 = param_1[4];
  iVar2 = *(int *)(lVar6 + 0x3c);
  lVar3 = *(long *)(lVar6 + 0x28) + (long)iVar2 * (long)param_1[2];
  if (lVar4 == 0) {
    if (*(long *)(lVar6 + 0x28) != 0 && 0 < iVar5) {
      do {
        _memset(lVar3,0xff,(long)iVar1);
        lVar3 = lVar3 + iVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (0 < iVar5) {
    do {
      _memcpy(lVar3,lVar4,(long)iVar1);
      lVar4 = lVar4 + *param_1;
      lVar3 = lVar3 + *(int *)(lVar6 + 0x3c);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}



/* Entry: 1082272f8; end: 1082274c7;  */

int FUN_1082272f8(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 1) {
    iVar7 = 0;
  }
  else {
    iVar11 = 0;
    iVar12 = 0;
    iVar7 = 0;
    lVar4 = param_2[6];
    do {
      FUN_108253c64(lVar4,iVar1 - iVar11,
                    *(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x30) * (long)iVar11);
      lVar5 = param_2[7];
      iVar3 = (iVar1 + 1 >> 1) - iVar12;
      iVar2 = *(int *)(lVar5 + 0x20);
      iVar9 = 0;
      if (iVar2 != 0) {
        iVar9 = (*(int *)(lVar5 + 0x18) + iVar2 + -1) / iVar2;
      }
      if (iVar3 <= iVar9) {
        iVar9 = iVar3;
      }
      if (iVar9 != 0) {
        FUN_108253c64(lVar5,iVar3,
                      *(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x34) * (long)iVar12);
        FUN_108253c64(param_2[8],iVar3,
                      *(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x34) * (long)iVar12);
        iVar12 = (int)lVar5 + iVar12;
      }
      lVar5 = param_2[6];
      if (*(int *)(lVar5 + 0x40) < *(int *)(lVar5 + 0x38)) {
        iVar9 = 0;
        puVar13 = (uint *)*param_2;
        pcVar10 = *(code **)((ulong)*puVar13 * 8 + 0x113869ea0);
        lVar8 = *(long *)(puVar13 + 4) +
                (long)(int)puVar13[6] * ((long)*(int *)(param_2 + 4) + (long)iVar7);
        do {
          if (((0 < *(int *)(lVar5 + 0x18)) ||
              (lVar6 = param_2[7], *(int *)(lVar6 + 0x38) <= *(int *)(lVar6 + 0x40))) ||
             (0 < *(int *)(lVar6 + 0x18))) break;
          FUN_10822fed4();
          FUN_10822fed4(param_2[7]);
          FUN_10822fed4(param_2[8]);
          (*pcVar10)(*(undefined8 *)(param_2[6] + 0x48),*(undefined8 *)(param_2[7] + 0x48),
                     *(undefined8 *)(param_2[8] + 0x48),lVar8,*(undefined4 *)(param_2[6] + 0x34));
          lVar8 = lVar8 + (int)puVar13[6];
          iVar9 = iVar9 + 1;
          lVar5 = param_2[6];
        } while (*(int *)(lVar5 + 0x40) < *(int *)(lVar5 + 0x38));
      }
      else {
        iVar9 = 0;
      }
      iVar11 = (int)lVar4 + iVar11;
      iVar7 = iVar9 + iVar7;
      lVar4 = lVar5;
    } while (iVar11 < iVar1);
  }
  return iVar7;
}



/* Entry: 1082274c8; end: 108227563;  */

undefined8 FUN_1082274c8(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 0x26) != 0) && (iVar4 = (int)param_3, 0 < iVar4)) {
    lVar6 = *(long *)(param_2 + 0x48);
    iVar1 = *(int *)(param_2 + 0x20);
    do {
      iVar5 = *(int *)(lVar6 + 0x3c);
      FUN_108253c64(lVar6,(param_1[2] - iVar5) + param_1[4],
                    *(long *)(param_1 + 0x26) + ((long)iVar5 - (long)param_1[2]) * (long)*param_1);
      iVar5 = (int)param_3;
      lVar3 = param_2;
      (**(code **)(param_2 + 0x68))(param_2,(iVar1 + iVar4) - iVar5,param_3);
      uVar2 = iVar5 - (int)lVar3;
      param_3 = (ulong)uVar2;
    } while (uVar2 != 0 && (int)lVar3 <= iVar5);
  }
  return 0;
}



/* Entry: 108227564; end: 108227903;  */

int FUN_108227564(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  
  lVar4 = param_1[9];
  if ((*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38)) &&
     (*(int *)(lVar4 + 0x18) < 1 && 0 < param_3)) {
    iVar7 = 0;
    piVar9 = (int *)*param_1;
    lVar8 = *(long *)(piVar9 + 4) + (long)piVar9[6] * (long)param_2;
    iVar1 = *piVar9;
    uVar2 = *(uint *)(lVar4 + 0x34);
    pbVar11 = (byte *)(lVar8 + 1);
    bVar10 = 0xf;
    do {
      FUN_10822fed4();
      if (0 < (int)uVar2) {
        uVar5 = 0;
        pbVar6 = pbVar11;
        do {
          bVar3 = *(byte *)(*(long *)(param_1[9] + 0x48) + uVar5);
          *pbVar6 = *pbVar6 & 0xf0 | bVar3 >> 4;
          bVar10 = bVar10 & bVar3 >> 4;
          uVar5 = uVar5 + 1;
          pbVar6 = pbVar6 + 2;
        } while (uVar2 != uVar5);
      }
      iVar7 = iVar7 + 1;
      lVar4 = param_1[9];
    } while ((*(int *)(lVar4 + 0x40) < *(int *)(lVar4 + 0x38)) &&
            (pbVar11 = pbVar11 + piVar9[6], *(int *)(lVar4 + 0x18) < 1 && iVar7 < param_3));
    if ((iVar1 - 7U < 4) && (bVar10 != 0xf)) {
      (*pcRam0000000113869a68)(lVar8,(ulong)uVar2,iVar7);
    }
  }
  else {
    iVar7 = 0;
  }
  return iVar7;
}



/* Entry: 108227904; end: 1082279f3;  */

undefined8 FUN_108227904(undefined4 *param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_2;
  lVar5 = param_2[4];
  iVar2 = *(int *)(lVar9 + 0x3c);
  lVar7 = *(long *)(lVar9 + 0x28) + (long)iVar2 * (long)(int)lVar5;
  uVar6 = *(ulong *)(param_1 + 0x26);
  if (uVar6 == 0) {
    if ((0 < param_3) && (*(long *)(lVar9 + 0x28) != 0)) {
      iVar3 = param_1[0x23];
      do {
        _memset(lVar7,0xff,(long)iVar3);
        lVar7 = lVar7 + iVar2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else {
    lVar8 = *(long *)(lVar9 + 0x10);
    iVar2 = *(int *)(lVar9 + 0x30);
    FUN_1082279f4(uVar6,*param_1,param_1[4],param_2[9]);
    if (0 < (int)uVar6) {
      lVar8 = lVar8 + (long)iVar2 * (long)(int)lVar5;
      iVar2 = *(int *)(lVar9 + 0x30);
      iVar3 = *(int *)(lVar9 + 0x3c);
      uVar1 = *(undefined4 *)(param_2[9] + 0x34);
      do {
        (*pcRam0000000113869aa8)(lVar8,lVar7,uVar1,1);
        lVar8 = lVar8 + iVar2;
        lVar7 = lVar7 + iVar3;
        uVar4 = (int)uVar6 - 1;
        uVar6 = (ulong)uVar4;
      } while (uVar4 != 0);
    }
  }
  return 0;
}



/* Entry: 1082279f4; end: 108227a77;  */

int FUN_1082279f4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((int)param_3 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar2 = param_4;
      FUN_108253c64(param_4,param_3,param_1,param_2);
      param_1 = param_1 + (int)uVar2 * (int)param_2;
      uVar1 = (int)param_3 - (int)uVar2;
      param_3 = (ulong)uVar1;
      uVar2 = param_4;
      FUN_108253d94(param_4);
      iVar3 = (int)uVar2 + iVar3;
    } while (0 < (int)uVar1);
  }
  return iVar3;
}



/* Entry: 108227a78; end: 108227adf;  */

void FUN_108227a78(int *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = param_1[4];
  *param_3 = iVar2;
  if (param_1[0x16] != 0) {
    if (iVar1 == 0) {
      *param_3 = iVar2 + -1;
      iVar2 = param_1[4];
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -1;
      *param_2 = *param_2 - (long)*param_1;
    }
    iVar2 = param_1[0x20] + iVar2 + param_1[2];
    if (iVar2 == param_1[0x21]) {
      *param_3 = iVar2 - (param_1[0x20] + iVar1);
    }
  }
  return;
}



/* Entry: 108227ae0; end: 108227d63;  */

void FUN_108227ae0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar7 = param_1 + 0x10;
  FUN_108252294(lVar7,7);
  lVar11 = param_1 + 0x10;
  FUN_108252294(lVar11,1);
  if ((int)lVar11 == 0) {
    iVar13 = 0;
  }
  else {
    lVar11 = param_1 + 0x10;
    FUN_108252294(lVar11,4);
    lVar8 = param_1 + 0x10;
    FUN_108252294(lVar8,1);
    iVar13 = -(int)lVar11;
    if ((int)lVar8 == 0) {
      iVar13 = (int)lVar11;
    }
  }
  lVar11 = param_1 + 0x10;
  FUN_108252294(lVar11,1);
  if ((int)lVar11 == 0) {
    iVar14 = 0;
  }
  else {
    lVar11 = param_1 + 0x10;
    FUN_108252294(lVar11,4);
    lVar8 = param_1 + 0x10;
    FUN_108252294(lVar8,1);
    iVar14 = -(int)lVar11;
    if ((int)lVar8 == 0) {
      iVar14 = (int)lVar11;
    }
  }
  lVar11 = param_1 + 0x10;
  FUN_108252294(lVar11,1);
  if ((int)lVar11 == 0) {
    iVar15 = 0;
  }
  else {
    lVar11 = param_1 + 0x10;
    FUN_108252294(lVar11,4);
    lVar8 = param_1 + 0x10;
    FUN_108252294(lVar8,1);
    iVar15 = -(int)lVar11;
    if ((int)lVar8 == 0) {
      iVar15 = (int)lVar11;
    }
  }
  lVar11 = param_1 + 0x10;
  FUN_108252294(lVar11,1);
  if ((int)lVar11 == 0) {
    iVar16 = 0;
  }
  else {
    lVar11 = param_1 + 0x10;
    FUN_108252294(lVar11,4);
    lVar8 = param_1 + 0x10;
    FUN_108252294(lVar8,1);
    iVar16 = -(int)lVar11;
    if ((int)lVar8 == 0) {
      iVar16 = (int)lVar11;
    }
  }
  lVar11 = param_1 + 0x10;
  FUN_108252294(lVar11,1);
  if ((int)lVar11 == 0) {
    iVar10 = 0;
  }
  else {
    lVar11 = param_1 + 0x10;
    FUN_108252294(lVar11,4);
    lVar8 = param_1 + 0x10;
    FUN_108252294(lVar8,1);
    iVar10 = -(int)lVar11;
    if ((int)lVar8 == 0) {
      iVar10 = (int)lVar11;
    }
  }
  lVar11 = 0x90;
  iVar5 = *(int *)(param_1 + 0x84);
  puVar12 = (uint *)(param_1 + 0x424);
  do {
    uVar9 = (uint)lVar7;
    if (iVar5 == 0) {
      if (lVar11 == 0x90) goto LAB_108227c94;
      uVar17 = *(undefined8 *)(param_1 + 0x424);
      uVar19 = *(undefined8 *)(param_1 + 0x43c);
      uVar18 = *(undefined8 *)(param_1 + 0x434);
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_1 + 0x42c);
      *(undefined8 *)puVar12 = uVar17;
      *(undefined8 *)(puVar12 + 6) = uVar19;
      *(undefined8 *)(puVar12 + 4) = uVar18;
    }
    else {
      if (*(int *)(param_1 + 0x8c) != 0) {
        uVar9 = 0;
      }
      uVar9 = uVar9 + (int)*(char *)(param_1 + lVar11);
LAB_108227c94:
      uVar1 = uVar9 + iVar13 & ((int)(uVar9 + iVar13) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar1) {
        uVar1 = 0x7f;
      }
      uVar2 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar2) {
        uVar2 = 0x7f;
      }
      uVar6 = *(ushort *)(&UNK_10df0abc6 + (ulong)uVar2 * 2);
      *puVar12 = (uint)(byte)(&UNK_10df0ab46)[uVar1];
      puVar12[1] = (uint)uVar6;
      uVar1 = uVar9 + iVar14 & ((int)(uVar9 + iVar14) >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar1) {
        uVar1 = 0x7f;
      }
      uVar2 = uVar9 + iVar15;
      uVar3 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar3) {
        uVar3 = 0x7f;
      }
      uVar4 = 8;
      if (1 < (int)uVar2) {
        uVar4 = (uint)*(ushort *)(&UNK_10df0abc6 + (ulong)uVar3 * 2) * 0x18ccd >> 0x10;
      }
      puVar12[2] = (uint)(byte)(&UNK_10df0ab46)[uVar1] << 1;
      puVar12[3] = uVar4;
      uVar1 = uVar9 + iVar16 & ((int)(uVar9 + iVar16) >> 0x1f ^ 0xffffffffU);
      if (0x74 < (int)uVar1) {
        uVar1 = 0x75;
      }
      uVar9 = uVar9 + iVar10;
      uVar2 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      if (0x7e < (int)uVar2) {
        uVar2 = 0x7f;
      }
      uVar6 = *(ushort *)(&UNK_10df0abc6 + (ulong)uVar2 * 2);
      puVar12[4] = (uint)(byte)(&UNK_10df0ab46)[uVar1];
      puVar12[5] = (uint)uVar6;
      puVar12[6] = uVar9;
    }
    puVar12 = puVar12 + 8;
    lVar11 = lVar11 + 1;
    if (lVar11 == 0x94) {
      return;
    }
  } while( true );
}



/* Entry: 108227d64; end: 108228cff;  */

bool FUN_108227d64(ulong *param_1,long param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  long lStack_68;
  
  if (0 < *(int *)(param_2 + 0x198)) {
    lVar20 = 0;
    lStack_68 = 0;
    piVar1 = (int *)(param_2 + 0xb00);
    do {
      lVar10 = *(long *)(param_2 + 0xaf8);
      lVar17 = *(long *)(param_2 + 0xb60);
      uVar6 = 0;
      if (*(int *)(param_2 + 0x88) != 0) {
        bVar4 = *(byte *)(param_2 + 0x4a8);
        uVar13 = param_1[1];
        uVar3 = *(uint *)((long)param_1 + 0xc);
        uVar16 = (ulong)uVar3;
        if ((int)uVar3 < 0) {
          puVar11 = (ulong *)param_1[2];
          if (puVar11 < (ulong *)param_1[4]) {
            uVar16 = *puVar11;
            param_1[2] = (long)puVar11 + 7;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | *param_1 << 0x38;
            uVar16 = (ulong)(uVar3 + 0x38);
          }
          else {
            func_0x00010825222c(param_1);
            uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar3 = (int)uVar13 * (uint)bVar4 >> 8;
        uVar12 = *param_1;
        uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
        if (uVar3 < uVar8) {
          iVar14 = (int)uVar13 - uVar3;
          uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
          *param_1 = uVar12;
        }
        else {
          iVar14 = uVar3 + 1;
        }
        uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
        uVar5 = (int)uVar16 - uVar7;
        uVar16 = (ulong)uVar5;
        iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar14;
        *(uint *)((long)param_1 + 0xc) = uVar5;
        if (uVar3 < uVar8) {
          bVar4 = *(byte *)(param_2 + 0x4aa);
          if ((int)uVar5 < 0) {
            puVar11 = (ulong *)param_1[2];
            if (puVar11 < (ulong *)param_1[4]) {
              uVar16 = *puVar11;
              param_1[2] = (long)puVar11 + 7;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
              *param_1 = uVar12;
              uVar16 = (ulong)(uVar5 + 0x38);
            }
            else {
              func_0x00010825222c(param_1);
              uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar12 = *param_1;
            }
          }
          uVar3 = iVar14 * (uint)bVar4 >> 8;
          uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
          if (uVar3 < uVar8) {
            iVar14 = iVar14 - uVar3;
            *param_1 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
          }
          else {
            iVar14 = uVar3 + 1;
          }
          uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
          *(int *)(param_1 + 1) = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
          *(uint *)((long)param_1 + 0xc) = (int)uVar16 - uVar7;
          uVar6 = 2;
          if (uVar3 < uVar8) {
            uVar6 = 3;
          }
        }
        else {
          bVar4 = *(byte *)(param_2 + 0x4a9);
          if ((int)uVar5 < 0) {
            puVar11 = (ulong *)param_1[2];
            if (puVar11 < (ulong *)param_1[4]) {
              uVar16 = *puVar11;
              param_1[2] = (long)puVar11 + 7;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
              *param_1 = uVar12;
              uVar16 = (ulong)(uVar5 + 0x38);
            }
            else {
              func_0x00010825222c(param_1);
              uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar12 = *param_1;
            }
          }
          uVar3 = iVar14 * (uint)bVar4 >> 8;
          uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
          if (uVar3 < uVar8) {
            iVar14 = iVar14 - uVar3;
            *param_1 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
          }
          else {
            iVar14 = uVar3 + 1;
          }
          uVar6 = uVar3 < uVar8;
          uVar3 = (uint)LZCOUNT(iVar14) ^ 0x18;
          *(int *)(param_1 + 1) = (iVar14 << (ulong)(uVar3 & 0x1f)) + -1;
          *(uint *)((long)param_1 + 0xc) = (int)uVar16 - uVar3;
        }
      }
      lVar17 = lVar17 + lStack_68 * 800;
      *(undefined1 *)(lVar17 + 0x31e) = uVar6;
      if (*(int *)(param_2 + 0xaf0) == 0) {
        iVar14 = (int)param_1[1];
        uVar3 = *(uint *)((long)param_1 + 0xc);
      }
      else {
        bVar4 = *(byte *)(param_2 + 0xaf4);
        uVar13 = param_1[1];
        uVar3 = *(uint *)((long)param_1 + 0xc);
        uVar16 = (ulong)uVar3;
        if ((int)uVar3 < 0) {
          puVar11 = (ulong *)param_1[2];
          if (puVar11 < (ulong *)param_1[4]) {
            uVar16 = *puVar11;
            param_1[2] = (long)puVar11 + 7;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | *param_1 << 0x38;
            uVar16 = (ulong)(uVar3 + 0x38);
          }
          else {
            func_0x00010825222c(param_1);
            uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar8 = (int)uVar13 * (uint)bVar4 >> 8;
        uVar7 = (uint)(*param_1 >> (uVar16 & 0x3f));
        if (uVar8 < uVar7) {
          iVar14 = (int)uVar13 - uVar8;
          *param_1 = *param_1 - ((ulong)(uVar8 + 1) << (uVar16 & 0x3f));
        }
        else {
          iVar14 = uVar8 + 1;
        }
        uVar5 = (uint)LZCOUNT(iVar14) ^ 0x18;
        uVar3 = (int)uVar16 - uVar5;
        iVar14 = (iVar14 << (ulong)(uVar5 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar14;
        *(uint *)((long)param_1 + 0xc) = uVar3;
        *(bool *)(lVar17 + 0x31d) = uVar8 < uVar7;
      }
      uVar16 = (ulong)uVar3;
      if ((int)uVar3 < 0) {
        puVar11 = (ulong *)param_1[2];
        if (puVar11 < (ulong *)param_1[4]) {
          uVar16 = *puVar11;
          param_1[2] = (long)puVar11 + 7;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | *param_1 << 0x38;
          uVar16 = (ulong)(uVar3 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar3 = (uint)(iVar14 * 0x91) >> 8;
      uVar8 = (uint)(*param_1 >> (uVar16 & 0x3f));
      if (uVar3 < uVar8) {
        iVar14 = iVar14 - uVar3;
        *param_1 = *param_1 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
      }
      else {
        iVar14 = uVar3 + 1;
      }
      uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
      uVar5 = (int)uVar16 - uVar7;
      uVar16 = (ulong)uVar5;
      iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar14;
      *(uint *)((long)param_1 + 0xc) = uVar5;
      *(bool *)(lVar17 + 0x300) = uVar8 <= uVar3;
      if (uVar8 <= uVar3) {
        lVar21 = 0;
        puVar19 = (undefined4 *)(lVar17 + 0x301);
        do {
          lVar18 = 0;
          uVar16 = (ulong)*(byte *)((long)piVar1 + lVar21);
          do {
            pbVar2 = &UNK_10df0b517 + uVar16 * 9 + (ulong)*(byte *)(lVar10 + lVar20 + lVar18) * 0x5a
            ;
            bVar4 = *pbVar2;
            uVar13 = param_1[1];
            uVar3 = *(uint *)((long)param_1 + 0xc);
            uVar16 = (ulong)uVar3;
            if ((int)uVar3 < 0) {
              puVar11 = (ulong *)param_1[2];
              if (puVar11 < (ulong *)param_1[4]) {
                uVar16 = *puVar11;
                param_1[2] = (long)puVar11 + 7;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                *param_1 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | *param_1 << 0x38;
                uVar16 = (ulong)(uVar3 + 0x38);
              }
              else {
                func_0x00010825222c(param_1);
                uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
              }
            }
            uVar3 = (int)uVar13 * (uint)bVar4 >> 8;
            uVar12 = *param_1;
            uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
            if (uVar3 < uVar8) {
              iVar14 = (int)uVar13 - uVar3;
              uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
              *param_1 = uVar12;
            }
            else {
              iVar14 = uVar3 + 1;
            }
            uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
            uVar5 = (int)uVar16 - uVar7;
            uVar16 = (ulong)uVar5;
            iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
            *(int *)(param_1 + 1) = iVar14;
            *(uint *)((long)param_1 + 0xc) = uVar5;
            if (uVar3 < uVar8) {
              bVar4 = pbVar2[1];
              if ((int)uVar5 < 0) {
                puVar11 = (ulong *)param_1[2];
                if (puVar11 < (ulong *)param_1[4]) {
                  uVar16 = *puVar11;
                  param_1[2] = (long)puVar11 + 7;
                  uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10
                  ;
                  uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                  *param_1 = uVar12;
                  uVar16 = (ulong)(uVar5 + 0x38);
                }
                else {
                  func_0x00010825222c(param_1);
                  uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                  uVar12 = *param_1;
                }
              }
              uVar3 = iVar14 * (uint)bVar4 >> 8;
              uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
              if (uVar3 < uVar8) {
                iVar14 = iVar14 - uVar3;
                uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                *param_1 = uVar12;
              }
              else {
                iVar14 = uVar3 + 1;
              }
              uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
              uVar5 = (int)uVar16 - uVar7;
              uVar16 = (ulong)uVar5;
              iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
              *(int *)(param_1 + 1) = iVar14;
              *(uint *)((long)param_1 + 0xc) = uVar5;
              if (uVar3 < uVar8) {
                bVar4 = pbVar2[2];
                if ((int)uVar5 < 0) {
                  puVar11 = (ulong *)param_1[2];
                  if (puVar11 < (ulong *)param_1[4]) {
                    uVar16 = *puVar11;
                    param_1[2] = (long)puVar11 + 7;
                    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar16 & 0xffff0000ffff) << 0x10;
                    uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                    *param_1 = uVar12;
                    uVar16 = (ulong)(uVar5 + 0x38);
                  }
                  else {
                    func_0x00010825222c(param_1);
                    uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                    uVar12 = *param_1;
                  }
                }
                uVar3 = iVar14 * (uint)bVar4 >> 8;
                uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
                if (uVar3 < uVar8) {
                  iVar14 = iVar14 - uVar3;
                  uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                  *param_1 = uVar12;
                }
                else {
                  iVar14 = uVar3 + 1;
                }
                uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
                uVar5 = (int)uVar16 - uVar7;
                uVar16 = (ulong)uVar5;
                iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
                *(int *)(param_1 + 1) = iVar14;
                *(uint *)((long)param_1 + 0xc) = uVar5;
                if (uVar3 < uVar8) {
                  bVar4 = pbVar2[3];
                  if ((int)uVar5 < 0) {
                    puVar11 = (ulong *)param_1[2];
                    if (puVar11 < (ulong *)param_1[4]) {
                      uVar16 = *puVar11;
                      param_1[2] = (long)puVar11 + 7;
                      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar16 & 0xffff0000ffff) << 0x10;
                      uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                      *param_1 = uVar12;
                      uVar16 = (ulong)(uVar5 + 0x38);
                    }
                    else {
                      func_0x00010825222c(param_1);
                      uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                      uVar12 = *param_1;
                    }
                  }
                  uVar3 = iVar14 * (uint)bVar4 >> 8;
                  uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
                  if (uVar3 < uVar8) {
                    iVar14 = iVar14 - uVar3;
                    uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                    *param_1 = uVar12;
                  }
                  else {
                    iVar14 = uVar3 + 1;
                  }
                  uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
                  uVar5 = (int)uVar16 - uVar7;
                  uVar16 = (ulong)uVar5;
                  iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
                  *(int *)(param_1 + 1) = iVar14;
                  *(uint *)((long)param_1 + 0xc) = uVar5;
                  if (uVar3 < uVar8) {
                    bVar4 = pbVar2[6];
                    if ((int)uVar5 < 0) {
                      puVar11 = (ulong *)param_1[2];
                      if (puVar11 < (ulong *)param_1[4]) {
                        uVar16 = *puVar11;
                        param_1[2] = (long)puVar11 + 7;
                        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar16 & 0xff00ff00ff00ff) << 8;
                        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar16 & 0xffff0000ffff) << 0x10;
                        uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                        *param_1 = uVar12;
                        uVar16 = (ulong)(uVar5 + 0x38);
                      }
                      else {
                        func_0x00010825222c(param_1);
                        uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                        uVar12 = *param_1;
                      }
                    }
                    uVar3 = iVar14 * (uint)bVar4 >> 8;
                    uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
                    if (uVar3 < uVar8) {
                      iVar14 = iVar14 - uVar3;
                      uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                      *param_1 = uVar12;
                    }
                    else {
                      iVar14 = uVar3 + 1;
                    }
                    uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
                    uVar5 = (int)uVar16 - uVar7;
                    uVar16 = (ulong)uVar5;
                    iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
                    *(int *)(param_1 + 1) = iVar14;
                    *(uint *)((long)param_1 + 0xc) = uVar5;
                    if (uVar3 < uVar8) {
                      bVar4 = pbVar2[7];
                      if ((int)uVar5 < 0) {
                        puVar11 = (ulong *)param_1[2];
                        if (puVar11 < (ulong *)param_1[4]) {
                          uVar16 = *puVar11;
                          param_1[2] = (long)puVar11 + 7;
                          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar16 & 0xff00ff00ff00ff) << 8;
                          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar16 & 0xffff0000ffff) << 0x10;
                          uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                          *param_1 = uVar12;
                          uVar16 = (ulong)(uVar5 + 0x38);
                        }
                        else {
                          func_0x00010825222c(param_1);
                          uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                          uVar12 = *param_1;
                        }
                      }
                      uVar3 = iVar14 * (uint)bVar4 >> 8;
                      uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
                      if (uVar3 < uVar8) {
                        iVar14 = iVar14 - uVar3;
                        uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                        *param_1 = uVar12;
                      }
                      else {
                        iVar14 = uVar3 + 1;
                      }
                      uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
                      uVar5 = (int)uVar16 - uVar7;
                      uVar16 = (ulong)uVar5;
                      iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
                      *(int *)(param_1 + 1) = iVar14;
                      *(uint *)((long)param_1 + 0xc) = uVar5;
                      if (uVar3 < uVar8) {
                        bVar4 = pbVar2[8];
                        if ((int)uVar5 < 0) {
                          puVar11 = (ulong *)param_1[2];
                          if (puVar11 < (ulong *)param_1[4]) {
                            uVar16 = *puVar11;
                            param_1[2] = (long)puVar11 + 7;
                            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar16 & 0xff00ff00ff00ff) << 8;
                            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar16 & 0xffff0000ffff) << 0x10;
                            uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                            *param_1 = uVar12;
                            uVar16 = (ulong)(uVar5 + 0x38);
                          }
                          else {
                            func_0x00010825222c(param_1);
                            uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                            uVar12 = *param_1;
                          }
                        }
                        iVar15 = (int)uVar16;
                        uVar3 = iVar14 * (uint)bVar4 >> 8;
                        if (uVar3 < (uint)(uVar12 >> (uVar16 & 0x3f))) {
                          iVar14 = iVar14 - uVar3;
                          *param_1 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                          uVar16 = 9;
                        }
                        else {
                          iVar14 = uVar3 + 1;
                          uVar16 = 8;
                        }
                        goto LAB_1082286a8;
                      }
                      uVar16 = 7;
                    }
                    else {
                      uVar16 = 6;
                    }
                  }
                  else {
                    bVar4 = pbVar2[4];
                    if ((int)uVar5 < 0) {
                      puVar11 = (ulong *)param_1[2];
                      if (puVar11 < (ulong *)param_1[4]) {
                        uVar16 = *puVar11;
                        param_1[2] = (long)puVar11 + 7;
                        uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar16 & 0xff00ff00ff00ff) << 8;
                        uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar16 & 0xffff0000ffff) << 0x10;
                        uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                        *param_1 = uVar12;
                        uVar16 = (ulong)(uVar5 + 0x38);
                      }
                      else {
                        func_0x00010825222c(param_1);
                        uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                        uVar12 = *param_1;
                      }
                    }
                    uVar3 = iVar14 * (uint)bVar4 >> 8;
                    uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
                    if (uVar3 < uVar8) {
                      iVar14 = iVar14 - uVar3;
                      uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                      *param_1 = uVar12;
                    }
                    else {
                      iVar14 = uVar3 + 1;
                    }
                    uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
                    uVar5 = (int)uVar16 - uVar7;
                    uVar16 = (ulong)uVar5;
                    iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
                    *(int *)(param_1 + 1) = iVar14;
                    *(uint *)((long)param_1 + 0xc) = uVar5;
                    if (uVar3 < uVar8) {
                      bVar4 = pbVar2[5];
                      if ((int)uVar5 < 0) {
                        puVar11 = (ulong *)param_1[2];
                        if (puVar11 < (ulong *)param_1[4]) {
                          uVar16 = *puVar11;
                          param_1[2] = (long)puVar11 + 7;
                          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar16 & 0xff00ff00ff00ff) << 8;
                          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar16 & 0xffff0000ffff) << 0x10;
                          uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
                          *param_1 = uVar12;
                          uVar16 = (ulong)(uVar5 + 0x38);
                        }
                        else {
                          func_0x00010825222c(param_1);
                          uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
                          uVar12 = *param_1;
                        }
                      }
                      iVar15 = (int)uVar16;
                      uVar3 = iVar14 * (uint)bVar4 >> 8;
                      if (uVar3 < (uint)(uVar12 >> (uVar16 & 0x3f))) {
                        iVar14 = iVar14 - uVar3;
                        *param_1 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
                        uVar16 = 5;
                      }
                      else {
                        iVar14 = uVar3 + 1;
                        uVar16 = 4;
                      }
LAB_1082286a8:
                      uVar3 = (uint)LZCOUNT(iVar14) ^ 0x18;
                      *(int *)(param_1 + 1) = (iVar14 << (ulong)(uVar3 & 0x1f)) + -1;
                      *(uint *)((long)param_1 + 0xc) = iVar15 - uVar3;
                    }
                    else {
                      uVar16 = 3;
                    }
                  }
                }
                else {
                  uVar16 = 2;
                }
              }
              else {
                uVar16 = 1;
              }
            }
            else {
              uVar16 = 0;
            }
            *(char *)(lVar10 + lVar20 + lVar18) = (char)uVar16;
            lVar18 = lVar18 + 1;
          } while (lVar18 != 4);
          *puVar19 = *(undefined4 *)(lVar10 + lStack_68 * 4);
          *(char *)((long)piVar1 + lVar21) = (char)uVar16;
          lVar21 = lVar21 + 1;
          puVar19 = puVar19 + 1;
        } while (lVar21 != 4);
      }
      else {
        if ((int)uVar5 < 0) {
          puVar11 = (ulong *)param_1[2];
          if (puVar11 < (ulong *)param_1[4]) {
            uVar16 = *puVar11;
            param_1[2] = (long)puVar11 + 7;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            *param_1 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | *param_1 << 0x38;
            uVar16 = (ulong)(uVar5 + 0x38);
          }
          else {
            func_0x00010825222c(param_1);
            uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
          }
        }
        uVar3 = (uint)(iVar14 * 0x9c) >> 8;
        uVar13 = *param_1;
        uVar8 = (uint)(uVar13 >> (uVar16 & 0x3f));
        if (uVar3 < uVar8) {
          iVar14 = iVar14 - uVar3;
          uVar13 = uVar13 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
          *param_1 = uVar13;
        }
        else {
          iVar14 = uVar3 + 1;
        }
        uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
        uVar5 = (int)uVar16 - uVar7;
        uVar16 = (ulong)uVar5;
        uVar7 = (iVar14 << (ulong)(uVar7 & 0x1f)) - 1;
        *(uint *)(param_1 + 1) = uVar7;
        *(uint *)((long)param_1 + 0xc) = uVar5;
        if (uVar3 < uVar8) {
          if ((int)uVar5 < 0) {
            puVar11 = (ulong *)param_1[2];
            if (puVar11 < (ulong *)param_1[4]) {
              uVar16 = *puVar11;
              param_1[2] = (long)puVar11 + 7;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar13 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar13 << 0x38;
              *param_1 = uVar13;
              uVar16 = (ulong)(uVar5 + 0x38);
            }
            else {
              func_0x00010825222c(param_1);
              uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar13 = *param_1;
            }
          }
          iVar14 = (int)uVar16;
          uVar3 = uVar7 >> 1 & 0xffffff;
          if (uVar3 < (uint)(uVar13 >> (uVar16 & 0x3f))) {
            iVar15 = uVar7 - uVar3;
            *param_1 = uVar13 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
            iVar9 = 1;
          }
          else {
            iVar15 = uVar3 + 1;
            iVar9 = 3;
          }
        }
        else {
          if ((int)uVar5 < 0) {
            puVar11 = (ulong *)param_1[2];
            if (puVar11 < (ulong *)param_1[4]) {
              uVar16 = *puVar11;
              param_1[2] = (long)puVar11 + 7;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar13 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar13 << 0x38;
              *param_1 = uVar13;
              uVar16 = (ulong)(uVar5 + 0x38);
            }
            else {
              func_0x00010825222c(param_1);
              uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar13 = *param_1;
            }
          }
          iVar14 = (int)uVar16;
          uVar3 = uVar7 * 0xa3 >> 8;
          if (uVar3 < (uint)(uVar13 >> (uVar16 & 0x3f))) {
            iVar15 = uVar7 - uVar3;
            *param_1 = uVar13 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
            iVar9 = 2;
          }
          else {
            iVar9 = 0;
            iVar15 = uVar3 + 1;
          }
        }
        uVar3 = (uint)LZCOUNT(iVar15) ^ 0x18;
        *(int *)(param_1 + 1) = (iVar15 << (ulong)(uVar3 & 0x1f)) + -1;
        *(uint *)((long)param_1 + 0xc) = iVar14 - uVar3;
        *(char *)(lVar17 + 0x301) = (char)iVar9;
        *(int *)(lVar10 + lStack_68 * 4) = iVar9 * 0x1010101;
        *piVar1 = iVar9 * 0x1010101;
      }
      uVar13 = param_1[1];
      uVar3 = *(uint *)((long)param_1 + 0xc);
      uVar16 = (ulong)uVar3;
      if ((int)uVar3 < 0) {
        puVar11 = (ulong *)param_1[2];
        if (puVar11 < (ulong *)param_1[4]) {
          uVar16 = *puVar11;
          param_1[2] = (long)puVar11 + 7;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          *param_1 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | *param_1 << 0x38;
          uVar16 = (ulong)(uVar3 + 0x38);
        }
        else {
          func_0x00010825222c(param_1);
          uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
        }
      }
      uVar3 = (uint)((int)uVar13 * 0x8e) >> 8;
      uVar12 = *param_1;
      uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
      if (uVar3 < uVar8) {
        iVar14 = (int)uVar13 - uVar3;
        uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
        *param_1 = uVar12;
      }
      else {
        iVar14 = uVar3 + 1;
      }
      uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
      uVar5 = (int)uVar16 - uVar7;
      uVar16 = (ulong)uVar5;
      iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
      *(int *)(param_1 + 1) = iVar14;
      *(uint *)((long)param_1 + 0xc) = uVar5;
      if (uVar3 < uVar8) {
        if ((int)uVar5 < 0) {
          puVar11 = (ulong *)param_1[2];
          if (puVar11 < (ulong *)param_1[4]) {
            uVar16 = *puVar11;
            param_1[2] = (long)puVar11 + 7;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
            *param_1 = uVar12;
            uVar16 = (ulong)(uVar5 + 0x38);
          }
          else {
            func_0x00010825222c(param_1);
            uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
            uVar12 = *param_1;
          }
        }
        uVar3 = (uint)(iVar14 * 0x72) >> 8;
        uVar8 = (uint)(uVar12 >> (uVar16 & 0x3f));
        if (uVar3 < uVar8) {
          iVar14 = iVar14 - uVar3;
          uVar12 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
          *param_1 = uVar12;
        }
        else {
          iVar14 = uVar3 + 1;
        }
        uVar7 = (uint)LZCOUNT(iVar14) ^ 0x18;
        uVar5 = (int)uVar16 - uVar7;
        uVar16 = (ulong)uVar5;
        iVar14 = (iVar14 << (ulong)(uVar7 & 0x1f)) + -1;
        *(int *)(param_1 + 1) = iVar14;
        *(uint *)((long)param_1 + 0xc) = uVar5;
        if (uVar3 < uVar8) {
          if ((int)uVar5 < 0) {
            puVar11 = (ulong *)param_1[2];
            if (puVar11 < (ulong *)param_1[4]) {
              uVar16 = *puVar11;
              param_1[2] = (long)puVar11 + 7;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar12 = (uVar16 >> 0x20 | uVar16 << 0x20) >> 8 | uVar12 << 0x38;
              *param_1 = uVar12;
              uVar16 = (ulong)(uVar5 + 0x38);
            }
            else {
              func_0x00010825222c(param_1);
              uVar16 = (ulong)*(uint *)((long)param_1 + 0xc);
              uVar12 = *param_1;
            }
          }
          uVar3 = (uint)(iVar14 * 0xb7) >> 8;
          if (uVar3 < (uint)(uVar12 >> (uVar16 & 0x3f))) {
            iVar14 = iVar14 - uVar3;
            *param_1 = uVar12 - ((ulong)(uVar3 + 1) << (uVar16 & 0x3f));
            uVar6 = 1;
          }
          else {
            iVar14 = uVar3 + 1;
            uVar6 = 3;
          }
          uVar3 = (uint)LZCOUNT(iVar14) ^ 0x18;
          *(int *)(param_1 + 1) = (iVar14 << (ulong)(uVar3 & 0x1f)) + -1;
          *(uint *)((long)param_1 + 0xc) = (int)uVar16 - uVar3;
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 0;
      }
      *(undefined1 *)(lVar17 + 0x311) = uVar6;
      lStack_68 = lStack_68 + 1;
      lVar20 = lVar20 + 4;
    } while (lStack_68 < *(int *)(param_2 + 0x198));
  }
  return *(int *)(param_2 + 0x38) == 0;
}


