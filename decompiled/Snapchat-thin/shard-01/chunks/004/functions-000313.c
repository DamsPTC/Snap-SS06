/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10108f018; end: 10108f0af;  */

long FUN_10108f018(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10108f0b0; end: 10108f123;  */

undefined1 * FUN_10108f0b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10108f124; end: 10108f16f;  */

undefined1 * FUN_10108f124(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10108f170; end: 10108f20f;  */

int FUN_10108f170(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10108f210; end: 10108f233;  */

undefined8 FUN_10108f210(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10108f234; end: 10108f3cb;  */

void FUN_10108f234(undefined1 *param_1,ulong param_2,long param_3,char param_4,undefined1 *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (param_4 == '\0') {
    func_0x000107c61434(param_3);
    uVar3 = 2;
    lVar1 = param_3;
    uVar2 = param_2;
  }
  else if (param_4 == '\x01') {
    uVar2 = *(ulong *)(param_5 + 0x18);
    lVar1 = *(long *)(param_5 + 0x20);
    func_0x00010108ee28(param_2,param_3,1);
    uVar3 = 3;
  }
  else {
    uVar2 = param_3 + (ulong)(param_2 >= 4);
    if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_2 < 4))) {
      uVar2 = param_3 + (ulong)(param_2 >= 2);
      if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_2 < 2))) {
        if (param_2 == 0 && param_3 == 0) {
          param_2 = *(ulong *)(param_5 + 8);
          param_3 = *(long *)(param_5 + 0x10);
          uVar2 = *(ulong *)(param_5 + 0x18);
          lVar1 = *(long *)(param_5 + 0x20);
          uVar3 = *param_5;
          func_0x000107c61434(param_3);
        }
        else {
          param_2 = *(ulong *)(param_5 + 8);
          param_3 = *(long *)(param_5 + 0x10);
          uVar2 = *(ulong *)(param_5 + 0x18);
          lVar1 = *(long *)(param_5 + 0x20);
          func_0x000107c61434(param_3);
          uVar3 = 6;
        }
      }
      else if (param_2 == 2 && param_3 == 0) {
        param_2 = *(ulong *)(param_5 + 8);
        param_3 = *(long *)(param_5 + 0x10);
        uVar2 = *(ulong *)(param_5 + 0x18);
        lVar1 = *(long *)(param_5 + 0x20);
        func_0x000107c61434(param_3);
        uVar3 = 7;
      }
      else {
        param_2 = *(ulong *)(param_5 + 8);
        param_3 = *(long *)(param_5 + 0x10);
        uVar2 = *(ulong *)(param_5 + 0x18);
        lVar1 = *(long *)(param_5 + 0x20);
        func_0x000107c61434(param_3);
        uVar3 = 4;
      }
    }
    else {
      lVar1 = param_3 + -1 + (ulong)(3 < param_2);
      if (lVar1 != 0 || CARRY8(lVar1 - 1,(ulong)(1 < param_2 - 4))) {
        if (param_2 == 6 && param_3 == 0) {
          param_2 = *(ulong *)(param_5 + 8);
          param_3 = *(long *)(param_5 + 0x10);
          uVar2 = *(ulong *)(param_5 + 0x18);
          lVar1 = *(long *)(param_5 + 0x20);
          func_0x000107c61434(param_3);
          uVar3 = 2;
        }
        else {
          param_2 = *(ulong *)(param_5 + 8);
          param_3 = *(long *)(param_5 + 0x10);
          uVar2 = *(ulong *)(param_5 + 0x18);
          lVar1 = *(long *)(param_5 + 0x20);
          func_0x000107c61434(param_3);
          uVar3 = 8;
        }
      }
      else {
        param_2 = *(ulong *)(param_5 + 8);
        param_3 = *(long *)(param_5 + 0x10);
        uVar2 = *(ulong *)(param_5 + 0x18);
        lVar1 = *(long *)(param_5 + 0x20);
        func_0x000107c61434(param_3);
        uVar3 = 5;
      }
    }
  }
  func_0x000107c61434(lVar1);
  *param_1 = uVar3;
  *(ulong *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x10) = param_3;
  *(ulong *)(param_1 + 0x18) = uVar2;
  *(long *)(param_1 + 0x20) = lVar1;
  return;
}



/* Entry: 10108f3cc; end: 10108f51f;  */

/* WARNING: Possible PIC construction at 0x00010108ebc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010108f4ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010108ebcc) */
/* WARNING: Removing unreachable block (ram,0x00010108f4f0) */

void FUN_10108f3cc(ulong param_1,long param_2,char param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long unaff_x20;
  
  if (param_3 == '\x02') {
    uVar1 = param_2 + (ulong)(param_1 >= 4);
    if ((long)-uVar1 < 0 != SCARRY8(~uVar1,(ulong)(param_1 < 4))) {
      if (param_1 == 4 && param_2 == 0) {
        if ((*(char *)(unaff_x20 + 0x80) == '\x01') &&
           (lVar3 = *(long *)(unaff_x20 + 0x88), lVar3 != 0)) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98))
            ;
            func_0x000107c50054(lVar3);
            goto code_r0x000107c615e8;
          }
        }
        bVar2 = false;
      }
      else {
        if (param_1 != 5 || param_2 != 0) {
          return;
        }
        bVar2 = true;
      }
      func_0x0001000a8868(unaff_x20 + 0x58,*(undefined8 *)(unaff_x20 + 0x70));
      func_0x00010108cffc();
      lVar3 = *(long *)(unaff_x20 + 0x48);
      if (lVar3 == 0) {
        lVar3 = unaff_x20 + 0x50;
        func_0x000107c61618();
        if (bVar2) {
          if (lVar3 == 0) {
            return;
          }
          func_0x000107c5db18(lVar3);
        }
        else {
          if (lVar3 == 0) {
            return;
          }
          func_0x000107c5db10(lVar3);
        }
      }
      else {
        func_0x000107c615f0(lVar3);
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c5d6d8(lVar3);
      }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
      return;
    }
    if (param_1 == 1 && param_2 == 0) {
      lVar3 = unaff_x20 + 0x50;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c5db0c();
        goto code_r0x000107c615e8;
      }
    }
    else if (param_1 == 2 && param_2 == 0) {
      lVar3 = unaff_x20 + 0x50;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c5db14();
        goto code_r0x000107c615e8;
      }
    }
  }
  return;
}



/* Entry: 10108f520; end: 10108f687;  */

int FUN_10108f520(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10108f59c;
        goto LAB_10108f580;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10108f580:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10108f59c:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10108f688; end: 10108f6c7;  */

void FUN_10108f688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91f9e4;
  func_0x000107c61520(&UNK_10d91f9e4,&UNK_11037e338);
  puRam0000000112d59188 = puVar1;
  return;
}



/* Entry: 10108f6c8; end: 10108f6e7;  */

undefined8 * FUN_10108f6c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010108ee28(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10108f6e8; end: 10108f7b3;  */

undefined1  [16] FUN_10108f6e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef22ed0);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10108f7b4);
  (*pcVar1)();
}



/* Entry: 10108f7b4; end: 10108f7c3;  */

undefined1  [16] FUN_10108f7b4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7478656e;
  func_0x000107c5fadc(0x7478656e,0xe400000000000000);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10108f7c4; end: 10108f88f;  */

undefined1  [16] FUN_10108f7c4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe5;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef22ef0);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10108f890);
  (*pcVar1)();
}



/* Entry: 10108f890; end: 10108f90b;  */

undefined1  [16] FUN_10108f890(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x755f65676e616863;
  func_0x000107c5fadc(0x755f65676e616863,0xef656d616e726573);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10108f90c; end: 10108f9d7;  */

undefined1  [16] FUN_10108f90c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22cb0);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10108f9d8);
  (*pcVar1)();
}



/* Entry: 10108f9d8; end: 10108fa2f;  */

undefined1  [16] FUN_10108f9d8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x696176615f746f6e;
  func_0x000107c5fadc(0x696176615f746f6e,0xed0000656c62616c);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10108fa30; end: 10108fc93;  */

undefined1  [16] FUN_10108fa30(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef22d10);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10108fafc);
  (*pcVar1)();
}



/* Entry: 10108fc94; end: 10108fccb;  */

undefined1  [16] FUN_10108fc94(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10108fccc; end: 10108fd97;  */

undefined1  [16] FUN_10108fccc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef22c70);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10108fd98);
  (*pcVar1)();
}



/* Entry: 10108fd98; end: 10108fddb;  */

undefined1  [16] FUN_10108fd98(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7972746572;
  func_0x000107c5fadc(0x7972746572,0xe500000000000000);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10108fddc; end: 10108fea7;  */

undefined1  [16] FUN_10108fddc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef22eb0);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10108fea8);
  (*pcVar1)();
}



/* Entry: 10108fea8; end: 10108ff43;  */

undefined1  [16] FUN_10108fea8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x61705f7265746e65;
  func_0x000107c5fadc(0x61705f7265746e65,0xee0064726f777373);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10108ff44; end: 10109000f;  */

undefined1  [16] FUN_10108ff44(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe2;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef22d30);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090010);
  (*pcVar1)();
}



/* Entry: 101090010; end: 10109002b;  */

undefined1  [16] FUN_101090010(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x696167615f797274;
  func_0x000107c5fadc(0x696167615f797274,0xe90000000000006e);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 10109002c; end: 10109068b;  */

undefined1  [16] FUN_10109002c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdf;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef22e80);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010900f8);
  (*pcVar1)();
}



/* Entry: 10109068c; end: 1010906d3;  */

undefined1  [16] FUN_10109068c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6b6f;
  func_0x000107c5fadc(0x6b6f,0xe200000000000000);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 1010906d4; end: 101090783;  */

undefined1  [16] FUN_1010906d4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef22c90);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101090784);
  (*pcVar1)();
}



/* Entry: 101090784; end: 101090793;  */

void FUN_101090784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101090794; end: 1010907b3;  */

void FUN_101090794(void)

{
  func_0x000107c61168(&PTR_PTR_112d591d0);
  return;
}



/* Entry: 1010907b4; end: 1010907ff;  */

void FUN_1010907b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x65725f726f727265;
  FUN_101090794();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  func_0x000107c5fadc(0x65725f726f727265,0xe900000000000064);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam00000001137ff178 = puVar2;
  return;
}



/* Entry: 101090800; end: 1010908e7;  */

void FUN_101090800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_101090794();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  func_0x000107c5fadc(param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  *param_4 = puVar2;
  return;
}



/* Entry: 1010908e8; end: 1010908f3; -[SCChangeUsernameEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010908e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59238;
  func_0x000107c61428(param_1 + _DAT_112d59238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010908f4; end: 1010908ff; -[SCChangeUsernameEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010908f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59238;
  func_0x000107c61428(param_1 + _DAT_112d59238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090900; end: 10109090b; -[SCChangeUsernameEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090900(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59240;
  func_0x000107c61428(param_1 + _DAT_112d59240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10109090c; end: 101090917; -[SCChangeUsernameEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109090c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59240;
  func_0x000107c61428(param_1 + _DAT_112d59240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090918; end: 101090923; -[SCChangeUsernameEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090918(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59248;
  func_0x000107c61428(param_1 + _DAT_112d59248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101090924; end: 10109092f; -[SCChangeUsernameEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090924(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59248;
  func_0x000107c61428(param_1 + _DAT_112d59248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090930; end: 10109093b; -[SCChangeUsernameEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090930(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59250;
  func_0x000107c61428(param_1 + _DAT_112d59250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10109093c; end: 101090947; -[SCChangeUsernameEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109093c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59250;
  func_0x000107c61428(param_1 + _DAT_112d59250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090948; end: 101090953; -[SCChangeUsernameEntryPoint reauthenticationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090948(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59258;
  func_0x000107c61428(param_1 + _DAT_112d59258,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101090954; end: 10109095f; -[SCChangeUsernameEntryPoint setReauthenticationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59258;
  func_0x000107c61428(param_1 + _DAT_112d59258,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090960; end: 10109096b; -[SCChangeUsernameEntryPoint bitmojiFetcherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090960(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59260;
  func_0x000107c61428(param_1 + _DAT_112d59260,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10109096c; end: 101090977; -[SCChangeUsernameEntryPoint setBitmojiFetcherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109096c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59260;
  func_0x000107c61428(param_1 + _DAT_112d59260,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090978; end: 101090983; -[SCChangeUsernameEntryPoint loginSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090978(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59268;
  func_0x000107c61428(param_1 + _DAT_112d59268,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101090984; end: 10109098f; -[SCChangeUsernameEntryPoint setLoginSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59268;
  func_0x000107c61428(param_1 + _DAT_112d59268,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090990; end: 10109099b; -[SCChangeUsernameEntryPoint usernameServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59270;
  func_0x000107c61428(param_1 + _DAT_112d59270,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10109099c; end: 1010909a7; -[SCChangeUsernameEntryPoint setUsernameServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109099c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59270;
  func_0x000107c61428(param_1 + _DAT_112d59270,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010909a8; end: 1010909b3; -[SCChangeUsernameEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59278;
  func_0x000107c61428(param_1 + _DAT_112d59278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010909b4; end: 1010909bf; -[SCChangeUsernameEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59278;
  func_0x000107c61428(param_1 + _DAT_112d59278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010909c0; end: 1010909cb; -[SCChangeUsernameEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59280;
  func_0x000107c61428(param_1 + _DAT_112d59280,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010909cc; end: 1010909d7; -[SCChangeUsernameEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59280;
  func_0x000107c61428(param_1 + _DAT_112d59280,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010909d8; end: 1010909e3; -[SCChangeUsernameEntryPoint changeUsernameStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59288;
  func_0x000107c61428(param_1 + _DAT_112d59288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010909e4; end: 1010909ef; -[SCChangeUsernameEntryPoint setChangeUsernameStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59288;
  func_0x000107c61428(param_1 + _DAT_112d59288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010909f0; end: 1010909fb; -[SCChangeUsernameEntryPoint changeUsernameCOFConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010909f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59290;
  func_0x000107c61428(param_1 + _DAT_112d59290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010909fc; end: 101090a3f;  */

void FUN_1010909fc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101090a40; end: 101090a4b; -[SCChangeUsernameEntryPoint setChangeUsernameCOFConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101090a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59290;
  func_0x000107c61428(param_1 + _DAT_112d59290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090a4c; end: 101090a9f;  */

void FUN_101090a4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101090aa0; end: 101090ee7;  */

/* WARNING: Possible PIC construction at 0x000101090cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090ea8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090d98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101090d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101090dac) */
/* WARNING: Removing unreachable block (ram,0x000101090d9c) */
/* WARNING: Removing unreachable block (ram,0x000101090dcc) */
/* WARNING: Removing unreachable block (ram,0x000101090dbc) */
/* WARNING: Removing unreachable block (ram,0x000101090dfc) */
/* WARNING: Removing unreachable block (ram,0x000101090dec) */
/* WARNING: Removing unreachable block (ram,0x000101090e3c) */
/* WARNING: Removing unreachable block (ram,0x000101090e2c) */
/* WARNING: Removing unreachable block (ram,0x000101090e1c) */
/* WARNING: Removing unreachable block (ram,0x000101090e7c) */
/* WARNING: Removing unreachable block (ram,0x000101090e6c) */
/* WARNING: Removing unreachable block (ram,0x000101090e5c) */
/* WARNING: Removing unreachable block (ram,0x000101090e4c) */
/* WARNING: Removing unreachable block (ram,0x000101090ebc) */
/* WARNING: Removing unreachable block (ram,0x000101090eac) */
/* WARNING: Removing unreachable block (ram,0x000101090e9c) */
/* WARNING: Removing unreachable block (ram,0x000101090e8c) */
/* WARNING: Removing unreachable block (ram,0x000101090d0c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000101090cfc) */
/* WARNING: Removing unreachable block (ram,0x000101090cec) */
/* WARNING: Removing unreachable block (ram,0x000101090cdc) */
/* WARNING: Removing unreachable block (ram,0x000101090ccc) */
/* WARNING: Removing unreachable block (ram,0x000101090d8c) */

void FUN_101090aa0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5da74();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5d9b4();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c444a8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4f9e8();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c3e9b8();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c4c060();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c5db28();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c5d900();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = unaff_x20;
                    func_0x000107c3df78();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      func_0x000107c61174();
                      lVar11 = unaff_x20;
                      func_0x000107c3f7d0();
                      func_0x000107c61180();
                      func_0x000107c3f7c0();
                      func_0x000107c61180();
                      lVar12 = 0;
                      FUN_101078660();
                      func_0x000107c613fc();
                      *(undefined8 *)(lVar12 + 0x70) = 0;
                      uVar13 = 0;
                      func_0x000101077d10();
                      func_0x000107c614e8();
                      func_0x000107c610f8();
                      func_0x000107c453e4();
                      *(undefined8 *)(lVar12 + 0x78) = uVar13;
                      *(long *)(lVar12 + 0x10) = lVar1;
                      *(long *)(lVar12 + 0x18) = lVar2;
                      *(long *)(lVar12 + 0x20) = lVar3;
                      *(long *)(lVar12 + 0x28) = lVar4;
                      *(long *)(lVar12 + 0x30) = lVar5;
                      *(long *)(lVar12 + 0x38) = lVar6;
                      *(long *)(lVar12 + 0x40) = lVar7;
                      *(long *)(lVar12 + 0x48) = lVar8;
                      *(long *)(lVar12 + 0x50) = lVar9;
                      *(long *)(lVar12 + 0x58) = lVar10;
                      *(long *)(lVar12 + 0x60) = lVar11;
                      *(long *)(lVar12 + 0x68) = unaff_x20;
                      func_0x000101077dec();
                      lVar1 = lVar10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101090ee8; end: 101090f0f; -[SCChangeUsernameEntryPoint begin] */

void FUN_101090ee8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101090aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101090f10; end: 101090f53; -[SCChangeUsernameEntryPoint end] */

void FUN_101090f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101090f54; end: 1010914ff;  */

void FUN_101090f54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_101090fe0;
  }
  if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef630)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ef5f0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10e3fc0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10dd0f0)) ||
                 (func_0x000107c605b8(0xd000000000000018,0x800000010ef22f10,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57b88();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10dd0d0)) ||
                   (func_0x000107c605b8(0xd000000000000016,0x800000010ef22f30,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52cf8();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10dd0b0)) ||
                     (func_0x000107c605b8(0xd000000000000014,0x800000010ef22f50,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c56118();
                  }
                  else {
                    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10dd090)) {
                      uVar2 = 0;
                      func_0x000107c605b8(0xd000000000000010,0x800000010ef22f70,param_2,param_3,0);
                      if ((uVar2 & 1) == 0) {
                        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) {
                          uVar2 = 0;
                          func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = 0xd000000000000025;
                            if (((param_2 == -0x2fffffffffffffdb) &&
                                (param_3 == -0x7ffffffef10f0340)) ||
                               (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c52844();
                            }
                            else {
                              uVar2 = 0xd00000000000001d;
                              if (((param_2 == -0x2fffffffffffffe3) &&
                                  (param_3 == -0x7ffffffef10ee2e0)) ||
                                 (func_0x000107c605b8(0xd00000000000001d,0x800000010ef11d20,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c53308();
                              }
                              else {
                                uVar2 = 0xd00000000000001f;
                                if (((param_2 != -0x2fffffffffffffe1) ||
                                    (param_3 != -0x7ffffffef10ee2c0)) &&
                                   (func_0x000107c605b8(0xd00000000000001f,0x800000010ef11d40,
                                                        param_2,param_3,0), (uVar2 & 1) == 0)) {
                                  func_0x000107c602fc(0x15);
                                  func_0x000107c6142c(0xe000000000000000);
                                  func_0x000107c5fb78(param_2,param_3);
                                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                      0x800000010ef0fc20,
                                                                                                            
                                                  "SCChangeUsernameFeature/SCChangeUsernameEntryPoint.swift"
                                                  ,0x38,2,0x5d,0);
                    /* WARNING: Does not return */
                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101091500);
                                  (*pcVar1)();
                                }
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c532f8();
                              }
                            }
                            goto LAB_101090fe0;
                          }
                        }
                        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c5a2fc();
                        goto LAB_101090fe0;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5a438();
                  }
                }
              }
              goto LAB_101090fe0;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c54f40();
          goto LAB_101090fe0;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a368();
      goto LAB_101090fe0;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c5a3f8();
LAB_101090fe0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101091500; end: 1010915ab; -[SCChangeUsernameEntryPoint setValue:forIvarName:] */

void FUN_101091500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101090f54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010915ac; end: 1010916e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010915ac(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d59238,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59240,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59248,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59250,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59258,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59260,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59268,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59270,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59278,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59280,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59288,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59290,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d59298) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010916e8; end: 101091707; -[SCChangeUsernameEntryPoint init] */

void FUN_1010916e8(void)

{
  FUN_1010915ac();
  return;
}



/* Entry: 101091708; end: 10109173b;  */

void FUN_101091708(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10109173c; end: 101091823; -[SCChangeUsernameEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109173c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d59238);
  func_0x000107c61610(param_1 + _DAT_112d59240);
  func_0x000107c61610(param_1 + _DAT_112d59248);
  func_0x000107c61610(param_1 + _DAT_112d59250);
  func_0x000107c61610(param_1 + _DAT_112d59258);
  func_0x000107c61610(param_1 + _DAT_112d59260);
  func_0x000107c61610(param_1 + _DAT_112d59268);
  func_0x000107c61610(param_1 + _DAT_112d59270);
  func_0x000107c61610(param_1 + _DAT_112d59278);
  func_0x000107c61610(param_1 + _DAT_112d59280);
  func_0x000107c61610(param_1 + _DAT_112d59288);
  func_0x000107c61610(param_1 + _DAT_112d59290);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d59298));
  return;
}



/* Entry: 101091824; end: 101091843;  */

void FUN_101091824(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad110);
  return;
}



/* Entry: 101091844; end: 10109184f; -[SCChangeUsernamePageLauncherEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101091844(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d592c8;
  func_0x000107c61428(param_1 + _DAT_112d592c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101091850; end: 10109185b; -[SCChangeUsernamePageLauncherEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101091850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d592c8;
  func_0x000107c61428(param_1 + _DAT_112d592c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10109185c; end: 101091867; -[SCChangeUsernamePageLauncherEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109185c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d592d0;
  func_0x000107c61428(param_1 + _DAT_112d592d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101091868; end: 1010918ab;  */

void FUN_101091868(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010918ac; end: 1010918b7; -[SCChangeUsernamePageLauncherEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010918ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d592d0;
  func_0x000107c61428(param_1 + _DAT_112d592d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010918b8; end: 10109190b;  */

void FUN_1010918b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10109190c; end: 101091953; -[SCChangeUsernamePageLauncherEntryPoint changeUsernameScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10109190c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d592d8;
  func_0x000107c61428(param_1 + _DAT_112d592d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101091954; end: 1010919b7; -[SCChangeUsernamePageLauncherEntryPoint setChangeUsernameScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101091954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d592d8;
  func_0x000107c61428(param_1 + _DAT_112d592d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010919b8; end: 101091bc7;  */

/* WARNING: Possible PIC construction at 0x000101091ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101091b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101091b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101091b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101091b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101091b48) */
/* WARNING: Removing unreachable block (ram,0x000101091b14) */
/* WARNING: Removing unreachable block (ram,0x000101091aec) */
/* WARNING: Removing unreachable block (ram,0x000101091b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010919b8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4d52c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c3f7cc();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_10107904c();
        func_0x000107c610f8();
        *(long *)(lVar4 + _DAT_112d585a0) = lVar2;
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174();
        lVar2 = unaff_x20;
        func_0x00010451338c();
        lVar5 = 0;
        FUN_1010789a0();
        lVar4 = lVar5;
        func_0x000107c610f8();
        lVar3 = _DAT_112d58550;
        func_0x000107c61614(lVar4 + _DAT_112d58550,0);
        *(undefined8 *)(lVar4 + _DAT_112d58558) = 0;
        func_0x000107c61604(lVar4 + lVar3,lVar2);
        *(long *)(lVar4 + _DAT_112d58560) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar4;
        lStack_68 = lVar5;
        func_0x000107c61174(unaff_x20);
        func_0x000107c61154(&lStack_70,puVar1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 101091bc8; end: 101091bef; -[SCChangeUsernamePageLauncherEntryPoint begin] */

void FUN_101091bc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010919b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101091bf0; end: 101091c33; -[SCChangeUsernamePageLauncherEntryPoint end] */

void FUN_101091bf0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101091c34; end: 101091e37;  */

void FUN_101091c34(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10dd030)) &&
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef22fd0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SCChangeUsernameFeature/SCChangeUsernamePageLauncherEntryPoint.swift"
                              ,0x44,2,0x2b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101091e38);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53304();
        goto LAB_101091cc0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
LAB_101091cc0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101091e38; end: 101091ee3; -[SCChangeUsernamePageLauncherEntryPoint setValue:forIvarName:] */

void FUN_101091e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101091c34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101091ee4; end: 101091f63; -[SCChangeUsernamePageLauncherEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101091ee4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d592c8,0);
  func_0x000107c61614(param_1 + _DAT_112d592d0,0);
  *(undefined8 *)(param_1 + _DAT_112d592d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d592e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101091f64; end: 101091f97;  */

void FUN_101091f64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101091f98; end: 101091fef; -[SCChangeUsernamePageLauncherEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101091fd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101091fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101091f98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d592c8);
  func_0x000107c61610(param_1 + _DAT_112d592d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d592d8));
  return;
}



/* Entry: 101091ff0; end: 10109200f;  */

void FUN_101091ff0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ad228);
  return;
}



/* Entry: 101092010; end: 101092023;  */

void FUN_101092010(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000101092020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  return;
}



/* Entry: 101092024; end: 10109208f;  */

void FUN_101092024(long param_1)

{
  long extraout_x8;
  long extraout_x12;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fb18(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 101092090; end: 101092093;  */

void FUN_101092090(long param_1)

{
  long extraout_x8;
  long extraout_x12;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fb18(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 101092094; end: 1010920d3;  */

void FUN_101092094(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_101092010(param_2,param_3,*(undefined8 *)(param_3 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001010920d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,0,1,param_3);
  return;
}



/* Entry: 1010920d4; end: 1010920eb;  */

void FUN_1010920d4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001010920e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x18) + -8) + 0x10))(param_1);
  return;
}



/* Entry: 1010920ec; end: 101092123;  */

void FUN_1010920ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  func_0x0001000a9d90(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101092120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  return;
}



/* Entry: 101092124; end: 10109212f;  */

void FUN_101092124(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  func_0x0001000a9d90(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101092120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  return;
}



/* Entry: 101092130; end: 1010921cf;  */

void FUN_101092130(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  
  pcVar1 = (code *)auStack_60;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  func_0x000107c5fed0(auStack_60,param_2,uVar3,param_4);
  lVar2 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(param_4 + 8),uVar3,PTR___sSTTL_11034db40,
                      PTR___s7ElementSTTl_11034d628);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  (*pcVar1)(auStack_60,0);
  return;
}



/* Entry: 1010921d0; end: 1010921ef;  */

void FUN_1010921d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb82d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSl10startIndex0B0QzvgTj_11034df88)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1010921f0; end: 10109226b;  */

code * FUN_1010921f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x5c80);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101092298();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_10109226c;
}



/* Entry: 10109226c; end: 101092297;  */

void FUN_10109226c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101092298; end: 10109233f;  */

undefined1  [16] FUN_101092298(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_3 + 0x18),
                      PTR___sSTTL_11034db40,PTR___s7ElementSTTl_11034d628);
  lVar2 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  lVar1 = *(long *)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(lVar1,0x1612);
  }
  param_1[2] = lVar1;
  FUN_101092130(lVar1,param_2,param_3,param_4);
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = FUN_101092340;
  return auVar3;
}



/* Entry: 101092340; end: 10109236f;  */

void FUN_101092340(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 101092370; end: 10109237f;  */

void FUN_101092370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb83cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlss5SliceVyxG11SubSequenceRtzrlEyACSny5IndexQzGcig_11034e058)();
  return;
}



/* Entry: 101092380; end: 1010923e3;  */

void FUN_101092380(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,*(undefined8 *)(param_4 + -8),*(undefined8 *)(param_3 + 0x18),
                      PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  lVar2 = 0;
  func_0x000107c60188(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001010923e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,1,lVar2);
  return;
}



/* Entry: 1010923e4; end: 1010923ef;  */

void FUN_1010923e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE5index_8offsetBy5IndexQzAD_SitF_11034e010)();
  return;
}


