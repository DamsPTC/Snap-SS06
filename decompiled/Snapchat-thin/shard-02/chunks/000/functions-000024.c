/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016dbd60; end: 1016dc107;  */

ulong FUN_1016dbd60(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dbea8);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001016dc2e8(uVar2,uVar4,0x112d6bde8,&PTR_PTR_1126c6610,0x112dc21e0,&UNK_10d97ec60);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dbea4);
      (*pcVar1)();
    }
    FUN_1016dc378(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1016dc108; end: 1016dc267;  */

ulong FUN_1016dc108(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dc268);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001016dc2e8(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dc264);
      (*pcVar1)();
    }
    FUN_1016dc6ac(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1016dc268; end: 1016dc377;  */

undefined * FUN_1016dc268(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1016dc378; end: 1016dc48f;  */

long FUN_1016dc378(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc48c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc490);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1016dd998(0,0x112d6bde8,&PTR_PTR_1126c6610);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1016dd998(0,0x112d6bde8,&PTR_PTR_1126c6610);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc488);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1016dc490; end: 1016dc5b3;  */

long FUN_1016dc490(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc5b0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc5b4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112dc21a0;
        func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112dc21a0;
      func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc5ac);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1016dc5b4; end: 1016dc6ab;  */

long FUN_1016dc5b4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc6a8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc6ac);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1016d85a4(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1016d85a4(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc6a4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1016dc6ac; end: 1016dc7c7;  */

long FUN_1016dc6ac(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc7c4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc7c8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1016dd998(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1016dd998(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016dc7c0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1016dc7c8; end: 1016dc877;  */

void FUN_1016dc7c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001016dbea8();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1016dc878; end: 1016dc893;  */

void FUN_1016dc878(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1016dc894();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1016dc894; end: 1016dc9c3;  */

undefined * FUN_1016dc894(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dc9c4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112dc21b8;
    func_0x0001000285a8(0x112dc21b8,&UNK_10d97ec30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dc21c0;
    func_0x0001000285a8(0x112dc21c0,&UNK_10d97ec38);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1016dc9c4; end: 1016dcb7f;  */

ulong FUN_1016dc9c4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dcaa8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dcaac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016dd998(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dcb80);
  (*pcVar2)();
}



/* Entry: 1016dcb80; end: 1016dcd23;  */

ulong FUN_1016dcb80(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dcc58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dcc5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010efb7ce0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dcd24);
  (*pcVar2)();
}



/* Entry: 1016dcd24; end: 1016dce33;  */

void FUN_1016dcd24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = &UNK_1103fa1b8;
  func_0x000107c613fc(&UNK_1103fa1b8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_6);
  puVar2 = &UNK_1103fa430;
  func_0x000107c613fc(&UNK_1103fa430,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  pcStack_60 = FUN_1016dd8a4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1016d906c;
  puStack_68 = &UNK_1103fa448;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c423ac(param_2);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1016dce34; end: 1016dd173;  */

ulong FUN_1016dce34(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dcf98);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dcf8c);
        (*pcVar1)();
      }
      uVar3 = 0x112dc21a0;
      func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dcf90);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016dcf94);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar3;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar8;
            *param_1 = uVar3;
            func_0x000107c615f0(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar3;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c615f0(uVar3);
      }
      else {
        uVar7 = 0;
        do {
          uVar2 = uVar7;
          FUN_1016dcb80(uVar7,param_3);
          param_1[uVar7] = uVar2;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1016dd174; end: 1016dd18b;  */

void FUN_1016dd174(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1016d9228(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1016dd18c; end: 1016dd2cf;  */

undefined * FUN_1016dd18c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if ((1.8446744073709552e+19 < (double)param_1) ||
     ((double)param_1 < 0.0 || ((ulong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000)) {
    uStack_48 = 1;
    uVar4 = 2;
    puStack_50 = param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_1016dd80c();
      func_0x000107c61658(&puStack_50,&UNK_1103fa590,uVar4);
    }
  }
  else {
    puVar1 = param_2;
    if (param_2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
    }
    puVar2 = param_2;
    func_0x000107c61174(param_2);
    puVar3 = puVar1;
    func_0x000107c49820();
    func_0x000107c61170(puVar1);
    param_1 = param_2;
    if ((long)puVar3 < 0) {
      uStack_48 = 0;
      uVar4 = 2;
      puStack_50 = param_2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar4 != 0) {
        FUN_1016dd80c();
        func_0x000107c61658(&puStack_50,&UNK_1103fa590,uVar4);
      }
      func_0x000107c61174(puVar2);
    }
  }
  return param_1;
}



/* Entry: 1016dd2d0; end: 1016dd4bf;  */

undefined * FUN_1016dd2d0(double param_1,undefined *param_2,undefined *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x21;
  
  puVar8 = param_3;
  FUN_1016dd18c(param_3);
  if (unaff_x21 == 0) {
    if (param_3 != (undefined *)0x0) {
      func_0x000107c5d388();
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dd4b4);
      (*pcVar2)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dd4b8);
      (*pcVar2)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dd4bc);
      (*pcVar2)();
    }
    if (CARRY8((ulong)param_3,(long)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dd4c0);
      (*pcVar2)();
    }
    puVar3 = param_2;
    func_0x000107c40808();
    if (param_3 + (long)param_1 <= puVar3) {
      puVar3 = param_3 + (long)param_1;
    }
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_3 < puVar3) {
      do {
        if (puVar3 <= param_3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016dd4b0);
          (*pcVar2)();
        }
        puVar6 = param_2;
        func_0x000107c4d9a0();
        func_0x000107c61180();
        if (puVar6 != (undefined *)0x0) {
          func_0x000107fe9894();
          puVar7 = puVar6;
          func_0x000105f60ed0();
          func_0x000107c61180();
          if (puVar7 != (undefined *)0x0) {
            func_0x000107c61174();
            puVar5 = puVar8;
            func_0x000107c61550();
            if (((((ulong)puVar5 & 1) == 0) || ((long)puVar8 < 0)) ||
               (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar8 >> 0x3e == 0) {
                puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar8) {
                  puVar4 = puVar8;
                }
                func_0x000107c60480(puVar4);
              }
              puVar5 = (undefined *)0x0;
              FUN_1016dbd60(0,puVar4 + 1,1,puVar8);
            }
            uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar9 + 0x10);
            puVar8 = puVar5;
            if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
              FUN_1016dbd60(puVar8,uVar1 + 1,1,puVar5);
              uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
            *(undefined **)(uVar9 + uVar1 * 8 + 0x20) = puVar7;
            func_0x000107c61170(puVar7);
          }
          func_0x000107c61170(puVar6);
        }
        param_3 = param_3 + 1;
      } while (puVar3 != param_3);
    }
  }
  return puVar8;
}



/* Entry: 1016dd4c0; end: 1016dd4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dd4c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112dc20f8);
    func_0x000107c6157c(uVar3);
    uVar2 = 0x112dc21d8;
    func_0x0001000285a8(0x112dc21d8,&UNK_10d97ec48);
    func_0x000100075034(&lStack_70,0x1016ddc4c,0,uVar2);
    func_0x000107c61574(uVar3);
    if (lStack_70 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c614f0(lStack_70);
      func_0x000107c615f0(lStack_70);
      FUN_1016dcd24(uVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c615ec(lStack_70,2);
    }
  }
  return;
}



/* Entry: 1016dd4d4; end: 1016dd4e7;  */

void FUN_1016dd4d4(void)

{
  FUN_1016dd554();
  return;
}



/* Entry: 1016dd4e8; end: 1016dd527;  */

void FUN_1016dd4e8(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1016dd998(0xff);
    puVar2 = PTR___sSo8NSObjectCs7CVarArg10ObjectiveCMc_11034fac8;
    func_0x000107c61520(PTR___sSo8NSObjectCs7CVarArg10ObjectiveCMc_11034fac8,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 1016dd528; end: 1016dd547;  */

void FUN_1016dd528(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7b60);
  return;
}



/* Entry: 1016dd548; end: 1016dd553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dd548(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112dc2118);
    func_0x000107c6157c(uVar3);
    uVar2 = 0x112dc21d8;
    func_0x0001000285a8(0x112dc21d8,&UNK_10d97ec48);
    func_0x000100075034(&lStack_60,FUN_1016ddc38,0,uVar2);
    func_0x000107c61574(uVar3);
    if (lStack_60 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      func_0x000107c614f0(lStack_60);
      func_0x000107c615f0(lStack_60);
      FUN_1016dd598();
      func_0x000107c61170(lVar1);
      func_0x000107c615ec(lStack_60,2);
    }
  }
  return;
}



/* Entry: 1016dd554; end: 1016dd597;  */

void FUN_1016dd554(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 1016dd598; end: 1016dd65f;  */

void FUN_1016dd598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1103fa3e0;
  func_0x000107c613fc(&UNK_1103fa3e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  uStack_50 = 0x1016dd85c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1016d906c;
  puStack_58 = &UNK_1103fa3f8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c423ac(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1016dd660; end: 1016dd677;  */

/* WARNING: Possible PIC construction at 0x0001016db5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016db6c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016db5b4) */
/* WARNING: Removing unreachable block (ram,0x0001016db6e8) */
/* WARNING: Removing unreachable block (ram,0x0001016db5c4) */
/* WARNING: Removing unreachable block (ram,0x0001016db6c4) */

void FUN_1016dd660(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c42fcc(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1016dd678; end: 1016dd6c3;  */

void FUN_1016dd678(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7a70);
  return;
}



/* Entry: 1016dd6c4; end: 1016dd727;  */

void FUN_1016dd6c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016dd728;
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016db1ac,0,0);
  return;
}



/* Entry: 1016dd728; end: 1016dd763;  */

void FUN_1016dd728(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016dd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016dd764; end: 1016dd7bb;  */

void FUN_1016dd764(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1016ddc98;
  plVar1[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016dada4,0,0);
  return;
}



/* Entry: 1016dd7bc; end: 1016dd7e7;  */

void FUN_1016dd7bc(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948);
                    /* WARNING: Could not recover jumptable at 0x00010bf6b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1016dd7e8; end: 1016dd80b;  */

void FUN_1016dd7e8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1016dd80c; end: 1016dd84b;  */

void FUN_1016dd80c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc2180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d97ec98;
  func_0x000107c61520(&UNK_10d97ec98,&UNK_1103fa590);
  puRam0000000112dc2180 = puVar1;
  return;
}



/* Entry: 1016dd84c; end: 1016dd863;  */

void FUN_1016dd84c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_1016de744();
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0x21,0);
    func_0x000107c61174();
    func_0x0001016dbcd0();
    uVar3 = *(ulong *)(unaff_x20 + 0x10);
    uVar4 = uVar3 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    uVar2 = uVar3;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1016dc108(uVar2,uVar1 + 1,1,uVar3,0x112dc2188,&PTR_PTR_1126a7988,0x112dc2190,
                    &UNK_10d97ec08);
      uVar4 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(long *)(uVar4 + uVar1 * 8 + 0x20) = param_1;
    *(ulong *)(unaff_x20 + 0x10) = uVar2;
    func_0x000107c614a8(auStack_48);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016dd864; end: 1016dd8a3;  */

void FUN_1016dd864(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016dd8a4; end: 1016dd8b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dd8a4(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112dc2128;
  if (lVar4 != 0) {
    uVar9 = *(undefined8 *)(lVar4 + _DAT_112dc2128);
    func_0x000107c6157c(uVar9);
    puVar6 = PTR___sytN_11034f1b0;
    func_0x000100075034(FUN_1016d890c,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar9);
    if (param_1 != 0) {
      uVar10 = param_1 & 0xffffffffffffff8;
      if (param_1 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar10 + 0x10);
      }
      else {
        uVar5 = param_1;
        if (-1 < (long)param_1) {
          uVar5 = uVar10;
        }
        func_0x000107c60480();
      }
      if (uVar5 != 0) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)(uVar10 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016d890c);
            (*pcVar3)();
          }
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar9 = 0;
          FUN_1016dc9c4(0,param_1,&PTR_PTR_1126d22a8,0x112dc21d0);
        }
        uVar11 = *(undefined8 *)(lVar4 + lVar2);
        lStack_b0 = lVar4;
        uStack_a8 = uVar9;
        uStack_a0 = uVar8;
        uStack_98 = uVar12;
        uStack_90 = uVar1;
        func_0x000107c6157c(uVar11);
        func_0x000100075034(FUN_1016dd8b4,auStack_c0,puVar6 + 8);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(uVar11);
        return;
      }
    }
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
    func_0x000107c45788(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c4d664(uVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1016dd8b4; end: 1016dd913;  */

void FUN_1016dd8b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1016d8970(*(undefined8 *)(unaff_x20 + 0x28),param_1,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1016dd914; end: 1016dd997;  */

void FUN_1016dd914(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016ddc9c;
  plVar3[9] = lVar4;
  plVar3[8] = lVar6;
  plVar3[6] = lVar2;
  plVar3[7] = lVar5;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016d8aa8,0,0);
  return;
}



/* Entry: 1016dd998; end: 1016dd9d7;  */

void FUN_1016dd998(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016dd9d8; end: 1016dda7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dd9d8(void)

{
  long lVar1;
  undefined4 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = (undefined4)*(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c614f0();
  func_0x0001016de9b0();
  *(undefined4 *)(lVar1 + _DAT_112dc2230) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_next__112614028,lVar1);
  return;
}



/* Entry: 1016dda7c; end: 1016ddaab;  */

void FUN_1016dda7c(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1016ddaac; end: 1016ddafb;  */

undefined8 * FUN_1016ddaac(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1016dda7c(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001016dda9c(uVar3,uVar2);
  return param_1;
}



/* Entry: 1016ddafc; end: 1016ddb37;  */

undefined8 * FUN_1016ddafc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001016dda9c(uVar3,uVar2);
  return param_1;
}



/* Entry: 1016ddb38; end: 1016ddc37;  */

int FUN_1016ddb38(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016ddc38; end: 1016ddc5f;  */

void FUN_1016ddc38(void)

{
  func_0x000100cb9e24();
  return;
}



/* Entry: 1016ddc60; end: 1016ddc67;  */

void FUN_1016ddc60(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1016ddc68; end: 1016ddc8f;  */

void FUN_1016ddc68(void)

{
  FUN_1016dd4d4();
  return;
}



/* Entry: 1016ddc90; end: 1016ddca7;  */

undefined8 * FUN_1016ddc90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_1016dda7c(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 1016ddca8; end: 1016de10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ddca8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar13 = param_1;
  func_0x000107c3e220();
  if ((lRam0000000112dc2218 != lVar13 && lRam0000000112dc2220 != lVar13) &&
      lRam0000000112dc2228 != lVar13) {
    puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
    func_0x000107c42fc8();
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c61170(puVar5);
    lVar13 = param_1;
    func_0x000107c4b800();
    func_0x000107c61180();
    lVar6 = lVar13;
    func_0x000107c5faec();
    lVar14 = param_2;
    func_0x000107c61170(lVar13);
    func_0x000107c4b884();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar13 = 0;
      lVar14 = 0;
    }
    else {
      lVar13 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    lVar7 = 0;
    FUN_1016d85a4();
    lVar8 = lVar7;
    func_0x000107c610f8();
    plVar9 = (long *)(lVar8 + _DAT_112dc2080);
    *plVar9 = 0;
    plVar9[1] = 0;
    lVar3 = _DAT_112dc2088;
    *(undefined8 *)(lVar8 + _DAT_112dc2088) = 0;
    lVar4 = _DAT_112dc2090;
    *(undefined8 *)(lVar8 + _DAT_112dc2090) = 0;
    plVar1 = (long *)(lVar8 + _DAT_112dc2078);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    *plVar9 = lVar13;
    plVar9[1] = lVar14;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    uVar11 = *(undefined8 *)(lVar8 + lVar3);
    *(undefined **)(lVar8 + lVar3) = puVar5;
    func_0x000107c61170(uVar11);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    uVar11 = *(undefined8 *)(lVar8 + lVar4);
    *(undefined **)(lVar8 + lVar4) = puVar5;
    func_0x000107c61170(uVar11);
    plVar9 = &lStack_70;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c61428(param_4 + 0x10,auStack_88,0x21,0);
    FUN_1016dbc60();
    uVar10 = *(ulong *)(param_4 + 0x10);
    uVar12 = uVar10 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar12 + 0x10);
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      func_0x0001016dbfd8(uVar10,uVar2 + 1,1);
      uVar12 = uVar10 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
    *(long **)(uVar12 + uVar2 * 8 + 0x20) = plVar9;
    *(ulong *)(param_4 + 0x10) = uVar10;
    func_0x000107c614a8(auStack_88);
  }
  return;
}



/* Entry: 1016de110; end: 1016de227;  */

undefined * FUN_1016de110(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61168(PTR__OBJC_CLASS___PHAssetCollection_1126bf858);
      lVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(ulong *)(lVar2 + 0x20) = param_1;
      *(ulong *)(lVar2 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar2);
      func_0x000107c42fc0(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      goto LAB_1016de1f8;
    }
  }
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetCollection_1126bf858);
  func_0x000107c42fc4();
  func_0x000107c61180();
LAB_1016de1f8:
  puVar5 = puVar4;
  func_0x000107c43638(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar5;
}



/* Entry: 1016de228; end: 1016de743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016de228(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar15 = (undefined *)0x3;
  FUN_1016dc878(0,3,0);
  puVar13 = puStack_90;
  puVar7 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x000107c61168();
  lVar18 = 0;
  do {
    puVar8 = puVar7;
    func_0x000107c42fc4();
    func_0x000107c61180();
    puVar12 = puVar8;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar12 == (undefined *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      func_0x000107c61168();
      func_0x000107c42fc8();
      func_0x000107c61180();
      func_0x000107c40808();
      func_0x000107c61170(puVar8);
      puVar8 = puVar12;
      func_0x000107c4b800();
      func_0x000107c61180();
      puVar11 = puVar8;
      func_0x000107c5faec();
      puVar24 = puVar15;
      func_0x000107c61170(puVar8);
      puVar8 = puVar12;
      func_0x000107c4b884();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
        puVar23 = (undefined *)0x0;
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar23 = puVar8;
        func_0x000107c5faec();
        func_0x000107c61170(puVar8);
      }
      lVar9 = 0;
      FUN_1016d85a4();
      lVar10 = lVar9;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar10 + _DAT_112dc2080);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar4 = _DAT_112dc2088;
      *(undefined8 *)(lVar10 + _DAT_112dc2088) = 0;
      lVar5 = _DAT_112dc2090;
      *(undefined8 *)(lVar10 + _DAT_112dc2090) = 0;
      puVar2 = (undefined8 *)(lVar10 + _DAT_112dc2078);
      *puVar2 = puVar11;
      puVar2[1] = puVar15;
      *puVar1 = puVar23;
      puVar1[1] = puVar24;
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      uVar16 = *(undefined8 *)(lVar10 + lVar4);
      *(undefined **)(lVar10 + lVar4) = puVar15;
      func_0x000107c61170(uVar16);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      uVar16 = *(undefined8 *)(lVar10 + lVar5);
      *(undefined **)(lVar10 + lVar5) = puVar15;
      func_0x000107c61170(uVar16);
      plVar21 = &lStack_a8;
      puVar15 = PTR_s_init_1125d9248;
      lStack_a8 = lVar10;
      lStack_a0 = lVar9;
      func_0x000107c61154();
      func_0x000107c61170(puVar12);
    }
    uVar20 = *(ulong *)(puVar13 + 0x10);
    puVar8 = (undefined *)(uVar20 + 1);
    puStack_90 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
      puVar15 = puVar8;
      FUN_1016dc878(1 < *(ulong *)(puVar13 + 0x18),puVar8,1);
    }
    puVar13 = puStack_90;
    *(undefined **)(puStack_90 + 0x10) = puVar8;
    *(long **)(puStack_90 + uVar20 * 8 + 0x20) = plVar21;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x18);
  uVar19 = 0;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while( true ) {
    if (uVar20 + 1 == uVar19) {
      func_0x000107c61574(puVar13);
      func_0x000107c42fc4(puVar7);
      func_0x000107c61180();
      puVar13 = &UNK_1103fa5d8;
      func_0x000107c613fc(&UNK_1103fa5d8,0x18,7);
      puVar22 = (ulong *)(puVar13 + 0x10);
      *puVar22 = (ulong)puVar8;
      pcStack_70 = FUN_1016de8ec;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_1016ddc60;
      puStack_78 = &UNK_1103fa5f0;
      ppuVar14 = &puStack_90;
      puStack_68 = puVar13;
      func_0x000107c60bc4(ppuVar14);
      puVar8 = puStack_68;
      func_0x000107c6157c(puVar13);
      func_0x000107c61574(puVar8);
      func_0x000107c429cc(puVar7);
      func_0x000107c60bd0(ppuVar14);
      if ((ulong)puVar15 >> 0x3e == 0) {
        func_0x000107c61434(puVar15);
        func_0x000107c605f8();
        puVar8 = puVar15;
      }
      else {
        puVar8 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar15) {
          puVar8 = puVar15;
        }
        func_0x000107c61434(puVar15);
        uVar16 = 0x112dc21a0;
        func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
        func_0x000107c60458(puVar8,uVar16);
        func_0x000107c6142c(puVar15);
      }
      func_0x000107c6142c(puVar15);
      func_0x000107c61428(puVar22,&puStack_90,0,0);
      uVar20 = *puVar22;
      if (uVar20 >> 0x3e == 0) {
        func_0x000107c61438(uVar20,2);
        func_0x000107c605f8();
        uVar19 = uVar20;
      }
      else {
        uVar19 = uVar20 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar20) {
          uVar19 = uVar20;
        }
        func_0x000107c61434(uVar20);
        uVar16 = 0x112dc21a0;
        func_0x0001000285a8(0x112dc21a0,&UNK_10d97ec18);
        func_0x000107c60458(uVar19,uVar16);
      }
      func_0x000107c6142c(uVar20);
      puStack_98 = puVar8;
      func_0x000107c61434(puVar8);
      FUN_1016dafd8(uVar19);
      func_0x000107c61574(puVar13);
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(puVar7);
      return puStack_98;
    }
    if (*(ulong *)(puVar13 + 0x10) <= uVar19) break;
    lVar18 = *(long *)(puVar13 + uVar19 * 8 + 0x20);
    uVar19 = uVar19 + 1;
    if (lVar18 != 0) {
      func_0x000107c61174();
      puVar12 = puVar15;
      func_0x000107c61550();
      if ((((int)puVar12 == 0) || ((long)puVar15 < 0)) ||
         (puVar12 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar15 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar15) {
            puVar11 = puVar15;
          }
          func_0x000107c60480(puVar11);
        }
        puVar12 = (undefined *)0x0;
        func_0x0001016dbfd8(0,puVar11 + 1,1,puVar15);
      }
      uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar17 + 0x10);
      puVar15 = puVar12;
      if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar3) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
        func_0x0001016dbfd8(puVar15,uVar3 + 1,1,puVar12);
        uVar17 = (ulong)puVar15 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar17 + 0x10) = uVar3 + 1;
      *(long *)(uVar17 + uVar3 * 8 + 0x20) = lVar18;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1016de6c4);
  (*pcVar6)();
}



/* Entry: 1016de744; end: 1016de8eb;  */

undefined * FUN_1016de744(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  func_0x000107c610f8(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
  func_0x000107c453e4();
  func_0x000107c54964();
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  func_0x000107c42fc8();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c43638();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000107fe9894();
    puVar7 = puVar3;
    func_0x000107c4b800();
    func_0x000107c61180();
    uVar5 = param_4;
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c5faec();
      uVar5 = param_4;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_4);
    }
    puVar4 = PTR_PTR_1126c6618;
    func_0x000107c61168();
    func_0x000107c45128(param_1,param_2);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    uVar6 = uVar5;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
      func_0x000107c5faec(0);
      uVar6 = uVar5;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c4b800();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    puVar7 = PTR_PTR_1126a7988;
    func_0x000107c610f8(PTR_PTR_1126a7988);
    func_0x000107c45658();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar4);
  }
  return puVar7;
}



/* Entry: 1016de8ec; end: 1016de90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016de8ec(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  
  lVar13 = param_1;
  func_0x000107c3e220();
  if ((lRam0000000112dc2218 != lVar13 && lRam0000000112dc2220 != lVar13) &&
      lRam0000000112dc2228 != lVar13) {
    puVar5 = PTR__OBJC_CLASS___PHAsset_1126bd898;
    func_0x000107c61168(PTR__OBJC_CLASS___PHAsset_1126bd898);
    func_0x000107c42fc8();
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c61170(puVar5);
    lVar13 = param_1;
    func_0x000107c4b800();
    func_0x000107c61180();
    lVar6 = lVar13;
    func_0x000107c5faec();
    lVar14 = param_2;
    func_0x000107c61170(lVar13);
    func_0x000107c4b884();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar13 = 0;
      lVar14 = 0;
    }
    else {
      lVar13 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    lVar7 = 0;
    FUN_1016d85a4();
    lVar8 = lVar7;
    func_0x000107c610f8();
    plVar9 = (long *)(lVar8 + _DAT_112dc2080);
    *plVar9 = 0;
    plVar9[1] = 0;
    lVar3 = _DAT_112dc2088;
    *(undefined8 *)(lVar8 + _DAT_112dc2088) = 0;
    lVar4 = _DAT_112dc2090;
    *(undefined8 *)(lVar8 + _DAT_112dc2090) = 0;
    plVar1 = (long *)(lVar8 + _DAT_112dc2078);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    *plVar9 = lVar13;
    plVar9[1] = lVar14;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    uVar11 = *(undefined8 *)(lVar8 + lVar3);
    *(undefined **)(lVar8 + lVar3) = puVar5;
    func_0x000107c61170(uVar11);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    uVar11 = *(undefined8 *)(lVar8 + lVar4);
    *(undefined **)(lVar8 + lVar4) = puVar5;
    func_0x000107c61170(uVar11);
    plVar9 = &lStack_70;
    lStack_70 = lVar8;
    lStack_68 = lVar7;
    func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0x21,0);
    FUN_1016dbc60();
    uVar10 = *(ulong *)(unaff_x20 + 0x10);
    uVar12 = uVar10 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar12 + 0x10);
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      func_0x0001016dbfd8(uVar10,uVar2 + 1,1);
      uVar12 = uVar10 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar12 + 0x10) = uVar2 + 1;
    *(long **)(uVar12 + uVar2 * 8 + 0x20) = plVar9;
    *(ulong *)(unaff_x20 + 0x10) = uVar10;
    func_0x000107c614a8(auStack_88);
  }
  return;
}



/* Entry: 1016de910; end: 1016de91f; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl35SCMemTwoPhotoLibraryAuthorizedState authorizedState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1016de910(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112dc2230);
}



/* Entry: 1016de920; end: 1016de92f; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl35SCMemTwoPhotoLibraryAuthorizedState setAuthorizedState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016de920(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + _DAT_112dc2230) = param_3;
  return;
}



/* Entry: 1016de930; end: 1016dea33; -[_TtC44MemoriesDirectCameraRollProviderServicesImpl35SCMemTwoPhotoLibraryAuthorizedState init] */

void FUN_1016de930(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesDirectCameraRollProviderServicesImpl.SCMemTwoPhotoLibraryAuthorizedState"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016de95c);
  (*pcVar1)();
}



/* Entry: 1016dea34; end: 1016dea63;  */

void FUN_1016dea34(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1016dea64; end: 1016dead7; -[_TtC41MemoriesNetworkingUtilitiesImplementation32MemoriesNetworkingHeaderProvider headersAddingToExistingHeaders:] */

void FUN_1016dea64(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    lVar1 = param_3;
    func_0x000107c5f9dc();
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1016dead8; end: 1016deafb;  */

void FUN_1016dead8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016deafc; end: 1016deb0b;  */

undefined1  [16] FUN_1016deafc(void)

{
  return ZEXT816(0x1103fa6a8);
}



/* Entry: 1016deb0c; end: 1016debcb;  */

void FUN_1016deb0c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1016df11c();
  lVar5 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar3;
  *(undefined8 *)(lVar5 + 0x20) = uVar2;
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  func_0x0001000285a8(0x112dc2310,&UNK_10d97edc8);
  func_0x000107c61580(uVar2,2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  pcVar6 = FUN_1016df13c;
  func_0x0001000823a8(FUN_1016df13c,uVar2);
  *(code **)(lVar5 + 0x30) = pcVar6;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_1103fa7b0;
  *param_1 = lVar5;
  return;
}



/* Entry: 1016debcc; end: 1016dec57;  */

long FUN_1016debcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001000285a8(0x112dc2310,&UNK_10d97edc8);
  func_0x000107c6157c(param_3);
  pcVar1 = FUN_1016decf8;
  func_0x0001000823a8(FUN_1016decf8,param_3);
  *(code **)(unaff_x20 + 0x30) = pcVar1;
  return unaff_x20;
}



/* Entry: 1016dec58; end: 1016decf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016dec58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_1130806b8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(auStack_48);
  func_0x000107c61574(uVar2);
  func_0x000107c4e714(auStack_48[0]);
  func_0x000107c615e8(auStack_48[0]);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1016decf8; end: 1016decff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016decf8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_1130806b8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(auStack_48);
  func_0x000107c61574(uVar2);
  func_0x000107c4e714(auStack_48[0]);
  func_0x000107c615e8(auStack_48[0]);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1016ded00; end: 1016dee4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016ded00(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c4e6e8(lStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  uVar2 = *(undefined8 *)(lStack_48 + _DAT_1130806d8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_48);
  lVar4 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c444a4(lStack_48);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_48);
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_113091b70);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_48);
  lVar4 = lStack_48;
  func_0x0001000ad7c4();
  puVar5 = PTR_PTR_1126b2670;
  func_0x000107c610f8(PTR_PTR_1126b2670);
  func_0x000107c47e90();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(lVar4);
  return puVar5;
}



/* Entry: 1016dee4c; end: 1016df007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016dee4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  puVar2 = puStack_80;
  func_0x000107c4e6e8(puStack_80);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  uVar3 = *(undefined8 *)(puStack_80 + _DAT_1130806d8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  puVar4 = puStack_80;
  func_0x000107c444a4(puStack_80);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_80);
  puVar5 = puStack_80;
  uVar9 = *(undefined8 *)(puStack_80 + _DAT_113091b70);
  func_0x000107c615f0(uVar9);
  func_0x000107c61170(puVar5);
  func_0x0001000ad7c4();
  puVar8 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1016df08c;
    puStack_68 = &UNK_1103fa788;
    lStack_60 = param_1;
    uStack_58 = param_2;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    puVar8 = (undefined1 *)ppuVar6;
  }
  puVar7 = PTR_PTR_1126b2670;
  func_0x000107c610f8(PTR_PTR_1126b2670);
  func_0x000107c45410();
  func_0x000107c60bd0(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(puVar5);
  return puVar7;
}



/* Entry: 1016df008; end: 1016df04b;  */

void FUN_1016df008(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016df04c; end: 1016df08b;  */

void FUN_1016df04c(void)

{
  FUN_1016ded00();
  return;
}



/* Entry: 1016df08c; end: 1016df0ef;  */

void FUN_1016df08c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1016df0f0; end: 1016df11b;  */

void FUN_1016df0f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1016df11c; end: 1016df13b;  */

void FUN_1016df11c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2358);
  return;
}



/* Entry: 1016df13c; end: 1016df13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016df13c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_1130806b8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(auStack_48);
  func_0x000107c61574(uVar2);
  func_0x000107c4e714(auStack_48[0]);
  func_0x000107c615e8(auStack_48[0]);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1016df140; end: 1016df18b;  */

void FUN_1016df140(undefined8 param_1)

{
  func_0x0001000285a8(0x112db0c30,&UNK_10d95acb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1016df18c,param_1);
  return;
}



/* Entry: 1016df18c; end: 1016df1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016df18c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1016df304();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112dc23d8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1016df1f4; end: 1016df23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016df1f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc23d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016df240; end: 1016df2af; -[_TtC26DuplexClientPluginProvider18DuplexClientPlugin pushToValdiMarshaller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016df240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x000107c30dd8(param_3,uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return param_3;
}



/* Entry: 1016df2b0; end: 1016df2e3;  */

void FUN_1016df2b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016df2e4; end: 1016df2f3;  */

undefined1  [16] FUN_1016df2e4(void)

{
  return ZEXT816(0x1103fa880);
}



/* Entry: 1016df2f4; end: 1016df303; -[_TtC26DuplexClientPluginProvider18DuplexClientPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016df2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc23d8));
  return;
}



/* Entry: 1016df304; end: 1016df323;  */

void FUN_1016df304(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7ce8);
  return;
}



/* Entry: 1016df324; end: 1016df377;  */

undefined8 FUN_1016df324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009a331c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1016df378; end: 1016df5eb;  */

void FUN_1016df378(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar8 = auStack_58;
  func_0x000107c61428(lVar6 + 0x10,puVar8,0,0);
  lVar1 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61574();
  func_0x000100083b20(&puStack_a8);
  puVar2 = puStack_a8;
  func_0x000107c4414c();
  func_0x000107c61180();
  func_0x000107c61170(puStack_a8);
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  func_0x000107c61180();
  func_0x000107c60bd0(puVar2);
  puVar2 = PTR_PTR_113369448;
  puVar4 = puVar3;
  func_0x000107c5faec();
  puVar9 = puVar8;
  func_0x000107c5faec();
  puVar10 = puVar8;
  if (puVar4 != puVar2 || puVar8 != puVar9) {
    func_0x000107c605b8(puVar4,puVar8,puVar2,puVar9,0);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar8);
    puVar2 = PTR_PTR_113369450;
    if (((ulong)puVar4 & 1) != 0) goto LAB_1016df4ec;
    puVar4 = puVar3;
    func_0x000107c5faec();
    puVar9 = puVar10;
    func_0x000107c5faec();
    if (puVar4 != puVar2 || puVar10 != puVar9) {
      func_0x000107c605b8(puVar4,puVar10,puVar2,puVar9,0);
      func_0x000107c6142c(puVar9);
      func_0x000107c6142c(puVar10);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000107c61170(puVar3);
        return;
      }
      goto LAB_1016df4ec;
    }
  }
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar10);
LAB_1016df4ec:
  func_0x000100083b20(&uStack_60);
  uVar5 = uStack_60;
  func_0x000107c5dbd4(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  puVar2 = &UNK_1103fa948;
  func_0x000107c613fc(&UNK_1103fa948,0x18,7);
  func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648(lVar6);
  func_0x000107c61644(puVar2 + 0x10,lVar6);
  func_0x000107c61574(lVar6);
  pcStack_88 = FUN_1016df77c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1011eaae0;
  puStack_90 = &UNK_1103faa10;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar2;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_80);
  func_0x000107c44280(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 1016df5ec; end: 1016df633;  */

void FUN_1016df5ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1016df634; end: 1016df657;  */

void FUN_1016df634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1016df658; end: 1016df717;  */

void FUN_1016df658(undefined8 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(*param_2 + 0x68);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1016df6bc;
                    /* WARNING: Could not recover jumptable at 0x0001016df6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x20);
  return;
}



/* Entry: 1016df718; end: 1016df71f;  */

void FUN_1016df718(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001016df71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016df720; end: 1016df74f;  */

void FUN_1016df720(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001016df74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016df750; end: 1016df77b;  */

undefined ** FUN_1016df750(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 1016df77c; end: 1016df90f;  */

/* WARNING: Removing unreachable block (ram,0x0001016df824) */

void FUN_1016df77c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_70 [32];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61574();
    if (param_1 == 0) {
      lStack_50 = 0;
      uStack_48 = 0xe000000000000000;
      func_0x000107c602fc(0x34);
      func_0x000107c5fb78(0xd00000000000001b,0x800000010efb7d90);
      func_0x000107c5fb78(0xd000000000000032,0x800000010efb7db0);
      func_0x000107c6142c(uStack_48);
    }
    else {
      lVar1 = param_1;
      func_0x000107c615f0();
      func_0x000107c614f0();
      lStack_50 = param_1;
      lStack_38 = lVar1;
      FUN_1016dfbd0(0);
      func_0x000107c613fc();
      func_0x000107c615f0(param_1);
      plVar2 = &lStack_50;
      FUN_1016df9e8();
      plVar3 = plVar2;
      (**(code **)(*plVar2 + 0x60))();
      func_0x000107c61574(plVar2);
      func_0x000107c6157c(plVar3);
      uVar4 = 0x12;
      func_0x0001001ca524(0x12,0,0x28,0,0,0,&UNK_10d97eff8,plVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61578(plVar3,2);
      func_0x000107c61574(uVar4);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 1016df910; end: 1016df993;  */

void FUN_1016df910(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long *unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1016df958;
  piVar4 = *(int **)(*unaff_x20 + 0x68);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  plVar3[2] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = 0x1016df6bc;
                    /* WARNING: Could not recover jumptable at 0x0001016df6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar2,plVar3 + 4);
  return;
}



/* Entry: 1016df994; end: 1016df99b;  */

void FUN_1016df994(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1016df99c; end: 1016df9e7;  */

undefined8 FUN_1016df99c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1016df9e8(param_1);
  return unaff_x20;
}



/* Entry: 1016df9e8; end: 1016dfbcf;  */

void FUN_1016df9e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  long *plVar5;
  long unaff_x21;
  undefined8 uVar6;
  undefined1 auStack_80 [32];
  undefined8 uStack_58;
  
  uVar6 = *unaff_x20;
  func_0x0001000bb420(param_1,auStack_80);
  uVar2 = 0x112d3c270;
  func_0x0001000285a8(0x112d3c270,&UNK_10d9052f0);
  puVar3 = &uStack_58;
  func_0x000107c6147c(puVar3,auStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,puVar3,0,0);
    *puVar3 = 0xd000000000000029;
    puVar3[1] = 0x800000010ef13740;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    func_0x000107c61654();
  }
  else {
    puVar3 = (undefined8 *)0x0;
    func_0x000103c30860(0,uVar6,&PTR_DAT_1103faad8);
    func_0x000103c31f74();
    plVar5 = (long *)*puVar3;
    func_0x000107c61428(0x112dc24e0,auStack_80,0,0);
    puVar1 = PTR_DAT_112dc24e8;
    uVar2 = uRam0000000112dc24e0;
    FUN_1016dfbd0();
    func_0x000107c6157c(plVar5);
    puVar4 = puVar1;
    func_0x000107c61434(puVar1);
    FUN_1016dfd50();
    (**(code **)(*plVar5 + 0xa0))(uVar2,puVar1,puVar4);
    func_0x000107c61574(plVar5);
    func_0x000107c6142c(puVar1);
    func_0x000107c61574(puVar4);
    uVar2 = uStack_58;
    func_0x000103c30864(uStack_58,uVar6,&PTR_DAT_1103faad8);
    if (unaff_x21 == 0) {
      func_0x000100183ab8(param_1);
      func_0x000107c615e8(uStack_58);
      unaff_x20[2] = FUN_1016dfe40;
      unaff_x20[3] = uVar2;
      return;
    }
    func_0x000107c615e8(uStack_58);
  }
  func_0x000100183ab8(param_1);
  FUN_1016dfbd0();
  func_0x000107c61464();
  return;
}



/* Entry: 1016dfbd0; end: 1016dfbef;  */

void FUN_1016dfbd0(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2530);
  return;
}



/* Entry: 1016dfbf0; end: 1016dfc0b;  */

undefined1  [16] FUN_1016dfbf0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb7df0;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 1016dfc0c; end: 1016dfc2b;  */

void FUN_1016dfc0c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1016dfc2c; end: 1016dfd4f;  */

/* WARNING: Removing unreachable block (ram,0x0001016dfccc) */

long * FUN_1016dfc2c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*param_1 + 0x70))();
  if (((ulong)plVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0xa0))();
    if (unaff_x21 == 0) {
      func_0x000100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar2,0,0);
      plVar2[1] = -0x16ffffffffffff95;
      *plVar2 = 0x636f6c426c6c6163;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined1 *)(plVar2 + 4) = 1;
      func_0x000107c61654();
    }
  }
  else {
    plVar2 = (long *)0xffffffffffffffff;
    (**(code **)(*plVar1 + 0x1c0))(0xffffffffffffffff,&UNK_1103fabc0);
    if (unaff_x21 == 0) {
      (**(code **)(*plVar1 + 0xa0))();
      func_0x000107c61574(plVar1);
      return plVar2;
    }
  }
  func_0x000107c61574(plVar1);
  return param_1;
}



/* Entry: 1016dfd50; end: 1016dfe3f;  */

void FUN_1016dfd50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100e779e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000103c31bb8(0);
  func_0x0001016dfef0();
  uVar1 = 0xd000000000000012;
  func_0x000103c31710(0xd000000000000012,0x800000010efb7e20,0x723c70203a292866,0xef3e275d305b273a);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = 0x112d3c7e8;
  func_0x0001000285a8(0x112d3c7e8,&UNK_10d9093f0);
  func_0x000107c61538();
  uVar2 = 0;
  func_0x000103c31b98(0);
  func_0x0001016dfef0();
  func_0x000103c31164(param_1,uVar1,2,uVar2);
  return;
}



/* Entry: 1016dfe40; end: 1016dfe7b;  */

void FUN_1016dfe40(void)

{
  FUN_1016dfc2c();
  return;
}



/* Entry: 1016dfe7c; end: 1016dfecb;  */

undefined1  [16] FUN_1016dfe7c(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dc24e0,auStack_38,0,0);
  auVar1._8_8_ = PTR_DAT_112dc24e8;
  auVar1._0_8_ = uRam0000000112dc24e0;
  func_0x000107c61434(PTR_DAT_112dc24e8);
  return auVar1;
}



/* Entry: 1016dfecc; end: 1016dfee7;  */

undefined8 FUN_1016dfecc(void)

{
  FUN_1016dfbf0();
  return 0xd000000000000026;
}


