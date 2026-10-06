/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082b1954; end: 1082b1a23;  */

long FUN_1082b1954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 in_stack_00000010;
  
  lVar2 = param_1;
  func_0x0001082b26c4(in_stack_00000010);
  *(undefined4 *)(lVar2 + 0x18) = param_8;
  lVar2 = lVar2 + 0x20;
  FUN_108283324(lVar2,param_3);
  uVar1 = (undefined4)lVar2;
  *(undefined8 *)(param_1 + 0x90) = param_4;
  *(undefined4 *)(param_1 + 0x98) = param_5;
  *(undefined1 *)(param_1 + 0x9c) = param_6;
  *(undefined4 *)(param_1 + 0xa0) = param_9;
  FUN_1082a04c8();
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  FUN_1082b2610(param_1 + 0xa8,param_2);
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcb) = param_7;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  func_0x0001082b2764();
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 1082b1a24; end: 1082b1b17;  */

undefined8 * FUN_1082b1a24(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a36658;
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  param_1[2] = plVar2;
  *(int *)(param_1 + 3) = (int)plVar2[0x17];
  (**(code **)(*plVar2 + 0x50))(param_1 + 4);
  lVar3 = param_1[2];
  param_1[0x12] = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined4 *)(param_1 + 0x13) = param_3;
  *(bool *)((long)param_1 + 0x9c) = *(char *)(lVar3 + 0x90) == '\0';
  uVar1 = *(undefined4 *)(lVar3 + 0x94);
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)((long)param_1 + 0xa4) = uVar1;
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 199) = 0;
  *(undefined1 *)((long)param_1 + 0xcb) = *(undefined1 *)(lVar3 + 0xbc);
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x1a,lVar3 + 0x98);
  param_1[0x1d] = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 1082b1b18; end: 1082b1b67;  */

undefined8 * FUN_1082b1b18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a36658;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x1a);
  func_0x0001082b2748();
  if (*(char *)(param_1 + 0xf) == '\x01') {
    func_0x0001082b26a0(param_1);
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_10826b5e8(param_1 + 2);
  return param_1;
}



/* Entry: 1082b1b68; end: 1082b1c63;  */

void FUN_1082b1b68(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = 0;
  if (*(int *)(param_2 + 0x98) == 0) {
    lVar1 = (long)*(char *)(param_2 + 0xe7);
    if (lVar1 < 0) {
      lVar2 = *(long *)(param_2 + 0xd0);
      lVar1 = *(long *)(param_2 + 0xd8);
    }
    else {
      lVar2 = param_2 + 0xd0;
    }
    FUN_1082aeaec(auStack_30,param_3,*(undefined8 *)(param_2 + 0x90),param_2 + 0x20,
                  *(undefined4 *)(param_2 + 0x8c),param_5,param_4,*(undefined1 *)(param_2 + 0xcb),
                  param_9,lVar2,lVar1);
    func_0x0001082b2770();
  }
  else {
    lVar1 = (long)*(char *)(param_2 + 0xe7);
    if (lVar1 < 0) {
      lVar2 = *(long *)(param_2 + 0xd0);
      lVar1 = *(long *)(param_2 + 0xd8);
    }
    else {
      lVar2 = param_2 + 0xd0;
    }
    FUN_1082aebe0(auStack_30,param_3,*(undefined8 *)(param_2 + 0x90),param_2 + 0x20,
                  *(undefined4 *)(param_2 + 0x8c),param_5,param_4,param_6,
                  *(undefined1 *)(param_2 + 0x9c),*(undefined1 *)(param_2 + 0xcb),lVar2,lVar1);
    func_0x0001082b2770();
  }
  FUN_108283764(auStack_30);
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    lStack_28 = 0;
  }
  *param_1 = lVar1;
  FUN_10826b5e8(&lStack_28);
  return;
}



/* Entry: 1082b1c64; end: 1082b1c97;  */

bool FUN_1082b1c64(long param_1)

{
  if (*(int *)(param_1 + 0xa0) == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(short *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + 4) == 0;
  }
  return false;
}



/* Entry: 1082b1c98; end: 1082b1d47;  */

bool FUN_1082b1c98(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long *in_x5;
  long lStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_1082b1b68(&lStack_38);
    bVar1 = lStack_38 != 0;
    if (lStack_38 != 0) {
      lVar2 = lStack_38;
      if ((in_x5 != (long *)0x0) && (*(short *)(*in_x5 + 4) != 0)) {
        func_0x0001082aedbc(param_2,in_x5);
        lVar2 = lStack_38;
      }
      lStack_38 = 0;
      func_0x0001082aa914((long *)(param_1 + 0x10),lVar2);
      func_0x0001082b2730();
    }
    func_0x0001082b2718();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1082b1d48; end: 1082b1d53;  */

void FUN_1082b1d48(long param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar1 = plVar8 + 1;
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
  if (plVar8[0x10] == 0) {
    if ((*(int *)((long)plVar8 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(plVar8[0x10] + 0x20) + 0x78);
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



/* Entry: 1082b1d54; end: 1082b1dfb;  */

void FUN_1082b1d54(long *param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long *plStack_68;
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x30))();
  if (plVar4 == (long *)0x0) {
    iVar9 = 1;
  }
  else {
    iVar9 = (int)(char)plVar4[1];
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x20))();
  if (plVar5 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_1082b33e8();
    uVar2 = (uint)plVar5;
  }
  plVar5 = param_1;
  FUN_1082b1dfc();
  cVar1 = *(char *)((long)param_1 + 0xcb);
  if ((bRam0000000113826bd8 & 1) == 0) {
    iVar3 = 0x13826bd8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_108320d08();
      iRam0000000113826bd0 = iVar3;
      ___cxa_guard_release(0x113826bd8);
    }
  }
  (**(code **)(*param_2 + 0x78))(param_2,param_1 + 4);
  FUN_10827a280(&plStack_68,param_3,iRam0000000113826bd0,5);
  lVar6 = *plStack_68;
  *(int *)(lVar6 + 8) = (int)plVar5;
  *(int *)(lVar6 + 0xc) = (int)((ulong)plVar5 >> 0x20);
  *(int *)(lVar6 + 0x10) = (int)param_2;
  *(int *)(lVar6 + 0x14) = (int)((ulong)param_2 >> 0x20);
  uVar7 = 2;
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  uVar8 = 4;
  if (plVar4 == (long *)0x0) {
    uVar8 = 0;
  }
  *(uint *)(lVar6 + 0x18) = uVar8 | iVar9 << 3 | uVar2 | uVar7;
  FUN_10827a320(&plStack_68);
  return;
}



/* Entry: 1082b1dfc; end: 1082b1e13;  */

ulong FUN_1082b1dfc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x98) == 1) {
    return uVar1;
  }
  uVar2 = uVar1 >> 0x20;
  FUN_108320fd8(uVar1);
  FUN_108320fd8(uVar2);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 1082b1e14; end: 1082b1e53;  */

bool FUN_1082b1e14(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x98) == 1) {
    return true;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  lVar1 = lVar2;
  func_0x000108320fa4(lVar2);
  return lVar2 == lVar1;
}



/* Entry: 1082b1e54; end: 1082b22db;  */

void FUN_1082b1e54(undefined8 *param_1,ulong **param_2,ulong *param_3,undefined8 ***param_4,
                  undefined4 param_5,undefined8 **param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,char param_12,
                  undefined4 param_13,undefined8 ***param_14)

{
  undefined1 uVar1;
  ulong **ppuVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  ulong **ppuVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar9;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 *extraout_x12;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  ulong *puStack_1d8;
  ulong **ppuStack_1d0;
  ulong **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  ulong **ppuStack_170;
  undefined8 *puStack_168;
  ulong *puStack_160;
  undefined4 uStack_158;
  short sStack_154;
  ulong *puStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  ulong **ppuStack_138;
  ulong **ppuStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 **ppuStack_118;
  undefined4 uStack_110;
  short sStack_10c;
  undefined4 uStack_f8;
  int iStack_f4;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  ulong uStack_d8;
  char cStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_f4 = (int)((ulong)param_6 >> 0x20);
  if (param_12 == '\0') {
    uVar11 = (ulong)(uint)((int)param_7 - (int)param_6);
    uVar13 = (ulong)(uint)((int)((ulong)param_7 >> 0x20) - iStack_f4);
    uStack_d8 = *(ulong *)(*param_3 + 0x90);
    ppuVar12 = (undefined8 **)0x0;
    iStack_f4 = 0;
  }
  else {
    uStack_d8 = *(ulong *)(*param_3 + 0x90);
    uVar13 = uStack_d8 >> 0x20;
    ppuVar12 = param_6;
    uVar11 = uStack_d8;
  }
  uStack_f8 = SUB84(ppuVar12,0);
  puStack_e0 = (ulong *)0x0;
  pppuVar3 = (undefined8 ***)&puStack_f0;
  pppuVar8 = (undefined8 ***)&puStack_e0;
  puStack_f0 = (ulong *)param_6;
  uStack_e8 = param_7;
  func_0x00010821b838();
  if (((ulong)pppuVar3 & 1) == 0) {
    *param_1 = 0;
    goto LAB_1082b21dc;
  }
  FUN_108283430(&puStack_e0,*param_3 + 0x20);
  ppuStack_170 = (ulong **)param_14;
  uVar4 = *param_3;
  puStack_168 = param_1;
  if (*(int *)(uVar4 + 0x8c) == 3) {
LAB_1082b2068:
    func_0x0001082b277c();
    (*extraout_x8_01)();
    pppuVar3 = (undefined8 ***)0x0;
    if (uVar4 != 0) {
      uStack_178 = CONCAT44(uStack_178._4_4_,param_5);
      uStack_148 = 0;
      uVar1 = *(undefined1 *)(*param_3 + 0xcb);
      ppuStack_118 = param_2;
      FUN_10828aa20();
      uVar6 = uVar4;
      FUN_10828aa20();
      uStack_1a8 = uVar4 & 0xffff;
      uStack_1a0 = uVar6 & 0xffff;
      uStack_190 = param_10;
      uStack_1b0 = CONCAT31(uStack_1b0._1_3_,uVar1);
      pppuVar8 = (undefined8 ***)0x0;
      uStack_198 = (int)param_4;
      uStack_194 = param_9;
      uStack_188 = param_11;
      FUN_1082a7a6c(&uStack_128,&ppuStack_118,0,&uStack_148,uVar11 & 0xffffffff | uVar13 << 0x20,
                    param_8,&puStack_e0);
      sStack_10c = (short)&puStack_150 + 8;
      FUN_10810a400();
      ppuVar12 = (undefined8 **)*param_3;
      *param_3 = 0;
      puStack_150 = (ulong *)ppuVar12;
      FUN_10828aa20();
      puStack_150 = (ulong *)0x0;
      ppuStack_118 = ppuVar12;
      uStack_110 = (int)param_4;
      FUN_1082764bc(&puStack_150);
      pppuVar3 = (undefined8 ***)CONCAT44(uStack_124,uStack_128);
      pppuVar7 = param_4;
      if (pppuVar3 != (undefined8 ***)0x0) {
        ppuStack_118 = (undefined8 **)0x0;
        uStack_158 = uStack_110;
        sStack_154 = sStack_10c;
        pppuVar8 = (undefined8 ***)&puStack_160;
        puStack_160 = (ulong *)ppuVar12;
        FUN_1082c46f8(pppuVar3,pppuVar8,&puStack_f0,&uStack_f8);
        FUN_1082764bc(&puStack_160);
        puVar10 = puStack_168;
        param_4 = (undefined8 ***)ppuStack_170;
        pppuVar7 = pppuVar3;
        if ((int)pppuVar3 != 0) {
          if ((undefined8 ***)ppuStack_170 != (undefined8 ***)0x0) {
            FUN_1082c48f8(&ppuStack_130,CONCAT44(uStack_124,uStack_128));
            pppuVar8 = (undefined8 ***)ppuStack_130;
            ppuStack_130 = (ulong **)0x0;
            FUN_1082945a4(param_4);
            func_0x0001082b26e8();
          }
          uVar9 = 0;
          if (*(long *)(CONCAT44(uStack_124,uStack_128) + 0x10) != 0) {
            do {
              func_0x0001082b2720();
              uVar9 = extraout_x8_02;
            } while (extraout_w11_01 != 0);
          }
          *puVar10 = uVar9;
          pppuVar3 = &ppuStack_118;
          FUN_1082764bc();
          func_0x0001082b270c();
          if (pppuVar3 != (undefined8 ***)0x0) {
            func_0x0001082b2694();
          }
          goto LAB_1082b21cc;
        }
      }
      pppuVar3 = &ppuStack_118;
      FUN_1082764bc();
      func_0x0001082b270c();
      param_4 = pppuVar7;
      if (pppuVar3 != (undefined8 ***)0x0) {
        func_0x0001082b2694();
      }
    }
    *puStack_168 = 0;
  }
  else {
    uStack_120 = 0;
    uStack_124 = (undefined4)uVar13;
    uStack_128 = (int)uVar11;
    FUN_1082a0b14(&ppuStack_118,0,0,&uStack_120,&uStack_128);
    FUN_10810a400(&uStack_120);
    uStack_1ab = *(undefined1 *)(*param_3 + 0xcb);
    uStack_1ac = (undefined1)param_5;
    uStack_1b0 = 1;
    pppuVar8 = &ppuStack_118;
    uStack_178 = param_11;
    uStack_1aa = param_9;
    ppuStack_130 = param_2;
    FUN_1082a763c(&uStack_128,&ppuStack_130,pppuVar8,&puStack_e0,param_10,param_11,param_8);
    ppuStack_130 = (ulong **)0x0;
    ppuVar5 = (ulong **)0x0;
    if (CONCAT44(uStack_124,uStack_128) == 0) {
LAB_1082b204c:
      func_0x0001082b26e8();
      func_0x0001082b270c();
      if (ppuVar5 != (ulong **)0x0) {
        func_0x0001082b2694();
      }
      func_0x0001082b2750();
      uVar4 = *param_3;
      param_11 = uStack_178;
      goto LAB_1082b2068;
    }
    puStack_140 = (ulong *)0x0;
    if (*param_3 != 0) {
      do {
        func_0x0001082b2720();
        puStack_140 = (ulong *)extraout_x8;
      } while (extraout_w11 != 0);
    }
    pppuVar8 = (undefined8 ***)&puStack_140;
    FUN_1082bbb84(&ppuStack_138);
    ppuVar5 = ppuStack_130;
    ppuStack_130 = ppuStack_138;
    ppuStack_138 = (ulong **)0x0;
    func_0x0001082b2668(ppuVar5);
    ppuVar2 = ppuStack_130;
    FUN_10828ea04(&ppuStack_138);
    ppuVar5 = &puStack_140;
    FUN_1082764bc();
    pppuVar7 = (undefined8 ***)ppuStack_130;
    if ((undefined8 ***)ppuVar2 == (undefined8 ***)0x0) goto LAB_1082b204c;
    pppuVar3 = (undefined8 ***)ppuStack_170;
    if ((undefined8 ***)ppuStack_170 != (undefined8 ***)0x0) {
      ppuStack_130 = (ulong **)0x0;
      FUN_1082945a4();
      pppuVar8 = pppuVar7;
    }
    uVar9 = 0;
    puVar10 = puStack_168;
    if (*(long *)(CONCAT44(uStack_124,uStack_128) + 0x10) != 0) {
      do {
        func_0x0001082b2720();
        uVar9 = extraout_x8_00;
        puVar10 = extraout_x12;
      } while (extraout_w11_00 != 0);
    }
    *puVar10 = uVar9;
    func_0x0001082b26e8();
    func_0x0001082b270c();
    if (pppuVar3 != (undefined8 ***)0x0) {
      func_0x0001082b2694();
    }
    func_0x0001082b2750();
  }
LAB_1082b21cc:
  if (cStack_88 == '\x01') {
    func_0x0001082b26f8();
  }
LAB_1082b21dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001082b26e8();
    pppuVar7 = &ppuStack_118;
    FUN_1082764bc();
    func_0x0001082b270c();
    if (pppuVar7 != (undefined8 ***)0x0) {
      func_0x0001082b2694();
    }
    if (cStack_88 == '\x01') {
      func_0x0001082b26f8();
    }
    func_0x0001082b26f0();
    pcStack_1b8 = FUN_1082b22dc;
    puStack_1d8 = (ulong *)*pppuVar8;
    *pppuVar8 = (undefined8 **)0x0;
    ppuStack_1d0 = (ulong **)param_4;
    ppuStack_1c8 = (ulong **)pppuVar3;
    puStack_1c0 = &stack0xfffffffffffffff0;
    FUN_1082b1e54();
    FUN_1082764bc(&puStack_1d8);
    return;
  }
  return;
}



/* Entry: 1082b22dc; end: 1082b2347;  */

void FUN_1082b22dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lStack_28;
  
  lStack_28 = *param_2;
  uVar1 = *(undefined8 *)(lStack_28 + 0x90);
  *param_2 = 0;
  FUN_1082b1e54(param_1,&lStack_28,param_3,param_4,0,uVar1,param_5,param_6,param_7,param_8,0);
  FUN_1082764bc(&lStack_28);
  return;
}



/* Entry: 1082b2348; end: 1082b239b;  */

void FUN_1082b2348(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x98) != 1) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      lVar1 = lVar2;
      FUN_1082b1dfc();
    }
    else {
      lVar1 = *(long *)(*(long *)(lVar2 + 0x10) + 0xb0);
    }
    *(long *)(lVar2 + 0x90) = lVar1;
    *(undefined4 *)(*param_1 + 0x98) = 1;
  }
  return;
}



/* Entry: 1082b239c; end: 1082b25ef;  */

undefined8 FUN_1082b239c(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  long *plStack_a0;
  long *aplStack_98 [7];
  long *plStack_60;
  int iStack_58;
  byte bStack_54;
  long *plStack_50;
  undefined8 uStack_48;
  
  plStack_50 = (long *)0x0;
  plVar4 = (long *)*param_1;
  (**(code **)(*plVar4 + 0x38))();
  if (*(short *)(*plVar4 + 4) != 0) {
    FUN_108283918(aplStack_98,param_2);
    plVar4 = plStack_50;
    plStack_50 = aplStack_98[0];
    aplStack_98[0] = (long *)0x0;
    func_0x0001082b2600(plVar4);
    func_0x0001082b2718();
  }
  if (plStack_50 == (long *)0x0) {
    plVar4 = (long *)*param_1;
    (**(code **)(*plVar4 + 0x50))(aplStack_98,plVar4);
    plVar4 = (long *)plVar4[0x18];
    uStack_48 = param_2;
    if (plVar4 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b25a8);
      (*pcVar1)();
    }
    (**(code **)(*plVar4 + 0x30))(&plStack_60,plVar4,&uStack_48,aplStack_98);
    plVar4 = plStack_50;
    plStack_50 = plStack_60;
    plStack_60 = (long *)0x0;
    func_0x0001082b2600(plVar4);
    bVar2 = plStack_50 != (long *)0x0;
    bVar3 = iStack_58 == 1;
    FUN_10826b5e8(&plStack_60);
    if (plStack_50 == (long *)0x0) {
      uVar7 = 0;
      *(undefined8 *)(*param_1 + 0x90) = 0;
      goto LAB_1082b256c;
    }
    bVar8 = bVar2 & bStack_54;
  }
  else {
    bVar8 = 0;
    bVar3 = true;
  }
  plVar4 = (long *)*param_1;
  if ((int)plVar4[0x12] < 0) {
    plVar4[0x12] = plStack_50[0x16];
    plVar4 = (long *)*param_1;
  }
  func_0x0001082b277c();
  (*extraout_x8)();
  if ((plVar4 != (long *)0x0) && (*(bool *)(plVar4 + 2) = bVar3, bVar3)) {
    func_0x0001082b277c();
    (*extraout_x8_00)();
    if (*(short *)(*plVar4 + 4) != 0) {
      plVar5 = plStack_50;
      (**(code **)(*plStack_50 + 0x58))();
      if (*(short *)(*(long *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x48) + 4) == 0) {
        func_0x0001082aedbc(param_2,plVar4,plStack_50);
      }
    }
  }
  plStack_a0 = plStack_50;
  plStack_50 = (long *)0x0;
  FUN_1082a9b6c(param_1,&plStack_a0);
  func_0x0001082b2730();
  if (bVar8 != 0) {
    lVar6 = *param_1;
    plVar4 = *(long **)(lVar6 + 0xc0);
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    if (plVar4 == (long *)(lVar6 + 0xa8)) {
      lVar6 = 0x20;
    }
    else {
      if (plVar4 == (long *)0x0) goto LAB_1082b2568;
      lVar6 = 0x28;
    }
    (**(code **)(*plVar4 + lVar6))();
  }
LAB_1082b2568:
  uVar7 = 1;
LAB_1082b256c:
  FUN_10826b5e8(&plStack_50);
  return uVar7;
}



/* Entry: 1082b25f0; end: 1082b260f;  */

undefined8 FUN_1082b25f0(void)

{
  return 0;
}



/* Entry: 1082b2610; end: 1082b2667;  */

long FUN_1082b2610(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x0001082b277c(*(undefined8 *)(param_2 + 0x18));
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1082b2668; end: 1082b27cb;  */

void FUN_1082b2668(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001082b268c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 1082b27cc; end: 1082b27f3;  */

uint FUN_1082b27cc(long *param_1)

{
  uint extraout_w8;
  uint uVar1;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    func_0x0001082b2a3c();
    if (param_1 != (long *)0x0) {
      if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) == 0) {
        uVar1 = (uint)*(byte *)(param_1 + 1);
      }
      else {
        func_0x0001082b3800();
        func_0x0001082b3854();
        uVar1 = extraout_w8;
      }
      return uVar1 & 1;
    }
  }
  return 0;
}



/* Entry: 1082b27f4; end: 1082b2867;  */

void FUN_1082b27f4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *extraout_x8;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (func_0x0001082b2a3c(), lVar3 != 0)) {
    func_0x0001082b2a48();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = *extraout_x8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 1082b2868; end: 1082b28ab;  */

void FUN_1082b2868(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0x321000000000;
  FUN_108279f20(param_1,&uStack_30);
  FUN_1082764bc(&uStack_30);
  return;
}



/* Entry: 1082b28ac; end: 1082b296f;  */

void FUN_1082b28ac(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = *param_3;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1082b1e54(&uStack_28,param_2,&lStack_30,(int)param_3[1],param_4,param_5,param_6,param_7,
                param_8,param_10,param_11,0);
  FUN_1082764bc(&lStack_30);
  uVar6 = uStack_28;
  uStack_28 = 0;
  lVar5 = param_3[1];
  uVar2 = *(undefined2 *)((long)param_3 + 0xc);
  uStack_38 = 0;
  *param_1 = uVar6;
  *(int *)(param_1 + 1) = (int)lVar5;
  *(undefined2 *)((long)param_1 + 0xc) = uVar2;
  FUN_1082764bc(&uStack_38);
  FUN_1082764bc(&uStack_28);
  return;
}



/* Entry: 1082b2970; end: 1082b2a27;  */

void FUN_1082b2970(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_30 = *param_3;
  if (lStack_30 != 0) {
    piVar1 = (int *)(lStack_30 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1082b22dc(&uStack_28,param_2,&lStack_30,(int)param_3[1],param_4,param_5,param_6,param_7,
                param_8,0);
  FUN_1082764bc(&lStack_30);
  uVar6 = uStack_28;
  uStack_28 = 0;
  lVar5 = param_3[1];
  uVar2 = *(undefined2 *)((long)param_3 + 0xc);
  uStack_38 = 0;
  *param_1 = uVar6;
  *(int *)(param_1 + 1) = (int)lVar5;
  *(undefined2 *)((long)param_1 + 0xc) = uVar2;
  FUN_1082764bc(&uStack_38);
  FUN_1082764bc(&uStack_28);
  return;
}



/* Entry: 1082b2a28; end: 1082b2a5b;  */

void FUN_1082b2a28(void)

{
  return;
}



/* Entry: 1082b2a5c; end: 1082b2af3;  */

undefined1 * FUN_1082b2a5c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x0001082b2e2c();
    func_0x0001082b2e18();
    func_0x0001082b2df8();
    uVar1 = *(int *)(puVar2 + 0xc) == 0;
    plVar3 = (long *)((long)register0x00000008 + -0x98);
    FUN_1082b1600(plVar3,*(undefined8 *)(extraout_x8 + 0xb0),1,!(bool)uVar1,0);
    func_0x0001082b2e08();
    if ((bool)uVar1) {
      func_0x0001082b2de4();
    }
    func_0x0001082b2e40(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar1) break;
    ___stack_chk_fail();
    func_0x0001082b2e08();
    if ((bool)uVar1) {
      func_0x0001082b2de4();
    }
    unaff_x30 = FUN_1082b2af4;
    func_0x0001082b2e24();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    param_1 = (undefined1 *)((long)plVar3 + *(long *)(*plVar3 + -0x50));
    unaff_x19 = puVar2;
  }
  return puVar2;
}



/* Entry: 1082b2af4; end: 1082b2b03;  */

undefined1 * FUN_1082b2af4(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = (undefined1 *)((long)param_1 + *(long *)(*param_1 + -0x50));
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x0001082b2e2c();
    func_0x0001082b2e18();
    func_0x0001082b2df8();
    uVar2 = *(int *)(puVar1 + 0xc) == 0;
    param_1 = (long *)((long)register0x00000008 + -0x98);
    FUN_1082b1600(param_1,*(undefined8 *)(extraout_x8 + 0xb0),1,!(bool)uVar2,0);
    func_0x0001082b2e08();
    if ((bool)uVar2) {
      func_0x0001082b2de4();
    }
    func_0x0001082b2e40(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar2) break;
    ___stack_chk_fail();
    func_0x0001082b2e08();
    if ((bool)uVar2) {
      func_0x0001082b2de4();
    }
    unaff_x30 = FUN_1082b2af4;
    func_0x0001082b2e24();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = puVar1;
  }
  return puVar1;
}



/* Entry: 1082b2b04; end: 1082b2b73;  */

long * FUN_1082b2b04(long *param_1,long *param_2)

{
  undefined4 uVar1;
  int in_w5;
  int in_w6;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  *(int *)(param_1 + 1) = in_w5;
  *(int *)((long)param_1 + 0xc) = in_w6;
  if (in_w6 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001082b2df8();
    uVar1 = *(undefined4 *)(extraout_x8 + 0xb0);
    FUN_108368974(uVar1,*(undefined4 *)(extraout_x8 + 0xb4));
  }
  *(undefined4 *)(param_1 + 2) = uVar1;
  if (in_w5 == 3) {
    func_0x0001082b2df8();
    *(uint *)(extraout_x8_00 + 0xb8) = *(uint *)(extraout_x8_00 + 0xb8) | 1;
  }
  return param_1;
}



/* Entry: 1082b2b74; end: 1082b2caf;  */

void FUN_1082b2b74(long *param_1,long *param_2,undefined8 param_3,uint param_4,int param_5,
                  uint param_6,uint param_7,long *param_8)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long *plStack_128;
  long alStack_b8 [11];
  char cStack_60;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  func_0x0001082b2e2c();
  func_0x0001082b2e18();
  plVar4 = alStack_b8;
  func_0x00010828398c();
  uVar2 = cStack_60 == '\x01';
  plVar9 = plVar4;
  if ((bool)uVar2) {
    func_0x0001082b2de4();
  }
  if ((int)plVar4 == 0) {
    lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x70))();
    if (lVar6 == 0) {
      param_5 = 1;
    }
    else {
      param_5 = *(int *)(lVar6 + 0x18);
    }
    param_4 = (uint)(lVar6 != 0);
    plVar4 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    bVar1 = *(byte *)((long)plVar4 + 0xbc);
    plVar9 = *(long **)(plVar4[0x10] + 0x10);
    (**(code **)(*plVar4 + 0x50))(alStack_b8);
    param_3 = *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xb0);
    param_6 = (uint)(*(int *)((long)param_1 + 0xc) != 0);
    plVar5 = alStack_b8;
    param_7 = bVar1 & 1;
    FUN_1082b2cb0(plVar9,plVar5);
    uVar2 = cStack_60 == '\x01';
    param_8 = param_2;
    if ((bool)uVar2) {
      func_0x0001082b2de4();
      param_8 = param_2;
    }
  }
  func_0x0001082b2e40(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082b2e08();
  if ((bool)uVar2) {
    func_0x0001082b2de4();
  }
  func_0x0001082b2e24();
  if ((bRam0000000113826bd8 & 1) == 0) {
    iVar3 = 0x13826bd8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_108320d08();
      iRam0000000113826bd0 = iVar3;
      ___cxa_guard_release(0x113826bd8);
    }
  }
  (**(code **)(*plVar9 + 0x78))(plVar9,plVar5);
  FUN_10827a280(&plStack_128,param_8,iRam0000000113826bd0,5);
  lVar6 = *plStack_128;
  *(int *)(lVar6 + 8) = (int)param_3;
  *(int *)(lVar6 + 0xc) = (int)((ulong)param_3 >> 0x20);
  *(int *)(lVar6 + 0x10) = (int)plVar9;
  *(int *)(lVar6 + 0x14) = (int)((ulong)plVar9 >> 0x20);
  uVar7 = 2;
  if (param_7 == 0) {
    uVar7 = 0;
  }
  uVar8 = 4;
  if (param_4 == 0) {
    uVar8 = 0;
  }
  *(uint *)(lVar6 + 0x18) = uVar8 | param_5 << 3 | param_6 | uVar7;
  FUN_10827a320(&plStack_128);
  return;
}



/* Entry: 1082b2cb0; end: 1082b2dd3;  */

void FUN_1082b2cb0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  uint param_6,int param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plStack_68;
  
  if ((bRam0000000113826bd8 & 1) == 0) {
    iVar1 = 0x13826bd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108320d08();
      iRam0000000113826bd0 = iVar1;
      ___cxa_guard_release(0x113826bd8);
    }
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  FUN_10827a280(&plStack_68,param_8,iRam0000000113826bd0,5);
  lVar2 = *plStack_68;
  *(int *)(lVar2 + 8) = (int)param_3;
  *(int *)(lVar2 + 0xc) = (int)((ulong)param_3 >> 0x20);
  *(int *)(lVar2 + 0x10) = (int)param_1;
  *(int *)(lVar2 + 0x14) = (int)((ulong)param_1 >> 0x20);
  uVar3 = 2;
  if (param_7 == 0) {
    uVar3 = 0;
  }
  uVar4 = 4;
  if (param_4 == 0) {
    uVar4 = 0;
  }
  *(uint *)(lVar2 + 0x18) = uVar4 | param_5 << 3 | param_6 | uVar3;
  FUN_10827a320(&plStack_68);
  return;
}



/* Entry: 1082b2dd4; end: 1082b2e53;  */

void FUN_1082b2dd4(long *param_1,long *param_2,undefined8 param_3,uint param_4,int param_5,
                  uint param_6,uint param_7,long *param_8)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long *plStack_128;
  long alStack_b8 [11];
  char cStack_60;
  undefined8 uStack_48;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x48));
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_2;
  func_0x0001082b2e2c();
  func_0x0001082b2e18();
  plVar4 = alStack_b8;
  func_0x00010828398c();
  uVar2 = cStack_60 == '\x01';
  plVar9 = plVar4;
  if ((bool)uVar2) {
    func_0x0001082b2de4();
  }
  if ((int)plVar4 == 0) {
    lVar6 = (long)param_1 + *(long *)(*param_1 + -0x18);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x70))();
    if (lVar6 == 0) {
      param_5 = 1;
    }
    else {
      param_5 = *(int *)(lVar6 + 0x18);
    }
    param_4 = (uint)(lVar6 != 0);
    plVar4 = (long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    bVar1 = *(byte *)((long)plVar4 + 0xbc);
    plVar9 = *(long **)(plVar4[0x10] + 0x10);
    (**(code **)(*plVar4 + 0x50))(alStack_b8);
    param_3 = *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xb0);
    param_6 = (uint)(*(int *)((long)param_1 + 0xc) != 0);
    plVar5 = alStack_b8;
    param_7 = bVar1 & 1;
    FUN_1082b2cb0(plVar9,plVar5);
    uVar2 = cStack_60 == '\x01';
    param_8 = param_2;
    if ((bool)uVar2) {
      func_0x0001082b2de4();
      param_8 = param_2;
    }
  }
  func_0x0001082b2e40(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082b2e08();
  if ((bool)uVar2) {
    func_0x0001082b2de4();
  }
  func_0x0001082b2e24();
  if ((bRam0000000113826bd8 & 1) == 0) {
    iVar3 = 0x13826bd8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_108320d08();
      iRam0000000113826bd0 = iVar3;
      ___cxa_guard_release(0x113826bd8);
    }
  }
  (**(code **)(*plVar9 + 0x78))(plVar9,plVar5);
  FUN_10827a280(&plStack_128,param_8,iRam0000000113826bd0,5);
  lVar6 = *plStack_128;
  *(int *)(lVar6 + 8) = (int)param_3;
  *(int *)(lVar6 + 0xc) = (int)((ulong)param_3 >> 0x20);
  *(int *)(lVar6 + 0x10) = (int)plVar9;
  *(int *)(lVar6 + 0x14) = (int)((ulong)plVar9 >> 0x20);
  uVar7 = 2;
  if (param_7 == 0) {
    uVar7 = 0;
  }
  uVar8 = 4;
  if (param_4 == 0) {
    uVar8 = 0;
  }
  *(uint *)(lVar6 + 0x18) = uVar8 | param_5 << 3 | param_6 | uVar7;
  FUN_10827a320(&plStack_128);
  return;
}



/* Entry: 1082b2e54; end: 1082b2e8b;  */

void FUN_1082b2e54(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_w4;
  undefined4 in_w5;
  undefined1 in_stack_0000000c;
  
  func_0x0001082b3798();
  *(undefined1 *)(param_1 + 8) = in_w4;
  *(undefined4 *)(param_1 + 0xc) = in_w5;
  func_0x0001082b380c(in_stack_0000000c);
  func_0x0001082b377c();
  if ((bool)in_ZR) {
    func_0x0001082b37c4();
  }
  return;
}



/* Entry: 1082b2e8c; end: 1082b2f07;  */

long FUN_1082b2e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 in_ZR;
  
  FUN_1082b1898(param_1 + 0x60,param_2,param_3,param_6,param_7,param_8,param_9,param_10,param_13,
                param_14);
  func_0x0001082b37d4();
  func_0x0001082b387c();
  func_0x0001082b383c();
  func_0x0001082b377c();
  if ((bool)in_ZR) {
    func_0x0001082b37c4();
  }
  return param_1;
}



/* Entry: 1082b2f08; end: 1082b2f3f;  */

void FUN_1082b2f08(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_w5;
  undefined4 in_w6;
  undefined1 in_stack_0000000c;
  
  func_0x0001082b3798();
  *(undefined1 *)(param_1 + 8) = in_w5;
  *(undefined4 *)(param_1 + 0xc) = in_w6;
  func_0x0001082b380c(in_stack_0000000c);
  func_0x0001082b377c();
  if ((bool)in_ZR) {
    func_0x0001082b37c4();
  }
  return;
}



/* Entry: 1082b2f40; end: 1082b2fcb;  */

long FUN_1082b2f40(long param_1)

{
  undefined1 in_ZR;
  
  FUN_1082b1954(param_1 + 0x60);
  func_0x0001082b37d4();
  func_0x0001082b387c();
  func_0x0001082b383c();
  func_0x0001082b377c();
  if ((bool)in_ZR) {
    func_0x0001082b37c4();
  }
  return param_1;
}



/* Entry: 1082b2fcc; end: 1082b3083;  */

void FUN_1082b2fcc(void)

{
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar1;
  int extraout_w9;
  long unaff_x19;
  
  func_0x0001082b3798();
  func_0x0001082b3844();
  func_0x0001082b3800(*(undefined8 *)(extraout_x8 + 0x10));
  func_0x0001082b3854();
  *(undefined1 *)(unaff_x19 + 8) = extraout_w8;
  func_0x0001082b37b4();
  func_0x0001082b3800(*(undefined8 *)(extraout_x8_00 + 0x10));
  func_0x0001082b3864();
  func_0x0001082b383c();
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  func_0x0001082b37f4();
  func_0x0001082b38c4();
  lVar1 = extraout_x8_01;
  if (extraout_w9 != 0) {
    func_0x0001082b3820();
    (*extraout_x8_02)();
    func_0x0001082b3844();
    *(undefined8 *)(unaff_x19 + 0x50) =
         *(undefined8 *)(*(long *)(*(long *)(extraout_x8_03 + 0x80) + 0x20) + 0x48);
    func_0x0001082b37b4();
    FUN_1082a4a44();
    func_0x0001082b37f4();
    lVar1 = extraout_x8_04;
  }
  if (*(int *)(unaff_x19 + lVar1 + 0x8c) == 3) {
    func_0x0001082b37c4();
  }
  return;
}



/* Entry: 1082b3084; end: 1082b3193;  */

long FUN_1082b3084(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 extraout_w8;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar1;
  int extraout_w9;
  undefined8 uStack_38;
  
  uStack_38 = *param_2;
  *param_2 = 0;
  FUN_1082b1a24(param_1 + 0x60,&uStack_38,1,param_3);
  func_0x0001082b38a4();
  func_0x0001082b37d4();
  func_0x0001082b3820(*(undefined8 *)(param_1 + 0x70));
  (*extraout_x8)();
  func_0x0001082b3854();
  *(undefined1 *)(param_1 + 8) = extraout_w8;
  func_0x0001082b37b4();
  func_0x0001082b3820(*(undefined8 *)(extraout_x8_00 + 0x10));
  (*extraout_x8_01)();
  func_0x0001082b3864();
  func_0x0001082b383c();
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  func_0x0001082b37f4();
  func_0x0001082b38c4();
  lVar1 = extraout_x8_02;
  if (extraout_w9 != 0) {
    func_0x0001082b3820();
    (*extraout_x8_03)();
    func_0x0001082b3844();
    *(undefined8 *)(param_1 + 0x50) =
         *(undefined8 *)(*(long *)(*(long *)(extraout_x8_04 + 0x80) + 0x20) + 0x48);
    func_0x0001082b37b4();
    FUN_1082a4a44();
    func_0x0001082b37f4();
    lVar1 = extraout_x8_05;
  }
  if (*(int *)(param_1 + lVar1 + 0x8c) == 3) {
    func_0x0001082b37c4();
  }
  return param_1;
}



/* Entry: 1082b3194; end: 1082b31fb;  */

void FUN_1082b3194(void)

{
  long extraout_x8;
  long unaff_x19;
  long *plVar1;
  
  func_0x0001082b3798();
  func_0x0001082b3844();
  func_0x0001082aa914(extraout_x8 + 0x10,0);
  plVar1 = (long *)(unaff_x19 + 0x18);
  if ((*(short *)(*plVar1 + 4) != 0) && (*(long *)(unaff_x19 + 0x50) != 0)) {
    FUN_1082a4ad0(*(long *)(unaff_x19 + 0x50),plVar1);
  }
  FUN_1082b3750(unaff_x19 + 0x58);
  func_0x00010827a384(plVar1);
  return;
}



/* Entry: 1082b31fc; end: 1082b322b;  */

long FUN_1082b31fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1082b3194(param_1,&PTR_PTR_110a36828);
  FUN_1082b1b18(lVar1 + 0x60);
  return param_1;
}



/* Entry: 1082b322c; end: 1082b323b;  */

long FUN_1082b322c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar2 = lVar1;
  FUN_1082b3194(lVar1,&PTR_PTR_110a36828);
  FUN_1082b1b18(lVar2 + 0x60);
  return lVar1;
}



/* Entry: 1082b323c; end: 1082b324f;  */

void FUN_1082b323c(void)

{
  FUN_1082b31fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b3250; end: 1082b32b7;  */

void FUN_1082b3250(long *param_1)

{
  FUN_1082b31fc((long)param_1 + *(long *)(*param_1 + -0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b32b8; end: 1082b330f;  */

void FUN_1082b32b8(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_28;
  
  FUN_1082b1b68(&lStack_28,(long)param_2 + *(long *)(*param_2 + -0x18),param_3,1,0,(char)param_2[1])
  ;
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    lStack_28 = 0;
  }
  *param_1 = lVar1;
  func_0x0001082b38a4();
  return;
}



/* Entry: 1082b3310; end: 1082b3347;  */

void FUN_1082b3310(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_28;
  
  param_2 = (long *)((long)param_2 + *(long *)(*param_2 + -0x50));
  FUN_1082b1b68(&lStack_28,(long)param_2 + *(long *)(*param_2 + -0x18),param_3,1,0,(char)param_2[1])
  ;
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    lStack_28 = 0;
  }
  *param_1 = lVar1;
  func_0x0001082b38a4();
  return;
}



/* Entry: 1082b3348; end: 1082b33e7;  */

undefined *** FUN_1082b3348(undefined ***param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  uint extraout_w8;
  uint uVar2;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_1;
  if (((ulong)param_1[9] & 1) == 0) {
    ppuStack_48 = &PTR_DAT_110a36870;
    pppuStack_30 = &ppuStack_48;
    pppuStack_40 = param_1;
    uStack_38 = param_3;
    FUN_1082a1448(param_2,&ppuStack_48);
    pppuVar1 = &ppuStack_48;
    FUN_108292200();
    *(undefined1 *)(param_1 + 9) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  FUN_108292200(&ppuStack_48);
  __Unwind_Resume();
  if (*(long *)((long)pppuVar1 + (long)((*pppuVar1)[-3] + 0x10)) == 0) {
    uVar2 = (uint)*(byte *)(pppuVar1 + 1);
  }
  else {
    func_0x0001082b3800();
    func_0x0001082b3854();
    uVar2 = extraout_w8;
  }
  return (undefined ***)(ulong)(uVar2 & 1);
}



/* Entry: 1082b33e8; end: 1082b3423;  */

uint FUN_1082b33e8(long *param_1)

{
  uint extraout_w8;
  uint uVar1;
  
  if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 1);
  }
  else {
    func_0x0001082b3800();
    func_0x0001082b3854();
    uVar1 = extraout_w8;
  }
  return uVar1 & 1;
}



/* Entry: 1082b3424; end: 1082b3483;  */

ulong FUN_1082b3424(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  
  func_0x0001082b3844();
  uVar3 = *(undefined8 *)(extraout_x8 + 0x90);
  cVar1 = *(char *)(param_1 + 8);
  uVar2 = extraout_x8 + 0x20;
  if (*(int *)(extraout_x8 + 0x8c) == 3) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(extraout_x8 + 0x98) != 1) {
      func_0x000108320fa4(uVar3);
    }
    uVar4 = uVar2;
    func_0x00010828398c();
    if ((int)uVar4 == 0) {
      FUN_108283a40(uVar2);
      uVar4 = (long)(int)uVar3 * (long)(int)((ulong)uVar3 >> 0x20) * uVar2;
    }
    else {
      func_0x000108344674();
    }
    if (cVar1 != '\0') {
      uVar4 = uVar4 + uVar4 / 3;
    }
  }
  return uVar4;
}



/* Entry: 1082b3484; end: 1082b34e3;  */

void FUN_1082b3484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  
  func_0x0001082b3844();
  lVar1 = *(long *)(extraout_x8 + 0x10);
  if (((lVar1 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) &&
     (*(short *)(*(long *)(lVar1 + 0x48) + 4) == 0)) {
    func_0x0001082a088c(lVar1,param_3);
  }
  FUN_1082aa600(param_1 + 0x18,param_3);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



/* Entry: 1082b34e4; end: 1082b35bb;  */

void FUN_1082b34e4(long param_1)

{
  func_0x000108277498(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1082b35bc; end: 1082b3617;  */

void FUN_1082b35bc(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  param_2 = (long *)((long)param_2 + *(long *)(*param_2 + -0x60));
  lVar2 = *(long *)(*param_2 + -0x18);
  lVar3 = (long)param_2 + lVar2;
  if (*(int *)(lVar3 + 0x90) < 0) {
    uVar1 = 0;
    uVar4 = 0xffffffff;
    uVar5 = 0xffffffff;
  }
  else {
    FUN_1082b1e14();
    uVar1 = (undefined4)lVar3;
    lVar2 = *(long *)(*param_2 + -0x18);
    uVar4 = *(undefined4 *)((long)param_2 + lVar2 + 0x90);
    uVar5 = *(undefined4 *)((long)param_2 + lVar2 + 0x94);
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(char *)((long)param_1 + 0xd) = (char)param_2[1];
  param_1[4] = 1;
  *(long *)(param_1 + 6) = (long)param_2 + lVar2 + 0x20;
  param_1[8] = *(undefined4 *)((long)param_2 + lVar2 + 0x8c);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((long)param_2 + lVar2 + 0xcb);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + lVar2 + 0x9c);
  lVar3 = (long)*(char *)((long)param_2 + lVar2 + 0xe7);
  if (lVar3 < 0) {
    lVar6 = *(long *)((long)param_2 + lVar2 + 0xd0);
    lVar3 = *(long *)((long)param_2 + lVar2 + 0xd8);
  }
  else {
    lVar6 = (long)param_2 + lVar2 + 0xd0;
  }
  *(long *)(param_1 + 10) = lVar6;
  *(long *)(param_1 + 0xc) = lVar3;
  return;
}



/* Entry: 1082b3618; end: 1082b364b;  */

void FUN_1082b3618(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110a36870;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082b364c; end: 1082b367b;  */

void FUN_1082b364c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110a36870;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082b367c; end: 1082b370b;  */

void FUN_1082b367c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010827a804(lVar3);
  if (0x1a < *(uint *)(lVar3 + 0x20)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b370c);
    (*pcVar1)();
  }
  if (*(long *)(lVar3 + 8) != 0) {
    FUN_1082910ec(param_2,*(undefined8 *)(param_1 + 0x10),0,*(undefined8 *)(lVar3 + 0x28),
                  *(undefined4 *)(&UNK_10df14eb4 + (ulong)*(uint *)(lVar3 + 0x20) * 4),
                  *(long *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x58);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082b36fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1082b370c; end: 1082b3743;  */

long FUN_1082b370c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a368d0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082b3744; end: 1082b374f;  */

undefined ** FUN_1082b3744(void)

{
  return &PTR_DAT_110a368d0;
}



/* Entry: 1082b3750; end: 1082b377b;  */

long * FUN_1082b3750(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001082b38b8();
  }
  return param_1;
}



/* Entry: 1082b377c; end: 1082b3907;  */

void FUN_1082b377c(void)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  return;
}



/* Entry: 1082b3908; end: 1082b39ff;  */

long FUN_1082b3908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  FUN_1082b1898(param_1 + 0x90,param_3,param_4,param_8,(undefined1)param_9,param_9._1_1_,param_10,
                param_11,param_13,param_14);
  func_0x0001082b3fd0();
  *(undefined1 *)(param_1 + 8) = param_5;
  func_0x0001082b4000(param_12);
  func_0x0001082b3fc0();
  FUN_1082b2e54();
  func_0x0001082b3f74();
  func_0x0001082b38d8();
  return param_1;
}



/* Entry: 1082b3a00; end: 1082b3b3b;  */

undefined8 *
FUN_1082b3a00(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,uint param_12,byte param_13,
             undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_94 = (uint)param_13;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = param_15;
  uStack_c0 = param_16;
  puVar1 = param_1 + 0x12;
  uStack_d0 = param_12;
  plStack_a8 = param_2;
  uStack_a0 = param_5;
  uStack_90 = param_7;
  uStack_8c = param_8;
  FUN_1082b1954(puVar1,param_3,param_4,param_5,param_9,(undefined1)param_10,param_10._1_1_,param_11)
  ;
  uStack_70 = 0;
  func_0x0001082b3fd0();
  *(undefined1 *)(param_1 + 1) = param_6;
  func_0x0001082b4000();
  func_0x0001082b3fe8();
  uStack_70 = 0;
  uStack_c0 = param_15;
  uStack_b8 = param_16;
  uStack_c8._0_5_ = CONCAT14((char)uStack_94,(undefined4)uStack_c8);
  func_0x0001082b3fc0();
  puVar4 = auStack_88;
  uStack_cc = param_11;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,param_12);
  uStack_d0 = CONCAT31(CONCAT21(uStack_d0._2_2_,param_10._1_1_),(undefined1)param_10);
  FUN_1082b2f08();
  func_0x0001082b3fe8();
  func_0x0001082b3f74();
  plVar3 = plStack_a8;
  func_0x0001082b38d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x0001082b3fe8();
    func_0x0001082b3f98();
    func_0x0001082b3fa8();
    func_0x0001082b3ff8();
    uStack_f8 = param_15;
    pcStack_d8 = FUN_1082b3b3c;
    uStack_108 = 0;
    uStack_100 = (ulong)param_12;
    puStack_f0 = puVar1;
    puStack_e8 = param_1;
    puStack_e0 = &stack0xfffffffffffffff0;
    if (*plVar3 != 0) {
      do {
        func_0x0001082b3fb0();
        uStack_108 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_1082b1a24(puVar2 + 0x12,&uStack_108,1,puVar4);
    FUN_10826b5e8(&uStack_108);
    uStack_110 = 0;
    if (*plVar3 != 0) {
      do {
        func_0x0001082b3fb0();
        uStack_110 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    FUN_1082a8268(puVar2,&PTR_PTR_110a36a58,&uStack_110,puVar4,0);
    puVar1 = &uStack_110;
    FUN_10826b5e8(puVar1);
    if (*plVar3 != 0) {
      do {
        func_0x0001082b3fb0();
      } while (extraout_w11_01 != 0);
    }
    func_0x0001082b3fc0();
    FUN_1082b2fcc();
    func_0x0001082b3ff0();
    func_0x0001082b3f74();
    return puVar1;
  }
  return param_1;
}



/* Entry: 1082b3b3c; end: 1082b3c4b;  */

void FUN_1082b3b3c(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001082b3fb0();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_1082b1a24(param_1 + 0x90,&uStack_38,1,param_3);
  FUN_10826b5e8(&uStack_38);
  uStack_40 = 0;
  if (*param_2 != 0) {
    do {
      func_0x0001082b3fb0();
      uStack_40 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  FUN_1082a8268(param_1,&PTR_PTR_110a36a58,&uStack_40,param_3,0);
  FUN_10826b5e8(&uStack_40);
  if (*param_2 != 0) {
    do {
      func_0x0001082b3fb0();
    } while (extraout_w11_01 != 0);
  }
  func_0x0001082b3fc0();
  FUN_1082b2fcc();
  func_0x0001082b3ff0();
  func_0x0001082b3f74();
  return;
}



/* Entry: 1082b3c4c; end: 1082b3c97;  */

long FUN_1082b3c4c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = (int)(char)param_1[1];
  if ('\x01' < (char)param_1[1]) {
    iVar5 = iVar5 + 1;
  }
  lVar6 = *(long *)(*param_1 + -0x18);
  uVar4 = *(undefined8 *)((long)param_1 + lVar6 + 0x90);
  lVar1 = param_1[7];
  uVar2 = (long)param_1 + lVar6 + 0x20;
  if (*(int *)((long)param_1 + lVar6 + 0x8c) == 3) {
    lVar6 = 0;
  }
  else {
    if (*(int *)((long)param_1 + lVar6 + 0x98) != 1) {
      func_0x000108320fa4(uVar4);
    }
    uVar3 = uVar2;
    func_0x00010828398c();
    if ((int)uVar3 == 0) {
      FUN_108283a40(uVar2);
      uVar3 = (long)(int)uVar4 * (long)(int)((ulong)uVar4 >> 0x20) * uVar2;
    }
    else {
      func_0x000108344674();
    }
    lVar6 = uVar3 * (long)iVar5;
    if ((char)lVar1 != '\0') {
      lVar6 = lVar6 + uVar3 / 3;
    }
  }
  return lVar6;
}



/* Entry: 1082b3c98; end: 1082b3d4b;  */

bool FUN_1082b3c98(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x23;
  long lVar6;
  
  if ((*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10) == 0) &&
     (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xc0) != 0)) {
    return false;
  }
  plVar4 = param_1 + 6;
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  lVar6 = *(long *)(*param_1 + -0x18);
  lVar2 = param_1[1];
  FUN_1082b33e8(plVar4);
  plVar1 = (long *)0x0;
  if (*(short *)(*plVar5 + 4) != 0) {
    plVar1 = plVar5;
  }
  lVar6 = (long)param_1 + lVar6;
  plVar5 = (long *)(lVar6 + 0x10);
  if (*plVar5 == 0) {
    FUN_1082b1b68(&stack0xffffffffffffffc8,lVar6,param_2,(long)(char)lVar2,1,plVar4);
    bVar3 = unaff_x23 != 0;
    if (unaff_x23 != 0) {
      if ((plVar1 != (long *)0x0) && (*(short *)(*plVar1 + 4) != 0)) {
        func_0x0001082aedbc(param_2,plVar1);
      }
      func_0x0001082aa914(plVar5,unaff_x23);
      func_0x0001082b2730();
    }
    func_0x0001082b2718();
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



/* Entry: 1082b3d4c; end: 1082b3d63;  */

bool FUN_1082b3d4c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x23;
  long lVar6;
  
  plVar5 = param_1 + -6;
  if ((*(long *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x10) == 0) &&
     (*(long *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0xc0) != 0)) {
    return false;
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x18))();
  lVar6 = *(long *)(*plVar5 + -0x18);
  lVar2 = param_1[-5];
  FUN_1082b33e8(param_1);
  plVar1 = (long *)0x0;
  if (*(short *)(*plVar4 + 4) != 0) {
    plVar1 = plVar4;
  }
  lVar6 = (long)plVar5 + lVar6;
  plVar5 = (long *)(lVar6 + 0x10);
  if (*plVar5 == 0) {
    FUN_1082b1b68(&stack0xffffffffffffffc8,lVar6,param_2,(long)(char)lVar2,1,param_1);
    bVar3 = unaff_x23 != 0;
    if (unaff_x23 != 0) {
      if ((plVar1 != (long *)0x0) && (*(short *)(*plVar1 + 4) != 0)) {
        func_0x0001082aedbc(param_2,plVar1);
      }
      func_0x0001082aa914(plVar5,unaff_x23);
      func_0x0001082b2730();
    }
    func_0x0001082b2718();
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



/* Entry: 1082b3d64; end: 1082b3de3;  */

void FUN_1082b3d64(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_48;
  
  lVar3 = *(long *)(*param_2 + -0x18);
  lVar1 = param_2[1];
  plVar2 = param_2 + 6;
  FUN_1082b33e8(plVar2);
  FUN_1082b1b68(&lStack_48,(long)param_2 + lVar3,param_3,(long)(char)lVar1,1,plVar2);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    lStack_48 = 0;
  }
  *param_1 = lVar1;
  func_0x0001082b3ff0();
  return;
}



/* Entry: 1082b3de4; end: 1082b3dfb;  */

void FUN_1082b3de4(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lStack_48;
  
  plVar2 = (long *)(param_2 + -0x30);
  lVar3 = *(long *)(*plVar2 + -0x18);
  cVar1 = *(char *)(param_2 + -0x28);
  FUN_1082b33e8(param_2);
  FUN_1082b1b68(&lStack_48,(long)plVar2 + lVar3,param_3,(long)cVar1,1,param_2);
  lVar3 = lStack_48;
  if (lStack_48 != 0) {
    lStack_48 = 0;
  }
  *param_1 = lVar3;
  func_0x0001082b3ff0();
  return;
}



/* Entry: 1082b3dfc; end: 1082b3ed3;  */

void FUN_1082b3dfc(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)param_2 + *(long *)(*param_2 + -0x18);
  if (*(int *)(lVar6 + 0x90) < 0) {
    uVar1 = 0;
    uVar3 = 0xffffffff;
    uVar5 = 0xffffffff;
  }
  else {
    FUN_1082b1e14();
    uVar1 = (undefined4)lVar6;
    uVar3 = *(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x90);
    uVar5 = *(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x94);
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 1;
  plVar2 = param_2 + 6;
  FUN_1082b33e8();
  *(char *)((long)param_1 + 0xd) = (char)plVar2;
  param_1[4] = (int)(char)param_2[1];
  lVar4 = *(long *)(*param_2 + -0x18);
  *(long *)(param_1 + 6) = (long)param_2 + lVar4 + 0x20;
  param_1[8] = *(undefined4 *)((long)(param_2 + 6) + *(long *)(param_2[6] + -0x18) + 0x8c);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((long)param_2 + lVar4 + 0xcb);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + lVar4 + 0x9c);
  lVar6 = (long)*(char *)((long)param_2 + lVar4 + 0xe7);
  if (lVar6 < 0) {
    lVar7 = *(long *)((long)param_2 + lVar4 + 0xd0);
    lVar6 = *(long *)((long)param_2 + lVar4 + 0xd8);
  }
  else {
    lVar7 = (long)param_2 + lVar4 + 0xd0;
  }
  *(long *)(param_1 + 10) = lVar7;
  *(long *)(param_1 + 0xc) = lVar6;
  return;
}



/* Entry: 1082b3ed4; end: 1082b3eeb;  */

void FUN_1082b3ed4(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  
  plVar3 = param_2 + -6;
  lVar7 = (long)plVar3 + *(long *)(*plVar3 + -0x18);
  if (*(int *)(lVar7 + 0x90) < 0) {
    uVar1 = 0;
    uVar4 = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  else {
    FUN_1082b1e14();
    uVar1 = (undefined4)lVar7;
    uVar4 = *(undefined4 *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x90);
    uVar6 = *(undefined4 *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x94);
  }
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = 1;
  plVar2 = param_2;
  FUN_1082b33e8();
  *(char *)((long)param_1 + 0xd) = (char)plVar2;
  param_1[4] = (int)(char)param_2[-5];
  lVar5 = *(long *)(*plVar3 + -0x18);
  *(long *)(param_1 + 6) = (long)plVar3 + lVar5 + 0x20;
  param_1[8] = *(undefined4 *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x8c);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((long)plVar3 + lVar5 + 0xcb);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)plVar3 + lVar5 + 0x9c);
  lVar7 = (long)*(char *)((long)plVar3 + lVar5 + 0xe7);
  if (lVar7 < 0) {
    lVar8 = *(long *)((long)plVar3 + lVar5 + 0xd0);
    lVar7 = *(long *)((long)plVar3 + lVar5 + 0xd8);
  }
  else {
    lVar8 = (long)plVar3 + lVar5 + 0xd0;
  }
  *(long *)(param_1 + 10) = lVar8;
  *(long *)(param_1 + 0xc) = lVar7;
  return;
}



/* Entry: 1082b3eec; end: 1082b3f2f;  */

long FUN_1082b3eec(long param_1)

{
  FUN_1082b3194(param_1 + 0x30,&PTR_PTR_110a36a68);
  FUN_1082a85e4(param_1,&PTR_PTR_110a36a58);
  func_0x0001082b3fa8();
  return param_1;
}



/* Entry: 1082b3f30; end: 1082b3f43;  */

void FUN_1082b3f30(void)

{
  FUN_1082b3eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b3f44; end: 1082b4013;  */

long FUN_1082b3f44(long param_1)

{
  FUN_1082b3194(param_1,&PTR_PTR_110a36a68);
  FUN_1082a85e4(param_1 + -0x30,&PTR_PTR_110a36a58);
  func_0x0001082b3fa8();
  return param_1 + -0x30;
}



/* Entry: 1082b4014; end: 1082b419b;  */

void FUN_1082b4014(long param_1,undefined8 param_2,long *param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  uint uStack_64;
  
  plVar8 = (long *)*param_3;
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_64 = param_4;
  FUN_1082b419c(lVar4,lVar4 + (long)*(int *)(param_1 + 0x30) * 8);
  lVar1 = *(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x30) * 8;
  if (lVar4 == lVar1) {
    puVar9 = (uint *)(param_1 + 0xd8);
    FUN_1082b41bc(puVar9,&uStack_64);
  }
  else {
    uVar6 = lVar4 - *(long *)(param_1 + 0x28);
    iVar7 = (int)(uVar6 >> 3);
    if ((iVar7 < 0) || (*(int *)(param_1 + 0xe0) <= iVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082b4184);
      (*pcVar3)();
    }
    puVar9 = (uint *)(*(long *)(param_1 + 0xd8) + (uVar6 >> 3 & 0x7fffffff) * 0x14);
    uVar2 = *puVar9 | param_4;
    param_4 = param_4 & (*puVar9 ^ 0xffffffff);
    *puVar9 = uVar2;
  }
  if ((param_4 & 1) != 0) {
    plVar5 = plVar8;
    (**(code **)(*plVar8 + 0x28))();
    uVar10 = *(undefined8 *)((long)plVar5 + 0xc);
    *(undefined8 *)(puVar9 + 3) = *(undefined8 *)((long)plVar5 + 0x14);
    *(undefined8 *)(puVar9 + 1) = uVar10;
    *(undefined8 *)((long)plVar5 + 0xc) = 0;
    *(undefined8 *)((long)plVar5 + 0x14) = 0;
  }
  if ((param_4 >> 1 & 1) != 0) {
    plVar5 = plVar8;
    (**(code **)(*plVar8 + 0x18))();
    *(undefined4 *)((long)plVar5 + 0xc) = 2;
  }
  if (lVar4 == lVar1) {
    FUN_1082a8a00(param_1,param_2,plVar8,0,0,param_5);
    lStack_78 = *param_3;
    *param_3 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3210;
    FUN_1082b425c(param_1,param_2,&lStack_78);
    FUN_1082b4570();
    FUN_1082764bc(&uStack_80);
  }
  return;
}



/* Entry: 1082b419c; end: 1082b41bb;  */

void FUN_1082b419c(void)

{
  FUN_1082b4484();
  return;
}



/* Entry: 1082b41bc; end: 1082b425b;  */

undefined4 * FUN_1082b41bc(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if ((int)param_1[1] < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    puVar3 = (undefined4 *)(*param_1 + (long)(int)param_1[1] * 0x14);
    *puVar3 = *param_2;
    *(undefined8 *)(puVar3 + 3) = 0;
    *(undefined8 *)(puVar3 + 1) = 0;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1082b44a8(0x3ff8000000000000,param_1,1);
    puVar3 = (undefined4 *)((long)plVar1 + (long)(int)param_1[1] * 0x14);
    *puVar3 = *param_2;
    *(undefined8 *)(puVar3 + 3) = 0;
    *(undefined8 *)(puVar3 + 1) = 0;
    FUN_1082b44cc(param_1,plVar1,uVar2);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return puVar3;
}



/* Entry: 1082b425c; end: 1082b42b7;  */

void FUN_1082b425c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1082a8d24(param_1,param_2,&lStack_28);
  FUN_1082b4570();
  return;
}



/* Entry: 1082b42b8; end: 1082b4317;  */

void FUN_1082b42b8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  for (lVar3 = (long)*(int *)(param_1 + 0x30) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    FUN_1082a96fc(param_2,*puVar2,uVar1,uVar1,1,1);
    puVar2 = puVar2 + 1;
  }
  *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
  return;
}



/* Entry: 1082b4318; end: 1082b442b;  */

undefined8 FUN_1082b4318(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = 0;
  for (lVar5 = 0; uVar3 = (ulong)*(int *)(param_1 + 0xe0), lVar5 < (long)uVar3; lVar5 = lVar5 + 1) {
    lVar6 = *(long *)(param_1 + 0xd8);
    if ((*(byte *)(lVar6 + lVar4) & 1) != 0) {
      if (*(int *)(param_1 + 0x30) <= lVar5) goto LAB_1082b4428;
      plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + lVar5 * 8) + 0x10);
      if ((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 0x68))(), plVar2 != (long *)0x0)) {
        FUN_10829fbc0(*(undefined8 *)(param_2 + 0x160),plVar2,lVar6 + lVar4 + 4);
      }
    }
    lVar4 = lVar4 + 0x14;
  }
  lVar4 = 0;
  lVar5 = 0;
  do {
    if ((int)uVar3 <= lVar5) {
      return 1;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xd8) + lVar4) >> 1 & 1) != 0) {
      if (*(int *)(param_1 + 0x30) <= lVar5) {
LAB_1082b4428:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1082b442c);
        (*pcVar1)();
      }
      plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + lVar5 * 8) + 0x10);
      if (((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 0x58))(), plVar2 != (long *)0x0)) &&
         (*(int *)((long)plVar2 + 0xc) != 2)) {
        FUN_10829fb54(*(undefined8 *)(param_2 + 0x160),plVar2);
      }
    }
    lVar5 = lVar5 + 1;
    uVar3 = (ulong)*(uint *)(param_1 + 0xe0);
    lVar4 = lVar4 + 0x14;
  } while( true );
}



/* Entry: 1082b442c; end: 1082b442f;  */

undefined8 * FUN_1082b442c(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xe4) & 1) != 0) {
    _free(param_1[0x1b]);
  }
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b4430; end: 1082b4443;  */

void FUN_1082b4430(void)

{
  FUN_1082b4454();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082b4444; end: 1082b4453;  */

undefined8 FUN_1082b4444(void)

{
  return 0;
}



/* Entry: 1082b4454; end: 1082b4483;  */

undefined8 * FUN_1082b4454(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xe4) & 1) != 0) {
    _free(param_1[0x1b]);
  }
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082b4484; end: 1082b44a7;  */

void FUN_1082b4484(long *param_1,long *param_2,long *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 1082b44a8; end: 1082b44cb;  */

void FUN_1082b44a8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)(*(uint *)(param_1 + 1) ^ 0x7fffffff) < (int)param_2) {
    func_0x00010bdb1a68();
    pcStack_18 = FUN_1082b44cc;
    puStack_20 = &stack0xfffffffffffffff0;
    if (*(int *)(param_1 + 1) != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x14);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    param_3 = param_3 / 0x14;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *param_1 = param_2;
    *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  pcStack_18 = (code *)0x7fffffff;
  puStack_20 = (undefined1 *)0x14;
  FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
  return;
}



/* Entry: 1082b44cc; end: 1082b453f;  */

void FUN_1082b44cc(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x14);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x14;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082b4540; end: 1082b456f;  */

void FUN_1082b4540(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x14;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082b4570; end: 1082b4583;  */

void FUN_1082b4570(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  puVar3 = &stack0x00000008;
  func_0x000108276964();
  if (puVar3 != (undefined1 *)0x0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return;
}



/* Entry: 1082b4584; end: 1082b45af;  */

long FUN_1082b4584(long param_1)

{
  FUN_1082b45b0();
  FUN_10826b598(param_1 + 0x20);
  return param_1;
}



/* Entry: 1082b45b0; end: 1082b45e7;  */

void FUN_1082b45b0(long param_1)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  _free(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar8 = *(long **)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = 0;
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar1 = plVar8 + 1;
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
  if (plVar8[0x10] == 0) {
    if ((*(int *)((long)plVar8 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(plVar8[0x10] + 0x20) + 0x78);
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
      FUN_1082abdf4(lVar6,unaff_x19);
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
          FUN_1082a0950(unaff_x19);
          return;
        }
      }
      FUN_1082ab9e0(auStack_28);
    }
  }
  return;
}



/* Entry: 1082b45e8; end: 1082b4643;  */

undefined1 * FUN_1082b45e8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_10840f6d0(param_1 + 0x1a28,param_1 + 0x28,0x1a00,0x1a00);
  *(undefined8 *)(param_1 + 0x1a48) = 0;
  return param_1;
}



/* Entry: 1082b4644; end: 1082b467b;  */

long FUN_1082b4644(long param_1)

{
  FUN_1082b467c();
  FUN_10840f740(param_1 + 0x1a28);
  FUN_1082b500c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1082b467c; end: 1082b46bb;  */

void FUN_1082b467c(void)

{
  undefined1 *unaff_x19;
  
  func_0x0001082b5994();
  func_0x0001082b50b8(unaff_x19 + 8);
  while (*(long *)(unaff_x19 + 0x18) != 0) {
    func_0x0001082b59d0();
    func_0x0001082b5a14();
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b46bc; end: 1082b46e3;  */

void FUN_1082b46bc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  if (lVar1 == 0) {
    *param_1 = (long)plVar2;
  }
  else {
    *(long **)(lVar1 + 0x10) = plVar2;
  }
  if (plVar2 != (long *)0x0) {
    param_1 = plVar2;
  }
  param_1[1] = lVar1;
  *(long *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 1082b46e4; end: 1082b470f;  */

void FUN_1082b46e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082b59c4();
  func_0x0001082b4ae4(param_2);
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x20 + 0x1a48);
  *(long *)(unaff_x20 + 0x1a48) = unaff_x19;
  return;
}



/* Entry: 1082b4710; end: 1082b4797;  */

void FUN_1082b4710(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *unaff_x19;
  long lVar3;
  
  func_0x0001082b5994();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar3 + 8);
  }
  while ((lVar2 = lVar1, lVar3 != 0 &&
         ((param_2 == 0 || (*(ulong *)(param_2 + 0x70) < *(ulong *)(param_2 + 0x88)))))) {
    FUN_1082b4798();
    if ((int)lVar3 != 0) {
      func_0x0001082b59e8();
      func_0x0001082b59dc();
      func_0x0001082b5a20();
    }
    lVar1 = 0;
    lVar3 = lVar2;
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 8);
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b4798; end: 1082b47e3;  */

undefined8 FUN_1082b4798(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 1) {
    if (*(int *)(*(long *)(param_1 + 0x50) + 8) == 1) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if ((iVar1 == 2) && (**(int **)(param_1 + 0x50) == 1)) {
    return 1;
  }
  return 0;
}



/* Entry: 1082b47e4; end: 1082b4863;  */

void FUN_1082b47e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *unaff_x19;
  long *plVar3;
  
  func_0x0001082b5994();
  plVar3 = *(long **)(unaff_x19 + 0x20);
  if (plVar3 == (long *)0x0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)plVar3[1];
  }
  while ((plVar2 = plVar1, plVar3 != (long *)0x0 && (*plVar3 < param_2))) {
    FUN_1082b4798();
    if ((int)plVar3 != 0) {
      func_0x0001082b59e8();
      func_0x0001082b59dc();
      func_0x0001082b5a20();
    }
    plVar1 = (long *)0x0;
    plVar3 = plVar2;
    if (plVar2 != (long *)0x0) {
      plVar1 = (long *)plVar2[1];
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082b4864; end: 1082b489b;  */

void FUN_1082b4864(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082b59c4();
  __ZNSt3__16chrono12steady_clock3nowEv();
  *unaff_x19 = param_1;
  FUN_1082b46bc(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  unaff_x19[1] = 0;
  unaff_x19[2] = lVar1;
  if (lVar1 != 0) {
    *(undefined8 **)(lVar1 + 8) = unaff_x19;
  }
  *(long *)(unaff_x20 + 0x18) = (long)unaff_x19;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    return;
  }
  *(undefined8 **)(unaff_x20 + 0x20) = unaff_x19;
  return;
}



/* Entry: 1082b489c; end: 1082b48c3;  */

void FUN_1082b489c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(long *)(param_2 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_2;
  }
  *param_1 = param_2;
  if (param_1[1] != 0) {
    return;
  }
  param_1[1] = param_2;
  return;
}



/* Entry: 1082b48c4; end: 1082b4953;  */

void FUN_1082b48c4(long param_1)

{
  long lVar1;
  int extraout_w11;
  int extraout_w12;
  undefined8 *unaff_x19;
  
  lVar1 = param_1;
  func_0x0001082b5a2c();
  if (lVar1 == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined2 *)((long)unaff_x19 + 0xc) = 0x3210;
    unaff_x19[2] = 0;
  }
  else {
    FUN_1082b4864(param_1,lVar1);
    if (*(long *)(lVar1 + 0x50) != 0) {
      do {
        func_0x0001082b5958();
      } while (extraout_w11 != 0);
    }
    if (*(long *)(lVar1 + 0x40) != 0) {
      do {
        func_0x0001082b599c();
      } while (extraout_w12 != 0);
    }
    func_0x0001082b5910();
    func_0x0001082b5a08();
  }
  return;
}



/* Entry: 1082b4954; end: 1082b49b7;  */

void FUN_1082b4954(undefined1 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  FUN_1082a38f4();
  func_0x0001082b5944();
  FUN_1082b48c4(auStack_48,param_1,param_2);
  func_0x0001082b58e4();
  func_0x0001082b5928();
  *param_1 = 0;
  return;
}



/* Entry: 1082b49b8; end: 1082b49f7;  */

void FUN_1082b49b8(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  FUN_1082a38f4();
  FUN_1082b48c4(param_1,param_2,param_3);
  *param_2 = 0;
  return;
}



/* Entry: 1082b49f8; end: 1082b4a83;  */

long * FUN_1082b49f8(long param_1)

{
  long *unaff_x19;
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a48);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x1a28;
    FUN_1082b4a84(lVar1);
  }
  else {
    *(undefined8 *)(param_1 + 0x1a48) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    func_0x0001082b4a4c(lVar1);
  }
  func_0x0001082b59c4(param_1,lVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  *unaff_x19 = param_1;
  FUN_1082b489c(unaff_x20 + 0x18,unaff_x19);
  func_0x0001082b5690(unaff_x20 + 8,unaff_x19);
  return unaff_x19;
}



/* Entry: 1082b4a84; end: 1082b4aa7;  */

void FUN_1082b4a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1082b5584(param_1,&uStack_20);
  return;
}


