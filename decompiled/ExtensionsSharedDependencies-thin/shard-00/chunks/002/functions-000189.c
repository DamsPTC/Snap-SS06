/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0045bab0; end: 0045bacf;  */

void FUN_0045bab0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0045b924();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045bad0; end: 0045bad3;  */

void FUN_0045bad0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045bad4; end: 0045bc37;  */

void FUN_0045bad4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_0045a3bc();
  if ((**(byte **)(param_1 + 0x58) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 0x20));
    lVar2 = param_1 + 0x28;
    FUN_0045a3bc(lVar2);
    func_0x0045c20c();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x0045c0c8();
    func_0x0045c160();
    func_0x0045c1a0();
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    func_0x0045c238();
    func_0x0045c170();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x0045c0b8();
    func_0x0045c2d8();
    func_0x0045c130();
    func_0x0045c1ac();
    func_0x0045c268(*(undefined8 *)(*plVar1 + 0x20));
    func_0x0045c230();
    func_0x0045c170();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x0045c0b8();
    func_0x0045c290();
    func_0x0045c150();
    func_0x0045c194();
    func_0x0045c268(*(undefined8 *)(*plVar1 + 0x20));
    func_0x0045c228();
    func_0x0045c170();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x0045c0b8();
    func_0x0045c284();
    func_0x0045c140();
    func_0x0045c1b8();
    func_0x0045c268(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045c248();
    func_0x0045c170();
  }
  return;
}



/* Entry: 0045bc38; end: 0045bc9b;  */

void FUN_0045bc38(long param_1)

{
  param_1 = param_1 + 0x40;
  func_0x0045addc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045bc9c; end: 0045bcfb;  */

undefined8 * FUN_0045bc9c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 1,param_2 + 1);
  FUN_00459e8c(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 0045bcfc; end: 0045bd27;  */

long FUN_0045bcfc(long param_1)

{
  func_0x0045a054(param_1 + 0x88);
  FUN_0045b544(param_1 + 8);
  return param_1;
}



/* Entry: 0045bd28; end: 0045be83;  */

void FUN_0045bd28(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_0045a3bc();
  if ((**(byte **)(lVar2 + 0x98) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x28))(plVar1,lVar2 + 0x10,lVar2 + 0x28);
    FUN_0045a3bc(lVar2 + 0x68);
    func_0x0045c20c();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x0045c0c8();
    func_0x0045c160();
    func_0x0045c1a0();
    func_0x0045c1f8(*(undefined8 *)(*plVar1 + 0x18));
    func_0x0045c238();
    func_0x0045c170();
    func_0x0045c0b8();
    func_0x0045c2d8();
    func_0x0045c130();
    func_0x0045c1ac();
    func_0x0045c21c();
    func_0x0045c1e4();
    func_0x0045c230();
    func_0x0045c170();
    func_0x0045c0b8();
    func_0x0045c290();
    func_0x0045c150();
    func_0x0045c194();
    func_0x0045c21c();
    func_0x0045c1e4();
    func_0x0045c228();
    func_0x0045c170();
    plVar1 = *(long **)(lVar2 + 0x88);
    func_0x0045c0b8();
    func_0x0045c284();
    func_0x0045c140();
    func_0x0045c1b8();
    func_0x0045c1e4(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045c248();
    func_0x0045c170();
  }
  return;
}



/* Entry: 0045be84; end: 0045bea3;  */

void FUN_0045be84(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045bcfc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045bea4; end: 0045bea7;  */

void FUN_0045bea4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045bea8; end: 0045beeb;  */

void FUN_0045bea8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0045c270();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_00459f50(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 0045beec; end: 0045bf17;  */

long FUN_0045beec(long param_1)

{
  func_0x0045a054(param_1 + 0x80);
  FUN_0045b750(param_1 + 8);
  return param_1;
}



/* Entry: 0045bf18; end: 0045c077;  */

void FUN_0045bf18(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_0045a3bc();
  if ((**(byte **)(lVar2 + 0x90) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x10,*(undefined8 *)(lVar2 + 0x28),lVar2 + 0x30);
    FUN_0045a3bc(lVar2 + 0x60);
    func_0x0045c20c();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x0045c0c8();
    func_0x0045c160();
    func_0x0045c1a0();
    func_0x0045c1f8(*(undefined8 *)(*plVar1 + 0x18));
    func_0x0045c238();
    func_0x0045c170();
    func_0x0045c0b8();
    func_0x0045c2d8();
    func_0x0045c130();
    func_0x0045c1ac();
    func_0x0045c21c();
    func_0x0045c1e4();
    func_0x0045c230();
    func_0x0045c170();
    func_0x0045c0b8();
    func_0x0045c290();
    func_0x0045c150();
    func_0x0045c194();
    func_0x0045c21c();
    func_0x0045c1e4();
    func_0x0045c228();
    func_0x0045c170();
    plVar1 = *(long **)(lVar2 + 0x80);
    func_0x0045c0b8();
    func_0x0045c284();
    func_0x0045c140();
    func_0x0045c1b8();
    func_0x0045c1e4(*(undefined8 *)(*plVar1 + 0x28));
    func_0x0045c248();
    func_0x0045c170();
  }
  return;
}



/* Entry: 0045c078; end: 0045c097;  */

void FUN_0045c078(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045beec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045c098; end: 0045c2e3;  */

void FUN_0045c098(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045c2e4; end: 0045c4ff;  */

undefined8 * FUN_0045c2e4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar6;
  long lVar7;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [112];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  puVar4 = &uStack_150;
  puVar5 = &uStack_150;
  func_0x0045d504();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_148 = *(undefined8 *)(param_1 + 0x10);
  uStack_150 = *(undefined8 *)(param_1 + 8);
  uStack_68 = extraout_x8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10 != 0);
  }
  FUN_004591ac(auStack_140);
  lStack_c8 = param_3[1];
  uStack_d0 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10_00 != 0);
  }
  puVar2 = auStack_c0;
  FUN_0045c978(puVar2,param_4);
  FUN_0045cc3c();
  lVar6 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x70);
  pcStack_a0 = FUN_0045d2cc;
  ppuStack_98 = &PTR_FUN_009e5508;
  __Znwm(0xb0);
  func_0x0045d544();
  FUN_004591ac();
  param_3[0x11] = lStack_c8;
  param_3[0x10] = uStack_d0;
  if (lStack_c8 != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10_01 != 0);
  }
  FUN_0045c978(param_3 + 0x12,auStack_c0);
  puStack_90 = param_3;
  puStack_70 = puVar2;
  FUN_0045cc5c(lVar6 + 0x48,&pcStack_a0);
  func_0x0045d450(ppuStack_98);
  __ZNSt3__15mutex6unlockEv(lVar6 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)*puVar1;
    ppuStack_98 = (undefined **)puVar1[3];
    pcStack_a0 = (code *)puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x0045d3d8();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    FUN_0045d30c(&pcStack_a0);
  }
  FUN_0045c500();
  func_0x0045d46c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_0045d30c(&pcStack_a0);
    FUN_0045c500();
    func_0x0045d464();
    FUN_0045cb60((undefined1 *)((long)puVar5 + 0x90));
    func_0x0045b7b4((undefined1 *)((long)puVar5 + 0x80));
    FUN_00459e64((undefined1 *)((long)puVar5 + 0x10));
    if (*(long *)((long)puVar5 + 8) != 0) {
      func_0x0040ce94();
    }
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 0045c500; end: 0045c533;  */

long FUN_0045c500(long param_1)

{
  FUN_0045cb60(param_1 + 0x90);
  func_0x0045b7b4(param_1 + 0x80);
  FUN_00459e64(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045c534; end: 0045c737;  */

undefined8 *
FUN_0045c534(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar6;
  long lVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined4 uStack_118;
  undefined1 auStack_110 [112];
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar4 = &uStack_140;
  puVar5 = &uStack_140;
  func_0x0045d504();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_140 = *(undefined8 *)(param_1 + 8);
  uStack_58 = extraout_x8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130);
  uStack_118 = (undefined4)param_4;
  puVar2 = auStack_110;
  FUN_004591ac(puVar2,param_3);
  lStack_98 = param_5[1];
  uStack_a0 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10_00 != 0);
  }
  FUN_0045cc3c();
  lVar6 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x70);
  pcStack_90 = FUN_0045d334;
  ppuStack_88 = &PTR_FUN_009e5520;
  __Znwm(0xb0);
  func_0x0045d544();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_4,auStack_130);
  *(undefined4 *)(param_3 + 0x28) = uStack_118;
  FUN_004591ac(param_3 + 0x30,auStack_110);
  *(long *)(param_3 + 0xa8) = lStack_98;
  *(undefined8 *)(param_3 + 0xa0) = uStack_a0;
  if (lStack_98 != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10_01 != 0);
  }
  lStack_80 = param_3;
  puStack_60 = puVar2;
  FUN_0045cc5c(lVar6 + 0x48,&pcStack_90);
  func_0x0045d450(ppuStack_88);
  __ZNSt3__15mutex6unlockEv(lVar6 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)*puVar1;
    ppuStack_88 = (undefined **)puVar1[3];
    pcStack_90 = (code *)puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x0045d3d8();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x0045d4d4();
  }
  FUN_0045c738();
  func_0x0045d46c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045d4d4();
    FUN_0045c738();
    func_0x0045d464();
    func_0x0045b7b4((undefined1 *)((long)puVar5 + 0xa0));
    FUN_00459e64((undefined1 *)((long)puVar5 + 0x30));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)puVar5 + 0x10));
    if (*(long *)((long)puVar5 + 8) != 0) {
      func_0x0040ce94();
    }
    return (undefined8 *)(undefined1 *)puVar5;
  }
  return puVar4;
}



/* Entry: 0045c738; end: 0045c76b;  */

long FUN_0045c738(long param_1)

{
  func_0x0045b7b4(param_1 + 0xa0);
  FUN_00459e64(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045c76c; end: 0045c933;  */

undefined8 * FUN_0045c76c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  dword *pdVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [112];
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  dword *pdStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar5 = &uStack_130;
  puVar6 = &uStack_130;
  func_0x0045d504();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_128 = *(undefined8 *)(param_1 + 0x10);
  uStack_130 = *(undefined8 *)(param_1 + 8);
  uStack_58 = extraout_x8;
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10 != 0);
  }
  puVar2 = auStack_120;
  FUN_004591ac();
  lStack_a0 = param_4[1];
  uStack_a8 = *param_4;
  uStack_b0 = param_3;
  if (param_4[1] != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10_00 != 0);
  }
  FUN_0045cc3c();
  lVar7 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar7 + 8);
  lVar8 = *(long *)(lVar7 + 0x70);
  uStack_90 = 0x45d37c;
  ppuStack_88 = &PTR_FUN_009e5538;
  pdVar3 = &section_00000068.offset;
  __Znwm();
  *(undefined8 *)(pdVar3 + 2) = uStack_128;
  *(undefined8 *)pdVar3 = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  FUN_004591ac(pdVar3 + 4,auStack_120);
  pdVar3[0x20] = uStack_b0;
  *(long *)(pdVar3 + 0x24) = lStack_a0;
  *(undefined8 *)(pdVar3 + 0x22) = uStack_a8;
  if (lStack_a0 != 0) {
    do {
      func_0x0045d3d8();
    } while (extraout_w10_01 != 0);
  }
  pdStack_80 = pdVar3;
  puStack_60 = puVar2;
  FUN_0045cc5c(lVar7 + 0x48,&uStack_90);
  func_0x0045d4e4();
  __ZNSt3__15mutex6unlockEv(lVar7 + 8);
  if (lVar8 == 0) {
    plVar4 = (long *)*puVar1;
    ppuStack_88 = (undefined **)puVar1[3];
    uStack_90 = puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x0045d3d8();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar4 + 0x10))();
    func_0x0045d4d4();
  }
  FUN_0045c934();
  func_0x0045d46c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0045d4d4();
    FUN_0045c934();
    func_0x0045d464();
    func_0x0045b7b4((undefined1 *)((long)puVar6 + 0x88));
    FUN_00459e64((undefined1 *)((long)puVar6 + 0x10));
    if (*(long *)((long)puVar6 + 8) != 0) {
      func_0x0040ce94();
    }
    return (undefined8 *)(undefined1 *)puVar6;
  }
  return puVar5;
}



/* Entry: 0045c934; end: 0045c95f;  */

long FUN_0045c934(long param_1)

{
  func_0x0045b7b4(param_1 + 0x88);
  FUN_00459e64(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045c960; end: 0045c963;  */

undefined8 * FUN_0045c960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e54b8;
  func_0x0045cbec(param_1 + 3);
  func_0x0045d4dc();
  return param_1;
}



/* Entry: 0045c964; end: 0045c977;  */

void FUN_0045c964(void)

{
  func_0x0045cbb4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045c978; end: 0045c9cb;  */

undefined1 * FUN_0045c978(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_0045c9cc(param_1);
    param_1[0x18] = 1;
  }
  return param_1;
}



/* Entry: 0045c9cc; end: 0045ca03;  */

undefined8 * FUN_0045c9cc(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0045ca04(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  return param_1;
}



/* Entry: 0045ca04; end: 0045ca8b;  */

void FUN_0045ca04(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0045d4c8();
    FUN_0045ca8c();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  FUN_0045cb1c(&uStack_40);
  return;
}



/* Entry: 0045ca8c; end: 0045cac7;  */

void FUN_0045ca8c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_0045cadc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_0045cac8();
  FUN_0040d774("vector");
  FUN_0045cb00();
  return;
}



/* Entry: 0045cac8; end: 0045cadb;  */

void FUN_0045cac8(void)

{
  FUN_0040d774("vector");
  FUN_0045cb00();
  return;
}



/* Entry: 0045cadc; end: 0045caff;  */

void FUN_0045cadc(void)

{
  FUN_0045cb00();
  return;
}



/* Entry: 0045cb00; end: 0045cb1b;  */

long FUN_0045cb00(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(lVar1);
    return lVar1;
  }
  FUN_0040cee8();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_0045cb48(param_1);
  }
  return param_1;
}



/* Entry: 0045cb1c; end: 0045cb47;  */

long FUN_0045cb1c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_0045cb48(param_1);
  }
  return param_1;
}



/* Entry: 0045cb48; end: 0045cb5f;  */

void FUN_0045cb48(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045cb60; end: 0045cb7f;  */

void FUN_0045cb60(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0045cb80();
  }
  return;
}



/* Entry: 0045cb80; end: 0045cc3b;  */

undefined8 FUN_0045cb80(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_0045cb48(&uStack_28);
  return param_1;
}



/* Entry: 0045cc3c; end: 0045cc5b;  */

void FUN_0045cc3c(void)

{
  if (plRam0000000000b6c8b8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045cc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plRam0000000000b6c8b8 + 0x38))();
    return;
  }
  return;
}



/* Entry: 0045cc5c; end: 0045cccf;  */

void FUN_0045cc5c(long param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x0045d4c8();
  func_0x0045cca8();
  if (param_1 == 0) {
    FUN_0045ccd0();
  }
  FUN_0045ce40();
  FUN_0045d28c(param_2);
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 0045ccd0; end: 0045ce3f;  */

void FUN_0045ccd0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x49) {
    uVar6 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar4 = *plVar2;
    uVar5 = lVar4 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar4 == *param_1) {
        lVar1 = 1;
      }
      plStack_30 = plVar2;
      FUN_0045d1c0();
      lStack_48 = (long)plVar2 + uVar6;
      plStack_38 = plVar2 + lVar1;
      uVar3 = 0xff8;
      lStack_50 = (long)plVar2;
      lStack_40 = lStack_48;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x49;
      uStack_70 = uVar3;
      uStack_68 = uVar3;
      FUN_0045d054(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar4 = param_1[2];
      while (lVar1 = param_1[1], lVar4 != lVar1) {
        lVar4 = lVar4 + -8;
        FUN_0045d0e0(&lStack_50,lVar4);
      }
      lVar4 = *param_1;
      lVar8 = param_1[3];
      lVar7 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar4;
      lStack_48 = lVar1;
      lStack_40 = lVar7;
      plStack_38 = (long *)lVar8;
      FUN_0045d200(&uStack_68);
      FUN_0045d23c(&lStack_50);
      return;
    }
    lVar1 = 0xff8;
    if (lVar4 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      FUN_0045cf28(param_1,&lStack_50);
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    FUN_0045cfac(param_1,&lStack_50);
  }
  else {
    param_1[4] = param_1[4] - 0x49;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_0045cea4(param_1,&lStack_50);
  return;
}



/* Entry: 0045ce40; end: 0045cea3;  */

void FUN_0045ce40(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 0045cea4; end: 0045cf27;  */

void FUN_0045cea4(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0045d4c8();
  func_0x0045d534();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0045d434();
      if (!bVar2) {
        func_0x0045d4a8();
      }
      func_0x0045d524();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0045d4b4();
      func_0x0045d400(param_1 + (uVar3 >> 2) * 8);
      func_0x0045d4c0();
      func_0x0045d3c0();
    }
  }
  func_0x0045d514();
  return;
}



/* Entry: 0045cf28; end: 0045cfab;  */

void FUN_0045cf28(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0045d4c8();
  func_0x0045d534();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0045d434();
      if (!bVar2) {
        func_0x0045d4a8();
      }
      func_0x0045d524();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0045d4b4();
      func_0x0045d400(param_1 + (uVar3 >> 2) * 8);
      func_0x0045d4c0();
      func_0x0045d3c0();
    }
  }
  func_0x0045d514();
  return;
}



/* Entry: 0045cfac; end: 0045d053;  */

void FUN_0045cfac(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  long unaff_x22;
  
  func_0x0045d4c8();
  uVar5 = param_1[1];
  bVar1 = *param_1 <= uVar5;
  uVar2 = uVar5 == *param_1;
  if ((bool)uVar2) {
    lVar3 = unaff_x19;
    func_0x0045d534();
    if (bVar1) {
      lVar4 = (long)(extraout_x9 - uVar5) >> 2;
      if (extraout_x9 - uVar5 == 0) {
        lVar4 = 1;
      }
      FUN_0045d1c0();
      func_0x0045d400(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0045d4c0();
      func_0x0045d3c0();
      uVar5 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x0045d480();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar5 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar5 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar5 - 8);
  return;
}



/* Entry: 0045d054; end: 0045d0df;  */

void FUN_0045d054(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  func_0x0045d4c8();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x0045d434();
      if (!bVar2) {
        func_0x0045d4a8();
      }
      func_0x0045d524();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      uVar3 = unaff_x19[4];
      func_0x0045d4b4(uVar3);
      func_0x0045d400(uVar3 + (uVar4 >> 2) * 8);
      func_0x0045d4c0();
      func_0x0045d3c0();
    }
  }
  func_0x0045d514();
  return;
}



/* Entry: 0045d0e0; end: 0045d18b;  */

void FUN_0045d0e0(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0045d4c8();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0045d480();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      FUN_0045d1c0();
      func_0x0045d400(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0045d4c0();
      func_0x0045d3c0();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 0045d18c; end: 0045d1bf;  */

void FUN_0045d18c(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 0045d1c0; end: 0045d1e3;  */

void FUN_0045d1c0(void)

{
  FUN_0045d1e4();
  return;
}



/* Entry: 0045d1e4; end: 0045d1ff;  */

long FUN_0045d1e4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(lVar1);
    return lVar1;
  }
  FUN_0040cee8();
  FUN_0045d224();
  return param_1;
}



/* Entry: 0045d200; end: 0045d223;  */

undefined8 FUN_0045d200(undefined8 param_1)

{
  FUN_0045d224(param_1,0);
  return param_1;
}



/* Entry: 0045d224; end: 0045d23b;  */

void FUN_0045d224(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045d23c; end: 0045d267;  */

long * FUN_0045d23c(long *param_1)

{
  FUN_0045d268();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0045d268; end: 0045d28b;  */

void FUN_0045d268(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 0045d28c; end: 0045d2cb;  */

undefined8 * FUN_0045d28c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  (**(code **)(param_2[1] + 0x10))(param_1 + 1,param_2 + 1);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 0045d2cc; end: 0045d2e7;  */

void FUN_0045d2cc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0045d2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar1 + 2,puVar1 + 0x10,puVar1 + 0x12);
  return;
}



/* Entry: 0045d2e8; end: 0045d307;  */

void FUN_0045d2e8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045c500();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045d308; end: 0045d30b;  */

void FUN_0045d308(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045d30c; end: 0045d333;  */

long FUN_0045d30c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045d334; end: 0045d357;  */

void FUN_0045d334(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0045d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x18))
            ((long *)*puVar1,puVar1 + 2,puVar1 + 6,*(undefined4 *)(puVar1 + 5),puVar1 + 0x14);
  return;
}



/* Entry: 0045d358; end: 0045d377;  */

void FUN_0045d358(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045c738();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045d378; end: 0045d39b;  */

void FUN_0045d378(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045d39c; end: 0045d3bb;  */

void FUN_0045d39c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0045c934();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045d3bc; end: 0045d56b;  */

void FUN_0045d3bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 0045d56c; end: 0045dc33;  */

void FUN_0045d56c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  section *psVar4;
  qword *pqVar5;
  segment_command *psVar6;
  dword *pdVar7;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  ulong *extraout_x8_02;
  ulong *puVar8;
  long lVar9;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *extraout_x9_02;
  ulong *puVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  long lVar11;
  qword *pqVar12;
  char *pcVar13;
  qword *pqVar14;
  dword *pdVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  byte bStack_288;
  undefined1 uStack_287;
  byte bStack_286;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  qword *pqStack_250;
  segment_command *psStack_248;
  char *pcStack_240;
  section *psStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 auStack_208 [48];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  qword *pqStack_1a0;
  segment_command *psStack_198;
  dword *pdStack_190;
  qword *pqStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  char *pcStack_160;
  section *psStack_158;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  qword *pqStack_c0;
  segment_command *psStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  dword *pdStack_90;
  qword *pqStack_88;
  char *pcStack_80;
  section *psStack_78;
  
  FUN_00472ebc(auStack_148,param_3);
  psVar4 = &section_00000068;
  __Znwm();
  psVar4->sectname[8] = '\0';
  psVar4->sectname[9] = '\0';
  psVar4->sectname[10] = '\0';
  psVar4->sectname[0xb] = '\0';
  psVar4->sectname[0xc] = '\0';
  psVar4->sectname[0xd] = '\0';
  psVar4->sectname[0xe] = '\0';
  psVar4->sectname[0xf] = '\0';
  psVar4->segname[0] = '\0';
  psVar4->segname[1] = '\0';
  psVar4->segname[2] = '\0';
  psVar4->segname[3] = '\0';
  psVar4->segname[4] = '\0';
  psVar4->segname[5] = '\0';
  psVar4->segname[6] = '\0';
  psVar4->segname[7] = '\0';
  *(undefined ***)psVar4->sectname = &PTR_FUN_009e5560;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_138,param_2);
  FUN_00461080(psVar4->segname + 8,&uStack_138,auStack_148);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_138);
  pcStack_160 = psVar4->segname + 8;
  psStack_158 = psVar4;
  FUN_0064c66c(&uStack_170,param_7,0x17,1,0);
  FUN_0045dc34(&uStack_180,param_6);
  lVar11 = param_5[1];
  uVar17 = param_5[1];
  uVar16 = *param_5;
  pqVar5 = &segment_command_00000020.vmsize;
  __Znwm();
  pqVar14 = pqVar5 + 1;
  *pqVar14 = 0;
  pqVar5[2] = 0;
  *pqVar5 = (qword)&PTR_DAT_009e55b0;
  if (lVar11 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10 != 0);
  }
  uVar18 = uStack_180;
  lVar11 = lStack_178;
  if (lStack_178 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_00 != 0);
  }
  pdVar15 = (dword *)(pqVar5 + 3);
  *(undefined ***)pdVar15 = &PTR_FUN_009e54b8;
  uStack_138 = 0;
  lStack_130 = 0;
  pqVar5[5] = uVar17;
  pqVar5[4] = uVar16;
  pqVar5[7] = lVar11;
  pqVar5[6] = uVar18;
  uStack_2c8 = 0;
  lStack_2c0 = 0;
  func_0x0045cbec(&uStack_2c8);
  func_0x0045cc14(&uStack_138);
  psVar6 = &segment_command_00000020;
  pdStack_190 = pdVar15;
  pqStack_188 = pqVar5;
  __Znwm();
  pcVar13 = psVar6->segname;
  pcVar13[0] = '\0';
  pcVar13[1] = '\0';
  pcVar13[2] = '\0';
  pcVar13[3] = '\0';
  pcVar13[4] = '\0';
  pcVar13[5] = '\0';
  pcVar13[6] = '\0';
  pcVar13[7] = '\0';
  psVar6->segname[8] = '\0';
  psVar6->segname[9] = '\0';
  psVar6->segname[10] = '\0';
  psVar6->segname[0xb] = '\0';
  psVar6->segname[0xc] = '\0';
  psVar6->segname[0xd] = '\0';
  psVar6->segname[0xe] = '\0';
  psVar6->segname[0xf] = '\0';
  *(undefined ***)psVar6 = &PTR_FUN_009e5600;
  pqVar12 = &psVar6->vmaddr;
  *pqVar12 = (qword)&PTR_DAT_009e5650;
  uStack_138 = uStack_138 & 0xffffffffffffff00;
  pqStack_1a0 = pqVar12;
  psStack_198 = psVar6;
  func_0x0045dc54(&uStack_1b0,&uStack_138);
  FUN_00472f18(&uStack_1c0);
  FUN_00472f74(&uStack_1d0,param_3);
  FUN_004734c0(auStack_208,param_3);
  func_0x00472fbc(&uStack_220,uStack_1d8);
  psStack_238 = psStack_158;
  pcStack_240 = pcStack_160;
  if (psStack_158 != (section *)0x0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_01 != 0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
    if (bVar2) {
      *(long *)pcVar13 = *(long *)pcVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_258 = param_8[1];
  uStack_260 = *param_8;
  pqStack_250 = pqVar12;
  psStack_248 = psVar6;
  if (param_8[1] != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_02 != 0);
  }
  FUN_00475390(&uStack_230,&pcStack_240,&pqStack_250,&uStack_260,auStack_208);
  func_0x0045a054(&uStack_260);
  func_0x0045e760(&pqStack_250);
  func_0x0045dd5c(&pcStack_240);
  uStack_278 = param_8[1];
  uStack_280 = *param_8;
  if (param_8[1] != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_03 != 0);
  }
  uStack_138 = 0;
  lStack_130 = 0;
  FUN_0046fc50(&uStack_270,&uStack_280,&uStack_170,param_4,param_3,&uStack_138,&uStack_180,param_9);
  func_0x0045e7a8(&uStack_138);
  func_0x0045a054(&uStack_280);
  uStack_2c8 = uStack_1b0;
  lStack_2c0 = lStack_1a8;
  if (lStack_1a8 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_04 != 0);
  }
  lStack_2b0 = lStack_1b8;
  uStack_2b8 = uStack_1c0;
  if (lStack_1b8 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_05 != 0);
  }
  lStack_2a0 = lStack_1c8;
  uStack_2a8 = uStack_1d0;
  if (lStack_1c8 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_06 != 0);
  }
  lStack_290 = lStack_218;
  uStack_298 = uStack_220;
  if (lStack_218 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_07 != 0);
  }
  psVar4 = psStack_158;
  pcVar3 = pcStack_160;
  bStack_288 = *(byte *)(param_4 + 0x80);
  uStack_287 = *(undefined1 *)(param_4 + 0x78);
  if (bStack_288 == 0) {
    uStack_287 = 0;
  }
  bStack_286 = bStack_288 & *(byte *)(param_4 + 0x79);
  pdVar7 = &section_000000b8.offset;
  __Znwm();
  *(undefined8 *)(pdVar7 + 2) = 0;
  *(undefined8 *)(pdVar7 + 4) = 0;
  *(undefined ***)pdVar7 = &PTR_FUN_009e56a8;
  psStack_78 = psVar4;
  pcStack_80 = pcVar3;
  if (psVar4 != (section *)0x0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_08 != 0);
  }
  puVar10 = &uStack_2c8;
  puVar8 = &uStack_2c8;
  pdStack_90 = pdVar15;
  pqStack_88 = pqVar5;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pqVar14,0x10);
    if (bVar2) {
      *pqVar14 = *pqVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = lStack_168;
  uStack_b0 = uStack_170;
  if (lStack_168 != 0) {
    do {
      func_0x0045e924();
      puVar8 = extraout_x8;
      puVar10 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  pqStack_c0 = pqVar12;
  psStack_b8 = psVar6;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
    if (bVar2) {
      *(long *)pcVar13 = *(long *)pcVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_c8 = param_8[1];
  uStack_d0 = *param_8;
  if (param_8[1] != 0) {
    do {
      func_0x0045e924();
      puVar8 = extraout_x8_00;
      puVar10 = extraout_x9_00;
    } while (extraout_w12_00 != 0);
  }
  lStack_d8 = lStack_228;
  uStack_e0 = uStack_230;
  if (lStack_228 != 0) {
    do {
      func_0x0045e924();
      puVar8 = extraout_x8_01;
      puVar10 = extraout_x9_01;
    } while (extraout_w12_01 != 0);
  }
  lStack_e8 = lStack_268;
  uStack_f0 = uStack_270;
  if (lStack_268 != 0) {
    do {
      func_0x0045e924();
      puVar8 = extraout_x8_02;
      puVar10 = extraout_x9_02;
    } while (extraout_w12_02 != 0);
  }
  lVar9 = lStack_2a0;
  uVar17 = uStack_2a8;
  lVar11 = lStack_2b0;
  uVar16 = uStack_2b8;
  uStack_138 = uStack_1b0;
  lStack_130 = lStack_2c0;
  uStack_2c8 = 0;
  lStack_2c0 = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  lStack_120 = lVar11;
  uStack_128 = uVar16;
  lStack_110 = lVar9;
  uStack_118 = uVar17;
  puVar10[4] = 0;
  puVar10[5] = 0;
  lStack_100 = lStack_290;
  uStack_108 = uStack_298;
  puVar8[6] = 0;
  puVar8[7] = 0;
  uStack_f8 = (undefined2)puVar8[8];
  uStack_f6 = *(undefined1 *)((long)puVar8 + 0x42);
  FUN_0045f994(pdVar7 + 6,&pcStack_80,&pdStack_90,&uStack_a0,&uStack_b0,&pqStack_c0,&uStack_d0,
               &uStack_e0,&uStack_f0,&uStack_138);
  FUN_0045dc74(&uStack_138);
  func_0x0045e7cc(&uStack_f0);
  func_0x0045e784(&uStack_e0);
  func_0x0045a054(&uStack_d0);
  func_0x0045e760(&pqStack_c0);
  func_0x0045a078(&uStack_b0);
  FUN_0045e854(&uStack_a0);
  func_0x0045cc14(&pdStack_90);
  func_0x0045dd5c(&pcStack_80);
  lVar11 = lStack_168;
  uVar16 = uStack_170;
  uStack_170 = 0;
  lStack_168 = 0;
  lVar9 = param_8[1];
  uVar18 = param_8[1];
  uVar17 = *param_8;
  param_1[1] = lVar11;
  *param_1 = uVar16;
  param_1[3] = uVar18;
  param_1[2] = uVar17;
  if (lVar9 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10_09 != 0);
  }
  param_1[4] = pdVar7 + 6;
  param_1[5] = pdVar7;
  uStack_2d8 = 0;
  uStack_2d0 = 0;
  FUN_0045e884(&uStack_2d8);
  FUN_0045dc74(&uStack_2c8);
  func_0x0045e7cc(&uStack_270);
  func_0x0045e784(&uStack_230);
  func_0x0045e73c(&uStack_220);
  func_0x0045e73c(&uStack_1d0);
  func_0x0045dcac(&uStack_1c0);
  func_0x0045e718(&uStack_1b0);
  FUN_0045e5dc(&pqStack_1a0);
  FUN_0045e57c(&pdStack_190);
  func_0x0045cbec(&uStack_180);
  func_0x0045a078(&uStack_170);
  func_0x0045dd5c(&pcStack_160);
  func_0x0045dcac(auStack_148);
  return;
}



/* Entry: 0045dc34; end: 0045dc73;  */

void FUN_0045dc34(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0045dd80(&uStack_11,param_1);
  return;
}



/* Entry: 0045dc74; end: 0045dccf;  */

/* WARNING: Possible PIC construction at 0x0045dc88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0045dc8c) */

long FUN_0045dc74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  func_0x0045e910();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045dcd0; end: 0045dcd3;  */

void FUN_0045dcd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5560;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045dcd4; end: 0045dce7;  */

void FUN_0045dcd4(void)

{
  FUN_0045dd20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045dce8; end: 0045dd1f;  */

void FUN_0045dce8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    func_0x0045e958();
  }
  FUN_0045dd30(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1 + 0x18);
  return;
}



/* Entry: 0045dd20; end: 0045dd2f;  */

void FUN_0045dd20(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045dd30; end: 0045dd7f;  */

long * FUN_0045dd30(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0045e958();
  }
  return param_1;
}



/* Entry: 0045dd80; end: 0045ddeb;  */

long FUN_0045dd80(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0045e8f8();
  FUN_0045ddec(auStack_40,1);
  FUN_0045de44();
  func_0x0045e8e0();
  FUN_0045e540();
  func_0x0045e8cc(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  lVar1 = lStack_30;
  ___stack_chk_fail();
  FUN_0045e540(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_0045de14();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 0045ddec; end: 0045de13;  */

long FUN_0045ddec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045de14();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045de14; end: 0045de43;  */

undefined8 * FUN_0045de14(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e56f8;
  param_1[1] = 0;
  FUN_0045deac(param_1 + 3);
  return param_1;
}



/* Entry: 0045de44; end: 0045de87;  */

undefined8 * FUN_0045de44(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e56f8;
  param_1[1] = 0;
  FUN_0045deac(param_1 + 3);
  return param_1;
}



/* Entry: 0045de88; end: 0045de8b;  */

void FUN_0045de88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e56f8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045de8c; end: 0045de9f;  */

void FUN_0045de8c(void)

{
  FUN_0045e508();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045dea0; end: 0045deab;  */

undefined8 FUN_0045dea0(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  FUN_0045e4b0(param_1 + 0x28);
  func_0x0045e910();
  if (lVar1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 0045deac; end: 0045defb;  */

undefined8 * FUN_0045deac(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_0045e8a8();
    } while (extraout_w10 != 0);
  }
  FUN_0045defc(param_1 + 2);
  return param_1;
}



/* Entry: 0045defc; end: 0045df17;  */

void FUN_0045defc(void)

{
  undefined1 uStack_11;
  
  FUN_0045df18(&uStack_11);
  return;
}



/* Entry: 0045df18; end: 0045dfab;  */

undefined1 * FUN_0045df18(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0045e8f8();
  uVar3 = 1;
  FUN_0045dfac();
  *puStack_30 = &PTR_FUN_009e5748;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_009e5798;
  puStack_30[4] = 0x32aaaba7;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x11] = 0;
  func_0x0045e8e0();
  FUN_0045e4d4();
  func_0x0045e8cc(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_0045dfd4();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 0045dfac; end: 0045dfd3;  */

long FUN_0045dfac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045dfd4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045dfd4; end: 0045e003;  */

void FUN_0045dfd4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x90);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e5748;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e004; end: 0045e007;  */

void FUN_0045e004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5748;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e008; end: 0045e01b;  */

void FUN_0045e008(void)

{
  FUN_0045e4a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045e01c; end: 0045e027;  */

void FUN_0045e01c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045e028; end: 0045e03b;  */

void FUN_0045e028(void)

{
  FUN_0045e160();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045e03c; end: 0045e15f;  */

undefined8 * FUN_0045e03c(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 auStack_a8 [3];
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  do {
    pcStack_90 = FUN_0045e36c;
    ppuStack_88 = &PTR_FUN_009e3508;
    uStack_60 = 0;
    puVar1 = (undefined8 *)(param_1 + 8);
    __ZNSt3__15mutex4lockEv();
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 == 0) {
      func_0x0045e950();
    }
    else {
      FUN_0045e340(&pcStack_90,
                   *(long *)(*(long *)(param_1 + 0x50) + (*(ulong *)(param_1 + 0x68) / 0x49) * 8) +
                   (*(ulong *)(param_1 + 0x68) % 0x49) * 0x38);
      func_0x0045e3e0(param_1 + 0x48);
      func_0x0045e950();
      FUN_006ad088(auStack_a8,"shims.Dispatcher",0x10,uStack_60);
      (*pcStack_90)(&pcStack_90);
      puVar1 = auStack_a8;
      FUN_006ad0cc();
    }
    func_0x0045e940();
  } while (lVar2 != 0);
  func_0x0045e8cc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar1 = auStack_a8;
    FUN_006ad0cc();
    func_0x0045e940();
    func_0x0045e964();
    *puVar1 = &PTR_DAT_009e5798;
    FUN_0045e1a0(puVar1 + 9);
    __ZNSt3__15mutexD1Ev(puVar1 + 1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 0045e160; end: 0045e19f;  */

undefined8 * FUN_0045e160(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009e5798;
  FUN_0045e1a0(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 0045e1a0; end: 0045e1e3;  */

long * FUN_0045e1a0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_0045e1e4();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_0045e31c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0045e1e4; end: 0045e2b3;  */

void FUN_0045e1e4(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  FUN_0045e2b4();
  lVar3 = param_2;
  FUN_0045ce40(param_1);
  do {
    lVar5 = param_2 + -0xff8;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x24;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x49;
        }
        param_1[4] = lVar3;
        return;
      }
      (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
      lVar5 = lVar5 + 0x38;
      param_2 = param_2 + 0x38;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 0045e2b4; end: 0045e2ef;  */

void FUN_0045e2b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 0045e2f0; end: 0045e31b;  */

long * FUN_0045e2f0(long *param_1)

{
  FUN_0045e31c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0045e31c; end: 0045e33f;  */

void FUN_0045e31c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 0045e340; end: 0045e36b;  */

long FUN_0045e340(long param_1,long param_2)

{
  FUN_0045e378();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return param_1;
}



/* Entry: 0045e36c; end: 0045e377;  */

undefined8 * FUN_0045e36c(undefined8 *param_1,undefined8 *param_2)

{
  func_0x00427780();
  *param_1 = *param_2;
  func_0x0045e3a0(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 0045e378; end: 0045e49f;  */

undefined8 * FUN_0045e378(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x0045e3a0(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 0045e4a0; end: 0045e4af;  */

void FUN_0045e4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5748;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e4b0; end: 0045e4d3;  */

void FUN_0045e4b0(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e4d4; end: 0045e4e3;  */

void FUN_0045e4d4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045e4e4; end: 0045e507;  */

void FUN_0045e4e4(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e508; end: 0045e517;  */

void FUN_0045e508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e56f8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e518; end: 0045e53f;  */

undefined8 FUN_0045e518(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_0045e4b0(param_1 + 0x10);
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 0045e540; end: 0045e553;  */

void FUN_0045e540(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}


