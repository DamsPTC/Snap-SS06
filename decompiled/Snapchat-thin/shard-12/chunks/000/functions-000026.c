/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c65380; end: 108c6547b;  */

undefined8 * FUN_108c65380(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  *param_1 = &PTR_SUB_110abb1d0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 3,param_2 + 2);
  func_0x000108c65018(param_1 + 6,param_2 + 5);
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[0xb] = param_2[10];
  param_1[10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[0xc];
  uVar2 = param_2[0xb];
  param_1[0xd] = param_2[0xc];
  param_1[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10_01 != 0);
  }
  func_0x000108c4d384(param_1 + 0xe,param_2 + 0xd);
  return param_1;
}



/* Entry: 108c6547c; end: 108c65487;  */

undefined8 * FUN_108c6547c(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110d0bcf8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010b573f80(param_1 + 2,0,param_2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 108c65488; end: 108c654d7;  */

long * FUN_108c65488(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000108c4cdb8(param_1 + 0x13);
  FUN_108c4d70c(param_1 + 0x11);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe);
  func_0x000108c4cad0(param_1 + 0xc);
  FUN_108c4d70c(param_1 + 10);
  func_0x00010b573c74(param_1 + 4);
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



/* Entry: 108c654d8; end: 108c6557f;  */

void FUN_108c654d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *extraout_x8;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  *puVar1 = FUN_108c66f6c;
  puVar1[1] = FUN_108c67098;
  FUN_108c65580(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000108c674e0();
  puVar1[0x1c] = param_2;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  func_0x000108c67518(*param_2);
  (*extraout_x8)();
  return;
}



/* Entry: 108c65580; end: 108c65677;  */

void FUN_108c65580(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  func_0x000108c673fc();
  FUN_108c652e8();
  puVar2 = (undefined8 *)(param_1 + 0x20);
  *puVar2 = &PTR_DAT_110d0bcf8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1 != unaff_x20) {
    uVar1 = *(ulong *)(unaff_x20 + 0x28);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      func_0x00010b573e84(puVar2,unaff_x20 + 0x20);
    }
    else {
      func_0x00010b573e4c(puVar2,unaff_x20 + 0x20);
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  func_0x000108c67460(unaff_x19 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  FUN_108c65334(unaff_x19 + 0x98,unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x20 + 0xb8);
  return;
}



/* Entry: 108c65678; end: 108c65c27;  */

/* WARNING: Removing unreachable block (ram,0x000108c65894) */

void FUN_108c65678(long param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long *plVar5;
  long lVar6;
  int extraout_w10;
  int extraout_w10_00;
  long lVar7;
  long extraout_x10;
  ulong extraout_x11;
  long lVar8;
  undefined8 uVar9;
  long alStack_68 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined8 *)0x180;
  __Znwm();
  *puVar3 = FUN_108c66c20;
  puVar3[1] = FUN_108c66f34;
  puVar3[0x2e] = param_1;
  func_0x000107c27f94(puVar3 + 2);
  func_0x000108c674e0();
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
    func_0x000104bfeb48();
LAB_108c659fc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c65a00);
    (*pcVar1)();
  }
  (**(code **)(*plVar4 + 0x30))(puVar3 + 0x12,plVar4,param_1 + 0x20);
  if (puVar3[0x12] == puVar3[0x13]) {
    func_0x000108c673b4();
  }
  else {
    FUN_108c6606c(alStack_68,param_1 + 0x50);
    if (alStack_68[0] == 0) {
      func_0x000108c67450();
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
    }
    else {
      __ZNSt3__15mutex4lockEv(alStack_68[0] + 0x38);
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      lVar6 = puVar3[0x13];
      for (lVar8 = puVar3[0x12]; lVar8 != lVar6; lVar8 = lVar8 + 0x18) {
        lVar7 = alStack_68[0] + 0x78;
        FUN_108c64ae8(lVar7,lVar8);
        if (lVar7 != 0) {
          func_0x000107c281e8(puVar3 + 0x15,lVar8);
        }
      }
      func_0x000107c278a8(&uStack_58);
      __ZNSt3__15mutex6unlockEv(alStack_68[0] + 0x38);
      func_0x000108c67450();
    }
    lVar8 = puVar3[0x12];
    lVar6 = puVar3[0x13];
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    func_0x000108c67460(puVar3 + 0x18);
    func_0x000107c278b8(puVar3 + 0x1b,"total");
    FUN_108c6ca98(uVar9,puVar3 + 0x18,puVar3 + 0x1b,(lVar6 - lVar8) / 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0x1b);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0x18);
    lVar8 = puVar3[0x15];
    lVar6 = puVar3[0x16];
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    func_0x000108c67460(puVar3 + 0x1e);
    func_0x000107c278b8(puVar3 + 0x21,&UNK_10f50e36a);
    FUN_108c6ca98(uVar9,puVar3 + 0x1e,puVar3 + 0x21,(lVar6 - lVar8) / 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0x21);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0x1e);
    uVar2 = puVar3[0x15] == puVar3[0x16];
    if (!(bool)uVar2) {
      func_0x000107c2795c(puVar3 + 0x24,puVar3 + 0x15);
      plVar4 = (long *)(param_1 + 0x88);
      FUN_108c65c28(puVar3 + 0xc,plVar4,puVar3 + 0x24);
      puVar3[9] = puVar3[0xc];
      do {
        func_0x000108c6725c();
      } while (extraout_w10 != 0);
      if (((uint)*(undefined8 *)(puVar3[9] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar3 + 0x2f) = 0;
        lVar8 = puVar3[9];
        func_0x000108c67164();
        if (*plVar4 == 0) {
          func_0x000107c3a5c0();
        }
        plVar5 = (long *)(lVar8 + 0x10);
        do {
          lVar7 = *plVar5;
          if (lVar7 == 0) {
            func_0x000108c673ec();
            plVar5 = extraout_x8;
            lVar7 = extraout_x10;
            if ((extraout_x11 & 1) != 0) {
              func_0x000108c67578();
              if ((bool)uVar2) {
                func_0x000108c673dc();
                func_0x000108c67190();
                func_0x000108c672d0();
                *(long **)(lVar6 + 8) = plVar4;
                *(long **)(lVar8 + 0x90) = plVar4;
              }
              func_0x000108c6721c();
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar7 >> 1 & 1) == 0);
      }
      if (((uint)*(undefined8 *)(puVar3[9] + 0x10) >> 5 & 1) != 0) {
        __ZNSt13exception_ptrC1ERKS_(puVar3 + 0x2d,puVar3[9] + 0x18);
        __ZSt17rethrow_exceptionSt13exception_ptr(puVar3 + 0x2d);
        goto LAB_108c659fc;
      }
      FUN_108c3f118(puVar3 + 4,puVar3[9] + 0x98);
      lVar8 = puVar3[0x2e];
      func_0x000107c27f9c(puVar3 + 9);
      func_0x000108c67510();
      func_0x000108c67448();
      lVar8 = lVar8 + 0x98;
      FUN_108c661a8(lVar8,puVar3 + 4);
      lVar7 = puVar3[0x2e];
      puVar3[0x27] = *(undefined8 *)(lVar7 + 0x60);
      lVar6 = *(long *)(lVar7 + 0x68);
      puVar3[0x28] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x000108c670d0();
        } while (extraout_w10_00 != 0);
        lVar7 = puVar3[0x2e];
      }
      lVar6 = *(long *)(lVar7 + 0xb8);
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar9 = puVar3[0x27];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar3 + 9,lVar7 + 0x70);
      func_0x000107c278b8(puVar3 + 0xc,&DAT_10f398be5);
      func_0x000107c278b8(puVar3 + 0xf,"success");
      FUN_108c6c320(uVar9,puVar3 + 9,puVar3 + 0xc,puVar3 + 0xf,lVar8 - lVar6);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0xf);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 0xc);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3 + 9);
      func_0x000108c4cad0(puVar3 + 0x27);
      func_0x000108c3f498(puVar3 + 4);
      func_0x000108c67324();
      func_0x000108c673bc();
      func_0x000108c673b4();
      goto LAB_108c659a4;
    }
    func_0x000108c673b4();
    func_0x000108c67324();
  }
  func_0x000108c673bc();
LAB_108c659a4:
  func_0x000108c671e0();
  func_0x000108c671f8();
  return;
}



/* Entry: 108c65c28; end: 108c65f1f;  */

void FUN_108c65c28(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  long *extraout_x8;
  long *plVar6;
  ulong uVar7;
  ulong extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long lVar8;
  long extraout_x10;
  ulong extraout_x11;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  long alStack_70 [5];
  undefined8 uStack_48;
  
  puVar1 = param_2;
  func_0x000108c674a0();
  uVar11 = *param_3;
  puVar9 = puVar1 + 4;
  puVar1[5] = param_3[1];
  *puVar9 = uVar11;
  *puVar1 = FUN_108c66b4c;
  puVar1[1] = FUN_108c66be8;
  puVar1[6] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  puVar2 = (undefined8 *)0xc8;
  __Znwm();
  puVar3 = puVar2;
  func_0x000107c31510();
  *puVar3 = &PTR_FUN_110abb250;
  *(undefined1 *)(puVar3 + 0x13) = 0;
  *(undefined1 *)(puVar3 + 0x18) = 0;
  alStack_70[0] = 0;
  uStack_48 = 0;
  func_0x000107c27f98(&uStack_48);
  func_0x000107c27f9c(alStack_70);
  puVar1[2] = puVar2;
  puVar1[3] = puVar2;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  func_0x000107c27fec(alStack_70);
  alStack_70[0] = puVar1[2];
  if (alStack_70[0] != 0) {
    do {
      func_0x000108c6725c();
    } while (extraout_w10 != 0);
  }
  *param_1 = alStack_70[0];
  alStack_70[0] = 0;
  func_0x000107c27f9c(alStack_70);
  FUN_108c6606c(puVar1 + 0xd,param_2);
  lVar5 = puVar1[0xd];
  if (lVar5 == 0) {
    func_0x000108c672f8();
    func_0x000108c672e4();
    func_0x000108c674d4();
    func_0x000108c67398();
  }
  else {
    pbVar4 = *(byte **)(lVar5 + 0x10);
    if (pbVar4 == (byte *)0x0) {
      uVar11 = *(undefined8 *)(lVar5 + 0x20);
      func_0x000107c278b8(puVar1 + 7,&UNK_10f50e350);
      func_0x000107c278b8(puVar1 + 10,&UNK_10f50e1bf);
      FUN_108c6c28c(uVar11,puVar1 + 7,puVar1 + 10,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 7);
      func_0x000108c672e4();
    }
    else {
      (**(code **)(*(long *)pbVar4 + 0x28))(puVar1 + 0x10,pbVar4,puVar9);
      puVar1[0xf] = puVar1[0x10];
      do {
        func_0x000108c6725c();
      } while (extraout_w10_00 != 0);
      if (((uint)*(undefined8 *)(puVar1[0xf] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar1 + 0x11) = 0;
        lVar5 = puVar1[0xf];
        func_0x000108c67164();
        lVar12 = *(long *)pbVar4;
        if (lVar12 == 0) {
          func_0x000107c3a5c0();
          lVar12 = *(long *)pbVar4;
        }
        plVar6 = (long *)(lVar5 + 0x10);
        do {
          lVar8 = *plVar6;
          if (lVar8 == 0) {
            func_0x000108c673ec();
            plVar6 = extraout_x8;
            lVar8 = extraout_x10;
            if ((extraout_x11 & 1) != 0) {
              pbVar10 = *(byte **)(lVar5 + 0x90);
              uVar7 = (ulong)pbVar10[1];
              if (pbVar10[1] == *pbVar10) {
                func_0x000108c673dc();
                func_0x000108c67190();
                func_0x000108c672d0();
                *(byte **)(pbVar10 + 8) = pbVar4;
                *(byte **)(lVar5 + 0x90) = pbVar4;
                uVar7 = extraout_x8_00;
                pbVar10 = pbVar4;
              }
              uVar7 = uVar7 & 0xffffffff;
              pbVar4 = pbVar10 + uVar7 * 0x18 + 0x10;
              pbVar4[0] = 0;
              pbVar4[1] = 0;
              pbVar4[2] = 0;
              pbVar4[3] = 0;
              pbVar4[4] = 0;
              pbVar4[5] = 0;
              pbVar4[6] = 0;
              pbVar4[7] = 0;
              *(undefined8 **)(pbVar10 + uVar7 * 0x18 + 0x18) = puVar1;
              *(long *)(pbVar10 + uVar7 * 0x18 + 0x20) = lVar12;
              *(char *)(*(long *)(lVar5 + 0x90) + 1) =
                   *(char *)(*(long *)(lVar5 + 0x90) + 1) + '\x01';
              *(undefined8 *)(lVar5 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar8 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar1 + 0xf);
      func_0x000108c673ac();
      func_0x000108c6733c();
      FUN_108c64364(alStack_70,puVar1[0xd],puVar9,1);
    }
    func_0x000108c674d4();
    func_0x000108c67398();
    func_0x000108c672f8();
  }
  func_0x000108c671e0();
  func_0x000107c278a8(puVar9);
  func_0x000108c671f8();
  return;
}



/* Entry: 108c65f20; end: 108c6606b;  */

void FUN_108c65f20(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar2 = *param_1;
  func_0x000108c67308(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_70,param_4);
  func_0x000107c278b8(auStack_88,&UNK_10f50e381);
  FUN_108c6c9e8(uVar2,auStack_58,auStack_70,auStack_88,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uVar2 = *param_1;
  func_0x000108c67308(auStack_a0);
  func_0x000108c67458();
  func_0x000107c278b8(auStack_d0,"failure");
  FUN_108c6c320(uVar2,auStack_a0,auStack_b8,auStack_d0,(long)puVar1 - param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x000108c672a4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  return;
}



/* Entry: 108c6606c; end: 108c660ab;  */

void FUN_108c6606c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108c660ac; end: 108c6614f;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_108c660ac(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_38;
  
  func_0x000108c67544();
  plVar6 = (long *)(unaff_x19 + 8);
  lVar7 = *plVar6;
  do {
    uStack_38 = 0;
    lVar4 = lVar7 + 0x10;
    func_0x000107c27ff0(lVar4,&uStack_38,1,2);
    if ((int)lVar4 != 0) {
      if (*(char *)(lVar7 + 0xc0) == '\x01') {
        func_0x000108c3f498(lVar7 + 0x98);
        *(undefined1 *)(lVar7 + 0xc0) = 0;
      }
      FUN_108c3ee30(lVar7 + 0x98);
      *(undefined1 *)(lVar7 + 0xc0) = 1;
      *(undefined8 *)(lVar7 + 0x10) = 2;
      func_0x000107c31508(lVar7,plVar6);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar5 >> 0x21 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8,1,plVar6);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  *plVar6 = 0;
  return;
}



/* Entry: 108c66150; end: 108c66153;  */

undefined8 * FUN_108c66150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb250;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000108c3f498(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c66154; end: 108c66167;  */

void FUN_108c66154(void)

{
  FUN_108c66168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c66168; end: 108c661a7;  */

undefined8 * FUN_108c66168(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb250;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000108c3f498(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c661a8; end: 108c661c7;  */

void FUN_108c661a8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c661b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 108c661c8; end: 108c661cf;  */

void FUN_108c661c8(void)

{
  return;
}



/* Entry: 108c661d0; end: 108c661f3;  */

void FUN_108c661d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110abb2a0;
  return;
}



/* Entry: 108c661f4; end: 108c66213;  */

void FUN_108c661f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110abb2a0;
  return;
}



/* Entry: 108c66214; end: 108c662ab;  */

void FUN_108c66214(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,(long)*(int *)(param_3 + 0x18));
  lVar4 = 8;
  for (lVar3 = 0; lVar3 < *(int *)(param_3 + 0x18); lVar3 = lVar3 + 1) {
    uVar2 = *(ulong *)(param_3 + 0x10);
    puVar1 = (ulong *)(param_3 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + lVar4 + -1);
    }
    func_0x000107c281e8(param_1,*(ulong *)(*puVar1 + 0x10) & 0xfffffffffffffffc);
    lVar4 = lVar4 + 8;
  }
  return;
}



/* Entry: 108c662ac; end: 108c662d3;  */

void FUN_108c662ac(undefined8 param_1)

{
  func_0x000108c6758c();
  func_0x000108c673c4(param_1,&PTR_DAT_110abb310);
  func_0x000108c672ac();
  return;
}



/* Entry: 108c662d4; end: 108c662df;  */

undefined ** FUN_108c662d4(void)

{
  return &PTR_DAT_110abb310;
}



/* Entry: 108c662e0; end: 108c6634f;  */

long * FUN_108c662e0(long *param_1)

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



/* Entry: 108c66350; end: 108c66363;  */

void FUN_108c66350(void)

{
  func_0x000108c66324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c66364; end: 108c663ab;  */

void FUN_108c66364(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_110abb330;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c663ac; end: 108c663f3;  */

void FUN_108c663ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110abb330;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108c670d0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c663f4; end: 108c66447;  */

void FUN_108c663f4(long param_1,undefined8 param_2)

{
  long alStack_30 [2];
  
  FUN_108c6606c(alStack_30,param_1 + 8);
  if (alStack_30[0] != 0) {
    FUN_108c643fc(alStack_30[0],param_2);
  }
  func_0x000108c4cb18(alStack_30);
  return;
}



/* Entry: 108c66448; end: 108c6646f;  */

void FUN_108c66448(undefined8 param_1)

{
  func_0x000108c6758c();
  func_0x000108c673c4(param_1,&PTR_DAT_110abb390);
  func_0x000108c672ac();
  return;
}



/* Entry: 108c66470; end: 108c664ab;  */

undefined ** FUN_108c66470(void)

{
  return &PTR_DAT_110abb390;
}



/* Entry: 108c664ac; end: 108c66647;  */

undefined1  [16] FUN_108c664ac(ulong param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar5;
  ulong uVar6;
  ulong unaff_x26;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 *puStack_78;
  
  func_0x000108c6728c();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = param_1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x26 = uVar7 & param_1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_1 - uVar6) < 0;
      unaff_x26 = param_1;
      if (uVar6 <= param_1) {
        func_0x000108c67524();
      }
    }
    puVar5 = *(undefined8 **)(*unaff_x19 + unaff_x26 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      do {
        while( true ) {
          puVar5 = (undefined8 *)*puVar5;
          if (puVar5 == (undefined8 *)0x0) goto LAB_108c66558;
          uVar3 = puVar5[1];
          in_NG = (long)(uVar3 - param_1) < 0;
          if (uVar3 != param_1) break;
          func_0x000108c674f4();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            puStack_78 = puVar5;
            goto LAB_108c6662c;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
        in_NG = (long)(uVar3 - unaff_x26) < 0;
      } while (uVar3 == unaff_x26);
    }
  }
LAB_108c66558:
  func_0x000108c67300();
  func_0x000108c67550();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000108c6711c(*unaff_x21);
  if ((uVar6 == 0) || (func_0x000108c673a0(), uVar4 = unaff_x26, (bool)in_NG)) {
    func_0x000108c67408();
    func_0x000108c670e0();
    func_0x000108c674cc();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & param_1;
    }
    else {
      uVar4 = param_1;
      if (uVar6 <= param_1) {
        func_0x000108c67524();
        uVar4 = unaff_x26;
      }
    }
  }
  puVar5 = *(undefined8 **)(*unaff_x19 + uVar4 * 8);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x000108c67420();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(undefined8 **)(extraout_x8 + uVar4 * 8) = puStack_78;
    }
  }
  else {
    *puStack_78 = *puVar5;
    *puVar5 = puStack_78;
  }
  func_0x000108c670f4();
  uVar2 = 1;
LAB_108c6662c:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = puStack_78;
  return auVar8;
}



/* Entry: 108c66648; end: 108c66667;  */

void FUN_108c66648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108c664ac(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 108c66668; end: 108c666a3;  */

long FUN_108c66668(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_108c666a4(param_1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return param_1;
}



/* Entry: 108c666a4; end: 108c667cb;  */

void FUN_108c666a4(undefined8 ***param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *plVar3;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000108c67544();
  ppuVar2 = param_1[1];
  if (ppuVar2 != (undefined8 **)0x0) {
    puVar1 = (undefined8 *)*unaff_x19;
    for (; ppuVar2 != (undefined8 **)0x0; ppuVar2 = (undefined8 **)((long)ppuVar2 + -1)) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    plVar3 = (long *)unaff_x19[2];
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    for (; (plVar3 != (long *)0x0 && (unaff_x21 != (long *)param_3)); unaff_x21 = (long *)*unaff_x21
        ) {
      plVar3[2] = unaff_x21[2];
      param_1 = (undefined8 ***)(plVar3 + 3);
      FUN_108c4ce64(param_1,unaff_x21 + 3);
      plVar3 = (long *)*plVar3;
      func_0x000108c674b4();
    }
    func_0x000108c674c0();
  }
  for (; unaff_x21 != (long *)param_3; unaff_x21 = (long *)*unaff_x21) {
    func_0x000108c67300();
    uStack_48 = 0;
    ppuStack_58 = param_1;
    puStack_50 = unaff_x19 + 2;
    *param_1 = (undefined8 **)0x0;
    param_1[1] = (undefined8 **)0x0;
    param_1[2] = (undefined8 **)unaff_x21[2];
    func_0x000108c4d384(param_1 + 3,unaff_x21 + 3);
    uStack_48 = CONCAT71(uStack_48._1_7_,1);
    param_1[1] = param_1[2];
    func_0x000108c674b4();
    ppuStack_58 = (undefined8 **)0x0;
    param_1 = &ppuStack_58;
    FUN_108c4d304();
  }
  return;
}



/* Entry: 108c667cc; end: 108c66b4b;  */

void FUN_108c667cc(long param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong extraout_x8;
  long lVar6;
  ulong extraout_x9;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  func_0x000108c673fc();
  uVar16 = *(ulong *)(param_2 + 0x10);
  puVar15 = (ulong *)(param_1 + 8);
  uVar17 = *puVar15;
  *(ulong *)(param_2 + 8) = uVar16;
  if ((uVar17 == 0) ||
     (func_0x000108c673a0((float)(*(long *)(param_1 + 0x18) + 1),*(undefined4 *)(param_1 + 0x20),
                          (float)uVar17), (bool)in_NG)) {
    bVar3 = 2 < uVar17;
    bVar4 = uVar17 == 3;
    func_0x000108c670e0(uVar17 << 1);
    uVar14 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar14 = extraout_x9;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar17 = *puVar15;
    }
    if (uVar17 < uVar14) {
LAB_108c66868:
      FUN_108c4d2e8(puVar15,uVar14);
      FUN_108c4d2d0();
      unaff_x19[1] = uVar14;
      lVar6 = *unaff_x19;
      for (uVar17 = 0; uVar14 != uVar17; uVar17 = uVar17 + 1) {
        *(undefined8 *)(lVar6 + uVar17 * 8) = 0;
      }
      plVar8 = (long *)unaff_x19[2];
      uVar17 = uVar14;
      if (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        uVar7 = uVar14 - 1;
        if ((uVar14 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar14 <= uVar10) {
          uVar11 = 0;
          if (uVar14 != 0) {
            uVar11 = uVar10 / uVar14;
          }
          uVar10 = uVar10 - uVar11 * uVar14;
        }
        *(long **)(lVar6 + uVar10 * 8) = unaff_x19 + 2;
        while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
          uVar11 = plVar8[1];
          if ((uVar14 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar14 <= uVar11) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar1 * uVar14;
          }
          if (uVar11 != uVar10) {
            plVar13 = plVar8;
            if (*(long *)(lVar6 + uVar11 * 8) == 0) {
              *(long **)(lVar6 + uVar11 * 8) = plVar9;
              uVar10 = uVar11;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
              } while (plVar8[2] == plVar13[2]);
              *plVar9 = (long)plVar13;
              *plVar12 = **(long **)(lVar6 + uVar11 * 8);
              **(long **)(lVar6 + uVar11 * 8) = (long)plVar8;
              plVar8 = plVar9;
            }
          }
        }
      }
    }
    else if (uVar14 < uVar17) {
      uVar10 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x000108c6713c();
      }
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      if (uVar14 < uVar17) {
        if (uVar14 != 0) goto LAB_108c66868;
        FUN_108c4d2d0();
        unaff_x19[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = *puVar15;
      }
    }
  }
  uVar14 = uVar17 - 1;
  if ((uVar17 & uVar14) == 0) {
    uVar10 = uVar14 & uVar16;
  }
  else {
    uVar10 = uVar16;
    if (uVar17 <= uVar16) {
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      uVar10 = uVar16 - uVar10 * uVar17;
    }
  }
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + uVar10 * 8);
  if (plVar8 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar9 = plVar8;
      plVar8 = (long *)*plVar9;
      if (plVar8 == (long *)0x0) break;
      uVar7 = plVar8[1];
      if ((uVar17 & uVar14) == 0) {
        uVar11 = uVar7 & uVar14;
      }
      else {
        uVar11 = uVar7;
        if (uVar17 <= uVar7) {
          uVar11 = 0;
          if (uVar17 != 0) {
            uVar11 = uVar7 / uVar17;
          }
          uVar11 = uVar7 - uVar11 * uVar17;
        }
      }
      if (uVar11 != uVar10) break;
      if (uVar7 == uVar16) {
        bVar3 = plVar8[2] == unaff_x20[2];
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  uVar16 = unaff_x20[1];
  if ((uVar17 & uVar14) == 0) {
    uVar16 = uVar14 & uVar16;
    if (plVar9 == (long *)0x0) goto LAB_108c66aac;
LAB_108c66a70:
    *unaff_x20 = *plVar9;
    *plVar9 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_108c66b00;
    uVar10 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar17 & uVar14) == 0) {
      uVar10 = uVar10 & uVar14;
    }
    else if (uVar17 <= uVar10) {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar10 / uVar17;
      }
      uVar10 = uVar10 - uVar14 * uVar17;
    }
    if (uVar10 == uVar16) goto LAB_108c66b00;
  }
  else {
    if (uVar17 <= uVar16) {
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar10 * uVar17;
    }
    if (plVar9 != (long *)0x0) goto LAB_108c66a70;
LAB_108c66aac:
    plVar8 = unaff_x19 + 2;
    *unaff_x20 = *plVar8;
    *plVar8 = (long)unaff_x20;
    *(long **)(lVar6 + uVar16 * 8) = plVar8;
    if (*unaff_x20 == 0) goto LAB_108c66b00;
    uVar10 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar17 & uVar14) == 0) {
      uVar10 = uVar10 & uVar14;
    }
    else if (uVar17 <= uVar10) {
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar10 / uVar17;
      }
      uVar10 = uVar10 - uVar16 * uVar17;
    }
  }
  *(long **)(lVar6 + uVar10 * 8) = unaff_x20;
LAB_108c66b00:
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 108c66b4c; end: 108c66be7;  */

void FUN_108c66b4c(long param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x000107c28834(param_1 + 0x78);
  func_0x000108c673ac();
  func_0x000108c6733c();
  FUN_108c64364(auStack_48,*(undefined8 *)(param_1 + 0x68),param_1 + 0x20,1);
  FUN_108c660ac(param_1 + 0x10,auStack_48);
  func_0x000108c3f498(auStack_48);
  func_0x000108c672f8();
  func_0x000108c671e0();
  func_0x000107c278a8(param_1 + 0x20);
  func_0x000108c671f8();
  return;
}



/* Entry: 108c66be8; end: 108c66c1f;  */

void FUN_108c66be8(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x78);
  func_0x000108c6733c();
  func_0x000108c672f8();
  func_0x000108c671e0();
  func_0x000107c278a8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c66c20; end: 108c66f33;  */

void FUN_108c66c20(long param_1)

{
  code *pcVar1;
  long lVar2;
  int extraout_w10;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar3 = (long *)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*plVar3 + 0x10) >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(param_1 + 0x168,*plVar3 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(param_1 + 0x168);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c66d7c);
    (*pcVar1)();
  }
  lVar4 = param_1 + 0x20;
  FUN_108c3f118(lVar4,*plVar3 + 0x98);
  lVar5 = *(long *)(param_1 + 0x170);
  func_0x000107c27f9c(plVar3);
  func_0x000107c27f9c(param_1 + 0x60);
  func_0x000107c278a8(param_1 + 0x120);
  lVar5 = lVar5 + 0x98;
  FUN_108c661a8(lVar5,lVar4);
  lVar7 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar7 + 0x60);
  lVar2 = *(long *)(lVar7 + 0x68);
  *(long *)(param_1 + 0x140) = lVar2;
  if (lVar2 != 0) {
    do {
      FUN_108c670d0();
    } while (extraout_w10 != 0);
    lVar7 = *(long *)(param_1 + 0x170);
  }
  lVar2 = *(long *)(lVar7 + 0xb8);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3,lVar7 + 0x70);
  func_0x000107c278b8(param_1 + 0x60,&DAT_10f398be5);
  func_0x000107c278b8(param_1 + 0x78,"success");
  FUN_108c6c320(uVar6,plVar3,param_1 + 0x60,param_1 + 0x78,lVar5 - lVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar3);
  func_0x000108c4cad0(param_1 + 0x138);
  func_0x000108c3f498(lVar4);
  func_0x000107c278a8(param_1 + 0xa8);
  func_0x000107c278a8(param_1 + 0x90);
  func_0x000107c287c8(param_1 + 0x10);
  func_0x000107c27fb8(param_1 + 0x10);
  func_0x000108c671f8();
  return;
}



/* Entry: 108c66f34; end: 108c66f6b;  */

void FUN_108c66f34(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x48);
  func_0x000108c67510();
  func_0x000108c67448();
  func_0x000108c67324();
  func_0x000108c673bc();
  func_0x000108c671e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c66f6c; end: 108c67097;  */

void FUN_108c66f6c(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *extraout_x8;
  long *plVar2;
  int extraout_w10;
  long lVar3;
  long extraout_x10;
  ulong extraout_x11;
  long lVar4;
  long unaff_x22;
  
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x20);
    FUN_108c65678(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xe8);
    do {
      func_0x000108c6725c();
    } while (extraout_w10 != 0);
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
      lVar4 = *(long *)(param_1 + 0xe0);
      func_0x000108c67164();
      if (*plVar1 == 0) {
        func_0x000107c3a5c0();
      }
      plVar2 = (long *)(lVar4 + 0x10);
      do {
        lVar3 = *plVar2;
        if (lVar3 == 0) {
          func_0x000108c673ec();
          plVar2 = extraout_x8;
          lVar3 = extraout_x10;
          if ((extraout_x11 & 1) != 0) {
            func_0x000108c67578();
            if ((bool)in_ZR) {
              func_0x000108c673dc();
              func_0x000108c67190();
              func_0x000108c672d0();
              *(long **)(unaff_x22 + 8) = plVar1;
              *(long **)(lVar4 + 0x90) = plVar1;
            }
            func_0x000108c6721c();
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar3 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0xe0);
  func_0x000108c67490();
  func_0x000108c67488();
  func_0x000108c673b4();
  func_0x000108c671e0();
  func_0x000108c67508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c67098; end: 108c670cf;  */

void FUN_108c67098(long param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x000108c67490();
    func_0x000108c67488();
  }
  func_0x000108c671e0();
  func_0x000108c67508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c670d0; end: 108c675ab;  */

void FUN_108c670d0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c675ac; end: 108c676c3;  */

long FUN_108c675ac(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar1 = param_1;
  func_0x000108c67da4();
  *(undefined8 *)(lVar1 + 0x28) = 0x32aaaba7;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined1 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  func_0x000107c278b8(auStack_58,&UNK_10f50e395);
  func_0x000107c3146c(auStack_40,auStack_58,0x19,1,0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000107c27f7c(auStack_58,auStack_40);
  func_0x000107c2a870(param_1 + 0x78,auStack_58);
  func_0x000107c27f48(auStack_58);
  func_0x000107c27c20(auStack_40);
  return param_1;
}



/* Entry: 108c676c4; end: 108c676ef;  */

void FUN_108c676c4(void)

{
  long unaff_x19;
  
  func_0x000108c67d84();
  func_0x000108c67dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x28);
  return;
}



/* Entry: 108c676f0; end: 108c67817;  */

void FUN_108c676f0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long *plVar2;
  undefined8 auStack_58 [2];
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (((lVar1 != 0) && (*(long *)(param_1 + 0xa0) != 0)) && ((*(byte *)(param_1 + 0xa8) & 1) == 0))
  {
    func_0x000107c278b8(&lStack_38,&UNK_10f50e39b);
    func_0x000108c67d38(auStack_58,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    func_0x000108c67dd4(auStack_58[0]);
    (**(code **)(extraout_x8 + 0x18))(lVar1,&lStack_38,&lStack_48,param_1 + 0x78);
    func_0x000107c28290(&lStack_48);
    func_0x000108c67dc0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_38);
    plVar2 = *(long **)(param_1 + 0x68);
    func_0x000108c67d38(&lStack_48,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    lStack_38 = 0;
    if (lStack_48 != 0) {
      lStack_38 = lStack_48 + 0x10;
    }
    uStack_30 = uStack_40;
    lStack_48 = 0;
    uStack_40 = 0;
    (**(code **)(*plVar2 + 0x28))(plVar2,&lStack_38,param_1 + 0x78);
    func_0x000107c28294(&lStack_38);
    func_0x000108c4e438(&lStack_48);
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}



/* Entry: 108c67818; end: 108c678b3;  */

void FUN_108c67818(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  code *extraout_x8;
  long unaff_x19;
  
  func_0x000108c67d84();
  plVar1 = *(long **)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  if (plVar1 == (long *)(unaff_x19 + 0x88)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_108c67860;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_108c67860:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  }
  else if (lVar2 == param_2) {
    *(long **)(unaff_x19 + 0xa0) = (long *)(unaff_x19 + 0x88);
    func_0x000108c67dc8(*(undefined8 *)(param_2 + 0x18));
    (*extraout_x8)();
  }
  else {
    *(long *)(unaff_x19 + 0xa0) = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  func_0x000108c67dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x28);
  return;
}



/* Entry: 108c678b4; end: 108c678e3;  */

void FUN_108c678b4(void)

{
  long unaff_x19;
  
  func_0x000108c67d84();
  FUN_108c678e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x28);
  return;
}



/* Entry: 108c678e4; end: 108c6799b;  */

void FUN_108c678e4(long param_1)

{
  long extraout_x8;
  long *plVar1;
  undefined8 auStack_48 [2];
  undefined1 auStack_38 [24];
  
  plVar1 = *(long **)(param_1 + 0x68);
  if ((plVar1 != (long *)0x0) && (*(char *)(param_1 + 0xa8) == '\x01')) {
    func_0x000107c278b8(auStack_38,&UNK_10f50e39b);
    func_0x000108c67e00(*(undefined8 *)(*plVar1 + 0x20));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    func_0x000108c67d38(auStack_48,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    func_0x000108c67dd4(auStack_48[0]);
    func_0x000108c67e00(*(undefined8 *)(extraout_x8 + 0x30));
    func_0x000107c28294(auStack_38);
    func_0x000108c67dc0();
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}



/* Entry: 108c6799c; end: 108c679f3;  */

void FUN_108c6799c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  long *plVar1;
  
  func_0x000108c67d84();
  plVar1 = (long *)(unaff_x19 + 0x68);
  if (*plVar1 != 0) {
    FUN_108c678e4();
  }
  func_0x000107c2828c(plVar1,param_2);
  if (*plVar1 != 0) {
    func_0x000108c67dec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x28);
  return;
}



/* Entry: 108c679f4; end: 108c67ca3;  */

void FUN_108c679f4(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined ***pppuVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long alStack_70 [3];
  long *plStack_58;
  long alStack_50 [3];
  long lStack_38;
  
  uVar2 = 0;
  pppuVar6 = &ppuStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &PTR_DAT_110d0bd48;
  uStack_a8 = 0;
  uStack_98 = 0;
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
LAB_108c67a68:
    lVar4 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    lVar4 = *param_2;
    if (lVar4 == 0) goto LAB_108c67a68;
    func_0x000108c67dc8();
    (*extraout_x8)();
  }
  func_0x000107c3034c(&ppuStack_b0,plVar3,lVar4);
  uVar1 = 0;
  if (uStack_98._4_4_ == 1) {
    uVar1 = uVar2;
  }
  if ((uVar1 & 1) == 0) goto LAB_108c67c04;
  plStack_78 = (long *)0x0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    plStack_58 = (long *)0x0;
LAB_108c67af4:
    if (plStack_78 == alStack_90) {
      plVar3 = alStack_70;
      (**(code **)(*plStack_78 + 0x18))(plStack_78);
      func_0x000108c67d90(plStack_78);
      plStack_78 = plStack_58;
      plStack_58 = alStack_70;
    }
    else {
      plStack_58 = plStack_78;
      plStack_78 = plVar5;
    }
  }
  else {
    if (plVar5 == (long *)(param_1 + 0x88)) {
      plStack_58 = alStack_70;
      func_0x000108c67dc8();
      plVar3 = alStack_70;
      (*extraout_x8_00)();
    }
    else {
      (**(code **)(*plVar5 + 0x10))();
      plStack_58 = plVar5;
    }
    plVar5 = plStack_58;
    if (plStack_58 != alStack_70) goto LAB_108c67af4;
    if (plStack_78 == alStack_90) {
      func_0x000108c67dc8();
      (*extraout_x8_02)();
      func_0x000108c67d90(plStack_58);
      plStack_58 = (long *)0x0;
      func_0x000108c67dc8(plStack_78);
      (*extraout_x8_03)();
      func_0x000108c67d90(plStack_78);
      plStack_78 = (long *)0x0;
      plVar3 = alStack_90;
      plStack_58 = alStack_70;
      (**(code **)(alStack_50[0] + 0x18))(alStack_50);
      (**(code **)(alStack_50[0] + 0x20))(alStack_50);
    }
    else {
      func_0x000108c67dc8();
      plVar3 = alStack_90;
      (*extraout_x8_01)();
      func_0x000108c67d90(plStack_58);
      plStack_58 = plStack_78;
    }
    plStack_78 = alStack_90;
  }
  func_0x000108c4d7a4(alStack_70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x30))();
    plVar3 = plStack_a0;
  }
  func_0x000108c4d7a4(alStack_90);
LAB_108c67c04:
  func_0x00010b573678(&ppuStack_b0);
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    plVar5 = plVar3;
    while( true ) {
      plVar3 = plVar5;
      func_0x000108c4d7a4(alStack_90);
      func_0x00010b573678(&ppuStack_b0);
      if ((int)plVar5 == 1) break;
      func_0x000108c67d9c();
      func_0x000104bd46a0(pppuVar6);
      plVar5 = plVar3;
    }
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108c67ca4; end: 108c67cb7;  */

void FUN_108c67ca4(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined ***pppuVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  long *plStack_78;
  long alStack_70 [3];
  long *plStack_58;
  long alStack_50 [3];
  long lStack_38;
  
  uVar2 = 0;
  pppuVar6 = &ppuStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b0 = &PTR_DAT_110d0bd48;
  uStack_a8 = 0;
  uStack_98 = 0;
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
LAB_108c67a68:
    lVar4 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    lVar4 = *param_2;
    if (lVar4 == 0) goto LAB_108c67a68;
    func_0x000108c67dc8();
    (*extraout_x8)();
  }
  func_0x000107c3034c(&ppuStack_b0,plVar3,lVar4);
  uVar1 = 0;
  if (uStack_98._4_4_ == 1) {
    uVar1 = uVar2;
  }
  if ((uVar1 & 1) == 0) goto LAB_108c67c04;
  plStack_78 = (long *)0x0;
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x98);
  if (plVar5 == (long *)0x0) {
    plStack_58 = (long *)0x0;
LAB_108c67af4:
    if (plStack_78 == alStack_90) {
      plVar3 = alStack_70;
      (**(code **)(*plStack_78 + 0x18))(plStack_78);
      func_0x000108c67d90(plStack_78);
      plStack_78 = plStack_58;
      plStack_58 = alStack_70;
    }
    else {
      plStack_58 = plStack_78;
      plStack_78 = plVar5;
    }
  }
  else {
    if (plVar5 == (long *)(param_1 + 0x80)) {
      plStack_58 = alStack_70;
      func_0x000108c67dc8();
      plVar3 = alStack_70;
      (*extraout_x8_00)();
    }
    else {
      (**(code **)(*plVar5 + 0x10))();
      plStack_58 = plVar5;
    }
    plVar5 = plStack_58;
    if (plStack_58 != alStack_70) goto LAB_108c67af4;
    if (plStack_78 == alStack_90) {
      func_0x000108c67dc8();
      (*extraout_x8_02)();
      func_0x000108c67d90(plStack_58);
      plStack_58 = (long *)0x0;
      func_0x000108c67dc8(plStack_78);
      (*extraout_x8_03)();
      func_0x000108c67d90(plStack_78);
      plStack_78 = (long *)0x0;
      plVar3 = alStack_90;
      plStack_58 = alStack_70;
      (**(code **)(alStack_50[0] + 0x18))(alStack_50);
      (**(code **)(alStack_50[0] + 0x20))(alStack_50);
    }
    else {
      func_0x000108c67dc8();
      plVar3 = alStack_90;
      (*extraout_x8_01)();
      func_0x000108c67d90(plStack_58);
      plStack_58 = plStack_78;
    }
    plStack_78 = alStack_90;
  }
  func_0x000108c4d7a4(alStack_70);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  if (plStack_78 != (long *)0x0) {
    (**(code **)(*plStack_78 + 0x30))();
    plVar3 = plStack_a0;
  }
  func_0x000108c4d7a4(alStack_90);
LAB_108c67c04:
  func_0x00010b573678(&ppuStack_b0);
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    plVar5 = plVar3;
    while( true ) {
      plVar3 = plVar5;
      func_0x000108c4d7a4(alStack_90);
      func_0x00010b573678(&ppuStack_b0);
      if ((int)plVar5 == 1) break;
      func_0x000108c67d9c();
      func_0x000104bd46a0(pppuVar6);
      plVar5 = plVar3;
    }
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108c67cb8; end: 108c67ccb;  */

void FUN_108c67cb8(void)

{
  FUN_108c67cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c67ccc; end: 108c67ceb;  */

long FUN_108c67ccc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + -8;
  func_0x000108c67da4();
  func_0x000108c4d7a4(lVar1 + 0x88);
  func_0x000107c27e70(param_1 + 0x70);
  func_0x000107c28254(param_1 + 0x60);
  __ZNSt3__15mutexD1Ev(param_1 + 0x20);
  FUN_108c4e414(param_1 + 0x10);
  return param_1 + -8;
}



/* Entry: 108c67cec; end: 108c67d77;  */

long FUN_108c67cec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000108c67da4();
  func_0x000108c4d7a4(lVar1 + 0x88);
  func_0x000107c27e70(param_1 + 0x78);
  func_0x000107c28254(param_1 + 0x68);
  __ZNSt3__15mutexD1Ev(param_1 + 0x28);
  FUN_108c4e414(param_1 + 0x18);
  return param_1;
}



/* Entry: 108c67d78; end: 108c67e0b;  */

void FUN_108c67d78(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x28);
  return;
}



/* Entry: 108c67e0c; end: 108c67eaf;  */

undefined8 * FUN_108c67e0c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110abb4c8;
  FUN_108c68ba4(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



/* Entry: 108c67eb0; end: 108c6800f;  */

void FUN_108c67eb0(undefined8 param_1)

{
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  func_0x000107c3018c(auStack_68,&UNK_10f50e3ae,0x1b,"",0);
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
  }
  if (uStack_60 != 0) {
    func_0x000107c278b8(auStack_80,"X-Snap-Route-Tag");
    func_0x000107c27e80(&uStack_50,auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    if (lStack_38 != 0) {
      func_0x000108c68ab8(auStack_b0,&uStack_50);
      goto LAB_108c67f58;
    }
  }
  auStack_b0[0] = 0;
  uStack_88 = 0;
LAB_108c67f58:
  auStack_d0[0] = 0;
  uStack_b8 = 0;
  auStack_f0[0] = 0;
  uStack_d8 = 0;
  auStack_110[0] = 0;
  uStack_f8 = 0;
  func_0x000107c27e84(param_1,20000,1,auStack_b0,0x101,auStack_d0,auStack_f0,0,auStack_110);
  func_0x000107c279a4(auStack_110);
  func_0x000107c279a4(auStack_f0);
  func_0x000107c279a4(auStack_d0);
  func_0x000107c27bb0(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  func_0x000107c278e0(&uStack_50);
  return;
}



/* Entry: 108c68010; end: 108c6818b;  */

void FUN_108c68010(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *extraout_x8;
  int extraout_w9;
  int extraout_w10;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puStack_1d0;
  undefined8 auStack_1c0 [24];
  undefined8 *puStack_100;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [32];
  
  func_0x000108c69de4();
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_40 = &PTR_FUN_110abc480;
  puVar1 = param_1;
  func_0x000108c69da0();
  func_0x000108c69be8();
  func_0x000108c69bd4();
  *puVar1 = &PTR_DAT_110abb590;
  puVar5 = puVar1 + 3;
  *puVar5 = &PTR_DAT_110abb5e0;
  plVar3 = puVar1 + 4;
  *plVar3 = 0;
  auStack_1c0[0] = 0;
  func_0x000108c69bac();
  func_0x000108c69b50();
  lVar2 = 0xd8;
  __Znwm();
  func_0x000108c69b38();
  func_0x000108c69cec(&PTR_FUN_110abb660);
  *(undefined1 *)(lVar2 + 0xd0) = 0;
  func_0x000108c69b64();
  func_0x000108c69bac();
  func_0x000108c69b24();
  func_0x000108c69d64();
  func_0x000108c69d84();
  func_0x000107c288b0(plVar3,auStack_20);
  func_0x000108c69c3c();
  func_0x000108c69db0();
  func_0x000108c69da8();
  puStack_100 = puVar5;
  func_0x000108c67e54();
  uVar4 = *param_1;
  func_0x000108c69bc0();
  puStack_1d0 = puVar5;
  do {
    func_0x000108c69cb4();
  } while (extraout_w9 != 0);
  FUN_108c6fca4(uVar4,&ppuStack_40,auStack_1c0,&puStack_1d0);
  func_0x000108c68f6c(&puStack_1d0);
  func_0x000108c69b9c();
  lVar2 = *plVar3;
  *extraout_x8 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108c69b80();
    } while (extraout_w10 != 0);
  }
  func_0x000108c68f48(&puStack_100);
  func_0x000108c69bf0();
  FUN_108c6cd7c(&ppuStack_40);
  return;
}



/* Entry: 108c6818c; end: 108c68297;  */

void FUN_108c6818c(void)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_200;
  long lStack_1f8;
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [176];
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x000108c69d04();
  ppuStack_78 = &PTR_FUN_110abc700;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  FUN_108c68298(&ppuStack_78);
  FUN_108c67eb0(auStack_128);
  FUN_108c682c0();
  func_0x000108c69c58();
  func_0x000108c69d78();
  lStack_200 = lStack_138;
  lStack_1f8 = lStack_130;
  if (lStack_130 != 0) {
    do {
      func_0x000108c69cc4();
    } while (extraout_w10 != 0);
  }
  func_0x000108c69bf8();
  FUN_108c6fdb4();
  func_0x000108c691e8(&lStack_200);
  func_0x000108c69b9c();
  lVar1 = *(long *)(lStack_138 + 8);
  *unaff_x19 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000108c69b80();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108c69c74();
  func_0x000108c69c7c();
  FUN_108c6d314(&ppuStack_78);
  return;
}



/* Entry: 108c68298; end: 108c682bf;  */

void FUN_108c68298(long param_1)

{
  func_0x000107c303b4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return;
}



/* Entry: 108c682c0; end: 108c683bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108c682c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_80;
  long alStack_78 [5];
  
  puVar1 = param_1;
  func_0x000108c69be8();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110abb6a0;
  puVar1[3] = &PTR_DAT_110abb6f0;
  func_0x000108c69c60();
  puVar1[5] = 0;
  func_0x000108c69d8c();
  lVar2 = 0xe0;
  __Znwm();
  lVar3 = lVar2;
  func_0x000108c69b38();
  func_0x000108c69cec(&PTR_FUN_110abb770);
  *(undefined1 *)(lVar3 + 0xd8) = 0;
  alStack_78[3] = 0;
  lStack_80 = 0;
  func_0x000108c69d98();
  func_0x000107c27f9c(alStack_78 + 3);
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  lStack_80 = lVar2;
  alStack_78[0] = lVar2;
  func_0x000107c27f98(alStack_78 + 1);
  func_0x000107c27f9c(alStack_78 + 2);
  func_0x000107c27fec(alStack_78 + 3);
  func_0x000108c69cac();
  func_0x000107c2887c(puVar1 + 5,alStack_78);
  func_0x000107c27f98(alStack_78);
  func_0x000107c27f9c(&lStack_80);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 108c683bc; end: 108c684e7;  */

void FUN_108c683bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lStack_210;
  long lStack_208;
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [176];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  func_0x000108c69d04();
  ppuStack_88 = &PTR_FUN_110abc700;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_108c68298(&ppuStack_88,lVar2);
  }
  FUN_108c67eb0(auStack_138);
  FUN_108c682c0();
  func_0x000108c69c58();
  func_0x000108c69d78();
  lStack_210 = lStack_148;
  lStack_208 = lStack_140;
  if (lStack_140 != 0) {
    do {
      func_0x000108c69cc4();
    } while (extraout_w10 != 0);
  }
  func_0x000108c69bf8();
  FUN_108c6fdb4();
  func_0x000108c691e8(&lStack_210);
  func_0x000108c69b9c();
  lVar2 = *(long *)(lStack_148 + 8);
  *unaff_x19 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108c69b80();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108c69c74();
  func_0x000108c69c7c();
  FUN_108c6d314(&ppuStack_88);
  return;
}



/* Entry: 108c684e8; end: 108c68683;  */

void FUN_108c684e8(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w9;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *puVar3;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_110;
  long lStack_108;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108c69de4();
  func_0x000108c69d04();
  ppuStack_50 = &PTR_FUN_110abc4d0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    param_1 = &uStack_40;
    func_0x000107c303b4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  uStack_28 = CONCAT44(uStack_28._4_4_,param_3);
  func_0x000108c69da0();
  func_0x000108c69be8();
  func_0x000108c69bd4();
  *param_1 = &PTR_FUN_110abb7b0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_DAT_110abb800;
  param_1[4] = 0;
  uStack_1d0 = 0;
  func_0x000108c69bac();
  func_0x000108c69b50();
  lVar1 = 0xe0;
  __Znwm();
  func_0x000108c69b38();
  func_0x000108c69cec(&PTR_FUN_110abb880);
  *(undefined1 *)(lVar1 + 0xd8) = 0;
  func_0x000108c69b64();
  func_0x000108c69bac();
  func_0x000108c69b24();
  func_0x000108c69d64();
  func_0x000108c69d84();
  func_0x000108c69cac();
  func_0x000108c69c3c();
  func_0x000108c69db0();
  func_0x000108c69da8();
  puStack_110 = puVar3;
  lStack_108 = lVar2;
  func_0x000108c69c58();
  func_0x000108c69bc0();
  puStack_1e0 = puVar3;
  lStack_1d8 = lVar2;
  do {
    func_0x000108c69cb4();
  } while (extraout_w9 != 0);
  func_0x000108c69bf8();
  FUN_108c6fec4();
  func_0x000108c69464(&puStack_1e0);
  func_0x000108c69b9c();
  lVar2 = param_1[4];
  *unaff_x19 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108c69b80();
    } while (extraout_w10 != 0);
  }
  func_0x000108c69440(&puStack_110);
  func_0x000108c69bf0();
  FUN_108c6ddd8(&ppuStack_50);
  return;
}



/* Entry: 108c68684; end: 108c68807;  */

void FUN_108c68684(undefined8 *param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w9;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *puVar2;
  undefined8 *puStack_1d0;
  undefined8 *puStack_100;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined4 uStack_28;
  
  func_0x000108c69de4();
  func_0x000108c69d04();
  ppuStack_40 = &PTR_FUN_110abc520;
  uStack_38 = 0;
  puStack_30 = &DAT_11383d918;
  uStack_28 = 0;
  func_0x000108c69cd4();
  if (extraout_x8 != 0) {
    func_0x000108c69d10(&ppuStack_40);
  }
  func_0x000108c69da0();
  func_0x000108c69be8();
  func_0x000108c69bd4();
  *param_1 = &PTR_FUN_110abb8c0;
  puVar2 = param_1 + 3;
  *puVar2 = &PTR_DAT_110abb910;
  param_1[4] = 0;
  func_0x000108c69bac();
  func_0x000108c69b50();
  lVar1 = 0xe8;
  __Znwm();
  func_0x000108c69b38();
  func_0x000108c69cec(&PTR_FUN_110abb990);
  *(undefined1 *)(lVar1 + 0xe0) = 0;
  func_0x000108c69b64();
  func_0x000108c69bac();
  func_0x000108c69b24();
  func_0x000108c69d64();
  func_0x000108c69d84();
  func_0x000108c69cac();
  func_0x000108c69c3c();
  func_0x000108c69db0();
  func_0x000108c69da8();
  puStack_100 = puVar2;
  func_0x000108c69c58();
  func_0x000108c69bc0();
  puStack_1d0 = puVar2;
  do {
    func_0x000108c69cb4();
  } while (extraout_w9 != 0);
  func_0x000108c69bf8();
  FUN_108c6ffd4();
  func_0x000108c69704(&puStack_1d0);
  func_0x000108c69b9c();
  lVar1 = param_1[4];
  *unaff_x19 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000108c69b80();
    } while (extraout_w10 != 0);
  }
  func_0x000108c696e0(&puStack_100);
  func_0x000108c69bf0();
  FUN_108c6e40c(&ppuStack_40);
  return;
}



/* Entry: 108c68808; end: 108c68a9f;  */

void FUN_108c68808(void)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1c0;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined8 auStack_f0 [21];
  undefined1 auStack_48 [24];
  undefined1 uStack_30;
  undefined8 uStack_28;
  undefined **ppuStack_20;
  undefined8 uStack_18;
  undefined *puStack_10;
  undefined4 uStack_8;
  
  func_0x000108c69de4();
  func_0x000108c69d04();
  ppuStack_20 = &PTR_FUN_110abc570;
  uStack_18 = 0;
  puStack_10 = &DAT_11383d918;
  uStack_8 = 0;
  func_0x000108c69cd4();
  if (extraout_x8 != 0) {
    func_0x000108c69d10(&ppuStack_20);
  }
  uStack_28 = 0;
  pppuVar3 = &ppuStack_20;
  func_0x000107c2bfcc(pppuVar3,&uStack_28);
  if (((ulong)pppuVar3 & 1) == 0) {
    auStack_48[0] = 0;
    uStack_30 = 0;
    func_0x000107c27b7c(&uStack_1e0,auStack_48);
    uStack_1c0 = 2;
    FUN_108c69728(&lStack_f8);
    FUN_108c69780(auStack_f0[0],auStack_f0,&uStack_1e0);
    *unaff_x19 = lStack_f8;
    lStack_f8 = 0;
    func_0x000107c27fec(&lStack_f8);
    func_0x000107c279c4(&uStack_1e0);
    func_0x000107c279c4(auStack_48);
  }
  else {
    plVar4 = &lStack_f8;
    FUN_108c67eb0();
    func_0x000108c69be8();
    plVar7 = plVar4 + 1;
    *plVar7 = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_110abba10;
    plVar8 = plVar4 + 3;
    *plVar8 = (long)&PTR_DAT_110abba60;
    func_0x000108c69c60();
    plVar4[5] = 0;
    func_0x000108c69d8c();
    FUN_108c69728(&uStack_1e0);
    uStack_118 = uStack_1d8;
    uStack_120 = uStack_1e0;
    plStack_1f0 = (long *)0x0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_200 = 0;
    func_0x000108c69d98();
    func_0x000108c69bac();
    func_0x000107c27fec(&uStack_1e0);
    func_0x000108c69cac();
    func_0x000107c2887c(plVar4 + 5,(ulong)&uStack_120 | 8);
    func_0x000107c27f98((ulong)&uStack_120 | 8);
    func_0x000107c27f9c(&uStack_120);
    plStack_108 = plVar8;
    plStack_100 = plVar4;
    func_0x000108c69c58();
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c278b8(&uStack_120,"AtlasGw");
    func_0x000108c68ad4(&uStack_1e0,&lStack_f8);
    plStack_1f0 = plVar8;
    plStack_1e8 = plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_200 = 0;
    uStack_1f8 = 0;
    func_0x000107c280c0(uVar6,&UNK_10f50e3ca,&uStack_28,&uStack_120,&uStack_1e0,&plStack_1f0,
                        &uStack_200);
    func_0x000107c27c48(&uStack_200);
    func_0x000107c28120(&plStack_1f0);
    func_0x000107c27ba8(&uStack_1e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_120);
    lVar5 = *unaff_x21;
    *unaff_x19 = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x000108c69b80();
      } while (extraout_w10 != 0);
    }
    FUN_108c69a98(&plStack_108);
    func_0x000107c27bac(&lStack_f8);
  }
  func_0x000107c27c64(&uStack_28);
  FUN_108c6ed18(&ppuStack_20);
  return;
}



/* Entry: 108c68aa0; end: 108c68aa3;  */

undefined8 * FUN_108c68aa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb4c8;
  func_0x000108c68b3c(param_1 + 10);
  func_0x000107c278a4(param_1 + 8);
  func_0x000107c27bb4(param_1 + 6);
  func_0x000108c68b60(param_1 + 1);
  return param_1;
}



/* Entry: 108c68aa4; end: 108c68aef;  */

void FUN_108c68aa4(void)

{
  FUN_108c68af0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68af0; end: 108c68ba3;  */

undefined8 * FUN_108c68af0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb4c8;
  func_0x000108c68b3c(param_1 + 10);
  func_0x000107c278a4(param_1 + 8);
  func_0x000107c27bb4(param_1 + 6);
  func_0x000108c68b60(param_1 + 1);
  return param_1;
}



/* Entry: 108c68ba4; end: 108c68bff;  */

long FUN_108c68ba4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 108c68c00; end: 108c68cd7;  */

void FUN_108c68c00(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int extraout_w10;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = **(long **)*param_1;
  plVar1 = *(long **)(lVar4 + 0x20);
  if (plVar1 == (long *)0x0) {
    func_0x000104bfeb48();
    *plVar1 = (long)&PTR_FUN_110abb540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  (**(code **)(*plVar1 + 0x30))(&uStack_40);
  func_0x000107c2a874(lVar4 + 0x30,&uStack_40);
  puVar2 = &uStack_40;
  func_0x000107c27bb4();
  lVar3 = *(long *)(lVar4 + 0x38);
  uVar6 = *(undefined8 *)(lVar4 + 0x38);
  uVar5 = *(undefined8 *)(lVar4 + 0x30);
  func_0x000108c69be8();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110abb540;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  if (lVar3 != 0) {
    do {
      func_0x000108c69cc4();
    } while (extraout_w10 != 0);
  }
  FUN_108c6fc70(puVar2 + 3,&uStack_40);
  func_0x000107c27bb4(&uStack_40);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_38 = *(undefined8 *)(lVar4 + 0x58);
  uStack_40 = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 **)(lVar4 + 0x50) = puVar2 + 3;
  *(undefined8 **)(lVar4 + 0x58) = puVar2;
  func_0x000108c68b3c(&uStack_40);
  func_0x000108c68b3c(&uStack_50);
  return;
}



/* Entry: 108c68cd8; end: 108c68cdb;  */

void FUN_108c68cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c68cdc; end: 108c68cef;  */

void FUN_108c68cdc(void)

{
  func_0x000108c68cfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68cf0; end: 108c68d0b;  */

void FUN_108c68cf0(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 108c68d0c; end: 108c68d1f;  */

void FUN_108c68d0c(void)

{
  FUN_108c68f3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68d20; end: 108c68d2b;  */

void FUN_108c68d20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c69b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c68d2c; end: 108c68d3f;  */

void FUN_108c68d2c(void)

{
  func_0x000108c68e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68d40; end: 108c68dc7;  */

void FUN_108c68d40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined1 uStack_60;
  undefined1 auStack_58 [48];
  undefined4 uStack_28;
  
  auStack_88[0] = 0;
  uStack_60 = 0;
  uVar1 = *param_3;
  func_0x000108c69d58();
  uStack_28 = uVar1;
  func_0x000108c69d1c();
  FUN_108c5b16c(auStack_58);
  FUN_108c5b16c(auStack_88);
  return;
}



/* Entry: 108c68dc8; end: 108c68dcb;  */

undefined8 * FUN_108c68dc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb660;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    FUN_108c5b16c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c68dcc; end: 108c68ddf;  */

void FUN_108c68dcc(void)

{
  FUN_108c68de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68de0; end: 108c68e47;  */

undefined8 * FUN_108c68de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb660;
  if (*(char *)(param_1 + 0x1a) == '\x01') {
    FUN_108c5b16c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c68e48; end: 108c68eaf;  */

void FUN_108c68e48(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  uint uStack_38;
  
  func_0x000108c69c08();
  do {
    func_0x000108c69ad4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
        FUN_108c5b16c(unaff_x20 + 0x98);
        *(undefined1 *)(unaff_x20 + 0xd0) = 0;
      }
      func_0x000108c69cf8();
      FUN_108c68eb0();
      *(undefined4 *)(unaff_x20 + 200) = *(undefined4 *)(unaff_x21 + 0x30);
      *(undefined1 *)(unaff_x20 + 0xd0) = 1;
      func_0x000108c69abc();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108c68eb0; end: 108c68edf;  */

void FUN_108c68eb0(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_108c68ee0();
    param_1[0x28] = 1;
  }
  return;
}



/* Entry: 108c68ee0; end: 108c68f3b;  */

long FUN_108c68ee0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_x8;
  
  lVar1 = param_1;
  func_0x000108c69c18(&UNK_110abc7e0);
  if (lVar1 != param_2) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000108c69dc4();
      uVar2 = extraout_x8;
    }
    if (uVar2 == 0) {
      FUN_108c6d1ac(param_1);
    }
    else {
      func_0x000108c6d17c(param_1);
    }
  }
  return param_1;
}



/* Entry: 108c68f3c; end: 108c68f47;  */

void FUN_108c68f3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110abb590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c68f48; end: 108c68f8f;  */

void FUN_108c68f48(long param_1)

{
  func_0x000108c69bb4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c68f90; end: 108c68f93;  */

void FUN_108c68f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb6a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c68f94; end: 108c68fa7;  */

void FUN_108c68f94(void)

{
  FUN_108c691b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68fa8; end: 108c68fb3;  */

void FUN_108c68fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c69b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c68fb4; end: 108c68fc7;  */

void FUN_108c68fb4(void)

{
  func_0x000108c69094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c68fc8; end: 108c6903f;  */

void FUN_108c68fc8(void)

{
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [64];
  
  func_0x000108c69c90();
  FUN_108c69128();
  func_0x000108c69d40();
  FUN_108c51d60(auStack_60);
  FUN_108c51d60(auStack_98);
  return;
}



/* Entry: 108c69040; end: 108c69043;  */

undefined8 * FUN_108c69040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb770;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_108c51d60(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c69044; end: 108c69057;  */

void FUN_108c69044(void)

{
  FUN_108c69058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69058; end: 108c690bf;  */

undefined8 * FUN_108c69058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb770;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_108c51d60(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c690c0; end: 108c69127;  */

void FUN_108c690c0(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  uint uStack_38;
  
  func_0x000108c69c08();
  do {
    func_0x000108c69ad4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xd8) == '\x01') {
        FUN_108c51d60(unaff_x20 + 0x98);
        *(undefined1 *)(unaff_x20 + 0xd8) = 0;
      }
      func_0x000108c69cf8();
      FUN_108c69128();
      *(undefined4 *)(unaff_x20 + 0xd0) = *(undefined4 *)(unaff_x21 + 0x38);
      *(undefined1 *)(unaff_x20 + 0xd8) = 1;
      func_0x000108c69abc();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108c69128; end: 108c69157;  */

void FUN_108c69128(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_108c69158();
    param_1[0x30] = 1;
  }
  return;
}



/* Entry: 108c69158; end: 108c691b7;  */

long FUN_108c69158(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_x8;
  
  lVar1 = param_1;
  func_0x000108c69c18(&UNK_110abc830);
  *(undefined4 *)(lVar1 + 0x28) = 0;
  if (lVar1 != param_2) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000108c69dc4();
      uVar2 = extraout_x8;
    }
    if (uVar2 == 0) {
      FUN_108c6d700(param_1);
    }
    else {
      FUN_108c6d6d0(param_1);
    }
  }
  return param_1;
}



/* Entry: 108c691b8; end: 108c691c3;  */

void FUN_108c691b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb6a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c691c4; end: 108c6920b;  */

void FUN_108c691c4(long param_1)

{
  func_0x000108c69bb4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c6920c; end: 108c6920f;  */

void FUN_108c6920c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb7b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c69210; end: 108c69223;  */

void FUN_108c69210(void)

{
  FUN_108c69434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69224; end: 108c6922f;  */

void FUN_108c69224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c69b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c69230; end: 108c69243;  */

void FUN_108c69230(void)

{
  func_0x000108c69310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69244; end: 108c692bb;  */

void FUN_108c69244(void)

{
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [64];
  
  func_0x000108c69c90();
  FUN_108c693a4();
  func_0x000108c69d34();
  FUN_108c6158c(auStack_60);
  FUN_108c6158c(auStack_98);
  return;
}


