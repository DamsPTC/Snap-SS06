/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082fdcb4; end: 1082fdcbf;  */

undefined * FUN_1082fdcb4(void)

{
  return &UNK_10f489cbc;
}



/* Entry: 1082fdcc0; end: 1082fdd63;  */

void FUN_1082fdcc0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  FUN_10828b1a4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001082fdd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,uVar1,"unknown",7);
  return;
}



/* Entry: 1082fdd64; end: 1082fdd6f;  */

long FUN_1082fdd64(long param_1)

{
  return param_1 + 0xb0;
}



/* Entry: 1082fdd70; end: 1082fdd83;  */

void FUN_1082fdd70(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082fdd84; end: 1082fdd8f;  */

void FUN_1082fdd84(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_4 + 0xa8);
  if (*(char *)(param_1 + 0x3d) == '\x01') {
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x30),7,lVar1 + 0x14);
  }
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined4 *)(param_1 + 0x34),lVar1 + 0x4c);
  }
  if (*(char *)(param_1 + 0x3f) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010828bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(param_1 + 0x38),7,lVar1 + 0x30);
    return;
  }
  return;
}



/* Entry: 1082fdd90; end: 1082fdf23;  */

void FUN_1082fdd90(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  
  lVar1 = param_2[5];
  FUN_10828ba0c(param_1 + 0x30,param_2[3],*(undefined8 *)(lVar1 + 0xa8),2);
  FUN_1082dd9a4(param_2[2],lVar1);
  FUN_10829de0c(*param_2,param_3,*(undefined8 *)(lVar1 + 0x48));
  func_0x0001082fe088();
  FUN_10827535c(param_3 + 0x28,auStack_58);
  func_0x0001082fe008();
  func_0x0001082fdfcc();
  func_0x0001082fe078();
  uVar2 = param_2[2];
  func_0x0001082fe088();
  FUN_1082dd7c8(uVar2,auStack_58,&UNK_10f489ca0,0);
  func_0x0001082fe008();
  func_0x0001082fdfcc();
  func_0x0001082fe078();
  func_0x00010828e8b0(auStack_58,lVar1 + 0x78);
  func_0x0001082fe010();
  func_0x0001082fe008();
  func_0x0001082fdfcc();
  func_0x0001082fe070();
  func_0x00010828e8b0(auStack_58,lVar1 + 0x90);
  func_0x0001082fe010();
  func_0x0001082fe008();
  func_0x0001082fdfcc();
  uVar2 = param_2[6];
  func_0x0001082fe070();
  func_0x0001082fdfcc();
  FUN_1082dca24(extraout_x8 + extraout_x9,param_2[6],0xd,*(undefined4 *)param_2[8],&UNK_10f489cf2,
                param_1 + 0x30,in_x6,in_x7,uVar2);
  func_0x0001082fdfcc();
  func_0x0001082fe078();
  func_0x0001082fdfcc();
  func_0x0001082fe070();
  return;
}



/* Entry: 1082fdf24; end: 1082fdf33;  */

float FUN_1082fdf24(float param_1,float param_2)

{
  return param_1 + param_2;
}



/* Entry: 1082fdf34; end: 1082fdf67;  */

void FUN_1082fdf34(code *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010838eb58(param_3);
  UNRECOVERED_JUMPTABLE = param_1;
  FUN_108364628();
                    /* WARNING: Could not recover jumptable at 0x000108364624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,4);
  return;
}



/* Entry: 1082fdf68; end: 1082fe0eb;  */

void FUN_1082fdf68(long *param_1,undefined4 *param_2)

{
  long lVar1;
  
  *(undefined4 *)*param_1 = *param_2;
  lVar1 = *param_1;
  *param_1 = lVar1 + 4;
  if (*(char *)(param_2 + 4) == '\x01') {
    *(undefined4 *)(lVar1 + 4) = param_2[1];
    lVar1 = *param_1;
    *param_1 = lVar1 + 4;
    *(undefined4 *)(lVar1 + 4) = param_2[2];
    lVar1 = *param_1;
    *param_1 = lVar1 + 4;
    *(undefined4 *)(lVar1 + 4) = param_2[3];
    *param_1 = *param_1 + 4;
  }
  return;
}



/* Entry: 1082fe0ec; end: 1082fe17f;  */

long * FUN_1082fe0ec(long *param_1,long *param_2,uint param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[3] = 0;
  *(uint *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0x3210;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = param_4;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((param_3 >> 2 & 1) != 0) {
    FUN_1082a35a0(param_1 + 3,param_5);
    lVar1 = *param_1;
  }
  lVar2 = *(long *)(lVar1 + 0x20);
  param_1[9] = *(long *)(lVar1 + 0x28);
  param_1[8] = lVar2;
  return param_1;
}



/* Entry: 1082fe180; end: 1082fe18f;  */

void FUN_1082fe180(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  FUN_1082960a8(*(long *)(param_1 + 0x40),&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar2 != (undefined ***)0x0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
      func_0x0001082987ac(pppuVar1);
    }
    plVar4 = *(long **)(unaff_x20 + 0x18);
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      if (*plVar4 != 0) {
        FUN_1082960a8(*plVar4,pppuVar1);
      }
      plVar4 = plVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082fe190; end: 1082fe1db;  */

void FUN_1082fe190(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  while (*param_1 != 0) {
    FUN_1082fe1dc(&lStack_28,param_1);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x00010830057c();
    }
  }
  return;
}



/* Entry: 1082fe1dc; end: 1082fe283;  */

void FUN_1082fe1dc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = *(long *)(lVar2 + 8);
  if (lVar1 == 0) {
    param_2[1] = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 8) = 0;
    lVar2 = *param_2;
  }
  *param_1 = lVar2;
  *param_2 = lVar1;
  return;
}



/* Entry: 1082fe284; end: 1082fe7f3;  */

void FUN_1082fe284(long *param_1,long *param_2,uint param_3,long param_4,long param_5,float *param_6
                  ,undefined8 param_7,undefined8 param_8,long param_9)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  if (*(short *)(*param_1 + 0x18) != *(short *)(*param_2 + 0x18)) {
    return;
  }
  lVar9 = param_1[7];
  if ((param_5 != 0) != (lVar9 != 0)) {
    return;
  }
  if (lVar9 == 0) goto LAB_1082fe3d4;
  lVar5 = lVar9;
  FUN_1082ef034(lVar9,param_5);
  if ((int)lVar5 == 0) {
    return;
  }
  if (*(char *)(lVar9 + 0x18) != *(char *)(param_5 + 0x18)) {
    return;
  }
  iVar3 = *(int *)(lVar9 + 0x20);
  if (iVar3 != *(int *)(param_5 + 0x20)) {
    return;
  }
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      lVar5 = lVar9 + 0x28;
      lVar7 = *(long *)(param_5 + 0x28);
      goto LAB_1082fe37c;
    }
  }
  else {
    lVar7 = *(long *)(param_5 + 0x28);
    if (*(long *)(lVar9 + 0x28) != lVar7) {
      lVar5 = *(long *)(lVar9 + 0x28) + 4;
LAB_1082fe37c:
      lVar6 = param_5 + 0x28;
      if (1 < iVar3) {
        lVar6 = lVar7 + 4;
      }
      _memcmp(lVar5,lVar6,(long)iVar3 << 4);
      if ((int)lVar5 != 0) {
        return;
      }
    }
  }
  if (*(int *)(lVar9 + 0x38) != *(int *)(param_5 + 0x38)) {
    return;
  }
  lVar9 = *(long *)(lVar9 + 0x40);
  if ((lVar9 != 0) == (*(long *)(param_5 + 0x40) == 0)) {
    return;
  }
  if ((lVar9 != 0) && (FUN_108295f54(), (int)lVar9 == 0)) {
    return;
  }
LAB_1082fe3d4:
  uVar2 = *(ushort *)(param_1 + 2);
  if (((((param_3 & 0xffff ^ (uint)uVar2) >> 3 & 1) == 0) &&
      (((((uVar2 >> 3 & 1) == 0 || (*(float *)(param_1 + 9) < *param_6)) ||
        (*(float *)((long)param_1 + 0x4c) < param_6[1])) ||
       ((param_6[2] < *(float *)(param_1 + 8) || (param_6[3] < *(float *)((long)param_1 + 0x44))))))
      ) && (((param_3 & 0xffff ^ (uint)uVar2) >> 2 & 1) == 0)) {
    if ((uVar2 >> 2 & 1) != 0) {
      plVar4 = param_1 + 3;
      func_0x0001082b2788(plVar4,param_4);
      if ((int)plVar4 == 0) {
        return;
      }
      if ((int)param_1[5] != *(int *)(param_4 + 0x10) ||
          *(int *)((long)param_1 + 0x2c) != *(int *)(param_4 + 0x14)) {
        return;
      }
      if ((int)param_1[6] != *(int *)(param_4 + 0x18)) {
        return;
      }
    }
    lVar9 = *param_2;
    do {
      lVar5 = param_1[1];
      func_0x00010830068c(lVar5,lVar9);
      iVar3 = (int)lVar5;
      if (iVar3 == 0) {
        if (*(char *)(param_9 + 0x54) == '\x01') {
          FUN_10828248c(param_9,param_1[1],*param_2);
        }
        func_0x0001082fe1dc(&lStack_d8,param_2);
        lVar9 = lStack_d8;
        lStack_d8 = 0;
joined_r0x0001082fe738:
        if (lVar9 != 0) {
          func_0x00010830057c();
        }
      }
      else {
        if (iVar3 == 1) {
          FUN_1082fff38(&lStack_b0,param_1);
          lStack_d0 = 0;
          uStack_c8 = 0;
          FUN_1082fff38(&lStack_c0,param_2);
          FUN_1082fe7f4(param_2,&lStack_d0);
          uStack_78 = 0xff7fffffff7fffff;
          uStack_80 = 0x7f7fffff7f7fffff;
          lVar9 = lStack_a8;
          do {
            if (lVar9 == lStack_a8) {
              uVar8 = 1;
            }
            else {
              uVar8 = lStack_c0 + 0x20;
              func_0x0001082fe208(uVar8,&uStack_80);
            }
            iVar3 = 9;
            uStack_88 = uStack_78;
            uStack_90 = uStack_80;
            for (lVar5 = lVar9; lVar7 = lVar9, lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
              if (lVar5 == lStack_a8) {
LAB_1082fe52c:
                lVar6 = lVar5;
                func_0x00010830068c(lVar5,lStack_c0);
                if ((int)lVar6 == 0) {
                  if (*(char *)(param_9 + 0x54) == '\x01') {
                    FUN_10828248c(param_9,lVar5,lStack_c0);
                  }
                  if ((uVar8 & 1) != 0) {
                    lVar9 = *(long *)(lStack_c0 + 8);
                    if (lVar9 == 0) {
                      lStack_b8 = 0;
                    }
                    else {
                      *(undefined8 *)(lVar9 + 0x10) = 0;
                      *(undefined8 *)(lStack_c0 + 8) = 0;
                    }
                    lStack_c0 = lVar9;
                    func_0x00010830057c();
                    goto LAB_1082fe5c8;
                  }
                  lVar6 = *(long *)(lVar5 + 0x10);
                  lVar7 = lVar6;
                  if (lVar5 != lVar9) {
                    lVar7 = lVar9;
                  }
                  if (lVar6 == 0) {
                    lVar5 = *(long *)(lStack_b0 + 8);
                    lVar9 = lStack_b0;
                    if (lVar5 == 0) {
                      lStack_a8 = 0;
                      lStack_b0 = lVar5;
                      lVar6 = lStack_a8;
                    }
                    else {
                      *(undefined8 *)(lVar5 + 0x10) = 0;
                      *(undefined8 *)(lStack_b0 + 8) = 0;
                      lStack_b0 = lVar5;
                      lVar6 = lStack_a8;
                    }
                  }
                  else {
                    lVar9 = *(long *)(lVar6 + 8);
                    if (lVar9 != 0) {
                      *(undefined8 *)(lVar9 + 0x10) = 0;
                      *(undefined8 *)(lVar6 + 8) = 0;
                    }
                    if (*(long *)(lVar9 + 8) != 0) {
                      *(undefined8 *)(*(long *)(lVar9 + 8) + 0x10) = 0;
                      *(undefined8 *)(lVar9 + 8) = 0;
                      func_0x00010830066c();
                      lVar5 = lStack_68;
                      lStack_68 = 0;
                      lVar6 = lStack_a8;
                      if (lVar5 != 0) {
                        func_0x00010830057c();
                        lVar6 = lStack_a8;
                      }
                    }
                  }
                  lStack_a8 = lVar6;
                  lVar5 = *(long *)(lStack_c0 + 8);
                  if (lVar5 == 0) {
                    lStack_b8 = 0;
                  }
                  else {
                    *(undefined8 *)(lVar5 + 0x10) = 0;
                    *(undefined8 *)(lStack_c0 + 8) = 0;
                  }
                  lStack_c0 = lVar5;
                  func_0x00010830057c();
                  lVar5 = lStack_c0;
                  bVar1 = lStack_c0 != 0;
                  lStack_c0 = lVar9;
                  lVar6 = lVar9;
                  if (bVar1) {
                    lStack_c0 = 0;
                    lStack_68 = lVar5;
                    FUN_1082fc28c(lVar9,&lStack_68);
                    lVar5 = lStack_68;
                    lStack_68 = 0;
                    if (lVar5 != 0) {
                      func_0x00010830057c();
                    }
                    bVar1 = lStack_c0 != 0;
                    lStack_c0 = lVar9;
                    lVar6 = lStack_b8;
                    if (bVar1) {
                      func_0x00010830057c();
                      lVar6 = lStack_b8;
                    }
                  }
                  lStack_b8 = lVar6;
                  if (lStack_b0 != 0) goto LAB_1082fe5c8;
                  plVar4 = &lStack_c0;
                  goto LAB_1082fe754;
                }
              }
              else {
                lVar6 = lVar5 + 0x20;
                func_0x0001082fe208(lVar6,&uStack_90);
                if ((((uint)lVar6 | (uint)uVar8) & 1) != 0) goto LAB_1082fe52c;
              }
              if (iVar3 == 0) break;
              func_0x0001082fe254(&uStack_90,lVar5 + 0x20);
              if ((uVar8 & 1) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = lStack_c0 + 0x20;
                func_0x0001082fe208(uVar8,lVar5 + 0x20);
              }
              iVar3 = iVar3 + -1;
            }
            lVar9 = *(long *)(lStack_c0 + 8);
            if (lVar9 == 0) {
              lStack_b8 = 0;
            }
            else {
              *(undefined8 *)(lVar9 + 0x10) = 0;
              *(undefined8 *)(lStack_c0 + 8) = 0;
            }
            lStack_c0 = lVar9;
            func_0x00010830066c(lStack_a8);
            lVar9 = lStack_68;
            lStack_68 = 0;
            if (lVar9 != 0) {
              func_0x00010830057c();
            }
            lStack_a8 = *(long *)(lStack_a8 + 8);
            func_0x0001082fe254(&uStack_80,lStack_a8 + 0x20);
LAB_1082fe5c8:
            lVar9 = lVar7;
          } while (lStack_c0 != 0);
          plVar4 = &lStack_b0;
LAB_1082fe754:
          FUN_1082fff38(alStack_a0,plVar4);
          FUN_1082fe7f4(param_1,alStack_a0);
          lVar9 = alStack_a0[0];
          alStack_a0[0] = 0;
          if (lVar9 != 0) {
            func_0x00010830057c();
          }
          lVar9 = lStack_c0;
          lStack_c0 = 0;
          if (lVar9 != 0) {
            func_0x00010830057c();
          }
          lVar9 = lStack_d0;
          lStack_d0 = 0;
          if (lVar9 != 0) {
            func_0x00010830057c();
          }
          lVar9 = lStack_b0;
          lStack_b0 = 0;
          goto joined_r0x0001082fe738;
        }
        if (iVar3 == 2) {
          return;
        }
      }
      lVar9 = *param_2;
    } while (lVar9 != 0);
    FUN_1082fc2f8(param_1 + 8,param_6);
  }
  return;
}



/* Entry: 1082fe7f4; end: 1082fe81f;  */

void FUN_1082fe7f4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108300628();
  func_0x0001082fc2b8();
  *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 1082fe820; end: 1082fe8db;  */

long FUN_1082fe820(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  FUN_1082fe284(param_2,param_1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,
                *(undefined8 *)(param_1 + 0x38),param_1 + 0x40,param_3,param_4,param_5);
  if ((int)lVar1 != 0) {
    FUN_1082fe7f4(param_1,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    uStack_40 = 0;
    uStack_38 = 0x321000000000;
    FUN_1082c3700(param_2 + 0x18,&uStack_40);
    func_0x000108300634();
    lVar2 = *(long *)(param_2 + 0x38);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x40) != 0)) {
      *(undefined8 *)(lVar2 + 0x40) = 0;
      func_0x00010830057c();
    }
  }
  return lVar1;
}



/* Entry: 1082fe8dc; end: 1082fea1b;  */

undefined8 *
FUN_1082fe8dc(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lStack_48;
  
  puVar1 = param_1;
  FUN_1082a8654();
  *puVar1 = &PTR_FUN_110a3aa88;
  puVar1[0x11] = param_4;
  plVar2 = (long *)*param_3;
  (**(code **)(*plVar2 + 0x28))();
  *(bool *)(param_1 + 0x12) = '\x01' < (char)plVar2[1];
  *(undefined2 *)((long)param_1 + 0x92) = *(undefined2 *)((long)param_3 + 0xc);
  *(int *)((long)param_1 + 0x94) = (int)param_3[1];
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x114] = param_1 + 0x1a;
  param_1[0x115] = 0x3200000000;
  uVar3 = *param_5;
  *param_5 = 0;
  param_1[0x116] = uVar3;
  param_1[0x117] = 0;
  param_1[0x118] = 0x100000000;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  lStack_48 = *param_3;
  *param_3 = 0;
  FUN_1082a8d24(param_1,param_2,&lStack_48);
  func_0x0001083006b8();
  return param_1;
}



/* Entry: 1082fea1c; end: 1082fea6b;  */

void FUN_1082fea1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x8a0);
  for (lVar2 = (long)*(int *)(param_1 + 0x8a8) * 0x50; lVar2 != 0; lVar2 = lVar2 + -0x50) {
    FUN_1082fe190(lVar1);
    lVar1 = lVar1 + 0x50;
  }
  FUN_1082fff90();
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  return;
}



/* Entry: 1082fea6c; end: 1082fea8b;  */

void FUN_1082fea6c(long param_1)

{
  FUN_1082fff90();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1082fea8c; end: 1082fead7;  */

undefined8 * FUN_1082fea8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3aa88;
  FUN_1082fea1c();
  FUN_1082f6590(param_1 + 0x117);
  FUN_108294260(param_1 + 0x116);
  FUN_1082fff5c(param_1 + 0x114);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082fead8; end: 1082feadb;  */

undefined8 * FUN_1082fead8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3aa88;
  FUN_1082fea1c();
  FUN_1082f6590(param_1 + 0x117);
  FUN_108294260(param_1 + 0x116);
  FUN_1082fff5c(param_1 + 0x114);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082feadc; end: 1082feaef;  */

void FUN_1082feadc(void)

{
  FUN_1082fea8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082feaf0; end: 1082febdf;  */

void FUN_1082feaf0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  undefined8 extraout_x8;
  long lVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  plVar10 = &lStack_70;
  puVar7 = param_1;
  plVar18 = param_3;
  func_0x0001083005f4();
  plVar18 = (long *)*plVar18;
  uStack_68 = param_2;
  uStack_60 = param_4;
  uStack_38 = extraout_x8;
  func_0x00010830063c();
  *puVar7 = &PTR_FUN_110a3ab20;
  puVar7[1] = param_1;
  puVar7[2] = &uStack_68;
  puVar7[3] = &uStack_60;
  puVar7[4] = param_5;
  puStack_40 = puVar7;
  (**(code **)(*plVar18 + 0x18))(plVar18,auStack_58);
  FUN_1082ecca8(auStack_58);
  lStack_70 = *param_3;
  *param_3 = 0;
  bVar12 = 0;
  uVar13 = 0x22;
  lVar14 = 0;
  plVar18 = (long *)0x0;
  FUN_1082febe0(param_1);
  if (lStack_70 != 0) {
    func_0x00010830057c();
  }
  func_0x000108300588(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = lStack_70;
  if (lStack_70 != 0) {
    func_0x00010830057c();
  }
  func_0x0001083005d4();
  func_0x0001083006d4();
  if ((bool)in_ZR || in_NG != in_OV) {
LAB_1082feebc:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1082feec0);
    (*pcVar4)();
  }
  lVar15 = **(long **)(lVar8 + 0x28);
  iVar6 = (int)*plVar10 + 0x20;
  FUN_1082ffd68();
  if (iVar6 != 0) {
    *(byte *)(lVar8 + 0x90) = *(byte *)(lVar8 + 0x90) | bVar12;
    func_0x00010838ed50(lVar8 + 0x8c8,*plVar10 + 0x20);
    if (*(char *)(*(long *)(lVar8 + 0x88) + 0x54) == '\x01') {
      FUN_108282138(*(long *)(lVar8 + 0x88),*plVar10,*(undefined4 *)(lVar15 + 0xa4));
    }
    iVar17 = *(int *)(lVar8 + 0x8a8);
    iVar6 = iVar17;
    if (9 < iVar17) {
      iVar6 = 10;
    }
    if (iVar17 != 0) {
      plVar2 = &lStack_f0;
      if (plVar18 != (long *)0x0) {
        plVar2 = plVar18;
      }
      iVar17 = -1;
      do {
        uVar1 = iVar17 + *(int *)(lVar8 + 0x8a8);
        if (((int)uVar1 < 0) || (*(int *)(lVar8 + 0x8a8) <= (int)uVar1)) goto LAB_1082feebc;
        lStack_110 = *plVar10;
        uVar20 = *(long *)(lVar8 + 0x8a0) + (ulong)uVar1 * 0x50;
        *plVar10 = 0;
        lStack_f0 = 0;
        uStack_e8 = 0;
        uStack_e4 = 0x3210;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_f8 = *(undefined8 *)(lStack_110 + 0x28);
        uStack_100 = *(undefined8 *)(lStack_110 + 0x20);
        uVar9 = uVar20;
        lStack_108 = lStack_110;
        FUN_1082fe284(uVar20,&lStack_110,uVar13 & 0xffffffff,plVar2,lVar14,&uStack_100,param_5,
                      *(long *)(lVar8 + 0x8b0) + 8,*(undefined8 *)(lVar8 + 0x88));
        lVar15 = lStack_110;
        if ((uVar9 & 1) == 0) {
          lVar15 = *(long *)(lStack_110 + 8);
          lVar16 = lStack_110;
          if (lVar15 != 0) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            *(undefined8 *)(lStack_110 + 8) = 0;
            lVar19 = lStack_110;
            goto LAB_1082fed58;
          }
        }
        else {
          lVar16 = 0;
          lStack_110 = 0;
          lVar19 = 0;
          if (lVar15 != 0) {
LAB_1082fed58:
            lStack_110 = 0;
            func_0x00010830057c(lVar15);
            lVar16 = lVar19;
          }
        }
        FUN_1082764bc(&lStack_f0);
        lVar15 = *plVar10;
        *plVar10 = lVar16;
        if (lVar15 != 0) {
          func_0x00010830057c();
          lVar16 = *plVar10;
        }
        if (lVar16 == 0) {
          return;
        }
        lVar15 = uVar20 + 0x40;
        func_0x0001082fe208(lVar15,lVar16 + 0x20);
        bVar5 = -iVar6 != iVar17;
        iVar17 = iVar17 + -1;
      } while ((int)lVar15 != 0 && bVar5);
    }
    if (lVar14 != 0) {
      lVar16 = *(long *)(lVar8 + 0x8b0);
      lVar14 = lVar16 + 8;
      FUN_10840f8d0(lVar14,0x51,8);
      uVar3 = *(undefined4 *)(lVar16 + 0x10);
      *(long *)(lVar16 + 0x10) = lVar14 + 0x48;
      *(undefined8 *)(lVar14 + 0x48) = 0x108300574;
      lVar15 = *(long *)(lVar16 + 0x10);
      *(long *)(lVar16 + 0x10) = lVar15 + 8;
      *(char *)(lVar15 + 8) = (char)lVar14 - (char)uVar3;
      lVar14 = *(long *)(lVar16 + 0x10) + 1;
      *(long *)(lVar16 + 8) = lVar14;
      *(long *)(lVar16 + 0x10) = lVar14;
      FUN_1082a191c();
    }
    iVar6 = *(int *)(lVar8 + 0x8a8);
    lVar14 = (long)iVar6;
    if (iVar6 < (int)(*(uint *)(lVar8 + 0x8ac) >> 1)) {
      func_0x0001083006f8(*(long *)(lVar8 + 0x8a0) + (long)iVar6 * 0x50);
      func_0x0001083006ac();
      if (lStack_f0 != 0) {
        func_0x00010830057c();
      }
    }
    else {
      uVar11 = 1;
      FUN_108300480(0x3ff8000000000000,lVar14,1);
      func_0x0001083006f8(lVar14 + (long)*(int *)(lVar8 + 0x8a8) * 0x50);
      func_0x0001083006ac();
      if (lStack_f0 != 0) {
        func_0x00010830057c();
      }
      FUN_108300404((long *)(lVar8 + 0x8a0),lVar14,uVar11);
    }
    *(int *)(lVar8 + 0x8a8) = *(int *)(lVar8 + 0x8a8) + 1;
  }
  return;
}



/* Entry: 1082febe0; end: 1082feef7;  */

void FUN_1082febe0(long param_1,long *param_2,byte param_3,undefined4 param_4,long param_5,
                  long *param_6,undefined8 param_7)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  func_0x0001083006d4();
  if ((bool)in_ZR || in_NG != in_OV) {
LAB_1082feebc:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1082feec0);
    (*pcVar4)();
  }
  lVar9 = **(long **)(param_1 + 0x28);
  iVar6 = (int)*param_2 + 0x20;
  FUN_1082ffd68();
  if (iVar6 != 0) {
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | param_3;
    func_0x00010838ed50(param_1 + 0x8c8,*param_2 + 0x20);
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x54) == '\x01') {
      FUN_108282138(*(long *)(param_1 + 0x88),*param_2,*(undefined4 *)(lVar9 + 0xa4));
    }
    iVar12 = *(int *)(param_1 + 0x8a8);
    iVar6 = iVar12;
    if (9 < iVar12) {
      iVar6 = 10;
    }
    if (iVar12 != 0) {
      plVar2 = &lStack_80;
      if (param_6 != (long *)0x0) {
        plVar2 = param_6;
      }
      iVar12 = -1;
      do {
        uVar1 = iVar12 + *(int *)(param_1 + 0x8a8);
        if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x8a8) <= (int)uVar1)) goto LAB_1082feebc;
        lStack_a0 = *param_2;
        uVar13 = *(long *)(param_1 + 0x8a0) + (ulong)uVar1 * 0x50;
        *param_2 = 0;
        lStack_80 = 0;
        uStack_78 = 0;
        uStack_74 = 0x3210;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_88 = *(undefined8 *)(lStack_a0 + 0x28);
        uStack_90 = *(undefined8 *)(lStack_a0 + 0x20);
        uVar7 = uVar13;
        lStack_98 = lStack_a0;
        FUN_1082fe284(uVar13,&lStack_a0,param_4,plVar2,param_5,&uStack_90,param_7,
                      *(long *)(param_1 + 0x8b0) + 8,*(undefined8 *)(param_1 + 0x88));
        lVar9 = lStack_a0;
        if ((uVar7 & 1) == 0) {
          lVar9 = *(long *)(lStack_a0 + 8);
          lVar10 = lStack_a0;
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            *(undefined8 *)(lStack_a0 + 8) = 0;
            lVar11 = lStack_a0;
            goto LAB_1082fed58;
          }
        }
        else {
          lVar10 = 0;
          lStack_a0 = 0;
          lVar11 = 0;
          if (lVar9 != 0) {
LAB_1082fed58:
            lStack_a0 = 0;
            func_0x00010830057c(lVar9);
            lVar10 = lVar11;
          }
        }
        FUN_1082764bc(&lStack_80);
        lVar9 = *param_2;
        *param_2 = lVar10;
        if (lVar9 != 0) {
          func_0x00010830057c();
          lVar10 = *param_2;
        }
        if (lVar10 == 0) {
          return;
        }
        lVar9 = uVar13 + 0x40;
        func_0x0001082fe208(lVar9,lVar10 + 0x20);
        bVar5 = -iVar6 != iVar12;
        iVar12 = iVar12 + -1;
      } while ((int)lVar9 != 0 && bVar5);
    }
    if (param_5 != 0) {
      lVar11 = *(long *)(param_1 + 0x8b0);
      lVar9 = lVar11 + 8;
      FUN_10840f8d0(lVar9,0x51,8);
      uVar3 = *(undefined4 *)(lVar11 + 0x10);
      *(long *)(lVar11 + 0x10) = lVar9 + 0x48;
      *(undefined8 *)(lVar9 + 0x48) = 0x108300574;
      lVar10 = *(long *)(lVar11 + 0x10);
      *(long *)(lVar11 + 0x10) = lVar10 + 8;
      *(char *)(lVar10 + 8) = (char)lVar9 - (char)uVar3;
      lVar9 = *(long *)(lVar11 + 0x10) + 1;
      *(long *)(lVar11 + 8) = lVar9;
      *(long *)(lVar11 + 0x10) = lVar9;
      FUN_1082a191c();
    }
    iVar6 = *(int *)(param_1 + 0x8a8);
    lVar9 = (long)iVar6;
    if (iVar6 < (int)(*(uint *)(param_1 + 0x8ac) >> 1)) {
      func_0x0001083006f8(*(long *)(param_1 + 0x8a0) + (long)iVar6 * 0x50);
      func_0x0001083006ac();
      if (lStack_80 != 0) {
        func_0x00010830057c();
      }
    }
    else {
      uVar8 = 1;
      FUN_108300480(0x3ff8000000000000,lVar9,1);
      func_0x0001083006f8(lVar9 + (long)*(int *)(param_1 + 0x8a8) * 0x50);
      func_0x0001083006ac();
      if (lStack_80 != 0) {
        func_0x00010830057c();
      }
      FUN_108300404((long *)(param_1 + 0x8a0),lVar9,uVar8);
    }
    *(int *)(param_1 + 0x8a8) = *(int *)(param_1 + 0x8a8) + 1;
  }
  return;
}



/* Entry: 1082feef8; end: 1082ff06f;  */

undefined8 *
FUN_1082feef8(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             ushort *param_5,undefined8 param_6,long *param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  lVar4 = param_1;
  puVar5 = param_3;
  func_0x0001083005f4();
  puStack_a0 = &uStack_88;
  puStack_98 = &uStack_80;
  uStack_90 = param_9;
  plVar7 = (long *)*puVar5;
  lStack_a8 = lVar4;
  uStack_88 = param_2;
  uStack_80 = param_8;
  uStack_58 = extraout_x8;
  func_0x0001083006c0();
  (**(code **)(*plVar7 + 0x18))(plVar7,auStack_78);
  func_0x0001083006cc();
  func_0x0001083006c0();
  FUN_1082fe180(param_6,auStack_78);
  func_0x0001083006cc();
  if (*param_7 != 0) {
    uVar1 = *(uint *)(param_7 + 3);
    if ((uVar1 >> 1 & 1) == 0) {
      FUN_1082ff0b0(param_1);
      uVar1 = *(uint *)(param_7 + 3);
    }
    if ((uVar1 & 1) != 0) {
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 1;
    }
    FUN_1082ff0d8(&lStack_a8,*param_7,0);
  }
  if ((*param_5 >> 6 & 1) != 0) {
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 2;
  }
  puStack_b0 = (undefined8 *)*param_3;
  *param_3 = 0;
  uVar2 = *(undefined4 *)param_5;
  uVar8 = param_6;
  FUN_1082ff12c();
  uVar3 = (int)uVar8 == 0;
  if ((bool)uVar3) {
    param_6 = 0;
  }
  FUN_1082febe0(param_1,&puStack_b0,param_4,uVar2,param_6,param_7,param_9);
  puVar5 = puStack_b0;
  if (puStack_b0 != (undefined8 *)0x0) {
    func_0x00010830057c();
  }
  func_0x000108300588(uStack_58);
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar6 = puVar5;
  func_0x0001083006cc();
  func_0x0001083005d4();
  func_0x000108300628();
  puVar6[3] = 0;
  func_0x00010830063c();
  *puVar6 = &PTR_DAT_110a3aba0;
  uVar8 = *puVar5;
  uVar10 = puVar5[3];
  uVar9 = puVar5[2];
  puVar6[2] = puVar5[1];
  puVar6[1] = uVar8;
  puVar6[4] = uVar10;
  puVar6[3] = uVar9;
  param_4[3] = puVar6;
  return param_4;
}



/* Entry: 1082ff070; end: 1082ff0af;  */

void FUN_1082ff070(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108300628();
  param_1[3] = 0;
  func_0x00010830063c();
  *param_1 = &PTR_DAT_110a3aba0;
  uVar1 = *unaff_x19;
  uVar3 = unaff_x19[3];
  uVar2 = unaff_x19[2];
  param_1[2] = unaff_x19[1];
  param_1[1] = uVar1;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  *(undefined8 **)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1082ff0b0; end: 1082ff0d7;  */

void FUN_1082ff0b0(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1082ffff4(param_1 + 0x8b8,&uStack_18);
  return;
}



/* Entry: 1082ff0d8; end: 1082ff12b;  */

void FUN_1082ff0d8(ulong *param_1,long *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  byte bVar12;
  long *plStack_70;
  long *plStack_68;
  
  puVar9 = (undefined8 *)*param_1;
  FUN_1082ff0b0(puVar9);
  puVar6 = *(undefined8 **)param_1[1];
  uVar7 = *(undefined8 *)param_1[2];
  uVar8 = param_1[3];
  puVar10 = puVar6;
  FUN_1082933ac(puVar6,param_2);
  if (puVar10 == puVar9) {
    return;
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar3 = puVar9;
    FUN_1082a89c8(puVar9,puVar10);
    if ((((ulong)puVar3 & 1) != 0) || ((undefined8 *)puVar9[0x10] == puVar10)) {
      bVar12 = 0;
      puVar10 = (undefined8 *)0x0;
      goto LAB_1082a8a94;
    }
    if ((*(byte *)((long)puVar10 + 0x4c) >> 3 & 1) == 0) {
      FUN_1082a8774(puVar10,*puVar6);
    }
  }
  bVar12 = 1;
LAB_1082a8a94:
  if ((*(byte *)(param_2 + 3) >> 2 & 1) == 0) {
    iVar11 = 0;
  }
  else {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x28))();
    iVar11 = (int)plVar4;
    func_0x000108293408();
  }
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x18))();
  plStack_68 = plVar4;
  if (((((param_3 == 0) || (plVar5 = plVar4, FUN_1082b33e8(), (int)plVar5 == 0)) ||
       ((char)plVar4[1] != '\x01')) || (*(int *)((long)plVar4 + 0xc) == 2)) && (iVar11 == 0)) {
    if (plVar4 != (long *)0x0) {
      bVar2 = (bool)(bVar12 ^ 1);
      if (plVar4[0xb] == 0) {
        bVar2 = true;
      }
      if (!bVar2) {
        FUN_1082a8bc4(puVar9 + 7,&plStack_68);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_1082a885c(puVar9,puVar10);
    }
  }
  else {
    if (puVar9[0x10] == 0) {
      FUN_108293614(uVar7,uVar8);
      puVar9[0x10] = uVar7;
    }
    plVar4 = param_2 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = (int)*plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_70 = param_2;
    FUN_1082b4014();
    FUN_1082764bc(&plStack_70);
  }
  return;
}



/* Entry: 1082ff12c; end: 1082ff18b;  */

bool FUN_1082ff12c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_10830007c();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x40) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1082ff18c; end: 1082ff26f;  */

void FUN_1082ff18c(long param_1)

{
  int iVar1;
  code *pcVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long extraout_x8;
  int extraout_w11;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  
  func_0x000108300628();
  if ((*(int *)(param_1 + 0x8a8) != 0) || (*(int *)(unaff_x20 + 0x98) != 0)) {
    func_0x000108300678();
    if ((int)param_1 != 0) {
      iVar1 = *(int *)(unaff_x20 + 0x98);
      in_OV = SBORROW4(iVar1,2);
      in_NG = iVar1 + -2 < 0;
      in_ZR = iVar1 == 2;
      if (!(bool)in_ZR) {
        return;
      }
    }
    func_0x00010830061c();
    if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ff264);
      (*pcVar2)();
    }
    func_0x0001083006e0();
    if (extraout_x8 != 0) {
      do {
        func_0x00010830065c();
      } while (extraout_w11 != 0);
    }
    func_0x0001083006b8();
    plVar3 = *(long **)(unaff_x20 + 0x8a0);
    for (lVar4 = (long)*(int *)(unaff_x20 + 0x8a8) * 0x50; lVar4 != 0; lVar4 = lVar4 + -0x50) {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x28))();
      }
      plVar3 = plVar3 + 10;
    }
    func_0x000108300634();
  }
  return;
}



/* Entry: 1082ff270; end: 1082ff3a7;  */

void FUN_1082ff270(long param_1)

{
  int iVar1;
  code *pcVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  
  func_0x000108300628();
  if ((*(int *)(param_1 + 0x8a8) != 0) || (*(int *)(unaff_x20 + 0x98) != 0)) {
    func_0x000108300678();
    if ((int)param_1 != 0) {
      iVar1 = *(int *)(unaff_x20 + 0x98);
      in_OV = SBORROW4(iVar1,2);
      in_NG = iVar1 + -2 < 0;
      in_ZR = iVar1 == 2;
      if (!(bool)in_ZR) {
        return;
      }
    }
    *(long *)(unaff_x19 + 0x158) = unaff_x20 + 0x8b8;
    func_0x00010830061c();
    if ((bool)in_ZR || in_NG != in_OV) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ff388);
      (*pcVar2)();
    }
    func_0x0001083006e0();
    uStack_50 = 0;
    if (extraout_x8 != 0) {
      do {
        func_0x00010830065c();
        uStack_50 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    uStack_48 = *(undefined4 *)(unaff_x20 + 0x94);
    uStack_44 = *(undefined2 *)(unaff_x20 + 0x92);
    uStack_58 = 0;
    FUN_1082764bc(&uStack_58);
    plVar3 = *(long **)(unaff_x20 + 0x8a0);
    for (lVar4 = (long)*(int *)(unaff_x20 + 0x8a8) * 0x50; lVar4 != 0; lVar4 = lVar4 + -0x50) {
      if (*plVar3 != 0) {
        FUN_1083000c0(auStack_a8,*plVar3,&uStack_50,*(undefined1 *)(unaff_x20 + 0x90),plVar3[7],
                      plVar3 + 3,*(undefined4 *)(unaff_x20 + 0xcc),*(undefined4 *)(unaff_x20 + 0x98)
                     );
        *(undefined1 **)(unaff_x19 + 0x150) = auStack_a8;
        (**(code **)(*(long *)*plVar3 + 0x30))();
        *(undefined8 *)(unaff_x19 + 0x150) = 0;
        FUN_1082764bc(auStack_80);
      }
      plVar3 = plVar3 + 10;
    }
    *(undefined8 *)(unaff_x19 + 0x158) = 0;
    FUN_1082764bc(&uStack_50);
  }
  return;
}



/* Entry: 1082ff3a8; end: 1082ff6eb;  */

undefined1 *
FUN_1082ff3a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  int extraout_w11;
  long unaff_x19;
  undefined1 *puVar12;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e0 [40];
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  long *plStack_a0;
  undefined **ppuStack_98;
  long **pplStack_90;
  undefined ***pppuStack_80;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001083005f4();
  uStack_58 = extraout_x8;
  func_0x0001083006d4();
  if ((bool)in_ZR || in_NG != in_OV) goto LAB_1082ff6a4;
  func_0x000108300628();
  plVar8 = (long *)**(undefined8 **)(param_5 + 0x28);
  func_0x0001083005a4();
  ppuStack_98 = &PTR_DAT_110a3ac20;
  pplStack_90 = &plStack_a0;
  pppuStack_80 = &ppuStack_98;
  iVar11 = (int)&ppuStack_98;
  plStack_a0 = plVar8;
  func_0x000105302f48(auStack_78);
  uVar9 = 0;
  func_0x0001006393ec();
  if (((*(int *)(unaff_x20 + 0x8a8) != 0) || (*(int *)(unaff_x20 + 0x98) != 0)) &&
     (func_0x000108300678(), (uVar9 & 1) == 0)) {
    plVar8 = *(long **)((long)plStack_a0 + *(long *)(*plStack_a0 + -0x18) + 0x10);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar8 + 0x68))();
    }
    if (*(char *)((long)plStack_a0 + 9) == '\0') {
      lVar13 = 0;
    }
    else {
      uVar9 = *(ulong *)(unaff_x19 + 0x168);
      plVar14 = plVar8;
      FUN_1082af420(uVar9,plVar8,*(undefined1 *)(unaff_x20 + 0x90));
      iVar11 = (int)plVar14;
      if ((uVar9 & 1) == 0) {
        FUN_10841076c(&UNK_10f489d2b);
        goto LAB_1082ff66c;
      }
      lVar13 = 0x10;
      if (*(char *)(unaff_x20 + 0x90) == '\0') {
        lVar13 = 8;
      }
      lVar13 = *(long *)((long)plVar8 + lVar13);
    }
    iVar11 = *(int *)(unaff_x20 + 0xac);
    cVar5 = SBORROW4(iVar11,2);
    cVar6 = iVar11 + -2 < 0;
    in_ZR = true;
    if (iVar11 == 2) {
LAB_1082ff4b8:
      uVar15 = 0;
    }
    else {
      cVar5 = SBORROW4(iVar11,1);
      cVar6 = iVar11 + -1 < 0;
      in_ZR = iVar11 == 1;
      if ((bool)in_ZR) {
        if ((*(byte *)(lVar13 + 0xd1) & 1) != 0) goto LAB_1082ff4b8;
        uVar15 = 1;
        *(undefined1 *)(lVar13 + 0xd1) = 1;
      }
      else {
        uVar15 = 2;
      }
    }
    plVar14 = *(long **)(unaff_x19 + 0x160);
    plVar8 = *(long **)((long)plStack_a0 + *(long *)(*plStack_a0 + -0x18) + 0x10);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar8 + 0x68))();
    }
    uVar3 = *(undefined1 *)(unaff_x20 + 0x90);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x94);
    uStack_108 = *(undefined4 *)(unaff_x20 + 0x98);
    uVar2 = *(undefined4 *)(unaff_x20 + 0xcc);
    uStack_104 = 0;
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xa4);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x9c);
    uStack_b0 = (ulong)uVar15;
    *(int *)((long)plVar14 + 0x7c) = *(int *)((long)plVar14 + 0x7c) + 1;
    uStack_100 = uVar17;
    (**(code **)(*plVar14 + 0x1b0))
              (plVar14,plVar8,uVar3,lVar13,uVar1,unaff_x20 + 0x8d8,&uStack_108,&uStack_b0,
               unaff_x20 + 0x8b8,uVar2);
    param_1 = (undefined4)uVar17;
    iVar11 = (int)plVar8;
    if (plVar14 != (long *)0x0) {
      *(long **)(unaff_x19 + 0x178) = plVar14;
      *(undefined4 *)(plVar14 + 6) = 1;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      func_0x00010830061c();
      if ((bool)in_ZR || cVar6 != cVar5) {
LAB_1082ff6a4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ff6a8);
        (*pcVar4)();
      }
      func_0x0001083006e0();
      uVar9 = 0;
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010830065c();
          uVar9 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      uStack_a8 = *(undefined4 *)(unaff_x20 + 0x94);
      uStack_a4 = *(undefined2 *)(unaff_x20 + 0x92);
      uStack_b8 = 0;
      uStack_b0 = uVar9;
      FUN_1082764bc(&uStack_b8);
      param_1 = (undefined4)uVar17;
      lVar13 = *(long *)(unaff_x20 + 0x8a0) + 0x40;
      for (lVar16 = (long)*(int *)(unaff_x20 + 0x8a8) * 0x50; lVar16 != 0; lVar16 = lVar16 + -0x50)
      {
        if (*(long *)(lVar13 + -0x40) != 0) {
          FUN_1083000c0(&uStack_108,*(long *)(lVar13 + -0x40),&uStack_b0,
                        *(undefined1 *)(unaff_x20 + 0x90),*(undefined8 *)(lVar13 + -8),
                        lVar13 + -0x28,*(undefined4 *)(unaff_x20 + 0xcc),
                        *(undefined4 *)(unaff_x20 + 0x98));
          *(undefined4 **)(unaff_x19 + 0x150) = &uStack_108;
          (**(code **)(**(long **)(lVar13 + -0x40) + 0x38))();
          *(undefined8 *)(unaff_x19 + 0x150) = 0;
          FUN_1082764bc(auStack_e0);
        }
        param_1 = (undefined4)uVar17;
        lVar13 = lVar13 + 0x50;
      }
      FUN_1082a2160(plVar14);
      (**(code **)(**(long **)(unaff_x19 + 0x160) + 0x48))();
      iVar11 = (int)plVar14;
      *(undefined8 *)(unaff_x19 + 0x178) = 0;
      FUN_1082764bc(&uStack_b0);
      puVar12 = (undefined1 *)0x1;
      goto LAB_1082ff670;
    }
  }
LAB_1082ff66c:
  puVar12 = (undefined1 *)0x0;
LAB_1082ff670:
  FUN_108300130();
  func_0x000108300588(uStack_58);
  if ((bool)in_ZR) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar10 = auStack_78;
  FUN_108300130();
  func_0x0001083005d4();
  *(int *)(puVar10 + 0x98) = iVar11;
  *(undefined4 *)(puVar10 + 0x9c) = param_1;
  *(undefined4 *)(puVar10 + 0xa0) = param_2;
  *(undefined4 *)(puVar10 + 0xa4) = param_3;
  *(undefined4 *)(puVar10 + 0xa8) = param_4;
  cVar5 = SBORROW4(iVar11,1);
  cVar6 = iVar11 + -1 < 0;
  bVar7 = iVar11 == 1;
  puVar12 = puVar10;
  if (bVar7) {
    func_0x0001083006d4();
    if (bVar7 || cVar6 != cVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ff740);
      (*pcVar4)();
    }
    puVar12 = (undefined1 *)**(undefined8 **)(puVar10 + 0x28);
    FUN_1082cda74(puVar12);
    *(undefined4 *)(puVar10 + 0x8c8) = param_1;
    *(undefined4 *)(puVar10 + 0x8cc) = param_2;
    *(undefined4 *)(puVar10 + 0x8d0) = param_3;
    *(undefined4 *)(puVar10 + 0x8d4) = param_4;
  }
  return puVar12;
}



/* Entry: 1082ff6ec; end: 1082ff73f;  */

void FUN_1082ff6ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,int param_6)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  *(int *)(param_5 + 0x98) = param_6;
  *(undefined4 *)(param_5 + 0x9c) = param_1;
  *(undefined4 *)(param_5 + 0xa0) = param_2;
  *(undefined4 *)(param_5 + 0xa4) = param_3;
  *(undefined4 *)(param_5 + 0xa8) = param_4;
  cVar2 = SBORROW4(param_6,1);
  cVar3 = param_6 + -1 < 0;
  bVar4 = param_6 == 1;
  if (bVar4) {
    func_0x0001083006d4();
    if (bVar4 || cVar3 != cVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ff740);
      (*pcVar1)();
    }
    FUN_1082cda74(**(undefined8 **)(param_5 + 0x28));
    *(undefined4 *)(param_5 + 0x8c8) = param_1;
    *(undefined4 *)(param_5 + 0x8cc) = param_2;
    *(undefined4 *)(param_5 + 0x8d0) = param_3;
    *(undefined4 *)(param_5 + 0x8d4) = param_4;
  }
  return;
}



/* Entry: 1082ff740; end: 1082ffac3;  */

ulong FUN_1082ff740(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar11;
  ulong uVar12;
  long extraout_x8;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uStack_70;
  
  uVar12 = 0;
  for (lVar16 = param_3 << 3; uStack_70 = param_3, lVar16 != 0; lVar16 = lVar16 + -8) {
    plVar11 = (long *)param_2[uVar12];
    (**(code **)(*plVar11 + 0x30))();
    uStack_70 = uVar12;
    if (plVar11 == (long *)0x0) break;
    func_0x00010830061c();
    if (((bool)in_ZR || in_NG != in_OV) || (func_0x0001083006d4(), (bool)in_ZR || in_NG != in_OV)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1082ffaa8);
      (*pcVar10)();
    }
    func_0x0001083006e0();
    if (((extraout_x8 != *(long *)plVar11[5]) || (*(long *)(param_1 + 0x8b0) != plVar11[0x116])) ||
       ((*(byte *)((long)plVar11 + 0xb1) & 1) != 0)) break;
    iVar17 = (int)plVar11[0x13];
    in_OV = SBORROW4(iVar17,1);
    in_NG = iVar17 + -1 < 0;
    if (iVar17 == 1) goto LAB_1082ffa80;
    uVar12 = uVar12 + 1;
    in_ZR = 0;
  }
  if ((int)uStack_70 == 0) {
LAB_1082ffa80:
    uStack_70 = 0;
  }
  else {
    iVar14 = 0;
    iVar15 = 0;
    iVar17 = 0;
    plVar11 = param_2 + (uStack_70 & 0xffffffff);
    uVar12 = (uStack_70 & 0xffffffff) << 3;
    plVar7 = param_2;
    uVar9 = uStack_70 & 0xffffffff;
    while (uVar9 != 0) {
      lVar16 = *plVar7;
      iVar3 = *(int *)(lVar16 + 0x40);
      iVar4 = *(int *)(lVar16 + 0x8c0);
      iVar5 = *(int *)(lVar16 + 0x8a8);
      FUN_10838eae0(param_1 + 0x8d8,lVar16 + 0x8d8);
      func_0x00010838ed50(param_1 + 0x8c8,*plVar7 + 0x8c8);
      lVar16 = *plVar7;
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | *(uint *)(lVar16 + 0xcc);
      if (*(int *)(param_1 + 0xac) == 0) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(lVar16 + 0xac);
      }
      iVar17 = iVar3 + iVar17;
      iVar15 = iVar4 + iVar15;
      iVar14 = iVar5 + iVar14;
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | *(byte *)(lVar16 + 0x90);
      plVar7 = plVar7 + 1;
      uVar12 = uVar12 - 8;
      uVar9 = uVar12;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (0 < iVar17) {
      FUN_10830034c(0x3ff0000000000000,param_1 + 0x38,iVar17);
    }
    if (0 < iVar15) {
      func_0x000108300388(0x3ff0000000000000,param_1 + 0x8b8,iVar15);
    }
    if (0 < iVar14) {
      func_0x0001083003c4(0x3ff0000000000000,param_1 + 0x8a0,iVar14);
    }
    for (; param_2 != plVar11; param_2 = param_2 + 1) {
      puVar13 = *(undefined8 **)(*param_2 + 0x70);
      for (lVar16 = (long)*(int *)(*param_2 + 0x78) << 3; lVar16 != 0; lVar16 = lVar16 + -8) {
        FUN_1082a8c04(*puVar13,*param_2,param_1);
        puVar13 = puVar13 + 1;
      }
      puVar13 = *(undefined8 **)(*param_2 + 0x58);
      for (lVar16 = (long)*(int *)(*param_2 + 0x60) << 3; lVar16 != 0; lVar16 = lVar16 + -8) {
        FUN_1082a8c98(*puVar13,*param_2,param_1);
        puVar13 = puVar13 + 1;
      }
      uVar6 = *(uint *)(*param_2 + 0x40);
      puVar13 = *(undefined8 **)(*param_2 + 0x38);
      FUN_10830034c(0x3ff8000000000000,param_1 + 0x38,uVar6);
      iVar17 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar17 + uVar6;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar17 * 8);
      for (uVar12 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
          uVar12 = uVar12 - 1) {
        *puVar8 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar6 = *(uint *)(*param_2 + 0x8c0);
      puVar13 = *(undefined8 **)(*param_2 + 0x8b8);
      func_0x000108300388(0x3ff8000000000000,param_1 + 0x8b8,uVar6);
      iVar17 = *(int *)(param_1 + 0x8c0);
      *(uint *)(param_1 + 0x8c0) = iVar17 + uVar6;
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x8b8) + (long)iVar17 * 8);
      for (uVar12 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
          uVar12 = uVar12 - 1) {
        *puVar8 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar6 = *(uint *)(*param_2 + 0x8a8);
      lVar18 = *(long *)(*param_2 + 0x8a0);
      func_0x0001083003c4(0x3ff8000000000000,param_1 + 0x8a0,uVar6);
      lVar19 = *(long *)(param_1 + 0x8a0);
      iVar17 = *(int *)(param_1 + 0x8a8);
      *(uint *)(param_1 + 0x8a8) = iVar17 + uVar6;
      for (lVar16 = 0; (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * 0x50 - lVar16 != 0;
          lVar16 = lVar16 + 0x50) {
        lVar1 = lVar19 + (long)iVar17 * 0x50 + lVar16;
        lVar2 = lVar18 + lVar16;
        FUN_1082fff38(lVar1,lVar2);
        *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
        FUN_1082a3560(lVar1 + 0x18,lVar2 + 0x18);
        uVar21 = *(undefined8 *)(lVar2 + 0x40);
        uVar20 = *(undefined8 *)(lVar2 + 0x38);
        *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
        *(undefined8 *)(lVar1 + 0x40) = uVar21;
        *(undefined8 *)(lVar1 + 0x38) = uVar20;
      }
      lVar16 = *param_2;
      *(undefined4 *)(lVar16 + 0x40) = 0;
      *(undefined4 *)(lVar16 + 0x8c0) = 0;
      FUN_1082fea6c(lVar16 + 0x8a0);
    }
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(plVar11[-1] + 0xb0);
  }
  return uStack_70;
}



/* Entry: 1082ffac4; end: 1082ffb4b;  */

byte FUN_1082ffac4(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  byte bVar3;
  
  if (((param_2 & 1) == 0) && (*(int *)(param_1 + 0x8a8) != 0)) {
    bVar3 = 0;
  }
  else {
    FUN_1082fea1c(param_1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x8c0) = 0;
    if (*(int *)(param_1 + 0x30) < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ffb28);
      (*pcVar1)();
    }
    lVar2 = **(long **)(param_1 + 0x28);
    func_0x0001083005a4();
    bVar3 = *(byte *)(lVar2 + 10) ^ 1;
  }
  return bVar3 & 1;
}



/* Entry: 1082ffb4c; end: 1082ffb7b;  */

bool FUN_1082ffb4c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x8b8);
  lVar1 = (long)*(int *)(param_1 + 0x8c0) << 3;
  do {
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    lVar4 = *plVar2;
    plVar2 = plVar2 + 1;
    lVar1 = lVar3 + -8;
  } while (lVar4 != param_2);
  return lVar3 != 0;
}



/* Entry: 1082ffb7c; end: 1082ffd67;  */

void FUN_1082ffb7c(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined8 extraout_x8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuStack_78;
  
  func_0x000108300628();
  func_0x0001083005f4();
  if ((*(int *)(param_1 + 0x8a8) != 0) || (*(int *)(unaff_x20 + 0x98) != 0)) {
    lVar7 = 0;
    while( true ) {
      lVar5 = (long)*(int *)(unaff_x20 + 0x40);
      cVar2 = SBORROW8(lVar7,lVar5);
      cVar3 = lVar7 - lVar5 < 0;
      bVar4 = lVar7 == lVar5;
      if (lVar5 <= lVar7) break;
      FUN_1082a96fc();
      lVar7 = lVar7 + 1;
    }
    func_0x00010830061c();
    if (bVar4 || cVar3 != cVar2) goto LAB_1082ffd50;
    func_0x0001083005a4();
    if (*(int *)(unaff_x20 + 0x8a8) == 0) {
      func_0x000108300680();
      *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x19 + 0x70) + 1;
    }
    else {
      func_0x000108300680();
    }
    puVar8 = *(undefined8 **)(unaff_x20 + 0x8a0);
    puVar9 = puVar8 + (long)*(int *)(unaff_x20 + 0x8a8) * 10;
    for (; in_ZR = puVar8 == puVar9, !(bool)in_ZR; puVar8 = puVar8 + 10) {
      ppuStack_78 = &PTR_FUN_110a3aca0;
      plVar6 = (long *)*puVar8;
      if (plVar6 != (long *)0x0) {
        for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
          (**(code **)(*plVar6 + 0x18))(plVar6,&ppuStack_78);
        }
        if (puVar8[3] != 0) {
          FUN_108298768(&ppuStack_78,puVar8[3],0);
        }
        if (puVar8[7] != 0) {
          FUN_1082fe180(puVar8[7],&ppuStack_78);
        }
      }
      FUN_1082ecca8(&ppuStack_78);
      *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x19 + 0x70) + 1;
    }
  }
  func_0x000108300588(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1082ffd50:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ffd54);
  (*pcVar1)();
}



/* Entry: 1082ffd68; end: 1082ffd8b;  */

bool FUN_1082ffd68(float *param_1)

{
  return !NAN((*param_1 - *param_1) * param_1[1] * param_1[2] * param_1[3]);
}



/* Entry: 1082ffd8c; end: 1082ffe6f;  */

void FUN_1082ffd8c(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x000108300628();
  lVar8 = 0;
  lVar10 = 1;
  lVar9 = 0x90;
  do {
    lVar6 = (long)*(int *)(unaff_x20 + 0x8a8) + -1;
    if (lVar6 <= lVar8) {
      return;
    }
    lVar7 = *(long *)(unaff_x20 + 0x8a0) + lVar8 * 0x50;
    iVar1 = (int)lVar8 + 10;
    iVar5 = (int)lVar6;
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
    lVar8 = lVar8 + 1;
    lVar6 = lVar10;
    lVar11 = lVar9;
    do {
      if (*(int *)(unaff_x20 + 0x8a8) <= lVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1082ffe70);
        (*pcVar3)();
      }
      lVar2 = *(long *)(unaff_x20 + 0x8a0) + lVar11;
      uVar4 = lVar2 - 0x40;
      FUN_1082fe820(uVar4,lVar7);
      if ((uVar4 & 1) != 0) break;
      uVar4 = lVar7 + 0x40;
      func_0x0001082fe208(uVar4,lVar2);
      if (iVar5 <= lVar6) break;
      lVar6 = lVar6 + 1;
      lVar11 = lVar11 + 0x50;
    } while ((uVar4 & 1) != 0);
    lVar10 = lVar10 + 1;
    lVar9 = lVar9 + 0x50;
  } while( true );
}



/* Entry: 1082ffe70; end: 1082fff37;  */

undefined1 *
FUN_1082ffe70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,long param_6,ulong *param_7)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar3 = &uStack_40;
  FUN_1082ffd8c(param_5,*(undefined8 *)(*(long *)(param_6 + 0x10) + 0xb8));
  if ((*(int *)(param_5 + 0x8a8) == 0) && (*(int *)(param_5 + 0x98) == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    func_0x00010830061c();
    if ((bool)in_ZR || in_NG != in_OV) {
LAB_1082fff34:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082fff38);
      (*pcVar1)();
    }
    FUN_1082cda74(**(undefined8 **)(param_5 + 0x28));
    uStack_40 = param_1;
    uStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    FUN_10838ed10(&uStack_40,param_5 + 0x8c8);
    if ((int)puVar3 != 0) {
      func_0x00010812f1a8(&uStack_40,param_5 + 0x8d8);
      func_0x00010830061c();
      if ((bool)in_ZR || in_NG != in_OV) goto LAB_1082fff34;
      uVar4 = (ulong)*(uint *)(param_5 + 0x94);
      uVar2 = **(ulong **)(param_5 + 0x28);
      FUN_1082b1dfc();
      uVar2 = uVar2 >> 0x20;
      FUN_10826c7b0(uVar4,uVar2,*(undefined8 *)(param_5 + 0x8d8),*(undefined8 *)(param_5 + 0x8e0));
      *param_7 = uVar4;
      param_7[1] = uVar2;
    }
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1082fff38; end: 1082fff5b;  */

undefined8 * FUN_1082fff38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1082fe7f4();
  return param_1;
}



/* Entry: 1082fff5c; end: 1082fff8f;  */

undefined8 * FUN_1082fff5c(undefined8 *param_1)

{
  FUN_1082fff90();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082fff90; end: 1082ffff3;  */

void FUN_1082fff90(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x50;
    do {
      func_0x0001082fffcc();
      uVar1 = uVar1 + 0x50;
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 1082ffff4; end: 10830007b;  */

long * FUN_1082ffff4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar4 = (long *)(*param_1 + (long)iVar3 * 8);
    *plVar4 = *param_2;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1082eeac0(0x3ff8000000000000,param_1,1);
    plVar4 = plVar1 + (int)param_1[1];
    *plVar4 = *param_2;
    FUN_1082eeae4(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return plVar4;
}



/* Entry: 10830007c; end: 1083000bf;  */

bool FUN_10830007c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  FUN_108295d6c();
  if ((((uVar2 & 1) == 0) && (*(int *)(param_1 + 0x38) == 0)) &&
     ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
    bVar1 = *(int *)(param_1 + 0x20) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1083000c0; end: 10830012f;  */

undefined8 *
FUN_1083000c0(undefined8 *param_1,undefined8 param_2,long *param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    func_0x0001083005a4();
  }
  param_1[2] = lVar1;
  *(undefined1 *)(param_1 + 3) = param_4;
  param_1[4] = param_5;
  FUN_1082a3560(param_1 + 5,param_6);
  *(undefined4 *)(param_1 + 9) = param_7;
  *(undefined4 *)((long)param_1 + 0x4c) = param_8;
  return param_1;
}



/* Entry: 108300130; end: 108300163;  */

long * FUN_108300130(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x000104c003e8(param_1);
  }
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 108300164; end: 10830016b;  */

void FUN_108300164(void)

{
  return;
}



/* Entry: 10830016c; end: 10830019b;  */

void FUN_10830016c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010830063c();
  func_0x00010830064c(&PTR_FUN_110a3ab20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 10830019c; end: 1083001db;  */

void FUN_10830019c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_110a3ab20;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1083001dc; end: 108300203;  */

void FUN_1083001dc(undefined8 param_1)

{
  func_0x0001083006ec();
  func_0x000108300644(param_1,&PTR_DAT_110a3ab80);
  func_0x000108300604();
  return;
}



/* Entry: 108300204; end: 108300217;  */

undefined ** FUN_108300204(void)

{
  return &PTR_DAT_110a3ab80;
}



/* Entry: 108300218; end: 108300247;  */

void FUN_108300218(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010830063c();
  func_0x00010830064c(&PTR_DAT_110a3aba0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 108300248; end: 108300273;  */

void FUN_108300248(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_DAT_110a3aba0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108300274; end: 10830029b;  */

void FUN_108300274(undefined8 param_1)

{
  func_0x0001083006ec();
  func_0x000108300644(param_1,&PTR_DAT_110a3ac00);
  func_0x000108300604();
  return;
}



/* Entry: 10830029c; end: 1083002af;  */

undefined ** FUN_10830029c(void)

{
  return &PTR_DAT_110a3ac00;
}



/* Entry: 1083002b0; end: 1083002df;  */

void FUN_1083002b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110a3ac20;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1083002e0; end: 108300317;  */

void FUN_1083002e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a3ac20;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108300318; end: 10830033f;  */

void FUN_108300318(undefined8 param_1)

{
  func_0x0001083006ec();
  func_0x000108300644(param_1,&PTR_DAT_110a3ac80);
  func_0x000108300604();
  return;
}



/* Entry: 108300340; end: 10830034b;  */

undefined ** FUN_108300340(void)

{
  return &PTR_DAT_110a3ac80;
}



/* Entry: 10830034c; end: 108300403;  */

void FUN_10830034c(long param_1,int param_2)

{
  int extraout_w8;
  long unaff_x19;
  
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < param_2) {
    FUN_1082a8e8c();
    func_0x0001083005bc();
    func_0x0001082a9028();
    if (extraout_w8 != 0) {
      func_0x0001082a8fd4();
    }
    if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
      func_0x0001082a903c();
    }
    func_0x0001082a8f84();
    return;
  }
  return;
}



/* Entry: 108300404; end: 10830047f;  */

void FUN_108300404(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x50);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x50;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 108300480; end: 1083004c3;  */

void FUN_108300480(uint param_1,int param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 <= (int)(param_1 ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 0x50;
    FUN_10840fe24(&uStack_20,param_2 + param_1);
    return;
  }
  func_0x00010bdb1a68();
  return;
}



/* Entry: 1083004c4; end: 1083004cb;  */

void FUN_1083004c4(void)

{
  return;
}



/* Entry: 1083004cc; end: 1083004f7;  */

void FUN_1083004cc(void)

{
  __Znwm(0x18);
  func_0x00010830064c(&PTR_FUN_110a3aca0);
  return;
}



/* Entry: 1083004f8; end: 10830053f;  */

void FUN_1083004f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a3aca0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 108300540; end: 108300567;  */

void FUN_108300540(undefined8 param_1)

{
  func_0x0001083006ec();
  func_0x000108300644(param_1,&PTR_DAT_110a3ad00);
  func_0x000108300604();
  return;
}



/* Entry: 108300568; end: 108300737;  */

undefined ** FUN_108300568(void)

{
  return &PTR_DAT_110a3ad00;
}



/* Entry: 108300738; end: 10830079b;  */

uint FUN_108300738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x50);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  uStack_24 = 3;
  if (*(float *)(param_1 + 0x54) != 1.0) {
    uStack_24 = 1;
  }
  lVar1 = param_1 + 0x58;
  FUN_1082a3cdc(lVar1,&uStack_24,0,param_3,0,param_2,param_4,param_1 + 0x48);
  return (uint)lVar1 & 0xffff;
}



/* Entry: 10830079c; end: 108300a5f;  */

void FUN_10830079c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  
  FUN_10830c710(param_2,*(undefined4 *)(param_1 + 0x44),param_3,(*(byte *)(param_1 + 0x40) & 2) << 1
               );
  FUN_1082ec830();
  if ((*(int *)(param_1 + 0x38) < 0x33) ||
     (((float)*(undefined8 *)(param_1 + 0x28) - (float)*(undefined8 *)(param_1 + 0x20)) *
      ((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) -
      (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20)) <= 65536.0)) {
    plVar4 = (long *)*param_2;
    func_0x000108300ab4(plVar4,*(undefined1 *)(*(long *)(param_2[5] + 0x10) + 0x12),0);
    uVar6 = (undefined4)plVar4[1];
  }
  else {
    uVar3 = *param_2;
    FUN_10830c634(uVar3,0x113254e20,&UNK_10df18d28);
    func_0x000108301c5c();
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    plVar8 = (long *)*param_2;
    bVar1 = *(byte *)(*(long *)(param_2[5] + 0x10) + 0x12);
    plVar4 = plVar8;
    func_0x000108301c70(plVar8,0x51);
    uVar6 = 0;
    lVar2 = plVar8[1];
    plVar8[1] = (long)(plVar4 + 9);
    plVar4[9] = (long)FUN_108301658;
    lVar7 = plVar8[1];
    plVar8[1] = lVar7 + 8;
    *(char *)(lVar7 + 8) = (char)plVar4 - (char)(int)lVar2;
    *plVar8 = plVar8[1] + 1;
    plVar8[1] = plVar8[1] + 1;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[4] = (long)(plVar4 + 2);
    plVar4[5] = 0x200000000;
    *(undefined4 *)(plVar4 + 6) = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    if ((bVar1 & 1) == 0) {
      uVar6 = 0x20;
      *(undefined4 *)(plVar4 + 1) = 0x20;
    }
    *plVar4 = (long)&PTR_FUN_110a3b8d8;
  }
  *(long **)(param_1 + 0x78) = plVar4;
  uVar3 = *(undefined8 *)(param_2[5] + 0x10);
  FUN_10830c3d8(uVar3,*param_2,0x113254e20,&UNK_10df18d28,uVar6);
  func_0x000108301c5c();
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    plVar8 = (long *)*param_2;
    lVar9 = *(long *)(param_2[5] + 0x10);
    plVar4 = plVar8;
    func_0x000108301c70(plVar8,0x61);
    lVar2 = plVar8[1];
    plVar8[1] = (long)(plVar4 + 0xb);
    plVar4[0xb] = 0x108301a4c;
    lVar7 = plVar8[1];
    plVar8[1] = lVar7 + 8;
    *(char *)(lVar7 + 8) = (char)plVar4 - (char)(int)lVar2;
    *plVar8 = plVar8[1] + 1;
    plVar8[1] = plVar8[1] + 1;
    *(undefined4 *)(plVar4 + 1) = 0x3b;
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    plVar4[3] = 0;
    plVar4[2] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[7] = 0;
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 8) = 0;
    *plVar4 = (long)&PTR_FUN_110a3adb0;
    *(undefined8 *)((long)plVar4 + 0x4c) = uVar10;
    *(undefined8 *)((long)plVar4 + 0x44) = uVar3;
    if ((*(byte *)(lVar9 + 0x5e) & 1) == 0) {
      FUN_10829e324(plVar4 + 2,&PTR_DAT_110a3ade0,1);
    }
    FUN_10829e324(plVar4 + 5,&PTR_DAT_110a3adf8,3);
    puVar5 = param_2;
    FUN_10830dbf0(param_2,*(undefined4 *)(param_1 + 0x44),param_3,param_1 + 0x58);
    uVar3 = param_2[5];
    FUN_1082fc820(uVar3,*param_2,puVar5,param_2[1],*(undefined1 *)(param_2 + 2),plVar4,1,
                  *(undefined4 *)(param_2 + 4),*(undefined4 *)((long)param_2 + 0x24));
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  return;
}



/* Entry: 108300a60; end: 108300adf;  */

void FUN_108300a60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_28 = param_4;
  uStack_20 = param_3;
  lStack_18 = param_2;
  FUN_10830153c(*param_1,param_1[5],param_1[1],param_1 + 2,&uStack_20,&uStack_28,&lStack_18,
                param_2 + 0x44,param_1 + 4,(long)param_1 + 0x24);
  return;
}



/* Entry: 108300ae0; end: 108300c33;  */

void FUN_108300ae0(undefined **param_1,byte *param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,long param_8)

{
  undefined ***pppuVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long *unaff_x19;
  undefined8 *puVar14;
  long unaff_x20;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  float fVar21;
  undefined *puVar22;
  float fVar23;
  undefined8 uVar24;
  byte *pbStack_3a0;
  undefined8 uStack_398;
  undefined **ppuStack_390;
  undefined8 *puStack_388;
  undefined *puStack_380;
  undefined4 uStack_378;
  undefined1 auStack_370 [56];
  undefined **ppuStack_338;
  long lStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined **ppuStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined **ppuStack_180;
  byte *pbStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char cStack_148;
  undefined8 uStack_140;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000108301c78();
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  param_7 = (long *)*param_7;
  (**(code **)(*param_7 + 0x28))();
  uVar6 = (char)param_7[1] == '\x01';
  func_0x0001082a6e68();
  if (param_8 == 0) {
    param_1 = (undefined **)0x2000000020000000;
    uStack_98 = 0;
    uStack_a0 = 0x2000000020000000;
    uStack_90 = 0x2000000020000000;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
  }
  else {
    FUN_1082a191c(&uStack_a0,param_8);
  }
  FUN_10830079c();
  FUN_1082c3a7c();
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    func_0x000108301c8c(*(undefined8 *)(*unaff_x19 + 0x48));
  }
  if (*(long *)(unaff_x20 + 0x88) != 0) {
    func_0x000108301c8c(*(undefined8 *)(*unaff_x19 + 0x48));
  }
  lVar11 = *(long *)(unaff_x20 + 0x90);
  if (lVar11 != 0) {
    func_0x000108301c8c(*(undefined8 *)(*unaff_x19 + 0x48));
  }
  func_0x000108301ca0(uStack_58);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_a0;
  FUN_1082c3a7c();
  func_0x000108301c84();
  uStack_140 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)puVar7[0xf];
  if (plVar8 == (long *)0x0) {
    ppuStack_338 = (undefined **)(lVar11 + 0x10);
    lVar12 = *(long *)(lVar11 + 0x150);
    lStack_330 = *(long *)(lVar12 + 8);
    puStack_328 = (undefined8 *)CONCAT71(puStack_328._1_7_,*(undefined1 *)(lVar12 + 0x18));
    puStack_320 = (undefined8 *)(lVar12 + 0x28);
    param_1 = *(undefined ***)(lVar12 + 0x48);
    uStack_310 = *(ulong *)(*(long *)(lVar11 + 0x160) + 0x10);
    ppuStack_318 = param_1;
    func_0x0001082a167c(&uStack_308,lVar11);
    FUN_10830079c(puVar7,&ppuStack_338,&uStack_308);
    FUN_1082c3a7c(&uStack_308);
    plVar8 = (long *)puVar7[0xf];
    if (plVar8 == (long *)0x0) goto LAB_1083010f4;
  }
  if (puVar7[0x10] != 0) {
    lStack_330 = 0;
    if (lVar11 != 0) {
      lStack_330 = lVar11 + 8;
    }
    puStack_328 = puVar7 + 0x13;
    puStack_320 = puVar7 + 0x14;
    ppuStack_338 = &PTR_FUN_110a355c8;
    uStack_310 = uStack_310 & 0xffffffff00000000;
    iVar17 = *(int *)(puVar7 + 7);
    if (iVar17 < 3) {
      iVar17 = 2;
    }
    pppuVar9 = &ppuStack_338;
    FUN_108295b58(pppuVar9,8,iVar17 * 3 + -6);
    if (pppuVar9 != (undefined ***)0x0) {
      iVar17 = 0;
      plVar8 = puVar7 + 6;
      while (lVar12 = *plVar8, lVar12 != 0) {
        FUN_108301818(auStack_370,lVar12);
        param_2 = (byte *)0x0;
        FUN_108301878(0,&uStack_308,*(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x48));
        cStack_148 = '\0';
        pbStack_160 = (byte *)0x0;
        puStack_168 = (undefined8 *)0x0;
        uStack_150 = 0;
        uStack_158 = 0;
        ppuStack_170 = (undefined **)0x0;
        pbStack_178 = (byte *)0x0;
        FUN_1081e8e40(&pbStack_3a0,(long *)(lVar12 + 0x28));
        puStack_168 = puStack_388;
        ppuStack_170 = ppuStack_390;
        pbStack_178 = pbStack_3a0;
        pbStack_160 = uStack_398;
        uStack_158 = 0;
        uStack_150 = 0;
        param_1 = ppuStack_390;
        while (ppuVar13 = ppuStack_170, pbVar4 = pbStack_178, cStack_148 != '\x01') {
          if (pbStack_178 == pbStack_160) {
            cStack_148 = '\x01';
LAB_108300e30:
            func_0x000108301978(&pbStack_3a0,&uStack_308);
          }
          else {
            func_0x0001081e8ec8(&pbStack_178);
            bVar3 = *pbVar4;
            if (bVar3 - 1 < 4) {
              func_0x0001083019c0(&pbStack_3a0,
                                  *(undefined4 *)
                                   (ppuVar13 + ((ulong)(byte)(&UNK_10df18dec)[(uint)bVar3] - 2)),
                                  *(undefined4 *)
                                   ((long)ppuVar13 +
                                   (ulong)(byte)(&UNK_10df18dec)[(uint)bVar3] * 8 + -0xc),
                                  &uStack_308);
            }
            else {
              if (bVar3 != 0) {
                if (bVar3 != 5) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x108301124);
                  (*pcVar5)();
                }
                goto LAB_108300e30;
              }
              uStack_398 = (byte *)*uStack_308;
              ppuStack_390 = (undefined **)((long)uStack_308 + 0xc);
              if (ppuStack_180 <= (undefined **)((long)uStack_308 + 0xc)) {
                ppuStack_390 = ppuStack_180;
              }
              puStack_388 = uStack_308;
              puStack_380 = *ppuVar13;
              uStack_378 = 0;
              pbStack_3a0 = (byte *)&uStack_308;
            }
          }
          pppuVar1 = &ppuStack_390;
          if (pbStack_3a0 != (byte *)0x0) {
            pppuVar1 = (undefined ***)(pbStack_3a0 + 0x188);
          }
          ppuVar13 = *pppuVar1;
          param_3 = (undefined **)((ulong)uStack_398 & 0xffffffff);
          param_1 = (undefined **)CONCAT44((float)uStack_398,uStack_398._4_4_);
          while (ppuVar13 != ppuStack_390) {
            puVar19 = *ppuVar13;
            ppuVar13 = (undefined **)((long)ppuVar13 + -0xc);
            puVar22 = *ppuVar13;
            uVar24 = NEON_rev64(puVar22,4);
            uVar20 = NEON_rev64(puVar19,4);
            pppuVar9[1] = (undefined **)
                          CONCAT44(SUB84(auStack_370._8_8_,4) * (float)((ulong)puVar19 >> 0x20) +
                                   SUB84(auStack_370._24_8_,4) * (float)((ulong)uVar20 >> 0x20) +
                                   SUB84(auStack_370._40_8_,4),
                                   (float)auStack_370._8_8_ * SUB84(puVar19,0) +
                                   (float)auStack_370._24_8_ * (float)uVar20 +
                                   (float)auStack_370._40_8_);
            *pppuVar9 = (undefined **)
                        CONCAT44(SUB84(auStack_370._0_8_,4) * (float)((ulong)puVar22 >> 0x20) +
                                 SUB84(auStack_370._16_8_,4) * (float)((ulong)uVar24 >> 0x20) +
                                 SUB84(auStack_370._32_8_,4),
                                 (float)auStack_370._0_8_ * SUB84(puVar22,0) +
                                 (float)auStack_370._16_8_ * (float)uVar24 +
                                 (float)auStack_370._32_8_);
            fVar21 = uStack_398._4_4_ * (float)auStack_370._16_8_ + (float)auStack_370._32_8_;
            fVar23 = (float)uStack_398 * SUB84(auStack_370._16_8_,4) + SUB84(auStack_370._32_8_,4);
            param_4 = CONCAT44(fVar23,fVar21);
            param_3 = (undefined **)
                      CONCAT44(uStack_398._4_4_ * SUB84(auStack_370._0_8_,4) + fVar23,
                               (float)uStack_398 * (float)auStack_370._0_8_ + fVar21);
            pppuVar9[2] = param_3;
            pppuVar9 = pppuVar9 + 3;
            iVar17 = iVar17 + 1;
          }
          param_2 = uStack_398;
          if (pbStack_3a0 != (byte *)0x0) {
            *(undefined8 **)(pbStack_3a0 + 0x188) = puStack_388;
            *(undefined4 *)(puStack_388 + 1) = uStack_378;
            *puStack_388 = puStack_380;
          }
        }
        FUN_108301948(&uStack_308);
        plVar8 = (long *)(lVar12 + 0x48);
      }
      *(int *)((long)puVar7 + 0xa4) = iVar17 * 3;
      FUN_108295bcc(&ppuStack_338);
    }
    plVar8 = (long *)puVar7[0xf];
  }
  puVar15 = puVar7 + 6;
  lVar12 = lVar11 + 8;
  uVar6 = lVar11 == 0;
  lVar2 = 0;
  if (!(bool)uVar6) {
    lVar2 = lVar12;
  }
  (**(code **)(*plVar8 + 0x10))
            (plVar8,lVar2,*(long *)(puVar7[0x11] + 0x98) + 0x48,*puVar15,*(undefined4 *)(puVar7 + 7)
            );
  if (puVar7[0x12] != 0) {
    (**(code **)(*(long *)(lVar11 + 8) + 0x18))
              (lVar12,*(undefined8 *)(*(long *)(puVar7[0x12] + 0x98) + 0x38),
               *(undefined4 *)((long)puVar7 + 0x3c),puVar7 + 0x15,puVar7 + 0x16);
    puVar14 = (undefined8 *)(lVar12 + 0x18);
    while( true ) {
      uVar18 = SUB84(param_1,0);
      puVar16 = (undefined4 *)*puVar15;
      if (puVar16 == (undefined4 *)0x0) break;
      *(undefined4 *)(puVar14 + -3) = *puVar16;
      *(undefined4 *)((long)puVar14 + -0x14) = puVar16[3];
      *(undefined4 *)(puVar14 + -2) = puVar16[1];
      *(undefined4 *)((long)puVar14 + -0xc) = puVar16[4];
      *(undefined4 *)(puVar14 + -1) = puVar16[2];
      *(undefined4 *)((long)puVar14 + -4) = puVar16[5];
      if ((*(byte *)((long)puVar16 + 0x36) >> 1 & 1) == 0) {
        pppuVar9 = (undefined ***)(puVar16 + 10);
        func_0x0001083773e0();
      }
      else {
        plVar8 = (long *)**(long **)(*(long *)(lVar11 + 0x150) + 8);
        (**(code **)(*plVar8 + 0x28))();
        FUN_1082cda74((long)plVar8 + *(long *)(*plVar8 + -0x18));
        uStack_308 = (undefined8 *)CONCAT44((int)param_2,uVar18);
        uStack_300 = SUB84(param_3,0);
        uStack_2fc = (undefined4)param_4;
        ppuStack_338 = (undefined **)0x0;
        lStack_330 = 0;
        puVar10 = puVar16;
        FUN_1083011b8(puVar16,&ppuStack_338,&uStack_308);
        if (((ulong)puVar10 & 1) == 0) {
          pppuVar9 = (undefined ***)(puVar16 + 10);
          func_0x0001083773e0();
        }
        else {
          pppuVar9 = &ppuStack_338;
        }
      }
      param_1 = *pppuVar9;
      puVar14[1] = pppuVar9[1];
      *puVar14 = param_1;
      puVar15 = (undefined8 *)(puVar16 + 0x12);
      puVar14 = puVar14 + 5;
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0)
  goto LAB_1083010f4;
  if ((bRam000000011372ab18 & 1) == 0) goto LAB_108301128;
  while( true ) {
    uStack_308 = (undefined8 *)0x11372ab30;
    FUN_1082e9628(0x11372ab10,FUN_1083012fc,&uStack_308);
    if ((bRam000000011372ab28 & 1) == 0) {
      iVar17 = 0x1372ab28;
      ___cxa_guard_acquire();
      if (iVar17 != 0) {
        uRam000000011372ab20 = 0x11372ab30;
        ___cxa_guard_release(0x11372ab28);
      }
    }
    FUN_1082aee00(&uStack_308,*(undefined8 *)(lVar11 + 0x168),0,0x20,&UNK_10df18d38,
                  uRam000000011372ab20);
    uVar20 = uStack_308;
    uStack_308 = (undefined8 *)0x0;
    FUN_1082eea00(puVar7 + 0x17,uVar20);
    FUN_10828f708(&uStack_308);
LAB_1083010f4:
    func_0x000108301ca0(uStack_140);
    if ((bool)uVar6) break;
    ___stack_chk_fail();
LAB_108301128:
    iVar17 = 0x1372ab18;
    ___cxa_guard_acquire();
    if (iVar17 != 0) {
      ___cxa_guard_release(0x11372ab18);
    }
  }
  return;
}



/* Entry: 108300c34; end: 1083011b7;  */

void FUN_108300c34(undefined **param_1,byte *param_2,undefined **param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined ***pppuVar1;
  long lVar2;
  byte bVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined1 in_ZR;
  long *plVar6;
  undefined ***pppuVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  float fVar18;
  undefined *puVar19;
  float fVar20;
  undefined8 uVar21;
  byte *pbStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined8 *puStack_2b8;
  undefined *puStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [56];
  undefined **ppuStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  undefined **ppuStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined **ppuStack_b0;
  byte *pbStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = *(long **)(param_5 + 0x78);
  if (plVar6 == (long *)0x0) {
    ppuStack_268 = (undefined **)(param_6 + 0x10);
    lVar9 = *(long *)(param_6 + 0x150);
    lStack_260 = *(long *)(lVar9 + 8);
    lStack_258 = CONCAT71(lStack_258._1_7_,*(undefined1 *)(lVar9 + 0x18));
    lStack_250 = lVar9 + 0x28;
    param_1 = *(undefined ***)(lVar9 + 0x48);
    uStack_240 = *(ulong *)(*(long *)(param_6 + 0x160) + 0x10);
    ppuStack_248 = param_1;
    func_0x0001082a167c(&uStack_238,param_6);
    FUN_10830079c(param_5,&ppuStack_268,&uStack_238);
    FUN_1082c3a7c(&uStack_238);
    plVar6 = *(long **)(param_5 + 0x78);
    if (plVar6 == (long *)0x0) goto LAB_1083010f4;
  }
  if (*(long *)(param_5 + 0x80) != 0) {
    lStack_260 = 0;
    if (param_6 != 0) {
      lStack_260 = param_6 + 8;
    }
    lStack_258 = param_5 + 0x98;
    lStack_250 = param_5 + 0xa0;
    ppuStack_268 = &PTR_FUN_110a355c8;
    uStack_240 = uStack_240 & 0xffffffff00000000;
    iVar14 = *(int *)(param_5 + 0x38);
    if (iVar14 < 3) {
      iVar14 = 2;
    }
    pppuVar7 = &ppuStack_268;
    FUN_108295b58(pppuVar7,8,iVar14 * 3 + -6);
    if (pppuVar7 != (undefined ***)0x0) {
      iVar14 = 0;
      plVar6 = (long *)(param_5 + 0x30);
      while (lVar9 = *plVar6, lVar9 != 0) {
        FUN_108301818(auStack_2a0,lVar9);
        param_2 = (byte *)0x0;
        FUN_108301878(0,&uStack_238,*(undefined4 *)(*(long *)(lVar9 + 0x28) + 0x48));
        cStack_78 = '\0';
        pbStack_90 = (byte *)0x0;
        puStack_98 = (undefined8 *)0x0;
        uStack_80 = 0;
        uStack_88 = 0;
        ppuStack_a0 = (undefined **)0x0;
        pbStack_a8 = (byte *)0x0;
        FUN_1081e8e40(&pbStack_2d0,(long *)(lVar9 + 0x28));
        puStack_98 = puStack_2b8;
        ppuStack_a0 = ppuStack_2c0;
        pbStack_a8 = pbStack_2d0;
        pbStack_90 = uStack_2c8;
        uStack_88 = 0;
        uStack_80 = 0;
        param_1 = ppuStack_2c0;
        while (ppuVar10 = ppuStack_a0, pbVar4 = pbStack_a8, cStack_78 != '\x01') {
          if (pbStack_a8 == pbStack_90) {
            cStack_78 = '\x01';
LAB_108300e30:
            func_0x000108301978(&pbStack_2d0,&uStack_238);
          }
          else {
            func_0x0001081e8ec8(&pbStack_a8);
            bVar3 = *pbVar4;
            if (bVar3 - 1 < 4) {
              func_0x0001083019c0(&pbStack_2d0,
                                  *(undefined4 *)
                                   (ppuVar10 + ((ulong)(byte)(&UNK_10df18dec)[(uint)bVar3] - 2)),
                                  *(undefined4 *)
                                   ((long)ppuVar10 +
                                   (ulong)(byte)(&UNK_10df18dec)[(uint)bVar3] * 8 + -0xc),
                                  &uStack_238);
            }
            else {
              if (bVar3 != 0) {
                if (bVar3 != 5) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x108301124);
                  (*pcVar5)();
                }
                goto LAB_108300e30;
              }
              uStack_2c8 = (byte *)*uStack_238;
              ppuStack_2c0 = (undefined **)((long)uStack_238 + 0xc);
              if (ppuStack_b0 <= (undefined **)((long)uStack_238 + 0xc)) {
                ppuStack_2c0 = ppuStack_b0;
              }
              puStack_2b8 = uStack_238;
              puStack_2b0 = *ppuVar10;
              uStack_2a8 = 0;
              pbStack_2d0 = (byte *)&uStack_238;
            }
          }
          pppuVar1 = &ppuStack_2c0;
          if (pbStack_2d0 != (byte *)0x0) {
            pppuVar1 = (undefined ***)(pbStack_2d0 + 0x188);
          }
          ppuVar10 = *pppuVar1;
          param_3 = (undefined **)((ulong)uStack_2c8 & 0xffffffff);
          param_1 = (undefined **)CONCAT44((float)uStack_2c8,uStack_2c8._4_4_);
          while (ppuVar10 != ppuStack_2c0) {
            puVar16 = *ppuVar10;
            ppuVar10 = (undefined **)((long)ppuVar10 + -0xc);
            puVar19 = *ppuVar10;
            uVar21 = NEON_rev64(puVar19,4);
            uVar17 = NEON_rev64(puVar16,4);
            pppuVar7[1] = (undefined **)
                          CONCAT44(SUB84(auStack_2a0._8_8_,4) * (float)((ulong)puVar16 >> 0x20) +
                                   SUB84(auStack_2a0._24_8_,4) * (float)((ulong)uVar17 >> 0x20) +
                                   SUB84(auStack_2a0._40_8_,4),
                                   (float)auStack_2a0._8_8_ * SUB84(puVar16,0) +
                                   (float)auStack_2a0._24_8_ * (float)uVar17 +
                                   (float)auStack_2a0._40_8_);
            *pppuVar7 = (undefined **)
                        CONCAT44(SUB84(auStack_2a0._0_8_,4) * (float)((ulong)puVar19 >> 0x20) +
                                 SUB84(auStack_2a0._16_8_,4) * (float)((ulong)uVar21 >> 0x20) +
                                 SUB84(auStack_2a0._32_8_,4),
                                 (float)auStack_2a0._0_8_ * SUB84(puVar19,0) +
                                 (float)auStack_2a0._16_8_ * (float)uVar21 +
                                 (float)auStack_2a0._32_8_);
            fVar18 = uStack_2c8._4_4_ * (float)auStack_2a0._16_8_ + (float)auStack_2a0._32_8_;
            fVar20 = (float)uStack_2c8 * SUB84(auStack_2a0._16_8_,4) + SUB84(auStack_2a0._32_8_,4);
            param_4 = CONCAT44(fVar20,fVar18);
            param_3 = (undefined **)
                      CONCAT44(uStack_2c8._4_4_ * SUB84(auStack_2a0._0_8_,4) + fVar20,
                               (float)uStack_2c8 * (float)auStack_2a0._0_8_ + fVar18);
            pppuVar7[2] = param_3;
            pppuVar7 = pppuVar7 + 3;
            iVar14 = iVar14 + 1;
          }
          param_2 = uStack_2c8;
          if (pbStack_2d0 != (byte *)0x0) {
            *(undefined8 **)(pbStack_2d0 + 0x188) = puStack_2b8;
            *(undefined4 *)(puStack_2b8 + 1) = uStack_2a8;
            *puStack_2b8 = puStack_2b0;
          }
        }
        FUN_108301948(&uStack_238);
        plVar6 = (long *)(lVar9 + 0x48);
      }
      *(int *)(param_5 + 0xa4) = iVar14 * 3;
      FUN_108295bcc(&ppuStack_268);
    }
    plVar6 = *(long **)(param_5 + 0x78);
  }
  puVar12 = (undefined8 *)(param_5 + 0x30);
  lVar9 = param_6 + 8;
  in_ZR = param_6 == 0;
  lVar2 = 0;
  if (!(bool)in_ZR) {
    lVar2 = lVar9;
  }
  (**(code **)(*plVar6 + 0x10))
            (plVar6,lVar2,*(long *)(*(long *)(param_5 + 0x88) + 0x98) + 0x48,*puVar12,
             *(undefined4 *)(param_5 + 0x38));
  if (*(long *)(param_5 + 0x90) != 0) {
    (**(code **)(*(long *)(param_6 + 8) + 0x18))
              (lVar9,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x90) + 0x98) + 0x38),
               *(undefined4 *)(param_5 + 0x3c),param_5 + 0xa8,param_5 + 0xb0);
    puVar11 = (undefined8 *)(lVar9 + 0x18);
    while( true ) {
      uVar15 = SUB84(param_1,0);
      puVar13 = (undefined4 *)*puVar12;
      if (puVar13 == (undefined4 *)0x0) break;
      *(undefined4 *)(puVar11 + -3) = *puVar13;
      *(undefined4 *)((long)puVar11 + -0x14) = puVar13[3];
      *(undefined4 *)(puVar11 + -2) = puVar13[1];
      *(undefined4 *)((long)puVar11 + -0xc) = puVar13[4];
      *(undefined4 *)(puVar11 + -1) = puVar13[2];
      *(undefined4 *)((long)puVar11 + -4) = puVar13[5];
      if ((*(byte *)((long)puVar13 + 0x36) >> 1 & 1) == 0) {
        pppuVar7 = (undefined ***)(puVar13 + 10);
        func_0x0001083773e0();
      }
      else {
        plVar6 = (long *)**(long **)(*(long *)(param_6 + 0x150) + 8);
        (**(code **)(*plVar6 + 0x28))();
        FUN_1082cda74((long)plVar6 + *(long *)(*plVar6 + -0x18));
        uStack_238 = (undefined8 *)CONCAT44((int)param_2,uVar15);
        uStack_230 = SUB84(param_3,0);
        uStack_22c = (undefined4)param_4;
        ppuStack_268 = (undefined **)0x0;
        lStack_260 = 0;
        puVar8 = puVar13;
        FUN_1083011b8(puVar13,&ppuStack_268,&uStack_238);
        if (((ulong)puVar8 & 1) == 0) {
          pppuVar7 = (undefined ***)(puVar13 + 10);
          func_0x0001083773e0();
        }
        else {
          pppuVar7 = &ppuStack_268;
        }
      }
      param_1 = *pppuVar7;
      puVar11[1] = pppuVar7[1];
      *puVar11 = param_1;
      puVar12 = (undefined8 *)(puVar13 + 0x12);
      puVar11 = puVar11 + 5;
    }
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_6 + 0x160) + 0x10) + 0x10) + 0x5e) & 1) != 0)
  goto LAB_1083010f4;
  if ((bRam000000011372ab18 & 1) == 0) goto LAB_108301128;
  while( true ) {
    uStack_238 = (undefined8 *)0x11372ab30;
    FUN_1082e9628(0x11372ab10,FUN_1083012fc,&uStack_238);
    if ((bRam000000011372ab28 & 1) == 0) {
      iVar14 = 0x1372ab28;
      ___cxa_guard_acquire();
      if (iVar14 != 0) {
        uRam000000011372ab20 = 0x11372ab30;
        ___cxa_guard_release(0x11372ab28);
      }
    }
    FUN_1082aee00(&uStack_238,*(undefined8 *)(param_6 + 0x168),0,0x20,&UNK_10df18d38,
                  uRam000000011372ab20);
    uVar17 = uStack_238;
    uStack_238 = (undefined8 *)0x0;
    FUN_1082eea00(param_5 + 0xb8,uVar17);
    FUN_10828f708(&uStack_238);
LAB_1083010f4:
    func_0x000108301ca0(uStack_70);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_108301128:
    iVar14 = 0x1372ab18;
    ___cxa_guard_acquire();
    if (iVar14 != 0) {
      ___cxa_guard_release(0x11372ab18);
    }
  }
  return;
}



/* Entry: 1083011b8; end: 1083012fb;  */

float * FUN_1083011b8(int param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined8 *unaff_x19;
  float *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  func_0x000108301c78();
  FUN_1082878d0();
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0x3f800000;
    uStack_48 = 0;
    uStack_50 = 0x3f800000;
    uStack_40 = 0x103f800000;
    FUN_10818cfd0();
    if ((int)unaff_x20 != 0) {
      FUN_108364f90(&uStack_60);
    }
  }
  else if ((*unaff_x20 == 0.0) || (unaff_x20[4] == 0.0)) {
    unaff_x20 = (float *)0x0;
  }
  else {
    fVar2 = (float)*param_3 - unaff_x20[2];
    fVar3 = (float)((ulong)*param_3 >> 0x20) - unaff_x20[5];
    fVar4 = (float)param_3[1] - unaff_x20[2];
    fVar5 = (float)((ulong)param_3[1] >> 0x20) - unaff_x20[5];
    pfVar1 = unaff_x20;
    func_0x0001081421e0();
    if ((int)pfVar1 < 2) {
      auVar9._4_4_ = fVar3;
      auVar9._0_4_ = fVar2;
      auVar9._8_4_ = fVar4;
      auVar9._12_4_ = fVar5;
    }
    else {
      auVar7 = NEON_fmov(0x3f800000,4);
      fVar6 = auVar7._0_4_ / (float)*(undefined8 *)unaff_x20;
      fVar8 = auVar7._4_4_ / unaff_x20[4];
      auVar9._0_4_ = fVar2 * fVar6;
      auVar9._4_4_ = fVar3 * fVar8;
      auVar9._8_4_ = fVar4 * (auVar7._8_4_ / (float)*(undefined8 *)unaff_x20);
      auVar9._12_4_ = fVar5 * (auVar7._12_4_ / unaff_x20[4]);
      if ((0.0 <= fVar6) || (0.0 <= fVar8)) {
        if (0.0 <= fVar6) {
          if (fVar8 < 0.0) {
            auVar7 = NEON_ext(auVar9,auVar9,0xc,1);
            auVar10._4_12_ = auVar9._4_12_;
            auVar10._0_4_ = auVar9._0_4_;
            auVar12._0_8_ = auVar10._0_8_;
            auVar12._8_4_ = auVar9._8_4_;
            auVar12._12_4_ = auVar9._12_4_;
            auVar11._8_8_ = auVar12._8_8_;
            auVar11._4_4_ = auVar7._0_4_;
            auVar11._0_4_ = auVar9._0_4_;
            auVar9._0_12_ = auVar11._0_12_;
            auVar9._12_4_ = (float)auVar7._8_4_;
          }
        }
        else {
          auVar9 = NEON_rev64(auVar9,4);
          auVar9 = NEON_ext(auVar9,auVar9,0xc,1);
        }
      }
      else {
        auVar9 = NEON_ext(auVar9,auVar9,8,1);
      }
    }
    unaff_x19[1] = auVar9._8_8_;
    *unaff_x19 = auVar9._0_8_;
    unaff_x20 = (float *)0x1;
  }
  return unaff_x20;
}



/* Entry: 1083012fc; end: 108301347;  */

void FUN_1083012fc(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 108301348; end: 108301517;  */

void FUN_108301348(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x000108301c78();
    if (((*(long *)(param_1 + 0x90) == 0) ||
        (*(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0x98) + 0x1c) == 0)) ||
       (*(long *)(unaff_x20 + 0xb8) != 0)) {
      if (0 < *(int *)(unaff_x20 + 0xa4)) {
        func_0x000108301c2c();
        uStack_40 = 0;
        uStack_38 = 0;
        plStack_48 = *(long **)(unaff_x20 + 0x98);
        if (plStack_48 != (long *)0x0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
        }
        func_0x000108301c94();
        FUN_1082647e4(&plStack_48);
        FUN_1082647e4(&uStack_40);
        FUN_1082647e4(&uStack_38);
        FUN_1082a1754();
      }
      func_0x000108301c2c();
      (**(code **)(**(long **)(unaff_x20 + 0x78) + 0x18))();
      if (*(long *)(unaff_x20 + 0x90) != 0) {
        func_0x000108301c2c();
        FUN_1082a10b4();
        uStack_50 = 0;
        plStack_58 = *(long **)(unaff_x20 + 0xa8);
        if (plStack_58 != (long *)0x0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
        }
        lVar4 = *(long *)(unaff_x20 + 0xb8);
        if (lVar4 != 0) {
          piVar1 = (int *)(lVar4 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_60 = 0;
        if (lVar4 != 0) {
          lStack_60 = lVar4 + 0xb0;
        }
        func_0x000108301c94();
        FUN_1082647e4(&lStack_60);
        FUN_1082647e4(&plStack_58);
        FUN_1082647e4(&uStack_50);
        FUN_1082f43ac();
      }
    }
  }
  return;
}



/* Entry: 108301518; end: 10830151b;  */

undefined8 * FUN_108301518(undefined8 *param_1)

{
  FUN_10828f708(param_1 + 0x17);
  FUN_1082647e4(param_1 + 0x15);
  FUN_1082647e4(param_1 + 0x13);
  FUN_1082a3b78(param_1 + 0xb);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 10830151c; end: 10830152f;  */

void FUN_10830151c(void)

{
  FUN_108301a0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108301530; end: 10830153b;  */

undefined * FUN_108301530(void)

{
  return &UNK_10f489d73;
}



/* Entry: 10830153c; end: 108301573;  */

void FUN_10830153c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_9;
  uStack_18 = param_10;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  uStack_30 = param_7;
  uStack_28 = param_8;
  FUN_108301574(param_1,&uStack_58);
  return;
}



/* Entry: 108301574; end: 108301657;  */

void FUN_108301574(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  func_0x000108301c78();
  func_0x000108301c70();
  iVar1 = *(int *)(unaff_x20 + 8);
  *(undefined8 **)(unaff_x20 + 8) = param_1 + 0x16;
  param_1[0x16] = 0x10830161c;
  puVar2 = param_1;
  func_0x000108301c38((int)param_1 - iVar1);
  FUN_1082a47e4(puVar2,*param_1,param_1[1],*(undefined1 *)param_1[2],*(undefined8 *)param_1[3],
                *(undefined8 *)param_1[4],*(undefined8 *)param_1[5],*(undefined1 *)param_1[6],
                *(undefined4 *)param_1[7],*(undefined4 *)param_1[8]);
  return;
}



/* Entry: 108301658; end: 10830165f;  */

undefined8 * FUN_108301658(long param_1)

{
  *(undefined8 *)(param_1 + -0x51) = &PTR_FUN_110a3aec0;
  FUN_10828f708(param_1 + -0x11);
  FUN_10828f708(param_1 + -0x19);
  FUN_1083016b0(param_1 + -0x31);
  return (undefined8 *)(param_1 + -0x51);
}



/* Entry: 108301660; end: 1083016a7;  */

undefined8 * FUN_108301660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3aec0;
  FUN_10828f708(param_1 + 8);
  FUN_10828f708(param_1 + 7);
  FUN_1083016b0(param_1 + 4);
  return param_1;
}



/* Entry: 1083016a8; end: 1083016af;  */

void FUN_1083016a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083016ac);
  (*pcVar1)();
}



/* Entry: 1083016b0; end: 1083016e3;  */

undefined8 * FUN_1083016b0(undefined8 *param_1)

{
  FUN_1083016e4();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1083016e4; end: 10830171b;  */

void FUN_1083016e4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      FUN_1082647e4();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10830171c; end: 10830175b;  */

void FUN_10830171c(undefined8 *param_1,uint param_2,uint param_3)

{
  *param_1 = &PTR_FUN_110a3aec0;
  *(uint *)(param_1 + 1) = param_3;
  param_1[4] = param_1 + 2;
  param_1[5] = 0x200000000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 1) = param_3 | 0x20;
  }
  return;
}



/* Entry: 10830175c; end: 10830177f;  */

void FUN_10830175c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_108301780(param_1,&uStack_20);
  return;
}



/* Entry: 108301780; end: 1083017c7;  */

void FUN_108301780(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  func_0x000108301c78();
  func_0x000108301c70();
  iVar1 = *(int *)(unaff_x20 + 8);
  *(undefined8 **)(unaff_x20 + 8) = param_1 + 9;
  param_1[9] = 0x1083017e0;
  puVar2 = param_1;
  func_0x000108301c38((int)param_1 - iVar1);
  FUN_10830171c(puVar2,*(undefined1 *)*param_1,*(undefined4 *)param_1[1]);
  *puVar2 = &PTR_FUN_110a3b920;
  *(uint *)(puVar2 + 1) = *(uint *)(puVar2 + 1) | 2;
  return;
}



/* Entry: 1083017c8; end: 1083017e7;  */

void FUN_1083017c8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10830171c(param_2,*(undefined1 *)*param_1,*(undefined4 *)param_1[1]);
  *param_2 = &PTR_FUN_110a3b920;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 2;
  return;
}



/* Entry: 1083017e8; end: 108301817;  */

void FUN_1083017e8(undefined8 *param_1)

{
  FUN_10830171c();
  *param_1 = &PTR_FUN_110a3b920;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
  return;
}



/* Entry: 108301818; end: 108301843;  */

undefined8 * FUN_108301818(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_108301844();
  return param_1;
}



/* Entry: 108301844; end: 108301877;  */

void FUN_108301844(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[4];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[5];
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  return;
}



/* Entry: 108301878; end: 1083018e7;  */

long * FUN_108301878(undefined4 param_1,undefined4 param_2,long *param_3,int param_4)

{
  long *plVar1;
  
  plVar1 = param_3 + 1;
  *param_3 = (long)plVar1;
  if (param_4 + -1 < 0) {
    FUN_1083018e8(param_3,0x21);
    plVar1 = (long *)*param_3;
  }
  *(undefined4 *)plVar1 = param_1;
  *(undefined4 *)((long)plVar1 + 4) = param_2;
  *(undefined4 *)((long)plVar1 + 8) = 0;
  param_3[0x31] = (long)plVar1;
  return param_3;
}



/* Entry: 1083018e8; end: 108301947;  */

void FUN_1083018e8(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  if (param_2 < (long *)0x21) {
    plVar1 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar1 = param_1 + 1;
    }
  }
  else {
    FUN_10840ffdc(param_2,0xc);
    plVar1 = param_2;
  }
  *param_1 = (long)plVar1;
  return;
}



/* Entry: 108301948; end: 108301977;  */

long * FUN_108301948(long *param_1)

{
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  return param_1;
}



/* Entry: 108301978; end: 108301a0b;  */

void FUN_108301978(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = (long)puVar3 + 0xcU;
  if ((ulong)param_2[0x31] <= (long)puVar3 + 0xcU) {
    uVar1 = param_2[0x31];
  }
  *param_1 = param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = puVar3;
  param_1[4] = uVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



/* Entry: 108301a0c; end: 108301a77;  */

undefined8 * FUN_108301a0c(undefined8 *param_1)

{
  FUN_10828f708(param_1 + 0x17);
  FUN_1082647e4(param_1 + 0x15);
  FUN_1082647e4(param_1 + 0x13);
  FUN_1082a3b78(param_1 + 0xb);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 108301a78; end: 108301a8f;  */

void FUN_108301a78(void)

{
  return;
}



/* Entry: 108301a90; end: 108301ae3;  */

void FUN_108301a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *puVar1 = &PTR_FUN_110a3ae68;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *param_1 = puVar1;
  return;
}


