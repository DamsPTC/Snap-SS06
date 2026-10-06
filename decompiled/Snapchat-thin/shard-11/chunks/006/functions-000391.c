/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10871c1ec; end: 10871c3db;  */

undefined4 *
FUN_10871c1ec(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  undefined8 in_register_00005008;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  func_0x000107c27994(auStack_50,param_4);
  func_0x00010871e4c4(uStack_40);
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 4) = in_register_00005008;
  *(undefined8 *)(param_2 + 2) = param_1;
  *(undefined8 *)(param_2 + 6) = extraout_x8;
  func_0x00010871f6b8();
  func_0x00010871e654();
  func_0x00010871e4f8();
  return param_2;
}



/* Entry: 10871c3dc; end: 10871c4bb;  */

long * FUN_10871c3dc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uVar5 = lVar2 - lVar1;
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6) < uVar5) {
    func_0x000107c28914(param_1);
    plVar3 = param_1;
    func_0x000107c27ae0(param_1,(long)uVar5 >> 3);
    func_0x000107c27dd8(param_1,plVar3);
    lVar6 = param_1[1];
  }
  else {
    lVar7 = param_1[1];
    uVar4 = lVar7 - lVar6;
    if (uVar4 < uVar5) {
      if (lVar7 != lVar6) {
        func_0x00010871f820();
        _memmove();
        lVar7 = param_1[1];
      }
      lVar2 = lVar2 - (lVar1 + uVar4);
      if (lVar2 != 0) {
        func_0x000100865634(lVar7);
        _memmove();
      }
      lVar6 = lVar7 + lVar2;
      goto LAB_10871c4a0;
    }
  }
  if (lVar2 != lVar1) {
    func_0x00010871f820();
    _memmove();
  }
  lVar6 = lVar6 + uVar5;
LAB_10871c4a0:
  param_1[1] = lVar6;
  return param_1;
}



/* Entry: 10871c4bc; end: 10871c4e3;  */

void FUN_10871c4bc(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  cVar3 = (char)param_1[4];
  if (cVar3 != (char)param_2[4]) {
    if (cVar3 == '\0') {
      func_0x00010065ae70();
      func_0x00010065b14c();
      return;
    }
    if ((char)param_1[4] == '\x01') {
      func_0x000107c2a348();
      *(undefined1 *)(param_1 + 4) = 0;
    }
    return;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34868();
  func_0x000107c2a334();
  func_0x0001088ef1b4();
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088ec620;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c2a340();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x0001088ecb68();
      goto LAB_1088ec620;
    }
    FUN_1088eeaf4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_1088ec620;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_1088ecaec();
      goto LAB_1088ec620;
    }
    func_0x000107c2a384();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088ec620:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088eee8c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10871c4e4; end: 10871c56f;  */

undefined8 FUN_10871c4e4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint extraout_w8;
  ulong extraout_x8;
  undefined8 uVar1;
  undefined4 uStack_134;
  undefined1 auStack_130 [272];
  
  func_0x000107c282f8(auStack_130,param_2,8);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERj(auStack_130,&uStack_134);
  func_0x00010871f728();
  if ((extraout_x8 & 5) == 0) {
    func_0x000107c28cf8(auStack_130);
    func_0x00010871f728();
    if ((extraout_w8 >> 1 & 1) != 0) {
      *param_3 = uStack_134;
      uVar1 = 1;
      goto LAB_10871c534;
    }
  }
  uVar1 = 0;
LAB_10871c534:
  func_0x000107c282fc(auStack_130);
  return uVar1;
}



/* Entry: 10871c570; end: 10871c58f;  */

void FUN_10871c570(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010867b9fc();
  }
  return;
}



/* Entry: 10871c590; end: 10871c59f;  */

void FUN_10871c590(void)

{
  func_0x00010871ea38();
  return;
}



/* Entry: 10871c5a0; end: 10871c5cf;  */

uint FUN_10871c5a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010871f258();
  FUN_108690bbc(param_2,param_1);
  return (uint)param_2 ^ 1;
}



/* Entry: 10871c5d0; end: 10871c5e7;  */

undefined1 * FUN_10871c5d0(long param_1,long param_2)

{
  undefined1 *puVar1;
  
  func_0x00010871ea38();
  puVar1 = (undefined1 *)(param_1 + 0x30);
  *puVar1 = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  func_0x00010066bc8c(puVar1,param_2 + 0x30);
  return puVar1;
}



/* Entry: 10871c5e8; end: 10871c5f3;  */

/* WARNING: Possible PIC construction at 0x00010871c608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010871c618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010871c60c) */
/* WARNING: Removing unreachable block (ram,0x00010871c61c) */

long FUN_10871c5e8(long param_1)

{
  func_0x00010871f258();
  func_0x000100292090(param_1 + 0x48);
  func_0x0001005fb5c8();
  return param_1;
}



/* Entry: 10871c5f4; end: 10871c67b;  */

/* WARNING: Possible PIC construction at 0x00010871c608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010871c618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010871c60c) */
/* WARNING: Removing unreachable block (ram,0x00010871c61c) */

long FUN_10871c5f4(long param_1)

{
  func_0x000100292090(param_1 + 0x48);
  func_0x0001005fb5c8();
  return param_1;
}



/* Entry: 10871c67c; end: 10871c7db;  */

undefined8 * FUN_10871c67c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110a68818;
  param_1[1] = &PTR_DAT_110a68a10;
  param_1[2] = &PTR_DAT_110a68a38;
  param_1[5] = &PTR_DAT_110a68b10;
  func_0x0001008652b0(param_1 + 0xa1);
  FUN_10871c7dc(param_1 + 0x9c);
  FUN_10871c7dc(param_1 + 0x97);
  plVar1 = (long *)param_1[0x94];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27a04(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x92];
  param_1[0x92] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c28d38(param_1 + 0x8f);
  func_0x000107c28d34(param_1 + 0x8d);
  func_0x000107c28ab8(param_1 + 0x8b);
  func_0x000107c28700(param_1 + 0x89);
  func_0x000107c29194(param_1 + 0x87);
  func_0x000107c2964c(param_1 + 0x31);
  func_0x000107c2968c(param_1 + 0x2f);
  func_0x000107c296c0(param_1 + 0x2d);
  func_0x000107c296bc(param_1 + 0x2b);
  func_0x00010871c864(param_1 + 0x29);
  func_0x000107c29178(param_1 + 0x27);
  func_0x000107c296b4(param_1 + 0x25);
  func_0x000107c288a4(param_1 + 0x23);
  func_0x000107c29498(param_1 + 0x21);
  func_0x000107c296b0(param_1 + 0x1f);
  func_0x000107c2959c(param_1 + 0x1d);
  func_0x000107c29190(param_1 + 0x1b);
  func_0x000107c296ac(param_1 + 0x19);
  func_0x000107c28808(param_1 + 0x17);
  func_0x000107c28800(param_1 + 0x15);
  func_0x000107c27914(param_1 + 0x12);
  func_0x000107c27914(param_1 + 0xf);
  func_0x000107c28d9c(param_1 + 0xd);
  func_0x000100864b68(param_1 + 8);
  func_0x000107c296a8(param_1 + 6);
  FUN_108687d5c(param_1 + 2);
  return param_1;
}



/* Entry: 10871c7dc; end: 10871c8db;  */

void FUN_10871c7dc(void)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x00010871f5a0();
  lVar1 = *unaff_x19;
  *unaff_x19 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10871c8dc; end: 10871c8ef;  */

void FUN_10871c8dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10871c8f0; end: 10871c95b;  */

void FUN_10871c8f0(void)

{
  undefined1 in_ZR;
  byte *extraout_x8;
  byte *pbVar1;
  bool bVar2;
  long unaff_x19;
  undefined1 auStack_3f8 [976];
  char cStack_28;
  
  func_0x00010871ebec();
  pbVar1 = *(byte **)(unaff_x19 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    func_0x00010871e9c8();
    bVar2 = !(bool)in_ZR;
    pbVar1 = extraout_x8;
  }
  else {
    bVar2 = true;
  }
  *pbVar1 = bVar2;
  func_0x00010871ec30(auStack_3f8);
  if (cStack_28 == '\x01') {
    func_0x00010871f29c();
  }
  func_0x00010871e76c();
  return;
}



/* Entry: 10871c95c; end: 10871c96f;  */

void FUN_10871c95c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10871c970; end: 10871ca1f;  */

ulong FUN_10871c970(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 >> 0x20 & 1) == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c29e58();
    param_1 = param_1 & 0xffffffff;
    uVar1 = 0x100000000;
  }
  return uVar1 | param_1;
}



/* Entry: 10871ca20; end: 10871ca37;  */

void FUN_10871ca20(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10871ca38; end: 10871cb23;  */

long * FUN_10871ca38(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010871c840(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10871cb24; end: 10871cb4f;  */

long FUN_10871cb24(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(long *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10871cb50; end: 10871cb9f;  */

long FUN_10871cb50(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long *unaff_x21;
  
  func_0x00010086504c();
  func_0x000107c27be0();
  if (*unaff_x21 == unaff_x19) {
    *unaff_x21 = param_2;
  }
  unaff_x21[2] = unaff_x21[2] + -1;
  func_0x00010530d618(unaff_x21[1]);
  return param_2;
}



/* Entry: 10871cba0; end: 10871cbd3;  */

void FUN_10871cba0(void)

{
  func_0x00010871cbb8();
  return;
}



/* Entry: 10871cbd4; end: 10871cc6b;  */

void FUN_10871cbd4(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar1 = param_1;
  FUN_10867c19c(param_1,&uStack_48,param_2);
  if (*plVar1 == 0) {
    plVar2 = plVar1;
    func_0x00010871eb80();
    uStack_50 = 1;
    plVar2[4] = *param_3;
    plStack_58 = param_1 + 1;
    FUN_10867c1ec(param_1,uStack_48,plVar1,plVar2);
    uStack_60 = 0;
    func_0x00010867c238(&uStack_60);
  }
  func_0x00010871edac();
  return;
}



/* Entry: 10871cc6c; end: 10871cca3;  */

undefined8 FUN_10871cc6c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  while( true ) {
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    } while (*param_2 < plVar1[4]);
    if (*param_2 <= plVar1[4]) break;
    plVar1 = plVar1 + 1;
  }
  return 1;
}



/* Entry: 10871cca4; end: 10871cd17;  */

void FUN_10871cca4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  byte *extraout_x8;
  byte *pbVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_3f8 [976];
  char cStack_28;
  
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  pbVar1 = (byte *)*puVar3;
  if ((*pbVar1 & 1) == 0) {
    func_0x00010871e9c8(param_1,puVar3[1],param_3,param_4,param_1);
    bVar2 = !(bool)in_ZR;
    pbVar1 = extraout_x8;
  }
  else {
    bVar2 = true;
  }
  *pbVar1 = bVar2;
  func_0x00010871ec30(auStack_3f8);
  if (cStack_28 == '\x01') {
    func_0x000107c288f0(puVar3[4],auStack_3f8);
  }
  func_0x00010871e76c();
  return;
}



/* Entry: 10871cd18; end: 10871cd2b;  */

void FUN_10871cd18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10871cd2c; end: 10871cd87;  */

void FUN_10871cd2c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32eb0();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_10871fb04(uVar1,*(undefined4 *)(unaff_x19 + 0x30));
  if ((int)uVar1 != 0) {
    FUN_1086f7298(unaff_x19 + 0xe8,*(undefined8 *)(unaff_x20 + 0x10));
  }
  return;
}



/* Entry: 10871cd88; end: 10871cd97;  */

void FUN_10871cd88(void)

{
  return;
}



/* Entry: 10871cd98; end: 10871ce13;  */

undefined8 FUN_10871cd98(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010871e348();
  uVar1 = param_1 + 0xe8;
  FUN_1086f7298(uVar1,*(undefined8 *)(param_2 + 0x10));
  uVar2 = 0;
  if (((uVar1 & 1) == 0) && ((*(byte *)(unaff_x20 + 0x40) & 1) == 0)) {
    if (((*(uint *)(unaff_x20 + 0x30) < 0x18) &&
        ((0xc8006bU >> (ulong)(*(uint *)(unaff_x20 + 0x30) & 0x1f) & 1) != 0)) ||
       ((*(char *)(unaff_x20 + 0x1f8) == '\x01' &&
        (*(long *)(unaff_x19 + 0x18) < *(long *)(unaff_x20 + 0x1f0))))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* Entry: 10871ce14; end: 10871ce23;  */

void FUN_10871ce14(void)

{
  return;
}



/* Entry: 10871ce24; end: 10871d007;  */

void FUN_10871ce24(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined4 uStack0000000000000019;
  undefined3 uStack000000000000001d;
  
  func_0x0001008652d4();
  plVar12 = (long *)param_1[1];
  if ((plVar12 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x00010871f428();
    uVar13 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar13) == 0) {
      plVar14 = (long *)((ulong)plVar2 & uVar13);
    }
    else {
      plVar14 = plVar2;
      if (plVar12 <= plVar2) {
        uVar1 = 0;
        uVar11 = (uint)plVar12;
        if (uVar11 != 0) {
          uVar1 = (uint)plVar2 / uVar11;
        }
        plVar14 = (long *)(ulong)((uint)plVar2 - uVar1 * uVar11);
      }
    }
    plVar10 = *(long **)(*param_1 + (long)plVar14 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
          plVar3 = (long *)plVar10[1];
          if (plVar3 != plVar2) break;
          plVar3 = plVar10 + 2;
          func_0x000107c28078(plVar3,param_2);
          if ((int)plVar3 != 0) {
            uVar5 = param_1[1];
            lVar4 = *plVar10;
            uVar13 = plVar10[1];
            uVar6 = uVar5 - 1;
            if ((uVar5 & uVar6) == 0) {
              uVar13 = uVar6 & uVar13;
            }
            else if (uVar5 <= uVar13) {
              uVar8 = 0;
              if (uVar5 != 0) {
                uVar8 = uVar13 / uVar5;
              }
              uVar13 = uVar13 - uVar8 * uVar5;
            }
            lVar7 = *param_1;
            plVar12 = *(long **)(lVar7 + uVar13 * 8);
            do {
              plVar2 = plVar12;
              plVar12 = (long *)*plVar2;
            } while ((long *)*plVar2 != plVar10);
            in_stack_00000010 = param_1 + 2;
            if (plVar2 == in_stack_00000010) {
LAB_10871cf60:
              if (lVar4 == 0) {
LAB_10871cf94:
                *(undefined8 *)(lVar7 + uVar13 * 8) = 0;
                lVar4 = *plVar10;
                goto LAB_10871cf9c;
              }
              uVar8 = *(ulong *)(lVar4 + 8);
              if ((uVar5 & uVar6) == 0) {
                uVar9 = uVar8 & uVar6;
              }
              else {
                uVar9 = uVar8;
                if (uVar5 <= uVar8) {
                  uVar9 = 0;
                  if (uVar5 != 0) {
                    uVar9 = uVar8 / uVar5;
                  }
                  uVar9 = uVar8 - uVar9 * uVar5;
                }
              }
              if (uVar9 != uVar13) goto LAB_10871cf94;
            }
            else {
              uVar8 = plVar2[1];
              if ((uVar5 & uVar6) == 0) {
                uVar8 = uVar8 & uVar6;
              }
              else if (uVar5 <= uVar8) {
                uVar9 = 0;
                if (uVar5 != 0) {
                  uVar9 = uVar8 / uVar5;
                }
                uVar8 = uVar8 - uVar9 * uVar5;
              }
              if (uVar8 != uVar13) goto LAB_10871cf60;
LAB_10871cf9c:
              if (lVar4 == 0) goto LAB_10871cfd4;
              uVar8 = *(ulong *)(lVar4 + 8);
            }
            if ((uVar5 & uVar6) == 0) {
              uVar8 = uVar8 & uVar6;
            }
            else if (uVar5 <= uVar8) {
              uVar6 = 0;
              if (uVar5 != 0) {
                uVar6 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar6 * uVar5;
            }
            if (uVar8 != uVar13) {
              *(long **)(lVar7 + uVar8 * 8) = plVar2;
              lVar4 = *plVar10;
            }
LAB_10871cfd4:
            *plVar2 = lVar4;
            *plVar10 = 0;
            param_1[3] = param_1[3] + -1;
            in_stack_00000008 = plVar10;
            func_0x00010871f808();
            uStack0000000000000019 = 0;
            uStack000000000000001d = 0;
            FUN_10871ca38(&stack0x00000008);
            return;
          }
        }
        if (((ulong)plVar12 & uVar13) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar13);
        }
        else if (plVar12 <= plVar3) {
          uVar5 = 0;
          if (plVar12 != (long *)0x0) {
            uVar5 = (ulong)plVar3 / (ulong)plVar12;
          }
          plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar12);
        }
      } while (plVar3 == plVar14);
    }
  }
  return;
}



/* Entry: 10871d008; end: 10871d02b;  */

void FUN_10871d008(void)

{
  func_0x00010871ef90();
  func_0x000107c31408();
  return;
}



/* Entry: 10871d02c; end: 10871d043;  */

void FUN_10871d02c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_2 = param_2 + 8;
  func_0x00010871e348(param_1,param_2);
  FUN_10871d100(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10871d044; end: 10871d0cb;  */

long * FUN_10871d044(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4b2499,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    func_0x00010871ed4c();
  }
  return param_1 + 1;
}



/* Entry: 10871d0cc; end: 10871d0ff;  */

void FUN_10871d0cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010871e348();
  FUN_10871d100(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10871d100; end: 10871d167;  */

void FUN_10871d100(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      cVar1 = *(char *)(param_1 + 1);
      if (cVar1 == *(char *)(param_2 + 1)) {
        if (cVar1 != '\0') {
          uVar2 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar2;
          return;
        }
      }
      else if (cVar1 == '\0') {
        *param_1 = *param_2;
        *(undefined1 *)(param_1 + 1) = 1;
        if (*(char *)(param_2 + 1) == '\x01') {
          *(undefined1 *)(param_2 + 1) = 0;
        }
      }
      else {
        *param_2 = *param_1;
        *(undefined1 *)(param_2 + 1) = 1;
        if (*(char *)(param_1 + 1) == '\x01') {
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
      }
      return;
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (*(char *)(param_2 + 2) == '\x01') {
      *(undefined1 *)(param_2 + 2) = 0;
    }
  }
  else {
    uVar2 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar2;
    *(undefined1 *)(param_2 + 2) = 1;
    if (*(char *)(param_1 + 2) == '\x01') {
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10871d168; end: 10871d17b;  */

void FUN_10871d168(void)

{
  FUN_10871d17c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10871d17c; end: 10871d18f;  */

void FUN_10871d17c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a68d40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10871d190; end: 10871d1c7;  */

void FUN_10871d190(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      func_0x00010871f85c();
    }
  }
  return;
}



/* Entry: 10871d1c8; end: 10871d29b;  */

undefined8 FUN_10871d1c8(long *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar7 = (long *)param_1[1];
  if ((plVar7 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x00010871f428();
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar9 = (long *)((ulong)plVar3 & uVar8);
    }
    else {
      plVar9 = plVar3;
      if (plVar7 <= plVar3) {
        uVar1 = 0;
        uVar6 = (uint)plVar7;
        if (uVar6 != 0) {
          uVar1 = (uint)plVar3 / uVar6;
        }
        plVar9 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar6);
      }
    }
    plVar10 = *(long **)(*param_1 + (long)plVar9 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return 0;
          }
          plVar5 = (long *)plVar10[1];
          if (plVar3 != plVar5) break;
          lVar4 = (long)(plVar10 + 2);
          func_0x000107c28078(lVar4,param_2);
          if ((int)lVar4 != 0) {
            return 1;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar8);
        }
        else if (plVar7 <= plVar5) {
          uVar2 = 0;
          if (plVar7 != (long *)0x0) {
            uVar2 = (ulong)plVar5 / (ulong)plVar7;
          }
          plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar7);
        }
      } while (plVar5 == plVar9);
    }
  }
  return 0;
}



/* Entry: 10871d29c; end: 10871ddf3;  */

void FUN_10871d29c(uint *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined ***pppuVar8;
  long *plVar9;
  char *pcVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar13;
  int extraout_w9;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  char *pcVar17;
  long *plVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  undefined1 auStack_ed8 [24];
  undefined1 uStack_ec0;
  undefined1 auStack_eb8 [96];
  undefined1 auStack_e58 [32];
  undefined1 auStack_e38 [24];
  undefined1 auStack_e20 [32];
  byte bStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  long lStack_de8;
  uint uStack_de0;
  char cStack_ddc;
  ushort uStack_ddb;
  byte bStack_dd9;
  char cStack_db8;
  undefined1 auStack_db0 [88];
  char cStack_d58;
  char cStack_d38;
  long lStack_d10;
  byte bStack_d08;
  undefined8 uStack_d00;
  int iStack_cf8;
  undefined4 uStack_cf4;
  undefined1 auStack_cf0 [976];
  undefined1 uStack_920;
  long alStack_918 [2];
  undefined1 auStack_908 [24];
  undefined1 auStack_8f0 [24];
  char acStack_8d8 [24];
  undefined1 auStack_8c0 [40];
  undefined1 auStack_898 [32];
  undefined4 uStack_878;
  undefined1 auStack_6d8 [96];
  byte bStack_678;
  long lStack_660;
  char cStack_530;
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  char acStack_4f8 [24];
  undefined1 auStack_4e0 [40];
  undefined4 uStack_4b8;
  undefined1 uStack_4b4;
  undefined **ppuStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined4 uStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  uint uStack_458;
  char *pcStack_450;
  byte bStack_448;
  long lStack_3b8;
  long lStack_3b0;
  ulong uStack_380;
  char cStack_2c0;
  long lStack_2b8;
  byte bStack_2b0;
  byte bStack_2a0;
  long lStack_228;
  char cStack_220;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  uint uStack_170;
  uint uStack_148;
  long lStack_120;
  char cStack_118;
  long lStack_110;
  long lStack_108;
  byte bStack_c8;
  undefined1 auStack_58 [88];
  
  func_0x000107c32ee4();
  lVar14 = *(long *)(param_2 + 0x10);
  FUN_10871ddf4(alStack_918,lVar14);
  if (alStack_918[0] == 0) goto code_r0x000100671834;
  if (((char)param_1[1] != '\x01' || 6 < *param_1) || (1 << (ulong)(*param_1 & 0x1f) & 0x6dU) == 0)
  {
    FUN_1086a5ff0();
    FUN_1086a600c();
    goto code_r0x000100671834;
  }
  func_0x000107c29e78();
  FUN_10870b048(auStack_e58,lVar14 + 0x28);
  func_0x00010871e5c4(*(undefined8 *)(lVar14 + 0x58));
  lVar21 = *(long *)(extraout_x8 + 0x120);
  uVar16 = *(undefined8 *)(lVar14 + 0x88);
  func_0x00010871f1f0(auStack_eb8,lVar14 + 0x28);
  lVar21 = lVar21 * 1000;
  auStack_ed8[0] = 0;
  uStack_ec0 = 0;
  func_0x00010871ebe4(auStack_e38,lVar14 + 0x10,auStack_e58,0,1,lVar21,uVar16);
  uVar12 = (uint)lVar21;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_480 = 0;
  ppuStack_488 = &PTR_FUN_110a609a8;
  uStack_468 = CONCAT44(uStack_468._4_4_,0x1ce);
  func_0x00010871e058();
  func_0x00010871e588((long)(char)bStack_e00);
  func_0x00010871e174(&ppuStack_488);
  func_0x00010871e484();
  func_0x00010871e00c(auStack_58,alStack_918[0] + 0x118);
  func_0x00010871e2c0();
  func_0x00010871e2d0();
  func_0x00010871e2d8();
  func_0x000107c2882c(&ppuStack_488);
  plVar1 = (long *)(alStack_918[0] + 0xb8);
  pppuVar8 = &ppuStack_488;
  func_0x00010871e48c(pppuVar8,plVar1,auStack_e38);
  bVar5 = bStack_e00 == 0xf;
  if ((((bVar5) && ((bStack_d08 & 1) != 0)) &&
      (bVar5 = cStack_220 == '\x01' && lStack_d10 == lStack_228,
      cStack_220 == '\x01' && lStack_d10 < lStack_228)) ||
     ((func_0x00010871e52c(), bVar5 && extraout_w9 == 2 || (cStack_2c0 == '\x01')))) {
LAB_10871d460:
    auStack_cf0[0] = 0;
    uStack_920 = 0;
  }
  else {
    bVar5 = false;
    if (uStack_de0 == 0x1e) {
      FUN_10871e8d8();
      bVar5 = *(char *)pppuVar8 != '\x01' || uStack_170 == 2;
      if (*(char *)pppuVar8 != '\x01' || uStack_170 == 2) {
        uStack_de0 = 6;
      }
    }
    iVar20 = (int)pppuVar8;
    func_0x00010871e628(bStack_e00);
    if ((bVar5) && ((uStack_ddb & 1) != 0)) {
      iVar19 = 2;
      bVar5 = extraout_w8 == 0x14;
      if ((extraout_w8 < 0x15) && (func_0x00010871df48(), !bVar5)) goto LAB_10871d520;
    }
    else {
LAB_10871d520:
      iVar19 = iVar20;
      func_0x00010871e0ac(auStack_e38);
      func_0x00010871e610(CONCAT44(uStack_cf4,iStack_cf8));
      func_0x00010871e6a0();
      uVar12 = (uint)bStack_e00;
    }
    bVar6 = (uVar12 & 0xff) == 5;
    bVar5 = bVar6 && cStack_ddc == '\f';
    if ((((bVar6 && cStack_ddc == '\f') && (func_0x00010871e508(uStack_de0), bVar5)) &&
        (lVar14 = lStack_108 - lStack_110, lStack_108 != lStack_110)) &&
       (FUN_108708704(&ppuStack_488,lStack_de8), lStack_108 - lStack_110 != lVar14)) {
      iVar19 = 0;
    }
    if (bStack_2b0 != 1 || lStack_2b8 != 1) {
      if (iVar19 != 2) {
        FUN_1088665d4(*plVar1,&ppuStack_488);
      }
      goto LAB_10871d460;
    }
    uVar7 = bStack_e00 == 7 || bStack_e00 == 2;
    if (((bStack_e00 == 7 || bStack_e00 == 2) &&
        (bVar5 = (uStack_de0 & 0xfffffffb) != 1, uVar7 = bVar5 || lStack_de8 == 1,
        !bVar5 && lStack_de8 != 1)) && (func_0x00010871e520(cStack_ddc), !(bool)uVar7))
    goto LAB_10871d460;
    plVar9 = plVar1;
    FUN_108720660(plVar1,auStack_e38);
    uVar3 = uStack_380;
    uVar15 = uStack_de0;
    uVar16 = uStack_df8;
    bVar2 = bStack_e00;
    uVar12 = (uint)bStack_e00;
    FUN_10871e8e8(&ppuStack_488,(long)(char)bStack_e00,uStack_de0,uStack_df8,uStack_df0);
    iVar20 = 0;
    if ((bool)uVar7) {
      iVar20 = iVar19;
    }
    bVar5 = bVar2 == 0x14;
    if ((0x14 < bVar2) || (func_0x00010871e164(1 << (ulong)(uVar12 & 0x1f)), bVar5)) {
      func_0x00010871f7d4();
      if (uStack_468 <= extraout_x8_03) {
        uVar7 = uVar15 == 0xe;
        uVar13 = extraout_x8_03;
        if (uVar15 < 0xf) {
          func_0x00010871f7c8();
          func_0x00010871e2ec();
          uVar13 = extraout_x8_04;
          if (((!(bool)uVar7) && (bVar5 = uVar12 == 0x14, uVar12 < 0x15)) &&
             (func_0x00010871e144(), uVar13 = extraout_x8_05, !bVar5)) goto LAB_10871dbfc;
        }
        uStack_148 = (uint)((int)uVar16 != 2);
        uStack_468 = uVar13;
        FUN_10871c970();
        iVar20 = 0;
        uStack_1a0 = (undefined4)uStack_d00;
        uStack_19c = (undefined1)((ulong)uStack_d00 >> 0x20);
        uVar15 = uStack_de0;
      }
LAB_10871dbfc:
      uVar7 = uVar15 == 0xe;
      if (uVar15 < 0xf) {
        func_0x00010871e80c();
        func_0x00010871e790();
        if (!(bool)uVar7) goto LAB_10871d660;
      }
      if (((bStack_2b0 & 1) == 0) || (lStack_2b8 <= lStack_de8)) {
        lStack_2b8 = lStack_de8;
        bStack_2b0 = 1;
        if (cStack_d58 == '\x01') {
          func_0x00010883f80c(auStack_db0,&ppuStack_488);
        }
        iVar20 = 0;
      }
    }
LAB_10871d660:
    if (((pcStack_450 == (char *)0x0) && ((uVar3 & 0xfe) != 0)) &&
       ((*(byte *)(alStack_918[0] + 0x250) & 1) == 0)) {
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_4a8 = 0;
      ppuStack_4b0 = &PTR_FUN_110a609a8;
      uStack_490 = 0x1cf;
      func_0x00010871e378(*(undefined8 *)(alStack_918[0] + 0x118));
      (*extraout_x8_00)();
      func_0x000107c2882c(&ppuStack_4b0);
    }
    bVar2 = bStack_448;
    pcVar10 = (char *)(long)(char)bStack_e00;
    func_0x00010871f4d8(pcVar10,(ulong)plVar9 & 0xffffffff);
    uStack_4b8 = SUB84(pcVar10,0);
    uStack_4b4 = (undefined1)((ulong)pcVar10 >> 0x20);
    if (((ulong)pcVar10 >> 0x20 & 1) == 0) {
      pcVar17 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)&uStack_4b8;
      func_0x00010871f344(pcVar10,uStack_de0,auStack_e20,uStack_df8,uStack_df0,uStack_ddb,
                          &ppuStack_488);
      pcVar17 = pcVar10;
    }
    bVar5 = bStack_e00 == 0x14;
    if (((0x14 < bStack_e00) || (func_0x00010871df48(), bVar5)) &&
       ((bVar5 = uStack_de0 == 0x1e, 0x1e < uStack_de0 || (func_0x00010871df90(), bVar5)))) {
      func_0x00010871e85c();
      plVar18 = *(long **)(alStack_918[0] + 0x118);
      func_0x00010871efa8();
      uStack_878 = 400;
      func_0x00010871e550();
      func_0x000107c278b8(acStack_4f8);
      pcVar10 = "true";
      if (bVar2 == 0) {
        pcVar10 = "false";
      }
      func_0x000107c28824(auStack_898,acStack_4f8,pcVar10);
      func_0x00010871e544();
      func_0x000107c278b8(auStack_510);
      func_0x00010871e84c();
      func_0x00010871e538();
      puVar11 = auStack_528;
      func_0x000107c278b8(puVar11);
      func_0x00010871e84c();
      func_0x000107c2884c(auStack_4e0,puVar11);
      func_0x00010871f4bc(*(undefined8 *)(*plVar18 + 0x50));
      func_0x000107c2882c(auStack_4e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_528);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_510);
      pcVar10 = acStack_4f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010871f5c0();
    }
    if (((ulong)pcVar17 & 1) == 0) {
LAB_10871d85c:
      bVar5 = bStack_e00 == 0x14;
      if (((0x14 < bStack_e00) || (func_0x00010871dfc0(), bVar5)) && ((int)plVar9 != 0)) {
        bVar5 = uStack_de0 == 0xe;
        uVar7 = bVar5;
        if (uStack_de0 < 0xf) {
          func_0x00010871e01c();
          uVar7 = true;
          if ((!bVar5) && (bVar5 = extraout_w8_00 == 0x14, uVar7 = bVar5, extraout_w8_00 < 0x15)) {
            func_0x00010871dfa8();
            uVar7 = true;
            if (!bVar5) goto LAB_10871d86c;
          }
        }
        func_0x00010871e800(auStack_e38);
        func_0x00010871ec5c();
        if (((ulong)pcVar10 & 1) != 0) {
          iVar20 = 0;
          goto LAB_10871da04;
        }
      }
LAB_10871d86c:
      if (iVar20 == 2) goto LAB_10871d460;
      uVar7 = 0;
    }
    else {
      if ((pcStack_450 == (char *)0xb) && (bStack_e00 < 0x15 && bStack_e00 != 9)) {
        if ((bStack_2b0 == 1) && (func_0x00010871eca0(), (int)pcVar10 != 0)) {
          pcVar10 = (char *)*plVar1;
          func_0x00010871f5c8();
          func_0x00010871f188();
          func_0x00010871f5b8();
          if ((cStack_530 == '\x01') &&
             (((bStack_678 >> 2 & 1) != 0 && (*(int *)(lStack_660 + 0xa8) == 0)))) {
            plVar18 = *(long **)(alStack_918[0] + 0x118);
            func_0x00010871efa8();
            uStack_878 = 399;
            func_0x00010871e574();
            func_0x000107c278b8(acStack_8d8);
            func_0x00010871e568();
            func_0x000107c28824(auStack_898,acStack_8d8,
                                *(undefined8 *)(extraout_x8_01 + ((ulong)plVar9 & 0xffffffff) * 8));
            func_0x00010871e2e0();
            func_0x000107c278b8(auStack_8f0);
            lVar14 = (long)(char)bStack_e00;
            func_0x000108841d8c(auStack_908,lVar14);
            func_0x00010871f4ac();
            func_0x000107c2884c(auStack_8c0,lVar14);
            (**(code **)(*plVar18 + 0x50))(plVar18,auStack_8c0);
            func_0x00010871eae0();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_908);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8f0);
            pcVar10 = acStack_8d8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            func_0x00010871f5c0();
            func_0x00010871ec90();
            uStack_458 = (uint)pcVar10;
            pcStack_450 = (char *)0xd;
          }
          func_0x00010871f170();
        }
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((bStack_e00 == 2) && ((bStack_2b0 & 1) != 0)) && (lStack_2b8 == lStack_de8)) {
        pcVar10 = (char *)*plVar1;
        func_0x00010871f5c8();
        func_0x00010871f188();
        func_0x00010871f5b8();
        if (cStack_530 == '\x01') {
          pcVar10 = (char *)0x0;
          func_0x00010871e370(auStack_6d8);
        }
        func_0x00010871f170();
      }
      uVar4 = 1 < uStack_170;
      uVar7 = uStack_170 == 2;
      if (((((bool)uVar7) &&
           (pcVar10 = pcStack_450, FUN_10871fb04(pcStack_450,uStack_458), (int)pcVar10 != 0)) &&
          ((func_0x00010871e55c(bStack_e00), !(bool)uVar4 || (bool)uVar7 &&
           (((bStack_448 & 1) != 0 && (uVar7 = uStack_380 == 1, (long)uStack_380 < 2)))))) &&
         (bVar6 = (uStack_458 & 0xfffffffb) == 1,
         uVar7 = (uStack_458 == 2 || uStack_458 == 0x1d) || bVar6,
         (uStack_458 == 2 || uStack_458 == 0x1d) || bVar6)) {
        pcStack_450 = (char *)0x1;
      }
      func_0x00010871f704();
      if ((bool)uVar7) {
        uStack_380 = (ulong)bStack_dd9;
      }
      if (cStack_d38 == '\x01') {
        func_0x00010871e18c(auStack_e38);
      }
      else {
        if (bStack_e00 == 0xf) {
          bVar5 = true;
        }
        if (!bVar5) {
          func_0x00010871e368(&ppuStack_488);
        }
      }
      if (cStack_db8 == '\x01') {
        func_0x00010871e180(auStack_e38);
      }
      else if (lStack_3b8 != lStack_3b0) {
        func_0x00010871e360(&ppuStack_488);
      }
      if ((byte)uStack_cf4 == 1 && iStack_cf8 == 1) {
        pcStack_450 = (char *)0x10;
      }
      if (((cStack_118 == '\x01') && (lStack_120 != 0)) && (((byte)uStack_cf4 & 1) == 0)) {
        cStack_118 = '\0';
      }
      iVar20 = 0;
      if (((bStack_e00 != 7) || ((byte)uStack_cf4 == 0)) || (iStack_cf8 != 2)) goto LAB_10871d85c;
      iVar20 = 0;
      lStack_120 = 1;
      cStack_118 = '\x01';
      uVar7 = 1;
    }
LAB_10871da04:
    FUN_1088665d4(*plVar1,&ppuStack_488);
    func_0x00010871e320(*(undefined8 *)(alStack_918[0] + 0x158));
    (*extraout_x8_02)();
    if ((iVar20 == 0) &&
       (((func_0x00010871ef84(), (bool)uVar7 || ((bStack_c8 & 1) == 0)) && ((bStack_2a0 & 1) == 0)))
       ) {
      func_0x00010871edd8();
      func_0x00010871e500();
    }
    FUN_10871bca8(auStack_cf0,&ppuStack_488);
  }
  func_0x000107c288d0(&ppuStack_488);
  func_0x00010871e2c8();
  FUN_10871be98(auStack_e38);
  func_0x000107c279dc(auStack_ed8);
  FUN_1086d0498(auStack_eb8);
  func_0x000107c279dc(auStack_e58);
  FUN_1086a5ff0(*param_1);
  FUN_1086a600c();
  func_0x000107c288cc(auStack_cf0);
code_r0x000100671834:
  func_0x000107c296cc(alStack_918);
  return;
}



/* Entry: 10871ddf4; end: 10871de1f;  */

void FUN_10871ddf4(long param_1)

{
  long unaff_x19;
  
  func_0x000100865118();
  if (param_1 != 0) {
    func_0x000100869dc8();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010871f85c();
    }
  }
  return;
}



/* Entry: 10871de20; end: 10871de3f;  */

void FUN_10871de20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108719b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10871de40; end: 10871de43;  */

void FUN_10871de40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10871de44; end: 10871de8b;  */

void FUN_10871de44(long param_1)

{
  long alStack_30 [2];
  
  FUN_10871ddf4(alStack_30,*(undefined8 *)(param_1 + 0x10));
  if (alStack_30[0] != 0) {
    FUN_1086a618c(*(undefined8 *)(alStack_30[0] + 0x118));
  }
  func_0x000107c296cc(alStack_30);
  return;
}



/* Entry: 10871de8c; end: 10871deab;  */

void FUN_10871de8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108719b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10871deac; end: 10871deaf;  */

void FUN_10871deac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10871deb0; end: 10871ded3;  */

void FUN_10871deb0(void)

{
  func_0x00010871ef90();
  func_0x000107c31408();
  return;
}



/* Entry: 10871ded4; end: 10871e8bf;  */

void FUN_10871ded4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10871e8c0; end: 10871e8d7;  */

void FUN_10871e8c0(void)

{
  func_0x000108708c48();
  return;
}



/* Entry: 10871e8d8; end: 10871e8e7;  */

long FUN_10871e8d8(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + 0x369;
  if ((*(byte *)(unaff_x20 + 0x36a) & 1) == 0) {
    plVar1 = *(long **)(unaff_x20 + 0x340);
    if (plVar1 == (long *)0x0) {
      lVar2 = unaff_x20 + 0x368;
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1,unaff_x20 + 0x350,*(undefined1 *)(unaff_x20 + 0x368));
      *(ushort *)(unaff_x20 + 0x369) = (ushort)plVar1 | 0x100;
    }
  }
  return lVar2;
}



/* Entry: 10871e8e8; end: 10871e8fb;  */

void FUN_10871e8e8(void)

{
  func_0x000108708c48();
  return;
}



/* Entry: 10871e8fc; end: 10871f867;  */

void FUN_10871e8fc(void)

{
  return;
}



/* Entry: 10871f868; end: 10871f9b7;  */

undefined8
FUN_10871f868(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  uint auStack_638 [2];
  undefined1 auStack_630 [16];
  undefined1 auStack_620 [8];
  char cStack_618;
  long alStack_468 [22];
  byte bStack_3b8;
  long alStack_3b0 [22];
  byte bStack_300;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined1 auStack_1b0 [40];
  undefined **ppuStack_188;
  byte bStack_58;
  
  if ((*(uint *)(param_7 + 0x30) | 4) != 5) {
    return 0;
  }
  if (*(uint *)(param_7 + 0x30) == 5 || *(long *)(param_7 + 0x150) != *(long *)(param_7 + 0x158)) {
    plVar3 = *(long **)(param_7 + 0x198);
    if (*(long **)(param_7 + 0x180) == *(long **)(param_7 + 0x188)) {
      if (plVar3 == *(long **)(param_7 + 0x1a0)) {
        uVar5 = (uint)(*(int *)(param_7 + 0x340) != 0);
        *(undefined8 *)(param_7 + 0x28) = *(undefined8 *)(param_7 + 0x20);
        goto LAB_10871fca4;
      }
      lVar6 = *plVar3;
    }
    else {
      lVar6 = **(long **)(param_7 + 0x180);
      if ((plVar3 != *(long **)(param_7 + 0x1a0)) && (*plVar3 <= lVar6)) {
        lVar6 = *plVar3;
      }
    }
    if (lVar6 == *(long *)(param_7 + 0x28)) {
      return 0;
    }
    *(long *)(param_7 + 0x28) = lVar6;
    uVar5 = 1;
LAB_10871fca4:
    *(uint *)(param_7 + 0x344) = uVar5;
    return 1;
  }
  if ((*(char *)(param_7 + 0x118) == '\x01') &&
     ((*(char *)(param_7 + 0x128) != '\x01' ||
      (*(long *)(param_7 + 0x120) < *(long *)(param_7 + 0x110))))) {
    func_0x0001087205f8();
    func_0x0001087205d4();
    return unaff_x20;
  }
  func_0x00010872064c();
  if (*(char *)(param_3 + 0x268) == '\x01') {
    *(undefined4 *)(param_3 + 0x30) = 2;
    *(undefined8 *)(param_3 + 0x38) = 0xb;
    func_0x000107c28d24(param_3 + 0xe8,param_3 + 0x270);
    func_0x000107c28d24(param_3 + 0x238,param_3 + 0x290);
    *(undefined1 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x108) = 0xb;
    func_0x000108720614();
    return 1;
  }
  auStack_200[0] = 0;
  bStack_58 = 0;
  if (*(char *)(param_3 + 0x1d8) != '\x01') {
LAB_10871fdfc:
    if (*(char *)(param_3 + 0x40) == '\x01' && *(long *)(param_3 + 0x108) < 2) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      *(undefined1 *)(param_3 + 0x40) = 1;
      *(undefined8 *)(param_3 + 0x108) = 1;
    }
    goto LAB_10871ff88;
  }
  FUN_108862e68(auStack_638,*param_4,param_3,*(undefined8 *)(param_3 + 0x1d0));
  func_0x000107c28998(alStack_3b0,auStack_638);
  func_0x000107c2894c(auStack_200,alStack_3b0);
  func_0x000107c288dc(alStack_3b0);
  func_0x000107c28948(auStack_638);
  if ((bStack_58 & 1) == 0) goto LAB_10871fdfc;
  *(undefined1 *)(param_3 + 0x40) = 1;
  *(undefined4 *)(param_3 + 0x30) = 2;
  *(undefined8 *)(param_3 + 0x38) = 1;
  *(undefined8 *)(param_3 + 0x108) = 1;
  FUN_108864dac(auStack_638,*param_4,auStack_200,uStack_1e8);
  func_0x000107c28ef4(alStack_3b0,auStack_638);
  _bzero(alStack_468,0xb8);
  while ((((bStack_300 & 1) != 0 || ((bStack_3b8 & 1) != 0)) && (alStack_3b0[0] != alStack_468[0])))
  {
    FUN_1086a1330(alStack_3b0);
    FUN_1086a0710();
    func_0x000107c28ff0(alStack_3b0);
  }
  func_0x000108720630(alStack_468);
  func_0x000108720630(alStack_3b0);
  func_0x000107c28fe8(auStack_638);
  uVar5 = (uint)auStack_1b0;
  func_0x000107c29e78();
  FUN_10870b048(alStack_3b0,auStack_1b0);
  if (uVar5 == 0xe) {
    uVar5 = 2;
LAB_10871feec:
    *(uint *)(param_3 + 0x30) = uVar5;
    func_0x000107c28d24(param_3 + 0xe8,alStack_3b0);
    if (uVar5 == 8) {
LAB_10871ff20:
      uVar7 = 2;
      goto LAB_10871ff24;
    }
    if (uVar5 == 7) {
code_r0x00010871ff0c:
      uVar7 = 5;
      goto LAB_10871ff24;
    }
    if ((uVar5 & 0xffffffef) == 3) goto LAB_10871ff20;
    if (uVar5 - 9 < 2) {
      uVar7 = 1;
      goto LAB_10871ff24;
    }
    uVar7 = 3;
    switch(uVar5) {
    case 0xb:
    case 0xd:
      break;
    case 0xc:
      goto LAB_10871ff20;
    default:
      if ((uVar5 & 0xfffffffb) == 1) {
        puVar4 = auStack_1b0;
        FUN_1087206a8();
        uVar7 = (ulong)puVar4 & 0xffffffff;
      }
      else {
        uVar5 = uVar5 - 0x14;
        if ((10 < uVar5) || ((0x607U >> (ulong)(uVar5 & 0x1f) & 1) == 0)) goto LAB_10871ff28;
        uVar7 = *(ulong *)(&UNK_10df4ae98 + (ulong)uVar5 * 8);
      }
      break;
    case 0xf:
      uVar7 = 0xe;
      break;
    case 0x10:
      uVar7 = param_3 + 0xe8;
      FUN_1086f7298(uVar7,param_1);
      if ((uVar7 & 1) != 0) {
        uVar7 = 0xf;
        break;
      }
      goto LAB_10871ff28;
    case 0x11:
      goto code_r0x00010871ff0c;
    case 0x12:
      uVar7 = 4;
    }
LAB_10871ff24:
    *(ulong *)(param_3 + 0x38) = uVar7;
LAB_10871ff28:
    lVar6 = param_3 + 0xe8;
    func_0x000107c28f58(lVar6,param_1);
    if ((int)lVar6 != 0) {
      func_0x000107c28ee4(auStack_638,*param_4,auStack_200);
      puVar4 = auStack_1b0;
      FUN_1086a5324(puVar4,auStack_620,param_1,param_2);
      *(char *)(param_3 + 0x40) = (char)puVar4;
      func_0x000107c287e4(auStack_638);
    }
    FUN_10871fb2c(param_3,auStack_1b0);
  }
  else {
    if (uVar5 == 0x11) {
      ppuVar1 = &PTR_PTR_113280c30;
      if (ppuStack_188 != (undefined **)0x0) {
        ppuVar1 = ppuStack_188;
      }
      ppuVar2 = &PTR_PTR_113280be8;
      if ((undefined **)ppuVar1[0x10] != (undefined **)0x0) {
        ppuVar2 = (undefined **)ppuVar1[0x10];
      }
      FUN_10884668c(auStack_638,ppuVar2,param_1);
      if (cStack_618 == '\x01') {
        func_0x000107c28d24(alStack_3b0,auStack_630);
      }
      func_0x000107c279dc(auStack_630);
      uVar5 = auStack_638[0];
    }
    if ((6 < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0x51U) == 0)) goto LAB_10871feec;
  }
  func_0x000108720614();
  func_0x000107c279dc(alStack_3b0);
  uVar8 = 1;
LAB_10871ff88:
  func_0x000107c288dc(auStack_200);
  return uVar8;
}



/* Entry: 10871f9b8; end: 10871f9cb;  */

undefined8 FUN_10871f9b8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  undefined8 *in_x7;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint auStack_638 [2];
  undefined1 auStack_630 [16];
  undefined1 auStack_620 [8];
  char cStack_618;
  long alStack_468 [22];
  byte bStack_3b8;
  long alStack_3b0 [22];
  byte bStack_300;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined1 auStack_1b0 [40];
  undefined **ppuStack_188;
  byte bStack_58;
  
  if (*(char *)(in_x6 + 0x268) == '\x01') {
    *(undefined4 *)(in_x6 + 0x30) = 2;
    *(undefined8 *)(in_x6 + 0x38) = 0xb;
    func_0x000107c28d24(in_x6 + 0xe8,in_x6 + 0x270);
    func_0x000107c28d24(in_x6 + 0x238,in_x6 + 0x290);
    *(undefined1 *)(in_x6 + 0x40) = 0;
    *(undefined8 *)(in_x6 + 0x108) = 0xb;
    func_0x000108720614();
    return 1;
  }
  auStack_200[0] = 0;
  bStack_58 = 0;
  if (*(char *)(in_x6 + 0x1d8) != '\x01') {
LAB_10871fdfc:
    if (*(char *)(in_x6 + 0x40) == '\x01' && *(long *)(in_x6 + 0x108) < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      *(undefined1 *)(in_x6 + 0x40) = 1;
      *(undefined8 *)(in_x6 + 0x108) = 1;
    }
    goto LAB_10871ff88;
  }
  FUN_108862e68(auStack_638,*in_x7,in_x6,*(undefined8 *)(in_x6 + 0x1d0));
  func_0x000107c28998(alStack_3b0,auStack_638);
  func_0x000107c2894c(auStack_200,alStack_3b0);
  func_0x000107c288dc(alStack_3b0);
  func_0x000107c28948(auStack_638);
  if ((bStack_58 & 1) == 0) goto LAB_10871fdfc;
  *(undefined1 *)(in_x6 + 0x40) = 1;
  *(undefined4 *)(in_x6 + 0x30) = 2;
  *(undefined8 *)(in_x6 + 0x38) = 1;
  *(undefined8 *)(in_x6 + 0x108) = 1;
  FUN_108864dac(auStack_638,*in_x7,auStack_200,uStack_1e8);
  func_0x000107c28ef4(alStack_3b0,auStack_638);
  _bzero(alStack_468,0xb8);
  while ((((bStack_300 & 1) != 0 || ((bStack_3b8 & 1) != 0)) && (alStack_3b0[0] != alStack_468[0])))
  {
    FUN_1086a1330(alStack_3b0);
    FUN_1086a0710();
    func_0x000107c28ff0(alStack_3b0);
  }
  func_0x000108720630(alStack_468);
  func_0x000108720630(alStack_3b0);
  func_0x000107c28fe8(auStack_638);
  uVar7 = (uint)auStack_1b0;
  func_0x000107c29e78();
  FUN_10870b048(alStack_3b0,auStack_1b0);
  if (uVar7 == 0xe) {
    uVar7 = 2;
LAB_10871feec:
    *(uint *)(in_x6 + 0x30) = uVar7;
    func_0x000107c28d24(in_x6 + 0xe8,alStack_3b0);
    if (uVar7 == 8) {
LAB_10871ff20:
      uVar5 = 2;
      goto LAB_10871ff24;
    }
    if (uVar7 == 7) {
code_r0x00010871ff0c:
      uVar5 = 5;
      goto LAB_10871ff24;
    }
    if ((uVar7 & 0xffffffef) == 3) goto LAB_10871ff20;
    if (uVar7 - 9 < 2) {
      uVar5 = 1;
      goto LAB_10871ff24;
    }
    uVar5 = 3;
    switch(uVar7) {
    case 0xb:
    case 0xd:
      break;
    case 0xc:
      goto LAB_10871ff20;
    default:
      if ((uVar7 & 0xfffffffb) == 1) {
        puVar4 = auStack_1b0;
        FUN_1087206a8();
        uVar5 = (ulong)puVar4 & 0xffffffff;
      }
      else {
        uVar7 = uVar7 - 0x14;
        if ((10 < uVar7) || ((0x607U >> (ulong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_10871ff28;
        uVar5 = *(ulong *)(&UNK_10df4ae98 + (ulong)uVar7 * 8);
      }
      break;
    case 0xf:
      uVar5 = 0xe;
      break;
    case 0x10:
      uVar5 = in_x6 + 0xe8;
      FUN_1086f7298(uVar5,in_x4);
      if ((uVar5 & 1) != 0) {
        uVar5 = 0xf;
        break;
      }
      goto LAB_10871ff28;
    case 0x11:
      goto code_r0x00010871ff0c;
    case 0x12:
      uVar5 = 4;
    }
LAB_10871ff24:
    *(ulong *)(in_x6 + 0x38) = uVar5;
LAB_10871ff28:
    lVar3 = in_x6 + 0xe8;
    func_0x000107c28f58(lVar3,in_x4);
    if ((int)lVar3 != 0) {
      func_0x000107c28ee4(auStack_638,*in_x7,auStack_200);
      puVar4 = auStack_1b0;
      FUN_1086a5324(puVar4,auStack_620,in_x4,in_x5);
      *(char *)(in_x6 + 0x40) = (char)puVar4;
      func_0x000107c287e4(auStack_638);
    }
    FUN_10871fb2c(in_x6,auStack_1b0);
  }
  else {
    if (uVar7 == 0x11) {
      ppuVar1 = &PTR_PTR_113280c30;
      if (ppuStack_188 != (undefined **)0x0) {
        ppuVar1 = ppuStack_188;
      }
      ppuVar2 = &PTR_PTR_113280be8;
      if ((undefined **)ppuVar1[0x10] != (undefined **)0x0) {
        ppuVar2 = (undefined **)ppuVar1[0x10];
      }
      FUN_10884668c(auStack_638,ppuVar2,in_x4);
      if (cStack_618 == '\x01') {
        func_0x000107c28d24(alStack_3b0,auStack_630);
      }
      func_0x000107c279dc(auStack_630);
      uVar7 = auStack_638[0];
    }
    if ((6 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x51U) == 0)) goto LAB_10871feec;
  }
  func_0x000108720614();
  func_0x000107c279dc(alStack_3b0);
  uVar6 = 1;
LAB_10871ff88:
  func_0x000107c288dc(auStack_200);
  return uVar6;
}



/* Entry: 10871f9cc; end: 10871fa4f;  */

undefined8
FUN_10871f9cc(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  char *pcVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_7 + 0x40) = 1;
  if (*(char *)(param_9 + 0x298) == '\x01') {
    pcVar1 = (char *)(param_9 + 0x268);
    func_0x000107c289e8();
    if (*pcVar1 != '\x01') goto LAB_10871fa24;
  }
  uVar2 = *(ulong *)(param_7 + 0x38);
  FUN_10871fb04(uVar2,*(undefined4 *)(param_7 + 0x30));
  if ((uVar2 & 1) != 0) {
    return 1;
  }
LAB_10871fa24:
  *(long *)(param_7 + 0x28) = param_4 / 1000;
  *(uint *)(param_7 + 0x344) = (uint)(param_3 != 2);
  return 1;
}



/* Entry: 10871fa50; end: 10871fb03;  */

undefined8
FUN_10871fa50(undefined8 param_1,undefined4 param_2,int param_3,long param_4,undefined8 param_5,
             undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_7 + 0x30) == 0x1a) {
    if (*(char *)(param_9 + 0x260) == '\x01') {
      pcVar1 = (char *)(param_9 + 0x230);
      func_0x000107c289e8();
      if (*pcVar1 != '\x01') goto LAB_10871fae8;
    }
    *(undefined4 *)(param_7 + 0x30) = param_2;
    uVar2 = 1;
    *(undefined8 *)(param_7 + 0x38) = 1;
    func_0x000107c28d24(param_7 + 0xe8,param_1);
    *(undefined1 *)(param_7 + 0x40) = 0;
    *(undefined8 *)(param_7 + 0x108) = 1;
    *(uint *)(param_7 + 0x340) = (uint)(param_3 != 2);
    *(long *)(param_7 + 0x20) = param_4 / 1000;
    *(long *)(param_7 + 0x28) = param_4 / 1000;
    *(uint *)(param_7 + 0x344) = (uint)(param_3 != 2);
  }
  else {
LAB_10871fae8:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10871fb04; end: 10871fb2b;  */

bool FUN_10871fb04(long param_1,uint param_2)

{
  return param_1 == 0xd && (param_2 & 0xfffffffb) == 1 ||
         (param_2 == 2 || param_2 == 0x1d) && param_1 == 0xb;
}



/* Entry: 10871fb2c; end: 10871fc37;  */

undefined8 FUN_10871fb2c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  uVar3 = *(uint *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x38);
  if (((uVar3 == 0x1d || uVar3 == 2) && (lVar5 == 1 || lVar5 == 0x13)) ||
     (lVar5 == 1 && (uVar3 & 0xfffffffb) == 1)) {
    ppuVar4 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
      ppuVar4 = *(undefined ***)(param_2 + 0x30);
    }
    if (*(int *)(ppuVar4 + 0x19) != 0) {
      ppuVar4 = ppuVar4 + 0x18;
      func_0x0001086afea4(ppuVar4,0);
      ppuVar1 = &PTR_PTR_11326cb58;
      if ((undefined **)ppuVar4[3] != (undefined **)0x0) {
        ppuVar1 = (undefined **)ppuVar4[3];
      }
      FUN_10865ecd8(auStack_40,ppuVar1);
      func_0x000107c29ee0(auStack_58,auStack_40);
      FUN_10869026c(param_1 + 0xe8,auStack_58);
      func_0x000107c27914(auStack_58);
      uVar2 = 0xb;
      if (*(int *)(param_1 + 0x30) != 0x1d && *(int *)(param_1 + 0x30) != 2) {
        uVar2 = 0xd;
      }
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      func_0x000107c2a2e0(auStack_40);
      return 1;
    }
  }
  return 0;
}



/* Entry: 10871fc38; end: 10871fcaf;  */

undefined8 FUN_10871fc38(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x198);
  if (*(long **)(param_1 + 0x180) == *(long **)(param_1 + 0x188)) {
    if (plVar1 == *(long **)(param_1 + 0x1a0)) {
      uVar2 = (uint)(*(int *)(param_1 + 0x340) != 0);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_10871fca4;
    }
    lVar3 = *plVar1;
  }
  else {
    lVar3 = **(long **)(param_1 + 0x180);
    if ((plVar1 != *(long **)(param_1 + 0x1a0)) && (*plVar1 <= lVar3)) {
      lVar3 = *plVar1;
    }
  }
  if (lVar3 == *(long *)(param_1 + 0x28)) {
    return 0;
  }
  *(long *)(param_1 + 0x28) = lVar3;
  uVar2 = 1;
LAB_10871fca4:
  *(uint *)(param_1 + 0x344) = uVar2;
  return 1;
}



/* Entry: 10871fcb0; end: 1087200eb;  */

undefined8 FUN_10871fcb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint auStack_638 [2];
  undefined1 auStack_630 [16];
  undefined1 auStack_620 [8];
  char cStack_618;
  long alStack_468 [22];
  byte bStack_3b8;
  long alStack_3b0 [22];
  byte bStack_300;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined1 auStack_1b0 [40];
  undefined **ppuStack_188;
  byte bStack_58;
  
  if (*(char *)(param_3 + 0x268) == '\x01') {
    *(undefined4 *)(param_3 + 0x30) = 2;
    *(undefined8 *)(param_3 + 0x38) = 0xb;
    func_0x000107c28d24(param_3 + 0xe8,param_3 + 0x270);
    func_0x000107c28d24(param_3 + 0x238,param_3 + 0x290);
    *(undefined1 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x108) = 0xb;
    func_0x000108720614();
    return 1;
  }
  auStack_200[0] = 0;
  bStack_58 = 0;
  if (*(char *)(param_3 + 0x1d8) != '\x01') {
LAB_10871fdfc:
    if (*(char *)(param_3 + 0x40) == '\x01' && *(long *)(param_3 + 0x108) < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
      *(undefined1 *)(param_3 + 0x40) = 1;
      *(undefined8 *)(param_3 + 0x108) = 1;
    }
    goto LAB_10871ff88;
  }
  FUN_108862e68(auStack_638,*param_4,param_3,*(undefined8 *)(param_3 + 0x1d0));
  func_0x000107c28998(alStack_3b0,auStack_638);
  func_0x000107c2894c(auStack_200,alStack_3b0);
  func_0x000107c288dc(alStack_3b0);
  func_0x000107c28948(auStack_638);
  if ((bStack_58 & 1) == 0) goto LAB_10871fdfc;
  *(undefined1 *)(param_3 + 0x40) = 1;
  *(undefined4 *)(param_3 + 0x30) = 2;
  *(undefined8 *)(param_3 + 0x38) = 1;
  *(undefined8 *)(param_3 + 0x108) = 1;
  FUN_108864dac(auStack_638,*param_4,auStack_200,uStack_1e8);
  func_0x000107c28ef4(alStack_3b0,auStack_638);
  _bzero(alStack_468,0xb8);
  while ((((bStack_300 & 1) != 0 || ((bStack_3b8 & 1) != 0)) && (alStack_3b0[0] != alStack_468[0])))
  {
    FUN_1086a1330(alStack_3b0);
    FUN_1086a0710();
    func_0x000107c28ff0(alStack_3b0);
  }
  func_0x000108720630(alStack_468);
  func_0x000108720630(alStack_3b0);
  func_0x000107c28fe8(auStack_638);
  uVar7 = (uint)auStack_1b0;
  func_0x000107c29e78();
  FUN_10870b048(alStack_3b0,auStack_1b0);
  if (uVar7 == 0xe) {
    uVar7 = 2;
LAB_10871feec:
    *(uint *)(param_3 + 0x30) = uVar7;
    func_0x000107c28d24(param_3 + 0xe8,alStack_3b0);
    if (uVar7 == 8) {
LAB_10871ff20:
      uVar5 = 2;
      goto LAB_10871ff24;
    }
    if (uVar7 == 7) {
code_r0x00010871ff0c:
      uVar5 = 5;
      goto LAB_10871ff24;
    }
    if ((uVar7 & 0xffffffef) == 3) goto LAB_10871ff20;
    if (uVar7 - 9 < 2) {
      uVar5 = 1;
      goto LAB_10871ff24;
    }
    uVar5 = 3;
    switch(uVar7) {
    case 0xb:
    case 0xd:
      break;
    case 0xc:
      goto LAB_10871ff20;
    default:
      if ((uVar7 & 0xfffffffb) == 1) {
        puVar4 = auStack_1b0;
        FUN_1087206a8();
        uVar5 = (ulong)puVar4 & 0xffffffff;
      }
      else {
        uVar7 = uVar7 - 0x14;
        if ((10 < uVar7) || ((0x607U >> (ulong)(uVar7 & 0x1f) & 1) == 0)) goto LAB_10871ff28;
        uVar5 = *(ulong *)(&UNK_10df4ae98 + (ulong)uVar7 * 8);
      }
      break;
    case 0xf:
      uVar5 = 0xe;
      break;
    case 0x10:
      uVar5 = param_3 + 0xe8;
      FUN_1086f7298(uVar5,param_1);
      if ((uVar5 & 1) != 0) {
        uVar5 = 0xf;
        break;
      }
      goto LAB_10871ff28;
    case 0x11:
      goto code_r0x00010871ff0c;
    case 0x12:
      uVar5 = 4;
    }
LAB_10871ff24:
    *(ulong *)(param_3 + 0x38) = uVar5;
LAB_10871ff28:
    lVar3 = param_3 + 0xe8;
    func_0x000107c28f58(lVar3,param_1);
    if ((int)lVar3 != 0) {
      func_0x000107c28ee4(auStack_638,*param_4,auStack_200);
      puVar4 = auStack_1b0;
      FUN_1086a5324(puVar4,auStack_620,param_1,param_2);
      *(char *)(param_3 + 0x40) = (char)puVar4;
      func_0x000107c287e4(auStack_638);
    }
    FUN_10871fb2c(param_3,auStack_1b0);
  }
  else {
    if (uVar7 == 0x11) {
      ppuVar1 = &PTR_PTR_113280c30;
      if (ppuStack_188 != (undefined **)0x0) {
        ppuVar1 = ppuStack_188;
      }
      ppuVar2 = &PTR_PTR_113280be8;
      if ((undefined **)ppuVar1[0x10] != (undefined **)0x0) {
        ppuVar2 = (undefined **)ppuVar1[0x10];
      }
      FUN_10884668c(auStack_638,ppuVar2,param_1);
      if (cStack_618 == '\x01') {
        func_0x000107c28d24(alStack_3b0,auStack_630);
      }
      func_0x000107c279dc(auStack_630);
      uVar7 = auStack_638[0];
    }
    if ((6 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x51U) == 0)) goto LAB_10871feec;
  }
  func_0x000108720614();
  func_0x000107c279dc(alStack_3b0);
  uVar6 = 1;
LAB_10871ff88:
  func_0x000107c288dc(auStack_200);
  return uVar6;
}



/* Entry: 1087200ec; end: 10872035f;  */

ulong FUN_1087200ec(byte param_1,int param_2,undefined4 param_3,uint param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  
  pbVar3 = &UNK_10df4ab14;
  lVar5 = 900;
  do {
    if ((param_5 <= pbVar3[2]) && (pbVar3[-2] == param_1)) {
      if ((pbVar3[-1] == 0) || ((param_2 != 1) != (pbVar3[-1] == 1))) {
        bVar1 = pbVar3[1];
        if ((bVar1 == param_4) || (bVar1 == 0xff)) {
          switch(param_3) {
          case 1:
            if ((*pbVar3 & 0xfd) == 0) {
code_r0x000108720320:
              uVar2 = *(uint *)(pbVar3 + 3);
              uVar4 = uVar2 & 0xffffff00;
              if (bVar1 == 0xff) {
                uVar4 = uVar2 & 0xffff00 | param_4 << 0x18;
              }
              lVar5 = 1;
              goto code_r0x000108720350;
            }
            break;
          case 2:
          case 0x1d:
            if (*pbVar3 == 3) goto code_r0x000108720320;
            break;
          case 3:
          case 0x13:
            if (*pbVar3 == 5) goto code_r0x000108720320;
            break;
          case 4:
            if (*pbVar3 == 4) goto code_r0x000108720320;
            break;
          case 5:
            if (*pbVar3 - 1 < 2) goto code_r0x000108720320;
            break;
          case 7:
            if (*pbVar3 == 9) goto code_r0x000108720320;
            break;
          case 8:
            if (*pbVar3 == 7) goto code_r0x000108720320;
            break;
          case 9:
          case 10:
            if (*pbVar3 == 6) goto code_r0x000108720320;
            break;
          case 0xb:
            if (*pbVar3 == 8) goto code_r0x000108720320;
            break;
          case 0xc:
            if (*pbVar3 == 10) goto code_r0x000108720320;
            break;
          case 0xd:
            if (*pbVar3 == 0xb) goto code_r0x000108720320;
            break;
          case 0xe:
            if (*pbVar3 == 0xc) goto code_r0x000108720320;
            break;
          case 0xf:
            if (*pbVar3 == 0xd) goto code_r0x000108720320;
            break;
          case 0x10:
            if (*pbVar3 == 0xe) goto code_r0x000108720320;
            break;
          case 0x11:
            if (*pbVar3 == 0x10) goto code_r0x000108720320;
            break;
          case 0x12:
            if (*pbVar3 == 0xf) goto code_r0x000108720320;
            break;
          case 0x14:
            if (*pbVar3 == 0x11) goto code_r0x000108720320;
            break;
          case 0x15:
            if (*pbVar3 == 0x12) goto code_r0x000108720320;
            break;
          case 0x16:
            if (*pbVar3 == 0x13) goto code_r0x000108720320;
            break;
          case 0x17:
            if (*pbVar3 == 0x14) goto code_r0x000108720320;
            break;
          case 0x18:
            if (*pbVar3 == 0x15) goto code_r0x000108720320;
            break;
          case 0x19:
            if (*pbVar3 == 0x16) goto code_r0x000108720320;
            break;
          case 0x1a:
            if (*pbVar3 == 0x17) goto code_r0x000108720320;
            break;
          case 0x1b:
            if (*pbVar3 == 0x18) goto code_r0x000108720320;
            break;
          case 0x1c:
            if (*pbVar3 == 0x19) goto code_r0x000108720320;
            break;
          case 0x1e:
            if (*pbVar3 == 0x1a) goto code_r0x000108720320;
          }
        }
      }
    }
    lVar5 = lVar5 + -9;
    pbVar3 = pbVar3 + 9;
  } while (lVar5 != 0);
  uVar4 = 0;
  lVar5 = 0;
  uVar2 = 0;
code_r0x000108720350:
  return (ulong)(uVar2 & 0xff | uVar4) | lVar5 << 0x20;
}



/* Entry: 108720360; end: 10872053f;  */

/* WARNING: Removing unreachable block (ram,0x00010871fd7c) */
/* WARNING: Removing unreachable block (ram,0x00010871fdc0) */
/* WARNING: Removing unreachable block (ram,0x00010871fdc8) */
/* WARNING: Removing unreachable block (ram,0x00010871fdd0) */
/* WARNING: Removing unreachable block (ram,0x00010871fde0) */
/* WARNING: Removing unreachable block (ram,0x00010871fe28) */
/* WARNING: Removing unreachable block (ram,0x00010871fee8) */
/* WARNING: Removing unreachable block (ram,0x00010871fe64) */
/* WARNING: Removing unreachable block (ram,0x00010871fe6c) */
/* WARNING: Removing unreachable block (ram,0x00010871fe7c) */
/* WARNING: Removing unreachable block (ram,0x00010871fe90) */
/* WARNING: Removing unreachable block (ram,0x00010871feb4) */
/* WARNING: Removing unreachable block (ram,0x00010871fec0) */
/* WARNING: Removing unreachable block (ram,0x00010871fec8) */
/* WARNING: Removing unreachable block (ram,0x00010871fed0) */
/* WARNING: Removing unreachable block (ram,0x00010871feec) */
/* WARNING: Removing unreachable block (ram,0x00010871ff04) */
/* WARNING: Removing unreachable block (ram,0x00010871ff14) */
/* WARNING: Removing unreachable block (ram,0x00010871ffb0) */
/* WARNING: Removing unreachable block (ram,0x00010871ffbc) */
/* WARNING: Removing unreachable block (ram,0x00010871ffc4) */
/* WARNING: Removing unreachable block (ram,0x00010871ffd0) */
/* WARNING: Removing unreachable block (ram,0x000108720028) */
/* WARNING: Removing unreachable block (ram,0x00010871ff0c) */
/* WARNING: Removing unreachable block (ram,0x000108720010) */
/* WARNING: Removing unreachable block (ram,0x000108720020) */
/* WARNING: Removing unreachable block (ram,0x00010871ffec) */
/* WARNING: Removing unreachable block (ram,0x00010871fff4) */
/* WARNING: Removing unreachable block (ram,0x000108720030) */
/* WARNING: Removing unreachable block (ram,0x00010872003c) */
/* WARNING: Removing unreachable block (ram,0x000108720048) */
/* WARNING: Removing unreachable block (ram,0x000108720000) */
/* WARNING: Removing unreachable block (ram,0x00010871ff20) */
/* WARNING: Removing unreachable block (ram,0x00010871ff24) */
/* WARNING: Removing unreachable block (ram,0x00010871ff28) */
/* WARNING: Removing unreachable block (ram,0x00010871ff38) */
/* WARNING: Removing unreachable block (ram,0x00010871ff6c) */
/* WARNING: Removing unreachable block (ram,0x00010871fee4) */
/* WARNING: Removing unreachable block (ram,0x00010871ff78) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong FUN_108720360(byte *param_1,int param_2,long param_3,long param_4,undefined8 *param_5,
                   uint param_6,long param_7)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  int extraout_w8;
  int extraout_w8_00;
  long lVar7;
  uint uVar8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  ulong unaff_x20;
  ulong uVar9;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined1 auStack_638 [648];
  undefined1 auStack_3b0 [432];
  undefined1 auStack_200 [384];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  char cStack_68;
  
  bVar3 = *param_1;
  if (bVar3 != 0xff) {
    uStack_80 = in_stack_00000008;
    iVar1 = 2;
    if (param_2 != 0xe) {
      iVar1 = param_2;
    }
    *(int *)(param_7 + 0x30) = iVar1;
    if (*(char *)(param_3 + 0x18) == '\x01') {
      func_0x000107c28d24(param_7 + 0xe8,param_3);
      bVar3 = *param_1;
    }
    *(ulong *)(param_7 + 0x108) = (ulong)bVar3;
    func_0x00010872061c(auStack_78);
    if (cStack_68 == '\x01') {
      func_0x000108720638();
      *(undefined8 *)(param_7 + 0x20) = extraout_x9;
      *(uint *)(param_7 + 0x340) = (uint)(extraout_w8 != 2);
    }
    func_0x00010872061c(auStack_78);
    if (cStack_68 == '\x01') {
      func_0x000108720638();
      *(undefined8 *)(param_7 + 0x28) = extraout_x9_00;
      *(uint *)(param_7 + 0x344) = (uint)(extraout_w8_00 != 2);
    }
    *(ulong *)(param_7 + 0x38) = (ulong)param_1[3];
    if ((param_6 >> 8 & 1) != 0) {
      *(char *)(param_7 + 0x40) = (char)param_6;
    }
    return 1;
  }
  switch(param_1[3]) {
  case 0:
    if ((*(uint *)(param_7 + 0x30) | 4) != 5) {
      return 0;
    }
    if (*(uint *)(param_7 + 0x30) != 5 && *(long *)(param_7 + 0x150) == *(long *)(param_7 + 0x158))
    {
      if ((*(char *)(param_7 + 0x118) == '\x01') &&
         ((*(char *)(param_7 + 0x128) != '\x01' ||
          (*(long *)(param_7 + 0x120) < *(long *)(param_7 + 0x110))))) {
        func_0x0001087205f8();
        func_0x0001087205d4();
        return unaff_x20;
      }
      func_0x00010872064c();
      in_stack_00000010 = param_5;
      goto FUN_10871fcb0;
    }
    break;
  case 1:
    if (*(int *)(param_7 + 0x30) != 5) {
      return 0;
    }
    if (*(long *)(param_7 + 0x168) == *(long *)(param_7 + 0x170)) {
      if (*(long *)(param_7 + 0x150) != *(long *)(param_7 + 0x158)) {
        *(undefined4 *)(param_7 + 0x30) = 1;
        *(undefined8 *)(param_7 + 0x38) = 1;
        *(undefined8 *)(param_7 + 0x108) = 0x51;
        func_0x000108720614();
        return 1;
      }
      if ((*(char *)(param_7 + 0x118) == '\x01') &&
         ((*(char *)(param_7 + 0x128) != '\x01' ||
          (*(long *)(param_7 + 0x120) < *(long *)(param_7 + 0x110))))) {
        func_0x0001087205f8();
        func_0x0001087205d4();
        return unaff_x20;
      }
      func_0x00010872064c();
      in_stack_00000010 = param_5;
      goto FUN_10871fcb0;
    }
    break;
  case 2:
    param_4 = param_7;
FUN_10871fcb0:
    if (*(char *)(param_4 + 0x268) == '\x01') {
      *(undefined4 *)(param_4 + 0x30) = 2;
      *(undefined8 *)(param_4 + 0x38) = 0xb;
      func_0x000107c28d24(param_4 + 0xe8,param_4 + 0x270);
      func_0x000107c28d24(param_4 + 0x238,param_4 + 0x290);
      *(undefined1 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x108) = 0xb;
      func_0x000108720614();
      uVar9 = 1;
    }
    else {
      auStack_200[0] = 0;
      if (*(char *)(param_4 + 0x1d8) == '\x01') {
        FUN_108862e68(auStack_638,*in_stack_00000010,param_4,*(undefined8 *)(param_4 + 0x1d0));
        func_0x000107c28998(auStack_3b0,auStack_638);
        func_0x000107c2894c(auStack_200,auStack_3b0);
        func_0x000107c288dc(auStack_3b0);
        func_0x000107c28948(auStack_638);
      }
      bVar5 = *(char *)(param_4 + 0x40) != '\x01';
      bVar4 = 1 < *(long *)(param_4 + 0x108);
      if (bVar5 || bVar4) {
        *(undefined1 *)(param_4 + 0x40) = 1;
        *(undefined8 *)(param_4 + 0x108) = 1;
      }
      uVar9 = (ulong)(bVar5 || bVar4);
      func_0x000107c288dc(auStack_200);
    }
    return uVar9;
  case 3:
    *(undefined1 *)(param_7 + 0x40) = 1;
    if (*(char *)(in_stack_00000018 + 0x298) == '\x01') {
      pcVar6 = (char *)(in_stack_00000018 + 0x268);
      func_0x000107c289e8();
      if (*pcVar6 != '\x01') goto LAB_10871fa24;
    }
    uVar9 = *(ulong *)(param_7 + 0x38);
    FUN_10871fb04(uVar9,*(undefined4 *)(param_7 + 0x30));
    if ((uVar9 & 1) != 0) {
      return 1;
    }
LAB_10871fa24:
    *(long *)(param_7 + 0x28) = (long)param_5 / 1000;
    *(uint *)(param_7 + 0x344) = (uint)((int)param_4 != 2);
    return 1;
  case 4:
    if (*(int *)(param_7 + 0x30) == 0x1a) {
      if (*(char *)(in_stack_00000018 + 0x260) == '\x01') {
        pcVar6 = (char *)(in_stack_00000018 + 0x230);
        func_0x000107c289e8();
        if (*pcVar6 != '\x01') goto LAB_10871fae8;
      }
      *(int *)(param_7 + 0x30) = param_2;
      uVar9 = 1;
      *(undefined8 *)(param_7 + 0x38) = 1;
      func_0x000107c28d24(param_7 + 0xe8,param_3);
      *(undefined1 *)(param_7 + 0x40) = 0;
      *(undefined8 *)(param_7 + 0x108) = 1;
      uVar8 = (uint)((int)param_4 != 2);
      *(uint *)(param_7 + 0x340) = uVar8;
      *(long *)(param_7 + 0x20) = (long)param_5 / 1000;
      *(long *)(param_7 + 0x28) = (long)param_5 / 1000;
      *(uint *)(param_7 + 0x344) = uVar8;
    }
    else {
LAB_10871fae8:
      uVar9 = 0;
    }
    return uVar9;
  default:
    return 0;
  }
  plVar2 = *(long **)(param_7 + 0x198);
  if (*(long **)(param_7 + 0x180) == *(long **)(param_7 + 0x188)) {
    if (plVar2 == *(long **)(param_7 + 0x1a0)) {
      uVar8 = (uint)(*(int *)(param_7 + 0x340) != 0);
      *(undefined8 *)(param_7 + 0x28) = *(undefined8 *)(param_7 + 0x20);
      goto LAB_10871fca4;
    }
    lVar7 = *plVar2;
  }
  else {
    lVar7 = **(long **)(param_7 + 0x180);
    if ((plVar2 != *(long **)(param_7 + 0x1a0)) && (*plVar2 <= lVar7)) {
      lVar7 = *plVar2;
    }
  }
  if (lVar7 == *(long *)(param_7 + 0x28)) {
    return 0;
  }
  *(long *)(param_7 + 0x28) = lVar7;
  uVar8 = 1;
LAB_10871fca4:
  *(uint *)(param_7 + 0x344) = uVar8;
  return 1;
}



/* Entry: 108720540; end: 1087205d3;  */

void FUN_108720540(undefined8 *param_1,long *param_2,undefined4 param_3,undefined8 param_4,
                  long param_5,int param_6,undefined8 param_7,long param_8)

{
  undefined1 uVar1;
  
  switch(param_3) {
  case 1:
    break;
  case 2:
    if ((ulong)(param_5 / 1000) <= (ulong)(param_8 / 1000)) goto LAB_108720588;
    break;
  case 3:
    param_2 = (long *)*param_2;
    (**(code **)(*param_2 + 0x10))();
    *param_1 = 2;
    param_1[1] = (long)param_2 * 1000;
    goto code_r0x0001087205c0;
  case 4:
    if (param_6 == 0) goto LAB_108720588;
    break;
  default:
LAB_108720588:
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
    goto LAB_1087205c4;
  }
  *param_1 = param_4;
  param_1[1] = param_5;
code_r0x0001087205c0:
  uVar1 = 1;
LAB_1087205c4:
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 1087205d4; end: 10872065f;  */

undefined8 FUN_1087205d4(void)

{
  undefined1 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x108) = 0x15;
  uVar1 = 0;
  if (*(int *)(unaff_x19 + 0x348) == 5) {
    uVar1 = *(undefined1 *)(unaff_x19 + 0x34c);
  }
  *(undefined1 *)(unaff_x19 + 0x40) = uVar1;
  plVar2 = *(long **)(unaff_x19 + 0x198);
  if (*(long **)(unaff_x19 + 0x180) == *(long **)(unaff_x19 + 0x188)) {
    if (plVar2 == *(long **)(unaff_x19 + 0x1a0)) {
      uVar3 = (uint)(*(int *)(unaff_x19 + 0x340) != 0);
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_10871fca4;
    }
    lVar4 = *plVar2;
  }
  else {
    lVar4 = **(long **)(unaff_x19 + 0x180);
    if ((plVar2 != *(long **)(unaff_x19 + 0x1a0)) && (*plVar2 <= lVar4)) {
      lVar4 = *plVar2;
    }
  }
  if (lVar4 == *(long *)(unaff_x19 + 0x28)) {
    return 0;
  }
  *(long *)(unaff_x19 + 0x28) = lVar4;
  uVar3 = 1;
LAB_10871fca4:
  *(uint *)(unaff_x19 + 0x344) = uVar3;
  return 1;
}



/* Entry: 108720660; end: 1087206a7;  */

bool FUN_108720660(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_1f0 [264];
  int iStack_e8;
  
  func_0x000107c29f60(auStack_1f0,*param_1,param_2,1);
  func_0x000107c287e4(auStack_1f0);
  return iStack_e8 == 1;
}



/* Entry: 1087206a8; end: 1087206ff;  */

undefined4 FUN_1087206a8(long param_1)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  ppuVar1 = &PTR_PTR_113286e08;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x30);
  }
  if (*(int *)(ppuVar1 + 0x13) != 0) {
    return 3;
  }
  if (*(int *)(ppuVar1 + 0x10) != 0) {
    return 2;
  }
  if (*(int *)(ppuVar1 + 10) != 0) {
    return 0xc;
  }
  uVar2 = 4;
  if (*(int *)(ppuVar1 + 0x1f) == 0) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 108720700; end: 1087208cf;  */

void FUN_108720700(undefined8 *param_1,long param_2,uint param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  int iStack_48;
  undefined1 uStack_38;
  
  if ((param_3 & 0xfffffffb) != 1) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  bStack_50 = 0;
  uStack_38 = 0;
  if (param_4 == 2) {
    lVar4 = 0x78;
LAB_1087207d8:
    ppuVar2 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_2 + 0x30);
    }
    func_0x000107c296d0(&bStack_50,0,(long)ppuVar2 + lVar4);
    uStack_38 = 1;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    pbVar3 = &bStack_50;
    if ((bStack_50 & 1) != 0) {
      pbVar3 = (byte *)(CONCAT71(uStack_4f,bStack_50) + 7);
    }
    for (lVar4 = (long)iStack_48 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
      func_0x000107c29ee0(auStack_88,*(undefined8 *)pbVar3);
      func_0x000108720acc();
      func_0x000108720ac4();
      pbVar3 = pbVar3 + 8;
    }
  }
  else {
    if (param_4 == 3) {
      lVar4 = 0x90;
      goto LAB_1087207d8;
    }
    if (param_4 != 4) {
      if (param_4 != 0xc) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        goto LAB_10872087c;
      }
      lVar4 = 0x48;
      goto LAB_1087207d8;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    ppuVar2 = &PTR_PTR_113286e08;
    if (*(undefined ***)(param_2 + 0x30) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_2 + 0x30);
    }
    puVar5 = ppuVar2[0x1e];
    ppuVar1 = ppuVar2 + 0x1e;
    if (((ulong)puVar5 & 1) != 0) {
      ppuVar1 = (undefined **)(puVar5 + 7);
    }
    for (lVar4 = (long)*(int *)(ppuVar2 + 0x1f) << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
      ppuVar2 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(*ppuVar1 + 0x18) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(*ppuVar1 + 0x18);
      }
      func_0x000107c29ee0(auStack_88,ppuVar2);
      func_0x000108720acc();
      func_0x000108720ac4();
      ppuVar1 = ppuVar1 + 1;
    }
  }
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[2] = uStack_60;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  func_0x000107c27a04(&uStack_70);
LAB_10872087c:
  FUN_108720aa4(&bStack_50);
  return;
}



/* Entry: 1087208d0; end: 1087209c7;  */

uint FUN_1087208d0(long param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                  uint param_6,uint param_7)

{
  uint uVar1;
  
  uVar1 = 0x13;
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
  case 5:
    if ((param_4 & 1) != 0) goto code_r0x0001087208fc;
    if (param_3 != 7) {
      param_1 = param_1 + 0x50;
      FUN_1087206a8(param_1);
      uVar1 = (uint)param_1;
      break;
    }
  case 0x12:
    uVar1 = 4;
    break;
  case 2:
    if ((param_4 == 0) || ((param_5 & 1) == 0)) {
      if ((param_4 == 0) || ((param_6 & 1) == 0)) {
        param_4 = param_4 & param_7;
        uVar1 = 0x12;
        goto code_r0x0001087209bc;
      }
      goto code_r0x000108720994;
    }
  case 0x1a:
    uVar1 = 10;
    break;
  case 3:
  case 8:
  case 0xc:
  case 0x13:
    uVar1 = 2;
    break;
  case 4:
  case 6:
  case 9:
  case 10:
  case 0x16:
  case 0x17:
code_r0x0001087208fc:
    uVar1 = 1;
    break;
  case 7:
  case 0x11:
    uVar1 = 5;
    break;
  case 0xb:
  case 0xd:
    uVar1 = 3;
    break;
  case 0xe:
  case 0x18:
    uVar1 = 8;
    break;
  case 0xf:
    uVar1 = 0xe;
    break;
  case 0x10:
    uVar1 = 0xf;
code_r0x0001087209bc:
    if (param_4 == 0) {
      uVar1 = 1;
    }
    break;
  case 0x14:
    uVar1 = 6;
    break;
  case 0x15:
    uVar1 = 0x11;
    break;
  case 0x19:
    uVar1 = 9;
    break;
  case 0x1b:
    uVar1 = 0xb;
    break;
  case 0x1c:
code_r0x000108720994:
    uVar1 = 0xd;
    break;
  case 0x1e:
    uVar1 = 0x14;
  }
  return uVar1 & 0xff;
}



/* Entry: 1087209c8; end: 108720aa3;  */

undefined4 FUN_1087209c8(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  switch(param_1) {
  case 0:
  case 4:
  case 6:
    uVar2 = 0;
    break;
  case 2:
    uVar2 = 0x12;
    if (param_5 == 0) {
      uVar2 = 1;
    }
    uVar1 = 0xd;
    if (param_3 == 0) {
      uVar1 = uVar2;
    }
    uVar2 = 10;
    if ((param_2 & 1) == 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  case 3:
  case 8:
  case 0xc:
  case 0x13:
    return 2;
  case 7:
  case 0x11:
    return 5;
  case 0xb:
  case 0xd:
    return 3;
  case 0xe:
  case 0x14:
    return 6;
  case 0xf:
    return 0xe;
  case 0x10:
    uVar2 = 0xf;
    if (param_4 == 0) {
      uVar2 = 1;
    }
    return uVar2;
  case 0x12:
    return 4;
  case 0x15:
    return 0x11;
  case 0x18:
    return 8;
  case 0x19:
    return 9;
  case 0x1a:
    return 10;
  case 0x1b:
    return 0xb;
  case 0x1c:
    return 0xd;
  case 0x1d:
    return 0x13;
  case 0x1e:
    return 0x14;
  }
  return uVar2;
}



/* Entry: 108720aa4; end: 108720ac3;  */

void FUN_108720aa4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c296d8();
  }
  return;
}



/* Entry: 108720ac4; end: 108720ad7;  */

undefined1 * FUN_108720ac4(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000008;
  func_0x000100100fd4(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 108720ad8; end: 108720c03;  */

void FUN_108720ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [40];
  
  plVar2 = (long *)param_1[10];
  func_0x000107c2884c(auStack_58,param_3);
  (**(code **)(*plVar2 + 0x50))(plVar2,auStack_58);
  puVar1 = auStack_58;
  func_0x000107c2882c(puVar1);
  func_0x000107c31338();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_c0,param_2);
  func_0x000107c278b8(&uStack_d8,"");
  plVar2 = (long *)*param_1;
  (**(code **)(*plVar2 + 0x10))();
  uStack_70 = uStack_c8;
  auStack_a8[0] = 5;
  uStack_a0 = 0;
  uStack_90 = uStack_b8;
  uStack_98 = uStack_c0;
  uStack_88 = uStack_b0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_60 = 0;
  plStack_68 = plVar2;
  func_0x00010bcc46f8(puVar1,auStack_a8);
  func_0x00010786e114(auStack_a8);
  func_0x000108721e98();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  return;
}



/* Entry: 108720c04; end: 108720df7;  */

void FUN_108720c04(long param_1,code *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined8 ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  int iVar14;
  undefined ***pppuVar15;
  undefined *****pppppuVar16;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined1 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined **extraout_x8_04;
  undefined **extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 ***pppuVar17;
  long unaff_x19;
  long *plVar18;
  byte bVar19;
  undefined **ppuVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  ulong uVar23;
  undefined *****pppppuVar24;
  ulong uVar25;
  undefined1 auStack_1f51 [9];
  long *plStack_1f48;
  undefined1 ****ppppuStack_1f40;
  code *pcStack_1f38;
  undefined8 ***pppuStack_1f30;
  undefined1 auStack_1f28 [24];
  undefined1 auStack_1f10 [440];
  char cStack_1d58;
  undefined8 ***apppuStack_1d50 [123];
  byte bStack_1978;
  undefined8 ***apppuStack_1970 [123];
  byte bStack_1598;
  undefined1 auStack_1590 [1000];
  undefined8 **ppuStack_11a8;
  long *plStack_11a0;
  undefined1 uStack_1198;
  undefined8 ***pppuStack_1190;
  undefined8 ***pppuStack_1188;
  undefined ****ppppuStack_1180;
  undefined *puStack_1178;
  undefined8 uStack_1170;
  code *pcStack_1168;
  undefined ****ppppuStack_1160;
  code *pcStack_1158;
  undefined8 uStack_1088;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined ****ppppuStack_dc0;
  undefined *puStack_db8;
  undefined8 ****ppppuStack_db0;
  undefined8 uStack_da8;
  undefined4 uStack_da0;
  long lStack_d90;
  long lStack_d88;
  undefined ****appppuStack_d78 [3];
  undefined8 uStack_d60;
  undefined1 ***pppuStack_d00;
  code *pcStack_cf8;
  undefined1 uStack_ce9;
  undefined1 auStack_ce8 [24];
  undefined **ppuStack_cd0;
  undefined8 uStack_cc8;
  undefined ***pppuStack_cc0;
  undefined8 uStack_cb8;
  undefined4 uStack_cb0;
  undefined **ppuStack_c58;
  byte bStack_b28;
  long alStack_b20 [58];
  byte bStack_950;
  undefined ***pppuStack_948;
  undefined ***pppuStack_940;
  undefined **ppuStack_938;
  undefined ***pppuStack_930;
  undefined8 uStack_928;
  undefined ****ppppuStack_920;
  undefined8 uStack_918;
  undefined8 uStack_908;
  undefined1 **ppuStack_8c0;
  code *pcStack_8b8;
  undefined **ppuStack_8a8;
  long lStack_8a0;
  undefined8 uStack_898;
  undefined **appuStack_890 [58];
  byte bStack_6c0;
  undefined1 auStack_6b8 [4];
  byte bStack_6b4;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 *puStack_698;
  undefined4 uStack_690;
  undefined1 uStack_670;
  undefined8 uStack_5a8;
  undefined8 uStack_2d8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [464];
  byte bStack_a8;
  undefined1 auStack_a0 [8];
  byte bStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  iVar14 = (int)&uStack_290;
  puVar10 = &uStack_290;
  puVar11 = &uStack_290;
  puVar12 = &uStack_290;
  func_0x000108721e28();
  uStack_90 = (code)0x0;
  bStack_88 = 0;
  auStack_a0[0] = 0;
  bStack_98 = 0;
  uStack_48 = extraout_x8;
  func_0x000108721f24(auStack_278,*(undefined8 *)(param_1 + 0x10));
  if ((bStack_a8 & 1) == 0) {
    pcStack_80 = (code *)&UNK_10f4b25f7;
    ppuStack_78 = (undefined **)0x0;
    func_0x000108721ef8();
    pcStack_70 = param_2;
    puStack_68 = extraout_x8_01;
    func_0x000108721eb0();
    func_0x000108721f60(&uStack_290);
    func_0x000108721e68();
    lStack_60 = CONCAT44(lStack_60._4_4_,0x1c9);
    iVar14 = (int)&pcStack_80;
    func_0x000108721e3c();
LAB_108720d30:
    func_0x000107c2882c(&pcStack_80);
    func_0x000108721ed0();
  }
  else {
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    lStack_60 = unaff_x19 + 0x20;
    pcStack_80 = FUN_108721a14;
    ppuStack_78 = &PTR_FUN_110a68db0;
    pcStack_70 = (code *)&uStack_90;
    puStack_68 = auStack_a0;
    puVar11 = (undefined8 *)auStack_278;
    FUN_1086a15ac(*(undefined8 *)(unaff_x19 + 0x10),puVar11,&uStack_290,&pcStack_80);
    func_0x000108721e44(ppuStack_78);
    if (param_3 == 0) {
      if (bStack_88 != 0) {
        pcStack_70 = (code *)CONCAT71(uStack_8f,uStack_90);
        ppuStack_78 = (undefined **)&UNK_100697a48;
        puStack_68 = (undefined1 *)0x0;
        pcStack_80 = param_2;
        func_0x000107c2793c(&UNK_10f4b263e);
        func_0x000108721f04(&uStack_290);
        func_0x000108721e68();
        lStack_60 = CONCAT44(lStack_60._4_4_,0x1c3);
        iVar14 = (int)&pcStack_80;
        func_0x000108721e3c();
        puVar11 = puVar12;
        goto LAB_108720d30;
      }
    }
    else if (((bStack_88 & 1) == 0) && ((bStack_98 & 1) == 0)) {
      func_0x000108721ef8();
      pcStack_80 = param_2;
      ppuStack_78 = extraout_x8_00;
      func_0x000107c2793c(&UNK_10f4b260a);
      func_0x000107c3173c(&uStack_290);
      func_0x000108721e68();
      lStack_60 = CONCAT44(lStack_60._4_4_,0x1c4);
      iVar14 = (int)&pcStack_80;
      func_0x000108721e3c();
      puVar11 = puVar10;
      goto LAB_108720d30;
    }
  }
  puVar3 = auStack_278;
  func_0x000107c288c8();
  func_0x000108721e14(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(&pcStack_80);
  func_0x000108721ed0();
  puVar4 = auStack_278;
  func_0x000107c288c8();
  func_0x000108721ea8();
  pcStack_298 = FUN_108720df8;
  puStack_2a0 = &stack0xfffffffffffffff0;
  func_0x000108721e28();
  auStack_6b8[0] = 0;
  bStack_6b4 = 0;
  uStack_2d8 = extraout_x8_02;
  func_0x000108721f24(appuStack_890,*(undefined8 *)(puVar4 + 0x10));
  if ((bStack_6c0 & 1) == 0) {
    ppuStack_6a8 = (undefined **)0x0;
    ppuStack_6b0 = (undefined **)&UNK_10f4b268a;
    func_0x000108721ef8();
    puStack_6a0 = (undefined1 *)puVar11;
    func_0x000108721eb0();
    func_0x000108721f60(&ppuStack_8a8);
    puStack_6a0 = (undefined1 *)0x0;
    puStack_698 = (undefined1 *)0x0;
    ppuStack_6a8 = (undefined **)0x0;
    ppuStack_6b0 = &PTR_FUN_110a609a8;
    uStack_690 = 0x1c9;
    pppuVar13 = &ppuStack_8a8;
    pppuVar15 = &ppuStack_6b0;
    func_0x000108721e3c();
    func_0x000107c2882c(&ppuStack_6b0);
    func_0x000108721e98();
  }
  else {
    in_ZR = *(char *)((long)puVar11 + 0x128) == '\0';
    lStack_8a0 = 1;
    if (!(bool)in_ZR) {
      lStack_8a0 = *(long *)((long)puVar11 + 0x120) + 1;
    }
    ppuStack_8a8._0_4_ = 1;
    uStack_898 = 0x7fffffffffffffff;
    puStack_698 = puVar3 + 0x20;
    ppuStack_6b0 = (undefined **)FUN_108721bd4;
    ppuStack_6a8 = &PTR_FUN_110a68dc8;
    puStack_6a0 = auStack_6b8;
    pppuVar13 = appuStack_890;
    pppuVar15 = &ppuStack_8a8;
    FUN_1086a15ac(*(undefined8 *)(puVar3 + 0x10),pppuVar13,pppuVar15,&ppuStack_6b0);
    func_0x000108721e44(ppuStack_6a8);
    if ((((iVar14 != 0) && ((bStack_6b4 & 1) == 0)) && ((*(byte *)((long)puVar11 + 0x268) & 1) == 0)
        ) && (in_ZR = puVar3[0x90] == '\x01', (bool)in_ZR)) {
      func_0x000107c291e0(&ppuStack_6b0,puVar11);
      uStack_670 = 1;
      uStack_5a8 = 1;
      pppuVar13 = &ppuStack_6b0;
      FUN_1088665d4(*(undefined8 *)(puVar3 + 0x10));
      func_0x000107c288d0(&ppuStack_6b0);
    }
  }
  pppuVar5 = appuStack_890;
  func_0x000107c288c8();
  func_0x000108721e14(uStack_2d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c288d0(&ppuStack_6b0);
  pppuVar6 = appuStack_890;
  func_0x000107c288c8();
  func_0x000108721ea8();
  pcStack_8b8 = FUN_108720fd0;
  ppuStack_8c0 = &puStack_2a0;
  func_0x000108721e28();
  uStack_908 = extraout_x8_03;
  func_0x000108721f24(alStack_b20,pppuVar6[2]);
  if ((bStack_950 & 1) == 0) {
    ppuStack_cd0 = (undefined **)&UNK_10f4b269d;
    uStack_cc8 = 0;
    func_0x000108721ef8();
    pppuStack_cc0 = pppuVar13;
    func_0x000108721eb0();
    func_0x000108721f60(&pppuStack_940);
    pppuStack_cc0 = (undefined ***)0x0;
    uStack_cb8 = 0;
    ppuStack_cd0 = &PTR_FUN_110a609a8;
    uStack_cc8 = 0;
    uStack_cb0 = 0x1c9;
    func_0x000108721e3c();
    func_0x000107c2882c(&ppuStack_cd0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_940);
    goto LAB_1087211b8;
  }
  ppuStack_cd0 = (undefined **)((ulong)ppuStack_cd0 & 0xffffffffffffff00);
  bStack_b28 = 0;
  ppuVar20 = pppuVar5[2];
  pppuStack_948 = pppuVar15;
  FUN_108721c84(auStack_ce8,&pppuStack_948,1,&uStack_ce9);
  pppuStack_940 = (undefined ***)FUN_108721dc0;
  ppuStack_938 = &PTR_FUN_110a68de0;
  pppuStack_930 = &ppuStack_cd0;
  FUN_1086a233c(ppuVar20,alStack_b20,auStack_ce8,&pppuStack_940);
  func_0x000108721f38();
  func_0x00010867bb28(auStack_ce8);
  if ((bStack_b28 & 1) == 0) {
    func_0x000108721ef8();
    uStack_928 = 0;
    pppuStack_940 = pppuVar13;
    ppuStack_938 = extraout_x8_05;
    pppuStack_930 = pppuVar15;
    func_0x000107c2793c(&UNK_10f4b26b5);
    func_0x000108721f04(auStack_ce8);
    func_0x000108721ed8();
    ppppuStack_920 = (undefined ****)CONCAT44(ppppuStack_920._4_4_,0x1c5);
    func_0x000108721e3c();
LAB_1087211a4:
    func_0x000107c2882c(&pppuStack_940);
    func_0x000108721e98();
  }
  else {
    in_ZR = ppuStack_c58 == (undefined **)0x0;
    ppuVar20 = &PTR_PTR_113280c30;
    if (!(bool)in_ZR) {
      ppuVar20 = ppuStack_c58;
    }
    if (*(int *)(ppuVar20 + 0x15) != 0) {
      pppuStack_948 = (undefined ***)CONCAT44(pppuStack_948._4_4_,*(int *)(ppuVar20 + 0x15));
      func_0x000108721ef8();
      uStack_928 = 0;
      uStack_918 = 0x1086e0c20;
      ppppuStack_920 = &pppuStack_948;
      pppuStack_940 = pppuVar13;
      ppuStack_938 = extraout_x8_04;
      pppuStack_930 = pppuVar15;
      func_0x000107c2793c(&UNK_10f4b26e3);
      func_0x000107c3173c(auStack_ce8);
      func_0x000108721ed8();
      ppppuStack_920 = (undefined ****)CONCAT44(ppppuStack_920._4_4_,0x1c6);
      func_0x000108721e3c();
      goto LAB_1087211a4;
    }
  }
  func_0x000107c288dc(&ppuStack_cd0);
LAB_1087211b8:
  plVar18 = alStack_b20;
  func_0x000107c288c8();
  func_0x000108721e14(uStack_908);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(&pppuStack_940);
  func_0x000108721e98();
  func_0x000107c288dc(&ppuStack_cd0);
  plVar7 = alStack_b20;
  func_0x000107c288c8();
  func_0x000108721ea8();
  pcStack_cf8 = FUN_108721260;
  pppuStack_d00 = &ppuStack_8c0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108721e28();
  ppuStack_11a8 = (undefined8 **)0x0;
  uStack_d60 = extraout_x8_06;
  func_0x000107c28258();
  uStack_1198 = 1;
  apppuStack_1970[0] = (undefined8 ***)CONCAT44(apppuStack_1970[0]._4_4_,1);
  pppppuVar16 = (undefined *****)0x0;
  plStack_11a0 = plVar7;
  FUN_108866da0(auStack_1590,plVar18[2],apppuStack_1970);
  func_0x000107c288b4(apppuStack_1970,auStack_1590);
  _bzero(apppuStack_1d50,0x3e0);
  uVar25 = 0;
  pppuStack_1f30 = (undefined8 ***)&PTR_FUN_110a609a8;
  while ((((bStack_1598 & 1) != 0 || ((bStack_1978 & 1) != 0)) &&
         (in_ZR = 1, apppuStack_1970[0] != apppuStack_1d50[0]))) {
    ppppuVar8 = apppuStack_1970;
    func_0x000107c288b8();
    func_0x000108721f24(auStack_1f28,plVar18[2],ppppuVar8);
    in_ZR = cStack_1d58 == '\x01';
    if ((bool)in_ZR) {
      puVar3 = auStack_1f10;
      func_0x000107c28f30(puVar3,plVar18 + 7);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x000108721f58();
        func_0x000108721ea0(apppuStack_1d50);
        func_0x000108721e8c();
LAB_108721778:
        func_0x000107c288ec(auStack_1590);
        while( true ) {
          func_0x000108721e14(uStack_d60);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108721e80();
          func_0x000107c288ec(auStack_1590);
          in_ZR = (int)plVar18 == 1;
          if (!(bool)in_ZR) break;
          ___cxa_begin_catch(&pppuStack_1190);
          ___cxa_end_catch();
        }
        ppppuVar8 = &pppuStack_1190;
        __Unwind_Resume(&pppuStack_1190);
        pcStack_1f38 = FUN_1087218bc;
        ppppuVar9 = (undefined ****)auStack_1f51;
        auStack_1f51._1_8_ = &pppuStack_1190;
        plStack_1f48 = plVar18;
        ppppuStack_1f40 = &pppuStack_d00;
        FUN_1087218f0(ppppuVar9,ppppuVar8);
        *pppppuVar16 = ppppuVar9;
        return;
      }
    }
    ppppuVar21 = ppppuVar8 + 0x1d;
    FUN_1086f7298(ppppuVar21,plVar18 + 4);
    if (((int)ppppuVar21 == 0) || (((ulong)ppppuVar8[8] & 1) != 0)) {
      func_0x000108721f2c();
      FUN_108720df8();
      func_0x000108721f2c();
      pppppuVar16 = (undefined *****)0x0;
      FUN_108720c04();
      ppppuVar21 = ppppuVar8 + 0x1d;
      func_0x000107c28f58(ppppuVar21,plVar18 + 4);
      if ((int)ppppuVar21 != 0) {
        pppuVar17 = ppppuVar8[0x21];
        bVar1 = 1 < (long)pppuVar17;
        if (1 < (long)pppuVar17) {
          pppuStack_1188 = (undefined8 ***)0x0;
          pppuStack_1190 = (undefined8 ***)&UNK_10f4b2558;
          puStack_1178 = &UNK_100697a48;
          pcStack_1168 = (code *)0x0;
          ppppuStack_1180 = (undefined ****)ppppuVar8;
          uStack_1170 = (undefined8 ****)pppuVar17;
          func_0x000107c2793c(&UNK_10f4b2512);
          func_0x000107c3173c(&ppppuStack_dc0);
          pppuStack_1188 = (undefined ****)0x0;
          ppppuStack_1180 = (undefined ****)0x0;
          puStack_1178 = (undefined *)0x0;
          pppuStack_1190 = pppuStack_1f30;
          uStack_1170 = (undefined8 ****)CONCAT44(uStack_1170._4_4_,0x1ca);
          pppppuVar16 = (undefined *****)&pppuStack_1190;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
        }
        if ((ppppuVar8[0x2d] != ppppuVar8[0x2e]) || (ppppuVar8[0x2a] != ppppuVar8[0x2b])) {
          uStack_1170 = ppppuVar8 + 0x2d;
          ppppuStack_1160 = (undefined ****)(ppppuVar8 + 0x2a);
          pppuStack_1188 = (undefined8 ***)0x0;
          pppuStack_1190 = (undefined8 ***)&UNK_10f4b2558;
          puStack_1178 = &UNK_100697a48;
          pcStack_1168 = FUN_1087218bc;
          pcStack_1158 = FUN_1087218bc;
          ppppuStack_1180 = (undefined ****)ppppuVar8;
          func_0x000107c2793c(&UNK_10f4b2568);
          func_0x000107c3173c(&ppppuStack_dc0);
          pppuStack_1188 = (undefined ****)0x0;
          ppppuStack_1180 = (undefined ****)0x0;
          puStack_1178 = (undefined *)0x0;
          pppuStack_1190 = (undefined8 ***)&PTR_FUN_110a609a8;
          uStack_1170 = (undefined8 ****)CONCAT44(uStack_1170._4_4_,0x1cb);
          pppppuVar16 = (undefined *****)&pppuStack_1190;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
          bVar1 = true;
        }
        if ((bVar1) && ((*(byte *)(plVar18 + 0x12) & 1) != 0)) {
          func_0x000107c291e0(&pppuStack_1190,ppppuVar8);
          uStack_1088 = 1;
          uStack_1038 = uStack_1040;
          uStack_ff0 = uStack_ff8;
          uStack_1020 = uStack_1028;
          uStack_1008 = uStack_1010;
          FUN_1088665d4(plVar18[2],&pppuStack_1190);
          func_0x000107c288d0(&pppuStack_1190);
        }
      }
    }
    else {
      uVar2 = *(uint *)(ppppuVar8 + 6) & 0xfffffffb;
      if (uVar2 != 1) {
        if (*(uint *)(ppppuVar8 + 6) - 0x11 < 2) goto LAB_10872154c;
        func_0x000108721f2c();
        FUN_108720df8();
      }
      pppppuVar16 = (undefined *****)(ulong)(uVar2 == 1);
      func_0x000108721f2c();
      FUN_108720c04();
    }
LAB_10872154c:
    (**(code **)(*(long *)plVar18[0xc] + 0x10))(&pppuStack_1190,(long *)plVar18[0xc],ppppuVar8);
    if (((char)puStack_1178 == '\x01') && (pppuStack_1190 != pppuStack_1188)) {
      ppppuVar21 = &pppuStack_1190;
      FUN_10869c488(ppppuVar21,0);
      ppppuVar21 = (undefined8 ****)ppppuVar21[3];
      lVar22 = plVar18[2];
      appppuStack_d78[0] = (undefined ****)ppppuVar21;
      FUN_1086afdec(&ppppuStack_dc0,appppuStack_d78,1);
      pppppuVar16 = &ppppuStack_dc0;
      FUN_108861b60(&lStack_d90,lVar22,ppppuVar8,pppppuVar16,1);
      func_0x00010867bb84(&ppppuStack_dc0);
      if (lStack_d90 == lStack_d88) {
        puStack_db8 = (undefined *)0x0;
        ppppuStack_dc0 = (undefined ****)ppppuVar21;
        func_0x000107c2793c(&UNK_10f4b277c);
        func_0x000107c3173c(appppuStack_d78);
        func_0x000108721e50();
        uStack_da0 = 0x1c5;
        pppppuVar16 = &ppppuStack_dc0;
        func_0x000108721e3c();
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppuStack_d78);
        uVar23 = 0;
        bVar19 = 0;
      }
      else {
        uVar25 = *(ulong *)(lStack_d90 + 0x20) >> 8;
        bVar19 = *(byte *)(lStack_d90 + 0x28);
        uVar23 = *(ulong *)(lStack_d90 + 0x20) & 0xff;
      }
      func_0x00010867b9fc(&lStack_d90);
    }
    else {
      uVar23 = 0;
      bVar19 = 0;
    }
    pppppuVar24 = (undefined *****)(uVar23 | uVar25 << 8);
    in_ZR = uStack_1170._4_4_ == 3;
    if ((bool)in_ZR) {
      if ((bVar19 & 1) != 0) {
        func_0x000108721f2c();
        pppppuVar16 = pppppuVar24;
        FUN_108720fd0();
        lVar22 = plVar18[0x10];
        func_0x000108721f68();
        in_ZR = lVar22 == 0x100000000;
        if ((bool)in_ZR) {
          puStack_db8 = &UNK_100697a48;
          uStack_da8 = 0;
          ppppuStack_dc0 = (undefined ****)ppppuVar8;
          ppppuStack_db0 = pppppuVar24;
          func_0x000107c2793c(&UNK_10f4b274d);
          func_0x000108721f04(&lStack_d90);
          func_0x000108721e50();
          uStack_da0 = 0x1c8;
          pppppuVar16 = &ppppuStack_dc0;
          func_0x000108721e3c();
          goto LAB_108721718;
        }
      }
    }
    else if ((uStack_1170._4_4_ == 0) && ((bVar19 & 1) != 0)) {
      func_0x000108721f2c();
      pppppuVar16 = pppppuVar24;
      FUN_108720fd0();
      lVar22 = plVar18[0x10];
      func_0x000108721f68();
      in_ZR = lVar22 == 0x100000000;
      if (!(bool)in_ZR) {
        puStack_db8 = &UNK_100697a48;
        uStack_da8 = 0;
        ppppuStack_dc0 = (undefined ****)ppppuVar8;
        ppppuStack_db0 = pppppuVar24;
        func_0x000107c2793c(&UNK_10f4b271a);
        func_0x000108721f04(&lStack_d90);
        func_0x000108721e50();
        uStack_da0 = 0x1c7;
        pppppuVar16 = &ppppuStack_dc0;
        func_0x000108721e3c();
LAB_108721718:
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d90);
      }
    }
    func_0x000107c27b20(&pppuStack_1190);
    func_0x000108721f58();
    func_0x000107c28920(apppuStack_1970);
  }
  func_0x000108721ea0(apppuStack_1d50);
  func_0x000108721e8c();
  func_0x000107c28288(&ppuStack_11a8);
  plVar18 = (long *)plVar18[10];
  ppppuVar9 = (undefined ****)&ppuStack_11a8;
  func_0x000107c2825c();
  pppppuVar16 = (undefined *****)apppuStack_1970;
  apppuStack_1970[0] = ppppuVar9;
  (**(code **)(*plVar18 + 0x10))(plVar18,0x1c2);
  goto LAB_108721778;
}



/* Entry: 108720df8; end: 108720fcf;  */

void FUN_108720df8(long param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined8 ***pppuVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ****ppppuVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **extraout_x8_01;
  undefined **extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 **ppuVar11;
  long unaff_x19;
  long *plVar12;
  byte bVar13;
  undefined **ppuVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  ulong uVar17;
  undefined ****ppppuVar18;
  ulong uVar19;
  undefined1 auStack_1cc1 [9];
  long *plStack_1cb8;
  undefined1 ***pppuStack_1cb0;
  code *pcStack_1ca8;
  undefined8 **ppuStack_1ca0;
  undefined1 auStack_1c98 [24];
  undefined1 auStack_1c80 [440];
  char cStack_1ac8;
  undefined8 **appuStack_1ac0 [123];
  byte bStack_16e8;
  undefined8 **appuStack_16e0 [123];
  byte bStack_1308;
  undefined1 auStack_1300 [1000];
  undefined8 *puStack_f18;
  long *plStack_f10;
  undefined1 uStack_f08;
  undefined8 **ppuStack_f00;
  undefined8 **ppuStack_ef8;
  undefined ***pppuStack_ef0;
  undefined *puStack_ee8;
  undefined8 uStack_ee0;
  code *pcStack_ed8;
  undefined ***pppuStack_ed0;
  code *pcStack_ec8;
  undefined8 uStack_df8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined ***pppuStack_b30;
  undefined *puStack_b28;
  undefined8 ***pppuStack_b20;
  undefined8 uStack_b18;
  undefined4 uStack_b10;
  long lStack_b00;
  long lStack_af8;
  undefined ***apppuStack_ae8 [3];
  undefined8 uStack_ad0;
  undefined1 **ppuStack_a70;
  code *pcStack_a68;
  undefined1 uStack_a59;
  undefined1 auStack_a58 [24];
  undefined **ppuStack_a40;
  undefined8 uStack_a38;
  undefined ***pppuStack_a30;
  undefined8 uStack_a28;
  undefined4 uStack_a20;
  undefined **ppuStack_9c8;
  byte bStack_898;
  long alStack_890 [58];
  byte bStack_6c0;
  undefined ***pppuStack_6b8;
  undefined ***pppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined ***pppuStack_6a0;
  undefined8 uStack_698;
  undefined ****ppppuStack_690;
  undefined8 uStack_688;
  undefined8 uStack_678;
  undefined1 *puStack_630;
  code *pcStack_628;
  undefined **ppuStack_618;
  long lStack_610;
  undefined8 uStack_608;
  undefined **appuStack_600 [58];
  byte bStack_430;
  undefined1 auStack_428 [4];
  byte bStack_424;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined1 *puStack_410;
  long lStack_408;
  undefined4 uStack_400;
  undefined1 uStack_3e0;
  undefined8 uStack_318;
  undefined8 uStack_48;
  
  func_0x000108721e28();
  auStack_428[0] = 0;
  bStack_424 = 0;
  uStack_48 = extraout_x8;
  func_0x000108721f24(appuStack_600,*(undefined8 *)(param_1 + 0x10));
  if ((bStack_430 & 1) == 0) {
    ppuStack_418 = (undefined **)0x0;
    ppuStack_420 = (undefined **)&UNK_10f4b268a;
    func_0x000108721ef8();
    puStack_410 = (undefined1 *)param_2;
    func_0x000108721eb0();
    func_0x000108721f60(&ppuStack_618);
    puStack_410 = (undefined1 *)0x0;
    lStack_408 = 0;
    ppuStack_418 = (undefined **)0x0;
    ppuStack_420 = &PTR_FUN_110a609a8;
    uStack_400 = 0x1c9;
    pppuVar8 = &ppuStack_618;
    pppuVar9 = &ppuStack_420;
    func_0x000108721e3c();
    func_0x000107c2882c(&ppuStack_420);
    func_0x000108721e98();
  }
  else {
    in_ZR = *(char *)(param_2 + 0x128) == '\0';
    lStack_610 = 1;
    if (!(bool)in_ZR) {
      lStack_610 = *(long *)(param_2 + 0x120) + 1;
    }
    ppuStack_618._0_4_ = 1;
    uStack_608 = 0x7fffffffffffffff;
    lStack_408 = unaff_x19 + 0x20;
    ppuStack_420 = (undefined **)FUN_108721bd4;
    ppuStack_418 = &PTR_FUN_110a68dc8;
    puStack_410 = auStack_428;
    pppuVar8 = appuStack_600;
    pppuVar9 = &ppuStack_618;
    FUN_1086a15ac(*(undefined8 *)(unaff_x19 + 0x10),pppuVar8,pppuVar9,&ppuStack_420);
    func_0x000108721e44(ppuStack_418);
    if (((param_3 != 0) && ((bStack_424 & 1) == 0)) && ((*(byte *)(param_2 + 0x268) & 1) == 0)) {
      in_ZR = *(char *)(unaff_x19 + 0x90) == '\x01';
      if ((bool)in_ZR) {
        func_0x000107c291e0(&ppuStack_420,param_2);
        uStack_3e0 = 1;
        uStack_318 = 1;
        pppuVar8 = &ppuStack_420;
        FUN_1088665d4(*(undefined8 *)(unaff_x19 + 0x10));
        func_0x000107c288d0(&ppuStack_420);
      }
    }
  }
  pppuVar3 = appuStack_600;
  func_0x000107c288c8();
  func_0x000108721e14(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c288d0(&ppuStack_420);
  pppuVar4 = appuStack_600;
  func_0x000107c288c8();
  func_0x000108721ea8();
  pcStack_628 = FUN_108720fd0;
  puStack_630 = &stack0xfffffffffffffff0;
  func_0x000108721e28();
  uStack_678 = extraout_x8_00;
  func_0x000108721f24(alStack_890,pppuVar4[2]);
  if ((bStack_6c0 & 1) == 0) {
    ppuStack_a40 = (undefined **)&UNK_10f4b269d;
    uStack_a38 = 0;
    func_0x000108721ef8();
    pppuStack_a30 = pppuVar8;
    func_0x000108721eb0();
    func_0x000108721f60(&pppuStack_6b0);
    pppuStack_a30 = (undefined ***)0x0;
    uStack_a28 = 0;
    ppuStack_a40 = &PTR_FUN_110a609a8;
    uStack_a38 = 0;
    uStack_a20 = 0x1c9;
    func_0x000108721e3c();
    func_0x000107c2882c(&ppuStack_a40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_6b0);
    goto LAB_1087211b8;
  }
  ppuStack_a40 = (undefined **)((ulong)ppuStack_a40 & 0xffffffffffffff00);
  bStack_898 = 0;
  ppuVar14 = pppuVar3[2];
  pppuStack_6b8 = pppuVar9;
  FUN_108721c84(auStack_a58,&pppuStack_6b8,1,&uStack_a59);
  pppuStack_6b0 = (undefined ***)FUN_108721dc0;
  ppuStack_6a8 = &PTR_FUN_110a68de0;
  pppuStack_6a0 = &ppuStack_a40;
  FUN_1086a233c(ppuVar14,alStack_890,auStack_a58,&pppuStack_6b0);
  func_0x000108721f38();
  func_0x00010867bb28(auStack_a58);
  if ((bStack_898 & 1) == 0) {
    func_0x000108721ef8();
    uStack_698 = 0;
    pppuStack_6b0 = pppuVar8;
    ppuStack_6a8 = extraout_x8_02;
    pppuStack_6a0 = pppuVar9;
    func_0x000107c2793c(&UNK_10f4b26b5);
    func_0x000108721f04(auStack_a58);
    func_0x000108721ed8();
    ppppuStack_690 = (undefined ****)CONCAT44(ppppuStack_690._4_4_,0x1c5);
    func_0x000108721e3c();
LAB_1087211a4:
    func_0x000107c2882c(&pppuStack_6b0);
    func_0x000108721e98();
  }
  else {
    in_ZR = ppuStack_9c8 == (undefined **)0x0;
    ppuVar14 = &PTR_PTR_113280c30;
    if (!(bool)in_ZR) {
      ppuVar14 = ppuStack_9c8;
    }
    if (*(int *)(ppuVar14 + 0x15) != 0) {
      pppuStack_6b8 = (undefined ***)CONCAT44(pppuStack_6b8._4_4_,*(int *)(ppuVar14 + 0x15));
      func_0x000108721ef8();
      uStack_698 = 0;
      uStack_688 = 0x1086e0c20;
      ppppuStack_690 = &pppuStack_6b8;
      pppuStack_6b0 = pppuVar8;
      ppuStack_6a8 = extraout_x8_01;
      pppuStack_6a0 = pppuVar9;
      func_0x000107c2793c(&UNK_10f4b26e3);
      func_0x000107c3173c(auStack_a58);
      func_0x000108721ed8();
      ppppuStack_690 = (undefined ****)CONCAT44(ppppuStack_690._4_4_,0x1c6);
      func_0x000108721e3c();
      goto LAB_1087211a4;
    }
  }
  func_0x000107c288dc(&ppuStack_a40);
LAB_1087211b8:
  plVar12 = alStack_890;
  func_0x000107c288c8();
  func_0x000108721e14(uStack_678);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(&pppuStack_6b0);
  func_0x000108721e98();
  func_0x000107c288dc(&ppuStack_a40);
  plVar5 = alStack_890;
  func_0x000107c288c8();
  func_0x000108721ea8();
  pcStack_a68 = FUN_108721260;
  ppuStack_a70 = &puStack_630;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108721e28();
  puStack_f18 = (undefined8 *)0x0;
  uStack_ad0 = extraout_x8_03;
  func_0x000107c28258();
  uStack_f08 = 1;
  appuStack_16e0[0] = (undefined8 **)CONCAT44(appuStack_16e0[0]._4_4_,1);
  ppppuVar10 = (undefined ****)0x0;
  plStack_f10 = plVar5;
  FUN_108866da0(auStack_1300,plVar12[2],appuStack_16e0);
  func_0x000107c288b4(appuStack_16e0,auStack_1300);
  _bzero(appuStack_1ac0,0x3e0);
  uVar19 = 0;
  ppuStack_1ca0 = (undefined8 **)&PTR_FUN_110a609a8;
  while (((bStack_1308 & 1) != 0 || ((bStack_16e8 & 1) != 0))) {
    in_ZR = 1;
    if (appuStack_16e0[0] == appuStack_1ac0[0]) break;
    pppuVar6 = appuStack_16e0;
    func_0x000107c288b8();
    func_0x000108721f24(auStack_1c98,plVar12[2],pppuVar6);
    in_ZR = cStack_1ac8 == '\x01';
    if ((bool)in_ZR) {
      puVar7 = auStack_1c80;
      func_0x000107c28f30(puVar7,plVar12 + 7);
      if (((ulong)puVar7 & 1) != 0) {
        func_0x000108721f58();
        func_0x000108721ea0(appuStack_1ac0);
        func_0x000108721e8c();
LAB_108721778:
        func_0x000107c288ec(auStack_1300);
        while( true ) {
          func_0x000108721e14(uStack_ad0);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108721e80();
          func_0x000107c288ec(auStack_1300);
          in_ZR = (int)plVar12 == 1;
          if (!(bool)in_ZR) break;
          ___cxa_begin_catch(&ppuStack_f00);
          ___cxa_end_catch();
        }
        pppuVar6 = &ppuStack_f00;
        __Unwind_Resume(&ppuStack_f00);
        pcStack_1ca8 = FUN_1087218bc;
        pppuVar8 = (undefined ***)auStack_1cc1;
        auStack_1cc1._1_8_ = &ppuStack_f00;
        plStack_1cb8 = plVar12;
        pppuStack_1cb0 = &ppuStack_a70;
        FUN_1087218f0(pppuVar8,pppuVar6);
        *ppppuVar10 = pppuVar8;
        return;
      }
    }
    pppuVar15 = pppuVar6 + 0x1d;
    FUN_1086f7298(pppuVar15,plVar12 + 4);
    if (((int)pppuVar15 == 0) || (((ulong)pppuVar6[8] & 1) != 0)) {
      func_0x000108721f2c();
      FUN_108720df8();
      func_0x000108721f2c();
      ppppuVar10 = (undefined ****)0x0;
      FUN_108720c04();
      pppuVar15 = pppuVar6 + 0x1d;
      func_0x000107c28f58(pppuVar15,plVar12 + 4);
      if ((int)pppuVar15 != 0) {
        ppuVar11 = pppuVar6[0x21];
        bVar1 = 1 < (long)ppuVar11;
        if (1 < (long)ppuVar11) {
          ppuStack_ef8 = (undefined8 **)0x0;
          ppuStack_f00 = (undefined8 **)&UNK_10f4b2558;
          puStack_ee8 = &UNK_100697a48;
          pcStack_ed8 = (code *)0x0;
          pppuStack_ef0 = (undefined ***)pppuVar6;
          uStack_ee0 = (undefined8 ***)ppuVar11;
          func_0x000107c2793c(&UNK_10f4b2512);
          func_0x000107c3173c(&pppuStack_b30);
          ppuStack_ef8 = (undefined ***)0x0;
          pppuStack_ef0 = (undefined ***)0x0;
          puStack_ee8 = (undefined *)0x0;
          ppuStack_f00 = ppuStack_1ca0;
          uStack_ee0 = (undefined8 ***)CONCAT44(uStack_ee0._4_4_,0x1ca);
          ppppuVar10 = (undefined ****)&ppuStack_f00;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
        }
        if ((pppuVar6[0x2d] != pppuVar6[0x2e]) || (pppuVar6[0x2a] != pppuVar6[0x2b])) {
          uStack_ee0 = pppuVar6 + 0x2d;
          pppuStack_ed0 = (undefined ***)(pppuVar6 + 0x2a);
          ppuStack_ef8 = (undefined8 **)0x0;
          ppuStack_f00 = (undefined8 **)&UNK_10f4b2558;
          puStack_ee8 = &UNK_100697a48;
          pcStack_ed8 = FUN_1087218bc;
          pcStack_ec8 = FUN_1087218bc;
          pppuStack_ef0 = (undefined ***)pppuVar6;
          func_0x000107c2793c(&UNK_10f4b2568);
          func_0x000107c3173c(&pppuStack_b30);
          ppuStack_ef8 = (undefined ***)0x0;
          pppuStack_ef0 = (undefined ***)0x0;
          puStack_ee8 = (undefined *)0x0;
          ppuStack_f00 = (undefined8 **)&PTR_FUN_110a609a8;
          uStack_ee0 = (undefined8 ***)CONCAT44(uStack_ee0._4_4_,0x1cb);
          ppppuVar10 = (undefined ****)&ppuStack_f00;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
          bVar1 = true;
        }
        if ((bVar1) && ((*(byte *)(plVar12 + 0x12) & 1) != 0)) {
          func_0x000107c291e0(&ppuStack_f00,pppuVar6);
          uStack_df8 = 1;
          uStack_da8 = uStack_db0;
          uStack_d60 = uStack_d68;
          uStack_d90 = uStack_d98;
          uStack_d78 = uStack_d80;
          FUN_1088665d4(plVar12[2],&ppuStack_f00);
          func_0x000107c288d0(&ppuStack_f00);
        }
      }
    }
    else {
      uVar2 = *(uint *)(pppuVar6 + 6) & 0xfffffffb;
      if (uVar2 != 1) {
        if (*(uint *)(pppuVar6 + 6) - 0x11 < 2) goto LAB_10872154c;
        func_0x000108721f2c();
        FUN_108720df8();
      }
      ppppuVar10 = (undefined ****)(ulong)(uVar2 == 1);
      func_0x000108721f2c();
      FUN_108720c04();
    }
LAB_10872154c:
    (**(code **)(*(long *)plVar12[0xc] + 0x10))(&ppuStack_f00,(long *)plVar12[0xc],pppuVar6);
    if (((char)puStack_ee8 == '\x01') && (ppuStack_f00 != ppuStack_ef8)) {
      pppuVar15 = &ppuStack_f00;
      FUN_10869c488(pppuVar15,0);
      pppuVar15 = (undefined8 ***)pppuVar15[3];
      lVar16 = plVar12[2];
      apppuStack_ae8[0] = (undefined ***)pppuVar15;
      FUN_1086afdec(&pppuStack_b30,apppuStack_ae8,1);
      ppppuVar10 = &pppuStack_b30;
      FUN_108861b60(&lStack_b00,lVar16,pppuVar6,ppppuVar10,1);
      func_0x00010867bb84(&pppuStack_b30);
      if (lStack_b00 == lStack_af8) {
        puStack_b28 = (undefined *)0x0;
        pppuStack_b30 = (undefined ***)pppuVar15;
        func_0x000107c2793c(&UNK_10f4b277c);
        func_0x000107c3173c(apppuStack_ae8);
        func_0x000108721e50();
        uStack_b10 = 0x1c5;
        ppppuVar10 = &pppuStack_b30;
        func_0x000108721e3c();
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_ae8);
        uVar17 = 0;
        bVar13 = 0;
      }
      else {
        uVar19 = *(ulong *)(lStack_b00 + 0x20) >> 8;
        bVar13 = *(byte *)(lStack_b00 + 0x28);
        uVar17 = *(ulong *)(lStack_b00 + 0x20) & 0xff;
      }
      func_0x00010867b9fc(&lStack_b00);
    }
    else {
      uVar17 = 0;
      bVar13 = 0;
    }
    ppppuVar18 = (undefined ****)(uVar17 | uVar19 << 8);
    in_ZR = uStack_ee0._4_4_ == 3;
    if ((bool)in_ZR) {
      if ((bVar13 & 1) != 0) {
        func_0x000108721f2c();
        ppppuVar10 = ppppuVar18;
        FUN_108720fd0();
        lVar16 = plVar12[0x10];
        func_0x000108721f68();
        in_ZR = lVar16 == 0x100000000;
        if ((bool)in_ZR) {
          puStack_b28 = &UNK_100697a48;
          uStack_b18 = 0;
          pppuStack_b30 = (undefined ***)pppuVar6;
          pppuStack_b20 = ppppuVar18;
          func_0x000107c2793c(&UNK_10f4b274d);
          func_0x000108721f04(&lStack_b00);
          func_0x000108721e50();
          uStack_b10 = 0x1c8;
          ppppuVar10 = &pppuStack_b30;
          func_0x000108721e3c();
          goto LAB_108721718;
        }
      }
    }
    else if ((uStack_ee0._4_4_ == 0) && ((bVar13 & 1) != 0)) {
      func_0x000108721f2c();
      ppppuVar10 = ppppuVar18;
      FUN_108720fd0();
      lVar16 = plVar12[0x10];
      func_0x000108721f68();
      in_ZR = lVar16 == 0x100000000;
      if (!(bool)in_ZR) {
        puStack_b28 = &UNK_100697a48;
        uStack_b18 = 0;
        pppuStack_b30 = (undefined ***)pppuVar6;
        pppuStack_b20 = ppppuVar18;
        func_0x000107c2793c(&UNK_10f4b271a);
        func_0x000108721f04(&lStack_b00);
        func_0x000108721e50();
        uStack_b10 = 0x1c7;
        ppppuVar10 = &pppuStack_b30;
        func_0x000108721e3c();
LAB_108721718:
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_b00);
      }
    }
    func_0x000107c27b20(&ppuStack_f00);
    func_0x000108721f58();
    func_0x000107c28920(appuStack_16e0);
  }
  func_0x000108721ea0(appuStack_1ac0);
  func_0x000108721e8c();
  func_0x000107c28288(&puStack_f18);
  plVar12 = (long *)plVar12[10];
  pppuVar8 = (undefined ***)&puStack_f18;
  func_0x000107c2825c();
  ppppuVar10 = (undefined ****)appuStack_16e0;
  appuStack_16e0[0] = pppuVar8;
  (**(code **)(*plVar12 + 0x10))(plVar12,0x1c2);
  goto LAB_108721778;
}



/* Entry: 108720fd0; end: 10872125f;  */

void FUN_108720fd0(long param_1,code *param_2,undefined ***param_3)

{
  bool bVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 ***pppuVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined8 extraout_x8;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 **ppuVar9;
  long unaff_x19;
  long *plVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  long lVar14;
  ulong uVar15;
  undefined ****ppppuVar16;
  ulong uVar17;
  undefined1 auStack_16a1 [9];
  long *plStack_1698;
  undefined1 **ppuStack_1690;
  code *pcStack_1688;
  undefined8 **ppuStack_1680;
  undefined1 auStack_1678 [24];
  undefined1 auStack_1660 [440];
  char cStack_14a8;
  undefined8 **appuStack_14a0 [123];
  byte bStack_10c8;
  undefined8 **appuStack_10c0 [123];
  byte bStack_ce8;
  undefined1 auStack_ce0 [1000];
  undefined8 *puStack_8f8;
  long *plStack_8f0;
  undefined1 uStack_8e8;
  undefined8 **ppuStack_8e0;
  undefined8 **ppuStack_8d8;
  undefined ***pppuStack_8d0;
  undefined *puStack_8c8;
  undefined8 uStack_8c0;
  code *pcStack_8b8;
  undefined ***pppuStack_8b0;
  code *pcStack_8a8;
  undefined8 uStack_7d8;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined ***pppuStack_510;
  undefined *puStack_508;
  undefined8 ***pppuStack_500;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  long lStack_4e0;
  long lStack_4d8;
  undefined ***apppuStack_4c8 [3];
  undefined8 uStack_4b0;
  undefined1 *puStack_450;
  code *pcStack_448;
  undefined1 uStack_439;
  undefined1 auStack_438 [24];
  undefined **ppuStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined **ppuStack_3a8;
  byte bStack_278;
  long alStack_270 [58];
  byte bStack_a0;
  undefined ***pppuStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined ****ppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  func_0x000108721e28();
  uStack_58 = extraout_x8;
  func_0x000108721f24(alStack_270,*(undefined8 *)(param_1 + 0x10));
  if ((bStack_a0 & 1) == 0) {
    ppuStack_420 = (undefined **)&UNK_10f4b269d;
    uStack_418 = 0;
    func_0x000108721ef8();
    pcStack_410 = param_2;
    func_0x000108721eb0();
    func_0x000108721f60(&pcStack_90);
    pcStack_410 = (code *)0x0;
    uStack_408 = 0;
    ppuStack_420 = &PTR_FUN_110a609a8;
    uStack_418 = 0;
    uStack_400 = 0x1c9;
    func_0x000108721e3c();
    func_0x000107c2882c(&ppuStack_420);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_90);
    goto LAB_1087211b8;
  }
  ppuStack_420 = (undefined **)((ulong)ppuStack_420 & 0xffffffffffffff00);
  bStack_278 = 0;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x10);
  pppuStack_98 = param_3;
  FUN_108721c84(auStack_438,&pppuStack_98,1,&uStack_439);
  pcStack_90 = FUN_108721dc0;
  ppuStack_88 = &PTR_FUN_110a68de0;
  pppuStack_80 = &ppuStack_420;
  FUN_1086a233c(uVar12,alStack_270,auStack_438,&pcStack_90);
  func_0x000108721f38();
  func_0x00010867bb28(auStack_438);
  if ((bStack_278 & 1) == 0) {
    func_0x000108721ef8();
    uStack_78 = 0;
    pcStack_90 = param_2;
    ppuStack_88 = extraout_x8_01;
    pppuStack_80 = param_3;
    func_0x000107c2793c(&UNK_10f4b26b5);
    func_0x000108721f04(auStack_438);
    func_0x000108721ed8();
    ppppuStack_70 = (undefined ****)CONCAT44(ppppuStack_70._4_4_,0x1c5);
    func_0x000108721e3c();
LAB_1087211a4:
    func_0x000107c2882c(&pcStack_90);
    func_0x000108721e98();
  }
  else {
    in_ZR = ppuStack_3a8 == (undefined **)0x0;
    ppuVar3 = &PTR_PTR_113280c30;
    if (!(bool)in_ZR) {
      ppuVar3 = ppuStack_3a8;
    }
    if (*(int *)(ppuVar3 + 0x15) != 0) {
      pppuStack_98 = (undefined ***)CONCAT44(pppuStack_98._4_4_,*(int *)(ppuVar3 + 0x15));
      func_0x000108721ef8();
      uStack_78 = 0;
      uStack_68 = 0x1086e0c20;
      ppppuStack_70 = &pppuStack_98;
      pcStack_90 = param_2;
      ppuStack_88 = extraout_x8_00;
      pppuStack_80 = param_3;
      func_0x000107c2793c(&UNK_10f4b26e3);
      func_0x000107c3173c(auStack_438);
      func_0x000108721ed8();
      ppppuStack_70 = (undefined ****)CONCAT44(ppppuStack_70._4_4_,0x1c6);
      func_0x000108721e3c();
      goto LAB_1087211a4;
    }
  }
  func_0x000107c288dc(&ppuStack_420);
LAB_1087211b8:
  plVar10 = alStack_270;
  func_0x000107c288c8();
  func_0x000108721e14(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(&pcStack_90);
  func_0x000108721e98();
  func_0x000107c288dc(&ppuStack_420);
  plVar4 = alStack_270;
  func_0x000107c288c8();
  func_0x000108721ea8();
  pcStack_448 = FUN_108721260;
  puStack_450 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108721e28();
  puStack_8f8 = (undefined8 *)0x0;
  uStack_4b0 = extraout_x8_02;
  func_0x000107c28258();
  uStack_8e8 = 1;
  appuStack_10c0[0] = (undefined8 **)CONCAT44(appuStack_10c0[0]._4_4_,1);
  ppppuVar8 = (undefined ****)0x0;
  plStack_8f0 = plVar4;
  FUN_108866da0(auStack_ce0,plVar10[2],appuStack_10c0);
  func_0x000107c288b4(appuStack_10c0,auStack_ce0);
  _bzero(appuStack_14a0,0x3e0);
  uVar17 = 0;
  ppuStack_1680 = (undefined8 **)&PTR_FUN_110a609a8;
  while (((bStack_ce8 & 1) != 0 || ((bStack_10c8 & 1) != 0))) {
    in_ZR = 1;
    if (appuStack_10c0[0] == appuStack_14a0[0]) break;
    pppuVar5 = appuStack_10c0;
    func_0x000107c288b8();
    func_0x000108721f24(auStack_1678,plVar10[2],pppuVar5);
    in_ZR = cStack_14a8 == '\x01';
    if ((bool)in_ZR) {
      puVar6 = auStack_1660;
      func_0x000107c28f30(puVar6,plVar10 + 7);
      if (((ulong)puVar6 & 1) != 0) {
        func_0x000108721f58();
        func_0x000108721ea0(appuStack_14a0);
        func_0x000108721e8c();
LAB_108721778:
        func_0x000107c288ec(auStack_ce0);
        while( true ) {
          func_0x000108721e14(uStack_4b0);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108721e80();
          func_0x000107c288ec(auStack_ce0);
          in_ZR = (int)plVar10 == 1;
          if (!(bool)in_ZR) break;
          ___cxa_begin_catch(&ppuStack_8e0);
          ___cxa_end_catch();
        }
        pppuVar5 = &ppuStack_8e0;
        __Unwind_Resume(&ppuStack_8e0);
        pcStack_1688 = FUN_1087218bc;
        pppuVar7 = (undefined ***)auStack_16a1;
        auStack_16a1._1_8_ = &ppuStack_8e0;
        plStack_1698 = plVar10;
        ppuStack_1690 = &puStack_450;
        FUN_1087218f0(pppuVar7,pppuVar5);
        *ppppuVar8 = pppuVar7;
        return;
      }
    }
    pppuVar13 = pppuVar5 + 0x1d;
    FUN_1086f7298(pppuVar13,plVar10 + 4);
    if (((int)pppuVar13 == 0) || (((ulong)pppuVar5[8] & 1) != 0)) {
      func_0x000108721f2c();
      FUN_108720df8();
      func_0x000108721f2c();
      ppppuVar8 = (undefined ****)0x0;
      FUN_108720c04();
      pppuVar13 = pppuVar5 + 0x1d;
      func_0x000107c28f58(pppuVar13,plVar10 + 4);
      if ((int)pppuVar13 != 0) {
        ppuVar9 = pppuVar5[0x21];
        bVar1 = 1 < (long)ppuVar9;
        if (1 < (long)ppuVar9) {
          ppuStack_8d8 = (undefined8 **)0x0;
          ppuStack_8e0 = (undefined8 **)&UNK_10f4b2558;
          puStack_8c8 = &UNK_100697a48;
          pcStack_8b8 = (code *)0x0;
          pppuStack_8d0 = (undefined ***)pppuVar5;
          uStack_8c0 = (undefined8 ***)ppuVar9;
          func_0x000107c2793c(&UNK_10f4b2512);
          func_0x000107c3173c(&pppuStack_510);
          ppuStack_8d8 = (undefined ***)0x0;
          pppuStack_8d0 = (undefined ***)0x0;
          puStack_8c8 = (undefined *)0x0;
          ppuStack_8e0 = ppuStack_1680;
          uStack_8c0 = (undefined8 ***)CONCAT44(uStack_8c0._4_4_,0x1ca);
          ppppuVar8 = (undefined ****)&ppuStack_8e0;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
        }
        if ((pppuVar5[0x2d] != pppuVar5[0x2e]) || (pppuVar5[0x2a] != pppuVar5[0x2b])) {
          uStack_8c0 = pppuVar5 + 0x2d;
          pppuStack_8b0 = (undefined ***)(pppuVar5 + 0x2a);
          ppuStack_8d8 = (undefined8 **)0x0;
          ppuStack_8e0 = (undefined8 **)&UNK_10f4b2558;
          puStack_8c8 = &UNK_100697a48;
          pcStack_8b8 = FUN_1087218bc;
          pcStack_8a8 = FUN_1087218bc;
          pppuStack_8d0 = (undefined ***)pppuVar5;
          func_0x000107c2793c(&UNK_10f4b2568);
          func_0x000107c3173c(&pppuStack_510);
          ppuStack_8d8 = (undefined ***)0x0;
          pppuStack_8d0 = (undefined ***)0x0;
          puStack_8c8 = (undefined *)0x0;
          ppuStack_8e0 = (undefined8 **)&PTR_FUN_110a609a8;
          uStack_8c0 = (undefined8 ***)CONCAT44(uStack_8c0._4_4_,0x1cb);
          ppppuVar8 = (undefined ****)&ppuStack_8e0;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
          bVar1 = true;
        }
        if ((bVar1) && ((*(byte *)(plVar10 + 0x12) & 1) != 0)) {
          func_0x000107c291e0(&ppuStack_8e0,pppuVar5);
          uStack_7d8 = 1;
          uStack_788 = uStack_790;
          uStack_740 = uStack_748;
          uStack_770 = uStack_778;
          uStack_758 = uStack_760;
          FUN_1088665d4(plVar10[2],&ppuStack_8e0);
          func_0x000107c288d0(&ppuStack_8e0);
        }
      }
    }
    else {
      uVar2 = *(uint *)(pppuVar5 + 6) & 0xfffffffb;
      if (uVar2 != 1) {
        if (*(uint *)(pppuVar5 + 6) - 0x11 < 2) goto LAB_10872154c;
        func_0x000108721f2c();
        FUN_108720df8();
      }
      ppppuVar8 = (undefined ****)(ulong)(uVar2 == 1);
      func_0x000108721f2c();
      FUN_108720c04();
    }
LAB_10872154c:
    (**(code **)(*(long *)plVar10[0xc] + 0x10))(&ppuStack_8e0,(long *)plVar10[0xc],pppuVar5);
    if (((char)puStack_8c8 == '\x01') && (ppuStack_8e0 != ppuStack_8d8)) {
      pppuVar13 = &ppuStack_8e0;
      FUN_10869c488(pppuVar13,0);
      pppuVar13 = (undefined8 ***)pppuVar13[3];
      lVar14 = plVar10[2];
      apppuStack_4c8[0] = (undefined ***)pppuVar13;
      FUN_1086afdec(&pppuStack_510,apppuStack_4c8,1);
      ppppuVar8 = &pppuStack_510;
      FUN_108861b60(&lStack_4e0,lVar14,pppuVar5,ppppuVar8,1);
      func_0x00010867bb84(&pppuStack_510);
      if (lStack_4e0 == lStack_4d8) {
        puStack_508 = (undefined *)0x0;
        pppuStack_510 = (undefined ***)pppuVar13;
        func_0x000107c2793c(&UNK_10f4b277c);
        func_0x000107c3173c(apppuStack_4c8);
        func_0x000108721e50();
        uStack_4f0 = 0x1c5;
        ppppuVar8 = &pppuStack_510;
        func_0x000108721e3c();
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_4c8);
        uVar15 = 0;
        bVar11 = 0;
      }
      else {
        uVar17 = *(ulong *)(lStack_4e0 + 0x20) >> 8;
        bVar11 = *(byte *)(lStack_4e0 + 0x28);
        uVar15 = *(ulong *)(lStack_4e0 + 0x20) & 0xff;
      }
      func_0x00010867b9fc(&lStack_4e0);
    }
    else {
      uVar15 = 0;
      bVar11 = 0;
    }
    ppppuVar16 = (undefined ****)(uVar15 | uVar17 << 8);
    in_ZR = uStack_8c0._4_4_ == 3;
    if ((bool)in_ZR) {
      if ((bVar11 & 1) != 0) {
        func_0x000108721f2c();
        ppppuVar8 = ppppuVar16;
        FUN_108720fd0();
        lVar14 = plVar10[0x10];
        func_0x000108721f68();
        in_ZR = lVar14 == 0x100000000;
        if ((bool)in_ZR) {
          puStack_508 = &UNK_100697a48;
          uStack_4f8 = 0;
          pppuStack_510 = (undefined ***)pppuVar5;
          pppuStack_500 = ppppuVar16;
          func_0x000107c2793c(&UNK_10f4b274d);
          func_0x000108721f04(&lStack_4e0);
          func_0x000108721e50();
          uStack_4f0 = 0x1c8;
          ppppuVar8 = &pppuStack_510;
          func_0x000108721e3c();
          goto LAB_108721718;
        }
      }
    }
    else if ((uStack_8c0._4_4_ == 0) && ((bVar11 & 1) != 0)) {
      func_0x000108721f2c();
      ppppuVar8 = ppppuVar16;
      FUN_108720fd0();
      lVar14 = plVar10[0x10];
      func_0x000108721f68();
      in_ZR = lVar14 == 0x100000000;
      if (!(bool)in_ZR) {
        puStack_508 = &UNK_100697a48;
        uStack_4f8 = 0;
        pppuStack_510 = (undefined ***)pppuVar5;
        pppuStack_500 = ppppuVar16;
        func_0x000107c2793c(&UNK_10f4b271a);
        func_0x000108721f04(&lStack_4e0);
        func_0x000108721e50();
        uStack_4f0 = 0x1c7;
        ppppuVar8 = &pppuStack_510;
        func_0x000108721e3c();
LAB_108721718:
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_4e0);
      }
    }
    func_0x000107c27b20(&ppuStack_8e0);
    func_0x000108721f58();
    func_0x000107c28920(appuStack_10c0);
  }
  func_0x000108721ea0(appuStack_14a0);
  func_0x000108721e8c();
  func_0x000107c28288(&puStack_8f8);
  plVar10 = (long *)plVar10[10];
  pppuVar7 = (undefined ***)&puStack_8f8;
  func_0x000107c2825c();
  ppppuVar8 = (undefined ****)appuStack_10c0;
  appuStack_10c0[0] = pppuVar7;
  (**(code **)(*plVar10 + 0x10))(plVar10,0x1c2);
  goto LAB_108721778;
}



/* Entry: 108721260; end: 1087218bb;  */

void FUN_108721260(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 extraout_x8;
  undefined **ppuVar7;
  long *unaff_x19;
  byte bVar8;
  undefined ***pppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 ***pppuVar12;
  ulong uVar13;
  undefined1 auStack_1261 [9];
  long *plStack_1258;
  undefined1 *puStack_1250;
  code *pcStack_1248;
  undefined **ppuStack_1240;
  undefined1 auStack_1238 [24];
  undefined1 auStack_1220 [440];
  char cStack_1068;
  undefined **appuStack_1060 [123];
  byte bStack_c88;
  undefined **appuStack_c80 [123];
  byte bStack_8a8;
  undefined1 auStack_8a0 [1000];
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined8 **ppuStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined8 uStack_398;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined8 **appuStack_88 [3];
  undefined8 uStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000108721e28();
  puStack_4b8 = (undefined *)0x0;
  uStack_70 = extraout_x8;
  func_0x000107c28258();
  uStack_4a8 = 1;
  appuStack_c80[0] = (undefined **)CONCAT44(appuStack_c80[0]._4_4_,1);
  pppuVar6 = (undefined8 ***)0x0;
  uStack_4b0 = param_1;
  FUN_108866da0(auStack_8a0,unaff_x19[2],appuStack_c80);
  func_0x000107c288b4(appuStack_c80,auStack_8a0);
  _bzero(appuStack_1060,0x3e0);
  uVar13 = 0;
  ppuStack_1240 = &PTR_FUN_110a609a8;
  while (((bStack_8a8 & 1) != 0 || ((bStack_c88 & 1) != 0))) {
    in_ZR = 1;
    if (appuStack_c80[0] == appuStack_1060[0]) break;
    pppuVar3 = appuStack_c80;
    func_0x000107c288b8();
    func_0x000108721f24(auStack_1238,unaff_x19[2],pppuVar3);
    in_ZR = cStack_1068 == '\x01';
    if ((bool)in_ZR) {
      puVar4 = auStack_1220;
      func_0x000107c28f30(puVar4,unaff_x19 + 7);
      if (((ulong)puVar4 & 1) != 0) {
        func_0x000108721f58();
        func_0x000108721ea0(appuStack_1060);
        func_0x000108721e8c();
LAB_108721778:
        func_0x000107c288ec(auStack_8a0);
        while( true ) {
          func_0x000108721e14(uStack_70);
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108721e80();
          func_0x000107c288ec(auStack_8a0);
          in_ZR = (int)unaff_x19 == 1;
          if (!(bool)in_ZR) break;
          ___cxa_begin_catch(&ppuStack_4a0);
          ___cxa_end_catch();
        }
        pppuVar3 = &ppuStack_4a0;
        __Unwind_Resume(&ppuStack_4a0);
        pcStack_1248 = FUN_1087218bc;
        ppuVar5 = (undefined8 **)auStack_1261;
        auStack_1261._1_8_ = &ppuStack_4a0;
        plStack_1258 = unaff_x19;
        puStack_1250 = &stack0xfffffffffffffff0;
        FUN_1087218f0(ppuVar5,pppuVar3);
        *pppuVar6 = ppuVar5;
        return;
      }
    }
    pppuVar9 = pppuVar3 + 0x1d;
    FUN_1086f7298(pppuVar9,unaff_x19 + 4);
    if (((int)pppuVar9 == 0) || (((ulong)pppuVar3[8] & 1) != 0)) {
      func_0x000108721f2c();
      FUN_108720df8();
      func_0x000108721f2c();
      pppuVar6 = (undefined8 ***)0x0;
      FUN_108720c04();
      pppuVar9 = pppuVar3 + 0x1d;
      func_0x000107c28f58(pppuVar9,unaff_x19 + 4);
      if ((int)pppuVar9 != 0) {
        ppuVar7 = pppuVar3[0x21];
        bVar1 = 1 < (long)ppuVar7;
        if (1 < (long)ppuVar7) {
          ppuStack_498 = (undefined **)0x0;
          ppuStack_4a0 = (undefined **)&UNK_10f4b2558;
          puStack_488 = &UNK_100697a48;
          pcStack_478 = (code *)0x0;
          ppuStack_490 = pppuVar3;
          uStack_480 = (undefined ***)ppuVar7;
          func_0x000107c2793c(&UNK_10f4b2512);
          func_0x000107c3173c(&ppuStack_d0);
          ppuStack_498 = (undefined **)0x0;
          ppuStack_490 = (undefined8 **)0x0;
          puStack_488 = (undefined *)0x0;
          ppuStack_4a0 = ppuStack_1240;
          uStack_480 = (undefined ***)CONCAT44(uStack_480._4_4_,0x1ca);
          pppuVar6 = (undefined8 ***)&ppuStack_4a0;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
        }
        if ((pppuVar3[0x2d] != pppuVar3[0x2e]) || (pppuVar3[0x2a] != pppuVar3[0x2b])) {
          uStack_480 = pppuVar3 + 0x2d;
          ppuStack_470 = pppuVar3 + 0x2a;
          ppuStack_498 = (undefined **)0x0;
          ppuStack_4a0 = (undefined **)&UNK_10f4b2558;
          puStack_488 = &UNK_100697a48;
          pcStack_478 = FUN_1087218bc;
          pcStack_468 = FUN_1087218bc;
          ppuStack_490 = pppuVar3;
          func_0x000107c2793c(&UNK_10f4b2568);
          func_0x000107c3173c(&ppuStack_d0);
          ppuStack_498 = (undefined **)0x0;
          ppuStack_490 = (undefined8 **)0x0;
          puStack_488 = (undefined *)0x0;
          ppuStack_4a0 = &PTR_FUN_110a609a8;
          uStack_480 = (undefined ***)CONCAT44(uStack_480._4_4_,0x1cb);
          pppuVar6 = (undefined8 ***)&ppuStack_4a0;
          func_0x000108721e3c();
          func_0x000108721f50();
          func_0x000108721f48();
          bVar1 = true;
        }
        if ((bVar1) && ((*(byte *)(unaff_x19 + 0x12) & 1) != 0)) {
          func_0x000107c291e0(&ppuStack_4a0,pppuVar3);
          uStack_398 = 1;
          uStack_348 = uStack_350;
          uStack_300 = uStack_308;
          uStack_330 = uStack_338;
          uStack_318 = uStack_320;
          FUN_1088665d4(unaff_x19[2],&ppuStack_4a0);
          func_0x000107c288d0(&ppuStack_4a0);
        }
      }
    }
    else {
      uVar2 = *(uint *)(pppuVar3 + 6) & 0xfffffffb;
      if (uVar2 != 1) {
        if (*(uint *)(pppuVar3 + 6) - 0x11 < 2) goto LAB_10872154c;
        func_0x000108721f2c();
        FUN_108720df8();
      }
      pppuVar6 = (undefined8 ***)(ulong)(uVar2 == 1);
      func_0x000108721f2c();
      FUN_108720c04();
    }
LAB_10872154c:
    (**(code **)(*(long *)unaff_x19[0xc] + 0x10))(&ppuStack_4a0,(long *)unaff_x19[0xc],pppuVar3);
    if (((char)puStack_488 == '\x01') && (ppuStack_4a0 != ppuStack_498)) {
      pppuVar9 = &ppuStack_4a0;
      FUN_10869c488(pppuVar9,0);
      pppuVar9 = (undefined ***)pppuVar9[3];
      lVar10 = unaff_x19[2];
      appuStack_88[0] = pppuVar9;
      FUN_1086afdec(&ppuStack_d0,appuStack_88,1);
      pppuVar6 = &ppuStack_d0;
      FUN_108861b60(&lStack_a0,lVar10,pppuVar3,pppuVar6,1);
      func_0x00010867bb84(&ppuStack_d0);
      if (lStack_a0 == lStack_98) {
        puStack_c8 = (undefined *)0x0;
        ppuStack_d0 = pppuVar9;
        func_0x000107c2793c(&UNK_10f4b277c);
        func_0x000107c3173c(appuStack_88);
        func_0x000108721e50();
        uStack_b0 = 0x1c5;
        pppuVar6 = &ppuStack_d0;
        func_0x000108721e3c();
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_88);
        uVar11 = 0;
        bVar8 = 0;
      }
      else {
        uVar13 = *(ulong *)(lStack_a0 + 0x20) >> 8;
        bVar8 = *(byte *)(lStack_a0 + 0x28);
        uVar11 = *(ulong *)(lStack_a0 + 0x20) & 0xff;
      }
      func_0x00010867b9fc(&lStack_a0);
    }
    else {
      uVar11 = 0;
      bVar8 = 0;
    }
    pppuVar12 = (undefined8 ***)(uVar11 | uVar13 << 8);
    in_ZR = uStack_480._4_4_ == 3;
    if ((bool)in_ZR) {
      if ((bVar8 & 1) != 0) {
        func_0x000108721f2c();
        pppuVar6 = pppuVar12;
        FUN_108720fd0();
        lVar10 = unaff_x19[0x10];
        func_0x000108721f68();
        in_ZR = lVar10 == 0x100000000;
        if ((bool)in_ZR) {
          puStack_c8 = &UNK_100697a48;
          uStack_b8 = 0;
          ppuStack_d0 = pppuVar3;
          pppuStack_c0 = (undefined ***)pppuVar12;
          func_0x000107c2793c(&UNK_10f4b274d);
          func_0x000108721f04(&lStack_a0);
          func_0x000108721e50();
          uStack_b0 = 0x1c8;
          pppuVar6 = &ppuStack_d0;
          func_0x000108721e3c();
          goto LAB_108721718;
        }
      }
    }
    else if ((uStack_480._4_4_ == 0) && ((bVar8 & 1) != 0)) {
      func_0x000108721f2c();
      pppuVar6 = pppuVar12;
      FUN_108720fd0();
      lVar10 = unaff_x19[0x10];
      func_0x000108721f68();
      in_ZR = lVar10 == 0x100000000;
      if (!(bool)in_ZR) {
        puStack_c8 = &UNK_100697a48;
        uStack_b8 = 0;
        ppuStack_d0 = pppuVar3;
        pppuStack_c0 = (undefined ***)pppuVar12;
        func_0x000107c2793c(&UNK_10f4b271a);
        func_0x000108721f04(&lStack_a0);
        func_0x000108721e50();
        uStack_b0 = 0x1c7;
        pppuVar6 = &ppuStack_d0;
        func_0x000108721e3c();
LAB_108721718:
        func_0x000108721f0c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_a0);
      }
    }
    func_0x000107c27b20(&ppuStack_4a0);
    func_0x000108721f58();
    func_0x000107c28920(appuStack_c80);
  }
  func_0x000108721ea0(appuStack_1060);
  func_0x000108721e8c();
  func_0x000107c28288(&puStack_4b8);
  unaff_x19 = (long *)unaff_x19[10];
  ppuVar5 = (undefined8 **)&puStack_4b8;
  func_0x000107c2825c();
  pppuVar6 = (undefined8 ***)appuStack_c80;
  appuStack_c80[0] = (undefined **)ppuVar5;
  (**(code **)(*unaff_x19 + 0x10))(unaff_x19,0x1c2);
  goto LAB_108721778;
}



/* Entry: 1087218bc; end: 1087218ef;  */

void FUN_1087218bc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_1087218f0(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 1087218f0; end: 108721a13;  */

undefined8 FUN_1087218f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [256];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000105680760(auStack_178);
  for (puVar2 = (undefined8 *)*param_2; puVar2 != (undefined8 *)param_2[1]; puVar2 = puVar2 + 1) {
    uStack_60 = *puVar2;
    uStack_58 = 0;
    func_0x000107c2793c(&DAT_10f2fb62f);
    func_0x000107c3173c(auStack_190);
    func_0x000107c28084(auStack_168,auStack_190);
    func_0x000108721ed0();
    if (puVar2 != (undefined8 *)(param_2[1] + -8)) {
      func_0x00010549023c(auStack_168,&DAT_10f68e8ee);
    }
  }
  uVar1 = *param_3;
  func_0x000105491b64(auStack_190,auStack_160);
  func_0x00010596eb90(uVar1,&UNK_10f315a70,auStack_190);
  func_0x000108721ed0();
  func_0x000105673d7c(auStack_178);
  return uVar1;
}



/* Entry: 108721a14; end: 108721b27;  */

void FUN_108721a14(long param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  int extraout_w9;
  int extraout_w9_00;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar8 = param_1;
  FUN_108721b28();
  if ((int)lVar8 != 0) {
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x78);
    }
    if (*(int *)(ppuVar1 + 0x15) == 0) {
      uVar2 = *(ulong *)(param_2 + 0x20);
      func_0x000108721ebc(*(undefined8 *)(param_1 + 0x68));
      if ((uVar2 & 1) == 0) {
        ppuVar1 = &PTR_PTR_113286e08;
        if (*(undefined ***)(param_1 + 0x80) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(param_1 + 0x80);
        }
        puVar5 = ppuVar1[3];
        uVar2 = *(ulong *)(param_2 + 0x20);
        ppuVar7 = ppuVar1 + 3;
        if (((ulong)puVar5 & 1) != 0) {
          ppuVar7 = (undefined **)(puVar5 + 7);
        }
        lVar8 = (long)*(int *)(ppuVar1 + 4) << 3;
        do {
          if (lVar8 == 0) {
            ppuVar1 = &PTR_PTR_113280c30;
            if (*(undefined ***)(param_1 + 0x78) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_1 + 0x78);
            }
            if (((*(byte *)(ppuVar1 + 2) >> 6 & 1) != 0) && (*(int *)(ppuVar1[0x13] + 0x1c) == 2)) {
              return;
            }
            if (((*(byte *)(*(long *)(param_2 + 0x10) + 8) & 1) != 0) ||
               (func_0x000108721f80(), puVar4 = extraout_x8, extraout_w9 != 0)) {
              if ((*(byte *)(*(long *)(param_2 + 0x18) + 8) & 1) != 0) {
                return;
              }
              func_0x000108721f80();
              puVar4 = extraout_x8_00;
              if (extraout_w9_00 == 0) {
                return;
              }
            }
            uVar6 = *(undefined8 *)(param_1 + 0x20);
            *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(param_1 + 0x28);
            *puVar4 = uVar6;
            return;
          }
          uVar3 = uVar2;
          func_0x000107c287fc(uVar2,*ppuVar7);
          lVar8 = lVar8 + -8;
          ppuVar7 = ppuVar7 + 1;
        } while ((uVar3 & 1) == 0);
      }
    }
  }
  return;
}



/* Entry: 108721b28; end: 108721baf;  */

uint FUN_108721b28(long param_1)

{
  int iVar1;
  
  if ((bRam000000011372c7d8 & 1) == 0) {
    iVar1 = 0x1372c7d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c278b8(0x11372c7e0,&DAT_10f4bdff7);
      ___cxa_guard_release(0x11372c7d8);
    }
  }
  param_1 = param_1 + 200;
  func_0x000107c278d0(param_1,0x11372c7e0);
  return (uint)param_1 ^ 1;
}



/* Entry: 108721bb0; end: 108721bd3;  */

void FUN_108721bb0(void)

{
  return;
}



/* Entry: 108721bd4; end: 108721c67;  */

void FUN_108721bd4(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108721e80();
  FUN_108721b28();
  if (param_1 != 0) {
    ppuVar1 = &PTR_PTR_113280c30;
    if (*(undefined ***)(unaff_x20 + 0x78) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(unaff_x20 + 0x78);
    }
    if (*(int *)(ppuVar1 + 0x15) != 0) {
      uVar3 = *(ulong *)(unaff_x19 + 0x18);
      func_0x000108721ebc(*(undefined8 *)(unaff_x20 + 0x68));
      if ((uVar3 & 1) == 0) {
        ppuVar1 = &PTR_PTR_113280c30;
        if (*(undefined ***)(unaff_x20 + 0x78) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(unaff_x20 + 0x78);
        }
        iVar2 = *(int *)(ppuVar1 + 0x15);
        if ((1 < iVar2 - 0xeU) &&
           (((iVar2 != 6 || ((*(byte *)(ppuVar1 + 2) >> 3 & 1) != 0)) &&
            (piVar4 = *(int **)(unaff_x19 + 0x10), (*(byte *)(piVar4 + 1) & 1) == 0)))) {
          *piVar4 = iVar2;
          *(undefined1 *)(piVar4 + 1) = 1;
        }
      }
    }
  }
  return;
}



/* Entry: 108721c68; end: 108721c83;  */

void FUN_108721c68(void)

{
  return;
}



/* Entry: 108721c84; end: 108721ccf;  */

undefined8 * FUN_108721c84(undefined8 *param_1,long param_2,long param_3)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_108721cd0(param_1,param_2,param_2 + param_3 * 8);
  return param_1;
}



/* Entry: 108721cd0; end: 108721d13;  */

void FUN_108721cd0(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_108721d14(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 108721d14; end: 108721d1b;  */

undefined1  [16] FUN_108721d14(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001086d28f8(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_58 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_3;
    plStack_60 = param_1 + 1;
    FUN_10867c1ec(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    func_0x00010867c238(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108721d1c; end: 108721dbf;  */

undefined1  [16]
FUN_108721d1c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x0001086d28f8(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x28;
    __Znwm();
    uStack_58 = 1;
    *(undefined8 *)(lVar3 + 0x20) = *param_4;
    plStack_60 = param_1 + 1;
    FUN_10867c1ec(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    func_0x00010867c238(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 108721dc0; end: 108721dfb;  */

void FUN_108721dc0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (*(char *)(lVar2 + 0x1a8) == '\x01') {
    func_0x000107c324b0(lVar2,param_1);
    func_0x000107c27cfc();
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar1 = *(undefined1 *)(unaff_x19 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
    *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
    FUN_108919e8c(unaff_x20 + 0x50,unaff_x19 + 0x50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x20 + 200,unaff_x19 + 200);
    uVar3 = *(undefined8 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe0) = uVar3;
    FUN_1086aa298(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x128);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x138);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x130);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x139);
    *(undefined8 *)(unaff_x20 + 0x141) = *(undefined8 *)(unaff_x19 + 0x141);
    *(undefined8 *)(unaff_x20 + 0x139) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x128) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x120) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x138) = uVar8;
    *(undefined8 *)(unaff_x20 + 0x130) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x118) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x110) = uVar3;
    func_0x000107c28d24(unaff_x20 + 0x150,unaff_x19 + 0x150);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x178);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x170);
    *(undefined1 *)(unaff_x20 + 0x180) = *(undefined1 *)(unaff_x19 + 0x180);
    *(undefined8 *)(unaff_x20 + 0x178) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x170) = uVar3;
    func_0x000107c28d24(unaff_x20 + 0x188,unaff_x19 + 0x188);
    return;
  }
  func_0x000107c28a9c(lVar2,param_1);
  *(undefined1 *)(lVar2 + 0x1a8) = 1;
  return;
}



/* Entry: 108721dfc; end: 108721f93;  */

void FUN_108721dfc(void)

{
  return;
}



/* Entry: 108721f94; end: 108722147;  */

void FUN_108721f94(long param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                  undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  lVar4 = *param_2;
  lVar1 = param_2[1];
  do {
    if (lVar4 == lVar1) {
      if (((lStack_58 != lStack_50) || (*param_3 != param_3[1])) || (*param_5 != param_5[1])) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        (**(code **)(**(long **)(param_1 + 8) + 0x10))
                  (*(long **)(param_1 + 8),&lStack_58,param_3,&uStack_a0,param_5,param_6);
        func_0x000107c27b3c(&uStack_a0);
      }
      if ((*(long *)(param_1 + 0x18) != 0) && (lStack_70 != lStack_68)) {
        FUN_1087222e8();
        func_0x00010872230c();
        func_0x000108722338();
        func_0x000108722328();
        func_0x000108722330();
      }
      if ((*(long *)(param_1 + 0x28) != 0) && (lStack_88 != lStack_80)) {
        FUN_1087222e8();
        func_0x00010872230c();
        func_0x000108722338();
        func_0x000108722328();
        func_0x000108722330();
      }
      func_0x000107c27b40(&lStack_88);
      func_0x000107c27b40(&lStack_70);
      func_0x000107c27b40(&lStack_58);
      return;
    }
    iVar2 = *(int *)(lVar4 + 0x240);
    if (iVar2 == 0) {
      plVar3 = &lStack_58;
LAB_10872200c:
      func_0x0001086feeec(plVar3,lVar4);
    }
    else {
      if (iVar2 == 2) {
        plVar3 = &lStack_88;
        goto LAB_10872200c;
      }
      if (iVar2 == 1) {
        plVar3 = &lStack_70;
        goto LAB_10872200c;
      }
    }
    lVar4 = lVar4 + 0x378;
  } while( true );
}



/* Entry: 108722148; end: 108722283;  */

void FUN_108722148(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long alStack_48 [3];
  
  if ((param_2 >> 0x20 & 1) == 0) {
    alStack_48[0] = *(long *)(param_1 + 8);
    alStack_48[1] = *(undefined8 *)(param_1 + 0x18);
    alStack_48[2] = *(undefined8 *)(param_1 + 0x28);
    for (lVar1 = 0; lVar1 != 0x18; lVar1 = lVar1 + 8) {
      if (*(long *)((long)alStack_48 + lVar1) != 0) {
        func_0x00010872234c();
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x000108722360();
        func_0x000108722340();
        func_0x000108722320();
        func_0x000107c28c5c(&uStack_90);
        func_0x000107c28c60(auStack_78);
        func_0x000107c27b40(auStack_60);
      }
    }
  }
  else if ((uint)param_2 < 3) {
    if (*(long *)(param_1 + (param_2 & 3) * 0x10 + 8) != 0) {
      alStack_48[0] = 0;
      alStack_48[1] = 0;
      alStack_48[2] = 0;
      func_0x00010872234c();
      func_0x000108722360();
      func_0x000108722340();
      func_0x000108722320();
      func_0x000107c28c5c(auStack_78);
      func_0x000107c28c60(auStack_60);
      func_0x000107c27b40(alStack_48);
    }
  }
  return;
}



/* Entry: 108722284; end: 10872228b;  */

void FUN_108722284(void)

{
  return;
}



/* Entry: 10872228c; end: 10872229f;  */

void FUN_10872228c(void)

{
  FUN_1087222a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087222a0; end: 1087222e7;  */

undefined8 * FUN_1087222a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a68e08;
  func_0x000107c27a68(param_1 + 5);
  func_0x000107c27a68(param_1 + 3);
  func_0x000107c27a68(param_1 + 1);
  return param_1;
}



/* Entry: 1087222e8; end: 108722373;  */

void FUN_1087222e8(void)

{
  return;
}



/* Entry: 108722374; end: 1087224a3;  */

bool FUN_108722374(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
                  undefined8 param_6,long param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lStack_68;
  int iStack_60;
  uint uStack_5c;
  long lStack_58;
  
  bVar1 = false;
  if ((param_4 < 0x1e) && ((1 << (ulong)(param_4 & 0x1f) & 0x20218026U) != 0)) {
    puVar2 = (undefined8 *)(param_1 + 0x28);
    lStack_58 = param_3;
    FUN_108722768();
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      func_0x00010872454c();
      uVar4 = (long)puVar2[1] / 1000;
    }
    bVar1 = uVar4 < (ulong)(param_7 / 1000);
    if (bVar1) {
      func_0x00010872454c();
      *puVar2 = param_6;
      puVar2[1] = param_7;
    }
    lStack_68 = param_3;
    iStack_60 = param_5;
    uStack_5c = param_4;
    func_0x0001087224c4(param_1,param_2);
    plVar3 = (long *)(param_1 + 0x10);
    FUN_1087224e4(plVar3,&lStack_58);
    if (*(long **)(param_1 + 8) != plVar3) {
      if (((*plVar3 == param_3) && ((int)plVar3[1] == param_5)) &&
         (*(uint *)((long)plVar3 + 0xc) == param_4)) {
        return bVar1;
      }
      FUN_1087224f0(param_1 + 0x10,lStack_58);
    }
    FUN_108722590(param_1 + 0x10,&lStack_68);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1087224a4; end: 1087224e3;  */

long FUN_1087224a4(long param_1)

{
  func_0x0001087244f0();
  FUN_10872282c();
  return param_1 + 0x28;
}



/* Entry: 1087224e4; end: 1087224ef;  */

long * FUN_1087224e4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  bool bVar2;
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000108724628(param_1,param_2,param_1 + 3,param_1 + 4);
  param_1 = param_1 + 8;
  FUN_10872324c(param_1,*param_2);
  plVar1 = *(long **)(*(long *)(unaff_x19 + 0x20) + param_1 * 8);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return *(long **)(unaff_x19 + -8);
    }
    if (*unaff_x20 == plVar1[-5]) break;
    bVar2 = *(long **)plVar1[1] != plVar1;
    plVar1 = (long *)plVar1[1];
    if (bVar2) {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1 + -5;
}



/* Entry: 1087224f0; end: 10872258f;  */

long FUN_1087224f0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x20;
  
  func_0x0001087244e4();
  param_1 = param_1 + 8;
  FUN_10872324c();
  plVar2 = *(long **)(*(long *)(unaff_x20 + 0x20) + param_1 * 8);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    plVar3 = (long *)plVar2[1];
    plVar4 = (long *)*plVar3;
    if (unaff_x19 == plVar2[-5]) break;
    bVar1 = plVar4 != plVar2;
    plVar2 = plVar3;
    if (bVar1) {
      plVar2 = (long *)0x0;
    }
  }
  lVar6 = 0;
  if (plVar4 != plVar2) {
    plVar3 = plVar4;
  }
  do {
    plVar5 = *(long **)plVar2[1];
    plVar4 = (long *)plVar2[1];
    if (plVar5 != plVar2) {
      plVar4 = plVar5;
    }
    plVar5 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar5 = plVar2 + -5;
    }
    FUN_10872354c(unaff_x20 + -0x10,plVar5);
    lVar6 = lVar6 + 1;
    plVar2 = plVar4;
  } while (plVar4 != plVar3);
  return lVar6;
}



/* Entry: 108722590; end: 1087225a7;  */

void FUN_108722590(void)

{
  FUN_1087239e4();
  return;
}


