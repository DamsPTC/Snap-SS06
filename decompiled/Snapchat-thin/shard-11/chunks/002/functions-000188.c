/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083935fc; end: 1083936cb;  */

undefined1  [16]
FUN_1083935fc(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  int extraout_w10;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lStack_38;
  
  if (*param_3 != 0) {
    do {
      func_0x000108395214();
    } while (extraout_w10 != 0);
  }
  FUN_10839325c(&lStack_38);
  func_0x00010839527c();
  if (((param_4 & 1) == 0) && (lVar1 = *param_3, lVar1 == lStack_38)) {
    param_6 = *(undefined8 *)(lVar1 + 0x18);
    uVar2 = *(ulong *)(lVar1 + 0x20) >> 2;
  }
  else {
    uVar2 = (*(long *)(lStack_38 + 0x20) << 0x20) >> 0x22;
    func_0x000108388a38(param_6,uVar2);
    _memcpy();
  }
  func_0x000108394ab8(lStack_38);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_6;
  return auVar3;
}



/* Entry: 1083936cc; end: 1083937ab;  */

void FUN_1083936cc(long param_1,int param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_ac [120];
  undefined1 uStack_34;
  
  if ((ulong)(long)param_2 < *(ulong *)(param_1 + 0x50)) {
    uVar3 = (ulong)param_2;
    plVar2 = (long *)(*(long *)(param_1 + 0x48) + uVar3 * 8);
    FUN_1083937ac();
    if (plVar2 == (long *)0x0) {
      func_0x000108387d70(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                          &UNK_10df1e420);
    }
    else {
      if (*(ulong *)(param_1 + 0x60) <= uVar3) goto LAB_1083937a8;
      if (*(int *)(*(long *)(param_1 + 0x58) + uVar3 * 8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010839374c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 8,*(undefined8 *)(param_1 + 0x40));
        return;
      }
      _memcpy(auStack_ac,*(undefined8 *)(param_1 + 0x40),0x7c);
      uStack_34 = 0;
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 8,auStack_ac);
    }
    return;
  }
LAB_1083937a8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083937ac);
  (*pcVar1)();
}



/* Entry: 1083937ac; end: 1083938f7;  */

void FUN_1083937ac(long param_1)

{
  func_0x000108395270();
  if (param_1 != 0) {
    func_0x00010839524c();
  }
  return;
}



/* Entry: 1083938f8; end: 108393953;  */

void FUN_1083938f8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_94 [100];
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    func_0x0001083953a0();
    FUN_108343ba0();
    func_0x0001083953f0(auStack_94,lVar2,3,param_1);
    iVar1 = (int)auStack_94;
    FUN_10828b104();
    if (iVar1 != 0) {
      func_0x000108395368();
    }
  }
  return;
}



/* Entry: 108393954; end: 1083939d7;  */

/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387854) */
/* WARNING: Removing unreachable block (ram,0x000108387910) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_108393954(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long unaff_x21;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  func_0x0001083953ac();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = lVar3;
  func_0x0001081865e0(lVar3,100,4);
  *(long *)(lVar3 + 8) = lVar5 + 100;
  _memcpy();
  FUN_108387820(*(undefined8 *)(unaff_x21 + 8),0xe3,param_3);
  func_0x0001083442d0(lVar5,*(undefined8 *)(unaff_x21 + 8));
  plVar2 = *(long **)(unaff_x21 + 8);
  plVar4 = (long *)*plVar2;
  lVar5 = plVar2[2];
  plVar1 = plVar4;
  func_0x0001081865e0(plVar4,0x18,8);
  plVar4[1] = (long)(plVar1 + 3);
  *plVar1 = lVar5;
  *(undefined4 *)(plVar1 + 1) = 0xe3;
  plVar1[2] = param_3;
  plVar2[2] = (long)plVar1;
  *(int *)(plVar2 + 4) = (int)plVar2[4] + 1;
  return;
}



/* Entry: 1083939d8; end: 108393a2b;  */

void FUN_1083939d8(long param_1)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_84 [100];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001083953a0();
    FUN_108343ba0();
    func_0x0001083953f0(auStack_84,param_1,3,*(undefined8 *)(unaff_x20 + 0x20));
    iVar1 = (int)auStack_84;
    FUN_10828b104();
    if (iVar1 != 0) {
      func_0x000108395368();
    }
  }
  return;
}



/* Entry: 108393a2c; end: 108393a43;  */

void FUN_108393a2c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  uVar1 = param_2 - *(int *)(param_1 + 8);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0 || param_2 < *(int *)(param_1 + 8)) {
    return;
  }
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - *(int *)(param_1 + 8)) < (int)uVar1) {
    lVar2 = param_1;
    FUN_1083683f0(0x3ff0000000000000);
    func_0x000108368514(param_1,lVar2);
    if (*(int *)(param_1 + 8) != 0) {
      _memcpy(unaff_x20,*unaff_x19,(long)*(int *)(param_1 + 8) << 3);
    }
    if ((*(byte *)((long)unaff_x19 + 0xc) & 1) != 0) {
      func_0x000108368528();
    }
    func_0x0001083684a8(uVar3 >> 3);
    return;
  }
  return;
}



/* Entry: 108393a44; end: 108393aa3;  */

ulong FUN_108393a44(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x00010839524c();
    iVar1 = (int)lVar2;
    if (iVar1 == 7) {
      uVar4 = 0;
      uVar3 = 0x100000000;
      goto LAB_108393a9c;
    }
    if (iVar1 == 1) {
      uVar3 = 0x100000000;
      uVar4 = 2;
      goto LAB_108393a9c;
    }
    if (iVar1 == 0) {
      uVar3 = 0x100000000;
      uVar4 = 1;
      goto LAB_108393a9c;
    }
  }
  uVar3 = 0;
  uVar4 = 0;
LAB_108393a9c:
  return uVar4 | uVar3;
}



/* Entry: 108393aa4; end: 108393aff;  */

void FUN_108393aa4(long *param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  
  func_0x0001083953a0();
  (**(code **)(*param_1 + 0x38))();
  for (param_3 = param_3 << 3; param_3 != 0; param_3 = param_3 + -8) {
    (**(code **)(*unaff_x20 + 0x58))();
  }
  return;
}



/* Entry: 108393b00; end: 108393b3f;  */

void FUN_108393b00(long param_1,byte *param_2)

{
  byte bVar1;
  
  func_0x000108394a7c();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x20) = bVar1;
  *(byte *)(param_1 + 0x18) = bVar1 ^ 1;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 108393b40; end: 108393c8f;  */

void FUN_108393b40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined1 auStack_d4 [44];
  undefined1 auStack_a8 [104];
  
  FUN_1083c4fac(auStack_a8);
  FUN_108393b00(auStack_d4,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (auStack_f8,(undefined4 *)*param_2 + 2,*(undefined4 *)*param_2);
  FUN_1083c5660(&lStack_e0,auStack_a8,param_4,auStack_f8,auStack_d4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  lVar1 = lStack_e0;
  if (lStack_e0 == 0) {
    *param_1 = 0;
    FUN_1083c5610(auStack_110,auStack_a8,1);
    FUN_1083a3c34(param_1 + 1,"%s");
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  }
  else {
    lStack_e0 = 0;
    lStack_118 = lVar1;
    FUN_108393c90(param_1,&lStack_118,param_3,param_4);
    func_0x000108395318();
  }
  func_0x000108395320();
  FUN_1083c50f0(auStack_a8);
  return;
}



/* Entry: 108393c90; end: 108394237;  */

void FUN_108393c90(undefined8 *param_1,long *param_2,byte *param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  long *plVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  int iVar30;
  long *plVar31;
  long *plVar32;
  int iStack_168;
  long alStack_158 [5];
  int iStack_12c;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [40];
  undefined8 uStack_a8;
  
  FUN_1083c4fac(auStack_d0);
  if (0xc < param_4) {
LAB_1083941a8:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1083941ac);
    (*pcVar9)();
  }
  uVar23 = 1 << (ulong)(param_4 & 0x1f);
  if ((uVar23 & 0x480) == 0) {
    if ((uVar23 & 0x900) == 0) {
      if ((1 << (ulong)(param_4 & 0x1f) & 0x1200U) == 0) goto LAB_1083941a8;
      uVar23 = 8;
    }
    else {
      uVar23 = 4;
    }
  }
  else {
    FUN_1083431b0(alStack_158);
    iVar30 = *(int *)(*(long *)(*param_2 + 8) + 0x30);
    iVar10 = *(int *)(alStack_158[0] + 0xc);
    FUN_108392f34(alStack_158);
    if (iVar10 < iVar30) {
      *param_1 = 0;
      FUN_1083a3c34(param_1 + 1,&UNK_10f49031e);
      goto LAB_108394168;
    }
    uVar23 = 2;
  }
  bVar7 = *param_3;
  lVar12 = *param_2;
  FUN_1083ea60c(lVar12,"main");
  if (lVar12 == 0) {
    *param_1 = 0;
    FUN_1083a3c34(param_1 + 1,&UNK_10f49034a);
  }
  else {
    lVar21 = lVar12;
    FUN_10831cd40();
    if (lVar21 == 0) {
      iVar30 = 0;
      iStack_168 = 0;
    }
    else {
      iVar30 = (int)((ulong)*(undefined8 *)(*param_2 + 0x20) >> 0x20);
      FUN_1083d70ac();
      iStack_168 = (int)lVar21;
    }
    iVar10 = (int)*param_2;
    FUN_1083c2dc4();
    uVar23 = uVar23 | (uint)bVar7 << 8;
    if (iVar30 != 0 || iStack_168 != 0) {
      uVar23 = uVar23 + 1;
    }
    uVar3 = uVar23 | 0x10;
    if (iVar10 == 0) {
      uVar3 = uVar23;
    }
    uVar23 = uVar3;
    if ((uVar3 >> 1 & 1) != 0) {
      uVar13 = *(undefined8 *)(lVar12 + 0x28);
      FUN_1083d7bd8(uVar13,*(undefined8 *)(*param_2 + 0x20));
      uVar23 = uVar3 | 0x80;
      if ((int)uVar13 == 0) {
        uVar23 = uVar3;
      }
    }
    iVar10 = (int)*param_2;
    FUN_1083c2e7c();
    iVar11 = (int)*(undefined8 *)(lVar12 + 0x28);
    FUN_1083c2f4c();
    uStack_e0 = 0;
    uStack_d8 = 0;
    uVar3 = uVar23 | 0x20;
    if (iVar10 == 0) {
      uVar3 = uVar23;
    }
    uVar23 = uVar3 | 0x40;
    if (iVar11 == 0) {
      uVar23 = uVar3;
    }
    uStack_f0 = 0;
    uStack_e8 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    uStack_100 = 0;
    plStack_128 = (long *)0x0;
    plStack_120 = (long *)0x0;
    plStack_118 = (long *)0x0;
    iStack_12c = 0;
    lVar21 = *param_2;
    plVar32 = *(long **)(lVar21 + 0x38);
    plVar4 = *(long **)(lVar21 + 0x40);
    plVar5 = *(long **)(lVar21 + 0x58);
    plVar24 = (long *)0x0;
    plVar28 = (long *)0x0;
    for (plVar31 = *(long **)(lVar21 + 0x50); iVar10 = iStack_12c,
        plVar32 != plVar4 || plVar31 != plVar5; plVar31 = (long *)((long)plVar31 + lVar21)) {
      plVar2 = plVar32;
      if (plVar31 != plVar5) {
        plVar2 = plVar31;
      }
      plVar25 = plVar24;
      plVar29 = plVar28;
      if (*(int *)(*plVar2 + 0xc) == 3) {
        lVar21 = *(long *)(*(long *)(*plVar2 + 0x10) + 0x10);
        if (*(byte *)(*(long *)(lVar21 + 0x20) + 0x2c) - 0xd < 3) {
          func_0x000108393224(alStack_158,lVar21,(lStack_108 - lStack_110) / 0x18);
          func_0x000108367af0(&lStack_110,alStack_158);
          lVar14 = *param_2;
          FUN_1083c2d04(lVar14,lVar21,iStack_168 != 0,&iStack_12c);
          if ((int)lVar14 == 0) {
            lVar14 = 1;
          }
          if (plVar24 < plStack_118) {
            plVar25 = plVar24 + 1;
            *plVar24 = lVar14;
            plStack_120 = plVar25;
          }
          else {
            lVar21 = (long)plVar24 - (long)plVar28;
            uVar1 = (lVar21 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              plStack_128 = plVar28;
              FUN_108394d40();
              goto LAB_1083941a8;
            }
            uVar22 = (long)plStack_118 - (long)plVar28 >> 2;
            if (uVar22 <= uVar1) {
              uVar22 = uVar1;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)plStack_118 - (long)plVar28)) {
              uVar22 = 0x1fffffffffffffff;
            }
            if (uVar22 == 0) {
              lVar15 = 0;
            }
            else {
              if (uVar22 >> 0x3d != 0) {
                plStack_128 = plVar28;
                func_0x000104bd35f4();
                goto LAB_1083941a8;
              }
              lVar15 = uVar22 << 3;
              __Znwm();
            }
            plVar24 = (long *)(lVar15 + lVar21);
            plVar2 = (long *)(lVar15 + uVar22 * 8);
            plVar29 = plVar24 + -(lVar21 >> 3);
            plVar25 = plVar24 + 1;
            *plVar24 = lVar14;
            _memcpy(plVar29,plVar28,lVar21);
            plStack_120 = plVar25;
            plStack_118 = plVar2;
            if (plVar28 != (long *)0x0) {
              __ZdlPv(plVar28);
              plStack_120 = plVar25;
            }
          }
        }
        else if ((*(byte *)(lVar21 + 0x30) >> 3 & 1) != 0) {
          FUN_108392f84(alStack_158,lVar21,uStack_a8,&uStack_d8);
          FUN_108367d28(&uStack_f0,alStack_158);
        }
      }
      lVar21 = 8;
      if (plVar31 != plVar5) {
        lVar21 = 0;
      }
      plVar32 = (long *)((long)plVar32 + lVar21);
      lVar21 = 0;
      if (plVar31 != plVar5) {
        lVar21 = 8;
      }
      plVar24 = plVar25;
      plVar28 = plVar29;
    }
    puVar16 = (undefined8 *)0x90;
    plStack_128 = plVar28;
    __Znwm();
    uVar3 = uVar23 & 0x1fe;
    if (iStack_168 != 0 || iVar10 != iVar30) {
      uVar3 = uVar23;
    }
    puVar27 = (undefined8 *)*param_2;
    *param_2 = 0;
    uVar13 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined4 *)(puVar16 + 1) = 1;
    *puVar16 = &PTR_FUN_110a3faf8;
    puVar17 = (undefined8 *)*puVar27;
    lVar12 = (long)*(char *)((long)puVar17 + 0x17);
    puVar18 = puVar17;
    if (lVar12 < 0) {
      puVar18 = (undefined8 *)*puVar17;
      lVar12 = puVar17[1];
    }
    func_0x0001083953cc(puVar18,lVar12);
    pbVar26 = param_3 + 0x1c;
    uVar6 = *(undefined4 *)pbVar26;
    *(int *)((long)puVar16 + 0xc) = (int)puVar18;
    *(undefined4 *)(puVar16 + 2) = uVar6;
    FUN_1083a3410(puVar16 + 3,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
    uVar8 = uStack_100;
    puVar16[4] = puVar27;
    puVar16[5] = 0;
    *(undefined1 *)(puVar16 + 6) = 0;
    puVar16[7] = uVar13;
    puVar16[9] = uStack_e8;
    puVar16[8] = uStack_f0;
    puVar16[10] = uStack_e0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puVar16[0xc] = lStack_108;
    puVar16[0xb] = lStack_110;
    lStack_110 = 0;
    lStack_108 = 0;
    uStack_100 = 0;
    puVar16[0xd] = uVar8;
    puVar16[0xe] = plVar28;
    puVar16[0xf] = plVar24;
    puVar16[0x10] = plStack_118;
    plStack_120 = (long *)0x0;
    plStack_118 = (long *)0x0;
    plStack_128 = (long *)0x0;
    *(uint *)(puVar16 + 0x11) = uVar3;
    pbVar19 = param_3;
    FUN_108343308(param_3,1,*(undefined4 *)((long)puVar16 + 0xc));
    pbVar20 = param_3 + 0x18;
    FUN_108343308(pbVar20,1,(ulong)pbVar19 & 0xffffffff);
    FUN_108343308(pbVar26,4,(ulong)pbVar20 & 0xffffffff);
    param_3 = param_3 + 0x20;
    FUN_108343308(param_3,4,(ulong)pbVar26 & 0xffffffff);
    *(int *)((long)puVar16 + 0xc) = (int)param_3;
    func_0x000108395320();
    alStack_158[0] = 0;
    *param_1 = puVar16;
    param_1[1] = 0x1138270b0;
    FUN_108154c00(alStack_158);
    func_0x000108394d18(&plStack_128);
    FUN_1083680e4(&lStack_110);
    FUN_1083680a0(&uStack_f0);
  }
LAB_108394168:
  FUN_1083c50f0(auStack_d0);
  return;
}



/* Entry: 108394238; end: 108394277;  */

void FUN_108394238(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int unaff_w21;
  
  func_0x0001083951e4();
  uVar1 = 10;
  if (unaff_w21 == 0) {
    uVar1 = 7;
  }
  func_0x00010839522c(param_1,param_2,uVar1);
  func_0x0001083952c0();
  return;
}



/* Entry: 108394278; end: 1083942b7;  */

void FUN_108394278(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int unaff_w21;
  
  func_0x0001083951e4();
  uVar1 = 0xb;
  if (unaff_w21 == 0) {
    uVar1 = 8;
  }
  func_0x00010839522c(param_1,param_2,uVar1);
  func_0x0001083952c0();
  return;
}



/* Entry: 1083942b8; end: 1083942f7;  */

void FUN_1083942b8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int unaff_w21;
  
  func_0x0001083951e4();
  uVar1 = 0xc;
  if (unaff_w21 == 0) {
    uVar1 = 9;
  }
  func_0x00010839522c(param_1,param_2,uVar1);
  func_0x0001083952c0();
  return;
}



/* Entry: 1083942f8; end: 108394353;  */

undefined8 * FUN_1083942f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3faf8;
  func_0x000108394d18(param_1 + 0xe);
  FUN_1083680e4(param_1 + 0xb);
  FUN_1083680a0(param_1 + 8);
  FUN_108394ac4(param_1 + 5);
  FUN_108321198(param_1 + 4);
  FUN_1083a3c7c(param_1 + 3);
  return param_1;
}



/* Entry: 108394354; end: 108394357;  */

undefined8 * FUN_108394354(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3faf8;
  func_0x000108394d18(param_1 + 0xe);
  FUN_1083680e4(param_1 + 0xb);
  FUN_1083680a0(param_1 + 8);
  FUN_108394ac4(param_1 + 5);
  FUN_108321198(param_1 + 4);
  FUN_1083a3c7c(param_1 + 3);
  return param_1;
}



/* Entry: 108394358; end: 10839436b;  */

void FUN_108394358(void)

{
  FUN_1083942f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10839436c; end: 1083943ab;  */

ulong FUN_10839436c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x40) != lVar2) {
    lVar1 = lVar2 + -0x28;
    lVar2 = *(long *)(lVar2 + -0x18);
    FUN_1083931fc(lVar1);
    return lVar2 + lVar1 + 3U & 0xfffffffffffffffc;
  }
  return 0;
}



/* Entry: 1083943ac; end: 1083944e3;  */

long FUN_1083943ac(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x48);
  uVar2 = param_1;
  while ((lVar3 = lVar1, lVar4 != lVar1 && (func_0x000108395338(), lVar3 = lVar4, (uVar2 & 1) == 0))
        ) {
    lVar4 = lVar4 + 0x28;
  }
  lVar4 = 0;
  if (lVar3 != *(long *)(param_1 + 0x48)) {
    lVar4 = lVar3;
  }
  return lVar4;
}



/* Entry: 1083944e4; end: 108394527;  */

long FUN_1083944e4(long param_1)

{
  *(long *)(param_1 + 0x20) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0x800000000;
  FUN_108393a2c(param_1 + 0x20);
  return param_1;
}



/* Entry: 108394528; end: 1083945d7;  */

void FUN_108394528(ulong param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  uint extraout_w8;
  long lVar2;
  int extraout_w10;
  undefined8 *unaff_x19;
  ulong uVar3;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 auStack_50 [16];
  
  func_0x000108395390();
  if (((extraout_w8 >> 2 & 1) != 0) && (uVar1 = param_1, func_0x00010839523c(), (uVar1 & 1) != 0)) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      func_0x0001083953c4();
      FUN_1082f63fc(param_2,uStack_58);
      lVar2 = *param_2;
    }
    uVar3 = *(ulong *)(lVar2 + 0x20);
    uVar1 = param_1;
    FUN_10839436c();
    if (uVar3 == uVar1) {
      do {
        func_0x000108395214();
      } while (extraout_w10 != 0);
      uStack_60 = 0;
      uStack_58 = param_1;
      FUN_1083945d8(param_5,&uStack_58,&uStack_60,param_2,auStack_50);
      func_0x000108395260();
      return;
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1083945d8; end: 108394647;  */

void FUN_1083945d8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_108394e34(&uStack_28,param_3,param_4,param_5,param_6);
  uVar1 = uStack_28;
  if (param_2 == 0) {
    uStack_28 = 0;
    *param_1 = uVar1;
  }
  else {
    FUN_1083be074(param_1,uStack_28,param_2);
  }
  FUN_108394df4(&uStack_28);
  return;
}



/* Entry: 108394648; end: 10839472b;  */

long * FUN_108394648(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined1 auStack_78 [32];
  long lStack_58;
  int iStack_50;
  undefined8 uStack_48;
  
  plVar4 = &lStack_80;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1083944e4(auStack_78,param_5);
  for (; param_5 != 0; param_5 = param_5 + -1) {
    FUN_10839472c(&lStack_58,param_4);
    param_4 = param_4 + 8;
  }
  lStack_80 = *param_3;
  *param_3 = 0;
  FUN_108394808(param_1,param_2,&lStack_80,lStack_58,(long)iStack_50);
  func_0x00010839527c();
  plVar1 = &lStack_58;
  FUN_108367f60();
  func_0x000108395404(uStack_48);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x00010839527c();
  plVar2 = &lStack_58;
  FUN_108367f60();
  func_0x000108395224();
  pcStack_88 = FUN_10839472c;
  puStack_c0 = auStack_78;
  lStack_b8 = param_4;
  plStack_a8 = param_3;
  uStack_a0 = param_1;
  plStack_98 = plVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((int)plVar2[1] < (int)(*(uint *)((long)plVar2 + 0xc) >> 1)) {
    plVar1 = (long *)(*plVar2 + (long)(int)plVar2[1] * 8);
    lVar6 = 0;
    lStack_b0 = 0;
    if (*plVar4 != 0) {
      do {
        func_0x0001083951fc();
        lVar6 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_d0 = 0;
    *plVar1 = lVar6;
    FUN_108115b2c(&uStack_d0);
  }
  else {
    uVar5 = 1;
    plVar3 = plVar2;
    lStack_b0 = param_5;
    FUN_1083683f0(0x3ff8000000000000,plVar2,1);
    plVar1 = plVar3 + (int)plVar2[1];
    lVar6 = 0;
    if (*plVar4 != 0) {
      do {
        func_0x0001083951fc();
        lVar6 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_c8 = 0;
    *plVar1 = lVar6;
    FUN_108115b2c(&uStack_c8);
    FUN_1083683a4(plVar2,plVar3,uVar5);
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  return plVar1;
}



/* Entry: 10839472c; end: 108394807;  */

long * FUN_10839472c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar4 = (long *)(*param_1 + (long)(int)param_1[1] * 8);
    lVar3 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001083951fc();
        lVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_50 = 0;
    *plVar4 = lVar3;
    FUN_108115b2c(&uStack_50);
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1083683f0(0x3ff8000000000000,param_1,1);
    plVar4 = plVar1 + (int)param_1[1];
    lVar3 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001083951fc();
        lVar3 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    uStack_48 = 0;
    *plVar4 = lVar3;
    FUN_108115b2c(&uStack_48);
    FUN_1083683a4(param_1,plVar1,uVar2);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return plVar4;
}



/* Entry: 108394808; end: 10839488f;  */

void FUN_108394808(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long lVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x000108395390();
  if ((extraout_w8 >> 1 & 1) != 0) {
    func_0x0001083953ac();
    func_0x00010839523c();
    if ((uVar1 & 1) != 0) {
      lVar3 = *unaff_x20;
      if (lVar3 == 0) {
        func_0x0001083953c4();
        func_0x0001083953b8();
        lVar3 = *unaff_x20;
      }
      func_0x0001083953e4(lVar3);
      if (unaff_x22 == CONCAT44(uVar2,uVar1)) {
        do {
          func_0x000108395214();
        } while (extraout_w10 != 0);
        func_0x00010839542c();
        FUN_108394890();
        func_0x000108395418();
        FUN_108394ed4();
        func_0x000108395378();
        return;
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 108394890; end: 1083948e3;  */

void FUN_108394890(undefined8 param_1)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000108395284();
  func_0x0001083952f8();
  FUN_1083ae2cc(param_1,auStack_48,auStack_50);
  *unaff_x20 = unaff_x19;
  func_0x00010839527c();
  func_0x000108395260();
  return;
}



/* Entry: 1083948e4; end: 108394927;  */

void FUN_1083948e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  FUN_108394808(param_1,&uStack_28,0,0);
  func_0x0001083952c8();
  return;
}



/* Entry: 108394928; end: 1083949af;  */

void FUN_108394928(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long lVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x000108395390();
  if ((extraout_w8 >> 3 & 1) != 0) {
    func_0x0001083953ac();
    func_0x00010839523c();
    if ((uVar1 & 1) != 0) {
      lVar3 = *unaff_x20;
      if (lVar3 == 0) {
        func_0x0001083953c4();
        func_0x0001083953b8();
        lVar3 = *unaff_x20;
      }
      func_0x0001083953e4(lVar3);
      if (unaff_x22 == CONCAT44(uVar2,uVar1)) {
        do {
          func_0x000108395214();
        } while (extraout_w10 != 0);
        func_0x00010839542c();
        FUN_1083949b0();
        func_0x000108395418();
        FUN_108395184();
        func_0x000108395378();
        return;
      }
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1083949b0; end: 108394a03;  */

void FUN_1083949b0(undefined8 param_1)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000108395284();
  func_0x0001083952f8();
  FUN_108394f14(param_1,auStack_48,auStack_50);
  *unaff_x20 = unaff_x19;
  func_0x00010839527c();
  func_0x000108395260();
  return;
}



/* Entry: 108394a04; end: 108394a67;  */

void FUN_108394a04(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piStack_28;
  
  uVar3 = *param_1;
  piStack_28 = (int *)param_1[1];
  if (piStack_28 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_28,0x10);
      if (bVar2) {
        *piStack_28 = *piStack_28 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_108394528(uVar3,&piStack_28,param_1[2],(long)(param_1[3] - param_1[2]) >> 3,param_2);
  func_0x0001083952c8();
  return;
}



/* Entry: 108394a68; end: 108394ac3;  */

void FUN_108394a68(void)

{
  return;
}



/* Entry: 108394ac4; end: 108394ae7;  */

undefined8 FUN_108394ac4(undefined8 param_1)

{
  FUN_108394ae8(param_1,0);
  return param_1;
}



/* Entry: 108394ae8; end: 108394aff;  */

void FUN_108394ae8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083fabf8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108394b00; end: 108394b1b;  */

void FUN_108394b00(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083fabf8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108394b1c; end: 108394bcf;  */

undefined8 * FUN_108394b1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a47220;
  func_0x000108394b7c(param_1 + 0x12);
  func_0x000107c278a8(param_1 + 0xf);
  func_0x000108394bac(param_1 + 0xc);
  FUN_108394be8(param_1 + 9);
  func_0x000108394c80(param_1 + 6);
  func_0x000108394c80(param_1 + 3);
  return param_1;
}



/* Entry: 108394bd0; end: 108394be7;  */

void FUN_108394bd0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108394be8; end: 108394c43;  */

void FUN_108394be8(void)

{
  func_0x000108395380();
  func_0x000108394c0c();
  return;
}



/* Entry: 108394c44; end: 108394c4b;  */

void FUN_108394c44(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001083953a0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108394c4c; end: 108394cdb;  */

void FUN_108394c4c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001083953a0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108394cdc; end: 108394ce3;  */

void FUN_108394cdc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001083953a0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108394ce4; end: 108394d3f;  */

void FUN_108394ce4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001083953a0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108394d40; end: 108394d6f;  */

void FUN_108394d40(undefined8 param_1,undefined8 param_2)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  func_0x0001083953cc(param_2,8);
  return;
}



/* Entry: 108394d70; end: 108394db3;  */

long * FUN_108394d70(long *param_1)

{
  long *plVar1;
  long lVar2;
  
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



/* Entry: 108394db4; end: 108394df3;  */

void FUN_108394db4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108395270();
  if (param_1 != 0) {
    do {
      func_0x0001083953f8();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108395440();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108394df4; end: 108394e33;  */

void FUN_108394df4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108395270();
  if (param_1 != 0) {
    do {
      func_0x0001083953f8();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108395440();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108394e34; end: 108394ed3;  */

void FUN_108394e34(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0x60;
  __Znwm();
  uStack_48 = *param_2;
  *param_2 = 0;
  uStack_50 = 0;
  *param_4 = 0;
  FUN_1083bdc20();
  *param_1 = uVar1;
  func_0x0001083952c8();
  FUN_108394db4(&uStack_50);
  FUN_108154c00(&uStack_48);
  return;
}



/* Entry: 108394ed4; end: 108394f13;  */

void FUN_108394ed4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108395270();
  if (param_1 != 0) {
    do {
      func_0x0001083953f8();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108395440();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108394f14; end: 108394f9b;  */

undefined8 *
FUN_108394f14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a3fa90;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[2] = uVar1;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[3] = uVar1;
  FUN_108394f9c(param_1 + 4,param_4,param_4 + param_5 * 8);
  return param_1;
}



/* Entry: 108394f9c; end: 108394fcb;  */

undefined8 * FUN_108394f9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108394fcc();
  return param_1;
}



/* Entry: 108394fcc; end: 10839503f;  */

void FUN_108394fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_108165e40(param_1,param_4);
    FUN_108395040(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_108165eec(&uStack_40);
  return;
}



/* Entry: 108395040; end: 108395073;  */

void FUN_108395040(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_108395074();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 108395074; end: 108395087;  */

void FUN_108395074(void)

{
  FUN_108395088();
  return;
}



/* Entry: 108395088; end: 108395103;  */

undefined8 * FUN_108395088(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; puStack_28 = param_4, param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x0001083951fc();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_4 = uVar1;
    param_4 = param_4 + 1;
  }
  uStack_38 = 1;
  FUN_108395104(&uStack_50);
  return param_4;
}



/* Entry: 108395104; end: 108395133;  */

long FUN_108395104(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108395134(param_1);
  }
  return param_1;
}



/* Entry: 108395134; end: 108395153;  */

void FUN_108395134(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108165f8c();
  }
  return;
}



/* Entry: 108395154; end: 108395183;  */

void FUN_108395154(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    FUN_108165f8c();
  }
  return;
}



/* Entry: 108395184; end: 1083951c3;  */

void FUN_108395184(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108395270();
  if (param_1 != 0) {
    do {
      func_0x0001083953f8();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108395440();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1083951c4; end: 1083954f3;  */

void FUN_1083951c4(void)

{
  long *unaff_x23;
  
                    /* WARNING: Could not recover jumptable at 0x0001083951d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x23 + 0x38))();
  return;
}



/* Entry: 1083954f4; end: 1083955cb;  */

void FUN_1083954f4(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_108346830(param_4,0x73726563,0);
  uVar5 = param_4[3];
  uVar4 = param_4[2];
  uVar3 = param_4[5];
  uVar2 = param_4[4];
  uVar7 = param_4[1];
  uVar6 = *param_4;
  param_1[6] = param_4[6];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  (**(code **)(*param_2 + 0x48))(param_2,param_1);
  if (*(long *)(param_3 + 8) == 0) {
    uVar1 = *(uint *)((long)param_1 + 0x2c);
  }
  else {
    uVar1 = 0xff000000;
    *(undefined4 *)((long)param_1 + 0x2c) = 0xff000000;
    *(undefined1 *)(param_1 + 6) = 0x40;
    *(undefined1 *)((long)param_1 + 0x32) = 0;
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    uVar1 = (uVar1 & 0xff) * 0x13 + (uVar1 >> 0x10 & 0xff) * 0x36 + (uVar1 >> 8 & 0xff) * 0xb7;
    uVar1 = uVar1 & 0x1ff00 | (uVar1 >> 8) << 0x10 | uVar1 >> 8 | 0xff000000;
  }
  uVar1 = uVar1 | 0xff000000;
  FUN_10831a1bc();
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  return;
}



/* Entry: 1083955cc; end: 1083955f3;  */

void FUN_1083955cc(long param_1,uint param_2)

{
  param_2 = param_2 | 0xff000000;
  FUN_10831a1bc();
  *(uint *)(param_1 + 0x2c) = param_2;
  return;
}



/* Entry: 1083955f4; end: 1083956d7;  */

undefined8 * FUN_1083955f4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_110a3fce0;
  FUN_1083954f4(param_1 + 1,param_2,param_3,param_4);
  param_1[8] = param_2;
  lVar4 = *param_3;
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
  param_1[9] = lVar4;
  lVar4 = param_3[1];
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
  param_1[10] = lVar4;
  if (0.0 <= *(float *)(param_1 + 5)) {
    bVar3 = true;
  }
  else {
    bVar3 = param_1[9] != 0;
  }
  *(bool *)(param_1 + 0xb) = bVar3;
  if (lVar4 == 0) {
    FUN_1083956d8(param_1 + 0xc,param_1 + 1);
  }
  else {
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
  }
  return param_1;
}



/* Entry: 1083956d8; end: 108395737;  */

void FUN_1083956d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = param_2;
  FUN_1083958a4();
  uStack_28 = uVar1;
  func_0x0001081efc58();
  func_0x00010839594c(param_2);
  FUN_10839595c(param_1);
  FUN_1081efc78(&uStack_28);
  return;
}



/* Entry: 108395738; end: 10839577b;  */

undefined8 * FUN_108395738(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3fce0;
  FUN_10839775c(param_1 + 0xc);
  FUN_10810c718(param_1 + 10);
  func_0x000108115b70(param_1 + 9);
  return param_1;
}



/* Entry: 10839577c; end: 1083958a3;  */

long FUN_10839577c(uint param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_1083958a4();
  if ((param_1 == 0) && (param_2 == 0x40)) {
    iVar1 = 0x1372b2b8;
    lVar2 = 0x11372b2c0;
    if (((bRam000000011372b2b8 & 1) == 0) && (___cxa_guard_acquire(), iVar1 != 0)) {
      uRam000000011372b2c8 = 1;
      ppuRam000000011372b2c0 = &PTR_FUN_110a3fd38;
      uRam000000011372b2d0 = 0;
      ___cxa_guard_release(0x11372b2b8);
      lVar2 = 0x11372b2c0;
    }
  }
  else if ((param_1 == 0x80) && (param_2 == 0)) {
    lVar2 = lRam000000011372b2a8;
    if (lRam000000011372b2a8 == 0) {
      lVar2 = 0x18;
      __Znwm();
      FUN_1083977a8(0x3f008081,0);
      lRam000000011372b2a8 = lVar2;
    }
  }
  else {
    lVar2 = lRam000000011372b2b0;
    if ((lRam000000011372b2b0 == 0 || bRam000000011372b2a0 != param_1) ||
        bRam000000011372b2a1 != param_2) {
      FUN_108395920(lRam000000011372b2b0);
      lVar2 = 0x18;
      __Znwm();
      FUN_1083977a8((float)param_1 / 255.0,(float)param_2 / 64.0);
      bRam000000011372b2a0 = (byte)param_1;
      bRam000000011372b2a1 = (byte)param_2;
      lRam000000011372b2b0 = lVar2;
    }
  }
  return lVar2;
}



/* Entry: 1083958a4; end: 10839591f;  */

undefined4 * FUN_1083958a4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((bRam0000000113827098 & 1) == 0) {
    iVar1 = 0x13827098;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)0x10;
      __Znwm();
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      puRam0000000113827090 = puVar2;
      ___cxa_guard_release(0x113827098);
    }
  }
  return puRam0000000113827090;
}



/* Entry: 108395920; end: 10839595b;  */

void FUN_108395920(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000108395944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10839595c; end: 1083959db;  */

void FUN_10839595c(long *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar4 = *(long *)(param_2 + 0x10);
  if (lVar4 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_20 = 0;
    uStack_18 = 0;
    *param_1 = param_2;
    param_1[1] = lVar4 + (ulong)(param_3 >> 0xd & 0x700);
    param_1[2] = lVar4 + (ulong)(param_3 >> 5 & 0x700);
    param_1[3] = lVar4 + (ulong)((param_3 & 0xe0) << 3);
    FUN_10839775c(&uStack_18);
    FUN_108397884(&uStack_20);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1083959dc; end: 1083959eb;  */

void FUN_1083959dc(short *param_1,long *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 *puVar5;
  short *psVar6;
  short *psVar7;
  long *plVar8;
  uint extraout_w8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float in_s4;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  short *psStack_68;
  short *psStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  short asStack_48 [8];
  undefined1 uStack_38;
  short sStack_36;
  byte bStack_34;
  byte bStack_33;
  
  uVar2 = *(undefined1 *)((long)param_2 + 0x3c);
  psVar6 = (short *)&uStack_c0;
  param_1[0x15] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_3;
  *(undefined1 *)(param_1 + 0x14) = uVar2;
  (**(code **)(*param_2 + 0x10))(&uStack_50,param_2,param_1,param_4);
  *(undefined8 *)(param_1 + 0x10) = uStack_50;
  *(undefined1 *)(param_1 + 0x14) = uStack_38;
  param_1[0x15] = sStack_36;
  if (((bStack_33 & 1) == 0) && (((char)param_2[0xb] != '\x01' || ((bStack_34 & 1) != 0)))) {
    psVar6 = asStack_48;
    FUN_108395d30(param_1);
    psStack_60 = psVar6;
    if (bStack_34 == 1) {
      func_0x000108353cc4(param_1,param_4,0,0,0);
      psStack_60 = param_4;
    }
  }
  else {
    psVar7 = param_1;
    FUN_108395df4(param_2,param_1,param_4);
    lVar10 = *(long *)(param_1 + 8);
    psStack_60 = psVar7;
    if (*(char *)(lVar10 + 0x18) == '\x01') {
      bVar3 = *(byte *)(lVar10 + 0x19);
      if ((4 < *(byte *)(param_1 + 0x14)) ||
         ((1 << (ulong)(*(byte *)(param_1 + 0x14) & 0x1f) & 0x13U) == 0)) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      uVar4 = *(ushort *)((long)param_2 + 0x3e);
      puVar5 = (undefined8 *)(lVar10 + 8);
      func_0x0001083773e0();
      uVar13 = *puVar5;
      fStack_b8 = (float)puVar5[1];
      fStack_b4 = (float)((ulong)puVar5[1] >> 0x20);
      uStack_c0._0_4_ = (float)uVar13;
      if (((float)uStack_c0 < fStack_b8) &&
         (uStack_c0._4_4_ = (float)((ulong)uVar13 >> 0x20), uStack_c0._4_4_ < fStack_b4)) {
        uVar9 = 1;
        if ((char)param_1[0x14] != '\x04') {
          uVar9 = (uint)((char)param_1[0x14] == '\x01') & (uint)(uVar4 >> 0xb);
        }
        uVar1 = 0;
        if ((uVar4 & 0x200) == 0) {
          uVar1 = uVar9;
        }
        uVar9 = uVar9 & uVar4 >> 9 | (uint)bVar3;
        fVar12 = uStack_c0._4_4_;
        if ((uVar1 != 0) || (fVar14 = (float)uStack_c0, bVar3 != 0)) {
          fVar14 = (float)uStack_c0;
          uStack_c0 = uVar13;
          func_0x00010839794c();
          fVar14 = fVar14 + in_s4;
          uStack_c0 = CONCAT44(fVar12,fVar14);
          fStack_b8 = fStack_b8 + 1.0;
          in_s4 = 0.0;
          fStack_b4 = fStack_b4 + 0.0;
          uVar13 = uStack_c0;
          uVar9 = extraout_w8;
        }
        uStack_c0 = uVar13;
        uVar13 = uStack_c0;
        if (uVar9 != 0) {
          func_0x00010839794c();
          uStack_c0 = CONCAT44(fVar12 + in_s4,fVar14);
          fStack_b8 = fStack_b8 + 0.0;
          fStack_b4 = fStack_b4 + 1.0;
          uVar13 = uStack_c0;
        }
      }
      uStack_c0 = uVar13;
      FUN_108395d30(param_1);
      psStack_60 = psVar6;
    }
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_2[10] == 0) {
      return;
    }
    psVar6 = param_1;
    FUN_1083960cc();
    psVar7 = param_1;
    FUN_10835399c();
    uStack_c0 = param_2[3];
    uStack_54 = (undefined1)param_1[0x14];
    uStack_70 = 0;
    uStack_58 = SUB84(psVar7,0);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    iStack_80 = 0;
    iStack_7c = 0;
    fStack_b8 = 0.0;
    fStack_b4 = (float)param_2[4];
    uStack_b0 = (undefined4)((ulong)param_2[4] >> 0x20);
    uStack_a4 = 0x3f80000000000000;
    uStack_ac = 0;
    uStack_9c = 0x80;
    plVar8 = (long *)param_2[10];
    psStack_68 = psVar6;
    (**(code **)(*plVar8 + 0x40))(plVar8,&uStack_90,&uStack_70,&uStack_c0,0);
    if ((int)plVar8 == 0) {
      return;
    }
    iVar11 = (int)&uStack_88;
    FUN_10821a6d8();
    if (iVar11 == 0) {
      if ((int)uStack_88 < 0x7fff) {
        iVar11 = (int)uStack_88;
        if ((int)uStack_88 < -0x7fff) {
          iVar11 = 0x8000;
        }
      }
      else {
        iVar11 = 0x7fff;
      }
      param_1[3] = (short)iVar11;
      if (uStack_88._4_4_ < 0x7fff) {
        iVar11 = uStack_88._4_4_;
        if (uStack_88._4_4_ < -0x7fff) {
          iVar11 = 0x8000;
        }
      }
      else {
        iVar11 = 0x7fff;
      }
      param_1[2] = (short)iVar11;
      lVar10 = (long)iStack_80 - (long)(int)uStack_88;
      if (lVar10 < 0xffff) {
        if (lVar10 < 1) {
          lVar10 = 0;
        }
      }
      else {
        lVar10 = 0xffff;
      }
      *param_1 = (short)lVar10;
      lVar10 = (long)iStack_7c - (long)uStack_88._4_4_;
      if (lVar10 < 0xffff) {
        if (lVar10 < 1) {
          lVar10 = 0;
        }
      }
      else {
        lVar10 = 0xffff;
      }
      param_1[1] = (short)lVar10;
      *(undefined1 *)(param_1 + 0x14) = uStack_74;
      return;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1083959ec; end: 108395d2f;  */

void FUN_1083959ec(short *param_1,long *param_2,undefined4 param_3,undefined1 param_4,short *param_5
                  )

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 *puVar4;
  short *psVar5;
  short *psVar6;
  long *plVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float in_s4;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  short *psStack_68;
  short *psStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  short asStack_48 [8];
  undefined1 uStack_38;
  short sStack_36;
  byte bStack_34;
  byte bStack_33;
  
  psVar5 = (short *)&uStack_c0;
  param_1[0x15] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_3;
  *(undefined1 *)(param_1 + 0x14) = param_4;
  (**(code **)(*param_2 + 0x10))(&uStack_50,param_2,param_1,param_5);
  *(undefined8 *)(param_1 + 0x10) = uStack_50;
  *(undefined1 *)(param_1 + 0x14) = uStack_38;
  param_1[0x15] = sStack_36;
  if (((bStack_33 & 1) == 0) && (((char)param_2[0xb] != '\x01' || ((bStack_34 & 1) != 0)))) {
    psVar5 = asStack_48;
    FUN_108395d30(param_1);
    psStack_60 = psVar5;
    if (bStack_34 == 1) {
      func_0x000108353cc4(param_1,param_5,0,0,0);
      psStack_60 = param_5;
    }
  }
  else {
    psVar6 = param_1;
    FUN_108395df4(param_2,param_1,param_5);
    lVar9 = *(long *)(param_1 + 8);
    psStack_60 = psVar6;
    if (*(char *)(lVar9 + 0x18) == '\x01') {
      bVar2 = *(byte *)(lVar9 + 0x19);
      if ((4 < *(byte *)(param_1 + 0x14)) ||
         ((1 << (ulong)(*(byte *)(param_1 + 0x14) & 0x1f) & 0x13U) == 0)) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      uVar3 = *(ushort *)((long)param_2 + 0x3e);
      puVar4 = (undefined8 *)(lVar9 + 8);
      func_0x0001083773e0();
      uVar12 = *puVar4;
      fStack_b8 = (float)puVar4[1];
      fStack_b4 = (float)((ulong)puVar4[1] >> 0x20);
      uStack_c0._0_4_ = (float)uVar12;
      if (((float)uStack_c0 < fStack_b8) &&
         (uStack_c0._4_4_ = (float)((ulong)uVar12 >> 0x20), uStack_c0._4_4_ < fStack_b4)) {
        uVar8 = 1;
        if ((char)param_1[0x14] != '\x04') {
          uVar8 = (uint)((char)param_1[0x14] == '\x01') & (uint)(uVar3 >> 0xb);
        }
        uVar1 = 0;
        if ((uVar3 & 0x200) == 0) {
          uVar1 = uVar8;
        }
        uVar8 = uVar8 & uVar3 >> 9 | (uint)bVar2;
        fVar11 = uStack_c0._4_4_;
        if ((uVar1 != 0) || (fVar13 = (float)uStack_c0, bVar2 != 0)) {
          fVar13 = (float)uStack_c0;
          uStack_c0 = uVar12;
          func_0x00010839794c();
          fVar13 = fVar13 + in_s4;
          uStack_c0 = CONCAT44(fVar11,fVar13);
          fStack_b8 = fStack_b8 + 1.0;
          in_s4 = 0.0;
          fStack_b4 = fStack_b4 + 0.0;
          uVar12 = uStack_c0;
          uVar8 = extraout_w8;
        }
        uStack_c0 = uVar12;
        uVar12 = uStack_c0;
        if (uVar8 != 0) {
          func_0x00010839794c();
          uStack_c0 = CONCAT44(fVar11 + in_s4,fVar13);
          fStack_b8 = fStack_b8 + 0.0;
          fStack_b4 = fStack_b4 + 1.0;
          uVar12 = uStack_c0;
        }
      }
      uStack_c0 = uVar12;
      FUN_108395d30(param_1);
      psStack_60 = psVar5;
    }
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_2[10] == 0) {
      return;
    }
    psVar5 = param_1;
    FUN_1083960cc();
    psVar6 = param_1;
    FUN_10835399c();
    uStack_c0 = param_2[3];
    uStack_54 = (undefined1)param_1[0x14];
    uStack_70 = 0;
    uStack_58 = SUB84(psVar6,0);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    iStack_80 = 0;
    iStack_7c = 0;
    fStack_b8 = 0.0;
    fStack_b4 = (float)param_2[4];
    uStack_b0 = (undefined4)((ulong)param_2[4] >> 0x20);
    uStack_a4 = 0x3f80000000000000;
    uStack_ac = 0;
    uStack_9c = 0x80;
    plVar7 = (long *)param_2[10];
    psStack_68 = psVar5;
    (**(code **)(*plVar7 + 0x40))(plVar7,&uStack_90,&uStack_70,&uStack_c0,0);
    if ((int)plVar7 == 0) {
      return;
    }
    iVar10 = (int)&uStack_88;
    FUN_10821a6d8();
    if (iVar10 == 0) {
      if ((int)uStack_88 < 0x7fff) {
        iVar10 = (int)uStack_88;
        if ((int)uStack_88 < -0x7fff) {
          iVar10 = 0x8000;
        }
      }
      else {
        iVar10 = 0x7fff;
      }
      param_1[3] = (short)iVar10;
      if (uStack_88._4_4_ < 0x7fff) {
        iVar10 = uStack_88._4_4_;
        if (uStack_88._4_4_ < -0x7fff) {
          iVar10 = 0x8000;
        }
      }
      else {
        iVar10 = 0x7fff;
      }
      param_1[2] = (short)iVar10;
      lVar9 = (long)iStack_80 - (long)(int)uStack_88;
      if (lVar9 < 0xffff) {
        if (lVar9 < 1) {
          lVar9 = 0;
        }
      }
      else {
        lVar9 = 0xffff;
      }
      *param_1 = (short)lVar9;
      lVar9 = (long)iStack_7c - (long)uStack_88._4_4_;
      if (lVar9 < 0xffff) {
        if (lVar9 < 1) {
          lVar9 = 0;
        }
      }
      else {
        lVar9 = 0xffff;
      }
      param_1[1] = (short)lVar9;
      *(undefined1 *)(param_1 + 0x14) = uStack_74;
      return;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 108395d30; end: 108395dab;  */

void FUN_108395d30(undefined2 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = SUB82(param_1,0);
  fVar2 = (float)(int)(float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)(int)(float)((ulong)param_2[1] >> 0x20);
  *param_2 = CONCAT44(fVar2,(int)(float)*param_2);
  param_2[1] = CONCAT44(fVar3,(int)(float)param_2[1]);
  FUN_108395dac();
  param_1[3] = uVar1;
  FUN_108395dac(fVar2);
  param_1[2] = uVar1;
  func_0x000108395dd0();
  *param_1 = uVar1;
  func_0x000108395dd0(fVar3 - fVar2);
  param_1[1] = uVar1;
  return;
}



/* Entry: 108395dac; end: 108395df3;  */

int FUN_108395dac(float param_1)

{
  float fVar1;
  
  fVar1 = 32767.0;
  if ((param_1 < 32767.0) && (fVar1 = param_1, param_1 <= -32768.0)) {
    fVar1 = -32768.0;
  }
  return (int)fVar1;
}



/* Entry: 108395df4; end: 1083960cb;  */

void FUN_108395df4(long *param_1,long param_2,undefined8 param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  undefined4 uStack_88;
  long lStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 auStack_68 [2];
  undefined1 uStack_51;
  undefined8 auStack_50 [2];
  undefined8 auStack_40 [2];
  
  if (*(long *)(param_2 + 0x10) != 0) {
    return;
  }
  FUN_108376ad8(auStack_40);
  FUN_108376ad8(auStack_50);
  uStack_51 = 0;
  uVar6 = *(uint *)(param_2 + 0x2c);
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,auStack_40,&uStack_51);
  if (((ulong)plVar4 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if ((*(ushort *)((long)param_1 + 0x3e) >> 4 & 1) != 0) {
      uVar2 = uVar6 & 3;
      uVar6 = uVar6 >> 4 & 0xc000;
      if (uVar2 != 0 || uVar6 != 0) {
        uStack_51 = 1;
        FUN_108379680((float)(uVar2 << 0xe) / 65536.0,(float)uVar6 / 65536.0,auStack_40,auStack_40);
      }
    }
    if ((0.0 <= *(float *)(param_1 + 5)) || (param_1[9] != 0)) {
      uStack_51 = 1;
      FUN_108376ad8(auStack_68);
      uStack_b8 = 0;
      uStack_c0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0x3f800000;
      lStack_90 = param_1[3];
      lStack_84 = param_1[4];
      uStack_a0 = 0x103f800000;
      uStack_88 = 0;
      uStack_74 = 0x3f80000000000000;
      uStack_7c = 0;
      uStack_6c = 0x80;
      plVar4 = &lStack_90;
      FUN_10818cfd0(plVar4,&uStack_c0);
      if (((ulong)plVar4 & 1) == 0) {
        func_0x000108353cc4(param_2,param_3,auStack_50,0,uStack_51);
      }
      FUN_1083796e4(auStack_40,&uStack_c0,auStack_68,1);
      uStack_d0 = (double)NEON_fmov(0x3f800000,4);
      uStack_d0 = -uStack_d0;
      uStack_c8 = 0x40800000;
      fVar9 = *(float *)(param_1 + 5);
      if (0.0 <= fVar9) {
        uVar6 = 0;
        if (fVar9 != 0.0) {
          uVar6 = 0x80000000;
        }
        if ((*(ushort *)((long)param_1 + 0x3e) & 1) == 0) {
          uVar6 = 0;
        }
        fVar1 = -1.0;
        if ((*(ushort *)((long)param_1 + 0x3e) & 1 & (ushort)(fVar9 == 0.0)) == 0) {
          fVar1 = fVar9;
        }
        uStack_d0 = (double)CONCAT44(fVar1,SUB84(uStack_d0,0));
        uStack_c8 = CONCAT44((uint)(*(byte *)((long)param_1 + 0x3d) >> 4) |
                             (*(byte *)((long)param_1 + 0x3d) & 0xf) << 0x10 | uVar6,
                             *(undefined4 *)((long)param_1 + 0x2c));
      }
      if (param_1[9] != 0) {
        FUN_108376ad8(auStack_e0);
        lVar5 = param_1[9];
        FUN_10837dcb4(lVar5,auStack_e0,auStack_68,&uStack_d0,0,&lStack_90);
        if ((int)lVar5 != 0) {
          func_0x000108397980();
        }
        func_0x000108397970();
      }
      iVar3 = (int)&uStack_d0;
      FUN_1082b11ec();
      if (iVar3 != 0) {
        FUN_108376ad8(auStack_e0);
        puVar8 = &uStack_d0;
        FUN_1083a6340(puVar8,auStack_e0,auStack_68);
        if ((int)puVar8 != 0) {
          func_0x000108397980();
        }
        func_0x000108397970();
      }
      puVar7 = &uStack_d0;
      FUN_10828782c(puVar7);
      FUN_1083796e4(auStack_68,&lStack_90,auStack_50,1);
      FUN_10837ca5c(auStack_68[0]);
      puVar8 = auStack_50;
      goto LAB_108396028;
    }
    puVar8 = auStack_50;
    func_0x000108376c1c(auStack_50,auStack_40);
  }
  puVar7 = (undefined8 *)0x0;
LAB_108396028:
  func_0x000108353cc4(param_2,param_3,puVar8,puVar7,uStack_51);
  FUN_10837ca5c(auStack_50[0]);
  FUN_10837ca5c(auStack_40[0]);
  return;
}



/* Entry: 1083960cc; end: 1083960e3;  */

undefined1  [16] FUN_1083960cc(ushort *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (long)(int)(uint)*param_1 + (long)(int)(short)param_1[3];
  if ((long)uVar1 < -0x7ffffffe) {
    uVar1 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar1) {
    uVar1 = 0x7fffffff;
  }
  lVar2 = (long)(int)(uint)param_1[1] + (long)(int)(short)param_1[2];
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  auVar3._0_8_ = (long)CONCAT24(param_1[2],(int)(short)param_1[3]);
  auVar3._8_8_ = uVar1 & 0xffffffff | lVar2 << 0x20;
  return auVar3;
}



/* Entry: 1083960e4; end: 108396cb3;  */

void FUN_1083960e4(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte **ppbVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  code *extraout_x8;
  code *extraout_x8_00;
  ulong uVar21;
  undefined8 *extraout_x8_01;
  int iVar22;
  byte *pbVar23;
  long *plVar24;
  byte bVar25;
  uint uVar26;
  undefined8 uVar27;
  byte *pbVar28;
  uint uVar29;
  byte *pbVar30;
  long lVar31;
  byte *pbVar32;
  int iVar33;
  int *piVar34;
  long lVar35;
  double dVar36;
  undefined8 *puStack_2b0;
  long *plStack_2a8;
  byte *pbStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  int iStack_288;
  char cStack_284;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  byte bStack_258;
  undefined1 uStack_257;
  undefined2 uStack_256;
  undefined4 uStack_254;
  long alStack_250 [2];
  undefined8 uStack_240;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  int iStack_228;
  uint uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  ulong *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  byte *pbStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined1 uStack_176;
  undefined8 uStack_170;
  ulong uStack_168;
  float fStack_160;
  ulong uStack_15c;
  float fStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 auStack_140 [2];
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 auStack_d8 [4];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  uint uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_250[0] = 0;
  alStack_250[1] = 0;
  uStack_256 = 0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_25f = 0;
  bStack_258 = 0;
  uStack_267 = 0;
  uStack_260 = 0;
  uStack_254 = 0xffffffff;
  puVar14 = auStack_d8;
  FUN_10840f6d0(auStack_b8,puVar14,0x20,0x20);
  plStack_2a8 = param_2 + 1;
  pbVar1 = (byte *)(param_2 + 5);
  plVar24 = (long *)(param_1 + 0x50);
  lVar20 = *plVar24;
  pbVar28 = pbVar1;
  puStack_2b0 = param_2;
  if (lVar20 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    uStack_240._0_4_ = (undefined4)lVar20;
    uStack_240._4_4_ = (undefined4)((ulong)lVar20 >> 0x20);
    FUN_1083959dc(&uStack_130,param_1,*(undefined4 *)((long)param_2 + 0x2c),auStack_b8);
    uStack_270 = CONCAT44(uStack_11c,uStack_120);
    uStack_280 = uStack_130;
    uStack_268 = (undefined1)uStack_118;
    uStack_267 = (undefined7)(CONCAT44(uStack_114,uStack_118) >> 8);
    bStack_258 = (byte)uStack_108;
    uStack_257 = (undefined1)((uint)uStack_108 >> 8);
    uStack_256 = (undefined2)((uint)uStack_108 >> 0x10);
    uStack_254 = uStack_104;
    uStack_260 = (undefined1)uStack_110;
    uStack_25f = (undefined7)(CONCAT44(uStack_10c,uStack_110) >> 8);
    puVar14 = (undefined8 *)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
    uStack_240._0_4_ = 0;
    uStack_240._4_4_ = 0;
    func_0x00010837656c(plVar24);
    if (bStack_258 == *pbVar1) {
      puVar10 = &uStack_280;
      FUN_108353adc();
      puVar11 = param_2;
      FUN_108353adc();
      if (puVar11 < puVar10) goto LAB_1083961dc;
    }
    else {
LAB_1083961dc:
      puVar14 = &uStack_280;
      FUN_108353adc();
      plStack_2a8 = alStack_250;
      FUN_1082b5c24(alStack_250,puVar14,0);
    }
    lStack_278 = *plStack_2a8;
    FUN_10810c718(&uStack_240);
    puStack_2b0 = &uStack_280;
    pbVar28 = &bStack_258;
    plStack_2a8 = (long *)((ulong)&uStack_280 | 8);
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    func_0x0001083979b0();
    (*extraout_x8)(param_1);
  }
  else {
    lVar20 = param_2[2];
    if ((*(byte *)(lVar20 + 0x18) & 1) == 0) {
      func_0x0001083979b0();
      (*extraout_x8_00)(param_1);
    }
    else {
      pbVar30 = (byte *)*plStack_2a8;
      puVar10 = puStack_2b0;
      FUN_1083960cc();
      puVar11 = puStack_2b0;
      FUN_10835399c();
      cVar4 = *(char *)(puStack_2b0 + 5);
      bVar25 = *(byte *)(param_2[2] + 0x19);
      uVar5 = *(ushort *)(param_1 + 0x3e);
      uStack_fc = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_130 = 0;
      uStack_f4 = 0x3f800000;
      uStack_ec = 0x40800000;
      pbStack_2a0 = pbVar30;
      uStack_298 = puVar10;
      uStack_290 = puVar14;
      iStack_288 = (int)puVar11;
      cStack_284 = cVar4;
      FUN_108376ad8(auStack_140);
      pbVar28 = (byte *)(lVar20 + 8);
      iVar33 = (int)puVar10;
      uStack_238 = (int)puVar14 - iVar33;
      iVar22 = (int)((ulong)puVar10 >> 0x20);
      uVar29 = (int)((ulong)puVar14 >> 0x20) - iVar22;
      fStack_160 = -(float)iVar33;
      fStack_154 = -(float)iVar22;
      uStack_144 = 0x10;
      if (iVar22 != 0 || iVar33 != 0) {
        uStack_144 = 0x11;
      }
      uStack_168 = 0x3f800000;
      uStack_15c = 0x3f80000000000000;
      uStack_150 = 0;
      uStack_148 = 0x3f800000;
      uVar18 = 0x40;
      if (bVar25 == 0) {
        uVar18 = 0;
      }
      if (cVar4 != '\0') {
        uVar18 = uVar18 + 1;
      }
      uStack_ec = CONCAT44(uVar18 | uStack_ec._4_4_ & 0xffffff3e,(undefined4)uStack_ec);
      if ((cVar4 == '\x04') ||
         ((bVar9 = cVar4 == '\0', cVar4 == '\x01' && ((uVar5 >> 0xb & 1) != 0)))) {
        bVar9 = (uVar5 & 0x200) == 0;
        uVar21 = CONCAT44(-(uint)((int)((uint)bVar9 << 0x1f) < 0),
                          -(uint)((int)((uint)bVar9 << 0x1f) < 0));
        uStack_168 = uVar21 & 0x4080000040800000 ^ 0x4080000000000000;
        uStack_15c = ~uVar21 & 0x3f8000003f800000 ^ 0x3f80000000000000;
        iVar6 = iVar22;
        uVar26 = uVar29;
        uVar18 = uStack_238;
        if (!bVar9) {
          iVar6 = iVar33;
          uVar26 = uStack_238;
          uVar18 = uVar29;
        }
        uVar29 = uVar26;
        fStack_154 = -(float)iVar6;
        if (!bVar9) {
          iVar33 = iVar22;
        }
        fStack_160 = (float)(iVar33 + 1) * -4.0;
        uStack_144 = 0x80;
        dVar36 = (double)NEON_fmov(0x3f800000,4);
        uStack_240._0_4_ = SUB84(-dVar36,0);
        uStack_240._4_4_ = (undefined4)((ulong)-dVar36 >> 0x20);
        uStack_238 = 0x40800000;
        uStack_234 = 0;
        if ((bVar25 & 1) != 0) {
          uStack_234 = 0x10000;
          uStack_240._4_4_ = 0x3f800000;
          uStack_238 = 0;
        }
        iVar33 = (int)&uStack_240;
        FUN_1082b11ec();
        if (iVar33 != 0) {
          puVar14 = &uStack_240;
          FUN_1083a6340(puVar14,auStack_140,pbVar28);
          if ((int)puVar14 != 0) {
            uStack_ec = uStack_ec & 0xffffff3fffffffff;
            pbVar28 = (byte *)auStack_140;
          }
        }
        uStack_238 = uVar18 * 4 - 8;
        bVar9 = true;
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0xffffffffffffffff;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_170 = 0;
      uStack_178 = 0x101;
      uStack_176 = 0;
      uVar27 = CONCAT44(uVar29,uStack_238);
      uStack_240._0_4_ = 0;
      uStack_240._4_4_ = 0;
      uStack_234 = uVar29;
      func_0x000108386f34(&uStack_1a8,&uStack_240);
      uStack_1c0 = 0;
      uStack_1b8 = 0x200000001;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1e8 = 0;
      pbStack_1f0 = (byte *)0x0;
      uStack_1b0 = uVar27;
      if (bVar9) {
        ppbVar12 = &pbStack_1f0;
        FUN_10832ff5c(ppbVar12,&uStack_1c0);
        if (((ulong)ppbVar12 & 1) != 0) goto LAB_108396520;
        ppbVar12 = &pbStack_2a0;
        func_0x0001083601b4();
        if (ppbVar12 != (byte **)0x0) {
          _bzero(pbVar30,ppbVar12);
        }
      }
      else {
        FUN_10831f928(&pbStack_1f0,&uStack_1c0,pbVar30,puVar11);
LAB_108396520:
        pbVar23 = pbStack_1f0;
        ppbVar12 = &pbStack_1f0;
        FUN_10821a8d8();
        if (ppbVar12 != (byte **)0x0) {
          _bzero(pbVar23);
        }
        uStack_240._0_4_ = 0x10a3e608;
        uStack_240._4_4_ = 1;
        uStack_218 = 0;
        uStack_230 = 0;
        uStack_22c = 0;
        uStack_238 = 0;
        uStack_234 = 0;
        uStack_220 = 0;
        iStack_228 = 0;
        uStack_224 = 0;
        puStack_200 = (undefined8 *)0x0;
        puStack_208 = (ulong *)0x0;
        uStack_1f8 = 0;
        pcStack_210 = FUN_1083366e0;
        FUN_1082b0634(&uStack_238,&pbStack_1f0);
        puStack_200 = &uStack_1a8;
        puStack_208 = &uStack_168;
        func_0x0001082b0438(&uStack_240,pbVar28,&uStack_130,0,pbVar28 == (byte *)auStack_140);
        if (cVar4 == '\0') {
          uVar18 = (int)uStack_290 - (int)uStack_298;
          pbVar23 = pbStack_1f0;
          for (uVar29 = 0;
              uVar29 != (uStack_290._4_4_ - uStack_298._4_4_ &
                        (uStack_290._4_4_ - uStack_298._4_4_ >> 0x1f ^ 0xffffffffU));
              uVar29 = uVar29 + 1) {
            for (uVar26 = 0; uVar26 != ((int)uVar18 >> 3 & ((int)uVar18 >> 0x1f ^ 0xffffffffU));
                uVar26 = uVar26 + 1) {
              bVar25 = 0;
              for (lVar20 = 0; lVar20 != 8; lVar20 = lVar20 + 1) {
                bVar25 = pbVar23[lVar20] >> 7 | bVar25 << 1;
              }
              *pbVar30 = bVar25;
              pbVar23 = pbVar23 + 8;
              pbVar30 = pbVar30 + 1;
            }
            pbVar32 = pbVar30;
            if ((uVar18 & 7) != 0) {
              uVar26 = 0;
              for (uVar16 = 7; (uVar18 & 7) + uVar16 != 7; uVar16 = uVar16 - 1) {
                uVar26 = (uint)(*pbVar23 >> 7) << (ulong)(uVar16 & 0x1f) | uVar26;
                pbVar23 = pbVar23 + 1;
              }
              pbVar32 = pbVar30 + 1;
              *pbVar30 = (byte)uVar26;
            }
            pbVar23 = pbVar23 + (lStack_1e8 - (int)uVar18);
            pbVar30 = pbVar32 + ((int)puVar11 - ((int)(uVar18 + 7) >> 3));
          }
        }
        else if (cVar4 == '\x01') {
          if (bVar7) goto LAB_108396910;
          lVar20 = *(long *)(param_1 + 0x70);
          if (lVar20 != 0) {
            iVar33 = uStack_290._4_4_ - uStack_298._4_4_;
            while (uVar21 = (ulong)(uint)((int)uStack_290 - (int)uStack_298), 0 < iVar33) {
              for (; 0 < (int)uVar21; uVar21 = uVar21 - 1) {
                pbVar30[uVar21 - 1] = *(byte *)(lVar20 + (ulong)pbVar30[uVar21 - 1]);
              }
              pbVar30 = pbVar30 + (long)puVar11;
              iVar33 = iVar33 + -1;
            }
          }
        }
        else if (cVar4 == '\x04') {
LAB_108396910:
          uVar21 = 0;
          puVar14 = (undefined8 *)0x1;
          if (cVar4 != '\x01') {
            puVar14 = (undefined8 *)0x2;
          }
          if ((uVar5 & 0x200) != 0) {
            puVar14 = puVar11;
          }
          for (; uVar21 != (uStack_1d0._4_4_ & ((int)uStack_1d0._4_4_ >> 0x1f ^ 0xffffffffU));
              uVar21 = uVar21 + 1) {
            lVar20 = uVar21 * (long)puVar11;
            if ((uVar5 & 0x200) != 0) {
              lVar20 = uVar21 << (cVar4 != '\x01');
            }
            puVar15 = (ushort *)(pbVar30 + lVar20);
            uVar29 = 0xfffffff8;
            iVar22 = 8;
            for (iVar33 = -4; iVar33 < (int)uStack_1d0 + 4; iVar33 = iVar33 + 4) {
              uVar18 = uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU);
              uVar17 = (ulong)uVar18;
              piVar19 = (int *)(&UNK_10df1e520 + (long)(int)(uVar18 + iVar22) * 4);
              uStack_90 = 0;
              uStack_98 = 0;
              iVar6 = (int)uStack_1d0;
              if (iVar33 + 8 <= (int)uStack_1d0) {
                iVar6 = iVar33 + 8;
              }
              for (; (long)uVar17 < (long)iVar6; uVar17 = uVar17 + 1) {
                bVar25 = pbStack_1f0[uVar17 + lStack_1e8 * uVar21];
                piVar34 = piVar19;
                for (lVar20 = 0; lVar20 != 0xc; lVar20 = lVar20 + 4) {
                  *(uint *)((long)&uStack_98 + lVar20) =
                       *(int *)((long)&uStack_98 + lVar20) + *piVar34 * (uint)bVar25;
                  piVar34 = piVar34 + 0xc;
                }
                piVar19 = piVar19 + 1;
              }
              for (lVar20 = 0; lVar20 != 0xc; lVar20 = lVar20 + 4) {
                iVar6 = *(int *)((long)&uStack_98 + lVar20) / 0x100;
                if (0xfe < iVar6) {
                  iVar6 = 0xff;
                }
                *(int *)((long)&uStack_98 + lVar20) = iVar6;
              }
              pbVar28 = (byte *)(uStack_98 & 0xffffffff);
              uVar18 = uStack_90;
              uVar26 = (uint)uStack_98;
              if ((uVar5 & 0x400) != 0) {
                uVar18 = (uint)uStack_98;
                uVar26 = uStack_90;
              }
              if (cVar4 == '\x01') {
                uVar18 = (uVar26 + uStack_98._4_4_ + uVar18) / 3;
                if (*(long *)(param_1 + 0x70) != 0) {
                  uVar18 = (uint)*(byte *)(*(long *)(param_1 + 0x70) + (ulong)uVar18);
                }
                *(byte *)puVar15 = (byte)uVar18;
              }
              else {
                pbVar28 = (byte *)0x0;
                uVar16 = uStack_98._4_4_;
                if (*(long *)(param_1 + 0x70) != 0) {
                  uVar26 = (uint)*(byte *)(*(long *)(param_1 + 0x68) + (ulong)uVar26);
                  uVar16 = (uint)*(byte *)(*(long *)(param_1 + 0x70) + (ulong)uStack_98._4_4_);
                  pbVar28 = *(byte **)(param_1 + 0x78);
                  uVar18 = (uint)pbVar28[uVar18];
                }
                *puVar15 = (ushort)((uVar16 & 0x1ffc) << 3) | (ushort)((uVar26 & 0xf8) << 8) |
                           (ushort)(uVar18 >> 3);
              }
              puVar15 = (ushort *)((long)puVar15 + (long)puVar14);
              uVar29 = uVar29 + 4;
              iVar22 = iVar22 + -4;
            }
          }
        }
        FUN_10814ca20(&uStack_240);
      }
      FUN_10832fef8(&pbStack_1f0);
      FUN_10810a400(&uStack_1c0);
      func_0x000108386ed4(&uStack_1a8);
      FUN_10837ca5c(auStack_140[0]);
      FUN_108375e94(&uStack_130);
    }
  }
  plVar24 = (long *)*plVar24;
  if (plVar24 == (long *)0x0) goto LAB_1083966d0;
  uStack_130 = *(undefined8 *)(param_1 + 0x18);
  uStack_240._0_4_ = 0;
  uStack_240._4_4_ = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  iStack_228 = 0;
  uStack_224 = uStack_224 & 0xffffff00;
  uStack_230 = 0;
  uStack_22c = 0;
  pbStack_1f0 = (byte *)0x0;
  uStack_124 = (undefined4)*(undefined8 *)(param_1 + 0x20);
  uStack_120 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  uStack_114 = 0;
  uStack_110 = 0x3f800000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  uStack_10c = 0x80;
  FUN_10835394c(&uStack_1a8,puStack_2b0);
  puVar14 = &uStack_240;
  (**(code **)(*plVar24 + 0x40))(plVar24,puVar14,&uStack_1a8,&uStack_130,0);
  pbVar30 = pbStack_1f0;
  if ((int)plVar24 == 0) {
    if (*plStack_2a8 == alStack_250[0]) {
      func_0x0001083979a4();
      func_0x000108397920();
      func_0x000108397930();
      goto LAB_108396778;
    }
    puVar10 = param_2;
    FUN_1083960cc();
    puVar11 = puVar10;
    puVar13 = puVar14;
    func_0x0001083979a4();
    if ((((int)puVar10 != (int)puVar11) || (((ulong)puVar11 ^ (ulong)puVar10) >> 0x20 != 0)) ||
       (puVar14 != puVar13)) {
      FUN_1083960cc(pbVar28);
      func_0x000108397920();
      func_0x000108397930();
      FUN_108353adc(pbVar28);
      FUN_1082b5c24(alStack_250,pbVar28,0);
      uStack_240._0_4_ = (undefined4)alStack_250[0];
      uStack_240._4_4_ = (undefined4)((ulong)alStack_250[0] >> 0x20);
      puVar14 = (undefined8 *)*plStack_2a8;
      _memcpy(alStack_250[0],puVar14,pbVar28);
      goto LAB_108396778;
    }
  }
  else {
    pbStack_1f0 = (byte *)CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
    _free(pbVar30);
LAB_108396778:
    if ((uStack_224 & 0xff) != (uint)*pbVar1) {
      FUN_10841076c(&UNK_10f48135e);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x108396bf4);
      (*pcVar8)();
    }
    lVar20 = param_2[1];
    puVar10 = param_2;
    FUN_1083960cc();
    puVar11 = param_2;
    FUN_10835399c(param_2);
    lVar31 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240);
    uVar29 = (uint)((ulong)puVar10 >> 0x20);
    puVar13 = puVar10;
    if ((int)uStack_234 < (int)uVar29) {
      lVar31 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_240) +
               (ulong)(iStack_228 * (uVar29 - uStack_234));
      uStack_234 = uVar29;
    }
    else if (uStack_234 - uVar29 != 0 && (int)uVar29 <= (int)uStack_234) {
      lVar20 = lVar20 + (ulong)((uStack_234 - uVar29) * (int)puVar11);
      puVar13 = (undefined8 *)((ulong)puVar10 & 0xffffffff | (ulong)uStack_234 << 0x20);
    }
    uVar29 = (uint)puVar10;
    if (uVar29 - uStack_238 != 0 && (int)uStack_238 <= (int)uVar29) {
      lVar31 = lVar31 + (ulong)(uVar29 - uStack_238);
      uStack_238 = uVar29;
    }
    uVar26 = uStack_238;
    uVar18 = uStack_238 - uVar29;
    bVar9 = uVar18 == 0;
    if (bVar9 || (int)uStack_238 < (int)uVar29) {
      uVar18 = 0;
    }
    puVar2 = (undefined8 *)((ulong)puVar13 & 0xffffffff00000000 | (ulong)uStack_238);
    if (bVar9 || (int)uStack_238 < (int)uVar29) {
      puVar2 = puVar13;
    }
    puVar13 = (undefined8 *)((ulong)puVar14 & 0xffffffff | (ulong)uStack_22c << 0x20);
    if ((int)((ulong)puVar14 >> 0x20) <= (int)uStack_22c) {
      puVar13 = puVar14;
    }
    uVar16 = (uint)((ulong)puVar13 >> 0x20);
    if ((int)uVar16 < (int)uStack_22c) {
      uStack_22c = uVar16;
    }
    puVar3 = (undefined8 *)((ulong)puVar13 & 0xffffffff00000000 | (ulong)uStack_230);
    if ((int)puVar13 <= (int)uStack_230) {
      puVar3 = puVar13;
    }
    uVar16 = (uint)puVar3;
    puVar13 = (undefined8 *)(ulong)uStack_230;
    if ((int)uVar16 < (int)uStack_230) {
      puVar13 = puVar3;
      uStack_230 = uVar16;
    }
    lVar35 = (long)iStack_228;
    iVar33 = (uStack_22c - uStack_234) * 3;
    if ((char)uStack_224 != '\x02') {
      iVar33 = uStack_22c - uStack_234;
    }
    uStack_240 = lVar31;
    if ((((uint)puVar2 != uVar29 || (ulong)puVar2 >> 0x20 != (ulong)puVar10 >> 0x20) ||
        uVar16 != (uint)puVar14) || (ulong)puVar3 >> 0x20 != (ulong)puVar14 >> 0x20) {
      uVar27 = param_2[1];
      uVar5 = *(ushort *)((long)param_2 + 2);
      FUN_10835399c();
      if (((ulong)param_2 & 0xffffffff) * (ulong)uVar5 != 0) {
        _bzero(uVar27);
      }
    }
    lVar20 = lVar20 + (ulong)uVar18;
    while (0 < iVar33) {
      _memcpy(lVar20,lVar31,(long)(int)((int)puVar13 - uVar26));
      lVar31 = lVar31 + lVar35;
      lVar20 = lVar20 + (long)puVar11;
      iVar33 = iVar33 + -1;
    }
  }
  func_0x000108287eb8(&pbStack_1f0);
LAB_1083966d0:
  func_0x00010839798c();
  func_0x000108262b94(alStack_250);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108287eb8(&pbStack_1f0);
  func_0x00010839798c();
  func_0x000108262b94(alStack_250);
  func_0x000108397918();
  *extraout_x8_01 = 0;
  return;
}



/* Entry: 108396cb4; end: 108396cbb;  */

void FUN_108396cb4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 108396cbc; end: 108396cfb;  */

void FUN_108396cbc(long param_1,undefined8 *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108396cfc(&uStack_48,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                *(undefined4 *)(param_1 + 0xc));
  param_2[1] = uStack_40;
  *param_2 = uStack_48;
  param_2[3] = uStack_30;
  param_2[2] = uStack_38;
  param_2[4] = uStack_28;
  return;
}



/* Entry: 108396cfc; end: 108396d57;  */

void FUN_108396cfc(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined4 uStack_38;
  float fStack_34;
  
  func_0x00010815f6c0((float)param_2 * param_3,param_2);
  if (param_4 != 0.0) {
    uStack_38 = 0x3f800000;
    fStack_34 = param_4;
    FUN_108363f68(param_1,&uStack_38);
    return;
  }
  return;
}



/* Entry: 108396d58; end: 108396dab;  */

void FUN_108396d58(long param_1,undefined8 param_2)

{
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  FUN_108396cbc();
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_3c = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = 0;
  uStack_2c = 0x3f80000000000000;
  uStack_34 = 0;
  uStack_24 = 0x80;
  FUN_108363f68(param_2,&uStack_48);
  return;
}



/* Entry: 108396dac; end: 108397093;  */

undefined8
FUN_108396dac(undefined8 param_1,int param_2,float *param_3,float *param_4,undefined8 *param_5,
             undefined4 *param_6,undefined8 *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uStack_f0;
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
  
  uStack_88 = 0;
  uStack_90 = 0x3f800000;
  uStack_78 = 0;
  uStack_80 = 0x3f800000;
  uStack_70 = 0x103f800000;
  FUN_108396d58(param_1,&uStack_90);
  if (param_7 != (undefined8 *)0x0) {
    param_7[1] = uStack_88;
    *param_7 = uStack_90;
    param_7[3] = uStack_78;
    param_7[2] = uStack_80;
    param_7[4] = uStack_70;
  }
  bVar3 = uStack_90._4_4_ != 0.0;
  bVar4 = uStack_88._4_4_ != 0.0;
  bVar1 = (float)uStack_90 < 0.0;
  uStack_a0 = 0x103f800000;
  uStack_b8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0x3f800000;
  bVar2 = (float)uStack_80 < 0.0;
  if (bVar2 || (bVar1 || (bVar4 || bVar3))) {
    uStack_c8 = 0x3f800000;
    func_0x00010827a0cc(&uStack_90,&uStack_c8,1);
    uStack_e8 = 0;
    uStack_f0 = 0x3f800000;
    uStack_d8 = 0;
    uStack_e0 = 0x3f800000;
    uStack_d0 = 0x103f800000;
    func_0x0001084065b8(&uStack_c8,&uStack_f0);
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_a0 = uStack_d0;
    FUN_108363e94(&uStack_c0,&uStack_90);
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = (undefined4)uStack_f0;
      param_6[1] = -uStack_f0._4_4_;
      param_6[2] = (undefined4)uStack_e8;
      param_6[3] = -uStack_e8._4_4_;
      *(undefined8 *)(param_6 + 6) = uStack_d8;
      *(undefined8 *)(param_6 + 4) = uStack_e0;
      param_6[8] = (undefined4)uStack_d0;
      param_6[9] = 0x80;
    }
  }
  else {
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_a0 = uStack_70;
    if (param_6 != (undefined4 *)0x0) {
      func_0x000108363ab4(param_6);
    }
  }
  if ((ABS((float)uStack_c0) <= 0.00024414062) || (ABS((float)uStack_b0) <= 0.00024414062)) {
LAB_108396f64:
    uVar7 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)param_3 = uVar7;
    func_0x000108363f9c(0,0,param_4);
    if (param_5 != (undefined8 *)0x0) {
      func_0x000108363f9c(0,0,param_5);
    }
    if (param_6 != (undefined4 *)0x0) {
      func_0x000108363ab4(param_6);
    }
    return 0;
  }
  uVar5 = 0;
  FUN_1082c36d0();
  if ((uVar5 & 1) == 0) goto LAB_108396f64;
  if (param_2 == 2) {
    fVar6 = 1.0;
    if ((float)(double)(long)(ABS((float)uStack_b0) + 0.5) != 0.0) {
      fVar6 = (float)(double)(long)(ABS((float)uStack_b0) + 0.5);
    }
LAB_108396ff4:
    *param_3 = fVar6;
LAB_108396ff8:
    param_3[1] = fVar6;
  }
  else {
    if (param_2 == 1) {
      fVar6 = ABS((float)uStack_b0);
      goto LAB_108396ff4;
    }
    if (param_2 == 0) {
      *param_3 = ABS((float)uStack_c0);
      fVar6 = ABS((float)uStack_b0);
      goto LAB_108396ff8;
    }
  }
  if (bVar2 || (bVar1 || (bVar4 || bVar3))) {
LAB_10839702c:
    *(undefined8 *)(param_4 + 2) = uStack_88;
    *(undefined8 *)param_4 = uStack_90;
    *(undefined8 *)(param_4 + 6) = uStack_78;
    *(undefined8 *)(param_4 + 4) = uStack_80;
    *(undefined8 *)(param_4 + 8) = uStack_70;
    func_0x0001083979c4();
    func_0x000108363fe4(param_4);
  }
  else {
    if (param_2 != 0) {
      if (param_2 != 1) goto LAB_10839702c;
      fVar6 = (float)uStack_90;
      if ((float)uStack_90 != (float)uStack_80) {
        func_0x000108363ab4(param_4);
        *param_4 = fVar6 / param_3[1];
        param_4[9] = 1.79366e-43;
        goto joined_r0x000108397048;
      }
    }
    func_0x000108363ab4(param_4);
  }
joined_r0x000108397048:
  if (param_5 != (undefined8 *)0x0) {
    param_5[1] = uStack_b8;
    *param_5 = uStack_c0;
    param_5[3] = uStack_a8;
    param_5[2] = uStack_b0;
    param_5[4] = uStack_a0;
    func_0x0001083979c4();
    func_0x000108363fe4(param_5);
  }
  return 1;
}



/* Entry: 108397094; end: 1083970cb;  */

undefined4 FUN_108397094(long param_1)

{
  undefined4 uVar1;
  
  if ((*(ushort *)(param_1 + 0x36) >> 0xd & 1) == 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x18) == 0.0) {
    return 1;
  }
  uVar1 = 2;
  if (*(float *)(param_1 + 0x10) != 0.0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1083970cc; end: 108397183;  */

void FUN_1083970cc(long param_1)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  if ((*(ushort *)(param_1 + 0x36) >> 3 & 1) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x36) & 0xfff7;
    *(ushort *)(param_1 + 0x36) = uVar1;
    fVar3 = *(float *)(param_1 + 4);
    fVar2 = fVar3;
    func_0x00010839547c(&UNK_10df1e4e0,&UNK_10df1e4e8,2);
    fVar3 = fVar3 * fVar2;
    if (0.0 <= *(float *)(param_1 + 0x20)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fVar3;
    }
    else {
      *(ushort *)(param_1 + 0x36) = uVar1 | 1;
      *(float *)(param_1 + 0x20) = fVar3;
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_44 = 0x3f800000;
      uStack_3c = 0x40800000;
      *(undefined4 *)(param_1 + 0x24) = 0x40800000;
      *(undefined1 *)(param_1 + 0x35) = 0;
      FUN_108375e94(&uStack_80);
    }
  }
  return;
}



/* Entry: 108397184; end: 1083974bf;  */

void FUN_108397184(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4,float *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long *plVar11;
  ushort uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  param_6[6] = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  param_6[5] = 0;
  param_6[4] = 0;
  param_6[1] = 0;
  *param_6 = 0;
  plVar11 = (long *)*param_1;
  *(int *)param_6 = (int)plVar11[2];
  *(undefined8 *)((long)param_6 + 4) = param_1[1];
  *(undefined4 *)((long)param_6 + 0xc) = *(undefined4 *)(param_1 + 2);
  pfVar7 = param_5;
  func_0x0001081421e0();
  uVar5 = (uint)pfVar7;
  if ((uVar5 >> 1 & 1) == 0) {
    *(undefined4 *)(param_6 + 2) = 0x3f800000;
    fVar13 = 1.0;
    fVar14 = 1.0;
  }
  else {
    fVar13 = (float)(double)(long)(*param_5 * 1024.0 + 0.5) * 0.0009765625;
    *(float *)(param_6 + 2) = fVar13;
    fVar14 = (float)(double)(long)(param_5[4] * 1024.0 + 0.5) * 0.0009765625;
  }
  *(float *)((long)param_6 + 0x1c) = fVar14;
  if ((uVar5 >> 2 & 1) == 0) {
    uVar5 = uVar5 >> 1 & 1;
    *(undefined4 *)((long)param_6 + 0x14) = 0;
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar15 = (float)(double)(long)(param_5[1] * 1024.0 + 0.5) * 0.0009765625;
    *(float *)((long)param_6 + 0x14) = fVar15;
    fVar16 = (float)(double)(long)(param_5[3] * 1024.0 + 0.5) * 0.0009765625;
    uVar5 = 1;
  }
  *(float *)(param_6 + 3) = fVar16;
  uVar2 = *(uint *)(param_2 + 9);
  uVar12 = *(byte *)((long)param_1 + 0x14) >> 1 & 8;
  if (((uVar2 & 0xff) < 0x40) || (*(float *)(param_2 + 8) < 0.0)) {
    param_6[4] = 0xbf800000;
    *(undefined1 *)((long)param_6 + 0x35) = 0;
  }
  else {
    uVar17 = *(undefined4 *)((long)param_2 + 0x44);
    *(float *)(param_6 + 4) = *(float *)(param_2 + 8);
    *(undefined4 *)((long)param_6 + 0x24) = uVar17;
    bVar3 = *(byte *)(param_2 + 9);
    *(byte *)((long)param_6 + 0x35) = *(byte *)((long)param_6 + 0x35) & 0xf0 | bVar3 >> 4 & 3;
    *(byte *)((long)param_6 + 0x35) = (*(char *)(param_2 + 9) << 2 | bVar3 >> 4) & 0x33;
    if ((char)uVar2 < -0x40) {
      uVar12 = uVar12 + 1;
    }
  }
  cVar4 = *(char *)((long)param_1 + 0x15);
  uVar10 = 4;
  if (cVar4 != '\x02') {
    uVar10 = 1;
  }
  uVar1 = 0;
  if (cVar4 != '\0') {
    uVar1 = uVar10;
  }
  *(undefined1 *)((long)param_6 + 0x34) = uVar1;
  if (cVar4 != '\x02') goto LAB_1083973a4;
  if (uVar5 == 0) {
    fVar14 = *(float *)((long)param_6 + 4);
    fVar13 = 48.0;
  }
  else {
    fVar14 = (-(fVar15 * fVar16) + fVar14 * fVar13) *
             *(float *)((long)param_6 + 4) * *(float *)((long)param_6 + 4);
    fVar13 = 2304.0;
  }
  if (fVar14 <= fVar13) {
    switch(*(undefined4 *)(param_3 + 4)) {
    case 0:
      goto code_r0x000108397398;
    case 2:
      uVar12 = uVar12 | 0x400;
      break;
    case 3:
      uVar12 = uVar12 | 0x200;
      break;
    case 4:
      uVar12 = uVar12 | 0x600;
    }
  }
  else {
code_r0x000108397398:
    *(undefined1 *)((long)param_6 + 0x34) = 1;
    uVar12 = uVar12 | 0x800;
  }
LAB_1083973a4:
  bVar3 = *(byte *)((long)param_1 + 0x14);
  uVar12 = uVar12 | (bVar3 & 2) << 1 | (bVar3 & 4) << 2 | (bVar3 & 1) << 5 | (bVar3 >> 3 & 1) << 0xc
           | (bVar3 >> 5 & 1) << 0xd;
  (**(code **)(*plVar11 + 0x78))();
  if ((int)plVar11 != 0) {
    uVar12 = uVar12 | 0x4000;
    iVar6 = (int)param_2 + 0x30;
    func_0x000108343560();
    *(int *)(param_6 + 5) = iVar6;
  }
  *(ushort *)((long)param_6 + 0x36) = uVar12 | (ushort)*(byte *)((long)param_1 + 0x16) << 7;
  puVar8 = param_2;
  FUN_10837675c(param_2);
  FUN_1083955cc(param_6,puVar8);
  fVar13 = *(float *)(param_3 + 8);
  *(char *)(param_6 + 6) = (char)(int)(*(float *)(param_3 + 0xc) * 64.0);
  *(char *)((long)param_6 + 0x32) = (char)(int)(fVar13 * 255.0 + 0.5);
  if ((param_4 & 1) == 0) {
    *(undefined4 *)((long)param_6 + 0x2c) = 0xff000000;
    *(undefined1 *)(param_6 + 6) = 0x40;
  }
  if ((param_4 >> 1 & 1) == 0) {
    *(undefined1 *)((long)param_6 + 0x32) = 0;
  }
  uVar9 = param_2[2];
  *param_7 = *param_2;
  param_7[1] = uVar9;
  return;
}



/* Entry: 1083974c0; end: 1083974ff;  */

void FUN_1083974c0(void)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 auStack_58 [56];
  
  FUN_108397184();
  FUN_108397500(auStack_58,in_x6,in_x5);
  return;
}



/* Entry: 108397500; end: 1083975a7;  */

undefined8 FUN_108397500(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined **ppuStack_a0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  ppuStack_a0 = &PTR_FUN_110a408d8;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  FUN_1083975a8(param_2,&ppuStack_a0);
  FUN_1083468a8(param_3,param_2);
  func_0x000108397610(param_1,&ppuStack_a0,*param_3);
  uVar1 = *param_3;
  FUN_1083a99f0(&ppuStack_a0);
  return uVar1;
}



/* Entry: 1083975a8; end: 1083976a3;  */

long FUN_1083975a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 == 0 && lVar2 == 0) {
    lVar1 = 0x4c;
  }
  else {
    if (lVar1 != 0) {
      (**(code **)(*param_2 + 0x58))(param_2,lVar1);
      lVar2 = param_1[1];
    }
    if (lVar2 != 0) {
      (**(code **)(*param_2 + 0x58))(param_2);
    }
    lVar1 = param_2[0xb] + 0x54;
  }
  return lVar1;
}



/* Entry: 1083976a4; end: 108397717;  */

void FUN_1083976a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  FUN_1083955f4();
  *puVar1 = &PTR_FUN_110a3fd78;
  *param_1 = puVar1;
  return;
}



/* Entry: 108397718; end: 10839771b;  */

undefined8 * FUN_108397718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3fd38;
  func_0x00010724e5b8(param_1 + 2);
  return param_1;
}



/* Entry: 10839771c; end: 10839772f;  */

void FUN_10839771c(void)

{
  FUN_108397730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108397730; end: 10839775b;  */

undefined8 * FUN_108397730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3fd38;
  func_0x00010724e5b8(param_1 + 2);
  return param_1;
}



/* Entry: 10839775c; end: 1083977a7;  */

long * FUN_10839775c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083977a8; end: 108397883;  */

undefined8 * FUN_1083977a8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  *(undefined4 *)(param_3 + 1) = 1;
  *param_3 = &PTR_FUN_110a3fd38;
  func_0x00010724e2fc(param_3 + 2,0x800);
  lVar3 = 0;
  iVar4 = 0;
  lVar5 = 0;
  ppuVar1 = &PTR_PTR_113254e08;
  if ((float)param_2 != 1.0) {
    ppuVar1 = &PTR_PTR_113254e10;
  }
  ppuVar2 = &PTR_PTR_113254e18;
  if ((float)param_2 != 0.0) {
    ppuVar2 = ppuVar1;
  }
  for (; lVar5 != 8; lVar5 = lVar5 + 1) {
    FUN_108363784(param_1,param_2,param_3[2] + lVar3,iVar4 + ((uint)lVar5 >> 1),ppuVar2);
    iVar4 = iVar4 + 0x24;
    lVar3 = lVar3 + 0x100;
  }
  return param_3;
}



/* Entry: 108397884; end: 1083978ab;  */

undefined8 * FUN_108397884(undefined8 *param_1)

{
  FUN_108395920(*param_1);
  return param_1;
}



/* Entry: 1083978ac; end: 1083978af;  */

undefined8 * FUN_1083978ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3fce0;
  FUN_10839775c(param_1 + 0xc);
  FUN_10810c718(param_1 + 10);
  func_0x000108115b70(param_1 + 9);
  return param_1;
}



/* Entry: 1083978b0; end: 1083978c3;  */

void FUN_1083978b0(void)

{
  FUN_108395738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083978c4; end: 1083978df;  */

void FUN_1083978c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_3 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1a) = 0;
  return;
}



/* Entry: 1083978e0; end: 1083978fb;  */

undefined8 FUN_1083978e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108376d4c(param_3);
  return 0;
}



/* Entry: 1083978fc; end: 1083979d7;  */

void FUN_1083978fc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 1083979d8; end: 108397aa7;  */

void FUN_1083979d8(int *param_1,long param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_48 [16];
  byte bStack_38;
  
  iVar1 = (int)&uStack_80;
  piVar2 = param_1;
  FUN_10821a6d8();
  if (((ulong)piVar2 & 1) == 0) {
    if (param_2 == 0) {
code_r0x000108397aa8:
                    /* WARNING: Could not recover jumptable at 0x000108397ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x28))
                (param_3,*param_1,param_1[1],param_1[2] - *param_1,param_1[3] - param_1[1]);
      return;
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar3 = param_2;
      func_0x000108219544(param_2,param_1);
      if ((int)lVar3 != 0) goto code_r0x000108397aa8;
      uStack_78 = *(undefined8 *)(param_1 + 2);
      uStack_80 = *(undefined8 *)param_1;
      func_0x00010821b838(&uStack_80,param_2);
      if (iVar1 != 0) {
        FUN_108397aa8(param_3,&uStack_80);
      }
    }
    else {
      FUN_1083903d0(&uStack_80,param_2,param_1);
      while ((bStack_38 & 1) == 0) {
        FUN_108397aa8(param_3,auStack_48);
        FUN_108390454(&uStack_80);
      }
    }
  }
  return;
}



/* Entry: 108397aa8; end: 108397ac7;  */

void FUN_108397aa8(long *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108397ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))
            (param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1]);
  return;
}


