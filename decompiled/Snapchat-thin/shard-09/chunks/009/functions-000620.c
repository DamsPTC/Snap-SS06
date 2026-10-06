/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107319f34; end: 107319f5b;  */

void FUN_107319f34(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0708);
  func_0x00010731c874();
  return;
}



/* Entry: 107319f5c; end: 107319f67;  */

undefined ** FUN_107319f5c(void)

{
  return &PTR_DAT_1109a0708;
}



/* Entry: 107319f68; end: 107319faf;  */

undefined8 FUN_107319f68(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_FUN_1109a06a8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  return param_1;
}



/* Entry: 107319fb0; end: 107319fff;  */

void FUN_107319fb0(long param_1,long *param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != param_4) && (plVar1 = (long *)param_4[1], param_2 != plVar1)) {
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = (long)param_4;
    param_4[1] = (long)param_2;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + -1;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  return;
}



/* Entry: 10731a000; end: 10731a013;  */

void FUN_10731a000(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731a014; end: 10731a017;  */

undefined8 * FUN_10731a014(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 10731a018; end: 10731a02b;  */

void FUN_10731a018(void)

{
  func_0x00010054c360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731a02c; end: 10731a02f;  */

void FUN_10731a02c(void)

{
  return;
}



/* Entry: 10731a030; end: 10731a053;  */

void FUN_10731a030(void)

{
  func_0x00010731d174();
  func_0x00010054cac4();
  return;
}



/* Entry: 10731a054; end: 10731a077;  */

void FUN_10731a054(void)

{
  func_0x00010731d174();
  func_0x00010054cac4();
  return;
}



/* Entry: 10731a078; end: 10731a09b;  */

void FUN_10731a078(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010731d0ec();
  *param_1 = extraout_x8;
  FUN_107316798(param_1 + 1);
  return;
}



/* Entry: 10731a09c; end: 10731a0af;  */

void FUN_10731a09c(void)

{
  FUN_10731a078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731a0b0; end: 10731a0d3;  */

undefined8 FUN_10731a0b0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined8 in_register_00005008;
  
  func_0x00010731cdec();
  func_0x00010731d0ec();
  func_0x00010731c8b4();
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_1072d4a48();
  return unaff_x19;
}



/* Entry: 10731a0d4; end: 10731a0f7;  */

void FUN_10731a0d4(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  func_0x00010731d0ec(param_3,param_2 + 8);
  func_0x00010731c8b4();
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_1072d4a48();
  return;
}



/* Entry: 10731a0f8; end: 10731a203;  */

void FUN_10731a0f8(long param_1)

{
  undefined8 **extraout_x8;
  long extraout_x9;
  undefined8 extraout_x10;
  undefined8 **extraout_x11;
  undefined8 ***extraout_x12;
  long unaff_x20;
  undefined8 ***pppuVar1;
  undefined1 auStack_80 [24];
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  func_0x00010054c994();
  lStack_50 = *(long *)(param_1 + 8) + 0xa0;
  uStack_48 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  ppuStack_68 = &ppuStack_68;
  uStack_58 = 0;
  ppuStack_60 = ppuStack_68;
  if (*(long *)(*(long *)(unaff_x20 + 8) + 0xf0) != 0) {
    func_0x00010731d37c();
    ppuStack_68[1] = extraout_x11;
    *extraout_x11 = ppuStack_68;
    extraout_x12[1] = extraout_x8;
    *(undefined8 *)(extraout_x9 + 0xf0) = 0;
    ppuStack_68 = extraout_x12;
    uStack_58 = extraout_x10;
  }
  func_0x00010731a274(&lStack_50);
  for (pppuVar1 = (undefined8 ***)ppuStack_60; pppuVar1 != &ppuStack_68;
      pppuVar1 = (undefined8 ***)pppuVar1[1]) {
    FUN_10724ef84(auStack_80,pppuVar1 + 2);
    func_0x00010731d23c();
    func_0x00010731cb14();
  }
  func_0x000107317678(&ppuStack_68);
  func_0x0001003acd24(&lStack_50);
  return;
}



/* Entry: 10731a204; end: 10731a22b;  */

void FUN_10731a204(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0850);
  func_0x00010731c874();
  return;
}



/* Entry: 10731a22c; end: 10731a237;  */

undefined ** FUN_10731a22c(void)

{
  return &PTR_DAT_1109a0850;
}



/* Entry: 10731a238; end: 10731a2db;  */

void FUN_10731a238(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  func_0x00010731d0ec();
  func_0x00010731c8b4();
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_1072d4a48();
  return;
}



/* Entry: 10731a2dc; end: 10731a2ef;  */

void FUN_10731a2dc(void)

{
  func_0x00010731a2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731a2f0; end: 10731a317;  */

long FUN_10731a2f0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  lVar1 = 0x68;
  __Znwm();
  func_0x00010731cb28();
  func_0x00010731c8b4(&PTR_SUB_1109a0870);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  FUN_1072d4a48(unaff_x19 + 0x18,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x58);
  return unaff_x19;
}



/* Entry: 10731a318; end: 10731a33b;  */

void FUN_10731a318(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010731cb28(param_3,param_2 + 8);
  func_0x00010731c8b4(&PTR_SUB_1109a0870);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  FUN_1072d4a48(unaff_x19 + 0x18,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10731a33c; end: 10731a39b;  */

void FUN_10731a33c(long param_1)

{
  undefined1 auStack_48 [24];
  
  FUN_10724ef84(auStack_48,param_1 + 0x18);
  func_0x00010731d23c();
  func_0x00010731c9bc();
  return;
}



/* Entry: 10731a39c; end: 10731a3c3;  */

void FUN_10731a39c(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a08d0);
  func_0x00010731c874();
  return;
}



/* Entry: 10731a3c4; end: 10731a3cf;  */

undefined ** FUN_10731a3c4(void)

{
  return &PTR_DAT_1109a08d0;
}



/* Entry: 10731a3d0; end: 10731a453;  */

void FUN_10731a3d0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010731cb28();
  func_0x00010731c8b4(&PTR_SUB_1109a0870);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  FUN_1072d4a48(unaff_x19 + 0x18,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10731a454; end: 10731a7b3;  */

void FUN_10731a454(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 in_x4;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_228 [120];
  undefined1 auStack_1b0 [160];
  undefined8 uStack_110;
  long lStack_108;
  long alStack_a0 [14];
  undefined1 auStack_30 [24];
  long lStack_18;
  byte bStack_10;
  undefined8 uStack_8;
  
  func_0x00010731d120();
  func_0x00010731d3a4();
  func_0x00010054bdbc();
  func_0x00010731cc48();
  func_0x00010bccbc98(alStack_a0);
  uStack_110 = *(undefined8 *)(alStack_a0[0] + 8);
  lStack_108 = *(long *)(alStack_a0[0] + 0x10);
  if (lStack_108 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  if (*(long **)(unaff_x23 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x23 + 0x18) + 0x30))(auStack_1b0);
    func_0x00010731d018();
    func_0x00010bccbe4c(alStack_a0);
    func_0x00010731cf4c();
    func_0x00010731ccac();
    func_0x00010731cc8c();
    if (!(bool)in_ZR) {
      do {
        func_0x00010731d05c();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010731cca0();
    lVar1 = *(long *)(param_1 + 0x10);
    puVar3 = auStack_30;
    FUN_10731a7b4(puVar3,in_x4);
    if (lVar1 != 0) {
      func_0x00010731cac8();
      func_0x00010731cf5c();
      func_0x00010731ce08();
      func_0x00010731c978();
      FUN_10726e6c0(alStack_a0,puVar3);
      func_0x00010731cf3c();
      func_0x00010731d010();
      if ((bStack_10 & 1) != 0) {
        if (lStack_18 == 0) {
          func_0x000104bfeb48();
          goto LAB_10731a5bc;
        }
        func_0x00010731cf30();
        func_0x00010731d20c();
      }
      func_0x00010731cec4();
      func_0x00010731cc30();
      func_0x00010731cf44();
    }
    FUN_107318480(auStack_30);
    func_0x00010731d390();
    if ((bool)in_ZR) {
      FUN_10731a80c(auStack_228,auStack_1b0);
    }
    if (*(long *)(unaff_x22 + 0x18) == 0) {
      func_0x000104bfeb48();
      goto LAB_10731a5bc;
    }
    func_0x00010731cf30();
    (*extraout_x8)();
    FUN_10731a85c(auStack_228);
    func_0x00010731d2bc();
    func_0x00010054c318(uStack_8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bfeb48();
LAB_10731a5bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10731a5c0);
  (*pcVar2)();
}



/* Entry: 10731a7b4; end: 10731a80b;  */

void FUN_10731a7b4(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  code *extraout_x8;
  long unaff_x19;
  
  func_0x00010731c890();
  if (!(bool)in_ZR) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if (lVar1 == param_2) {
      func_0x00010731c7fc();
      func_0x00010731c9e0();
      goto LAB_10731a7f0;
    }
    func_0x00010731ca9c();
    (*extraout_x8)();
  }
  *(long *)(unaff_x19 + 0x18) = lVar1;
LAB_10731a7f0:
  func_0x00010731d030();
  return;
}



/* Entry: 10731a80c; end: 10731a827;  */

void FUN_10731a80c(long param_1)

{
  FUN_10731a828();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10731a828; end: 10731a85b;  */

void FUN_10731a828(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731cb28();
  func_0x00010731d368();
  if ((bool)in_ZR) {
    func_0x00010731cda4();
  }
  func_0x00010731cb54();
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  return;
}



/* Entry: 10731a85c; end: 10731a87b;  */

void FUN_10731a85c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10731a87c();
  }
  return;
}



/* Entry: 10731a87c; end: 10731a89b;  */

void FUN_10731a87c(void)

{
  long unaff_x19;
  
  func_0x00010731d2ec();
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10731a89c; end: 10731a95f;  */

void FUN_10731a89c(long param_1)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010731c940();
  FUN_10731a7b4();
  func_0x00010731cbec();
  if (param_1 == 0) {
LAB_10731a8d0:
    *(long *)(unaff_x19 + 0x60) = param_1;
  }
  else {
    if (param_1 != unaff_x21 + 0x48) {
      func_0x00010731ca9c();
      (*extraout_x8)();
      goto LAB_10731a8d0;
    }
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x20;
    func_0x00010731c9e8(*(undefined8 *)(unaff_x21 + 0x60));
    func_0x00010731d204();
  }
  lVar1 = *(long *)(unaff_x21 + 0x80);
  if (lVar1 != 0) {
    if (lVar1 == unaff_x21 + 0x68) {
      *(long *)(unaff_x19 + 0x80) = unaff_x19 + 0x68;
      func_0x00010731c9e8(*(undefined8 *)(unaff_x21 + 0x80));
      func_0x00010731d1b4();
      goto LAB_10731a920;
    }
    func_0x00010731ca9c();
    (*extraout_x8_00)();
  }
  *(long *)(unaff_x19 + 0x80) = lVar1;
LAB_10731a920:
  func_0x00010731cbc4();
  return;
}



/* Entry: 10731a960; end: 10731a9af;  */

void FUN_10731a960(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010731c890();
  if ((bool)in_ZR) {
    if (*(long *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
    }
    else if (*(long *)(param_2 + 0x18) == param_2) {
      func_0x00010731c7fc();
      func_0x00010731c9e0();
    }
    else {
      func_0x00010731cbb0();
    }
    func_0x00010731d030();
  }
  return;
}



/* Entry: 10731a9b0; end: 10731a9f3;  */

void FUN_10731a9b0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010731ceb8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010731c7fc();
    func_0x00010731c9e0();
  }
  else {
    func_0x00010731cbb0();
  }
  return;
}



/* Entry: 10731a9f4; end: 10731aa37;  */

void FUN_10731a9f4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010731ceb8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010731c7fc();
    func_0x00010731c9e0();
  }
  else {
    func_0x00010731cbb0();
  }
  return;
}



/* Entry: 10731aa38; end: 10731aa3b;  */

undefined8 * FUN_10731aa38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a08f0;
  FUN_10731abc0(param_1 + 1);
  return param_1;
}



/* Entry: 10731aa3c; end: 10731aa4f;  */

void FUN_10731aa3c(void)

{
  FUN_10731ab54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731aa50; end: 10731aa83;  */

undefined8 FUN_10731aa50(undefined8 param_1)

{
  func_0x00010731ccd4();
  FUN_10731ab80();
  return param_1;
}



/* Entry: 10731aa84; end: 10731aaa7;  */

void FUN_10731aa84(long param_1,undefined8 param_2)

{
  func_0x00010731cb28(param_2,param_1 + 8);
  func_0x00010731ca0c(&PTR_FUN_1109a08f0);
  FUN_10731a89c();
  return;
}



/* Entry: 10731aaa8; end: 10731ab1f;  */

void FUN_10731aaa8(int param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  func_0x00010731ca7c();
  func_0x00010731d320();
  if (param_1 != 0) {
    func_0x00010731a420(auStack_28,*(undefined8 *)(unaff_x19 + 0x60));
    func_0x00010731ca58();
    if (unaff_x20 == 0) {
      func_0x00010731caa8();
      FUN_10731a454();
    }
    else if (*(char *)(unaff_x19 + 200) == '\x01') {
      func_0x00010731d30c();
      func_0x00010731d304();
    }
    func_0x00010731cd30();
  }
  func_0x00010731cc08();
  return;
}



/* Entry: 10731ab20; end: 10731ab47;  */

void FUN_10731ab20(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0950);
  func_0x00010731c874();
  return;
}



/* Entry: 10731ab48; end: 10731ab53;  */

undefined ** FUN_10731ab48(void)

{
  return &PTR_DAT_1109a0950;
}



/* Entry: 10731ab54; end: 10731ab7f;  */

undefined8 * FUN_10731ab54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a08f0;
  FUN_10731abc0(param_1 + 1);
  return param_1;
}



/* Entry: 10731ab80; end: 10731abbf;  */

void FUN_10731ab80(void)

{
  func_0x00010731cb28();
  func_0x00010731ca0c(&PTR_FUN_1109a08f0);
  FUN_10731a89c();
  return;
}



/* Entry: 10731abc0; end: 10731ac43;  */

undefined8 FUN_10731abc0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010731abe4(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10731ac44; end: 10731ac57;  */

void FUN_10731ac44(void)

{
  func_0x00010731ac18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731ac58; end: 10731ac7b;  */

long FUN_10731ac58(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  func_0x00010731cdec();
  lVar1 = param_2;
  func_0x00010731c8b4(&PTR_SUB_1109a0970);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_1072d4a48();
  return param_2;
}



/* Entry: 10731ac7c; end: 10731ac9f;  */

long FUN_10731ac7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_3;
  func_0x00010731c8b4(&PTR_SUB_1109a0970,param_3,param_2 + 8);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_1072d4a48();
  return param_3;
}



/* Entry: 10731aca0; end: 10731ae0f;  */

void FUN_10731aca0(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [8];
  long lStack_1d0;
  undefined1 auStack_1c8 [112];
  char cStack_158;
  undefined1 auStack_150 [136];
  long lStack_c8;
  undefined1 auStack_c0 [112];
  byte bStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  FUN_10724ef84(auStack_1f0,param_2 + 0x18);
  func_0x0001073a6934(auStack_1d8,uVar2,auStack_1f0,*(undefined1 *)(param_2 + 0x50),
                      (long)*(int *)(param_2 + 0x54),(long)*(int *)(param_2 + 0x58),
                      (long)*(char *)(param_2 + 0x5c));
  lStack_c8 = 0;
  auStack_c0[0] = 0;
  bStack_50 = 0;
  if (cStack_158 != '\0') {
    FUN_10731a80c(auStack_c0,auStack_1c8);
    FUN_10731ae88(auStack_1c8);
  }
  lStack_c8 = lStack_1d0;
  func_0x00010731cf04(bStack_50);
  if ((extraout_x8 & 1) == 0) {
    func_0x00010731d334();
  }
  else {
    func_0x00010731d334();
    if (lStack_1d0 != 0) {
      if ((bStack_50 & 1) == 0) {
        func_0x00010731d2a4(auStack_48);
        func_0x0001004c3cd0(auStack_150,&UNK_10f40a221,auStack_48);
        func_0x00010731cc5c();
        func_0x00010731cbbc();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      }
      FUN_10731a828(param_1,auStack_c0);
      uVar1 = 1;
      goto LAB_10731ada0;
    }
  }
  uVar1 = 0;
  *param_1 = 0;
LAB_10731ada0:
  param_1[0x70] = uVar1;
  FUN_10731a85c(auStack_c0);
  FUN_10731aed8(auStack_1d8);
  func_0x00010731cb14();
  return;
}



/* Entry: 10731ae10; end: 10731ae37;  */

void FUN_10731ae10(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a09e0);
  func_0x00010731c874();
  return;
}



/* Entry: 10731ae38; end: 10731ae43;  */

undefined ** FUN_10731ae38(void)

{
  return &PTR_DAT_1109a09e0;
}



/* Entry: 10731ae44; end: 10731ae87;  */

long FUN_10731ae44(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x00010731c8b4(&PTR_SUB_1109a0970);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  FUN_1072d4a48();
  return param_2;
}



/* Entry: 10731ae88; end: 10731aeab;  */

void FUN_10731ae88(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10731a87c();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 10731aeac; end: 10731aed7;  */

void FUN_10731aeac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054c994();
  func_0x0001002a8208();
  func_0x00010731cb78();
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  return;
}



/* Entry: 10731aed8; end: 10731af23;  */

void FUN_10731aed8(void)

{
  undefined8 uVar1;
  int extraout_w8;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010731cd64();
  if (extraout_w8 != 0) {
    FUN_10731ae88(unaff_x19 + 2);
  }
  FUN_10731a85c(unaff_x20 | 8);
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x00010054cac4(uVar1);
  FUN_10731a85c(unaff_x19 + 2);
  return;
}



/* Entry: 10731af24; end: 10731af83;  */

void FUN_10731af24(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010731c960();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010731c8d0(uVar1);
  return;
}



/* Entry: 10731af84; end: 10731af97;  */

void FUN_10731af84(void)

{
  func_0x00010731af58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731af98; end: 10731afcf;  */

undefined8 FUN_10731af98(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x80;
  __Znwm(0x80);
  FUN_10731b328();
  return uVar1;
}



/* Entry: 10731afd0; end: 10731aff3;  */

void FUN_10731afd0(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010731cb28(param_3,param_2 + 8);
  func_0x00010731c8b4(&PTR_SUB_1109a0a00);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x000107319cc4(unaff_x19 + 0x18,unaff_x20 + 0x10);
  FUN_1072d4a48(unaff_x19 + 0x38,unaff_x20 + 0x30);
  return;
}



/* Entry: 10731aff4; end: 10731b2f3;  */

void FUN_10731aff4(long param_1,long param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x22;
  undefined1 auStack_250 [16];
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined2 uStack_238;
  undefined1 uStack_236;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_208;
  undefined1 auStack_200 [24];
  undefined1 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1dc;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [136];
  undefined1 uStack_148;
  long alStack_140 [2];
  undefined1 auStack_130 [56];
  long *plStack_f8;
  long *plStack_e8;
  long lStack_c0;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010054bdbc();
  uStack_48 = extraout_x8;
  if ((*(byte *)(param_2 + 0x70) & 1) == 0) {
    auStack_1d0[0] = 0;
    uStack_148 = 0;
    func_0x00010731d1d0();
    func_0x00010731d000();
  }
  else {
    auStack_250[0] = 2;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    auStack_200[0] = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    uStack_240 = 0;
    uStack_239 = 0;
    uStack_238 = 0;
    uStack_236 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = uStack_220 & 0xffffffffffffff00;
    func_0x0001002a969c(auStack_200);
    func_0x00010731ce78();
    uStack_218 = *(undefined1 *)(param_2 + 0x40);
    lVar4 = param_2 + 0x48;
    FUN_1073166b8(lVar4,*(long *)(param_2 + 0x68) != 0,auStack_250);
    func_0x0001075281c8(alStack_140,auStack_250);
    lStack_c0 = lVar4;
    FUN_10731b38c(auStack_1d0,alStack_140);
    func_0x00010731d1d0();
    func_0x00010731d000();
    plVar2 = alStack_140;
    func_0x00010724b340();
    unaff_x22 = *(long **)(param_1 + 8);
    func_0x00010789a00c();
    in_ZR = *(char *)((long)unaff_x22 + 0x53) == '\x01';
    if ((bool)in_ZR) {
      __ZNSt3__115recursive_mutex4lockEv(unaff_x22 + 0x14);
      plVar3 = alStack_140;
      func_0x00010731d29c();
      plStack_f8 = plVar2;
      func_0x00010731cdec();
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_10724afb0(plVar3 + 2,alStack_140);
      plVar3[0xb] = (long)plStack_f8;
      plVar2 = unaff_x22 + 0x1c;
      lVar4 = *plVar2;
      *plVar3 = lVar4;
      plVar3[1] = (long)plVar2;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar2 = (long)plVar3;
      unaff_x22[0x1e] = unaff_x22[0x1e] + 1;
      func_0x000104c2f714(alStack_140);
      in_ZR = unaff_x22[0x1e] == 1;
      if ((bool)in_ZR) {
        func_0x00010731874c(alStack_140,unaff_x22[4],unaff_x22[5]);
        func_0x00010731d29c(auStack_130);
        uStack_50 = 0;
        func_0x00010731cdec();
        func_0x00010731d0ec();
        func_0x00010731d15c();
        FUN_1072d4a48();
        func_0x00010731ce58();
        func_0x00010731ce38();
        (*extraout_x8_00)();
        func_0x00010731cf94();
        func_0x00010731cfac();
        func_0x00010731cccc();
        FUN_107316798(alStack_140);
      }
      __ZNSt3__115recursive_mutex6unlockEv(unaff_x22 + 0x14);
    }
    else {
      plVar3 = unaff_x22 + 4;
      plVar1 = unaff_x22 + 5;
      unaff_x22 = alStack_140;
      func_0x00010731874c(alStack_140,*plVar3,*plVar1);
      func_0x00010731d29c(auStack_130);
      uStack_50 = 0;
      lVar4 = 0x68;
      plStack_e8 = plVar2;
      __Znwm();
      func_0x00010731d15c(&PTR_SUB_1109a0870);
      FUN_1072d4a48();
      *(long **)(lVar4 + 0x60) = plStack_e8;
      func_0x00010731ce58();
      func_0x00010731ce38();
      (*extraout_x8_01)();
      func_0x00010731cf94();
      func_0x00010731cfac();
      func_0x00010731cccc();
      func_0x0001073167b8(alStack_140);
    }
    func_0x00010724b340();
  }
  func_0x00010054c318(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010731cf94();
  func_0x00010731cfac();
  func_0x00010731cccc();
  FUN_107316798(alStack_140);
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x22 + 0x14);
  func_0x00010724b340(auStack_250);
  func_0x00010731c938();
  func_0x00010731c9b0();
  func_0x00010731c970();
  func_0x00010731c874();
  return;
}



/* Entry: 10731b2f4; end: 10731b31b;  */

void FUN_10731b2f4(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0a70);
  func_0x00010731c874();
  return;
}



/* Entry: 10731b31c; end: 10731b327;  */

undefined ** FUN_10731b31c(void)

{
  return &PTR_DAT_1109a0a70;
}



/* Entry: 10731b328; end: 10731b38b;  */

void FUN_10731b328(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010731cb28();
  func_0x00010731c8b4(&PTR_SUB_1109a0a00);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x000107319cc4(unaff_x19 + 0x18,unaff_x20 + 0x10);
  FUN_1072d4a48(unaff_x19 + 0x38,unaff_x20 + 0x30);
  return;
}



/* Entry: 10731b38c; end: 10731b3a7;  */

void FUN_10731b38c(long param_1)

{
  FUN_10731b3a8();
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* Entry: 10731b3a8; end: 10731b427;  */

void FUN_10731b3a8(long param_1,long param_2)

{
  func_0x0001075281c8();
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  return;
}



/* Entry: 10731b428; end: 10731b43b;  */

void FUN_10731b428(void)

{
  func_0x00010731b400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731b43c; end: 10731b46f;  */

void FUN_10731b43c(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c8c4();
  func_0x00010731c824(&PTR_SUB_1109a0a90);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10731b470; end: 10731b4af;  */

void FUN_10731b470(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 unaff_x30;
  
  func_0x00010731d340(&PTR_SUB_1109a0a90);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10731b4b0; end: 10731b587;  */

void FUN_10731b4b0(long param_1)

{
  undefined8 **extraout_x8;
  long extraout_x9;
  undefined8 extraout_x10;
  undefined8 **extraout_x11;
  undefined8 ***extraout_x12;
  long unaff_x19;
  long unaff_x20;
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x00010054c994();
  lStack_40 = *(long *)(param_1 + 8) + 0xf8;
  uStack_38 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  ppuStack_58 = &ppuStack_58;
  uStack_48 = 0;
  ppuStack_50 = ppuStack_58;
  if (*(long *)(*(long *)(unaff_x20 + 8) + 0x148) != 0) {
    func_0x00010731d37c();
    ppuStack_58[1] = extraout_x11;
    *extraout_x11 = ppuStack_58;
    extraout_x12[1] = extraout_x8;
    *(undefined8 *)(extraout_x9 + 0x148) = 0;
    ppuStack_58 = extraout_x12;
    uStack_48 = extraout_x10;
  }
  func_0x00010731a274(&lStack_40);
  for (pppuVar1 = (undefined8 ***)ppuStack_50; pppuVar1 != &ppuStack_58;
      pppuVar1 = (undefined8 ***)pppuVar1[1]) {
    func_0x0001073a6aa0(*(undefined8 *)(unaff_x19 + 0x10),pppuVar1[5],pppuVar1 + 2);
  }
  FUN_107317628(&ppuStack_58);
  func_0x0001003acd24(&lStack_40);
  return;
}



/* Entry: 10731b588; end: 10731b5af;  */

void FUN_10731b588(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0af0);
  func_0x00010731c874();
  return;
}



/* Entry: 10731b5b0; end: 10731b5bb;  */

undefined ** FUN_10731b5b0(void)

{
  return &PTR_DAT_1109a0af0;
}



/* Entry: 10731b5bc; end: 10731b5e7;  */

undefined8 * FUN_10731b5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a0b10;
  func_0x000107316c18(param_1 + 1);
  return param_1;
}



/* Entry: 10731b5e8; end: 10731b5fb;  */

void FUN_10731b5e8(void)

{
  FUN_10731b5bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731b5fc; end: 10731b62b;  */

undefined8 FUN_10731b5fc(undefined8 param_1)

{
  func_0x00010731c98c();
  FUN_10731b698();
  return param_1;
}



/* Entry: 10731b62c; end: 10731b663;  */

void FUN_10731b62c(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010731cb28(param_3,param_2 + 8);
  func_0x00010731c8b4(&PTR_FUN_1109a0b10);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x18,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 10731b664; end: 10731b68b;  */

void FUN_10731b664(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0b70);
  func_0x00010731c874();
  return;
}



/* Entry: 10731b68c; end: 10731b697;  */

undefined ** FUN_10731b68c(void)

{
  return &PTR_DAT_1109a0b70;
}



/* Entry: 10731b698; end: 10731b6f7;  */

void FUN_10731b698(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  
  func_0x00010731cb28();
  func_0x00010731c8b4(&PTR_FUN_1109a0b10);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x18,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 10731b6f8; end: 10731b72b;  */

void FUN_10731b6f8(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  func_0x00010731ca28();
  func_0x00010731d09c();
  if ((bool)in_ZR) {
    *unaff_x19 = 0;
  }
  else {
    func_0x00010731c8dc();
    func_0x00010731d1a0();
  }
  return;
}



/* Entry: 10731b72c; end: 10731ba8b;  */

void FUN_10731b72c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 in_x4;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_228 [120];
  undefined1 auStack_1b0 [160];
  undefined8 uStack_110;
  long lStack_108;
  long alStack_a0 [14];
  undefined1 auStack_30 [24];
  long lStack_18;
  byte bStack_10;
  undefined8 uStack_8;
  
  func_0x00010731d120();
  func_0x00010731d3a4();
  func_0x00010054bdbc();
  func_0x00010731cc48();
  func_0x00010bccbc98(alStack_a0);
  uStack_110 = *(undefined8 *)(alStack_a0[0] + 8);
  lStack_108 = *(long *)(alStack_a0[0] + 0x10);
  if (lStack_108 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  if (*(long **)(unaff_x23 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x23 + 0x18) + 0x30))(auStack_1b0);
    func_0x00010731d018();
    func_0x00010bccbe4c(alStack_a0);
    func_0x00010731cf4c();
    func_0x00010731ccac();
    func_0x00010731cc8c();
    if (!(bool)in_ZR) {
      do {
        func_0x00010731d05c();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010731cca0();
    lVar1 = *(long *)(param_1 + 0x10);
    puVar3 = auStack_30;
    FUN_10731ba8c(puVar3,in_x4);
    if (lVar1 != 0) {
      func_0x00010731cac8();
      func_0x00010731cf5c();
      func_0x00010731ce08();
      func_0x00010731c978();
      FUN_10726e6c0(alStack_a0,puVar3);
      func_0x00010731cf3c();
      func_0x00010731d010();
      if ((bStack_10 & 1) != 0) {
        if (lStack_18 == 0) {
          func_0x000104bfeb48();
          goto LAB_10731b894;
        }
        func_0x00010731cf30();
        func_0x00010731d20c();
      }
      func_0x00010731cec4();
      func_0x00010731cc30();
      func_0x00010731cf44();
    }
    FUN_1073186a8(auStack_30);
    func_0x00010731d390();
    if ((bool)in_ZR) {
      FUN_10731bae4(auStack_228,auStack_1b0);
    }
    if (*(long *)(unaff_x22 + 0x18) == 0) {
      func_0x000104bfeb48();
      goto LAB_10731b894;
    }
    func_0x00010731cf30();
    (*extraout_x8)();
    FUN_10731bb34(auStack_228);
    func_0x00010731d2b4();
    func_0x00010054c318(uStack_8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bfeb48();
LAB_10731b894:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10731b898);
  (*pcVar2)();
}



/* Entry: 10731ba8c; end: 10731bae3;  */

void FUN_10731ba8c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  code *extraout_x8;
  long unaff_x19;
  
  func_0x00010731c890();
  if (!(bool)in_ZR) {
    return;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    if (lVar1 == param_2) {
      func_0x00010731c7fc();
      func_0x00010731c9e0();
      goto LAB_10731bac8;
    }
    func_0x00010731ca9c();
    (*extraout_x8)();
  }
  *(long *)(unaff_x19 + 0x18) = lVar1;
LAB_10731bac8:
  func_0x00010731d030();
  return;
}



/* Entry: 10731bae4; end: 10731baff;  */

void FUN_10731bae4(long param_1)

{
  FUN_10731bb00();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10731bb00; end: 10731bb33;  */

void FUN_10731bb00(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731cb28();
  func_0x00010731d368();
  if ((bool)in_ZR) {
    func_0x00010731cda4();
  }
  func_0x00010731cb54();
  *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
  return;
}



/* Entry: 10731bb34; end: 10731bb53;  */

void FUN_10731bb34(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10731bb54();
  }
  return;
}



/* Entry: 10731bb54; end: 10731bb73;  */

void FUN_10731bb54(void)

{
  long unaff_x19;
  
  func_0x00010731d2ec();
  if (*(char *)(unaff_x19 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10731bb74; end: 10731bc37;  */

void FUN_10731bb74(long param_1)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010731c940();
  FUN_10731ba8c();
  func_0x00010731cbec();
  if (param_1 == 0) {
LAB_10731bba8:
    *(long *)(unaff_x19 + 0x60) = param_1;
  }
  else {
    if (param_1 != unaff_x21 + 0x48) {
      func_0x00010731ca9c();
      (*extraout_x8)();
      goto LAB_10731bba8;
    }
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x20;
    func_0x00010731c9e8(*(undefined8 *)(unaff_x21 + 0x60));
    func_0x00010731d204();
  }
  lVar1 = *(long *)(unaff_x21 + 0x80);
  if (lVar1 != 0) {
    if (lVar1 == unaff_x21 + 0x68) {
      *(long *)(unaff_x19 + 0x80) = unaff_x19 + 0x68;
      func_0x00010731c9e8(*(undefined8 *)(unaff_x21 + 0x80));
      func_0x00010731d1b4();
      goto LAB_10731bbf8;
    }
    func_0x00010731ca9c();
    (*extraout_x8_00)();
  }
  *(long *)(unaff_x19 + 0x80) = lVar1;
LAB_10731bbf8:
  func_0x00010731cbc4();
  return;
}



/* Entry: 10731bc38; end: 10731bc87;  */

void FUN_10731bc38(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010731c890();
  if ((bool)in_ZR) {
    if (*(long *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
    }
    else if (*(long *)(param_2 + 0x18) == param_2) {
      func_0x00010731c7fc();
      func_0x00010731c9e0();
    }
    else {
      func_0x00010731cbb0();
    }
    func_0x00010731d030();
  }
  return;
}



/* Entry: 10731bc88; end: 10731bccb;  */

void FUN_10731bc88(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010731ceb8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010731c7fc();
    func_0x00010731c9e0();
  }
  else {
    func_0x00010731cbb0();
  }
  return;
}



/* Entry: 10731bccc; end: 10731bd0f;  */

void FUN_10731bccc(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010731ceb8();
  if (extraout_x8 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (extraout_x8 == param_2) {
    func_0x00010731c7fc();
    func_0x00010731c9e0();
  }
  else {
    func_0x00010731cbb0();
  }
  return;
}



/* Entry: 10731bd10; end: 10731bd13;  */

undefined8 * FUN_10731bd10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a0b90;
  func_0x00010731be98(param_1 + 1);
  return param_1;
}



/* Entry: 10731bd14; end: 10731bd27;  */

void FUN_10731bd14(void)

{
  func_0x00010731be2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731bd28; end: 10731bd5b;  */

undefined8 FUN_10731bd28(undefined8 param_1)

{
  func_0x00010731ccd4();
  func_0x00010731be58();
  return param_1;
}



/* Entry: 10731bd5c; end: 10731bd7f;  */

void FUN_10731bd5c(long param_1,undefined8 param_2)

{
  func_0x00010731cb28(param_2,param_1 + 8);
  func_0x00010731ca0c(&PTR_FUN_1109a0b90);
  FUN_10731bb74();
  return;
}



/* Entry: 10731bd80; end: 10731bdf7;  */

void FUN_10731bd80(int param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  func_0x00010731ca7c();
  func_0x00010731d320();
  if (param_1 != 0) {
    FUN_10731b6f8(auStack_28,*(undefined8 *)(unaff_x19 + 0x60));
    func_0x00010731ca58();
    if (unaff_x20 == 0) {
      func_0x00010731caa8();
      FUN_10731b72c();
    }
    else if (*(char *)(unaff_x19 + 200) == '\x01') {
      func_0x00010731d30c();
      func_0x00010731d304();
    }
    func_0x00010731cd30();
  }
  func_0x00010731cc08();
  return;
}



/* Entry: 10731bdf8; end: 10731be1f;  */

void FUN_10731bdf8(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0bf0);
  func_0x00010731c874();
  return;
}


