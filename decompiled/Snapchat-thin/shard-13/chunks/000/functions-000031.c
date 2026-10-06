/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109da5834; end: 109da5963;  */

void FUN_109da5834(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar7 = (uint *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined4 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,4);
  *param_1 = puVar3;
  if (puVar7 != (uint *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xffffffff;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 4;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar8 = puVar7;
      do {
        if (*puVar8 < 0xfffffffe) {
          FUN_109da56f8(param_1,puVar8,&puStack_38);
          *puStack_38 = *puVar8;
          uVar6 = *(undefined8 *)(puVar8 + 1);
          puStack_38[3] = puVar8[3];
          *(undefined8 *)(puStack_38 + 1) = uVar6;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar8 = puVar8 + 4;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar7,4);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xffffffff;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109da5964; end: 109da61d3;  */

undefined4 *
FUN_109da5964(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  ulong *puVar1;
  undefined8 ******ppppppuVar2;
  int iVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  undefined *puVar6;
  undefined8 ******ppppppuVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *****pppppuStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 uStack_70;
  
  *(undefined8 *)(param_1 + 2) = param_9;
  *(undefined8 *)(param_1 + 4) = param_10;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 6,*param_2,param_2[1]);
  }
  else {
    uVar12 = param_2[1];
    uVar9 = *param_2;
    *(undefined8 *)(param_1 + 10) = param_2[2];
    *(undefined8 *)(param_1 + 8) = uVar12;
    *(undefined8 *)(param_1 + 6) = uVar9;
  }
  uVar13 = param_2[4];
  uVar12 = param_2[3];
  uVar9 = param_2[5];
  puVar11 = (undefined8 *)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0xe) = uVar13;
  *(undefined8 *)(param_1 + 0xc) = uVar12;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + 0x12) = param_6;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined ***)(param_1 + 0x1c) = &PTR_FUN_110b584d8;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(code **)(param_1 + 0x1e) = FUN_109da61d4;
  *(undefined4 **)(param_1 + 0x22) = param_1 + 0x1c;
  *(undefined8 *)(param_1 + 0x24) = param_3;
  *(undefined8 *)(param_1 + 0x26) = param_4;
  *(undefined8 *)(param_1 + 0x2a) = param_5;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 **)(param_1 + 0x32) = param_1 + 0x36;
  *(undefined8 *)(param_1 + 0x34) = 0x400000000;
  *(undefined4 **)(param_1 + 0x3e) = param_1 + 0x42;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined4 **)(param_1 + 0x4a) = param_1 + 0x4e;
  *(undefined8 *)(param_1 + 0x4c) = 0x400000000;
  *(undefined4 **)(param_1 + 0x56) = param_1 + 0x5a;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 **)(param_1 + 0x62) = param_1 + 0x66;
  *(undefined8 *)(param_1 + 100) = 0x400000000;
  *(undefined4 **)(param_1 + 0x6e) = param_1 + 0x72;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 **)(param_1 + 0x7a) = param_1 + 0x7e;
  *(undefined8 *)(param_1 + 0x7c) = 0x400000000;
  *(undefined4 **)(param_1 + 0x86) = param_1 + 0x8a;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 **)(param_1 + 0x92) = param_1 + 0x96;
  *(undefined8 *)(param_1 + 0x94) = 0x400000000;
  *(undefined4 **)(param_1 + 0x9e) = param_1 + 0xa2;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 **)(param_1 + 0xaa) = param_1 + 0xae;
  *(undefined8 *)(param_1 + 0xac) = 0x400000000;
  *(undefined4 **)(param_1 + 0xb6) = param_1 + 0xba;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 **)(param_1 + 0xc2) = param_1 + 0xc6;
  *(undefined8 *)(param_1 + 0xc4) = 0x400000000;
  *(undefined4 **)(param_1 + 0xce) = param_1 + 0xd2;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 **)(param_1 + 0xda) = param_1 + 0xde;
  *(undefined8 *)(param_1 + 0xdc) = 0x400000000;
  *(undefined4 **)(param_1 + 0xe6) = param_1 + 0xea;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 **)(param_1 + 0xf2) = param_1 + 0xf6;
  *(undefined8 *)(param_1 + 0xf4) = 0x400000000;
  *(undefined4 **)(param_1 + 0xfe) = param_1 + 0x102;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x102) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 **)(param_1 + 0x10a) = param_1 + 0x10e;
  *(undefined8 *)(param_1 + 0x10c) = 0x400000000;
  *(undefined4 **)(param_1 + 0x116) = param_1 + 0x11a;
  *(undefined8 *)(param_1 + 0x121) = 0;
  *(undefined8 *)(param_1 + 0x11f) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  param_1[0x123] = 0x10;
  *(undefined8 **)(param_1 + 0x124) = puVar11;
  param_1[0x12a] = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x126) = 0;
  param_1[0x130] = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  param_1[0x131] = 0x10;
  *(undefined8 **)(param_1 + 0x132) = puVar11;
  param_1[0x138] = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  param_1[0x139] = 0x10;
  *(undefined8 **)(param_1 + 0x13a) = puVar11;
  param_1[0x140] = 0;
  *(undefined8 *)(param_1 + 0x13e) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  param_1[0x141] = 0x10;
  param_1[0x146] = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x148) = 1;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x14e) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x14a) = 0;
  *(undefined4 **)(param_1 + 0x154) = param_1 + 0x15a;
  *(undefined8 *)(param_1 + 0x156) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0x80;
  *(undefined8 *)(param_1 + 0x17e) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined4 **)(param_1 + 0x17a) = param_1 + 0x17c;
  puVar1 = (ulong *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x182) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x18a) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 **)(param_1 + 0x186) = param_1 + 0x188;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined2 *)(param_1 + 0x18e) = 0;
  *(undefined1 *)((long)param_1 + 0x63a) = 1;
  *(undefined4 *)((long)param_1 + 0x63e) = 0;
  *(undefined4 *)((long)param_1 + 0x63b) = 0;
  *(undefined8 *)(param_1 + 0x195) = 0;
  *(undefined8 *)(param_1 + 0x193) = 0;
  *(undefined8 *)(param_1 + 0x191) = 0;
  *(undefined8 *)(param_1 + 0x1aa) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a6) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1a2) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x19e) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x19a) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  param_1[0x1ac] = 0x1000004;
  *(undefined1 *)(param_1 + 0x1ad) = 0;
  param_1[0x1ae] = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1b2) = 0;
  *(undefined4 **)(param_1 + 0x1b0) = param_1 + 0x1b2;
  param_1[0x1ba] = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b6) = 0;
  param_1[0x1bb] = 0x10;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1be) = 0;
  *(undefined4 **)(param_1 + 0x1bc) = param_1 + 0x1be;
  *(undefined8 *)(param_1 + 0x1c6) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined4 **)(param_1 + 0x1c2) = param_1 + 0x1c4;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1ca) = 0;
  *(undefined4 **)(param_1 + 0x1c8) = param_1 + 0x1ca;
  *(undefined8 *)(param_1 + 0x1d2) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 **)(param_1 + 0x1ce) = param_1 + 0x1d0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d6) = 0;
  *(undefined4 **)(param_1 + 0x1d4) = param_1 + 0x1d6;
  param_1[0x1de] = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1da) = 0;
  param_1[0x1df] = 0x10;
  param_1[0x1e4] = 0;
  *(undefined8 *)(param_1 + 0x1e2) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  param_1[0x1e5] = 0x10;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e6) = 0;
  *(undefined4 **)(param_1 + 0x1ea) = param_1 + 0x1ee;
  *(undefined8 *)(param_1 + 0x1ec) = 0x400000000;
  *(undefined4 **)(param_1 + 0x1f6) = param_1 + 0x1fa;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x1fa) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fe) = param_8;
  *(long *)(param_1 + 0x200) = param_7;
  *(undefined1 *)(param_1 + 0x202) = 0;
  param_1[0x208] = 0;
  *(undefined8 *)(param_1 + 0x206) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  param_1[0x209] = 0x60;
  *(undefined8 *)(param_1 + 0x20e) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 0;
  *(undefined4 **)(param_1 + 0x20a) = param_1 + 0x20c;
  param_1[0x214] = 0;
  *(undefined8 *)(param_1 + 0x212) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (param_7 == 0) {
    func_0x000107c31940(&pppppuStack_80,&UNK_10f5fa6c9);
  }
  else if (*(char *)(param_7 + 0x6f) < '\0') {
    func_0x000107c3192c(&pppppuStack_80,*(undefined8 *)(param_7 + 0x58),
                        *(undefined8 *)(param_7 + 0x60));
  }
  else {
    pppppuStack_78 = *(undefined8 ******)(param_7 + 0x60);
    pppppuStack_80 = *(undefined8 ******)(param_7 + 0x58);
    uStack_70 = *(ulong *)(param_7 + 0x68);
  }
  ppppppuVar7 = &pppppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x14a);
  if ((long)uStack_70 < 0) {
    __ZdlPv(pppppuStack_80);
  }
  plVar10 = *(long **)(param_1 + 0x12);
  if ((plVar10 != (long *)0x0) && ((int)((ulong)(plVar10[1] - *plVar10) >> 3) * -0x55555555 != 0)) {
    plVar10 = *(long **)*plVar10;
    (**(code **)(*plVar10 + 0x10))();
    if ((undefined8 ******)0x7ffffffffffffff7 < ppppppuVar7) {
      func_0x000104c4f6b8();
      goto LAB_109da5fbc;
    }
    if (ppppppuVar7 < (undefined8 ******)0x17) {
      uStack_70 = CONCAT17((char)ppppppuVar7,(undefined7)uStack_70);
      ppppppuVar5 = &pppppuStack_80;
      if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_109da5e78;
    }
    else {
      ppppppuVar2 = (undefined8 ******)0x19;
      if (((ulong)ppppppuVar7 | 7) != 0x17) {
        ppppppuVar2 = (undefined8 ******)(((ulong)ppppppuVar7 | 7) + 1);
      }
      ppppppuVar5 = ppppppuVar2;
      __Znwm();
      uStack_70 = (ulong)ppppppuVar2 | 0x8000000000000000;
      pppppuStack_80 = ppppppuVar5;
      pppppuStack_78 = ppppppuVar7;
LAB_109da5e78:
      _memmove(ppppppuVar5,plVar10,ppppppuVar7);
    }
    *(undefined1 *)((long)ppppppuVar5 + (long)ppppppuVar7) = 0;
    if (*(char *)((long)param_1 + 0x617) < '\0') {
      __ZdlPv(*puVar1);
    }
    *(undefined8 ******)(param_1 + 0x182) = pppppuStack_78;
    *puVar1 = (ulong)pppppuStack_80;
    *(ulong *)(param_1 + 0x184) = uStack_70;
  }
  iVar3 = *(int *)((long)param_2 + 0x2c);
  if (iVar3 < 5) {
    if (iVar3 < 3) {
      if (iVar3 == 1) {
        if (*(int *)((long)param_2 + 0x24) == 0xf) {
          uVar8 = 3;
          goto LAB_109da5f5c;
        }
        puVar6 = &UNK_10f5fa6ca;
      }
      else {
        if (iVar3 == 2) {
          uVar8 = 7;
          goto LAB_109da5f5c;
        }
        if (iVar3 != 0) {
          return param_1;
        }
        puVar6 = &UNK_10f5fa702;
      }
      FUN_109df7828(puVar6,1);
LAB_109da5fbc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x109da5fc0);
      (*pcVar4)();
    }
    if (iVar3 == 3) {
      uVar8 = 1;
    }
    else {
      if (iVar3 != 4) {
        return param_1;
      }
      uVar8 = 2;
    }
  }
  else if (iVar3 < 7) {
    if (iVar3 == 5) {
      uVar8 = 0;
    }
    else {
      if (iVar3 != 6) {
        return param_1;
      }
      uVar8 = 4;
    }
  }
  else if (iVar3 == 7) {
    uVar8 = 5;
  }
  else {
    if (iVar3 != 8) {
      return param_1;
    }
    uVar8 = 6;
  }
LAB_109da5f5c:
  *param_1 = uVar8;
  return param_1;
}



/* Entry: 109da61d4; end: 109da6243;  */

/* WARNING: Removing unreachable block (ram,0x000109e00cf8) */
/* WARNING: Removing unreachable block (ram,0x000109e00d1c) */
/* WARNING: Removing unreachable block (ram,0x000109e00d24) */
/* WARNING: Removing unreachable block (ram,0x000109e00d68) */
/* WARNING: Removing unreachable block (ram,0x000109e00d54) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109da61d4(undefined8 *******param_1)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined1 uVar6;
  char cVar7;
  code *pcVar8;
  undefined8 *******pppppppuVar9;
  int iVar10;
  uint uVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ******ppppppuVar19;
  ulong uVar20;
  undefined8 ******ppppppuVar21;
  undefined8 *****pppppuVar22;
  long lVar23;
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  byte bStack_71;
  undefined8 *******pppppppuStack_70;
  undefined8 *****pppppuStack_68;
  
  pppppppuVar9 = param_1;
  func_0x000107c2b034();
  uStack_80 = (ulong)uStack_80._4_4_ << 0x20;
  pppppppuStack_88 = pppppppuVar9;
  FUN_109e05130(&pppppppuStack_88,8,1,0);
  pppppppuVar14 = param_1 + 2;
  cVar7 = *(char *)((long)param_1 + 0x27);
  if ((long)cVar7 < 0) {
    if (param_1[3] != (undefined8 ******)0x0) {
      if (param_1[3] == (undefined8 ******)0x1) {
        pppppppuVar15 = (undefined8 *******)*pppppppuVar14;
        goto LAB_109e00db4;
      }
      goto LAB_109e00de4;
    }
  }
  else if (cVar7 != '\0') {
    pppppppuVar15 = pppppppuVar14;
    if (cVar7 == '\x01') {
LAB_109e00db4:
      if (*(char *)pppppppuVar15 != '-') goto LAB_109e00de4;
      ppppppuVar19 = pppppppuStack_88[4];
      if ((ulong)((long)pppppppuStack_88[3] - (long)ppppppuVar19) < 7) {
        pppppppuVar15 = (undefined8 *******)&UNK_10f5fa7f8;
        ppppppuVar19 = (undefined8 ******)0x7;
        goto LAB_109e00df8;
      }
      *(undefined4 *)((long)ppppppuVar19 + 3) = 0x3e6e6964;
      *(undefined4 *)ppppppuVar19 = 0x6474733c;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 7);
    }
    else {
LAB_109e00de4:
      pppppppuVar15 = (undefined8 *******)param_1[2];
      ppppppuVar19 = param_1[3];
      if (-1 < cVar7) {
        pppppppuVar15 = pppppppuVar14;
        ppppppuVar19 = (undefined8 ******)(long)cVar7;
      }
LAB_109e00df8:
      FUN_109e0560c(pppppppuStack_88,pppppppuVar15,ppppppuVar19);
    }
    if (*(int *)(param_1 + 5) != -1) {
      ppppppuVar19 = pppppppuStack_88[4];
      if (ppppppuVar19 < pppppppuStack_88[3]) {
        pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar19 + 1);
        *(undefined1 *)ppppppuVar19 = 0x3a;
      }
      else {
        FUN_109e05570(pppppppuStack_88,0x3a);
      }
      FUN_109df9ee0(pppppppuStack_88,(long)*(int *)(param_1 + 5),0,0);
      if (*(int *)((long)param_1 + 0x2c) != -1) {
        ppppppuVar19 = pppppppuStack_88[4];
        if (ppppppuVar19 < pppppppuStack_88[3]) {
          pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar19 + 1);
          *(undefined1 *)ppppppuVar19 = 0x3a;
        }
        else {
          FUN_109e05570(pppppppuStack_88,0x3a);
        }
        FUN_109df9ee0(pppppppuStack_88,(long)*(int *)((long)param_1 + 0x2c) + 1,0,0);
      }
    }
    if ((ulong)((long)pppppppuStack_88[3] - (long)pppppppuStack_88[4]) < 2) {
      FUN_109e0560c(pppppppuStack_88,": ",2);
    }
    else {
      *(undefined2 *)pppppppuStack_88[4] = 0x203a;
      pppppppuStack_88[4] = (undefined8 ******)((long)pppppppuStack_88[4] + 2);
    }
  }
  FUN_109e051a0(&pppppppuStack_88);
  iVar10 = *(int *)(param_1 + 6);
  if (iVar10 < 2) {
    if (iVar10 == 0) {
      FUN_109e04cd8(pppppppuVar9,"",0,0);
    }
    else if (iVar10 == 1) {
      FUN_109e04df0(pppppppuVar9,"",0,0);
    }
  }
  else if (iVar10 == 2) {
    FUN_109e0501c(pppppppuVar9,"",0,0);
  }
  else if (iVar10 == 3) {
    FUN_109e04f08(pppppppuVar9,"",0,0);
  }
  uStack_80 = uStack_80 & 0xffffffff00000000;
  pppppppuStack_88 = pppppppuVar9;
  FUN_109e05130(&pppppppuStack_88,8,1,0);
  ppppppuVar19 = param_1[8];
  pppppppuVar14 = (undefined8 *******)param_1[7];
  if (-1 < (char)*(byte *)((long)param_1 + 0x4f)) {
    ppppppuVar19 = (undefined8 ******)(ulong)*(byte *)((long)param_1 + 0x4f);
    pppppppuVar14 = param_1 + 7;
  }
  FUN_109e0560c(pppppppuStack_88,pppppppuVar14,ppppppuVar19);
  ppppppuVar19 = pppppppuStack_88[4];
  if (ppppppuVar19 < pppppppuStack_88[3]) {
    pppppppuStack_88[4] = (undefined8 ******)((long)ppppppuVar19 + 1);
    *(undefined1 *)ppppppuVar19 = 10;
  }
  else {
    FUN_109e05570(pppppppuStack_88,10);
  }
  FUN_109e051a0(&pppppppuStack_88);
  if (*(int *)(param_1 + 5) == -1) {
    return;
  }
  if (*(int *)((long)param_1 + 0x2c) == -1) {
    return;
  }
  pppppppuVar15 = param_1 + 10;
  cVar7 = *(char *)((long)param_1 + 0x67);
  pppppppuVar14 = (undefined8 *******)*pppppppuVar15;
  if (-1 < (long)cVar7) {
    pppppppuVar14 = pppppppuVar15;
  }
  ppppppuVar19 = param_1[0xb];
  if (-1 < cVar7) {
    ppppppuVar19 = (undefined8 ******)(long)cVar7;
  }
  if (ppppppuVar19 != (undefined8 ******)0x0) {
    ppppppuVar12 = (undefined8 ******)0x0;
    do {
      if (*(char *)((long)pppppppuVar14 + (long)ppppppuVar12) < '\0') {
        FUN_109e01b1c(pppppppuVar9,pppppppuVar14,ppppppuVar19);
        return;
      }
      ppppppuVar12 = (undefined8 ******)((long)ppppppuVar12 + 1);
    } while (ppppppuVar19 != ppppppuVar12);
  }
  func_0x000104c59120(&pppppppuStack_88,(long)ppppppuVar19 + 1,0x20);
  ppppppuVar13 = param_1[0xe];
  for (ppppppuVar12 = param_1[0xd]; ppppppuVar12 != ppppppuVar13; ppppppuVar12 = ppppppuVar12 + 1) {
    uVar20 = uStack_80;
    if (-1 < (char)bStack_71) {
      uVar20 = (ulong)bStack_71;
    }
    if (*(uint *)((long)ppppppuVar12 + 4) <= uVar20) {
      uVar20 = (ulong)*(uint *)((long)ppppppuVar12 + 4);
    }
    if (0 < (long)(uVar20 - *(uint *)ppppppuVar12)) {
      pppppppuVar14 = pppppppuStack_88;
      if (-1 < (char)bStack_71) {
        pppppppuVar14 = &pppppppuStack_88;
      }
      _memset((long)pppppppuVar14 + (ulong)*(uint *)ppppppuVar12,0x7e);
    }
  }
  pppppppuStack_a0 = (undefined8 *******)0x0;
  ppppppuStack_98 = (undefined8 ******)0x0;
  uStack_90 = 0;
  ppppppuVar12 = (undefined8 ******)(long)*(char *)((long)param_1 + 0x67);
  if ((long)ppppppuVar12 < 0) {
    ppppppuVar12 = param_1[0xb];
  }
  uVar11 = *(uint *)((long)param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x11) != 0) {
    pppppuVar18 = (undefined8 *****)((long)param_1[1] - (long)(int)uVar11);
    pppppuVar1 = (undefined8 *****)((long)pppppuVar18 + (long)ppppppuVar12);
    ppppppuStack_b0 = (undefined8 ******)0x0;
    lVar23 = (ulong)*(uint *)(param_1 + 0x11) * 0x28;
    ppppppuVar12 = param_1[0x10] + 3;
    do {
      ppppppuVar13 = ppppppuVar12 + -1;
      pppppuVar22 = (undefined8 *****)(long)*(char *)((long)ppppppuVar12 + 0xf);
      pppppppuStack_70 = (undefined8 *******)*ppppppuVar13;
      if (-1 < (long)pppppuVar22) {
        pppppppuStack_70 = (undefined8 *******)ppppppuVar13;
      }
      pppppuVar17 = *ppppppuVar12;
      pppppuVar2 = pppppuVar17;
      if (-1 < *(char *)((long)ppppppuVar12 + 0xf)) {
        pppppuVar2 = pppppuVar22;
      }
      pppppppuVar14 = &pppppppuStack_70;
      pppppuStack_68 = pppppuVar2;
      FUN_109e03b70(pppppppuVar14,&UNK_10f6023d5,3,0);
      if (pppppppuVar14 == (undefined8 *******)0xffffffffffffffff) {
        pppppuVar4 = ppppppuVar12[-3];
        pppppuVar5 = ppppppuVar12[-2];
        if (pppppuVar4 <= pppppuVar1 && pppppuVar18 <= pppppuVar5) {
          uVar11 = 0;
          if (pppppuVar18 <= pppppuVar4) {
            uVar11 = (int)pppppuVar4 - (int)pppppuVar18;
          }
          ppppppuVar21 = (undefined8 ******)(ulong)uVar11;
          if (ppppppuVar21 < ppppppuStack_b0) {
            uVar11 = (int)ppppppuStack_b0 + 1;
          }
          ppppppuStack_b0 = (undefined8 ******)(ulong)(uVar11 + (int)pppppuVar2);
          ppppppuVar3 = ppppppuStack_98;
          if (-1 < (long)uStack_90) {
            ppppppuVar3 = (undefined8 ******)(uStack_90 >> 0x38);
          }
          if (ppppppuVar3 < ppppppuStack_b0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                      (&pppppppuStack_a0,ppppppuStack_b0,0x20);
            pppppuVar22 = (undefined8 *****)(ulong)*(byte *)((long)ppppppuVar12 + 0xf);
            pppppuVar17 = *ppppppuVar12;
          }
          if (-1 < (char)pppppuVar22) {
            pppppuVar17 = pppppuVar22;
          }
          if (pppppuVar17 != (undefined8 *****)0x0) {
            pppppppuVar14 = pppppppuStack_a0;
            if (-1 < (long)uStack_90) {
              pppppppuVar14 = &pppppppuStack_a0;
            }
            ppppppuVar3 = (undefined8 ******)*ppppppuVar13;
            if (-1 < (char)pppppuVar22) {
              ppppppuVar3 = ppppppuVar13;
            }
            _memmove((long)pppppppuVar14 + (ulong)uVar11,ppppppuVar3);
          }
          iVar10 = (int)pppppuVar5;
          if (pppppuVar1 <= pppppuVar5) {
            iVar10 = (int)pppppuVar1;
          }
          if (0 < (long)((ulong)(uint)(iVar10 - (int)pppppuVar18) - (long)ppppppuVar21)) {
            pppppppuVar14 = pppppppuStack_88;
            if (-1 < (char)bStack_71) {
              pppppppuVar14 = &pppppppuStack_88;
            }
            _memset((long)pppppppuVar14 + (long)ppppppuVar21,0x7e);
          }
        }
      }
      ppppppuVar12 = ppppppuVar12 + 5;
      lVar23 = lVar23 + -0x28;
    } while (lVar23 != 0);
    uVar11 = *(uint *)((long)param_1 + 0x2c);
  }
  if ((undefined8 ******)(ulong)uVar11 <= ppppppuVar19) {
    ppppppuVar19 = (undefined8 ******)(long)(int)uVar11;
  }
  pppppppuVar14 = pppppppuStack_88;
  if (-1 < (char)bStack_71) {
    pppppppuVar14 = &pppppppuStack_88;
  }
  *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar19) = 0x5e;
  uVar20 = uStack_80;
  pppppppuVar14 = pppppppuStack_88;
  if (-1 < (char)bStack_71) {
    uVar20 = (ulong)bStack_71;
    pppppppuVar14 = &pppppppuStack_88;
  }
  do {
    uVar16 = uVar20;
    if (uVar16 == 0) break;
    uVar20 = uVar16 - 1;
  } while (*(char *)((long)pppppppuVar14 + (uVar16 - 1)) == ' ');
  if ((char)bStack_71 < '\0') {
    pppppppuVar14 = pppppppuStack_88;
    uVar20 = uVar16;
    if (uStack_80 < uVar16) goto LAB_109e015e4;
  }
  else {
    if (bStack_71 < uVar16) {
LAB_109e015e4:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109e015ec);
      (*pcVar8)();
    }
    bStack_71 = (byte)uVar16;
    pppppppuVar14 = &pppppppuStack_88;
    uVar20 = uStack_80;
  }
  uStack_80 = uVar20;
  *(undefined1 *)((long)pppppppuVar14 + uVar16) = 0;
  cVar7 = *(char *)((long)param_1 + 0x67);
  pppppppuVar14 = (undefined8 *******)param_1[10];
  if (-1 < (long)cVar7) {
    pppppppuVar14 = pppppppuVar15;
  }
  ppppppuVar19 = param_1[0xb];
  if (-1 < cVar7) {
    ppppppuVar19 = (undefined8 ******)(long)cVar7;
  }
  FUN_109e01b1c(pppppppuVar9,pppppppuVar14,ppppppuVar19);
  pppppuStack_68 = (undefined8 *****)((ulong)pppppuStack_68 & 0xffffffff00000000);
  pppppppuStack_70 = pppppppuVar9;
  FUN_109e05130(&pppppppuStack_70,2,1,0);
  uVar20 = uStack_80;
  if (-1 < (char)bStack_71) {
    uVar20 = (ulong)bStack_71;
  }
  if ((undefined8 ******)(uVar20 & 0xffffffff) != (undefined8 ******)0x0) {
    ppppppuVar19 = (undefined8 ******)0x0;
    uVar11 = 0;
    do {
      ppppppuVar12 = (undefined8 ******)(long)*(char *)((long)param_1 + 0x67);
      if ((long)ppppppuVar12 < 0) {
        ppppppuVar12 = param_1[0xb];
      }
      if (ppppppuVar19 < ppppppuVar12) {
        pppppppuVar14 = pppppppuVar15;
        if (*(char *)((long)param_1 + 0x67) < '\0') {
          pppppppuVar14 = (undefined8 *******)*pppppppuVar15;
        }
        if (*(char *)((long)pppppppuVar14 + (long)ppppppuVar19) != '\t') goto LAB_109e013c0;
        do {
          pppppppuVar14 = pppppppuStack_88;
          if (-1 < (char)bStack_71) {
            pppppppuVar14 = &pppppppuStack_88;
          }
          uVar6 = *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar19);
          ppppppuVar12 = pppppppuStack_70[4];
          if (ppppppuVar12 < pppppppuStack_70[3]) {
            pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar12 + 1);
            *(undefined1 *)ppppppuVar12 = uVar6;
          }
          else {
            FUN_109e05570();
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 7) != 0);
      }
      else {
LAB_109e013c0:
        pppppppuVar14 = pppppppuStack_88;
        if (-1 < (char)bStack_71) {
          pppppppuVar14 = &pppppppuStack_88;
        }
        uVar6 = *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar19);
        ppppppuVar12 = pppppppuStack_70[4];
        if (ppppppuVar12 < pppppppuStack_70[3]) {
          pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar12 + 1);
          *(undefined1 *)ppppppuVar12 = uVar6;
        }
        else {
          FUN_109e05570();
        }
        uVar11 = uVar11 + 1;
      }
      ppppppuVar19 = (undefined8 ******)((long)ppppppuVar19 + 1);
    } while (ppppppuVar19 != (undefined8 ******)(uVar20 & 0xffffffff));
  }
  ppppppuVar19 = pppppppuStack_70[4];
  if (ppppppuVar19 < pppppppuStack_70[3]) {
    pppppppuStack_70[4] = (undefined8 ******)((long)ppppppuVar19 + 1);
    *(undefined1 *)ppppppuVar19 = 10;
  }
  else {
    FUN_109e05570(pppppppuStack_70,10);
  }
  FUN_109e051a0(&pppppppuStack_70);
  if ((long)(char)uStack_90._7_1_ < 0) {
    ppppppuVar19 = ppppppuStack_98;
    if (ppppppuStack_98 != (undefined8 ******)0x0) goto LAB_109e01454;
  }
  else {
    ppppppuVar19 = (undefined8 ******)(long)(char)uStack_90._7_1_;
    if (uStack_90._7_1_ == '\0') goto LAB_109e015b4;
LAB_109e01454:
    uVar20 = 0;
    ppppppuVar12 = (undefined8 ******)0x0;
    do {
      ppppppuVar13 = (undefined8 ******)(long)*(char *)((long)param_1 + 0x67);
      if ((long)ppppppuVar13 < 0) {
        ppppppuVar13 = param_1[0xb];
      }
      if (ppppppuVar12 < ppppppuVar13) {
        pppppppuVar14 = pppppppuVar15;
        if (*(char *)((long)param_1 + 0x67) < '\0') {
          pppppppuVar14 = (undefined8 *******)*pppppppuVar15;
        }
        uVar11 = (uint)uStack_90._7_1_;
        if (*(char *)((long)pppppppuVar14 + (long)ppppppuVar12) != '\t') goto LAB_109e0150c;
        do {
          pppppppuVar14 = pppppppuStack_a0;
          if (-1 < (char)uVar11) {
            pppppppuVar14 = &pppppppuStack_a0;
          }
          uVar6 = *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar12);
          ppppppuVar13 = pppppppuVar9[4];
          if (ppppppuVar13 < pppppppuVar9[3]) {
            pppppppuVar9[4] = (undefined8 ******)((long)ppppppuVar13 + 1);
            *(undefined1 *)ppppppuVar13 = uVar6;
          }
          else {
            FUN_109e05570(pppppppuVar9);
          }
          uVar11 = (uint)(char)uStack_90._7_1_;
          pppppppuVar14 = pppppppuStack_a0;
          if (-1 < (int)uVar11) {
            pppppppuVar14 = &pppppppuStack_a0;
          }
          if (*(char *)((long)pppppppuVar14 + (long)ppppppuVar12) != ' ') {
            ppppppuVar12 = (undefined8 ******)((long)ppppppuVar12 + 1);
          }
          uVar20 = uVar20 + 1;
        } while (((uVar20 & 7) != 0) && (ppppppuVar12 != ppppppuVar19));
      }
      else {
LAB_109e0150c:
        pppppppuVar14 = pppppppuStack_a0;
        if (-1 < (long)uStack_90) {
          pppppppuVar14 = &pppppppuStack_a0;
        }
        uVar6 = *(undefined1 *)((long)pppppppuVar14 + (long)ppppppuVar12);
        ppppppuVar13 = pppppppuVar9[4];
        if (ppppppuVar13 < pppppppuVar9[3]) {
          pppppppuVar9[4] = (undefined8 ******)((long)ppppppuVar13 + 1);
          *(undefined1 *)ppppppuVar13 = uVar6;
        }
        else {
          FUN_109e05570(pppppppuVar9);
        }
        uVar20 = uVar20 + 1;
      }
      ppppppuVar12 = (undefined8 ******)((long)ppppppuVar12 + 1);
    } while (ppppppuVar12 < ppppppuVar19);
    ppppppuVar19 = pppppppuVar9[4];
    if (ppppppuVar19 < pppppppuVar9[3]) {
      pppppppuVar9[4] = (undefined8 ******)((long)ppppppuVar19 + 1);
      *(undefined1 *)ppppppuVar19 = 10;
    }
    else {
      FUN_109e05570(pppppppuVar9,10);
    }
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(pppppppuStack_a0);
  }
LAB_109e015b4:
  if ((char)bStack_71 < '\0') {
    __ZdlPv(pppppppuStack_88);
  }
  return;
}



/* Entry: 109da6244; end: 109da6ae7;  */

ulong * FUN_109da6244(ulong *param_1)

{
  undefined ***pppuVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  undefined **ppuStack_68;
  code *pcStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[0xff] == '\x01') {
    uVar4 = param_1[10];
    param_1[9] = 0;
    param_1[10] = 0;
    if (uVar4 != 0) {
      func_0x000109dabbd0();
    }
    param_1[0xc] = param_1[0xb];
    pppuVar1 = (undefined ***)(param_1 + 0xe);
    ppuStack_68 = &PTR_FUN_110b584d8;
    pcStack_60 = FUN_109da61d4;
    pppuVar5 = &ppuStack_68;
    pppuStack_50 = pppuVar5;
    if (pppuVar1 == pppuVar5) {
LAB_109da62ec:
      lVar14 = 0x20;
      pppuStack_50 = pppuVar5;
LAB_109da6330:
      (**(code **)((long)*pppuStack_50 + lVar14))();
    }
    else {
      pppuVar5 = (undefined ***)param_1[0x11];
      if (pppuVar5 == pppuVar1) {
        pppuStack_50 = (undefined ***)0x0;
        (*(code *)(*pppuVar5)[3])(pppuVar5,&ppuStack_68);
        (**(code **)(*(long *)param_1[0x11] + 0x20))();
        pppuStack_50 = &ppuStack_68;
        param_1[0xe] = (ulong)&PTR_FUN_110b584d8;
        param_1[0xf] = (ulong)FUN_109da61d4;
        lVar14 = 0x20;
        param_1[0x11] = (ulong)pppuVar1;
        goto LAB_109da6330;
      }
      param_1[0xe] = (ulong)&PTR_FUN_110b584d8;
      param_1[0xf] = (ulong)FUN_109da61d4;
      pppuStack_50 = pppuVar5;
      param_1[0x11] = (ulong)pppuVar1;
      if (pppuVar5 == &ppuStack_68) goto LAB_109da62ec;
      if (pppuVar5 != (undefined ***)0x0) {
        lVar14 = 0x28;
        goto LAB_109da6330;
      }
    }
    FUN_109da6ae8(param_1 + 0x23);
    func_0x000109da6be4(param_1 + 0x2f);
    func_0x000109da6ce0(param_1 + 0x3b);
    func_0x000109da6ddc(param_1 + 0x53);
    func_0x000109da6ed8(param_1 + 0x47);
    func_0x000109da6fd4(param_1 + 0x6b);
    func_0x000109da70d0(param_1 + 0x77);
    FUN_109da71cc(param_1 + 0x83);
    FUN_109da72e8(param_1 + 0x5f);
    FUN_109da73e4(param_1 + 0xf3);
    if (*(int *)((long)param_1 + 0x4dc) != 0) {
      uVar4 = param_1[0x9b];
      if ((uint)uVar4 != 0) {
        lVar14 = 0;
        do {
          *(undefined8 *)(param_1[0x9a] + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while ((ulong)(uint)uVar4 * 8 - lVar14 != 0);
      }
      *(undefined8 *)((long)param_1 + 0x4dc) = 0;
    }
    if (*(int *)((long)param_1 + 0x4bc) != 0) {
      uVar4 = param_1[0x97];
      if ((uint)uVar4 != 0) {
        lVar14 = 0;
        do {
          *(undefined8 *)(param_1[0x96] + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while ((ulong)(uint)uVar4 * 8 - lVar14 != 0);
      }
      *(undefined8 *)((long)param_1 + 0x4bc) = 0;
    }
    if (*(int *)((long)param_1 + 0x484) != 0) {
      uVar4 = param_1[0x90];
      if ((uint)uVar4 != 0) {
        lVar14 = 0;
        do {
          *(undefined8 *)(param_1[0x8f] + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while ((ulong)(uint)uVar4 * 8 - lVar14 != 0);
      }
      *(undefined8 *)((long)param_1 + 0x484) = 0;
    }
    FUN_109d33d70(param_1 + 0x17);
    puVar8 = param_1 + 0xa1;
    iVar12 = (int)param_1[0xa2];
    if (iVar12 == 0) {
      if (*(int *)((long)param_1 + 0x514) != 0) {
        uVar17 = (uint)param_1[0xa3];
        if (uVar17 < 0x41) goto LAB_109da64c4;
        uVar16 = 0;
        goto LAB_109da6498;
      }
    }
    else {
      uVar17 = (uint)param_1[0xa3];
      if (((uint)(iVar12 * 4) < uVar17) && (0x40 < uVar17)) {
        uVar16 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar12 + -1) & 0x1f);
        if ((int)uVar16 < 0x41) {
          uVar16 = 0x40;
        }
LAB_109da6498:
        if (uVar16 == uVar17) {
          param_1[0xa2] = 0;
          lVar14 = (ulong)uVar17 << 4;
          puVar9 = (undefined4 *)param_1[0xa1];
          do {
            *puVar9 = 0xffffffff;
            lVar14 = lVar14 + -0x10;
            puVar9 = puVar9 + 4;
          } while (lVar14 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(*puVar8,8);
          if (uVar16 == 0) {
            *puVar8 = 0;
            param_1[0xa2] = 0;
            *(undefined4 *)(param_1 + 0xa3) = 0;
          }
          else {
            uVar17 = (uVar16 << 2) / 3 + 1;
            uVar17 = uVar17 | uVar17 >> 1;
            uVar17 = uVar17 | uVar17 >> 2;
            uVar17 = uVar17 | uVar17 >> 4;
            uVar17 = uVar17 | uVar17 >> 8;
            uVar17 = (uVar17 >> 0x10 | uVar17) + 1;
            *(uint *)(param_1 + 0xa3) = uVar17;
            puVar9 = (undefined4 *)((ulong)uVar17 << 4);
            __ZnwmSt11align_val_t(puVar9,8);
            param_1[0xa1] = (ulong)puVar9;
            param_1[0xa2] = 0;
            if ((uint)param_1[0xa3] != 0) {
              lVar14 = (ulong)(uint)param_1[0xa3] << 4;
              do {
                *puVar9 = 0xffffffff;
                lVar14 = lVar14 + -0x10;
                puVar9 = puVar9 + 4;
              } while (lVar14 != 0);
            }
          }
        }
      }
      else {
LAB_109da64c4:
        if (uVar17 != 0) {
          lVar14 = (ulong)uVar17 << 4;
          puVar9 = (undefined4 *)*puVar8;
          do {
            *puVar9 = 0xffffffff;
            lVar14 = lVar14 + -0x10;
            puVar9 = puVar9 + 4;
          } while (lVar14 != 0);
        }
        param_1[0xa2] = 0;
      }
    }
    param_1[0xab] = 0;
    if (*(char *)((long)param_1 + 0x617) < '\0') {
      *(undefined1 *)param_1[0xc0] = 0;
      param_1[0xc1] = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined1 *)((long)param_1 + 0x617) = 0;
    }
    FUN_109dab578(param_1[0xc4]);
    param_1[0xc3] = (ulong)(param_1 + 0xc4);
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    puVar8 = param_1 + 0xc9;
    iVar12 = (int)param_1[0xca];
    if (iVar12 == 0) {
      if (*(int *)((long)param_1 + 0x654) != 0) {
        uVar17 = (uint)param_1[0xcb];
        if (uVar17 < 0x41) goto LAB_109da65b8;
        uVar16 = 0;
        goto LAB_109da6590;
      }
    }
    else {
      uVar17 = (uint)param_1[0xcb];
      if (((uint)(iVar12 * 4) < uVar17) && (0x40 < uVar17)) {
        uVar16 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar12 + -1) & 0x1f);
        if ((int)uVar16 < 0x41) {
          uVar16 = 0x40;
        }
LAB_109da6590:
        if (uVar16 == uVar17) {
          param_1[0xca] = 0;
          lVar14 = (ulong)uVar17 << 3;
          puVar10 = (undefined8 *)param_1[0xc9];
          do {
            *puVar10 = 0xfffffffffffff000;
            lVar14 = lVar14 + -8;
            puVar10 = puVar10 + 1;
          } while (lVar14 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(*puVar8,8);
          if (uVar16 == 0) {
            *puVar8 = 0;
            param_1[0xca] = 0;
            *(undefined4 *)(param_1 + 0xcb) = 0;
          }
          else {
            uVar17 = (uVar16 << 2) / 3 + 1;
            uVar17 = uVar17 | uVar17 >> 1;
            uVar17 = uVar17 | uVar17 >> 2;
            uVar17 = uVar17 | uVar17 >> 4;
            uVar17 = uVar17 | uVar17 >> 8;
            uVar17 = (uVar17 >> 0x10 | uVar17) + 1;
            *(uint *)(param_1 + 0xcb) = uVar17;
            puVar10 = (undefined8 *)((ulong)uVar17 << 3);
            __ZnwmSt11align_val_t(puVar10,8);
            param_1[0xc9] = (ulong)puVar10;
            param_1[0xca] = 0;
            if ((uint)param_1[0xcb] != 0) {
              lVar14 = (ulong)(uint)param_1[0xcb] << 3;
              do {
                *puVar10 = 0xfffffffffffff000;
                lVar14 = lVar14 + -8;
                puVar10 = puVar10 + 1;
              } while (lVar14 != 0);
            }
          }
        }
      }
      else {
LAB_109da65b8:
        if (uVar17 != 0) {
          lVar14 = (ulong)uVar17 << 3;
          puVar10 = (undefined8 *)*puVar8;
          do {
            *puVar10 = 0xfffffffffffff000;
            lVar14 = lVar14 + -8;
            puVar10 = puVar10 + 1;
          } while (lVar14 != 0);
        }
        param_1[0xca] = 0;
      }
    }
    param_1[0xcd] = param_1[0xcc];
    param_1[0xd0] = param_1[0xcf];
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    *(undefined4 *)(param_1 + 0xd7) = 0;
    param_1[0xc6] = 0;
    param_1[199] = 0x10000;
    FUN_109da7510(param_1 + 0x16,0);
    if (*(int *)((long)param_1 + 0x6e4) != 0) {
      uVar4 = param_1[0xdc];
      if ((uint)uVar4 != 0) {
        lVar14 = 0;
        do {
          uVar18 = param_1[0xdb];
          lVar6 = *(long *)(uVar18 + lVar14);
          if (lVar6 != -8 && lVar6 != 0) {
            __ZdlPvSt11align_val_t(lVar6,8);
          }
          *(undefined8 *)(uVar18 + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while ((ulong)(uint)uVar4 * 8 - lVar14 != 0);
      }
      *(undefined8 *)((long)param_1 + 0x6e4) = 0;
    }
    FUN_109dab740(param_1[0xdf]);
    param_1[0xde] = (ulong)(param_1 + 0xdf);
    param_1[0xe0] = 0;
    param_1[0xdf] = 0;
    func_0x000109dab7d0(param_1[0xe5]);
    param_1[0xe4] = (ulong)(param_1 + 0xe5);
    param_1[0xe6] = 0;
    param_1[0xe5] = 0;
    func_0x000109dab788(param_1[0xe2]);
    param_1[0xe1] = (ulong)(param_1 + 0xe2);
    param_1[0xe3] = 0;
    param_1[0xe2] = 0;
    func_0x000109dab818(param_1[0xe8]);
    param_1[0xe7] = (ulong)(param_1 + 0xe8);
    param_1[0xe9] = 0;
    param_1[0xe8] = 0;
    func_0x000109dab860(param_1[0xeb]);
    param_1[0xea] = (ulong)(param_1 + 0xeb);
    param_1[0xec] = 0;
    param_1[0xeb] = 0;
    if (*(int *)((long)param_1 + 0x774) != 0) {
      uVar4 = param_1[0xee];
      if ((uint)uVar4 != 0) {
        lVar14 = 0;
        do {
          uVar18 = param_1[0xed];
          lVar6 = *(long *)(uVar18 + lVar14);
          if (lVar6 != -8 && lVar6 != 0) {
            __ZdlPvSt11align_val_t(lVar6,8);
          }
          *(undefined8 *)(uVar18 + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while ((ulong)(uint)uVar4 * 8 - lVar14 != 0);
      }
      *(undefined8 *)((long)param_1 + 0x774) = 0;
    }
    func_0x000109dabb88(param_1[0x106]);
    param_1[0x105] = (ulong)(param_1 + 0x106);
    param_1[0x107] = 0;
    param_1[0x106] = 0;
    FUN_109dabc18(param_1 + 0x108);
    if (*(int *)((long)param_1 + 0x4fc) != 0) {
      uVar4 = param_1[0x9f];
      if ((uint)uVar4 != 0) {
        lVar14 = 0;
        do {
          uVar18 = param_1[0x9e];
          lVar6 = *(long *)(uVar18 + lVar14);
          if (lVar6 != -8 && lVar6 != 0) {
            __ZdlPvSt11align_val_t(lVar6,8);
          }
          *(undefined8 *)(uVar18 + lVar14) = 0;
          lVar14 = lVar14 + 8;
        } while ((ulong)(uint)uVar4 * 8 - lVar14 != 0);
      }
      *(undefined8 *)((long)param_1 + 0x4fc) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x6b3) = 1;
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined4 *)((long)param_1 + 0x644) = 0;
    *(undefined1 *)(param_1 + 0x101) = 0;
  }
  __ZdlPvSt11align_val_t(param_1[0x108],8);
  func_0x000109dabb88(param_1[0x106]);
  FUN_109dab9b0(param_1 + 0x102);
  FUN_109dab988(param_1 + 0xf3);
  func_0x000109dab918(param_1 + 0xf0);
  func_0x000109dab8a8(param_1 + 0xed);
  func_0x000109dab860(param_1[0xeb]);
  func_0x000109dab818(param_1[0xe8]);
  func_0x000109dab7d0(param_1[0xe5]);
  func_0x000109dab788(param_1[0xe2]);
  FUN_109dab740(param_1[0xdf]);
  func_0x000109dab6d0(param_1 + 0xdb);
  func_0x000109daad04(param_1[0xd9]);
  if (param_1[0xcf] != 0) {
    param_1[0xd0] = param_1[0xcf];
    __ZdlPv();
  }
  if (param_1[0xcc] != 0) {
    param_1[0xcd] = param_1[0xcc];
    __ZdlPv();
  }
  __ZdlPvSt11align_val_t(param_1[0xc9],8);
  FUN_109dab578(param_1[0xc4]);
  if (*(char *)((long)param_1 + 0x617) < '\0') {
    __ZdlPv(param_1[0xc0]);
  }
  FUN_109dab520(param_1[0xbe]);
  if ((ulong *)param_1[0xaa] != param_1 + 0xad) {
    _free();
  }
  plVar7 = (long *)param_1[0xa8];
  param_1[0xa8] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (*(char *)((long)param_1 + 0x53f) < '\0') {
    __ZdlPv(param_1[0xa5]);
  }
  __ZdlPvSt11align_val_t(param_1[0xa1],8);
  FUN_109d5993c(param_1 + 0x9e);
  _free(param_1[0x9a]);
  _free(param_1[0x96]);
  __ZdlPvSt11align_val_t(param_1[0x93],8);
  _free(param_1[0x8f]);
  FUN_109dab4f8(param_1 + 0x83);
  FUN_109dab4d0(param_1 + 0x77);
  FUN_109dab4a8(param_1 + 0x6b);
  FUN_109dab480(param_1 + 0x5f);
  FUN_109dab458(param_1 + 0x53);
  FUN_109dab430(param_1 + 0x47);
  FUN_109dab408(param_1 + 0x3b);
  FUN_109dab3e0(param_1 + 0x2f);
  FUN_109dab3b8(param_1 + 0x23);
  FUN_109d340ac(param_1 + 0x17);
  uVar13 = 0;
  FUN_109da7510(param_1 + 0x16);
  puVar8 = (ulong *)param_1[0x11];
  if (puVar8 == param_1 + 0xe) {
    lVar14 = 0x20;
  }
  else {
    if (puVar8 == (ulong *)0x0) goto LAB_109da6958;
    lVar14 = 0x28;
  }
  (**(code **)(*puVar8 + lVar14))();
LAB_109da6958:
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  puVar8 = (ulong *)param_1[10];
  param_1[10] = 0;
  if (puVar8 != (ulong *)0x0) {
    func_0x000109dabbd0();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    puVar8 = (ulong *)param_1[3];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    iVar12 = (int)uVar13;
    while (iVar12 != 0) {
      func_0x000104bd46a0();
      iVar12 = (int)uVar13;
    }
    __Unwind_Resume();
    if ((uint)puVar8[3] != 0) {
      plVar7 = (long *)puVar8[2];
      plVar2 = plVar7 + (uint)puVar8[3];
      do {
        lVar14 = *plVar7;
        if (lVar14 == *(long *)(puVar8[2] + (ulong)(uint)puVar8[3] * 8 + -8)) {
          uVar4 = *puVar8;
        }
        else {
          uVar17 = (uint)((long)plVar7 - puVar8[2] >> 10) & 0x1ffffff;
          if (0x1d < uVar17) {
            uVar17 = 0x1e;
          }
          uVar4 = lVar14 + (0x1000L << ((ulong)uVar17 & 0x3f));
        }
        uVar11 = lVar14 + 7U & 0xfffffffffffffff8;
        uVar18 = uVar11 + 0xf8;
        while (uVar18 <= uVar4) {
          FUN_109ddbf78();
          uVar18 = uVar11 + 0x1f0;
          uVar11 = uVar11 + 0xf8;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar2);
    }
    if ((uint)puVar8[9] != 0) {
      plVar7 = (long *)puVar8[8];
      plVar2 = plVar7 + (ulong)(uint)puVar8[9] * 2;
      do {
        lVar14 = *plVar7;
        lVar6 = plVar7[1];
        uVar18 = lVar14 + 7U & 0xfffffffffffffff8;
        uVar4 = uVar18 + 0xf8;
        while (uVar4 <= (ulong)(lVar14 + lVar6)) {
          FUN_109ddbf78();
          uVar4 = uVar18 + 0x1f0;
          uVar18 = uVar18 + 0xf8;
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar2);
    }
    puVar3 = puVar8;
    if ((uint)puVar8[9] != 0) {
      lVar14 = (ulong)(uint)puVar8[9] << 4;
      plVar7 = (long *)puVar8[8];
      do {
        puVar3 = (ulong *)*plVar7;
        __ZdlPvSt11align_val_t(puVar3,8);
        lVar14 = lVar14 + -0x10;
        plVar7 = plVar7 + 2;
      } while (lVar14 != 0);
    }
    *(undefined4 *)(puVar8 + 9) = 0;
    uVar17 = (uint)puVar8[3];
    if (uVar17 != 0) {
      puVar8[10] = 0;
      puVar15 = (ulong *)puVar8[2];
      uVar4 = *puVar15;
      *puVar8 = uVar4;
      puVar8[1] = uVar4 + 0x1000;
      if (uVar17 != 1) {
        lVar14 = (ulong)uVar17 * 8 + -8;
        do {
          puVar15 = puVar15 + 1;
          puVar3 = (ulong *)*puVar15;
          __ZdlPvSt11align_val_t(puVar3,8);
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      *(undefined4 *)(puVar8 + 3) = 1;
    }
    return puVar3;
  }
  return param_1;
}



/* Entry: 109da6ae8; end: 109da71cb;  */

void FUN_109da6ae8(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  
  if ((uint)param_1[3] != 0) {
    plVar9 = (long *)param_1[2];
    plVar1 = plVar9 + (uint)param_1[3];
    do {
      lVar5 = *plVar9;
      if (lVar5 == *(long *)(param_1[2] + (ulong)(uint)param_1[3] * 8 + -8)) {
        uVar7 = *param_1;
      }
      else {
        uVar10 = (uint)((long)plVar9 - param_1[2] >> 10) & 0x1ffffff;
        if (0x1d < uVar10) {
          uVar10 = 0x1e;
        }
        uVar7 = lVar5 + (0x1000L << ((ulong)uVar10 & 0x3f));
      }
      uVar3 = lVar5 + 7U & 0xfffffffffffffff8;
      uVar4 = uVar3 + 0xf8;
      while (uVar4 <= uVar7) {
        FUN_109ddbf78();
        uVar4 = uVar3 + 0x1f0;
        uVar3 = uVar3 + 0xf8;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  if ((uint)param_1[9] != 0) {
    plVar9 = (long *)param_1[8];
    plVar1 = plVar9 + (ulong)(uint)param_1[9] * 2;
    do {
      lVar5 = *plVar9;
      lVar2 = plVar9[1];
      uVar4 = lVar5 + 7U & 0xfffffffffffffff8;
      uVar7 = uVar4 + 0xf8;
      while (uVar7 <= (ulong)(lVar5 + lVar2)) {
        FUN_109ddbf78();
        uVar7 = uVar4 + 0x1f0;
        uVar4 = uVar4 + 0xf8;
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar1);
  }
  if ((uint)param_1[9] != 0) {
    lVar5 = (ulong)(uint)param_1[9] << 4;
    puVar8 = (undefined8 *)param_1[8];
    do {
      __ZdlPvSt11align_val_t(*puVar8,8);
      lVar5 = lVar5 + -0x10;
      puVar8 = puVar8 + 2;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  uVar10 = (uint)param_1[3];
  if (uVar10 != 0) {
    param_1[10] = 0;
    puVar6 = (ulong *)param_1[2];
    uVar7 = *puVar6;
    *param_1 = uVar7;
    param_1[1] = uVar7 + 0x1000;
    if (uVar10 != 1) {
      lVar5 = (ulong)uVar10 * 8 + -8;
      do {
        puVar6 = puVar6 + 1;
        __ZdlPvSt11align_val_t(*puVar6,8);
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109da71cc; end: 109da72e7;  */

void FUN_109da71cc(ulong *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((uint)param_1[3] != 0) {
    plVar9 = (long *)param_1[2];
    plVar2 = plVar9 + (uint)param_1[3];
    do {
      lVar4 = *plVar9;
      if (lVar4 == *(long *)(param_1[2] + (ulong)(uint)param_1[3] * 8 + -8)) {
        uVar7 = *param_1;
      }
      else {
        uVar10 = (uint)((long)plVar9 - param_1[2] >> 10) & 0x1ffffff;
        if (0x1d < uVar10) {
          uVar10 = 0x1e;
        }
        uVar7 = lVar4 + (0x1000L << ((ulong)uVar10 & 0x3f));
      }
      uVar11 = lVar4 + 7U & 0xfffffffffffffff8;
      while (uVar12 = uVar11 + 0xc0, uVar12 <= uVar7) {
        plVar1 = (long *)(uVar11 + 0x10);
        lVar4 = uVar11 + 0x20;
        uVar11 = uVar12;
        if (lVar4 != *plVar1) {
          _free();
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar2);
  }
  if ((uint)param_1[9] != 0) {
    plVar9 = (long *)param_1[8];
    plVar2 = plVar9 + (ulong)(uint)param_1[9] * 2;
    do {
      lVar4 = *plVar9;
      lVar3 = plVar9[1];
      uVar7 = lVar4 + 7U & 0xfffffffffffffff8;
      while (uVar11 = uVar7 + 0xc0, uVar11 <= (ulong)(lVar4 + lVar3)) {
        plVar1 = (long *)(uVar7 + 0x10);
        lVar5 = uVar7 + 0x20;
        uVar7 = uVar11;
        if (lVar5 != *plVar1) {
          _free();
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar2);
  }
  if ((uint)param_1[9] != 0) {
    lVar4 = (ulong)(uint)param_1[9] << 4;
    puVar8 = (undefined8 *)param_1[8];
    do {
      __ZdlPvSt11align_val_t(*puVar8,8);
      lVar4 = lVar4 + -0x10;
      puVar8 = puVar8 + 2;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  uVar10 = (uint)param_1[3];
  if (uVar10 != 0) {
    param_1[10] = 0;
    puVar6 = (ulong *)param_1[2];
    uVar7 = *puVar6;
    *param_1 = uVar7;
    param_1[1] = uVar7 + 0x1000;
    if (uVar10 != 1) {
      lVar4 = (ulong)uVar10 * 8 + -8;
      do {
        puVar6 = puVar6 + 1;
        __ZdlPvSt11align_val_t(*puVar6,8);
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109da72e8; end: 109da73e3;  */

void FUN_109da72e8(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  
  if ((uint)param_1[3] != 0) {
    plVar9 = (long *)param_1[2];
    plVar1 = plVar9 + (uint)param_1[3];
    do {
      lVar5 = *plVar9;
      if (lVar5 == *(long *)(param_1[2] + (ulong)(uint)param_1[3] * 8 + -8)) {
        uVar7 = *param_1;
      }
      else {
        uVar10 = (uint)((long)plVar9 - param_1[2] >> 10) & 0x1ffffff;
        if (0x1d < uVar10) {
          uVar10 = 0x1e;
        }
        uVar7 = lVar5 + (0x1000L << ((ulong)uVar10 & 0x3f));
      }
      uVar3 = lVar5 + 7U & 0xfffffffffffffff8;
      uVar4 = uVar3 + 0xe0;
      while (uVar4 <= uVar7) {
        FUN_109ddbf78();
        uVar4 = uVar3 + 0x1c0;
        uVar3 = uVar3 + 0xe0;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  if ((uint)param_1[9] != 0) {
    plVar9 = (long *)param_1[8];
    plVar1 = plVar9 + (ulong)(uint)param_1[9] * 2;
    do {
      lVar5 = *plVar9;
      lVar2 = plVar9[1];
      uVar4 = lVar5 + 7U & 0xfffffffffffffff8;
      uVar7 = uVar4 + 0xe0;
      while (uVar7 <= (ulong)(lVar5 + lVar2)) {
        FUN_109ddbf78();
        uVar7 = uVar4 + 0x1c0;
        uVar4 = uVar4 + 0xe0;
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar1);
  }
  if ((uint)param_1[9] != 0) {
    lVar5 = (ulong)(uint)param_1[9] << 4;
    puVar8 = (undefined8 *)param_1[8];
    do {
      __ZdlPvSt11align_val_t(*puVar8,8);
      lVar5 = lVar5 + -0x10;
      puVar8 = puVar8 + 2;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  uVar10 = (uint)param_1[3];
  if (uVar10 != 0) {
    param_1[10] = 0;
    puVar6 = (ulong *)param_1[2];
    uVar7 = *puVar6;
    *param_1 = uVar7;
    param_1[1] = uVar7 + 0x1000;
    if (uVar10 != 1) {
      lVar5 = (ulong)uVar10 * 8 + -8;
      do {
        puVar6 = puVar6 + 1;
        __ZdlPvSt11align_val_t(*puVar6,8);
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109da73e4; end: 109da750f;  */

void FUN_109da73e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  if (*(uint *)(param_1 + 3) != 0) {
    plVar6 = (long *)param_1[2];
    plVar1 = plVar6 + *(uint *)(param_1 + 3);
    do {
      lVar3 = *plVar6;
      if (lVar3 == *(long *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 8 + -8)) {
        puVar8 = (undefined8 *)*param_1;
      }
      else {
        uVar7 = (uint)((ulong)((long)plVar6 - param_1[2]) >> 10) & 0x1ffffff;
        if (0x1d < uVar7) {
          uVar7 = 0x1e;
        }
        puVar8 = (undefined8 *)(lVar3 + (0x1000L << ((ulong)uVar7 & 0x3f)));
      }
      puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 0x1f;
      while (puVar5 <= puVar8) {
        (**(code **)*puVar4)(puVar4);
        puVar5 = puVar4 + 0x3e;
        puVar4 = puVar4 + 0x1f;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if (*(uint *)(param_1 + 9) != 0) {
    plVar6 = (long *)param_1[8];
    plVar1 = plVar6 + (ulong)*(uint *)(param_1 + 9) * 2;
    do {
      lVar3 = *plVar6;
      lVar2 = plVar6[1];
      puVar5 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar5 + 0x1f;
      while (puVar8 <= (undefined8 *)(lVar3 + lVar2)) {
        (**(code **)*puVar5)(puVar5);
        puVar8 = puVar5 + 0x3e;
        puVar5 = puVar5 + 0x1f;
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar1);
  }
  if (*(uint *)(param_1 + 9) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 9) << 4;
    puVar8 = (undefined8 *)param_1[8];
    do {
      __ZdlPvSt11align_val_t(*puVar8,8);
      lVar3 = lVar3 + -0x10;
      puVar8 = puVar8 + 2;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  uVar7 = *(uint *)(param_1 + 3);
  if (uVar7 != 0) {
    param_1[10] = 0;
    plVar6 = (long *)param_1[2];
    lVar3 = *plVar6;
    *param_1 = lVar3;
    param_1[1] = lVar3 + 0x1000;
    if (uVar7 != 1) {
      lVar3 = (ulong)uVar7 * 8 + -8;
      do {
        plVar6 = plVar6 + 1;
        __ZdlPvSt11align_val_t(*plVar6,8);
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109da7510; end: 109da7537;  */

void FUN_109da7510(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109da4d74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109da7538; end: 109da7637;  */

ulong * FUN_109da7538(ulong *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,int param_5)

{
  int iVar1;
  ulong **ppuVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong *puVar24;
  undefined *puVar25;
  ulong **ppuVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar29;
  code *pcVar30;
  undefined1 auStack_210 [8];
  undefined **appuStack_208 [2];
  long lStack_1f8;
  int iStack_1d0;
  ulong *puStack_1c0;
  undefined8 uStack_1b8;
  ulong auStack_1a8 [16];
  long lStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong auStack_c8 [16];
  long lStack_48;
  
  ppuVar26 = &puStack_e0;
  ppuVar2 = &puStack_e0;
  pppppuVar29 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = auStack_c8;
  uStack_d0 = 0x80;
  uStack_d8 = 0;
  puStack_e0 = puVar24;
  func_0x000109d5975c();
  puVar4 = param_1 + 0x8f;
  puVar16 = param_2;
  puVar10 = (ulong *)ppuVar26;
  FUN_109dabd04();
  uVar28 = *puVar4;
  puVar4 = *(ulong **)(uVar28 + 8);
  if (*(ulong **)(uVar28 + 8) == (ulong *)0x0) {
    param_4 = (ulong *)0x0;
    param_5 = 0;
    puVar16 = param_2;
    puVar10 = (ulong *)ppuVar26;
    FUN_109da7638();
    *(ulong **)(uVar28 + 8) = param_1;
    puVar4 = param_1;
  }
  puVar5 = puStack_e0;
  if (puStack_e0 != puVar24) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  if (puStack_e0 != puVar24) {
    _free();
  }
  puVar9 = puVar5;
  __Unwind_Resume();
  pcStack_e8 = FUN_109da7638;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = uVar28;
  puStack_118 = puVar24;
  puStack_110 = (ulong *)ppuVar26;
  puStack_108 = param_2;
  puStack_100 = puVar4;
  puStack_f8 = puVar5;
  ppppuStack_f0 = pppppuVar29;
  if (param_5 == 0) {
    if (*(char *)((long)puVar9 + 0x6b3) == '\x01') {
      puVar24 = *(ulong **)(puVar9[0x12] + 0x60);
      if (puVar24 <= puVar10) {
        if (puVar24 == (ulong *)0x0) goto LAB_109da767c;
        puVar24 = puVar16;
        _memcmp(puVar16,*(undefined8 *)(puVar9[0x12] + 0x58));
        param_2 = (ulong *)(ulong)((int)puVar24 == 0);
        goto LAB_109da76a4;
      }
    }
    param_2 = (ulong *)0x0;
LAB_109da76a4:
    FUN_109dabe00(&puStack_1c0,puVar16,(long)puVar16 + (long)puVar10);
    puVar27 = puVar9 + 0x9e;
    FUN_109d59840(puVar27,puVar16,puVar10);
    puVar27 = (ulong *)*puVar27;
    if ((int)param_4 != 0) goto LAB_109da7730;
    while( true ) {
      puVar16 = puVar9 + 0x96;
      puVar24 = puStack_1c0;
      FUN_109dabe58(puVar16,puStack_1c0,uStack_1b8,1);
      puVar16 = (ulong *)*puVar16;
      if ((((ulong)puVar24 & 1) != 0) || ((puVar16[1] & 1) == 0)) break;
LAB_109da7730:
      func_0x000109d596f0(&puStack_1c0,puVar10);
      FUN_109d37ad8(appuStack_208,&puStack_1c0);
      uVar22 = puVar27[1];
      *(int *)(puVar27 + 1) = (int)uVar22 + 1;
      FUN_109df9d4c(appuStack_208,(int)uVar22,0,0,0);
      appuStack_208[0] = &PTR_DAT_110b5c4a0;
      if ((iStack_1d0 == 1) && (lStack_1f8 != 0)) {
        __ZdaPv();
      }
    }
    *(undefined1 *)(puVar16 + 1) = 1;
    puVar19 = param_2;
    FUN_109da7874(puVar9);
    puVar6 = puStack_1c0;
    if (puStack_1c0 != auStack_1a8) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
      return puVar9;
    }
LAB_109da7814:
    puVar24 = puVar27;
    ___stack_chk_fail();
    if (puStack_1c0 != auStack_1a8) {
      _free();
    }
    pcVar30 = FUN_109da7874;
    puVar9 = puVar6;
    __Unwind_Resume();
    ppuVar2 = (ulong **)auStack_210;
    puVar5 = puVar6;
    puVar4 = puVar10;
    ppuVar26 = (ulong **)param_4;
    pppppuVar29 = &ppppuStack_f0;
  }
  else {
    if ((*(byte *)((long)puVar9 + 0x6b4) & 1) != 0) {
LAB_109da767c:
      param_2 = (ulong *)0x1;
      goto LAB_109da76a4;
    }
    puVar6 = puVar9;
    puVar19 = puVar10;
    puVar27 = puVar16;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) goto LAB_109da7814;
    puVar16 = (ulong *)0x0;
    puVar19 = (ulong *)0x1;
    pcVar30 = FUN_109da7638;
  }
  *(undefined8 *)((long)ppuVar2 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppuVar2 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_x25;
  *(ulong *)((long)ppuVar2 + -0x40) = uVar28;
  *(ulong **)((long)ppuVar2 + -0x38) = puVar24;
  *(ulong ***)((long)ppuVar2 + -0x30) = ppuVar26;
  *(ulong **)((long)ppuVar2 + -0x28) = param_2;
  *(ulong **)((long)ppuVar2 + -0x20) = puVar4;
  *(ulong **)((long)ppuVar2 + -0x18) = puVar5;
  *(undefined8 ******)((long)ppuVar2 + -0x10) = pppppuVar29;
  *(code **)((long)ppuVar2 + -8) = pcVar30;
  *(undefined8 *)((long)ppuVar2 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*puVar9;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      bVar3 = puVar16 == (ulong *)0x0;
      ppuVar26 = (ulong **)(ulong)!bVar3;
      uVar28 = 0x28;
      if (bVar3) {
        uVar28 = 0x20;
      }
      uVar22 = 0;
      if (!bVar3) {
        uVar22 = 4;
      }
      puVar9 = puVar9 + 0x17;
      uVar20 = 3;
      FUN_109d34148(puVar9,uVar28,3);
      puVar24 = puVar9 + (long)ppuVar26;
      *(int *)(puVar24 + 2) = 0;
      puVar24[3] = 0;
      uVar21 = puVar24[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x100;
    }
    else {
      if (iVar1 == 1) {
        bVar3 = puVar16 == (ulong *)0x0;
        ppuVar26 = (ulong **)(ulong)!bVar3;
        uVar28 = 0x30;
        if (bVar3) {
          uVar28 = 0x28;
        }
        uVar22 = 0;
        if (!bVar3) {
          uVar22 = 4;
        }
        puVar9 = puVar9 + 0x17;
        uVar20 = 3;
        FUN_109d34148(puVar9,uVar28,3);
        puVar24 = puVar9 + (long)ppuVar26;
        *(int *)(puVar24 + 2) = 0;
        puVar24[3] = 0;
        *puVar24 = uVar22;
        puVar24[1] = puVar24[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x80;
        if (puVar16 != (ulong *)0x0) {
          puVar24[-1] = (ulong)puVar16;
        }
        puVar24[4] = 0;
        goto LAB_109da7ec0;
      }
      if (iVar1 != 2) goto LAB_109da7968;
      bVar3 = puVar16 == (ulong *)0x0;
      ppuVar26 = (ulong **)(ulong)!bVar3;
      uVar28 = 0x28;
      if (bVar3) {
        uVar28 = 0x20;
      }
      uVar22 = 0;
      if (!bVar3) {
        uVar22 = 4;
      }
      puVar9 = puVar9 + 0x17;
      uVar20 = 3;
      FUN_109d34148(puVar9,uVar28,3);
      puVar24 = puVar9 + (long)ppuVar26;
      *(int *)(puVar24 + 2) = 0;
      puVar24[3] = 0;
      uVar21 = puVar24[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0xc0;
    }
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        bVar3 = puVar16 == (ulong *)0x0;
        ppuVar26 = (ulong **)(ulong)!bVar3;
        uVar28 = 0x30;
        if (bVar3) {
          uVar28 = 0x28;
        }
        uVar22 = 0;
        if (!bVar3) {
          uVar22 = 4;
        }
        puVar9 = puVar9 + 0x17;
        uVar20 = 3;
        FUN_109d34148(puVar9,uVar28,3);
        puVar24 = puVar9 + (long)ppuVar26;
        *(int *)(puVar24 + 2) = 0;
        puVar24[3] = 0;
        *puVar24 = uVar22;
        puVar24[1] = puVar24[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x40;
        if (puVar16 != (ulong *)0x0) {
          puVar24[-1] = (ulong)puVar16;
        }
        *(undefined2 *)(puVar24 + 4) = 0;
        goto LAB_109da7ec0;
      }
    }
    else {
      if (iVar1 == 5) {
        bVar3 = puVar16 == (ulong *)0x0;
        ppuVar26 = (ulong **)(ulong)!bVar3;
        uVar28 = 0xc0;
        if (bVar3) {
          uVar28 = 0xb8;
        }
        uVar22 = 0;
        if (!bVar3) {
          uVar22 = 4;
        }
        puVar9 = puVar9 + 0x17;
        uVar20 = 3;
        FUN_109d34148(puVar9,uVar28,3);
        puVar24 = puVar9 + (long)ppuVar26;
        *(int *)(puVar24 + 2) = 0;
        puVar24[3] = 0;
        *puVar24 = uVar22;
        puVar24[1] = puVar24[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x140;
        if (puVar16 != (ulong *)0x0) {
          puVar24[-1] = (ulong)puVar16;
        }
        *(undefined1 *)(puVar24 + 4) = 0;
        *(undefined1 *)((long)puVar24 + 0x24) = 0;
        *(undefined1 *)(puVar24 + 6) = 0;
        *(undefined1 *)(puVar24 + 8) = 0;
        *(undefined1 *)(puVar24 + 9) = 0;
        *(undefined1 *)(puVar24 + 0xb) = 0;
        *(undefined1 *)(puVar24 + 0xc) = 0;
        *(undefined1 *)(puVar24 + 0xe) = 0;
        puVar24[0xf] = 0;
        *(undefined1 *)(puVar24 + 0x10) = 0;
        *(undefined1 *)((long)puVar24 + 0x82) = 0;
        *(undefined1 *)(puVar24 + 0x11) = 0;
        *(undefined1 *)(puVar24 + 0x15) = 0;
        puVar24[0x16] = 0;
        *(int *)(puVar24 + 5) = 0;
        *(undefined2 *)((long)puVar24 + 0x2c) = 0;
        goto LAB_109da7ec0;
      }
      if (iVar1 == 6) {
        if (puVar16 == (ulong *)0x0) {
          puVar9 = puVar9 + 0x17;
          uVar28 = 0x48;
          uVar20 = 3;
          FUN_109d34148(puVar9,0x48,3);
          *(int *)(puVar9 + 2) = 0;
          puVar9[3] = 0;
          *puVar9 = 0;
          puVar9[1] = puVar9[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x180;
          *(undefined2 *)(puVar9 + 4) = 0;
          puVar9[5] = 0;
          *(undefined2 *)(puVar9 + 6) = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar24 = puVar9;
          goto LAB_109da7ec0;
        }
        ppuVar26 = (ulong **)(puVar16 + 2);
        uVar28 = *puVar16;
        if (uVar28 < 0xb) {
          if (uVar28 == 10) {
LAB_109da7bf0:
            if (*ppuVar26 == (ulong *)0x64656d616e65525f && (short)puVar16[3] == 0x2e2e)
            goto LAB_109da7c18;
          }
        }
        else {
          if (*ppuVar26 != (ulong *)0x656d616e65525f2e ||
              *(long *)((long)puVar16 + 0x13) != 0x2e2e64656d616e65) goto LAB_109da7bf0;
LAB_109da7c18:
          *(undefined **)((long)ppuVar2 + -0x100) = &UNK_10f5fa752;
          *(undefined2 *)((long)ppuVar2 + -0xe0) = 0x103;
          FUN_109da84a4(puVar9,0,(undefined1 *)((long)ppuVar2 + -0x100));
        }
        plVar7 = (long *)puVar9[0x12];
        (**(code **)(*plVar7 + 0x38))(plVar7,ppuVar26,uVar28);
        if ((int)plVar7 == 0) {
          FUN_109dabe00((undefined1 *)((long)ppuVar2 + -0x100),ppuVar26,(long)ppuVar26 + uVar28);
          if (*(long *)((long)ppuVar2 + -0xf8) == 0) {
            bVar3 = false;
            puVar25 = &UNK_10f5fa747;
          }
          else {
            bVar3 = **(char **)((long)ppuVar2 + -0x100) == '.';
            puVar25 = &UNK_10f5fa73b;
            if (!bVar3) {
              puVar25 = &UNK_10f5fa747;
            }
          }
          puVar8 = puVar25;
          _strlen(puVar25);
          FUN_109dabe00((undefined1 *)((long)ppuVar2 + -0x198),puVar25,puVar25 + (long)puVar8);
          uVar22 = 0;
          if (*(long *)((long)ppuVar2 + -0xf8) != 0) {
            uVar21 = 0;
            do {
              plVar7 = (long *)puVar9[0x12];
              (**(code **)(*plVar7 + 0x30))
                        (plVar7,(long)*(char *)(*(long *)((long)ppuVar2 + -0x100) + uVar21));
              if (((int)plVar7 == 0) ||
                 (*(char *)(*(long *)((long)ppuVar2 + -0x100) + uVar21) == '_')) {
                FUN_109d37ad8((undefined1 *)((long)ppuVar2 + -0x1e0),
                              (undefined1 *)((long)ppuVar2 + -0x198));
                FUN_109df9ef8((undefined1 *)((long)ppuVar2 + -0x1e0),
                              (long)*(char *)(*(long *)((long)ppuVar2 + -0x100) + uVar21),1,0,0);
                *(undefined ***)((long)ppuVar2 + -0x1e0) = &PTR_DAT_110b5c4a0;
                if ((*(int *)((long)ppuVar2 + -0x1a8) == 1) &&
                   (*(long *)((long)ppuVar2 + -0x1d0) != 0)) {
                  __ZdaPv();
                }
                *(undefined1 *)(*(long *)((long)ppuVar2 + -0x100) + uVar21) = 0x5f;
              }
              uVar21 = uVar21 + 1;
              uVar22 = *(ulong *)((long)ppuVar2 + -0xf8);
            } while (uVar21 < uVar22);
          }
          if (bVar3) {
            uVar21 = uVar22 - (uVar22 != 0);
            if (uVar22 - 1 <= uVar21) {
              uVar21 = uVar22 - 1;
            }
            lVar23 = *(long *)((long)ppuVar2 + -0x100);
            lVar17 = lVar23;
            if (uVar22 != 0) {
              lVar17 = lVar23 + 1;
            }
            lVar23 = uVar21 + lVar23 + (ulong)(uVar22 != 0);
          }
          else {
            lVar17 = *(long *)((long)ppuVar2 + -0x100);
            lVar23 = lVar17 + uVar22;
          }
          FUN_109d3a7bc((undefined1 *)((long)ppuVar2 + -0x198),lVar17,lVar23);
          puVar24 = puVar9 + 0x96;
          FUN_109dabe58(puVar24,*(undefined8 *)((long)ppuVar2 + -0x198),
                        *(undefined8 *)((long)ppuVar2 + -400),1);
          *(undefined1 *)(*puVar24 + 8) = 1;
          puVar16 = puVar9 + 0x17;
          uVar20 = 3;
          FUN_109d34148(puVar16,0x50,3);
          uVar21 = *puVar24;
          uVar22 = 0;
          if (uVar21 != 0) {
            uVar22 = 4;
          }
          puVar24 = puVar16 + 1;
          *puVar24 = uVar22;
          puVar16[2] = puVar16[2] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x180;
          *(int *)(puVar16 + 3) = 0;
          puVar16[4] = 0;
          if (uVar21 != 0) {
            *puVar16 = uVar21;
          }
          *(undefined2 *)(puVar16 + 5) = 0;
          puVar16[6] = 0;
          *(undefined2 *)(puVar16 + 7) = 0;
          puVar16[8] = 0;
          puVar16[9] = 0;
          puVar4 = (ulong *)ppuVar26;
          FUN_109da857c();
          puVar16[8] = (ulong)puVar4;
          puVar16[9] = uVar28;
          if (*(undefined1 **)((long)ppuVar2 + -0x198) != (undefined1 *)((long)ppuVar2 + -0x180)) {
            _free();
          }
          puVar9 = *(ulong **)((long)ppuVar2 + -0x100);
          if (puVar9 != (ulong *)((long)ppuVar2 + -0xe8)) {
            _free();
          }
        }
        else {
          puVar9 = puVar9 + 0x17;
          uVar28 = 0x50;
          uVar20 = 3;
          FUN_109d34148(puVar9,0x50,3);
          puVar9[1] = 4;
          puVar9[2] = puVar9[2] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff | 0x180;
          *(int *)(puVar9 + 3) = 0;
          puVar9[4] = 0;
          *puVar9 = (ulong)puVar16;
          *(undefined2 *)(puVar9 + 5) = 0;
          puVar9[6] = 0;
          *(undefined2 *)(puVar9 + 7) = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          puVar24 = puVar9 + 1;
        }
        goto LAB_109da7ec0;
      }
    }
LAB_109da7968:
    bVar3 = puVar16 == (ulong *)0x0;
    ppuVar26 = (ulong **)(ulong)!bVar3;
    uVar28 = 0x28;
    if (bVar3) {
      uVar28 = 0x20;
    }
    uVar22 = 0;
    if (!bVar3) {
      uVar22 = 4;
    }
    puVar9 = puVar9 + 0x17;
    uVar20 = 3;
    FUN_109d34148(puVar9,uVar28,3);
    puVar24 = puVar9 + (long)ppuVar26;
    *(int *)(puVar24 + 2) = 0;
    puVar24[3] = 0;
    uVar21 = puVar24[1] & 0xffff0000fffc0000 | (ulong)puVar19 & 0xffffffff;
  }
  *puVar24 = uVar22;
  puVar24[1] = uVar21;
  if (puVar16 != (ulong *)0x0) {
    puVar24[-1] = (ulong)puVar16;
  }
LAB_109da7ec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar2 + -0x68)) {
    return puVar24;
  }
  ___stack_chk_fail();
  if (*(undefined1 **)((long)ppuVar2 + -0x198) != (undefined1 *)((long)ppuVar2 + -0x180)) {
    _free();
  }
  if (*(undefined1 **)((long)ppuVar2 + -0x100) != (undefined1 *)((long)ppuVar2 + -0xe8)) {
    _free();
  }
  puVar4 = puVar9;
  __Unwind_Resume();
  *(undefined8 *)((long)ppuVar2 + -0x220) = unaff_x28;
  *(undefined8 *)((long)ppuVar2 + -0x218) = unaff_x27;
  *(ulong ***)((long)ppuVar2 + -0x210) = ppuVar26;
  *(ulong **)((long)ppuVar2 + -0x208) = puVar16;
  *(ulong **)((long)ppuVar2 + -0x200) = puVar24;
  *(ulong **)((long)ppuVar2 + -0x1f8) = puVar9;
  *(undefined1 **)((long)ppuVar2 + -0x1f0) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(code **)((long)ppuVar2 + -0x1e8) = FUN_109da7f80;
  *(undefined8 *)((long)ppuVar2 + -0x228) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar24 = (ulong *)((long)ppuVar2 + -0x2a8);
  *(ulong **)((long)ppuVar2 + -0x2c0) = puVar24;
  *(undefined8 *)((long)ppuVar2 + -0x2b0) = 0x80;
  *(undefined8 *)((long)ppuVar2 + -0x2b8) = 0;
  FUN_109d37ad8((undefined1 *)((long)ppuVar2 + -0x308),(undefined1 *)((long)ppuVar2 + -0x2c0));
  FUN_109d2f728((undefined1 *)((long)ppuVar2 + -0x308),*(undefined8 *)(puVar4[0x12] + 0x58),
                *(undefined8 *)(puVar4[0x12] + 0x60));
  FUN_109e046a0(uVar28,(undefined1 *)((long)ppuVar2 + -0x308));
  *(undefined ***)((long)ppuVar2 + -0x308) = &PTR_DAT_110b5c4a0;
  if ((*(int *)((long)ppuVar2 + -0x2d0) == 1) && (*(long *)((long)ppuVar2 + -0x2f8) != 0)) {
    __ZdaPv();
  }
  uVar18 = *(undefined8 *)((long)ppuVar2 + -0x2c0);
  puVar16 = puVar4;
  FUN_109da7638(puVar4,uVar18,*(undefined8 *)((long)ppuVar2 + -0x2b8),uVar20,1);
  puVar10 = *(ulong **)((long)ppuVar2 + -0x2c0);
  if (puVar10 != puVar24) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar2 + -0x228)) {
    return puVar16;
  }
  ___stack_chk_fail();
  if (*(ulong **)((long)ppuVar2 + -0x2c0) != puVar24) {
    _free();
  }
  puVar16 = puVar10;
  __Unwind_Resume();
  *(ulong **)((long)ppuVar2 + -0x340) = puVar24;
  *(ulong *)((long)ppuVar2 + -0x338) = uVar28;
  *(ulong **)((long)ppuVar2 + -0x330) = puVar4;
  *(ulong **)((long)ppuVar2 + -0x328) = puVar10;
  *(undefined1 **)((long)ppuVar2 + -800) = (undefined1 *)((long)ppuVar2 + -0x1f0);
  *(code **)((long)ppuVar2 + -0x318) = FUN_109da80c4;
  *(undefined8 *)((long)ppuVar2 + -0x348) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = (undefined1 *)((long)ppuVar2 + -0x3c8);
  *(undefined1 **)((long)ppuVar2 + -0x3e0) = puVar13;
  *(undefined8 *)((long)ppuVar2 + -0x3d0) = 0x80;
  *(undefined8 *)((long)ppuVar2 + -0x3d8) = 0;
  FUN_109d37ad8((undefined1 *)((long)ppuVar2 + -0x428),(undefined1 *)((long)ppuVar2 + -0x3e0));
  FUN_109d2f728((undefined1 *)((long)ppuVar2 + -0x428),*(undefined8 *)(puVar16[0x12] + 0x58),
                *(undefined8 *)(puVar16[0x12] + 0x60));
  FUN_109e046a0(uVar18,(undefined1 *)((long)ppuVar2 + -0x428));
  *(undefined ***)((long)ppuVar2 + -0x428) = &PTR_DAT_110b5c4a0;
  if ((*(int *)((long)ppuVar2 + -0x3f0) == 1) && (*(long *)((long)ppuVar2 + -0x418) != 0)) {
    __ZdaPv();
  }
  uVar20 = *(undefined8 *)((long)ppuVar2 + -0x3e0);
  FUN_109da7638(puVar16,uVar20,*(undefined8 *)((long)ppuVar2 + -0x3d8),1,0);
  uVar15 = (undefined4)uVar20;
  puVar11 = *(undefined1 **)((long)ppuVar2 + -0x3e0);
  if (puVar11 != puVar13) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar2 + -0x348)) {
    return puVar16;
  }
  ___stack_chk_fail();
  if (*(undefined1 **)((long)ppuVar2 + -0x3e0) != puVar13) {
    _free();
  }
  puVar12 = puVar11;
  __Unwind_Resume();
  *(undefined8 *)((long)ppuVar2 + -0x450) = uVar18;
  *(undefined1 **)((long)ppuVar2 + -0x448) = puVar11;
  *(undefined1 **)((long)ppuVar2 + -0x440) = (undefined1 *)((long)ppuVar2 + -800);
  *(code **)((long)ppuVar2 + -0x438) = FUN_109da81fc;
  *(undefined4 *)((long)ppuVar2 + -0x454) = uVar15;
  puVar13 = puVar12 + 0x508;
  FUN_109dabf5c(puVar13,(undefined1 *)((long)ppuVar2 + -0x454));
  piVar14 = *(int **)(puVar13 + 8);
  if (piVar14 == (int *)0x0) {
    piVar14 = (int *)(puVar12 + 0xb8);
    FUN_109d34148(piVar14,4,3);
    *piVar14 = 0;
    *(int **)(puVar13 + 8) = piVar14;
    puVar24 = (ulong *)0x1;
  }
  else {
    puVar24 = (ulong *)(ulong)(*piVar14 + 1);
  }
  *piVar14 = (int)puVar24;
  return puVar24;
}



/* Entry: 109da7638; end: 109da7873;  */

ulong * FUN_109da7638(ulong *param_1,ulong *param_2,ulong param_3,ulong *param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined *puVar19;
  ulong uVar20;
  ulong *unaff_x22;
  ulong *unaff_x23;
  ulong *puVar21;
  ulong uVar22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_130 [8];
  undefined **appuStack_128 [2];
  long lStack_118;
  int iStack_f0;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  ulong auStack_c8 [16];
  long lStack_48;
  
  puVar10 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == 0) {
    if (*(char *)((long)param_1 + 0x6b3) == '\x01') {
      uVar16 = *(ulong *)(param_1[0x12] + 0x60);
      if (uVar16 <= param_3) {
        if (uVar16 == 0) goto LAB_109da767c;
        puVar21 = param_2;
        _memcmp(param_2,*(undefined8 *)(param_1[0x12] + 0x58));
        unaff_x21 = (ulong)((int)puVar21 == 0);
        goto LAB_109da76a4;
      }
    }
    unaff_x21 = 0;
LAB_109da76a4:
    FUN_109dabe00(&puStack_e0,param_2,(long)param_2 + param_3);
    puVar21 = param_1 + 0x9e;
    FUN_109d59840(puVar21,param_2,param_3);
    puVar21 = (ulong *)*puVar21;
    if ((int)param_4 != 0) goto LAB_109da7730;
    while( true ) {
      param_2 = param_1 + 0x96;
      puVar3 = puStack_e0;
      FUN_109dabe58(param_2,puStack_e0,uStack_d8,1);
      param_2 = (ulong *)*param_2;
      if ((((ulong)puVar3 & 1) != 0) || ((param_2[1] & 1) == 0)) break;
LAB_109da7730:
      FUN_109d596f0(&puStack_e0,param_3);
      FUN_109d37ad8(appuStack_128,&puStack_e0);
      uVar16 = puVar21[1];
      *(int *)(puVar21 + 1) = (int)uVar16 + 1;
      FUN_109df9d4c(appuStack_128,(int)uVar16,0,0,0);
      appuStack_128[0] = &PTR_DAT_110b5c4a0;
      if ((iStack_f0 == 1) && (lStack_118 != 0)) {
        __ZdaPv();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
    uVar16 = unaff_x21;
    FUN_109da7874(param_1);
    puVar3 = puStack_e0;
    if (puStack_e0 != auStack_c8) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return param_1;
    }
LAB_109da7814:
    unaff_x23 = puVar21;
    ___stack_chk_fail();
    if (puStack_e0 != auStack_c8) {
      _free();
    }
    unaff_x30 = FUN_109da7874;
    param_1 = puVar3;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_130;
    unaff_x19 = puVar3;
    unaff_x20 = param_3;
    unaff_x22 = param_4;
    unaff_x29 = puVar10;
  }
  else {
    if ((*(byte *)((long)param_1 + 0x6b4) & 1) != 0) {
LAB_109da767c:
      unaff_x21 = 1;
      goto LAB_109da76a4;
    }
    puVar3 = param_1;
    uVar16 = param_3;
    puVar21 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_109da7814;
    param_2 = (ulong *)0x0;
    uVar16 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x68) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = (int)*param_1;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      bVar2 = param_2 == (ulong *)0x0;
      unaff_x22 = (ulong *)(ulong)!bVar2;
      uVar22 = 0x28;
      if (bVar2) {
        uVar22 = 0x20;
      }
      uVar17 = 0;
      if (!bVar2) {
        uVar17 = 4;
      }
      param_1 = param_1 + 0x17;
      uVar15 = 3;
      FUN_109d34148(param_1,uVar22,3);
      puVar21 = param_1 + (long)unaff_x22;
      *(int *)(puVar21 + 2) = 0;
      puVar21[3] = 0;
      uVar16 = puVar21[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x100;
    }
    else {
      if (iVar1 == 1) {
        bVar2 = param_2 == (ulong *)0x0;
        unaff_x22 = (ulong *)(ulong)!bVar2;
        uVar22 = 0x30;
        if (bVar2) {
          uVar22 = 0x28;
        }
        uVar17 = 0;
        if (!bVar2) {
          uVar17 = 4;
        }
        param_1 = param_1 + 0x17;
        uVar15 = 3;
        FUN_109d34148(param_1,uVar22,3);
        puVar21 = param_1 + (long)unaff_x22;
        *(int *)(puVar21 + 2) = 0;
        puVar21[3] = 0;
        *puVar21 = uVar17;
        puVar21[1] = puVar21[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x80;
        if (param_2 != (ulong *)0x0) {
          puVar21[-1] = (ulong)param_2;
        }
        puVar21[4] = 0;
        goto LAB_109da7ec0;
      }
      if (iVar1 != 2) goto LAB_109da7968;
      bVar2 = param_2 == (ulong *)0x0;
      unaff_x22 = (ulong *)(ulong)!bVar2;
      uVar22 = 0x28;
      if (bVar2) {
        uVar22 = 0x20;
      }
      uVar17 = 0;
      if (!bVar2) {
        uVar17 = 4;
      }
      param_1 = param_1 + 0x17;
      uVar15 = 3;
      FUN_109d34148(param_1,uVar22,3);
      puVar21 = param_1 + (long)unaff_x22;
      *(int *)(puVar21 + 2) = 0;
      puVar21[3] = 0;
      uVar16 = puVar21[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0xc0;
    }
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        bVar2 = param_2 == (ulong *)0x0;
        unaff_x22 = (ulong *)(ulong)!bVar2;
        uVar22 = 0x30;
        if (bVar2) {
          uVar22 = 0x28;
        }
        uVar17 = 0;
        if (!bVar2) {
          uVar17 = 4;
        }
        param_1 = param_1 + 0x17;
        uVar15 = 3;
        FUN_109d34148(param_1,uVar22,3);
        puVar21 = param_1 + (long)unaff_x22;
        *(int *)(puVar21 + 2) = 0;
        puVar21[3] = 0;
        *puVar21 = uVar17;
        puVar21[1] = puVar21[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x40;
        if (param_2 != (ulong *)0x0) {
          puVar21[-1] = (ulong)param_2;
        }
        *(undefined2 *)(puVar21 + 4) = 0;
        goto LAB_109da7ec0;
      }
    }
    else {
      if (iVar1 == 5) {
        bVar2 = param_2 == (ulong *)0x0;
        unaff_x22 = (ulong *)(ulong)!bVar2;
        uVar22 = 0xc0;
        if (bVar2) {
          uVar22 = 0xb8;
        }
        uVar17 = 0;
        if (!bVar2) {
          uVar17 = 4;
        }
        param_1 = param_1 + 0x17;
        uVar15 = 3;
        FUN_109d34148(param_1,uVar22,3);
        puVar21 = param_1 + (long)unaff_x22;
        *(int *)(puVar21 + 2) = 0;
        puVar21[3] = 0;
        *puVar21 = uVar17;
        puVar21[1] = puVar21[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x140;
        if (param_2 != (ulong *)0x0) {
          puVar21[-1] = (ulong)param_2;
        }
        *(undefined1 *)(puVar21 + 4) = 0;
        *(undefined1 *)((long)puVar21 + 0x24) = 0;
        *(undefined1 *)(puVar21 + 6) = 0;
        *(undefined1 *)(puVar21 + 8) = 0;
        *(undefined1 *)(puVar21 + 9) = 0;
        *(undefined1 *)(puVar21 + 0xb) = 0;
        *(undefined1 *)(puVar21 + 0xc) = 0;
        *(undefined1 *)(puVar21 + 0xe) = 0;
        puVar21[0xf] = 0;
        *(undefined1 *)(puVar21 + 0x10) = 0;
        *(undefined1 *)((long)puVar21 + 0x82) = 0;
        *(undefined1 *)(puVar21 + 0x11) = 0;
        *(undefined1 *)(puVar21 + 0x15) = 0;
        puVar21[0x16] = 0;
        *(int *)(puVar21 + 5) = 0;
        *(undefined2 *)((long)puVar21 + 0x2c) = 0;
        goto LAB_109da7ec0;
      }
      if (iVar1 == 6) {
        if (param_2 == (ulong *)0x0) {
          param_1 = param_1 + 0x17;
          uVar22 = 0x48;
          uVar15 = 3;
          FUN_109d34148(param_1,0x48,3);
          *(int *)(param_1 + 2) = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = param_1[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x180;
          *(undefined2 *)(param_1 + 4) = 0;
          param_1[5] = 0;
          *(undefined2 *)(param_1 + 6) = 0;
          param_1[7] = 0;
          param_1[8] = 0;
          puVar21 = param_1;
          goto LAB_109da7ec0;
        }
        unaff_x22 = param_2 + 2;
        uVar22 = *param_2;
        if (uVar22 < 0xb) {
          if (uVar22 == 10) {
LAB_109da7bf0:
            if (*unaff_x22 == 0x64656d616e65525f && (short)param_2[3] == 0x2e2e) goto LAB_109da7c18;
          }
        }
        else {
          if (*unaff_x22 != 0x656d616e65525f2e ||
              *(long *)((long)param_2 + 0x13) != 0x2e2e64656d616e65) goto LAB_109da7bf0;
LAB_109da7c18:
          *(undefined **)((long)register0x00000008 + -0x100) = &UNK_10f5fa752;
          *(undefined2 *)((long)register0x00000008 + -0xe0) = 0x103;
          FUN_109da84a4(param_1,0,(undefined1 *)((long)register0x00000008 + -0x100));
        }
        plVar4 = (long *)param_1[0x12];
        (**(code **)(*plVar4 + 0x38))(plVar4,unaff_x22,uVar22);
        if ((int)plVar4 == 0) {
          FUN_109dabe00((undefined1 *)((long)register0x00000008 + -0x100),unaff_x22,
                        (long)unaff_x22 + uVar22);
          if (*(long *)((long)register0x00000008 + -0xf8) == 0) {
            bVar2 = false;
            puVar19 = &UNK_10f5fa747;
          }
          else {
            bVar2 = **(char **)((long)register0x00000008 + -0x100) == '.';
            puVar19 = &UNK_10f5fa73b;
            if (!bVar2) {
              puVar19 = &UNK_10f5fa747;
            }
          }
          puVar5 = puVar19;
          _strlen(puVar19);
          FUN_109dabe00((undefined1 *)((long)register0x00000008 + -0x198),puVar19,
                        puVar19 + (long)puVar5);
          uVar17 = 0;
          if (*(long *)((long)register0x00000008 + -0xf8) != 0) {
            uVar20 = 0;
            do {
              plVar4 = (long *)param_1[0x12];
              (**(code **)(*plVar4 + 0x30))
                        (plVar4,(long)*(char *)(*(long *)((long)register0x00000008 + -0x100) +
                                               uVar20));
              if (((int)plVar4 == 0) ||
                 (*(char *)(*(long *)((long)register0x00000008 + -0x100) + uVar20) == '_')) {
                FUN_109d37ad8((undefined1 *)((long)register0x00000008 + -0x1e0),
                              (undefined1 *)((long)register0x00000008 + -0x198));
                FUN_109df9ef8((undefined1 *)((long)register0x00000008 + -0x1e0),
                              (long)*(char *)(*(long *)((long)register0x00000008 + -0x100) + uVar20)
                              ,1,0,0);
                *(undefined ***)((long)register0x00000008 + -0x1e0) = &PTR_DAT_110b5c4a0;
                if ((*(int *)((long)register0x00000008 + -0x1a8) == 1) &&
                   (*(long *)((long)register0x00000008 + -0x1d0) != 0)) {
                  __ZdaPv();
                }
                *(undefined1 *)(*(long *)((long)register0x00000008 + -0x100) + uVar20) = 0x5f;
              }
              uVar20 = uVar20 + 1;
              uVar17 = *(ulong *)((long)register0x00000008 + -0xf8);
            } while (uVar20 < uVar17);
          }
          if (bVar2) {
            uVar20 = uVar17 - (uVar17 != 0);
            if (uVar17 - 1 <= uVar20) {
              uVar20 = uVar17 - 1;
            }
            lVar18 = *(long *)((long)register0x00000008 + -0x100);
            lVar13 = lVar18;
            if (uVar17 != 0) {
              lVar13 = lVar18 + 1;
            }
            lVar18 = uVar20 + lVar18 + (ulong)(uVar17 != 0);
          }
          else {
            lVar13 = *(long *)((long)register0x00000008 + -0x100);
            lVar18 = lVar13 + uVar17;
          }
          FUN_109d3a7bc((undefined1 *)((long)register0x00000008 + -0x198),lVar13,lVar18);
          puVar21 = param_1 + 0x96;
          FUN_109dabe58(puVar21,*(undefined8 *)((long)register0x00000008 + -0x198),
                        *(undefined8 *)((long)register0x00000008 + -400),1);
          *(undefined1 *)(*puVar21 + 8) = 1;
          param_2 = param_1 + 0x17;
          uVar15 = 3;
          FUN_109d34148(param_2,0x50,3);
          uVar20 = *puVar21;
          uVar17 = 0;
          if (uVar20 != 0) {
            uVar17 = 4;
          }
          puVar21 = param_2 + 1;
          *puVar21 = uVar17;
          param_2[2] = param_2[2] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x180;
          *(int *)(param_2 + 3) = 0;
          param_2[4] = 0;
          if (uVar20 != 0) {
            *param_2 = uVar20;
          }
          *(undefined2 *)(param_2 + 5) = 0;
          param_2[6] = 0;
          *(undefined2 *)(param_2 + 7) = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          puVar3 = unaff_x22;
          FUN_109da857c();
          param_2[8] = (ulong)puVar3;
          param_2[9] = uVar22;
          if (*(undefined1 **)((long)register0x00000008 + -0x198) !=
              (undefined1 *)((long)register0x00000008 + -0x180)) {
            _free();
          }
          param_1 = *(ulong **)((long)register0x00000008 + -0x100);
          if (param_1 != (ulong *)((long)register0x00000008 + -0xe8)) {
            _free();
          }
        }
        else {
          param_1 = param_1 + 0x17;
          uVar22 = 0x50;
          uVar15 = 3;
          FUN_109d34148(param_1,0x50,3);
          param_1[1] = 4;
          param_1[2] = param_1[2] & 0xffff0000fffc0000 | uVar16 & 0xffffffff | 0x180;
          *(int *)(param_1 + 3) = 0;
          param_1[4] = 0;
          *param_1 = (ulong)param_2;
          *(undefined2 *)(param_1 + 5) = 0;
          param_1[6] = 0;
          *(undefined2 *)(param_1 + 7) = 0;
          param_1[8] = 0;
          param_1[9] = 0;
          puVar21 = param_1 + 1;
        }
        goto LAB_109da7ec0;
      }
    }
LAB_109da7968:
    bVar2 = param_2 == (ulong *)0x0;
    unaff_x22 = (ulong *)(ulong)!bVar2;
    uVar22 = 0x28;
    if (bVar2) {
      uVar22 = 0x20;
    }
    uVar17 = 0;
    if (!bVar2) {
      uVar17 = 4;
    }
    param_1 = param_1 + 0x17;
    uVar15 = 3;
    FUN_109d34148(param_1,uVar22,3);
    puVar21 = param_1 + (long)unaff_x22;
    *(int *)(puVar21 + 2) = 0;
    puVar21[3] = 0;
    uVar16 = puVar21[1] & 0xffff0000fffc0000 | uVar16 & 0xffffffff;
  }
  *puVar21 = uVar17;
  puVar21[1] = uVar16;
  if (param_2 != (ulong *)0x0) {
    puVar21[-1] = (ulong)param_2;
  }
LAB_109da7ec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68)) {
    return puVar21;
  }
  ___stack_chk_fail();
  if (*(undefined1 **)((long)register0x00000008 + -0x198) !=
      (undefined1 *)((long)register0x00000008 + -0x180)) {
    _free();
  }
  if (*(undefined1 **)((long)register0x00000008 + -0x100) !=
      (undefined1 *)((long)register0x00000008 + -0xe8)) {
    _free();
  }
  puVar3 = param_1;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0x220) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x218) = unaff_x27;
  *(ulong **)((long)register0x00000008 + -0x210) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x208) = param_2;
  *(ulong **)((long)register0x00000008 + -0x200) = puVar21;
  *(ulong **)((long)register0x00000008 + -0x1f8) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x1f0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x1e8) = FUN_109da7f80;
  *(undefined8 *)((long)register0x00000008 + -0x228) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (ulong *)((long)register0x00000008 + -0x2a8);
  *(ulong **)((long)register0x00000008 + -0x2c0) = puVar21;
  *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0x80;
  *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
  FUN_109d37ad8((undefined1 *)((long)register0x00000008 + -0x308),
                (undefined1 *)((long)register0x00000008 + -0x2c0));
  FUN_109d2f728((undefined1 *)((long)register0x00000008 + -0x308),
                *(undefined8 *)(puVar3[0x12] + 0x58),*(undefined8 *)(puVar3[0x12] + 0x60));
  FUN_109e046a0(uVar22,(undefined1 *)((long)register0x00000008 + -0x308));
  *(undefined ***)((long)register0x00000008 + -0x308) = &PTR_DAT_110b5c4a0;
  if ((*(int *)((long)register0x00000008 + -0x2d0) == 1) &&
     (*(long *)((long)register0x00000008 + -0x2f8) != 0)) {
    __ZdaPv();
  }
  uVar14 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
  puVar6 = puVar3;
  FUN_109da7638(puVar3,uVar14,*(undefined8 *)((long)register0x00000008 + -0x2b8),uVar15,1);
  puVar7 = *(ulong **)((long)register0x00000008 + -0x2c0);
  if (puVar7 != puVar21) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x228)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (*(ulong **)((long)register0x00000008 + -0x2c0) != puVar21) {
    _free();
  }
  puVar6 = puVar7;
  __Unwind_Resume();
  *(ulong **)((long)register0x00000008 + -0x340) = puVar21;
  *(ulong *)((long)register0x00000008 + -0x338) = uVar22;
  *(ulong **)((long)register0x00000008 + -0x330) = puVar3;
  *(ulong **)((long)register0x00000008 + -0x328) = puVar7;
  *(undefined1 **)((long)register0x00000008 + -800) =
       (undefined1 *)((long)register0x00000008 + -0x1f0);
  *(code **)((long)register0x00000008 + -0x318) = FUN_109da80c4;
  *(undefined8 *)((long)register0x00000008 + -0x348) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x3c8);
  *(undefined1 **)((long)register0x00000008 + -0x3e0) = puVar10;
  *(undefined8 *)((long)register0x00000008 + -0x3d0) = 0x80;
  *(undefined8 *)((long)register0x00000008 + -0x3d8) = 0;
  FUN_109d37ad8((undefined1 *)((long)register0x00000008 + -0x428),
                (undefined1 *)((long)register0x00000008 + -0x3e0));
  FUN_109d2f728((undefined1 *)((long)register0x00000008 + -0x428),
                *(undefined8 *)(puVar6[0x12] + 0x58),*(undefined8 *)(puVar6[0x12] + 0x60));
  FUN_109e046a0(uVar14,(undefined1 *)((long)register0x00000008 + -0x428));
  *(undefined ***)((long)register0x00000008 + -0x428) = &PTR_DAT_110b5c4a0;
  if ((*(int *)((long)register0x00000008 + -0x3f0) == 1) &&
     (*(long *)((long)register0x00000008 + -0x418) != 0)) {
    __ZdaPv();
  }
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x3e0);
  FUN_109da7638(puVar6,uVar15,*(undefined8 *)((long)register0x00000008 + -0x3d8),1,0);
  uVar12 = (undefined4)uVar15;
  puVar8 = *(undefined1 **)((long)register0x00000008 + -0x3e0);
  if (puVar8 != puVar10) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x348)) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (*(undefined1 **)((long)register0x00000008 + -0x3e0) != puVar10) {
    _free();
  }
  puVar9 = puVar8;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0x450) = uVar14;
  *(undefined1 **)((long)register0x00000008 + -0x448) = puVar8;
  *(undefined1 **)((long)register0x00000008 + -0x440) =
       (undefined1 *)((long)register0x00000008 + -800);
  *(code **)((long)register0x00000008 + -0x438) = FUN_109da81fc;
  *(undefined4 *)((long)register0x00000008 + -0x454) = uVar12;
  puVar10 = puVar9 + 0x508;
  FUN_109dabf5c(puVar10,(undefined1 *)((long)register0x00000008 + -0x454));
  piVar11 = *(int **)(puVar10 + 8);
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)(puVar9 + 0xb8);
    FUN_109d34148(piVar11,4,3);
    *piVar11 = 0;
    *(int **)(puVar10 + 8) = piVar11;
    puVar21 = (ulong *)0x1;
  }
  else {
    puVar21 = (ulong *)(ulong)(*piVar11 + 1);
  }
  *piVar11 = (int)puVar21;
  return puVar21;
}



/* Entry: 109da7874; end: 109da7f7f;  */

long * FUN_109da7874(int *param_1,ulong *param_2,ulong param_3)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  ulong *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  undefined4 uStack_454;
  long *plStack_450;
  undefined1 *puStack_448;
  undefined1 ***pppuStack_440;
  code *pcStack_438;
  undefined **appuStack_428 [2];
  long lStack_418;
  int iStack_3f0;
  undefined1 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [128];
  long lStack_348;
  long *plStack_340;
  ulong uStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined **appuStack_308 [2];
  long lStack_2f8;
  int iStack_2d0;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long alStack_2a8 [16];
  long lStack_228;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined **appuStack_1e0 [2];
  long lStack_1d0;
  int iStack_1a8;
  undefined1 *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_180 [128];
  long *plStack_100;
  ulong uStack_f8;
  long lStack_e8;
  undefined2 uStack_e0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *param_1;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      bVar2 = param_2 == (ulong *)0x0;
      uVar18 = 0x28;
      if (bVar2) {
        uVar18 = 0x20;
      }
      lVar19 = 0;
      if (!bVar2) {
        lVar19 = 4;
      }
      plVar3 = (long *)(param_1 + 0x2e);
      uVar13 = 3;
      FUN_109d34148(plVar3,uVar18,3);
      plVar16 = plVar3 + !bVar2;
      *(int *)(plVar16 + 2) = 0;
      plVar16[3] = 0;
      uVar14 = plVar16[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x100;
    }
    else {
      if (iVar1 == 1) {
        bVar2 = param_2 == (ulong *)0x0;
        uVar18 = 0x30;
        if (bVar2) {
          uVar18 = 0x28;
        }
        lVar19 = 0;
        if (!bVar2) {
          lVar19 = 4;
        }
        plVar3 = (long *)(param_1 + 0x2e);
        uVar13 = 3;
        FUN_109d34148(plVar3,uVar18,3);
        plVar16 = plVar3 + !bVar2;
        *(int *)(plVar16 + 2) = 0;
        plVar16[3] = 0;
        *plVar16 = lVar19;
        plVar16[1] = plVar16[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x80;
        if (param_2 != (ulong *)0x0) {
          plVar16[-1] = (long)param_2;
        }
        plVar16[4] = 0;
        goto LAB_109da7ec0;
      }
      if (iVar1 != 2) goto LAB_109da7968;
      bVar2 = param_2 == (ulong *)0x0;
      uVar18 = 0x28;
      if (bVar2) {
        uVar18 = 0x20;
      }
      lVar19 = 0;
      if (!bVar2) {
        lVar19 = 4;
      }
      plVar3 = (long *)(param_1 + 0x2e);
      uVar13 = 3;
      FUN_109d34148(plVar3,uVar18,3);
      plVar16 = plVar3 + !bVar2;
      *(int *)(plVar16 + 2) = 0;
      plVar16[3] = 0;
      uVar14 = plVar16[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0xc0;
    }
  }
  else {
    if (iVar1 < 5) {
      if (iVar1 == 3) {
        bVar2 = param_2 == (ulong *)0x0;
        uVar18 = 0x30;
        if (bVar2) {
          uVar18 = 0x28;
        }
        lVar19 = 0;
        if (!bVar2) {
          lVar19 = 4;
        }
        plVar3 = (long *)(param_1 + 0x2e);
        uVar13 = 3;
        FUN_109d34148(plVar3,uVar18,3);
        plVar16 = plVar3 + !bVar2;
        *(int *)(plVar16 + 2) = 0;
        plVar16[3] = 0;
        *plVar16 = lVar19;
        plVar16[1] = plVar16[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x40;
        if (param_2 != (ulong *)0x0) {
          plVar16[-1] = (long)param_2;
        }
        *(undefined2 *)(plVar16 + 4) = 0;
        goto LAB_109da7ec0;
      }
    }
    else {
      if (iVar1 == 5) {
        bVar2 = param_2 == (ulong *)0x0;
        uVar18 = 0xc0;
        if (bVar2) {
          uVar18 = 0xb8;
        }
        lVar19 = 0;
        if (!bVar2) {
          lVar19 = 4;
        }
        plVar3 = (long *)(param_1 + 0x2e);
        uVar13 = 3;
        FUN_109d34148(plVar3,uVar18,3);
        plVar16 = plVar3 + !bVar2;
        *(int *)(plVar16 + 2) = 0;
        plVar16[3] = 0;
        *plVar16 = lVar19;
        plVar16[1] = plVar16[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x140;
        if (param_2 != (ulong *)0x0) {
          plVar16[-1] = (long)param_2;
        }
        *(undefined1 *)(plVar16 + 4) = 0;
        *(undefined1 *)((long)plVar16 + 0x24) = 0;
        *(undefined1 *)(plVar16 + 6) = 0;
        *(undefined1 *)(plVar16 + 8) = 0;
        *(undefined1 *)(plVar16 + 9) = 0;
        *(undefined1 *)(plVar16 + 0xb) = 0;
        *(undefined1 *)(plVar16 + 0xc) = 0;
        *(undefined1 *)(plVar16 + 0xe) = 0;
        plVar16[0xf] = 0;
        *(undefined1 *)(plVar16 + 0x10) = 0;
        *(undefined1 *)((long)plVar16 + 0x82) = 0;
        *(undefined1 *)(plVar16 + 0x11) = 0;
        *(undefined1 *)(plVar16 + 0x15) = 0;
        plVar16[0x16] = 0;
        *(int *)(plVar16 + 5) = 0;
        *(undefined2 *)((long)plVar16 + 0x2c) = 0;
        goto LAB_109da7ec0;
      }
      if (iVar1 == 6) {
        if (param_2 == (ulong *)0x0) {
          plVar3 = (long *)(param_1 + 0x2e);
          uVar18 = 0x48;
          uVar13 = 3;
          FUN_109d34148(plVar3,0x48,3);
          *(int *)(plVar3 + 2) = 0;
          plVar3[3] = 0;
          *plVar3 = 0;
          plVar3[1] = plVar3[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x180;
          *(undefined2 *)(plVar3 + 4) = 0;
          plVar3[5] = 0;
          *(undefined2 *)(plVar3 + 6) = 0;
          plVar3[7] = 0;
          plVar3[8] = 0;
          plVar16 = plVar3;
          goto LAB_109da7ec0;
        }
        puVar5 = param_2 + 2;
        uVar18 = *param_2;
        if (uVar18 < 0xb) {
          if (uVar18 == 10) {
LAB_109da7bf0:
            if (*puVar5 == 0x64656d616e65525f && (short)param_2[3] == 0x2e2e) goto LAB_109da7c18;
          }
        }
        else {
          if (*puVar5 != 0x656d616e65525f2e || *(long *)((long)param_2 + 0x13) != 0x2e2e64656d616e65
             ) goto LAB_109da7bf0;
LAB_109da7c18:
          plStack_100 = (long *)&UNK_10f5fa752;
          uStack_e0 = 0x103;
          FUN_109da84a4(param_1,0,&plStack_100);
        }
        plVar16 = *(long **)(param_1 + 0x24);
        (**(code **)(*plVar16 + 0x38))(plVar16,puVar5,uVar18);
        if ((int)plVar16 == 0) {
          FUN_109dabe00(&plStack_100,puVar5,(long)puVar5 + uVar18);
          if (uStack_f8 == 0) {
            bVar2 = false;
            puVar17 = &UNK_10f5fa747;
          }
          else {
            bVar2 = (char)*plStack_100 == '.';
            puVar17 = &UNK_10f5fa73b;
            if (!bVar2) {
              puVar17 = &UNK_10f5fa747;
            }
          }
          puVar4 = puVar17;
          _strlen(puVar17);
          FUN_109dabe00(&puStack_198,puVar17,puVar17 + (long)puVar4);
          if (uStack_f8 != 0) {
            uVar14 = 0;
            do {
              plVar16 = *(long **)(param_1 + 0x24);
              (**(code **)(*plVar16 + 0x30))(plVar16,(long)*(char *)((long)plStack_100 + uVar14));
              if (((int)plVar16 == 0) || (*(char *)((long)plStack_100 + uVar14) == '_')) {
                FUN_109d37ad8(appuStack_1e0,&puStack_198);
                FUN_109df9ef8(appuStack_1e0,(long)*(char *)((long)plStack_100 + uVar14),1,0,0);
                appuStack_1e0[0] = &PTR_DAT_110b5c4a0;
                if ((iStack_1a8 == 1) && (lStack_1d0 != 0)) {
                  __ZdaPv();
                }
                *(undefined1 *)((long)plStack_100 + uVar14) = 0x5f;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uStack_f8);
          }
          plVar16 = plStack_100;
          if (bVar2) {
            uVar14 = uStack_f8 - (uStack_f8 != 0);
            if (uStack_f8 - 1 <= uVar14) {
              uVar14 = uStack_f8 - 1;
            }
            if (uStack_f8 != 0) {
              plVar16 = (long *)((long)plStack_100 + 1);
            }
            uStack_f8 = (uStack_f8 != 0) + uVar14;
          }
          FUN_109d3a7bc(&puStack_198,plVar16,(long)plStack_100 + uStack_f8);
          plVar16 = (long *)(param_1 + 300);
          FUN_109dabe58(plVar16,puStack_198,uStack_190,1);
          *(undefined1 *)(*plVar16 + 8) = 1;
          plVar3 = (long *)(param_1 + 0x2e);
          uVar13 = 3;
          FUN_109d34148(plVar3,0x50,3);
          lVar15 = *plVar16;
          lVar19 = 0;
          if (lVar15 != 0) {
            lVar19 = 4;
          }
          plVar16 = plVar3 + 1;
          *plVar16 = lVar19;
          plVar3[2] = plVar3[2] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x180;
          *(int *)(plVar3 + 3) = 0;
          plVar3[4] = 0;
          if (lVar15 != 0) {
            *plVar3 = lVar15;
          }
          *(undefined2 *)(plVar3 + 5) = 0;
          plVar3[6] = 0;
          *(undefined2 *)(plVar3 + 7) = 0;
          plVar3[8] = 0;
          plVar3[9] = 0;
          FUN_109da857c();
          plVar3[8] = (long)puVar5;
          plVar3[9] = uVar18;
          if (puStack_198 != auStack_180) {
            _free();
          }
          plVar3 = plStack_100;
          if (plStack_100 != &lStack_e8) {
            _free();
          }
        }
        else {
          plVar3 = (long *)(param_1 + 0x2e);
          uVar18 = 0x50;
          uVar13 = 3;
          FUN_109d34148(plVar3,0x50,3);
          plVar3[1] = 4;
          plVar3[2] = plVar3[2] & 0xffff0000fffc0000U | param_3 & 0xffffffff | 0x180;
          *(int *)(plVar3 + 3) = 0;
          plVar3[4] = 0;
          *plVar3 = (long)param_2;
          *(undefined2 *)(plVar3 + 5) = 0;
          plVar3[6] = 0;
          *(undefined2 *)(plVar3 + 7) = 0;
          plVar3[8] = 0;
          plVar3[9] = 0;
          plVar16 = plVar3 + 1;
        }
        goto LAB_109da7ec0;
      }
    }
LAB_109da7968:
    bVar2 = param_2 == (ulong *)0x0;
    uVar18 = 0x28;
    if (bVar2) {
      uVar18 = 0x20;
    }
    lVar19 = 0;
    if (!bVar2) {
      lVar19 = 4;
    }
    plVar3 = (long *)(param_1 + 0x2e);
    uVar13 = 3;
    FUN_109d34148(plVar3,uVar18,3);
    plVar16 = plVar3 + !bVar2;
    *(int *)(plVar16 + 2) = 0;
    plVar16[3] = 0;
    uVar14 = plVar16[1] & 0xffff0000fffc0000U | param_3 & 0xffffffff;
  }
  *plVar16 = lVar19;
  plVar16[1] = uVar14;
  if (param_2 != (ulong *)0x0) {
    plVar16[-1] = (long)param_2;
  }
LAB_109da7ec0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar16;
  }
  ___stack_chk_fail();
  if (puStack_198 != auStack_180) {
    _free();
  }
  if (plStack_100 != &lStack_e8) {
    _free();
  }
  __Unwind_Resume();
  pcStack_1e8 = FUN_109da7f80;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2b0 = 0x80;
  uStack_2b8 = 0;
  plStack_2c0 = alStack_2a8;
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_109d37ad8(appuStack_308,&plStack_2c0);
  FUN_109d2f728(appuStack_308,*(undefined8 *)(plVar3[0x12] + 0x58),
                *(undefined8 *)(plVar3[0x12] + 0x60));
  FUN_109e046a0(uVar18,appuStack_308);
  appuStack_308[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_2d0 == 1) && (lStack_2f8 != 0)) {
    __ZdaPv();
  }
  plVar16 = plVar3;
  plVar12 = plStack_2c0;
  FUN_109da7638(plVar3,plStack_2c0,uStack_2b8,uVar13,1);
  plVar6 = plStack_2c0;
  if (plStack_2c0 != alStack_2a8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
    ___stack_chk_fail();
    if (plStack_2c0 != alStack_2a8) {
      _free();
    }
    plVar16 = plVar6;
    __Unwind_Resume();
    pcStack_318 = FUN_109da80c4;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_3d0 = 0x80;
    uStack_3d8 = 0;
    puStack_3e0 = auStack_3c8;
    plStack_340 = alStack_2a8;
    uStack_338 = uVar18;
    plStack_330 = plVar3;
    plStack_328 = plVar6;
    ppuStack_320 = &puStack_1f0;
    FUN_109d37ad8(appuStack_428,&puStack_3e0);
    FUN_109d2f728(appuStack_428,*(undefined8 *)(plVar16[0x12] + 0x58),
                  *(undefined8 *)(plVar16[0x12] + 0x60));
    FUN_109e046a0(plVar12,appuStack_428);
    appuStack_428[0] = &PTR_DAT_110b5c4a0;
    if ((iStack_3f0 == 1) && (lStack_418 != 0)) {
      __ZdaPv();
    }
    puVar7 = puStack_3e0;
    FUN_109da7638(plVar16,puStack_3e0,uStack_3d8,1,0);
    uVar11 = SUB84(puVar7,0);
    puVar7 = puStack_3e0;
    if (puStack_3e0 != auStack_3c8) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      if (puStack_3e0 != auStack_3c8) {
        _free();
      }
      puVar8 = puVar7;
      __Unwind_Resume();
      pcStack_438 = FUN_109da81fc;
      puVar9 = puVar8 + 0x508;
      uStack_454 = uVar11;
      plStack_450 = plVar12;
      puStack_448 = puVar7;
      pppuStack_440 = &ppuStack_320;
      FUN_109dabf5c(puVar9,&uStack_454);
      piVar10 = *(int **)(puVar9 + 8);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)(puVar8 + 0xb8);
        FUN_109d34148(piVar10,4,3);
        *piVar10 = 0;
        *(int **)(puVar9 + 8) = piVar10;
        plVar16 = (long *)0x1;
      }
      else {
        plVar16 = (long *)(ulong)(*piVar10 + 1);
      }
      *piVar10 = (int)plVar16;
      return plVar16;
    }
    return plVar16;
  }
  return plVar16;
}



/* Entry: 109da7f80; end: 109da80c3;  */

undefined1 * FUN_109da7f80(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uStack_274;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined **appuStack_248 [2];
  long lStack_238;
  int iStack_210;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined **appuStack_128 [2];
  long lStack_118;
  int iStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = 0x80;
  uStack_d8 = 0;
  puStack_e0 = auStack_c8;
  FUN_109d37ad8(appuStack_128,&puStack_e0);
  FUN_109d2f728(appuStack_128,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x58),
                *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x60));
  FUN_109e046a0(param_2,appuStack_128);
  appuStack_128[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_f0 == 1) && (lStack_118 != 0)) {
    __ZdaPv();
  }
  puVar6 = param_1;
  puVar5 = puStack_e0;
  FUN_109da7638(param_1,puStack_e0,uStack_d8,param_3,1);
  puVar1 = puStack_e0;
  if (puStack_e0 != auStack_c8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (puStack_e0 != auStack_c8) {
    _free();
  }
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_138 = FUN_109da80c4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1f0 = 0x80;
  uStack_1f8 = 0;
  puStack_200 = auStack_1e8;
  puStack_160 = auStack_c8;
  uStack_158 = param_2;
  puStack_150 = param_1;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_109d37ad8(appuStack_248,&puStack_200);
  FUN_109d2f728(appuStack_248,*(undefined8 *)(*(long *)(puVar6 + 0x90) + 0x58),
                *(undefined8 *)(*(long *)(puVar6 + 0x90) + 0x60));
  FUN_109e046a0(puVar5,appuStack_248);
  appuStack_248[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_210 == 1) && (lStack_238 != 0)) {
    __ZdaPv();
  }
  puVar1 = puStack_200;
  FUN_109da7638(puVar6,puStack_200,uStack_1f8,1,0);
  uVar4 = SUB84(puVar1,0);
  puVar1 = puStack_200;
  if (puStack_200 != auStack_1e8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (puStack_200 != auStack_1e8) {
    _free();
  }
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_258 = FUN_109da81fc;
  puVar6 = puVar2 + 0x508;
  uStack_274 = uVar4;
  puStack_270 = puVar5;
  puStack_268 = puVar1;
  ppuStack_260 = &puStack_140;
  FUN_109dabf5c(puVar6,&uStack_274);
  piVar3 = *(int **)(puVar6 + 8);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(puVar2 + 0xb8);
    FUN_109d34148(piVar3,4,3);
    *piVar3 = 0;
    *(int **)(puVar6 + 8) = piVar3;
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)(ulong)(*piVar3 + 1);
  }
  *piVar3 = (int)puVar6;
  return puVar6;
}



/* Entry: 109da80c4; end: 109da81fb;  */

ulong FUN_109da80c4(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined **appuStack_118 [2];
  long lStack_108;
  int iStack_e0;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = 0x80;
  uStack_c8 = 0;
  puStack_d0 = auStack_b8;
  FUN_109d37ad8(appuStack_118,&puStack_d0);
  FUN_109d2f728(appuStack_118,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x58),
                *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x60));
  FUN_109e046a0(param_2,appuStack_118);
  appuStack_118[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_e0 == 1) && (lStack_108 != 0)) {
    __ZdaPv();
  }
  puVar1 = puStack_d0;
  FUN_109da7638(param_1,puStack_d0,uStack_c8,1,0);
  uVar5 = SUB84(puVar1,0);
  puVar1 = puStack_d0;
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_d0 != auStack_b8) {
    _free();
  }
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_128 = FUN_109da81fc;
  puVar3 = puVar2 + 0x508;
  uStack_144 = uVar5;
  uStack_140 = param_2;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  FUN_109dabf5c(puVar3,&uStack_144);
  piVar4 = *(int **)(puVar3 + 8);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)(puVar2 + 0xb8);
    FUN_109d34148(piVar4,4,3);
    *piVar4 = 0;
    *(int **)(puVar3 + 8) = piVar4;
    uVar6 = 1;
  }
  else {
    uVar6 = (ulong)(*piVar4 + 1);
  }
  *piVar4 = (int)uVar6;
  return uVar6;
}



/* Entry: 109da81fc; end: 109da826f;  */

int FUN_109da81fc(long param_1,undefined4 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0x508;
  uStack_24 = param_2;
  FUN_109dabf5c(lVar1,&uStack_24);
  piVar2 = *(int **)(lVar1 + 8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(param_1 + 0xb8);
    FUN_109d34148(piVar2,4,3);
    *piVar2 = 0;
    *(int **)(lVar1 + 8) = piVar2;
    iVar3 = 1;
  }
  else {
    iVar3 = *piVar2 + 1;
  }
  *piVar2 = iVar3;
  return iVar3;
}



/* Entry: 109da8270; end: 109da82db;  */

undefined4 FUN_109da8270(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uStack_24;
  
  lVar2 = param_1 + 0x508;
  uStack_24 = param_2;
  FUN_109dabf5c(lVar2,&uStack_24);
  if (*(undefined4 **)(lVar2 + 8) == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0xb8);
    FUN_109d34148(puVar3,4,3);
    uVar1 = 0;
    *puVar3 = 0;
    *(undefined4 **)(lVar2 + 8) = puVar3;
  }
  else {
    uVar1 = **(undefined4 **)(lVar2 + 8);
  }
  return uVar1;
}



/* Entry: 109da82dc; end: 109da8377;  */

void FUN_109da82dc(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  apuStack_48[0] = (undefined *)(param_2 & 0xffffffff | param_3 << 0x20);
  lVar1 = param_1 + 0x498;
  FUN_109dac21c(lVar1,apuStack_48);
  if (*(long *)(lVar1 + 8) == 0) {
    apuStack_48[0] = &UNK_10f5fa737;
    uStack_28 = 0x103;
    FUN_109da80c4(param_1,apuStack_48);
    *(long *)(lVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 109da8378; end: 109da83b7;  */

void FUN_109da8378(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined *apuStack_48 [3];
  
  lVar1 = param_1;
  FUN_109da8270();
  apuStack_48[0] = (undefined *)(param_2 & 0xffffffff | (ulong)((int)lVar1 + (param_3 ^ 1)) << 0x20)
  ;
  lVar1 = param_1 + 0x498;
  FUN_109dac21c(lVar1,apuStack_48);
  if (*(long *)(lVar1 + 8) == 0) {
    apuStack_48[0] = &UNK_10f5fa737;
    FUN_109da80c4(param_1,apuStack_48);
    *(long *)(lVar1 + 8) = param_1;
  }
  return;
}



/* Entry: 109da83b8; end: 109da84a3;  */

undefined1  [16] FUN_109da83b8(long param_1,undefined ****param_2)

{
  undefined ****ppppuVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ****ppppuVar7;
  undefined1 **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uStack_141;
  undefined ***pppuStack_140;
  long **pplStack_138;
  undefined1 *puStack_130;
  undefined ***pppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long **pplStack_110;
  undefined **ppuStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [128];
  long lStack_28;
  
  ppuVar8 = &puStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = 0x80;
  uStack_b8 = 0;
  puStack_c0 = auStack_a8;
  func_0x000109d5975c();
  iVar2 = (int)param_1 + 0x478;
  FUN_109e03610();
  if ((iVar2 == -1) || ((long)iVar2 == (ulong)*(uint *)(param_1 + 0x480))) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x478) + (long)iVar2 * 8) + 8);
  }
  puVar3 = puStack_c0;
  if (puStack_c0 != auStack_a8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = uVar10;
    return auVar11;
  }
  ___stack_chk_fail();
  if (puStack_c0 != auStack_a8) {
    _free();
  }
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_100 = (undefined1 *)&pplStack_110;
  pcStack_c8 = FUN_109da84a4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4[0x808] = 1;
  ppuStack_108 = &PTR_DAT_110b58588;
  pplStack_110 = (long **)param_2;
  puStack_f8 = (undefined1 *)ppuVar8;
  pppuStack_f0 = &ppuStack_108;
  puStack_e0 = auStack_a8;
  puStack_d8 = puVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_109daaad4();
  pppuVar5 = pppuStack_f0;
  if (pppuStack_f0 == &ppuStack_108) {
    lVar9 = 0x20;
LAB_109da850c:
    (**(code **)((long)*pppuStack_f0 + lVar9))();
  }
  else if (pppuStack_f0 != (undefined ***)0x0) {
    lVar9 = 0x28;
    goto LAB_109da850c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = pppuVar5;
    return auVar12;
  }
  ___stack_chk_fail();
  if (pppuStack_f0 == &ppuStack_108) {
    lVar9 = 0x20;
  }
  else {
    if (pppuStack_f0 == (undefined ***)0x0) goto LAB_109da8574;
    lVar9 = 0x28;
  }
  (**(code **)((long)*pppuStack_f0 + lVar9))();
LAB_109da8574:
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  pcStack_118 = FUN_109da857c;
  if (*(char *)((long)pppuVar6 + (long)param_2 + -1) == ']') {
    uStack_141 = 0x5b;
    ppppuVar7 = &pppuStack_140;
    pppuStack_140 = pppuVar6;
    pplStack_138 = (long **)param_2;
    puStack_130 = auStack_a8;
    pppuStack_128 = pppuVar5;
    ppuStack_120 = &puStack_d0;
    FUN_109e03abc(ppppuVar7,&uStack_141,1,0xffffffffffffffff);
    ppppuVar1 = param_2;
    if (ppppuVar7 <= param_2) {
      ppppuVar1 = ppppuVar7;
    }
    if (ppppuVar7 != (undefined ****)0xffffffffffffffff) {
      param_2 = ppppuVar1;
    }
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = pppuVar6;
  return auVar13;
}



/* Entry: 109da84a4; end: 109da857b;  */

undefined1  [16] FUN_109da84a4(long param_1,undefined ****param_2,undefined8 param_3)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  undefined ****ppppuVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uStack_81;
  undefined ***pppuStack_80;
  long **pplStack_78;
  long **pplStack_50;
  undefined **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  puStack_40 = (undefined1 *)&pplStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x808) = 1;
  ppuStack_48 = &PTR_DAT_110b58588;
  pplStack_50 = (long **)param_2;
  uStack_38 = param_3;
  pppuStack_30 = &ppuStack_48;
  FUN_109daaad4(param_1,param_2,&ppuStack_48);
  pppuVar2 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
LAB_109da850c:
    (**(code **)((long)*pppuStack_30 + lVar4))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_109da850c;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = pppuVar2;
    return auVar5;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_109da8574;
    lVar4 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar4))();
LAB_109da8574:
  __Unwind_Resume();
  if (*(char *)((long)pppuVar2 + (long)param_2 + -1) == ']') {
    uStack_81 = 0x5b;
    ppppuVar3 = &pppuStack_80;
    pppuStack_80 = pppuVar2;
    pplStack_78 = (long **)param_2;
    FUN_109e03abc(ppppuVar3,&uStack_81,1,0xffffffffffffffff);
    ppppuVar1 = param_2;
    if (ppppuVar3 <= param_2) {
      ppppuVar1 = ppppuVar3;
    }
    if (ppppuVar3 != (undefined ****)0xffffffffffffffff) {
      param_2 = ppppuVar1;
    }
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pppuVar2;
  return auVar6;
}



/* Entry: 109da857c; end: 109da85eb;  */

undefined1  [16] FUN_109da857c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 uStack_31;
  long lStack_30;
  long *plStack_28;
  
  if (*(char *)((long)param_2 + param_1 + -1) == ']') {
    uStack_31 = 0x5b;
    plVar2 = &lStack_30;
    lStack_30 = param_1;
    plStack_28 = param_2;
    FUN_109e03abc(plVar2,&uStack_31,1,0xffffffffffffffff);
    plVar1 = param_2;
    if (plVar2 <= param_2) {
      plVar1 = plVar2;
    }
    if (plVar2 != (long *)0xffffffffffffffff) {
      param_2 = plVar1;
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109da85ec; end: 109da886f;  */

undefined8
FUN_109da85ec(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,long *param_9)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_a8;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 ****ppppuStack_78;
  long lStack_70;
  char cStack_61;
  
  uStack_b8 = 0x2c;
  uStack_a8 = 0x705;
  aplStack_a0[0] = &lStack_c8;
  uStack_80 = 0x502;
  lStack_c8 = param_2;
  uStack_c0 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_5;
  FUN_109e04498(&ppppuStack_78,aplStack_a0);
  pppppuVar2 = (undefined8 *****)ppppuStack_78;
  if (-1 < (long)cStack_61) {
    pppppuVar2 = &ppppuStack_78;
  }
  lVar3 = lStack_70;
  if (-1 < cStack_61) {
    lVar3 = (long)cStack_61;
  }
  plVar1 = (long *)(param_1 + 0x6d8);
  plVar5 = plVar1;
  func_0x000107c2b020(plVar1,pppppuVar2,lVar3);
  plVar7 = (long *)(*plVar1 + ((ulong)plVar5 & 0xffffffff) * 8);
  lVar9 = *plVar7;
  if (lVar9 == -8) {
    *(int *)(param_1 + 0x6e8) = *(int *)(param_1 + 0x6e8) + -1;
  }
  else if (lVar9 != 0) {
    while ((lVar9 == 0 || (lVar9 == -8))) {
      plVar7 = plVar7 + 1;
      lVar9 = *plVar7;
    }
    bVar4 = false;
    goto LAB_109da8744;
  }
  plVar6 = (long *)(lVar3 + 0x11);
  __ZnwmSt11align_val_t(plVar6,8);
  if (lVar3 != 0) {
    _memcpy(plVar6 + 2,pppppuVar2,lVar3);
  }
  *(undefined1 *)((long)(plVar6 + 2) + lVar3) = 0;
  *plVar6 = lVar3;
  plVar6[1] = 0;
  *plVar7 = (long)plVar6;
  *(int *)(param_1 + 0x6e4) = *(int *)(param_1 + 0x6e4) + 1;
  plVar7 = plVar1;
  func_0x000107c2b028(plVar1,plVar5);
  for (plVar7 = (long *)(*plVar1 + ((ulong)plVar7 & 0xffffffff) * 8); *plVar7 == 0 || *plVar7 == -8;
      plVar7 = plVar7 + 1) {
  }
  bVar4 = true;
LAB_109da8744:
  if (cStack_61 < '\0') {
    __ZdlPv(ppppuStack_78);
  }
  if (bVar4) {
    if (param_9 != (long *)0x0) {
      uVar11 = 1;
      if ((char)*param_9 != '\0') {
        aplStack_a0[0] = param_9;
        uVar11 = 3;
      }
      uStack_80 = CONCAT11(1,uVar11);
      FUN_109da7f80(param_1,aplStack_a0,0);
    }
    puVar8 = (undefined8 *)(param_1 + 0x238);
    FUN_109d34148(puVar8,0xf8,3);
    func_0x000109ddbef0();
    uVar10 = 0;
    *puVar8 = &PTR_FUN_110b59218;
    *(undefined4 *)(puVar8 + 0x1e) = param_6;
    *(undefined4 *)((long)puVar8 + 0xf4) = param_7;
    do {
      if (uVar10 < param_3) {
        uVar11 = *(undefined1 *)(param_2 + uVar10);
      }
      else {
        uVar11 = 0;
      }
      *(undefined1 *)((long)puVar8 + uVar10 + 0xe0) = uVar11;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x10);
    *(undefined8 **)(*plVar7 + 8) = puVar8;
  }
  return *(undefined8 *)(*plVar7 + 8);
}



/* Entry: 109da8870; end: 109da894b;  */

void FUN_109da8870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_61;
  
  if (1 < *(byte *)(param_6 + 0x20)) {
    FUN_109e04498(&uStack_78,param_6);
    if (-1 < cStack_61) {
      lStack_70 = (long)cStack_61;
    }
    if ((long)cStack_61 < 0) {
      __ZdlPv(uStack_78);
    }
    if (lStack_70 != 0) {
      uVar1 = param_1;
      FUN_109da7538(param_1,param_6);
      goto LAB_109da8908;
    }
  }
  uVar1 = 0;
LAB_109da8908:
  FUN_109da894c(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8,param_9);
  return;
}



/* Entry: 109da894c; end: 109da9573;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109da894c(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined4 param_5,
                    byte *param_6,int param_7,undefined8 param_8,byte *param_9)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  long *plVar13;
  long *plVar14;
  long *******ppppppplVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 uStack_189;
  undefined8 *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *******ppppppplStack_160;
  long *plStack_158;
  ulong uStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  int iStack_128;
  undefined4 uStack_124;
  byte *pbStack_120;
  byte *pbStack_118;
  uint uStack_110;
  uint uStack_10c;
  long *******ppppppplStack_108;
  ulong uStack_100;
  char cStack_f1;
  long *******ppppppplStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long *******ppppppplStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  if (param_6 == (byte *)0x0) {
    uVar29 = 0;
    puVar28 = (undefined8 *)&UNK_10f5fa6c9;
  }
  else if ((*param_6 >> 2 & 1) == 0) {
    puVar28 = (undefined8 *)0x0;
    uVar29 = 0;
  }
  else {
    puVar28 = *(undefined8 **)(param_6 + -8) + 2;
    uVar29 = **(undefined8 **)(param_6 + -8);
  }
  uStack_124 = param_5;
  pbStack_120 = param_6;
  uStack_110 = param_3;
  uStack_10c = param_4;
  FUN_109e04498(&ppppppplStack_108,param_2);
  ppppppplVar8 = ppppppplStack_108;
  if (-1 < (long)cStack_f1) {
    ppppppplVar8 = (long *******)&ppppppplStack_108;
  }
  uVar17 = uStack_100;
  if (-1 < cStack_f1) {
    uVar17 = (long)cStack_f1;
  }
  pbStack_118 = param_9;
  if (param_9 == (byte *)0x0) {
    uVar26 = 0;
    puVar23 = (undefined8 *)&UNK_10f5fa6c9;
  }
  else if ((*param_9 >> 2 & 1) == 0) {
    puVar23 = (undefined8 *)0x0;
    uVar26 = 0;
  }
  else {
    puVar23 = *(undefined8 **)(param_9 + -8) + 2;
    uVar26 = **(undefined8 **)(param_9 + -8);
  }
  if (0x7ffffffffffffff7 < uVar17) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109da9504);
    (*pcVar5)();
  }
  iStack_128 = param_7;
  if (uVar17 < 0x17) {
    uStack_e0 = CONCAT17((char)uVar17,(undefined7)uStack_e0);
    ppppppplVar7 = (long *******)&ppppppplStack_f0;
    if (uVar17 != 0) goto LAB_109da8a6c;
  }
  else {
    ppppppplVar15 = (long *******)0x19;
    if ((uVar17 | 7) != 0x17) {
      ppppppplVar15 = (long *******)((uVar17 | 7) + 1);
    }
    ppppppplVar7 = ppppppplVar15;
    __Znwm();
    uStack_e0 = (ulong)ppppppplVar15 | 0x8000000000000000;
    ppppppplStack_f0 = ppppppplVar7;
    uStack_e8 = uVar17;
LAB_109da8a6c:
    _memmove(ppppppplVar7,ppppppplVar8,uVar17);
  }
  uVar21 = uStack_10c;
  *(undefined1 *)((long)ppppppplVar7 + uVar17) = 0;
  uStack_a0 = uStack_e0;
  uStack_a8 = uStack_e8;
  ppppppplStack_b0 = ppppppplStack_f0;
  uVar20 = (undefined4)param_8;
  ppppppplStack_f0 = (long *******)0x0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_70 = 0;
  puVar22 = (undefined8 *)(param_1 + 0x6f8);
  puVar16 = *(undefined8 **)(param_1 + 0x6f8);
  uStack_b8 = uVar20;
  uStack_78 = uVar20;
  puVar24 = puVar22;
  puStack_c8 = puVar23;
  puStack_88 = puVar23;
  uStack_c0 = uVar26;
  uStack_80 = uVar26;
  uStack_d8 = puVar28;
  puStack_98 = puVar28;
  uStack_d0 = uVar29;
  uStack_90 = uVar29;
  while (puVar16 != (undefined8 *)0x0) {
    while( true ) {
      puVar24 = puVar16;
      ppppppplVar8 = (long *******)&ppppppplStack_b0;
      FUN_109dac550(ppppppplVar8,puVar24 + 4);
      if ((int)ppppppplVar8 == 0) break;
      puVar16 = (undefined8 *)*puVar24;
      puVar22 = puVar24;
      if ((undefined8 *)*puVar24 == (undefined8 *)0x0) goto LAB_109da8b1c;
    }
    puVar28 = puVar24 + 4;
    FUN_109dac550(puVar28,&ppppppplStack_b0);
    if ((int)puVar28 == 0) {
      puVar28 = (undefined8 *)*puVar22;
      if (puVar28 != (undefined8 *)0x0) {
        bVar3 = false;
        goto LAB_109da8b9c;
      }
      break;
    }
    puVar22 = puVar24 + 1;
    puVar16 = (undefined8 *)*puVar22;
  }
LAB_109da8b1c:
  puVar28 = (undefined8 *)0x68;
  __Znwm();
  puVar28[5] = uStack_a8;
  puVar28[4] = ppppppplStack_b0;
  puVar28[6] = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppppppplStack_b0 = (long *******)0x0;
  puVar28[8] = uStack_90;
  puVar28[7] = puStack_98;
  puVar28[10] = uStack_80;
  puVar28[9] = puStack_88;
  *(undefined4 *)(puVar28 + 0xb) = uStack_78;
  puVar28[0xc] = 0;
  *puVar28 = 0;
  puVar28[1] = 0;
  puVar28[2] = puVar24;
  *puVar22 = puVar28;
  puVar23 = puVar28;
  if (**(long **)(param_1 + 0x6f0) != 0) {
    *(long *)(param_1 + 0x6f0) = **(long **)(param_1 + 0x6f0);
    puVar23 = (undefined8 *)*puVar22;
  }
  func_0x000107c27d40(*(undefined8 *)(param_1 + 0x6f8),puVar23);
  *(long *)(param_1 + 0x700) = *(long *)(param_1 + 0x700) + 1;
  bVar3 = true;
LAB_109da8b9c:
  if ((long)uStack_a0 < 0) {
    __ZdlPv(ppppppplStack_b0);
  }
  if ((long)uStack_e0 < 0) {
    __ZdlPv(ppppppplStack_f0);
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(ppppppplStack_108);
  }
  if (!bVar3) {
    return (long *)puVar28[0xc];
  }
  cVar2 = *(char *)((long)puVar28 + 0x37);
  ppppppplVar8 = (long *******)puVar28[4];
  if (-1 < (long)cVar2) {
    ppppppplVar8 = (long *******)(puVar28 + 4);
  }
  uVar17 = puVar28[5];
  if (-1 < cVar2) {
    uVar17 = (long)cVar2;
  }
  if ((uVar21 >> 0x1d & 1) != 0) {
    lStack_130 = 3;
    goto LAB_109da8c70;
  }
  if ((uVar21 >> 2 & 1) != 0) goto LAB_109da8c68;
  if ((uVar21 & 1) == 0) goto LAB_109da8bf4;
  if ((uVar21 >> 10 & 1) != 0) {
    lStack_130 = 0xc;
    if ((uStack_110 & 8) == 0) {
      lStack_130 = 0xd;
    }
    goto LAB_109da8c70;
  }
  if (uVar17 == 4) {
    if (*(int *)ppppppplVar8 == 0x7373622e) goto LAB_109da91d0;
LAB_109da8c68:
    lStack_130 = 2;
  }
  else {
    if (uVar17 < 5) goto LAB_109da8c68;
    if (*(int *)ppppppplVar8 == 0x7373622e && *(char *)((long)ppppppplVar8 + 4) == '.') {
LAB_109da91d0:
      lStack_130 = 0xf;
      goto LAB_109da8c70;
    }
    if (uVar17 < 0x10) {
      if (uVar17 == 0xc) {
        if (*ppppppplVar8 == (long ******)0x65722e617461642e &&
            *(int *)(ppppppplVar8 + 1) == 0x6f722e6c) {
          lStack_130 = 0x14;
          goto LAB_109da8c70;
        }
        goto LAB_109da9228;
      }
      if (uVar17 == 6) {
        if (*(int *)ppppppplVar8 != 0x7461642e || *(short *)((long)ppppppplVar8 + 4) != 0x3161)
        goto LAB_109da9228;
      }
      else {
        if (uVar17 != 5) goto LAB_109da9228;
        if (*(int *)ppppppplVar8 != 0x7461642e || *(char *)((long)ppppppplVar8 + 4) != 'a') {
          if (*(int *)ppppppplVar8 != 0x7362742e || *(char *)((long)ppppppplVar8 + 4) != 's')
          goto LAB_109da8c68;
          lStack_130 = 0xc;
          goto LAB_109da8c70;
        }
      }
LAB_109da92a0:
      lStack_130 = 0x13;
    }
    else {
      if ((*ppppppplVar8 == (long ******)0x6e696c2e756e672e &&
           ppppppplVar8[1] == (long ******)0x2e622e65636e6f6b) ||
         ((uVar17 != 0x10 &&
          ((*ppppppplVar8 == (long ******)0x696c2e6d766c6c2e &&
           ppppppplVar8[1] == (long ******)0x622e65636e6f6b6e) && *(char *)(ppppppplVar8 + 2) == '.'
          )))) goto LAB_109da91d0;
LAB_109da9228:
      if (*(int *)ppppppplVar8 == 0x7461642e && *(short *)((long)ppppppplVar8 + 4) == 0x2e61)
      goto LAB_109da92a0;
      if (uVar17 == 8) {
        if (*ppppppplVar8 != (long ******)0x31617461646f722e) {
LAB_109da92d0:
          if (*ppppppplVar8 != (long ******)0x2e617461646f722e) goto LAB_109da92ec;
        }
LAB_109da8bf4:
        lStack_130 = 4;
      }
      else {
        if (uVar17 == 7) {
          if (*(int *)ppppppplVar8 == 0x646f722e && *(int *)((long)ppppppplVar8 + 3) == 0x61746164)
          goto LAB_109da8bf4;
          if (*(int *)ppppppplVar8 != 0x7362742e || *(short *)((long)ppppppplVar8 + 4) != 0x2e73) {
LAB_109da9340:
            if (*(int *)ppppppplVar8 != 0x6164742e || *(int *)((long)ppppppplVar8 + 3) != 0x2e617461
               ) goto LAB_109da9364;
          }
        }
        else {
          if (7 < uVar17) goto LAB_109da92d0;
LAB_109da92ec:
          if (*(int *)ppppppplVar8 != 0x7362742e || *(short *)((long)ppppppplVar8 + 4) != 0x2e73) {
            if (uVar17 < 0x11) {
              if (uVar17 != 6) goto LAB_109da9340;
              if (*(int *)ppppppplVar8 != 0x6164742e || *(short *)((long)ppppppplVar8 + 4) != 0x6174
                 ) goto LAB_109da8c68;
            }
            else if ((*ppppppplVar8 != (long ******)0x6e696c2e756e672e ||
                     ppppppplVar8[1] != (long ******)0x62742e65636e6f6b) ||
                     *(char *)(ppppppplVar8 + 2) != '.') {
              if (uVar17 == 0x11) {
                if ((*(int *)ppppppplVar8 != 0x6164742e ||
                     *(int *)((long)ppppppplVar8 + 3) != 0x2e617461) &&
                   ((*ppppppplVar8 != (long ******)0x6e696c2e756e672e ||
                    ppppppplVar8[1] != (long ******)0x64742e65636e6f6b) ||
                    *(char *)(ppppppplVar8 + 2) != '.')) {
LAB_109da9364:
                  lStack_130 = 2;
                  if (*(int *)ppppppplVar8 == 0x6265642e &&
                      *(int *)((long)ppppppplVar8 + 3) == 0x5f677562) {
                    lStack_130 = 0;
                  }
                  goto LAB_109da8c70;
                }
              }
              else {
                uVar21 = uStack_10c;
                if ((((*ppppppplVar8 == (long ******)0x696c2e6d766c6c2e &&
                      ppppppplVar8[1] == (long ******)0x742e65636e6f6b6e) &&
                      *(short *)(ppppppplVar8 + 2) == 0x2e62) ||
                    (*(int *)ppppppplVar8 == 0x6164742e &&
                     *(int *)((long)ppppppplVar8 + 3) == 0x2e617461)) ||
                   ((*ppppppplVar8 == (long ******)0x6e696c2e756e672e &&
                    ppppppplVar8[1] == (long ******)0x64742e65636e6f6b) &&
                    *(char *)(ppppppplVar8 + 2) == '.')) {
                  lStack_130 = 0xd;
                  goto LAB_109da8c70;
                }
                if ((*ppppppplVar8 != (long ******)0x696c2e6d766c6c2e ||
                    ppppppplVar8[1] != (long ******)0x742e65636e6f6b6e) ||
                    *(short *)(ppppppplVar8 + 2) != 0x2e64) goto LAB_109da9364;
              }
            }
          }
        }
        lStack_130 = 0xd;
      }
    }
  }
LAB_109da8c70:
  plVar9 = (long *)(param_1 + 0x478);
  FUN_109dabd04(plVar9,ppppppplVar8,uVar17);
  lVar25 = *plVar9;
  lVar10 = *(long *)(lVar25 + 8);
  if (lVar10 == 0) {
LAB_109da8cfc:
    puVar12 = (ulong *)(param_1 + 0x4b0);
    FUN_109dabe58(puVar12,ppppppplVar8,uVar17,0);
    uVar17 = *puVar12;
    uVar29 = 0x30;
    if (uVar17 == 0) {
      uVar29 = 0x28;
    }
    lVar10 = param_1 + 0xb8;
    FUN_109d34148(lVar10,uVar29,3);
    puVar27 = (ulong *)(lVar10 + (ulong)(uVar17 != 0) * 8);
    uVar18 = *puVar12;
    *(undefined4 *)(puVar27 + 2) = 0;
    puVar27[3] = 0;
    uVar17 = 0;
    if (uVar18 != 0) {
      uVar17 = 4;
    }
    *puVar27 = uVar17;
    puVar27[1] = puVar27[1] & 0xffff0000fffc0000 | 0x80;
    if (uVar18 != 0) {
      puVar27[-1] = uVar18;
    }
    puVar27[4] = 0;
    if (*(long *)(lVar25 + 8) == 0) {
      *(ulong **)(lVar25 + 8) = puVar27;
    }
  }
  else {
    func_0x000109da4494(lVar10,1);
    if (lVar10 == 0) {
LAB_109da8ce8:
      lVar11 = *(long *)(lVar25 + 8);
    }
    else {
      iVar6 = (int)*(undefined8 *)(lVar25 + 8);
      func_0x000109da4450();
      if (iVar6 == 0) {
LAB_109da8cc4:
        ppppppplStack_b0 = (long *******)&UNK_10f5fa772;
        uStack_90 = CONCAT62(uStack_90._2_6_,0x103);
        FUN_109da84a4(param_1,0,&ppppppplStack_b0);
        goto LAB_109da8ce8;
      }
      lVar10 = *(long *)(lVar25 + 8);
      func_0x000109da4494(lVar10,1);
      lVar11 = *(long *)(lVar25 + 8);
      if (*(long *)(*(long *)(lVar10 + 0x10) + 8) != lVar11) goto LAB_109da8cc4;
    }
    if ((lVar11 == 0) || (func_0x000109da4494(lVar11,1), lVar11 != 0)) goto LAB_109da8cfc;
    puVar27 = *(ulong **)(lVar25 + 8);
  }
  puVar27[1] = puVar27[1] & 0xffffffe3ffffffff | 0x100300000000;
  plVar9 = (long *)(param_1 + 0x1d8);
  FUN_109d34148(plVar9,0x100,3);
  ppppppplVar15 = (long *******)0x1;
  plVar13 = plVar9;
  lVar10 = lStack_130;
  puVar12 = puVar27;
  func_0x000109ddbef0();
  *plVar13 = (long)&PTR_FUN_110b591d0;
  *(uint *)(plVar13 + 0x1c) = uStack_110;
  *(uint *)((long)plVar13 + 0xe4) = uVar21;
  *(undefined4 *)(plVar13 + 0x1d) = uVar20;
  *(undefined4 *)((long)plVar13 + 0xec) = uStack_124;
  uVar17 = 4;
  if (iStack_128 == 0) {
    uVar17 = 0;
  }
  plVar13[0x1e] = uVar17 | (ulong)pbStack_120 & 0xfffffffffffffffb;
  plVar13[0x1f] = (long)pbStack_118;
  uVar17 = (ulong)pbStack_120 & 0xfffffffffffffff8;
  if (uVar17 != 0) {
    *(ulong *)(uVar17 + 8) = *(ulong *)(uVar17 + 8) | 0x40000000000;
  }
  plVar13 = (long *)0xe8;
  __Znwm();
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  plVar13[4] = -1;
  plVar13[5] = 0;
  *(undefined1 *)(plVar13 + 6) = 1;
  *(undefined4 *)((long)plVar13 + 0x31) = 0;
  plVar13[7] = 0;
  plVar13[8] = (long)(plVar13 + 0xb);
  plVar13[10] = 0x20;
  plVar13[9] = 0;
  plVar13[0xf] = (long)(plVar13 + 0x11);
  plVar13[0x10] = 0x400000000;
  plVar19 = (long *)plVar9[0xe];
  lVar11 = *plVar19;
  *plVar13 = lVar11;
  plVar13[1] = (long)plVar19;
  *(long **)(lVar11 + 8) = plVar13;
  *plVar19 = (long)plVar13;
  plVar13[2] = (long)plVar9;
  *puVar27 = *puVar27 & 7 | (ulong)plVar13;
  puVar28[0xc] = plVar9;
  ppppppplStack_108 = (long *******)plVar9[0x19];
  uStack_100 = plVar9[0x1a];
  uVar21 = *(uint *)((long)plVar9 + 0xe4);
  uVar1 = *(uint *)(plVar9 + 0x1d);
  uVar20 = *(undefined4 *)((long)plVar9 + 0xec);
  if (uVar1 == 0xffffffff) {
    plVar13 = (long *)(param_1 + 0x840);
    ppppppplVar15 = (long *******)&ppppppplStack_108;
    ppppppplVar8 = (long *******)&ppppppplStack_f0;
    func_0x000109d37e54(&ppppppplStack_b0,plVar13,ppppppplVar15,ppppppplVar8);
  }
  if (((uVar21 >> 4 & 1) == 0) &&
     ((ppppppplStack_b0 = ppppppplStack_108, uStack_a8 = uStack_100, uStack_100 < 0xb ||
      ((*ppppppplStack_108 != (long ******)0x2e617461646f722e ||
        *(long *)((long)ppppppplStack_108 + 3) != 0x7274732e61746164 &&
       (*ppppppplStack_108 != (long ******)0x2e617461646f722e ||
        *(long *)((long)ppppppplStack_108 + 3) != 0x7473632e61746164)))))) {
    plVar13 = (long *)(param_1 + 0x840);
    ppppppplVar15 = (long *******)&ppppppplStack_b0;
    ppppppplVar8 = (long *******)&ppppppplStack_f0;
    FUN_109d37ed4(plVar13,ppppppplVar15,ppppppplVar8);
    if ((int)plVar13 == 0) {
      return plVar9;
    }
  }
  uVar17 = uStack_100;
  ppppppplVar7 = ppppppplStack_108;
  if (0x7ffffffffffffff7 < uStack_100) {
    func_0x000104c4f6b8();
    if ((long)uStack_a0 < 0) {
      __ZdlPv(ppppppplStack_b0);
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(ppppppplStack_f0);
    }
    plVar19 = plVar13;
    __Unwind_Resume();
    pcStack_138 = FUN_109da9574;
    uStack_180 = (ulong)uVar21;
    uStack_178 = (ulong)uVar1;
    uStack_170 = param_8;
    lStack_168 = lVar25;
    ppppppplStack_160 = ppppppplVar7;
    plStack_158 = plVar9;
    uStack_150 = uVar17;
    plStack_148 = plVar13;
    puStack_140 = &stack0xfffffffffffffff0;
    if (ppppppplVar15 == (long *******)0x0) {
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
    }
    else {
      func_0x000104c54c8c(&uStack_1a8,ppppppplVar15,ppppppplVar8);
    }
    puStack_188 = &uStack_1a8;
    plVar9 = plVar19 + 0xe4;
    FUN_109dac708(plVar9,&uStack_1a8,&UNK_10dd5b8f9,&puStack_188,&uStack_189);
    if (lStack_198 < 0) {
      __ZdlPv(uStack_1a8);
    }
    plVar13 = (long *)plVar9[7];
    if (plVar13 == (long *)0x0) {
      plVar13 = plVar19 + 0x53;
      FUN_109d34148(plVar13,0xf0,3);
      func_0x000109ddbef0();
      *plVar13 = (long)&PTR_DAT_110b58448;
      plVar13[0x1c] = lVar10;
      plVar13[0x1d] = (long)puVar12;
      plVar9[7] = (long)plVar13;
    }
    return plVar13;
  }
  if (uStack_100 < 0x17) {
    uStack_e0 = CONCAT17((char)uStack_100,(undefined7)uStack_e0);
    ppppppplVar15 = (long *******)&ppppppplStack_f0;
    if (uStack_100 == 0) goto LAB_109da8fac;
  }
  else {
    ppppppplVar8 = (long *******)0x19;
    if ((uStack_100 | 7) != 0x17) {
      ppppppplVar8 = (long *******)((uStack_100 | 7) + 1);
    }
    ppppppplVar15 = ppppppplVar8;
    __Znwm();
    uStack_e0 = (ulong)ppppppplVar8 | 0x8000000000000000;
    ppppppplStack_f0 = ppppppplVar15;
    uStack_e8 = uVar17;
  }
  _memmove(ppppppplVar15,ppppppplVar7,uVar17);
LAB_109da8fac:
  *(undefined1 *)((long)ppppppplVar15 + uVar17) = 0;
  uStack_a0 = uStack_e0;
  uStack_a8 = uStack_e8;
  ppppppplStack_b0 = ppppppplStack_f0;
  uStack_d8 = (undefined8 *)CONCAT44(uVar20,uVar21);
  ppppppplStack_f0 = (long *******)0x0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar1);
  plVar13 = (long *)(param_1 + 0x830);
  plVar19 = plVar13;
  plVar4 = *(long **)(param_1 + 0x830);
  puStack_98 = uStack_d8;
joined_r0x000109da8fd8:
  do {
    if (plVar4 == (long *)0x0) {
LAB_109da9024:
      puVar28 = (undefined8 *)0x48;
      __Znwm();
      uVar17 = uStack_a0;
      puVar28[5] = uStack_a8;
      puVar28[4] = ppppppplStack_b0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      ppppppplStack_b0 = (long *******)0x0;
      puVar28[6] = uVar17;
      puVar28[7] = puStack_98;
      *(undefined4 *)(puVar28 + 8) = (undefined4)uStack_90;
      *puVar28 = 0;
      puVar28[1] = 0;
      puVar28[2] = plVar19;
      *plVar13 = (long)puVar28;
      if (**(long **)(param_1 + 0x828) != 0) {
        *(long *)(param_1 + 0x828) = **(long **)(param_1 + 0x828);
        puVar28 = (undefined8 *)*plVar13;
      }
      func_0x000107c27d40(*(undefined8 *)(param_1 + 0x830),puVar28);
      *(long *)(param_1 + 0x838) = *(long *)(param_1 + 0x838) + 1;
LAB_109da9084:
      if ((long)uStack_a0 < 0) {
        __ZdlPv(ppppppplStack_b0);
      }
      if ((long)uStack_e0 < 0) {
        __ZdlPv(ppppppplStack_f0);
      }
      return plVar9;
    }
    ppppppplVar8 = (long *******)&ppppppplStack_b0;
    FUN_109dac65c(ppppppplVar8,(long *)((long)plVar4 + 0x20));
    plVar19 = plVar4;
    if ((int)ppppppplVar8 != 0) {
      plVar13 = plVar4;
      plVar4 = (long *)*plVar4;
      goto joined_r0x000109da8fd8;
    }
    plVar14 = (long *)((long)plVar4 + 0x20);
    FUN_109dac65c(plVar14,&ppppppplStack_b0);
    if ((int)plVar14 == 0) {
      if (*plVar13 != 0) goto LAB_109da9084;
      goto LAB_109da9024;
    }
    plVar13 = (long *)((long)plVar4 + 8);
    plVar4 = (long *)*plVar13;
  } while( true );
}



/* Entry: 109da9574; end: 109da967b;  */

void FUN_109da9574(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    lStack_68 = 0;
  }
  else {
    func_0x000104c54c8c(&uStack_78,param_2,param_3);
  }
  puStack_58 = &uStack_78;
  lVar1 = param_1 + 0x720;
  FUN_109dac708(lVar1,&uStack_78,&UNK_10dd5b8f9,&puStack_58,&uStack_59);
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if (*(long *)(lVar1 + 0x38) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x298);
    FUN_109d34148(puVar2,0xf0,3);
    func_0x000109ddbef0();
    *puVar2 = &PTR_DAT_110b58448;
    puVar2[0x1c] = param_5;
    puVar2[0x1d] = param_6;
    *(undefined8 **)(lVar1 + 0x38) = puVar2;
  }
  return;
}



/* Entry: 109da967c; end: 109da99f7;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_109da967c(byte *param_1,char *******param_2,ulong param_3,undefined8 param_4,long param_5
                    ,char *******param_6,ulong param_7,undefined4 param_8,undefined4 param_9,
                    undefined4 param_10,char *******param_11)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  char *******pppppppcVar15;
  byte *pbVar16;
  undefined8 uStack_148;
  long lStack_140;
  char cStack_131;
  char *******pppppppcStack_130;
  char *******pppppppcStack_128;
  ulong uStack_120;
  byte *pbStack_118;
  long lStack_110;
  char *******pppppppcStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  char *******pppppppcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *******pppppppcStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  char *******pppppppcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar9 = param_3;
  uVar10 = param_4;
  lVar11 = param_5;
  if (param_7 == 0) {
    uVar13 = 0;
    pbVar3 = (byte *)0x0;
    pppppppcVar5 = param_2;
    pppppppcVar15 = param_6;
  }
  else {
    uStack_b0 = CONCAT62(uStack_b0._2_6_,0x105);
    pppppppcVar5 = (char *******)&pppppppcStack_d0;
    pbVar3 = param_1;
    pppppppcStack_d0 = param_6;
    uStack_c8 = param_7;
    FUN_109da7538(param_1,pppppppcVar5);
    if ((*pbVar3 >> 2 & 1) == 0) {
      uVar13 = 0;
      pppppppcVar15 = (char *******)0x0;
    }
    else {
      uVar13 = **(undefined8 **)(pbVar3 + -8);
      pppppppcVar15 = (char *******)(*(undefined8 **)(pbVar3 + -8) + 2);
    }
  }
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    if ((long)uStack_80 < 0) {
      __ZdlPv(pppppppcStack_90);
    }
    __Unwind_Resume();
    pppppppcStack_130 = pppppppcVar15;
    pppppppcStack_128 = param_2;
    uStack_120 = param_3;
    pbStack_118 = param_1;
    lStack_110 = param_5;
    if (1 < *(byte *)(lVar11 + 0x20)) {
      FUN_109e04498(&uStack_148,lVar11);
      if (-1 < cStack_131) {
        lStack_140 = (long)cStack_131;
      }
      if ((long)cStack_131 < 0) {
        __ZdlPv(uStack_148);
      }
      if (lStack_140 != 0) {
        pbVar14 = pbVar3;
        FUN_109da7538(pbVar3,lVar11);
        pbVar14[0x2a] = 1;
        goto LAB_109da9a88;
      }
    }
    pbVar14 = (byte *)0x0;
LAB_109da9a88:
    FUN_109da9abc(pbVar3,pppppppcVar5,uVar9 & 0xffffffff,uVar10,pbVar14,param_6);
    return pbVar3;
  }
  if (param_3 < 0x17) {
    uStack_80 = CONCAT17((char)param_3,(undefined7)uStack_80);
    pppppppcVar4 = (char *******)&pppppppcStack_90;
    if (param_3 == 0) goto LAB_109da9798;
  }
  else {
    pppppppcVar5 = (char *******)0x19;
    if ((param_3 | 7) != 0x17) {
      pppppppcVar5 = (char *******)((param_3 | 7) + 1);
    }
    pppppppcVar4 = pppppppcVar5;
    __Znwm();
    uStack_80 = (ulong)pppppppcVar5 | 0x8000000000000000;
    pppppppcStack_90 = pppppppcVar4;
    uStack_88 = param_3;
  }
  _memmove(pppppppcVar4,param_2,param_3);
LAB_109da9798:
  *(char *)((long)pppppppcVar4 + param_3) = '\0';
  uStack_64 = param_9;
  pppppppcStack_78 = pppppppcVar15;
  uStack_70 = uVar13;
  uStack_68 = param_8;
  if ((long)uStack_80 < 0) {
    func_0x000107c3192c(&pppppppcStack_d0,pppppppcStack_90,uStack_88);
  }
  else {
    uStack_c8 = uStack_88;
    pppppppcStack_d0 = pppppppcStack_90;
    uStack_c0 = uStack_80;
  }
  uStack_a8 = CONCAT44(uStack_64,uStack_68);
  uStack_a0 = 0;
  pbVar14 = param_1 + 0x710;
  pbVar16 = pbVar14;
  pbVar2 = *(byte **)(param_1 + 0x710);
  uStack_b0 = uStack_70;
  pppppppcStack_b8 = pppppppcStack_78;
joined_r0x000109da97e8:
  do {
    if (pbVar2 == (byte *)0x0) {
LAB_109da9834:
      puVar7 = (undefined8 *)0x58;
      __Znwm();
      puVar7[5] = uStack_c8;
      puVar7[4] = pppppppcStack_d0;
      puVar7[6] = uStack_c0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      pppppppcStack_d0 = (char *******)0x0;
      puVar7[8] = uStack_b0;
      puVar7[7] = pppppppcStack_b8;
      puVar7[9] = uStack_a8;
      puVar7[10] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = pbVar16;
      *(undefined8 **)pbVar14 = puVar7;
      puVar8 = puVar7;
      if (**(long **)(param_1 + 0x708) != 0) {
        *(long *)(param_1 + 0x708) = **(long **)(param_1 + 0x708);
        puVar8 = *(undefined8 **)pbVar14;
      }
      func_0x000107c27d40(*(undefined8 *)(param_1 + 0x710),puVar8);
      *(long *)(param_1 + 0x718) = *(long *)(param_1 + 0x718) + 1;
      bVar1 = true;
LAB_109da98a8:
      if ((long)uStack_c0 < 0) {
        __ZdlPv(pppppppcStack_d0);
      }
      if (bVar1) {
        if (param_11 != (char *******)0x0) {
          uVar12 = 1;
          uStack_b0._2_6_ = (undefined6)((ulong)uStack_b0 >> 0x10);
          uStack_b0 = CONCAT62(uStack_b0._2_6_,0x100);
          if (*(char *)param_11 != '\0') {
            pppppppcStack_d0 = param_11;
            uVar12 = 3;
          }
          uStack_b0 = CONCAT71(uStack_b0._1_7_,uVar12);
          FUN_109da7f80(param_1,&pppppppcStack_d0,0);
        }
        param_1 = param_1 + 0x118;
        FUN_109d34148(param_1,0xf8,3);
        func_0x000109ddbef0();
        *(undefined ***)param_1 = &PTR_FUN_110b59140;
        *(int *)(param_1 + 0xe0) = (int)param_4;
        param_1[0xe4] = 0xff;
        param_1[0xe5] = 0xff;
        param_1[0xe6] = 0xff;
        param_1[0xe7] = 0xff;
        *(byte **)(param_1 + 0xe8) = pbVar3;
        *(undefined4 *)(param_1 + 0xf0) = param_8;
        puVar7[10] = param_1;
      }
      else {
        param_1 = (byte *)puVar7[10];
      }
      if ((long)uStack_80 < 0) {
        __ZdlPv(pppppppcStack_90);
      }
      return param_1;
    }
    pppppppcVar5 = (char *******)&pppppppcStack_d0;
    FUN_109dac878(pppppppcVar5,pbVar2 + 0x20);
    pbVar16 = pbVar2;
    if ((int)pppppppcVar5 != 0) {
      pbVar14 = pbVar2;
      pbVar2 = *(byte **)pbVar2;
      goto joined_r0x000109da97e8;
    }
    pbVar6 = pbVar2 + 0x20;
    FUN_109dac878(pbVar6,&pppppppcStack_d0);
    if ((int)pbVar6 == 0) {
      puVar7 = *(undefined8 **)pbVar14;
      if (puVar7 != (undefined8 *)0x0) {
        bVar1 = false;
        goto LAB_109da98a8;
      }
      goto LAB_109da9834;
    }
    pbVar14 = pbVar2 + 8;
    pbVar2 = *(byte **)pbVar14;
  } while( true );
}



/* Entry: 109da99f8; end: 109da9abb;  */

void FUN_109da99f8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uStack_68;
  long lStack_60;
  char cStack_51;
  
  if (1 < *(byte *)(param_5 + 0x20)) {
    FUN_109e04498(&uStack_68,param_5);
    if (-1 < cStack_51) {
      lStack_60 = (long)cStack_51;
    }
    if ((long)cStack_51 < 0) {
      __ZdlPv(uStack_68);
    }
    if (lStack_60 != 0) {
      lVar1 = param_1;
      FUN_109da7538(param_1,param_5);
      *(undefined1 *)(lVar1 + 0x2a) = 1;
      goto LAB_109da9a88;
    }
  }
  lVar1 = 0;
LAB_109da9a88:
  FUN_109da9abc(param_1,param_2,param_3,param_4,lVar1,param_6);
  return;
}



/* Entry: 109da9abc; end: 109da9ea3;  */

/* WARNING: Type propagation algorithm not settling */

ulong * FUN_109da9abc(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                     byte *param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *******pppppppuStack_e8;
  ulong uStack_e0;
  char cStack_d1;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  
  if (param_5 == (byte *)0x0) {
    uVar16 = 0;
    puVar17 = (undefined8 *)&UNK_10f5fa6c9;
  }
  else if ((*param_5 >> 2 & 1) == 0) {
    puVar17 = (undefined8 *)0x0;
    uVar16 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(param_5 + -8) + 2;
    uVar16 = **(undefined8 **)(param_5 + -8);
  }
  FUN_109e04498(&pppppppuStack_e8,param_2);
  pppppppuVar8 = pppppppuStack_e8;
  if (-1 < (long)cStack_d1) {
    pppppppuVar8 = &pppppppuStack_e8;
  }
  uVar1 = uStack_e0;
  if (-1 < cStack_d1) {
    uVar1 = (long)cStack_d1;
  }
  if (0x7ffffffffffffff7 < uVar1) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109da9e5c);
    (*pcVar6)();
  }
  if (uVar1 < 0x17) {
    uStack_c0 = CONCAT17((char)uVar1,(undefined7)uStack_c0);
    pppppppuVar7 = &pppppppuStack_d0;
    if (uVar1 == 0) goto LAB_109da9ba4;
  }
  else {
    pppppppuVar2 = (undefined8 *******)0x19;
    if ((uVar1 | 7) != 0x17) {
      pppppppuVar2 = (undefined8 *******)((uVar1 | 7) + 1);
    }
    pppppppuVar7 = pppppppuVar2;
    __Znwm();
    uStack_c0 = (ulong)pppppppuVar2 | 0x8000000000000000;
    pppppppuStack_d0 = pppppppuVar7;
    uStack_c8 = uVar1;
  }
  _memmove(pppppppuVar7,pppppppuVar8,uVar1);
LAB_109da9ba4:
  *(undefined1 *)((long)pppppppuVar7 + uVar1) = 0;
  uStack_90 = uStack_c0;
  uStack_98 = uStack_c8;
  pppppppuStack_a0 = pppppppuStack_d0;
  pppppppuStack_d0 = (undefined8 *******)0x0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_70 = 0;
  puVar10 = param_1 + 0xe8;
  puVar11 = puVar10;
  puVar5 = (ulong *)param_1[0xe8];
  uStack_b0 = uVar16;
  uStack_80 = uVar16;
  puStack_b8 = puVar17;
  puStack_88 = puVar17;
  uStack_a8 = param_6;
  uStack_78 = param_6;
joined_r0x000109da9be0:
  do {
    if (puVar5 == (ulong *)0x0) {
LAB_109da9c2c:
      puVar17 = (undefined8 *)0x58;
      __Znwm();
      puVar17[5] = uStack_98;
      puVar17[4] = pppppppuStack_a0;
      puVar17[6] = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      pppppppuStack_a0 = (undefined8 *******)0x0;
      puVar17[8] = uStack_80;
      puVar17[7] = puStack_88;
      *(undefined4 *)(puVar17 + 9) = uStack_78;
      puVar17[10] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = puVar11;
      *puVar10 = (ulong)puVar17;
      puVar13 = puVar17;
      if (*(ulong *)param_1[0xe7] != 0) {
        param_1[0xe7] = *(ulong *)param_1[0xe7];
        puVar13 = (undefined8 *)*puVar10;
      }
      func_0x000107c27d40(param_1[0xe8],puVar13);
      param_1[0xe9] = param_1[0xe9] + 1;
      bVar4 = true;
LAB_109da9ca4:
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppppppuStack_a0);
      }
      if ((long)uStack_c0 < 0) {
        __ZdlPv(pppppppuStack_d0);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(pppppppuStack_e8);
      }
      if (bVar4) {
        cVar3 = *(char *)((long)puVar17 + 0x37);
        puVar13 = (undefined8 *)puVar17[4];
        if (-1 < (long)cVar3) {
          puVar13 = puVar17 + 4;
        }
        lVar15 = puVar17[5];
        if (-1 < cVar3) {
          lVar15 = (long)cVar3;
        }
        puVar10 = param_1;
        FUN_109da7638(param_1,puVar13,lVar15,1,0);
        if (((byte)*puVar10 >> 2 & 1) == 0) {
          puVar13 = (undefined8 *)0x0;
          uVar16 = 0;
        }
        else {
          puVar13 = (undefined8 *)puVar10[-1] + 2;
          uVar16 = *(undefined8 *)puVar10[-1];
        }
        puVar11 = param_1 + 0x8f;
        FUN_109dabd04(puVar11,puVar13,uVar16);
        *(ulong **)(*puVar11 + 8) = puVar10;
        *(undefined4 *)(puVar10 + 4) = 3;
        *(byte *)((long)puVar10 + 0x24) = 1;
        param_1 = param_1 + 0x6b;
        FUN_109d34148(param_1,0x108,3);
        puVar11 = param_1;
        func_0x000109ddbef0();
        *puVar11 = (ulong)&PTR_FUN_110b596f8;
        *(undefined4 *)(puVar11 + 0x1c) = param_6;
        puVar11[0x1d] = (ulong)param_5;
        puVar11[0x1e] = 0;
        *(undefined4 *)(puVar11 + 0x1f) = 0;
        *(byte *)((long)puVar11 + 0xfc) = 0;
        *(undefined4 *)(puVar11 + 0x20) = param_4;
        puVar17[10] = puVar11;
        plVar12 = (long *)0xe8;
        __Znwm();
        plVar12[1] = 0;
        *plVar12 = 0;
        plVar12[3] = 0;
        plVar12[2] = 0;
        plVar12[4] = -1;
        plVar12[5] = 0;
        *(undefined1 *)(plVar12 + 6) = 1;
        *(undefined4 *)((long)plVar12 + 0x31) = 0;
        plVar12[7] = 0;
        plVar12[8] = (long)(plVar12 + 0xb);
        plVar12[10] = 0x20;
        plVar12[9] = 0;
        plVar12[0xf] = (long)(plVar12 + 0x11);
        plVar12[0x10] = 0x400000000;
        plVar14 = (long *)param_1[0xe];
        lVar15 = *plVar14;
        *plVar12 = lVar15;
        plVar12[1] = (long)plVar14;
        *(long **)(lVar15 + 8) = plVar12;
        *plVar14 = (long)plVar12;
        plVar12[2] = (long)param_1;
        *puVar10 = *puVar10 & 7 | (ulong)plVar12;
      }
      else {
        param_1 = (ulong *)puVar17[10];
      }
      return param_1;
    }
    pppppppuVar8 = &pppppppuStack_a0;
    func_0x000109dac980(pppppppuVar8,puVar5 + 4);
    puVar11 = puVar5;
    if ((int)pppppppuVar8 != 0) {
      puVar10 = puVar5;
      puVar5 = (ulong *)*puVar5;
      goto joined_r0x000109da9be0;
    }
    puVar9 = puVar5 + 4;
    func_0x000109dac980(puVar9,&pppppppuStack_a0);
    if ((int)puVar9 == 0) {
      puVar17 = (undefined8 *)*puVar10;
      if (puVar17 != (undefined8 *)0x0) {
        bVar4 = false;
        goto LAB_109da9ca4;
      }
      goto LAB_109da9c2c;
    }
    puVar10 = puVar5 + 1;
    puVar5 = (ulong *)*puVar10;
  } while( true );
}



/* Entry: 109da9ea4; end: 109daa4ef;  */

/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_109da9ea4(ulong *******param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5,
             uint param_6,ulong *******param_7,ulong param_8)

{
  undefined8 *******pppppppuVar1;
  code *pcVar2;
  bool bVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong uVar6;
  ulong ******ppppppuVar7;
  ulong *****pppppuVar8;
  undefined1 uVar9;
  uint extraout_w8;
  ulong *******pppppppuVar10;
  uint uVar11;
  ulong *****pppppuVar12;
  char cVar13;
  int iVar14;
  ulong *******pppppppuVar15;
  ulong *******unaff_x28;
  ulong *******pppppppuStack_f8;
  ulong *******pppppppuStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_d8;
  ulong *******pppppppuStack_d0;
  ulong *******pppppppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  undefined8 uStack_98;
  ulong *******pppppppuStack_90;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  
  if ((param_8 >> 0x20 & 1) == 0) {
    if (param_2 == 0) {
      uVar11 = 0;
      pppppppuStack_f8 = (ulong *******)0x0;
      pppppppuStack_f0 = (ulong *******)0x0;
      uStack_e8 = (undefined *)0x0;
    }
    else {
      func_0x000104c54c8c(&pppppppuStack_f8);
      uVar11 = (uint)uStack_e8._7_1_;
    }
    bVar3 = -1 < (char)uVar11;
    pppppppuVar15 = pppppppuStack_f8;
    if (bVar3) {
      pppppppuVar15 = (ulong *******)&pppppppuStack_f8;
    }
    pppppppuVar4 = pppppppuStack_f0;
    if (bVar3) {
      pppppppuVar4 = (ulong *******)(ulong)uVar11;
    }
    if ((ulong *******)0x7ffffffffffffff7 < pppppppuVar4) {
      func_0x000104c4f6b8();
      goto LAB_109daa48c;
    }
    if (pppppppuVar4 < (ulong *******)0x17) {
      uStack_c0 = (ulong ******)CONCAT17((char)pppppppuVar4,(undefined7)uStack_c0);
      pppppppuVar10 = (ulong *******)&pppppppuStack_d0;
      if (pppppppuVar4 != (ulong *******)0x0) goto LAB_109daa020;
    }
    else {
      unaff_x28 = (ulong *******)0x19;
      if (((ulong)pppppppuVar4 | 7) != 0x17) {
        unaff_x28 = (ulong *******)(((ulong)pppppppuVar4 | 7) + 1);
      }
      pppppppuVar10 = unaff_x28;
      __Znwm();
      uStack_c0 = (ulong ******)((ulong)unaff_x28 | 0x8000000000000000);
      pppppppuStack_d0 = pppppppuVar10;
      pppppppuStack_c8 = pppppppuVar4;
LAB_109daa020:
      _memmove(pppppppuVar10,pppppppuVar15,pppppppuVar4);
    }
    *(char *)((long)pppppppuVar10 + (long)pppppppuVar4) = '\0';
    uStack_b8 = (ulong *******)CONCAT71(uStack_b8._1_7_,(char)param_5);
    uVar9 = 1;
  }
  else {
    if (param_2 == 0) {
      uVar11 = 0;
      pppppppuStack_a8 = (undefined8 *******)0x0;
      pppppppuStack_a0 = (ulong *******)0x0;
      uStack_98 = 0;
    }
    else {
      func_0x000104c54c8c(&pppppppuStack_a8);
      uVar11 = (uint)uStack_98._7_1_;
    }
    bVar3 = -1 < (char)uVar11;
    pppppppuVar1 = pppppppuStack_a8;
    if (bVar3) {
      pppppppuVar1 = &pppppppuStack_a8;
    }
    pppppppuVar15 = pppppppuStack_a0;
    if (bVar3) {
      pppppppuVar15 = (ulong *******)(ulong)uVar11;
    }
    if ((ulong *******)0x7ffffffffffffff7 < pppppppuVar15) {
      func_0x000104c4f6b8();
LAB_109daa48c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109daa490);
      (*pcVar2)();
    }
    if (pppppppuVar15 < (ulong *******)0x17) {
      uStack_c0 = (ulong ******)CONCAT17((char)pppppppuVar15,(undefined7)uStack_c0);
      pppppppuVar4 = (ulong *******)&pppppppuStack_d0;
      if (pppppppuVar15 != (ulong *******)0x0) goto LAB_109da9f8c;
    }
    else {
      unaff_x28 = (ulong *******)0x19;
      if (((ulong)pppppppuVar15 | 7) != 0x17) {
        unaff_x28 = (ulong *******)(((ulong)pppppppuVar15 | 7) + 1);
      }
      pppppppuVar4 = unaff_x28;
      __Znwm();
      uStack_c0 = (ulong ******)((ulong)unaff_x28 | 0x8000000000000000);
      pppppppuStack_d0 = pppppppuVar4;
      pppppppuStack_c8 = pppppppuVar15;
LAB_109da9f8c:
      _memmove(pppppppuVar4,pppppppuVar1,pppppppuVar15);
    }
    uVar9 = 0;
    *(char *)((long)pppppppuVar4 + (long)pppppppuVar15) = '\0';
    uStack_b8 = (ulong *******)CONCAT44(uStack_b8._4_4_,(int)param_8);
  }
  ppppppuStack_80 = uStack_c0;
  pppppppuStack_88 = pppppppuStack_c8;
  pppppppuStack_90 = pppppppuStack_d0;
  uStack_b8._0_5_ = CONCAT14(uVar9,(undefined4)uStack_b8);
  pppppppuStack_d0 = (ulong *******)0x0;
  pppppppuStack_c8 = (ulong *******)0x0;
  uStack_c0 = (ulong ******)0x0;
  uStack_70 = 0;
  pppppppuVar15 = param_1 + 0xeb;
  pppppppuVar10 = (ulong *******)param_1[0xeb];
  pppppppuVar4 = pppppppuVar15;
  uStack_74 = uVar9;
  uStack_78 = (undefined4)uStack_b8;
  while (pppppppuVar10 != (ulong *******)0x0) {
    while( true ) {
      pppppppuVar4 = pppppppuVar10;
      pppppppuVar10 = (ulong *******)&pppppppuStack_90;
      FUN_109daca78(pppppppuVar10,pppppppuVar4 + 4);
      if ((int)pppppppuVar10 == 0) break;
      pppppppuVar10 = (ulong *******)*pppppppuVar4;
      pppppppuVar15 = pppppppuVar4;
      if ((ulong *******)*pppppppuVar4 == (ulong *******)0x0) goto LAB_109daa0bc;
    }
    iVar14 = (int)pppppppuVar4 + 0x20;
    pppppppuVar10 = (ulong *******)&pppppppuStack_90;
    FUN_109daca78();
    if (iVar14 == 0) {
      pppppppuVar5 = (ulong *******)*pppppppuVar15;
      if (pppppppuVar5 != (ulong *******)0x0) {
        pppppppuVar15 = (ulong *******)0x0;
        goto LAB_109daa134;
      }
      break;
    }
    pppppppuVar15 = pppppppuVar4 + 1;
    pppppppuVar10 = (ulong *******)*pppppppuVar15;
  }
LAB_109daa0bc:
  pppppppuVar5 = (ulong *******)0x48;
  __Znwm();
  pppppppuVar5[5] = (ulong ******)pppppppuStack_88;
  pppppppuVar5[4] = (ulong ******)pppppppuStack_90;
  pppppppuVar5[6] = ppppppuStack_80;
  pppppppuStack_88 = (ulong *******)0x0;
  ppppppuStack_80 = (ulong ******)0x0;
  pppppppuStack_90 = (ulong *******)0x0;
  *(undefined4 *)(pppppppuVar5 + 7) = uStack_78;
  *(undefined1 *)((long)pppppppuVar5 + 0x3c) = uStack_74;
  pppppppuVar5[8] = (ulong ******)0x0;
  *pppppppuVar5 = (ulong ******)0x0;
  pppppppuVar5[1] = (ulong ******)0x0;
  pppppppuVar5[2] = (ulong ******)pppppppuVar4;
  *pppppppuVar15 = (ulong ******)pppppppuVar5;
  pppppppuVar10 = pppppppuVar5;
  if ((ulong ******)*param_1[0xea] != (ulong ******)0x0) {
    param_1[0xea] = (ulong ******)*param_1[0xea];
    pppppppuVar10 = (ulong *******)*pppppppuVar15;
  }
  func_0x000107c27d40(param_1[0xeb]);
  param_1[0xec] = (ulong ******)((long)param_1[0xec] + 1);
  pppppppuVar15 = (ulong *******)0x1;
LAB_109daa134:
  if ((long)ppppppuStack_80 < 0) {
    __ZdlPv(pppppppuStack_90);
  }
  iVar14 = (int)pppppppuVar15;
  if ((long)uStack_c0 < 0) {
    __ZdlPv(pppppppuStack_d0);
    if ((param_8 >> 0x20 & 1) != 0) goto LAB_109daa150;
LAB_109daa16c:
    if ((long)uStack_e8 < 0) {
      __ZdlPv(pppppppuStack_f8);
      if (iVar14 == 0) goto LAB_109daa2b4;
LAB_109daa1d4:
      cVar13 = *(char *)((long)pppppppuVar5 + 0x37);
      pppppppuVar4 = (ulong *******)pppppppuVar5[4];
      if (-1 < (long)cVar13) {
        pppppppuVar4 = pppppppuVar5 + 4;
      }
      unaff_x28 = (ulong *******)pppppppuVar5[5];
      if (-1 < cVar13) {
        unaff_x28 = (ulong *******)(long)cVar13;
      }
      uStack_d8 = 0x305;
      uStack_e8 = &DAT_10f62a9e8;
      uVar6 = (ulong)(param_5 & 0xff);
      pppppppuStack_f8 = pppppppuVar4;
      pppppppuStack_f0 = unaff_x28;
      FUN_109d3a788();
      pppppppuStack_d0 = (ulong *******)&pppppppuStack_f8;
      uStack_b0 = 0x502;
      pppppppuStack_90 = (ulong *******)&pppppppuStack_d0;
      ppppppuStack_80 = (ulong ******)&DAT_10f62a9ea;
      uStack_70 = CONCAT62(uStack_70._2_6_,0x302);
      uStack_c0 = (ulong ******)uVar6;
      uStack_b8 = pppppppuVar10;
      goto LAB_109daa244;
    }
    if (iVar14 != 0) goto LAB_109daa1d4;
LAB_109daa2b4:
    param_1 = (ulong *******)pppppppuVar5[8];
    if (param_6 == *(byte *)(param_1 + 0x21)) {
      return param_1;
    }
    FUN_109df7828(&UNK_10f5fa7bb,1);
    uVar11 = extraout_w8;
  }
  else {
    if ((param_8 >> 0x20 & 1) == 0) goto LAB_109daa16c;
LAB_109daa150:
    if (uStack_98 < 0) {
      __ZdlPv(pppppppuStack_a8);
      if (iVar14 != 0) goto LAB_109daa198;
      goto LAB_109daa2b4;
    }
    if (iVar14 == 0) goto LAB_109daa2b4;
LAB_109daa198:
    cVar13 = *(char *)((long)pppppppuVar5 + 0x37);
    pppppppuVar4 = (ulong *******)pppppppuVar5[4];
    if (-1 < (long)cVar13) {
      pppppppuVar4 = pppppppuVar5 + 4;
    }
    unaff_x28 = (ulong *******)pppppppuVar5[5];
    if (-1 < cVar13) {
      unaff_x28 = (ulong *******)(long)cVar13;
    }
    uStack_70 = CONCAT62(uStack_70._2_6_,0x105);
    pppppppuStack_90 = pppppppuVar4;
    pppppppuStack_88 = unaff_x28;
LAB_109daa244:
    pppppppuVar15 = param_1;
    FUN_109da7538(param_1,&pppppppuStack_90);
    if (param_7 != (ulong *******)0x0) {
      uVar9 = 1;
      uStack_70 = CONCAT62(uStack_70._2_6_,0x100);
      if (*(char *)param_7 != '\0') {
        uVar9 = 3;
        pppppppuStack_90 = param_7;
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,uVar9);
      param_7 = param_1;
      FUN_109da7f80(param_1,&pppppppuStack_90,0);
    }
    param_1 = param_1 + 0x77;
    FUN_109d34148(param_1,0x110,3);
    uVar11 = (uint)*pppppppuVar15;
    if ((param_8 >> 0x20 & 1) != 0) {
      if ((uVar11 >> 2 & 1) == 0) {
        ppppppuVar7 = (ulong ******)0x0;
        pppppuVar8 = (ulong *****)0x0;
      }
      else {
        ppppppuVar7 = pppppppuVar15[-1] + 2;
        pppppuVar8 = *pppppppuVar15[-1];
      }
      FUN_109da857c(ppppppuVar7,pppppuVar8);
      func_0x000109ddbef0(param_1,5,ppppppuVar7,pppppuVar8,param_4,param_7);
      *param_1 = (ulong ******)&PTR_FUN_110b59740;
      *(char *)(param_1 + 0x1c) = '\0';
      *(char *)((long)param_1 + 0xe2) = '\0';
      param_1[0x1d] = (ulong ******)pppppppuVar15;
      param_1[0x1e] = (ulong ******)pppppppuVar4;
      param_1[0x1f] = (ulong ******)unaff_x28;
      *(int *)(param_1 + 0x20) = (int)param_8;
      *(char *)((long)param_1 + 0x104) = '\x01';
      *(char *)(param_1 + 0x21) = (char)param_6;
      pppppppuVar15[5] = (ulong ******)param_1;
      *(char *)(param_1 + 3) = '\x05';
      goto LAB_109daa3c4;
    }
  }
  if ((uVar11 >> 2 & 1) == 0) {
    ppppppuVar7 = (ulong ******)0x0;
    pppppuVar8 = (ulong *****)0x0;
  }
  else {
    ppppppuVar7 = pppppppuVar15[-1] + 2;
    pppppuVar8 = *pppppppuVar15[-1];
  }
  FUN_109da857c(ppppppuVar7,pppppuVar8);
  func_0x000109ddbef0(param_1,5,ppppppuVar7,pppppuVar8,param_4,param_7);
  *param_1 = (ulong ******)&PTR_FUN_110b59740;
  *(short *)(param_1 + 0x1c) = (short)param_5;
  *(char *)((long)param_1 + 0xe2) = '\x01';
  param_1[0x1d] = (ulong ******)pppppppuVar15;
  param_1[0x1e] = (ulong ******)pppppppuVar4;
  param_1[0x1f] = (ulong ******)unaff_x28;
  *(char *)(param_1 + 0x20) = '\0';
  *(char *)((long)param_1 + 0x104) = '\0';
  *(char *)(param_1 + 0x21) = (char)param_6;
  pppppppuVar15[5] = (ulong ******)param_1;
  *(undefined2 *)(pppppppuVar15 + 4) = 0x16b;
  if ((param_5 & 0xff00) != 0) {
    cVar13 = '\x05';
    if ((param_5 & 0xff) != 0) {
      cVar13 = '\x02';
    }
    *(char *)(param_1 + 3) = cVar13;
  }
LAB_109daa3c4:
  pppppppuVar5[8] = (ulong ******)param_1;
  pppppuVar8 = (ulong *****)0xe8;
  __Znwm();
  pppppuVar8[1] = (ulong ****)0x0;
  *pppppuVar8 = (ulong ****)0x0;
  pppppuVar8[3] = (ulong ****)0x0;
  pppppuVar8[2] = (ulong ****)0x0;
  pppppuVar8[4] = (ulong ****)0xffffffffffffffff;
  pppppuVar8[5] = (ulong ****)0x0;
  *(undefined1 *)(pppppuVar8 + 6) = 1;
  *(undefined4 *)((long)pppppuVar8 + 0x31) = 0;
  pppppuVar8[7] = (ulong ****)0x0;
  pppppuVar8[8] = (ulong ****)(pppppuVar8 + 0xb);
  pppppuVar8[10] = (ulong ****)0x20;
  pppppuVar8[9] = (ulong ****)0x0;
  pppppuVar8[0xf] = (ulong ****)(pppppuVar8 + 0x11);
  pppppuVar8[0x10] = (ulong ****)0x400000000;
  ppppppuVar7 = param_1[0xe];
  pppppuVar12 = *ppppppuVar7;
  *pppppuVar8 = (ulong ****)pppppuVar12;
  pppppuVar8[1] = (ulong ****)ppppppuVar7;
  pppppuVar12[1] = (ulong ****)pppppuVar8;
  *ppppppuVar7 = pppppuVar8;
  pppppuVar8[2] = (ulong ****)param_1;
  if (param_7 != (ulong *******)0x0) {
    *param_7 = (ulong ******)((ulong)*param_7 & 7 | (ulong)pppppuVar8);
  }
  if (((param_8 >> 0x20 & 1) == 0) && ((param_5 & 0xff) == 0)) {
    *pppppppuVar15 = (ulong ******)((ulong)*pppppppuVar15 & 7 | (ulong)pppppuVar8);
  }
  return param_1;
}



/* Entry: 109daa4f0; end: 109daa5ab;  */

undefined8 * FUN_109daa4f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x2f8);
  FUN_109d34148(puVar1,0xe0,3);
  puVar2 = puVar1;
  func_0x000109ddbef0();
  *puVar2 = &PTR_DAT_110b58490;
  plVar3 = (long *)0xe8;
  __Znwm();
  plVar3[1] = 0;
  *plVar3 = 0;
  plVar3[3] = 0;
  plVar3[2] = 0;
  plVar3[4] = -1;
  plVar3[5] = 0;
  *(undefined1 *)(plVar3 + 6) = 1;
  *(undefined4 *)((long)plVar3 + 0x31) = 0;
  plVar3[7] = 0;
  plVar3[8] = (long)(plVar3 + 0xb);
  plVar3[10] = 0x20;
  plVar3[9] = 0;
  plVar3[0xf] = (long)(plVar3 + 0x11);
  plVar3[0x10] = 0x400000000;
  plVar4 = (long *)puVar1[0xe];
  lVar5 = *plVar4;
  *plVar3 = lVar5;
  plVar3[1] = (long)plVar4;
  *(long **)(lVar5 + 8) = plVar3;
  *plVar4 = (long)plVar3;
  plVar3[2] = (long)puVar1;
  return puVar1;
}



/* Entry: 109daa5ac; end: 109daa6af;  */

long FUN_109daa5ac(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x768);
  FUN_109daa6b0();
  if ((param_2 & 1) == 0) {
    lVar5 = *(long *)(*plVar1 + 8);
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x178);
    FUN_109d34148(puVar2,0xe0,3);
    func_0x000109ddbef0();
    *puVar2 = &PTR_DAT_110b59188;
    *(undefined8 **)(*plVar1 + 8) = puVar2;
    plVar3 = (long *)0xe8;
    __Znwm();
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    plVar3[4] = -1;
    plVar3[5] = 0;
    *(undefined1 *)(plVar3 + 6) = 1;
    *(undefined4 *)((long)plVar3 + 0x31) = 0;
    plVar3[7] = 0;
    plVar3[8] = (long)(plVar3 + 0xb);
    plVar3[10] = 0x20;
    plVar3[9] = 0;
    plVar3[0xf] = (long)(plVar3 + 0x11);
    plVar3[0x10] = 0x400000000;
    plVar4 = *(long **)(*(long *)(*plVar1 + 8) + 0x70);
    lVar5 = *plVar4;
    *plVar3 = lVar5;
    plVar3[1] = (long)plVar4;
    *(long **)(lVar5 + 8) = plVar3;
    *plVar4 = (long)plVar3;
    lVar5 = *(long *)(*plVar1 + 8);
    plVar3[2] = lVar5;
  }
  return lVar5;
}



/* Entry: 109daa6b0; end: 109daa7a7;  */

undefined1  [16] FUN_109daa6b0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109daa78c;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  plVar2[1] = 0;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109daa78c:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109daa7a8; end: 109daa963;  */

ulong FUN_109daa7a8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  long lVar10;
  undefined4 uStack_150;
  undefined1 uStack_149;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  puStack_80 = &uStack_60;
  param_1 = param_1 + 0x618;
  puVar8 = param_8;
  FUN_109dab138(param_1,&uStack_60,&UNK_10dd5b8f9,&puStack_80,&uStack_61);
  uStack_58 = param_7[1];
  uStack_60 = *param_7;
  uStack_50 = *(undefined1 *)(param_7 + 2);
  uStack_78 = param_8[1];
  puStack_80 = (undefined8 *)*param_8;
  uStack_70 = param_8[2];
  uVar1 = param_1 + 0x28;
  uVar2 = param_3;
  uVar4 = param_4;
  uVar5 = param_5;
  uVar6 = param_6;
  FUN_109daaf80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar1;
  }
  ___stack_chk_fail();
  uStack_88 = 0x109daa884;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_100 = &puStack_80;
  lVar9 = uVar1 + 0x618;
  uStack_120 = uVar5;
  uStack_118 = uVar6;
  uStack_110 = uVar2;
  uStack_108 = uVar4;
  uStack_c0 = param_3;
  uStack_b8 = param_4;
  uStack_b0 = param_5;
  uStack_a8 = param_6;
  puStack_a0 = param_7;
  puStack_98 = param_8;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_109dab138(lVar9,&puStack_80,&UNK_10dd5b8f9,&ppuStack_100,&uStack_e0);
  uStack_d8 = ppuVar7[1];
  uStack_e0 = *ppuVar7;
  uStack_d0 = *(undefined1 *)(ppuVar7 + 2);
  uStack_f8 = puVar8[1];
  ppuStack_100 = (undefined8 **)*puVar8;
  uStack_f0 = puVar8[2];
  uVar1 = lVar9 + 0x28;
  puVar3 = &uStack_110;
  uStack_150 = (int)&uStack_120;
  FUN_109dace14(extraout_x8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return uVar1;
  }
  ___stack_chk_fail();
  puStack_148 = (undefined1 *)&uStack_150;
  pcStack_128 = FUN_109daa964;
  lVar9 = uVar1 + 0x618;
  puStack_140 = ppuVar7;
  puStack_138 = puVar8;
  ppuStack_130 = &puStack_90;
  FUN_109dab138(lVar9,&uStack_150,&UNK_10dd5b8f9,&puStack_148,&uStack_149);
  if ((uint)puVar3 == 0) {
    uVar1 = (ulong)(4 < *(ushort *)(uVar1 + 0x6b0));
  }
  else if ((uint)puVar3 < *(uint *)(lVar9 + 0x90)) {
    lVar10 = *(long *)(lVar9 + 0x88) + ((ulong)puVar3 & 0xffffffff) * 0x48;
    lVar9 = (long)*(char *)(lVar10 + 0x17);
    if (lVar9 < 0) {
      lVar9 = *(long *)(lVar10 + 8);
    }
    uVar1 = (ulong)(lVar9 != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 109daa964; end: 109daaa7b;  */

bool FUN_109daa964(long param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_30;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)&uStack_30;
  lVar2 = param_1 + 0x618;
  uStack_30 = param_3;
  FUN_109dab138(lVar2,&uStack_30,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  if (param_2 == 0) {
    bVar1 = 4 < *(ushort *)(param_1 + 0x6b0);
  }
  else if (param_2 < *(uint *)(lVar2 + 0x90)) {
    lVar3 = *(long *)(lVar2 + 0x88) + (ulong)param_2 * 0x48;
    lVar2 = (long)*(char *)(lVar3 + 0x17);
    if (lVar2 < 0) {
      lVar2 = *(long *)(lVar3 + 8);
    }
    bVar1 = lVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 109daaa7c; end: 109daaad3;  */

void FUN_109daaa7c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 **ppuVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [168];
  long lStack_68;
  undefined1 uStack_11;
  
  lVar6 = *(long *)(param_1 + 0x48);
  lVar5 = lVar6;
  if (lVar6 == 0) {
    lVar5 = *(long *)(param_1 + 0x50);
  }
  uStack_11 = lVar6 == 0;
  plVar7 = *(long **)(param_1 + 0x88);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,param_2,&uStack_11,lVar5,param_1 + 0x58);
    return;
  }
  func_0x000104c501e4();
  puVar8 = &uStack_1f0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x48);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x50);
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
  }
  puStack_120 = auStack_110;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  lStack_180 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  lStack_158 = 0;
  lStack_140 = 0;
  uStack_148 = 0;
  lStack_130 = 0;
  lStack_138 = 0;
  uStack_128 = 0;
  uStack_118 = 0x400000000;
  plVar7 = *(long **)(param_3 + 0x18);
  puStack_1a8 = (undefined1 *)puVar8;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&puStack_1a0,&puStack_1a8);
    puStack_1a8 = (undefined1 *)CONCAT71(puStack_1a8._1_7_,uVar9);
    plVar7 = *(long **)(param_1 + 0x88);
    if (plVar7 != (long *)0x0) {
      ppuVar3 = &puStack_1a0;
      (**(code **)(*plVar7 + 0x30))(plVar7,ppuVar3,&puStack_1a8,puVar8,param_1 + 0x58);
      iVar4 = (int)ppuVar3;
      FUN_109d3865c(&puStack_120);
      if (lStack_138 != 0) {
        lStack_130 = lStack_138;
        __ZdlPv();
      }
      if (lStack_140 < 0) {
        __ZdlPv(uStack_150);
      }
      if (lStack_158 < 0) {
        __ZdlPv(uStack_168);
      }
      if (lStack_180 < 0) {
        __ZdlPv(uStack_190);
      }
      puStack_1a0 = &uStack_1d8;
      func_0x000104c607c8(&puStack_1a0);
      ppuVar3 = &puStack_1a0;
      puStack_1a0 = &uStack_1f0;
      FUN_109d3a718();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
        ___stack_chk_fail();
        func_0x000109d38208(&puStack_1a0);
        FUN_109d3a460(&uStack_1f0);
        __Unwind_Resume();
        if (iVar4 == 0) {
          *ppuVar3 = (undefined8 *)0x0;
          ppuVar3[1] = (undefined8 *)0x0;
          *(undefined4 *)(ppuVar3 + 2) = 0;
        }
        else {
          uVar1 = (uint)(iVar4 << 2) / 3 + 1;
          uVar1 = uVar1 | uVar1 >> 1;
          uVar1 = uVar1 | uVar1 >> 2;
          uVar1 = uVar1 | uVar1 >> 4;
          uVar1 = uVar1 | uVar1 >> 8;
          uVar1 = (uVar1 >> 0x10 | uVar1) + 1;
          *(uint *)(ppuVar3 + 2) = uVar1;
          puVar8 = (undefined8 *)((ulong)uVar1 << 4);
          __ZnwmSt11align_val_t(puVar8,8);
          *ppuVar3 = puVar8;
          ppuVar3[1] = (undefined8 *)0x0;
          if (*(uint *)(ppuVar3 + 2) != 0) {
            lVar5 = (ulong)*(uint *)(ppuVar3 + 2) << 4;
            do {
              puVar8[1] = 0;
              *puVar8 = 0xffffffffffffffff;
              lVar5 = lVar5 + -0x10;
              puVar8 = puVar8 + 2;
            } while (lVar5 != 0);
          }
        }
        return;
      }
      return;
    }
  }
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109daac50);
  (*pcVar2)();
}



/* Entry: 109daaad4; end: 109daac6f;  */

void FUN_109daaad4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [168];
  long lStack_48;
  
  puVar7 = &uStack_1d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x50);
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
  }
  puStack_100 = auStack_f0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  lStack_160 = 0;
  uStack_178 = 0;
  puStack_180 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  lStack_138 = 0;
  lStack_120 = 0;
  uStack_128 = 0;
  lStack_110 = 0;
  lStack_118 = 0;
  uStack_108 = 0;
  uStack_f8 = 0x400000000;
  plVar3 = *(long **)(param_3 + 0x18);
  puStack_188 = (undefined1 *)puVar7;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&puStack_180,&puStack_188);
    puStack_188 = (undefined1 *)CONCAT71(puStack_188._1_7_,uVar8);
    plVar3 = *(long **)(param_1 + 0x88);
    if (plVar3 != (long *)0x0) {
      ppuVar4 = &puStack_180;
      (**(code **)(*plVar3 + 0x30))(plVar3,ppuVar4,&puStack_188,puVar7,param_1 + 0x58);
      iVar5 = (int)ppuVar4;
      FUN_109d3865c(&puStack_100);
      if (lStack_118 != 0) {
        lStack_110 = lStack_118;
        __ZdlPv();
      }
      if (lStack_120 < 0) {
        __ZdlPv(uStack_130);
      }
      if (lStack_138 < 0) {
        __ZdlPv(uStack_148);
      }
      if (lStack_160 < 0) {
        __ZdlPv(uStack_170);
      }
      puStack_180 = &uStack_1b8;
      func_0x000104c607c8(&puStack_180);
      ppuVar4 = &puStack_180;
      puStack_180 = &uStack_1d0;
      FUN_109d3a718();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
        ___stack_chk_fail();
        func_0x000109d38208(&puStack_180);
        FUN_109d3a460(&uStack_1d0);
        __Unwind_Resume();
        if (iVar5 == 0) {
          *ppuVar4 = (undefined8 *)0x0;
          ppuVar4[1] = (undefined8 *)0x0;
          *(undefined4 *)(ppuVar4 + 2) = 0;
        }
        else {
          uVar1 = (uint)(iVar5 << 2) / 3 + 1;
          uVar1 = uVar1 | uVar1 >> 1;
          uVar1 = uVar1 | uVar1 >> 2;
          uVar1 = uVar1 | uVar1 >> 4;
          uVar1 = uVar1 | uVar1 >> 8;
          uVar1 = (uVar1 >> 0x10 | uVar1) + 1;
          *(uint *)(ppuVar4 + 2) = uVar1;
          puVar7 = (undefined8 *)((ulong)uVar1 << 4);
          __ZnwmSt11align_val_t(puVar7,8);
          *ppuVar4 = puVar7;
          ppuVar4[1] = (undefined8 *)0x0;
          if (*(uint *)(ppuVar4 + 2) != 0) {
            lVar6 = (ulong)*(uint *)(ppuVar4 + 2) << 4;
            do {
              puVar7[1] = 0;
              *puVar7 = 0xffffffffffffffff;
              lVar6 = lVar6 + -0x10;
              puVar7 = puVar7 + 2;
            } while (lVar6 != 0);
          }
        }
        return;
      }
      return;
    }
  }
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109daac50);
  (*pcVar2)();
}



/* Entry: 109daac70; end: 109daaec7;  */

void FUN_109daac70(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar1 = (uint)(param_2 << 2) / 3 + 1;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = (uVar1 >> 0x10 | uVar1) + 1;
    *(uint *)(param_1 + 2) = uVar1;
    puVar2 = (undefined8 *)((ulong)uVar1 << 4);
    __ZnwmSt11align_val_t(puVar2,8);
    *param_1 = puVar2;
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        puVar2[1] = 0;
        *puVar2 = 0xffffffffffffffff;
        lVar3 = lVar3 + -0x10;
        puVar2 = puVar2 + 2;
      } while (lVar3 != 0);
    }
  }
  return;
}



/* Entry: 109daaec8; end: 109daaeeb;  */

undefined8 FUN_109daaec8(void)

{
  return 0;
}



/* Entry: 109daaeec; end: 109daaf7f;  */

undefined8 * FUN_109daaeec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 109daaf80; end: 109dab137;  */

undefined1  [16]
FUN_109daaf80(undefined8 ****param_1,uint *param_2,undefined8 ***param_3,uint *param_4,
             undefined8 ***param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  uint *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  
  ppppuVar4 = param_1;
  puVar6 = param_4;
  if ((undefined8 ***)0x7ffffffffffffff7 < param_3) goto LAB_109dab134;
  if (param_3 < (undefined8 ***)0x17) {
    uStack_68 = (undefined8 ***)CONCAT17((char)param_3,(undefined7)uStack_68);
    ppppuVar3 = &pppuStack_78;
    if (param_3 != (undefined8 ***)0x0) goto LAB_109dab00c;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x19;
    if (((ulong)param_3 | 7) != 0x17) {
      ppppuVar4 = (undefined8 ****)(((ulong)param_3 | 7) + 1);
    }
    ppppuVar3 = ppppuVar4;
    __Znwm();
    uStack_68 = (undefined8 ***)((ulong)ppppuVar4 | 0x8000000000000000);
    pppuStack_78 = ppppuVar3;
    ppuStack_70 = param_3;
LAB_109dab00c:
    ppppuVar4 = ppppuVar3;
    _memmove(ppppuVar3,param_2,param_3);
  }
  *(undefined1 *)((long)ppppuVar3 + (long)param_3) = 0;
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    ppppuVar4 = (undefined8 ****)param_1[0x2c];
    __ZdlPv();
  }
  param_1[0x2d] = (undefined8 ***)ppuStack_70;
  param_1[0x2c] = pppuStack_78;
  param_1[0x2e] = uStack_68;
  if ((undefined8 ***)0x7ffffffffffffff7 < param_5) {
LAB_109dab134:
    func_0x000104c4f6b8();
    ppppuVar3 = ppppuVar4 + 1;
    ppppuVar7 = ppppuVar3;
    if ((undefined8 ****)*ppppuVar3 != (undefined8 ****)0x0) {
      ppppuVar5 = (undefined8 ****)*ppppuVar3;
      do {
        while (ppppuVar3 = ppppuVar5, *(uint *)(ppppuVar3 + 4) <= *param_2) {
          if (*param_2 <= *(uint *)(ppppuVar3 + 4)) {
            uVar8 = 0;
            goto LAB_109dab28c;
          }
          ppppuVar5 = (undefined8 ****)ppppuVar3[1];
          if ((undefined8 ****)ppppuVar3[1] == (undefined8 ****)0x0) {
            ppppuVar7 = ppppuVar3 + 1;
            goto LAB_109dab1a0;
          }
        }
        ppppuVar5 = (undefined8 ****)*ppppuVar3;
        ppppuVar7 = ppppuVar3;
      } while ((undefined8 ****)*ppppuVar3 != (undefined8 ****)0x0);
    }
LAB_109dab1a0:
    ppppuVar5 = (undefined8 ****)0x220;
    __Znwm();
    *(undefined4 *)(ppppuVar5 + 4) = **(undefined4 **)puVar6;
    ppppuVar5[0x20] = (undefined8 ***)0x0;
    ppppuVar5[0x1f] = (undefined8 ***)0x0;
    ppppuVar5[0x1e] = (undefined8 ***)0x0;
    ppppuVar5[0x1d] = (undefined8 ***)0x0;
    ppppuVar5[0x1c] = (undefined8 ***)0x0;
    ppppuVar5[0x1b] = (undefined8 ***)0x0;
    ppppuVar5[0x1a] = (undefined8 ***)0x0;
    ppppuVar5[0x19] = (undefined8 ***)0x0;
    ppppuVar5[0x18] = (undefined8 ***)0x0;
    ppppuVar5[0x17] = (undefined8 ***)0x0;
    ppppuVar5[0x16] = (undefined8 ***)0x0;
    ppppuVar5[0x15] = (undefined8 ***)0x0;
    ppppuVar5[0x12] = (undefined8 ***)0x0;
    ppppuVar5[0x11] = (undefined8 ***)0x0;
    ppppuVar5[0x10] = (undefined8 ***)0x0;
    ppppuVar5[0xf] = (undefined8 ***)0x0;
    ppppuVar5[0xe] = (undefined8 ***)0x0;
    ppppuVar5[0xd] = (undefined8 ***)0x0;
    ppppuVar5[0xc] = (undefined8 ***)0x0;
    ppppuVar5[0xb] = (undefined8 ***)0x0;
    ppppuVar5[10] = (undefined8 ***)0x0;
    ppppuVar5[9] = (undefined8 ***)0x0;
    ppppuVar5[6] = (undefined8 ***)0x0;
    ppppuVar5[5] = (undefined8 ***)0x0;
    ppppuVar5[8] = (undefined8 ***)0x0;
    ppppuVar5[7] = (undefined8 ***)0x0;
    ppppuVar5[0x3e] = (undefined8 ***)0x0;
    ppppuVar5[0x3d] = (undefined8 ***)0x0;
    ppppuVar5[0x40] = (undefined8 ***)0x0;
    ppppuVar5[0x3f] = (undefined8 ***)0x0;
    ppppuVar5[0x3a] = (undefined8 ***)0x0;
    ppppuVar5[0x39] = (undefined8 ***)0x0;
    ppppuVar5[0x3c] = (undefined8 ***)0x0;
    ppppuVar5[0x3b] = (undefined8 ***)0x0;
    ppppuVar5[0x36] = (undefined8 ***)0x0;
    ppppuVar5[0x35] = (undefined8 ***)0x0;
    ppppuVar5[0x38] = (undefined8 ***)0x0;
    ppppuVar5[0x37] = (undefined8 ***)0x0;
    ppppuVar5[0x32] = (undefined8 ***)0x0;
    ppppuVar5[0x31] = (undefined8 ***)0x0;
    ppppuVar5[0x34] = (undefined8 ***)0x0;
    ppppuVar5[0x33] = (undefined8 ***)0x0;
    ppppuVar5[0x2e] = (undefined8 ***)0x0;
    ppppuVar5[0x2d] = (undefined8 ***)0x0;
    ppppuVar5[0x30] = (undefined8 ***)0x0;
    ppppuVar5[0x2f] = (undefined8 ***)0x0;
    ppppuVar5[0x2a] = (undefined8 ***)0x0;
    ppppuVar5[0x29] = (undefined8 ***)0x0;
    ppppuVar5[0x2c] = (undefined8 ***)0x0;
    ppppuVar5[0x2b] = (undefined8 ***)0x0;
    ppppuVar5[0x26] = (undefined8 ***)0x0;
    ppppuVar5[0x25] = (undefined8 ***)0x0;
    ppppuVar5[0x28] = (undefined8 ***)0x0;
    ppppuVar5[0x27] = (undefined8 ***)0x0;
    ppppuVar5[0x22] = (undefined8 ***)0x0;
    ppppuVar5[0x21] = (undefined8 ***)0x0;
    ppppuVar5[0x24] = (undefined8 ***)0x0;
    ppppuVar5[0x23] = (undefined8 ***)0x0;
    ppppuVar5[0x14] = (undefined8 ***)0x0;
    ppppuVar5[0x13] = (undefined8 ***)0x0;
    ppppuVar5[6] = ppppuVar5 + 8;
    *(undefined4 *)((long)ppppuVar5 + 0x3c) = 3;
    ppppuVar5[0x11] = ppppuVar5 + 0x13;
    *(undefined4 *)((long)ppppuVar5 + 0x94) = 3;
    ppppuVar5[0x2e] = (undefined8 ***)0x0;
    ppppuVar5[0x2f] = (undefined8 ***)0x0;
    ppppuVar5[0x30] = (undefined8 ***)0x1000000000;
    ppppuVar5[0x32] = (undefined8 ***)0x0;
    ppppuVar5[0x31] = (undefined8 ***)0x0;
    ppppuVar5[0x34] = (undefined8 ***)0x0;
    ppppuVar5[0x33] = (undefined8 ***)0x0;
    ppppuVar5[0x36] = (undefined8 ***)0x0;
    ppppuVar5[0x35] = (undefined8 ***)0x0;
    *(undefined8 *)((long)ppppuVar5 + 0x1b5) = 0;
    uVar8 = 1;
    *(undefined1 *)((long)ppppuVar5 + 0x1e9) = 1;
    ppppuVar5[0x3e] = (undefined8 ***)0x0;
    ppppuVar5[0x3f] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar5 + 0x40) = 0;
    ppppuVar5[0x41] = (undefined8 ***)0x0;
    ppppuVar5[0x43] = (undefined8 ***)0x0;
    ppppuVar5[0x42] = (undefined8 ***)0x0;
    FUN_109dab2a8(ppppuVar4,ppppuVar3,ppppuVar7,ppppuVar5);
    ppppuVar3 = ppppuVar5;
LAB_109dab28c:
    auVar12._8_8_ = uVar8;
    auVar12._0_8_ = ppppuVar3;
    return auVar12;
  }
  if (param_5 < (undefined8 ***)0x17) {
    uStack_68 = (undefined8 ***)CONCAT17((char)param_5,(undefined7)uStack_68);
    ppppuVar3 = &pppuStack_78;
    if (param_5 == (undefined8 ***)0x0) goto LAB_109dab098;
  }
  else {
    ppppuVar4 = (undefined8 ****)0x19;
    if (((ulong)param_5 | 7) != 0x17) {
      ppppuVar4 = (undefined8 ****)(((ulong)param_5 | 7) + 1);
    }
    ppppuVar3 = ppppuVar4;
    __Znwm();
    uStack_68 = (undefined8 ***)((ulong)ppppuVar4 | 0x8000000000000000);
    pppuStack_78 = ppppuVar3;
    ppuStack_70 = param_5;
  }
  ppppuVar4 = ppppuVar3;
  _memmove(ppppuVar3,param_4,param_5);
  param_2 = param_4;
LAB_109dab098:
  *(undefined1 *)((long)ppppuVar3 + (long)param_5) = 0;
  if (*(char *)((long)param_1 + 399) < '\0') {
    ppppuVar4 = (undefined8 ****)param_1[0x2f];
    __ZdlPv(ppppuVar4);
  }
  param_1[0x30] = (undefined8 ***)ppuStack_70;
  param_1[0x2f] = pppuStack_78;
  param_1[0x31] = uStack_68;
  *(undefined4 *)(param_1 + 0x32) = 0;
  uVar10 = param_6[1];
  uVar8 = *param_6;
  *(undefined1 *)((long)param_1 + 0x1a4) = *(undefined1 *)(param_6 + 2);
  *(undefined8 *)((long)param_1 + 0x19c) = uVar10;
  *(undefined8 *)((long)param_1 + 0x194) = uVar8;
  uVar1 = *(undefined1 *)(param_7 + 2);
  pppuVar9 = (undefined8 ***)*param_7;
  param_1[0x36] = (undefined8 ***)param_7[1];
  param_1[0x35] = pppuVar9;
  *(undefined1 *)(param_1 + 0x37) = uVar1;
  bVar2 = *(byte *)(param_6 + 2);
  uVar1 = *(undefined1 *)((long)param_1 + 0x1c1);
  if (bVar2 == 0) {
    uVar1 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x1c1) = uVar1;
  *(byte *)((long)param_1 + 0x1c2) = *(byte *)((long)param_1 + 0x1c2) | bVar2;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_7 + 2);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = ppppuVar4;
  return auVar11;
}



/* Entry: 109dab138; end: 109dab2a7;  */

undefined1  [16] FUN_109dab138(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar1 = (long *)*plVar2;
    do {
      while (plVar2 = plVar1, *(uint *)(plVar2 + 4) <= *param_2) {
        if (*param_2 <= *(uint *)(plVar2 + 4)) {
          uVar4 = 0;
          goto LAB_109dab28c;
        }
        plVar1 = (long *)plVar2[1];
        if ((long *)plVar2[1] == (long *)0x0) {
          plVar3 = plVar2 + 1;
          goto LAB_109dab1a0;
        }
      }
      plVar1 = (long *)*plVar2;
      plVar3 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
LAB_109dab1a0:
  plVar1 = (long *)0x220;
  __Znwm();
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)*param_4;
  plVar1[0x20] = 0;
  plVar1[0x1f] = 0;
  plVar1[0x1e] = 0;
  plVar1[0x1d] = 0;
  plVar1[0x1c] = 0;
  plVar1[0x1b] = 0;
  plVar1[0x1a] = 0;
  plVar1[0x19] = 0;
  plVar1[0x18] = 0;
  plVar1[0x17] = 0;
  plVar1[0x16] = 0;
  plVar1[0x15] = 0;
  plVar1[0x12] = 0;
  plVar1[0x11] = 0;
  plVar1[0x10] = 0;
  plVar1[0xf] = 0;
  plVar1[0xe] = 0;
  plVar1[0xd] = 0;
  plVar1[0xc] = 0;
  plVar1[0xb] = 0;
  plVar1[10] = 0;
  plVar1[9] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[8] = 0;
  plVar1[7] = 0;
  plVar1[0x3e] = 0;
  plVar1[0x3d] = 0;
  plVar1[0x40] = 0;
  plVar1[0x3f] = 0;
  plVar1[0x3a] = 0;
  plVar1[0x39] = 0;
  plVar1[0x3c] = 0;
  plVar1[0x3b] = 0;
  plVar1[0x36] = 0;
  plVar1[0x35] = 0;
  plVar1[0x38] = 0;
  plVar1[0x37] = 0;
  plVar1[0x32] = 0;
  plVar1[0x31] = 0;
  plVar1[0x34] = 0;
  plVar1[0x33] = 0;
  plVar1[0x2e] = 0;
  plVar1[0x2d] = 0;
  plVar1[0x30] = 0;
  plVar1[0x2f] = 0;
  plVar1[0x2a] = 0;
  plVar1[0x29] = 0;
  plVar1[0x2c] = 0;
  plVar1[0x2b] = 0;
  plVar1[0x26] = 0;
  plVar1[0x25] = 0;
  plVar1[0x28] = 0;
  plVar1[0x27] = 0;
  plVar1[0x22] = 0;
  plVar1[0x21] = 0;
  plVar1[0x24] = 0;
  plVar1[0x23] = 0;
  plVar1[0x14] = 0;
  plVar1[0x13] = 0;
  plVar1[6] = (long)(plVar1 + 8);
  *(undefined4 *)((long)plVar1 + 0x3c) = 3;
  plVar1[0x11] = (long)(plVar1 + 0x13);
  *(undefined4 *)((long)plVar1 + 0x94) = 3;
  plVar1[0x2e] = 0;
  plVar1[0x2f] = 0;
  plVar1[0x30] = 0x1000000000;
  plVar1[0x32] = 0;
  plVar1[0x31] = 0;
  plVar1[0x34] = 0;
  plVar1[0x33] = 0;
  plVar1[0x36] = 0;
  plVar1[0x35] = 0;
  *(undefined8 *)((long)plVar1 + 0x1b5) = 0;
  uVar4 = 1;
  *(undefined1 *)((long)plVar1 + 0x1e9) = 1;
  plVar1[0x3e] = 0;
  plVar1[0x3f] = 0;
  *(undefined4 *)(plVar1 + 0x40) = 0;
  plVar1[0x41] = 0;
  plVar1[0x43] = 0;
  plVar1[0x42] = 0;
  FUN_109dab2a8(param_1,plVar2,plVar3,plVar1);
  plVar2 = plVar1;
LAB_109dab28c:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 109dab2a8; end: 109dab2fb;  */

void FUN_109dab2a8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 109dab2fc; end: 109dab303;  */

void FUN_109dab2fc(void)

{
  return;
}



/* Entry: 109dab304; end: 109dab337;  */

void FUN_109dab304(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b584d8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109dab338; end: 109dab36f;  */

void FUN_109dab338(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110b584d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109dab370; end: 109dab3ab;  */

long FUN_109dab370(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b58558);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109dab3ac; end: 109dab3b7;  */

undefined ** FUN_109dab3ac(void)

{
  return &PTR_DAT_110b58558;
}



/* Entry: 109dab3b8; end: 109dab3df;  */

long FUN_109dab3b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_109da6ae8();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab3e0; end: 109dab407;  */

long FUN_109dab3e0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x000109da6be4();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab408; end: 109dab42f;  */

long FUN_109dab408(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x000109da6ce0();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab430; end: 109dab457;  */

long FUN_109dab430(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x000109da6ed8();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab458; end: 109dab47f;  */

long FUN_109dab458(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x000109da6ddc();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab480; end: 109dab4a7;  */

long FUN_109dab480(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_109da72e8();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab4a8; end: 109dab4cf;  */

long FUN_109dab4a8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x000109da6fd4();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab4d0; end: 109dab4f7;  */

long FUN_109dab4d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  func_0x000109da70d0();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab4f8; end: 109dab51f;  */

long FUN_109dab4f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_109da71cc();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab520; end: 109dab577;  */

void FUN_109dab520(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109dab520(*param_1);
    FUN_109dab520(param_1[1]);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109dab578; end: 109dab73f;  */

void FUN_109dab578(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_109dab578(*param_1);
    FUN_109dab578(param_1[1]);
    lVar4 = param_1[0x41];
    if (lVar4 != 0) {
      lVar5 = param_1[0x42];
      lVar2 = lVar4;
      if (lVar5 != lVar4) {
        do {
          if (*(long *)(lVar5 + -0x18) != 0) {
            *(long *)(lVar5 + -0x10) = *(long *)(lVar5 + -0x18);
            __ZdlPv();
          }
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != lVar4);
        lVar2 = param_1[0x41];
      }
      param_1[0x42] = lVar4;
      __ZdlPv(lVar2);
    }
    __ZdlPvSt11align_val_t(param_1[0x3e],8);
    if (*(char *)((long)param_1 + 0x1b7) < '\0') {
      __ZdlPv(param_1[0x34]);
    }
    if (*(char *)((long)param_1 + 0x19f) < '\0') {
      __ZdlPv(param_1[0x31]);
    }
    FUN_109d5993c(param_1 + 0x2e);
    puVar3 = (undefined8 *)param_1[0x11];
    uVar1 = *(uint *)(param_1 + 0x12);
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 * -0x48;
      puVar3 = puVar3 + (ulong)uVar1 * 9;
      do {
        if (*(char *)((long)puVar3 + -0x31) < '\0') {
          __ZdlPv(puVar3[-9]);
        }
        lVar4 = lVar4 + 0x48;
        puVar3 = puVar3 + -9;
      } while (lVar4 != 0);
      puVar3 = (undefined8 *)param_1[0x11];
    }
    if (puVar3 != param_1 + 0x13) {
      _free();
    }
    puVar3 = (undefined8 *)param_1[6];
    uVar1 = *(uint *)(param_1 + 7);
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 * -0x18;
      pcVar6 = (char *)((long)puVar3 + (ulong)uVar1 * 0x18 + -1);
      do {
        if (*pcVar6 < '\0') {
          __ZdlPv(*(undefined8 *)(pcVar6 + -0x17));
        }
        lVar4 = lVar4 + 0x18;
        pcVar6 = pcVar6 + -0x18;
      } while (lVar4 != 0);
      puVar3 = (undefined8 *)param_1[6];
    }
    if (puVar3 != param_1 + 8) {
      _free();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109dab740; end: 109dab8a7;  */

void FUN_109dab740(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109dab740(*param_1);
    FUN_109dab740(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109dab8a8; end: 109dab987;  */

long * FUN_109dab8a8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        __ZdlPvSt11align_val_t(lVar2,8);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109dab988; end: 109dab9af;  */

long FUN_109dab988(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_109da73e4();
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x18) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x48) << 4;
    do {
      __ZdlPvSt11align_val_t(*puVar1,8);
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  if (puVar1 != (undefined8 *)(param_1 + 0x50)) {
    _free(puVar1);
  }
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  return param_1;
}



/* Entry: 109dab9b0; end: 109daba23;  */

long * FUN_109dab9b0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)((long)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), uVar1 != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar3);
      if (lVar2 != -8 && lVar2 != 0) {
        FUN_109daba24(lVar2,param_1);
      }
      lVar3 = lVar3 + 8;
    } while ((ulong)uVar1 * 8 - lVar3 != 0);
  }
  _free(*param_1);
  return param_1;
}



/* Entry: 109daba24; end: 109daba73;  */

void FUN_109daba24(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x40;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x28;
  FUN_109daba74(&lStack_28);
  __ZdlPvSt11align_val_t(param_1,8);
  return;
}



/* Entry: 109daba74; end: 109dabaeb;  */

void FUN_109daba74(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    lVar1 = plVar2[1];
    if (plVar2[1] != lVar3) {
      do {
        lVar4 = lVar1 + -0x30;
        lStack_38 = lVar1 + -0x20;
        FUN_109dabaec(&lStack_38);
        lVar1 = lVar4;
      } while (lVar4 != lVar3);
      lVar4 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar4);
  }
  return;
}



/* Entry: 109dabaec; end: 109dabb2b;  */

void FUN_109dabaec(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109dabb2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109dabb2c; end: 109dabb87;  */

void FUN_109dabb2c(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x28) {
    if ((0x40 < *(uint *)(lVar1 + -8)) && (*(long *)(lVar1 + -0x10) != 0)) {
      __ZdaPv();
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 109dabb88; end: 109dabc17;  */

void FUN_109dabb88(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_109dabb88(*param_1);
    FUN_109dabb88(param_1[1]);
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 109dabc18; end: 109dabc67;  */

void FUN_109dabc18(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((*(int *)(param_1 + 1) != 0) || (*(int *)((long)param_1 + 0xc) != 0)) {
    uVar2 = *(uint *)(param_1 + 2);
    if (((uint)(*(int *)(param_1 + 1) * 4) < uVar2) && (0x40 < uVar2)) {
      uVar3 = *(uint *)(param_1 + 2);
      uVar2 = 1 << (ulong)(0x21U - (int)LZCOUNT(*(int *)(param_1 + 1) + -1) & 0x1f);
      if ((int)uVar2 < 0x41) {
        uVar2 = 0x40;
      }
      uVar1 = 0;
      if (*(int *)(param_1 + 1) != 0) {
        uVar1 = uVar2;
      }
      if (uVar1 != uVar3) {
        __ZdlPvSt11align_val_t(*param_1,8);
        if (uVar1 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
        }
        else {
          uVar2 = (uVar1 << 2) / 3 + 1;
          uVar2 = uVar2 | uVar2 >> 1;
          uVar2 = uVar2 | uVar2 >> 2;
          uVar2 = uVar2 | uVar2 >> 4;
          uVar2 = uVar2 | uVar2 >> 8;
          uVar2 = (uVar2 >> 0x10 | uVar2) + 1;
          *(uint *)(param_1 + 2) = uVar2;
          puVar4 = (undefined8 *)((ulong)uVar2 << 4);
          __ZnwmSt11align_val_t(puVar4,8);
          *param_1 = puVar4;
          param_1[1] = 0;
          if (*(uint *)(param_1 + 2) != 0) {
            lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
            do {
              puVar4[1] = 0;
              *puVar4 = 0xffffffffffffffff;
              lVar5 = lVar5 + -0x10;
              puVar4 = puVar4 + 2;
            } while (lVar5 != 0);
          }
        }
        return;
      }
      param_1[1] = 0;
      if (uVar3 != 0) {
        lVar5 = (ulong)uVar3 << 4;
        puVar4 = (undefined8 *)*param_1;
        do {
          puVar4[1] = 0;
          *puVar4 = 0xffffffffffffffff;
          lVar5 = lVar5 + -0x10;
          puVar4 = puVar4 + 2;
        } while (lVar5 != 0);
      }
      return;
    }
    if (uVar2 != 0) {
      lVar5 = (ulong)uVar2 << 4;
      puVar4 = (undefined8 *)*param_1;
      do {
        puVar4[1] = 0;
        *puVar4 = 0xffffffffffffffff;
        lVar5 = lVar5 + -0x10;
        puVar4 = puVar4 + 2;
      } while (lVar5 != 0);
    }
    param_1[1] = 0;
  }
  return;
}



/* Entry: 109dabc68; end: 109dabd03;  */

void FUN_109dabc68(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar3 = 1 << (ulong)(0x21U - (int)LZCOUNT(*(int *)(param_1 + 1) + -1) & 0x1f);
  if ((int)uVar3 < 0x41) {
    uVar3 = 0x40;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 1) != 0) {
    uVar1 = uVar3;
  }
  if (uVar1 != uVar2) {
    __ZdlPvSt11align_val_t(*param_1,8);
    if (uVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else {
      uVar3 = (uVar1 << 2) / 3 + 1;
      uVar3 = uVar3 | uVar3 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 >> 0x10 | uVar3) + 1;
      *(uint *)(param_1 + 2) = uVar3;
      puVar4 = (undefined8 *)((ulong)uVar3 << 4);
      __ZnwmSt11align_val_t(puVar4,8);
      *param_1 = puVar4;
      param_1[1] = 0;
      if (*(uint *)(param_1 + 2) != 0) {
        lVar5 = (ulong)*(uint *)(param_1 + 2) << 4;
        do {
          puVar4[1] = 0;
          *puVar4 = 0xffffffffffffffff;
          lVar5 = lVar5 + -0x10;
          puVar4 = puVar4 + 2;
        } while (lVar5 != 0);
      }
    }
    return;
  }
  param_1[1] = 0;
  if (uVar2 != 0) {
    lVar5 = (ulong)uVar2 << 4;
    puVar4 = (undefined8 *)*param_1;
    do {
      puVar4[1] = 0;
      *puVar4 = 0xffffffffffffffff;
      lVar5 = lVar5 + -0x10;
      puVar4 = puVar4 + 2;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 109dabd04; end: 109dabdff;  */

undefined1  [16] FUN_109dabd04(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109dabde4;
  }
  plVar2 = (long *)param_1[3];
  FUN_109d34148(plVar2,param_3 + 0x11,3);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  plVar2[1] = 0;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109dabde4:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109dabe00; end: 109dabe57;  */

long * FUN_109dabe00(long *param_1)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 0x80;
  param_1[1] = 0;
  FUN_109d3a7bc();
  return param_1;
}



/* Entry: 109dabe58; end: 109dabf5b;  */

undefined1  [16] FUN_109dabe58(long *param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109dabf40;
  }
  plVar2 = (long *)param_1[3];
  FUN_109d34148(plVar2,param_3 + 0x11,3);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  *(undefined1 *)(plVar2 + 1) = param_4;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109dabf40:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109dabf5c; end: 109dabfb7;  */

undefined4 * FUN_109dabf5c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puStack_28;
  
  puVar1 = param_1;
  FUN_109dabfb8(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109dac04c(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 2) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109dabfb8; end: 109dac04b;  */

undefined8 FUN_109dabfb8(long *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar2 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar6 = iVar2 * 0x25 & uVar3;
    piVar5 = (int *)(*param_1 + (ulong)uVar6 * 0x10);
    iVar8 = *piVar5;
    if (iVar2 != iVar8) {
      iVar9 = 1;
      piVar7 = (int *)0x0;
      do {
        if (iVar8 == -1) {
          uVar4 = 0;
          if (piVar7 != (int *)0x0) {
            piVar5 = piVar7;
          }
          goto LAB_109dabff8;
        }
        piVar1 = piVar5;
        if (piVar7 != (int *)0x0 || iVar8 != -2) {
          piVar1 = piVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar3;
        piVar5 = (int *)(*param_1 + (ulong)uVar6 * 0x10);
        iVar8 = *piVar5;
        piVar7 = piVar1;
      } while (iVar2 != iVar8);
    }
    uVar4 = 1;
  }
LAB_109dabff8:
  *param_3 = (long)piVar5;
  return uVar4;
}



/* Entry: 109dac04c; end: 109dac0f3;  */

int * FUN_109dac04c(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int *piStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109dac098;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109dac0f4(param_1,uVar1);
  FUN_109dabfb8(param_1,param_3,&piStack_28);
  param_4 = piStack_28;
LAB_109dac098:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109dac0f4; end: 109dac21b;  */

void FUN_109dac0f4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (uint *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined4 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (uint *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xffffffff;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 4;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if (*puVar7 < 0xfffffffe) {
          FUN_109dabfb8(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(undefined8 *)(puStack_38 + 2) = *(undefined8 *)(puVar7 + 2);
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 4;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xffffffff;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109dac21c; end: 109dac27f;  */

undefined4 * FUN_109dac21c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puStack_28;
  
  puVar1 = param_1;
  FUN_109dac280(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109dac364(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 2) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109dac280; end: 109dac363;  */

undefined8 FUN_109dac280(long *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if ((int)param_1[2] == 0) {
    uVar5 = 0;
    piVar6 = (int *)0x0;
  }
  else {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    uVar7 = CONCAT44(iVar2 * 0x25,iVar3 * 0x25) +
            ((ulong)(uint)(iVar3 * 0x25) << 0x20 ^ 0xffffffffffffffff);
    uVar7 = uVar7 ^ uVar7 >> 0x16;
    uVar7 = uVar7 + (uVar7 << 0xd ^ 0xffffffffffffffff);
    uVar7 = (uVar7 ^ uVar7 >> 8) * 9;
    uVar7 = uVar7 ^ uVar7 >> 0xf;
    uVar7 = uVar7 + (uVar7 << 0x1b ^ 0xffffffffffffffff);
    uVar4 = (int)param_1[2] - 1;
    uVar8 = uVar4 & ((uint)(uVar7 >> 0x1f) ^ (uint)uVar7);
    piVar6 = (int *)(*param_1 + (ulong)uVar8 * 0x10);
    iVar10 = *piVar6;
    iVar11 = piVar6[1];
    if (iVar2 != iVar10 || iVar3 != iVar11) {
      iVar12 = 1;
      piVar9 = (int *)0x0;
      do {
        if ((iVar10 == -1) && (iVar11 == -1)) {
          uVar5 = 0;
          if (piVar9 != (int *)0x0) {
            piVar6 = piVar9;
          }
          goto LAB_109dac300;
        }
        piVar1 = piVar6;
        if ((piVar9 != (int *)0x0 || iVar11 != -2) || iVar10 != -2) {
          piVar1 = piVar9;
        }
        uVar8 = uVar8 + iVar12;
        iVar12 = iVar12 + 1;
        uVar8 = uVar8 & uVar4;
        piVar6 = (int *)(*param_1 + (ulong)uVar8 * 0x10);
        iVar10 = *piVar6;
        iVar11 = piVar6[1];
        piVar9 = piVar1;
      } while (iVar2 != iVar10 || iVar3 != iVar11);
    }
    uVar5 = 1;
  }
LAB_109dac300:
  *param_3 = (long)piVar6;
  return uVar5;
}



/* Entry: 109dac364; end: 109dac40f;  */

int * FUN_109dac364(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int *piStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109dac3b0;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109dac410(param_1,uVar1);
  FUN_109dac280(param_1,param_3,&piStack_28);
  param_4 = piStack_28;
LAB_109dac3b0:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -1 || param_4[1] != -1) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109dac410; end: 109dac54f;  */

void FUN_109dac410(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  piVar6 = (int *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (piVar6 != (int *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xffffffffffffffff;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      piVar7 = piVar6;
      do {
        if ((*piVar7 != -1 || piVar7[1] != -1) && (*piVar7 != -2 || piVar7[1] != -2)) {
          FUN_109dac280(param_1,piVar7,&piStack_38);
          *piStack_38 = *piVar7;
          piStack_38[1] = piVar7[1];
          *(undefined8 *)(piStack_38 + 2) = *(undefined8 *)(piVar7 + 2);
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        piVar7 = piVar7 + 4;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(piVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xffffffffffffffff;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109dac550; end: 109dac65b;  */

ulong FUN_109dac550(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lStack_50;
  long lStack_48;
  
  plVar12 = &lStack_50;
  bVar8 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar8) {
    uVar1 = (ulong)bVar8;
  }
  bVar9 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar9) {
    uVar2 = (ulong)bVar9;
  }
  if (uVar1 == uVar2) {
    plVar10 = (long *)*param_1;
    if (-1 < (char)bVar8) {
      plVar10 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar9) {
      plVar3 = param_2;
    }
    _memcmp(plVar10,plVar3);
    if ((int)plVar10 == 0) {
      lVar4 = param_1[3];
      lVar6 = param_1[4];
      lVar5 = param_2[3];
      lVar7 = param_2[4];
      if ((lVar6 == lVar7) &&
         ((lVar6 == 0 || (lVar11 = lVar4, _memcmp(lVar4,lVar5,lVar6), (int)lVar11 == 0)))) {
        plVar12 = param_1 + 5;
        func_0x000109d31f54(plVar12,param_2[5],param_2[6]);
        if ((int)plVar12 == 0) {
          return (ulong)(*(uint *)(param_1 + 7) < *(uint *)(param_2 + 7));
        }
      }
      else {
        lStack_50 = lVar4;
        lStack_48 = lVar6;
        func_0x000109d31f54(&lStack_50,lVar5,lVar7);
      }
      return (ulong)plVar12 >> 0x1f & 1;
    }
  }
  func_0x000107c2abd4(param_1,param_2);
  return (ulong)((char)param_1 < '\0');
}



/* Entry: 109dac65c; end: 109dac707;  */

bool FUN_109dac65c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if ((int)plVar7 == 0) {
      bVar6 = *(uint *)(param_2 + 3) <= *(uint *)(param_1 + 3);
      if (*(uint *)(param_1 + 3) == *(uint *)(param_2 + 3)) {
        bVar6 = *(uint *)((long)param_2 + 0x1c) <= *(uint *)((long)param_1 + 0x1c);
      }
      return !bVar6;
    }
  }
  func_0x000107c2abd4(param_1,param_2);
  return (char)param_1 < '\0';
}



/* Entry: 109dac708; end: 109dac823;  */

undefined1  [16]
FUN_109dac708(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x000109dac7a0(param_1,&uStack_38,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x40;
    __Znwm();
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    FUN_109dac824(param_1,uStack_38,plVar2,lVar4);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 109dac824; end: 109dac877;  */

void FUN_109dac824(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



/* Entry: 109dac878; end: 109daca77;  */

ulong FUN_109dac878(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  bool bVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lStack_50;
  long lStack_48;
  
  plVar16 = &lStack_50;
  bVar10 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar10) {
    uVar1 = (ulong)bVar10;
  }
  bVar11 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar11) {
    uVar2 = (ulong)bVar11;
  }
  if (uVar1 == uVar2) {
    plVar14 = (long *)*param_1;
    if (-1 < (char)bVar10) {
      plVar14 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar11) {
      plVar3 = param_2;
    }
    _memcmp(plVar14,plVar3);
    if ((int)plVar14 == 0) {
      lVar4 = param_1[3];
      lVar6 = param_1[4];
      lVar5 = param_2[3];
      lVar7 = param_2[4];
      if ((lVar6 != lVar7) ||
         ((lVar6 != 0 && (lVar15 = lVar4, _memcmp(lVar4,lVar5,lVar6), (int)lVar15 != 0)))) {
        lStack_50 = lVar4;
        lStack_48 = lVar6;
        func_0x000109d31f54(&lStack_50,lVar5,lVar7);
        return (ulong)plVar16 >> 0x1f & 1;
      }
      iVar8 = (int)param_1[5];
      iVar9 = (int)param_2[5];
      bVar13 = SBORROW4(iVar8,iVar9);
      iVar12 = iVar8 - iVar9;
      if (iVar8 == iVar9) {
        return (ulong)(*(uint *)((long)param_1 + 0x2c) < *(uint *)((long)param_2 + 0x2c));
      }
      goto LAB_109dac8fc;
    }
  }
  func_0x000107c2abd4(param_1,param_2);
  iVar12 = (int)(char)param_1;
  bVar13 = false;
LAB_109dac8fc:
  return (ulong)(iVar12 < 0 != bVar13);
}



/* Entry: 109daca78; end: 109dacb13;  */

bool FUN_109daca78(ulong param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\x01' && *(char *)(param_2 + 0x1c) != '\0') {
    uVar2 = param_1;
    func_0x000107c2abd4(param_1,param_2);
    cVar1 = (char)uVar2;
    if (((uVar2 & 0xff) == 0) &&
       (cVar1 = *(byte *)(param_2 + 0x18) < *(byte *)(param_1 + 0x18),
       *(byte *)(param_1 + 0x18) < *(byte *)(param_2 + 0x18))) {
      cVar1 = -1;
    }
  }
  else {
    if (cVar1 != *(char *)(param_2 + 0x1c)) {
      return (bool)cVar1;
    }
    uVar2 = param_1;
    func_0x000107c2abd4(param_1,param_2);
    cVar1 = (char)uVar2;
    if (((uVar2 & 0xff) == 0) &&
       (cVar1 = *(int *)(param_2 + 0x18) < *(int *)(param_1 + 0x18),
       *(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18))) {
      cVar1 = -1;
    }
  }
  return cVar1 < '\0';
}



/* Entry: 109dacb14; end: 109dacbb3;  */

undefined8 FUN_109dacb14(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 8);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109dacb54;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 8);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109dacb54:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109dacbb4; end: 109dacbeb;  */

void FUN_109dacbb4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110b58588;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109dacbec; end: 109dacc0b;  */

void FUN_109dacbec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110b58588;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 109dacc0c; end: 109dacdcb;  */

long FUN_109dacc0c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined7 uStack_148;
  char cStack_141;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined7 uStack_120;
  char cStack_119;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined7 uStack_108;
  char cStack_101;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [176];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109e00994(&uStack_168,*param_3,**(undefined8 **)(param_1 + 8),0,
                *(undefined8 *)(param_1 + 0x10),0,0,0,0);
  param_2[1] = uStack_160;
  *param_2 = uStack_168;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    __ZdlPv(param_2[2]);
  }
  param_2[3] = uStack_150;
  param_2[2] = CONCAT71(uStack_157,uStack_158);
  uVar1 = CONCAT17(cStack_141,uStack_148);
  cStack_141 = '\0';
  uStack_158 = 0;
  param_2[4] = uVar1;
  param_2[5] = uStack_140;
  *(undefined4 *)(param_2 + 6) = uStack_138;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    __ZdlPv(param_2[7]);
  }
  param_2[8] = uStack_128;
  param_2[7] = CONCAT71(uStack_12f,uStack_130);
  param_2[9] = CONCAT17(cStack_119,uStack_120);
  cStack_119 = '\0';
  uStack_130 = 0;
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    __ZdlPv(param_2[10]);
  }
  param_2[0xb] = uStack_110;
  param_2[10] = CONCAT71(uStack_117,uStack_118);
  param_2[0xc] = CONCAT17(cStack_101,uStack_108);
  cStack_101 = '\0';
  uStack_118 = 0;
  lVar2 = param_2[0xd];
  if (lVar2 != 0) {
    param_2[0xe] = lVar2;
    __ZdlPv();
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  param_2[0xe] = lStack_f8;
  param_2[0xd] = lStack_100;
  param_2[0xf] = uStack_f0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  lStack_100 = 0;
  puVar3 = auStack_e8;
  FUN_109d38270(param_2 + 0x10);
  FUN_109d3865c(auStack_e8);
  lVar2 = lStack_100;
  if (lStack_100 != 0) {
    lStack_f8 = lStack_100;
    __ZdlPv();
  }
  if (cStack_101 < '\0') {
    lVar2 = CONCAT71(uStack_117,uStack_118);
    __ZdlPv();
  }
  if (cStack_119 < '\0') {
    lVar2 = CONCAT71(uStack_12f,uStack_130);
    __ZdlPv();
  }
  if (cStack_141 < '\0') {
    lVar2 = CONCAT71(uStack_157,uStack_158);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x000109d38208(&uStack_168);
  __Unwind_Resume(lVar2);
  func_0x000107c31948(puVar3,&PTR_DAT_110b585f8);
  lVar2 = lVar2 + 8;
  if ((int)puVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 109dacdcc; end: 109dace07;  */

long FUN_109dacdcc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b585f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109dace08; end: 109dace13;  */

undefined ** FUN_109dace08(void)

{
  return &PTR_DAT_110b585f8;
}



/* Entry: 109dace14; end: 109dad5f3;  */

void FUN_109dace14(uint *param_1,long param_2,ulong *param_3,ulong *param_4,undefined8 *param_5,
                  undefined8 *param_6,uint param_7,uint param_8)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  code *pcVar8;
  char *pcVar9;
  char ***pppcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  char *pcStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined2 uStack_1d8;
  char **appcStack_1d0 [2];
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined2 uStack_1b0;
  char ***pppcStack_1a8;
  undefined8 ****ppppuStack_1a0;
  uint auStack_198 [2];
  undefined8 ****ppppuStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 ***pppuStack_178;
  ulong uStack_170;
  undefined4 uStack_168;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *(char *)(param_2 + 0x177);
  lVar16 = *(long *)(param_2 + 0x160);
  if (-1 < (long)cVar5) {
    lVar16 = param_2 + 0x160;
  }
  pcVar25 = (char *)*param_3;
  uVar23 = param_3[1];
  uVar17 = *(ulong *)(param_2 + 0x168);
  if (-1 < cVar5) {
    uVar17 = (long)cVar5;
  }
  if ((uVar23 == uVar17) &&
     ((uVar23 == 0 || (pcVar9 = pcVar25, _memcmp(pcVar25,lVar16,uVar23), (int)pcVar9 == 0)))) {
    uVar23 = 0;
    pcVar25 = "";
    *param_3 = (ulong)"";
    param_3[1] = 0;
  }
  if (param_4[1] == 0) {
    uVar23 = 0;
    *param_4 = (ulong)&UNK_10f5fa7f8;
    param_4[1] = 7;
    pcVar25 = "";
    *param_3 = (ulong)"";
    param_3[1] = 0;
  }
  uVar2 = *(uint *)(param_2 + 0x68);
  if (uVar2 == 0) {
    bVar3 = *(byte *)(param_5 + 2);
    uVar4 = *(undefined1 *)(param_2 + 0x1c1);
    if (bVar3 == 0) {
      uVar4 = 0;
    }
    *(undefined1 *)(param_2 + 0x1c1) = uVar4;
    *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | bVar3;
    *(undefined1 *)(param_2 + 0x1c0) = *(undefined1 *)(param_6 + 2);
  }
  if (param_7 < 5) {
LAB_109dacf64:
    uVar21 = uVar2;
    if (param_8 == 0) {
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      uStack_180 = 0x100;
      uStack_188 = 0;
      uStack_1e8 = 0;
      uStack_1d8 = 0x705;
      uStack_1c0 = *param_4;
      uStack_1b8 = param_4[1];
      appcStack_1d0[0] = &pcStack_1f8;
      uStack_1b0 = 0x502;
      pppcVar10 = appcStack_1d0;
      pppppuVar14 = &ppppuStack_190;
      pcStack_1f8 = pcVar25;
      uStack_1f0 = uVar23;
      ppppuStack_190 = &pppuStack_178;
      func_0x000109d5975c();
      plVar24 = (long *)(param_2 + 0x148);
      pppcStack_1a8 = pppcVar10;
      ppppuStack_1a0 = pppppuVar14;
      auStack_198[0] = uVar2;
      FUN_109d8e014(plVar24,pppcVar10,pppppuVar14,auStack_198);
      if (((ulong)pppcVar10 & 1) == 0) {
        lVar16 = *plVar24;
        *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfe;
        *param_1 = *(uint *)(lVar16 + 8);
      }
      if (ppppuStack_190 != &pppuStack_178) {
        _free();
      }
      if (((ulong)pppcVar10 & 1) == 0) goto LAB_109dad3a4;
      uVar21 = *(uint *)(param_2 + 0x68);
      param_8 = uVar2;
    }
    if (uVar21 <= param_8) {
      uVar2 = param_8 + 1;
      if (uVar2 != uVar21) {
        uVar17 = (ulong)uVar21;
        if (uVar2 < uVar21) {
          lVar16 = (ulong)uVar2 * 0x48 + uVar17 * -0x48;
          puVar22 = (undefined8 *)(*(long *)(param_2 + 0x60) + uVar17 * 0x48);
          do {
            if (*(char *)((long)puVar22 + -0x31) < '\0') {
              __ZdlPv(puVar22[-9]);
            }
            lVar16 = lVar16 + 0x48;
            puVar22 = puVar22 + -9;
          } while (lVar16 != 0);
        }
        else {
          if (*(uint *)(param_2 + 0x6c) < uVar2) {
            puVar22 = (undefined8 *)(param_2 + 0x60);
            FUN_109dffb24(puVar22,(undefined8 *)(param_2 + 0x70),(ulong)uVar2,0x48,&ppppuStack_190);
            puVar11 = *(undefined8 **)(param_2 + 0x60);
            if (*(uint *)(param_2 + 0x68) != 0) {
              puVar18 = puVar11 + (ulong)*(uint *)(param_2 + 0x68) * 9;
              puVar20 = puVar22;
              do {
                uVar28 = puVar11[1];
                uVar27 = *puVar11;
                puVar20[2] = puVar11[2];
                puVar20[1] = uVar28;
                *puVar20 = uVar27;
                puVar11[1] = 0;
                puVar11[2] = 0;
                *puVar11 = 0;
                uVar28 = puVar11[4];
                uVar27 = puVar11[3];
                uVar31 = puVar11[6];
                uVar30 = puVar11[5];
                uVar32 = *(undefined8 *)((long)puVar11 + 0x31);
                *(undefined8 *)((long)puVar20 + 0x39) = *(undefined8 *)((long)puVar11 + 0x39);
                *(undefined8 *)((long)puVar20 + 0x31) = uVar32;
                puVar20[6] = uVar31;
                puVar20[5] = uVar30;
                puVar20[4] = uVar28;
                puVar20[3] = uVar27;
                puVar20 = puVar20 + 9;
                puVar11 = puVar11 + 9;
              } while (puVar11 != puVar18);
              puVar11 = *(undefined8 **)(param_2 + 0x60);
              uVar21 = *(uint *)(param_2 + 0x68);
              if (uVar21 != 0) {
                lVar16 = (ulong)uVar21 * -0x48;
                puVar11 = puVar11 + (ulong)uVar21 * 9;
                do {
                  if (*(char *)((long)puVar11 + -0x31) < '\0') {
                    __ZdlPv(puVar11[-9]);
                  }
                  lVar16 = lVar16 + 0x48;
                  puVar11 = puVar11 + -9;
                } while (lVar16 != 0);
                puVar11 = *(undefined8 **)(param_2 + 0x60);
              }
            }
            ppppuVar6 = ppppuStack_190;
            if (puVar11 != (undefined8 *)(param_2 + 0x70)) {
              _free();
            }
            *(undefined8 **)(param_2 + 0x60) = puVar22;
            *(int *)(param_2 + 0x6c) = (int)ppppuVar6;
            uVar17 = (ulong)*(uint *)(param_2 + 0x68);
          }
          else {
            puVar22 = *(undefined8 **)(param_2 + 0x60);
          }
          lVar16 = uVar2 - uVar17;
          if (lVar16 != 0) {
            _bzero(puVar22 + uVar17 * 9,((lVar16 * 0x48 - 0x48U) / 0x48) * 0x48 + 0x48);
          }
        }
        *(uint *)(param_2 + 0x68) = uVar2;
      }
    }
    puVar22 = (undefined8 *)(*(long *)(param_2 + 0x60) + (ulong)param_8 * 0x48);
    if (*(char *)((long)puVar22 + 0x17) < '\0') {
      if (puVar22[1] == 0) goto LAB_109dad234;
LAB_109dad1ec:
      func_0x000109df6eb4();
      puVar22 = (undefined8 *)0x38;
      __Znwm();
      ppppuStack_190 = (undefined8 ****)&UNK_10f5fa800;
      uStack_170 = CONCAT62(uStack_170._2_6_,0x103);
      *puVar22 = &PTR_FUN_110b5c180;
      FUN_109e04498(puVar22 + 1,&ppppuStack_190);
LAB_109dad37c:
      puVar22[4] = 3;
      puVar22[5] = &PTR_PTR_1132fef20;
      *(undefined1 *)(puVar22 + 6) = 1;
      *(byte *)(param_1 + 2) = (byte)param_1[2] | 1;
      *(undefined8 **)param_1 = puVar22;
      goto LAB_109dad3a4;
    }
    if (*(char *)((long)puVar22 + 0x17) != '\0') goto LAB_109dad1ec;
LAB_109dad234:
    if (*(char *)(param_2 + 0x1c0) != *(char *)(param_6 + 2)) {
      func_0x000109df6eb4();
      puVar22 = (undefined8 *)0x38;
      __Znwm();
      ppppuStack_190 = (undefined8 ****)&UNK_10f5fa5a8;
      uStack_170 = CONCAT62(uStack_170._2_6_,0x103);
      *puVar22 = &PTR_FUN_110b5c180;
      FUN_109e04498(puVar22 + 1,&ppppuStack_190);
      goto LAB_109dad37c;
    }
    if (param_3[1] == 0) {
      uStack_180 = 0;
      pppuStack_178 = (undefined8 ****)0x0;
      uStack_170 = param_4[1];
      uStack_188 = param_4[1];
      ppppuStack_190 = (undefined8 ****)*param_4;
      uStack_168 = 0;
      FUN_109dfa638(&ppppuStack_190);
      pppuVar7 = pppuStack_178;
      uVar17 = uStack_180;
      if ((undefined8 ****)pppuStack_178 == (undefined8 ****)0x0) {
LAB_109dad2bc:
        if (param_3[1] != 0) goto LAB_109dad2c4;
      }
      else {
        uVar15 = *param_4;
        uVar23 = param_4[1];
        uVar12 = uVar15;
        FUN_109dfaea0(uVar15,uVar23,0);
        if (uVar12 <= uVar23) {
          uVar23 = uVar12;
        }
        uVar1 = 0;
        if (uVar12 != 0xffffffffffffffff) {
          uVar1 = uVar23;
        }
        uVar23 = 0;
        if (uVar12 != 0xffffffffffffffff) {
          uVar23 = uVar15;
        }
        *param_3 = uVar23;
        param_3[1] = uVar1;
        if (uVar1 != 0) {
          *param_4 = uVar17;
          param_4[1] = (ulong)pppuVar7;
          goto LAB_109dad2bc;
        }
      }
      iVar26 = 0;
    }
    else {
LAB_109dad2c4:
      plVar24 = (long *)(param_2 + 8);
      lVar16 = *plVar24;
      FUN_109dad740(lVar16,lVar16 + (ulong)*(uint *)(param_2 + 0x10) * 0x18,param_3,&ppppuStack_190)
      ;
      uVar17 = (lVar16 - *plVar24 >> 3) * -0x5555555555555555;
      if ((ulong)*(uint *)(param_2 + 0x10) <= (uVar17 & 0xffffffff)) {
        uVar23 = param_3[1];
        if (0x7ffffffffffffff7 < uVar23) {
          func_0x000104c4f6b8();
          goto LAB_109dad5a4;
        }
        uVar15 = *param_3;
        if (uVar23 < 0x17) {
          uStack_180 = CONCAT17((char)uVar23,(undefined7)uStack_180);
          pppppuVar13 = &ppppuStack_190;
          if (uVar23 != 0) goto LAB_109dad428;
        }
        else {
          pppppuVar14 = (undefined8 *****)0x19;
          if ((uVar23 | 7) != 0x17) {
            pppppuVar14 = (undefined8 *****)((uVar23 | 7) + 1);
          }
          pppppuVar13 = pppppuVar14;
          __Znwm();
          uStack_180 = (ulong)pppppuVar14 | 0x8000000000000000;
          ppppuStack_190 = pppppuVar13;
          uStack_188 = uVar23;
LAB_109dad428:
          _memmove(pppppuVar13,uVar15,uVar23);
        }
        *(undefined1 *)((long)pppppuVar13 + uVar23) = 0;
        FUN_109d37bcc(plVar24,&ppppuStack_190,1);
        plVar19 = (long *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 0x18);
        lVar29 = plVar24[1];
        lVar16 = *plVar24;
        plVar19[2] = plVar24[2];
        plVar19[1] = lVar29;
        *plVar19 = lVar16;
        plVar24[1] = 0;
        plVar24[2] = 0;
        *plVar24 = 0;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        if ((long)uStack_180 < 0) {
          __ZdlPv(ppppuStack_190);
        }
      }
      iVar26 = (int)uVar17 + 1;
    }
    uVar17 = param_4[1];
    if (uVar17 < 0x7ffffffffffffff8) {
      uVar23 = *param_4;
      if (uVar17 < 0x17) {
        uStack_180 = CONCAT17((char)uVar17,(undefined7)uStack_180);
        pppppuVar13 = &ppppuStack_190;
        if (uVar17 != 0) goto LAB_109dad4ec;
      }
      else {
        pppppuVar14 = (undefined8 *****)0x19;
        if ((uVar17 | 7) != 0x17) {
          pppppuVar14 = (undefined8 *****)((uVar17 | 7) + 1);
        }
        pppppuVar13 = pppppuVar14;
        __Znwm();
        uStack_180 = (ulong)pppppuVar14 | 0x8000000000000000;
        ppppuStack_190 = pppppuVar13;
        uStack_188 = uVar17;
LAB_109dad4ec:
        _memmove(pppppuVar13,uVar23,uVar17);
      }
      *(undefined1 *)((long)pppppuVar13 + uVar17) = 0;
      if (*(char *)((long)puVar22 + 0x17) < '\0') {
        __ZdlPv(*puVar22);
      }
      puVar22[1] = uStack_188;
      *puVar22 = ppppuStack_190;
      puVar22[2] = uStack_180;
      *(int *)(puVar22 + 3) = iVar26;
      uVar28 = param_5[1];
      uVar27 = *param_5;
      *(undefined1 *)((long)puVar22 + 0x2c) = *(undefined1 *)(param_5 + 2);
      *(undefined8 *)((long)puVar22 + 0x24) = uVar28;
      *(undefined8 *)((long)puVar22 + 0x1c) = uVar27;
      bVar3 = *(byte *)(param_5 + 2);
      uVar4 = *(undefined1 *)(param_2 + 0x1c1);
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      *(undefined1 *)(param_2 + 0x1c1) = uVar4;
      *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | bVar3;
      uVar28 = param_6[1];
      uVar27 = *param_6;
      *(undefined1 *)(puVar22 + 8) = *(undefined1 *)(param_6 + 2);
      puVar22[7] = uVar28;
      puVar22[6] = uVar27;
      if (*(char *)(param_6 + 2) == '\x01') {
        *(undefined1 *)(param_2 + 0x1c0) = 1;
      }
      *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfe;
      *param_1 = param_8;
      goto LAB_109dad3a4;
    }
  }
  else {
    uStack_188 = param_5[1];
    ppppuStack_190 = (undefined8 ****)*param_5;
    uStack_180 = CONCAT71(uStack_180._1_7_,*(undefined1 *)(param_5 + 2));
    bVar3 = *(byte *)(param_2 + 399);
    uVar17 = *(ulong *)(param_2 + 0x180);
    if (-1 < (char)bVar3) {
      uVar17 = (ulong)bVar3;
    }
    if ((uVar17 == 0) || (uVar17 != param_4[1])) goto LAB_109dacf64;
    lVar16 = *(long *)(param_2 + 0x178);
    if (-1 < (char)bVar3) {
      lVar16 = param_2 + 0x178;
    }
    _memcmp(lVar16,*param_4);
    if ((int)lVar16 != 0) goto LAB_109dacf64;
    cVar5 = *(char *)(param_2 + 0x1a4);
    if ((cVar5 == (char)uStack_180) && (cVar5 != '\0')) {
      if (*(undefined8 ******)(param_2 + 0x194) != (undefined8 *****)ppppuStack_190 ||
          *(ulong *)(param_2 + 0x19c) != uStack_188) goto LAB_109dacf64;
    }
    else if (cVar5 != (char)uStack_180) goto LAB_109dacf64;
    *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfe;
    *param_1 = 0;
LAB_109dad3a4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104c4f6b8();
LAB_109dad5a4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109dad5a8);
  (*pcVar8)();
}



/* Entry: 109dad5f4; end: 109dad73f;  */

void FUN_109dad5f4(byte *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_80 [8];
  long *plStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  undefined2 uStack_58;
  
  if ((param_1[8] & 1) != 0) {
    return;
  }
  lVar5 = param_2[1];
  if (*(uint *)(param_2 + 0xf) == 0) {
    plStack_78 = (long *)0x0;
  }
  else {
    plStack_78 = *(long **)(param_2[0xe] + (ulong)*(uint *)(param_2 + 0xf) * 0x20 + -0x20);
  }
  lVar3 = lVar5 + 0x648;
  FUN_109dadd98(lVar3,&plStack_78,auStack_80);
  if ((int)lVar3 == 0) {
    return;
  }
  if ((*param_1 >> 2 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_1 + -8);
    plVar7 = plVar4 + 2;
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      if ((char)*plVar7 == '_') {
        plVar7 = (long *)((long)plVar4 + 0x11);
        lVar3 = lVar3 + -1;
      }
      goto LAB_109dad6a0;
    }
  }
  lVar3 = 0;
LAB_109dad6a0:
  uVar1 = *(undefined4 *)(lVar5 + 0x644);
  uVar6 = *param_4;
  uVar2 = param_3;
  FUN_109e00498(param_3,uVar6);
  FUN_109e00770(param_3,uVar6,uVar2);
  plStack_78 = (long *)&UNK_10f5fa737;
  uStack_58 = 0x103;
  FUN_109da7f80(lVar5,&plStack_78,1);
  (**(code **)(*param_2 + 0xc0))(param_2,lVar5,0);
  uStack_64 = (undefined4)param_3;
  plStack_78 = plVar7;
  lStack_70 = lVar3;
  uStack_68 = uVar1;
  lStack_60 = lVar5;
  func_0x000109dad7b8(param_2[1] + 0x678,&plStack_78);
  return;
}



/* Entry: 109dad740; end: 109dad87f;  */

undefined8 * FUN_109dad740(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    uVar2 = *param_3;
    lVar3 = param_3[1];
    do {
      cVar4 = *(char *)((long)param_1 + 0x17);
      puVar5 = (undefined8 *)*param_1;
      if (-1 < (long)cVar4) {
        puVar5 = param_1;
      }
      lVar1 = param_1[1];
      if (-1 < cVar4) {
        lVar1 = (long)cVar4;
      }
    } while (((lVar1 != lVar3) || ((lVar3 != 0 && (_memcmp(puVar5,uVar2,lVar3), (int)puVar5 != 0))))
            && (param_1 = param_1 + 3, param_1 != param_2));
  }
  return param_1;
}



/* Entry: 109dad880; end: 109dad893;  */

void FUN_109dad880(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000104c4f6cc(&UNK_10f5fa81e);
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000104c4f740();
  puVar1 = &UNK_10f5fa81e;
  func_0x000104c4f6cc();
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    __Znwm(param_2 * 0x58);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109dad9a8();
    puVar2 = puVar1;
    FUN_109dada48(puVar1,param_2,param_3,*(undefined8 *)(puVar1 + 8));
    *(undefined **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 109dad894; end: 109dad8c7;  */

void FUN_109dad894(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000104c4f740();
  puVar1 = &UNK_10f5fa81e;
  func_0x000104c4f6cc();
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    __Znwm(param_2 * 0x58);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109dad9a8();
    puVar2 = puVar1;
    FUN_109dada48(puVar1,param_2,param_3,*(undefined8 *)(puVar1 + 8));
    *(undefined **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 109dad8c8; end: 109dad8db;  */

void FUN_109dad8c8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_10f5fa81e;
  func_0x000104c4f6cc();
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    __Znwm(param_2 * 0x58);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109dad9a8();
    puVar2 = puVar1;
    FUN_109dada48(puVar1,param_2,param_3,*(undefined8 *)(puVar1 + 8));
    *(undefined **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 109dad8dc; end: 109dad923;  */

void FUN_109dad8dc(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    __Znwm(param_2 * 0x58);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109dad9a8();
    lVar1 = param_1;
    FUN_109dada48(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109dad924; end: 109dad9a7;  */

void FUN_109dad924(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109dad9a8(param_1,param_4);
    lVar1 = param_1;
    FUN_109dada48(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}


