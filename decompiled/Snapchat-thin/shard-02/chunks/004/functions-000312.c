/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d5c934; end: 101d5cb5f;  */

undefined8 **** FUN_101d5c934(ulong param_1)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 ***pppuStack_68;
  
  func_0x0001000285a8(0x112e29370,&UNK_10da117d8);
  pppuStack_68 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  ppppuVar3 = &pppuStack_68;
  func_0x000104888f7c(ppppuVar3);
  uVar10 = param_1;
  func_0x000107c43e48();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101d5e154(0,0x112e28b18,&PTR_PTR_1126dea20);
  uVar5 = uVar10;
  func_0x000107c5fc54(uVar10,uVar4);
  func_0x000107c61170(uVar10);
  if (uVar5 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar10 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5cb60);
      (*pcVar2)();
    }
    uVar11 = 0;
    ppppuVar9 = ppppuVar3;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(uVar5 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar11;
        FUN_101d5d32c(uVar11,uVar5,&PTR_PTR_1126dea20,0x112e28b18);
      }
      uVar11 = uVar11 + 1;
      func_0x0001000d224c(&pppuStack_68);
      pppuVar1 = pppuStack_68;
      puVar6 = &UNK_11047d210;
      func_0x000107c613fc(&UNK_11047d210,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,unaff_x20);
      puVar7 = &UNK_11047d238;
      func_0x000107c613fc(&UNK_11047d238,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(ulong *)(puVar7 + 0x18) = param_1;
      *(ulong *)(puVar7 + 0x20) = uVar8;
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar8);
      uVar4 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      ppppuVar3 = (undefined8 ****)pppuVar1;
      func_0x0001048898b8(pppuVar1,1,FUN_101d5d4e8,puVar7,uVar4);
      func_0x000107c61574(ppppuVar9);
      func_0x000107c61170(pppuVar1);
      func_0x000107c61574(puVar7);
      func_0x000107c61170(uVar8);
      ppppuVar9 = ppppuVar3;
    } while (uVar10 != uVar11);
  }
  func_0x000107c6142c(uVar5);
  return ppppuVar3;
}



/* Entry: 101d5cb60; end: 101d5cd6b;  */

undefined8 FUN_101d5cb60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(auStack_80);
    func_0x000107c61574(uVar5);
    func_0x0001000a8868(auStack_80,uStack_68);
    FUN_101d570a8(param_3,param_4);
    func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) {
      uStack_a0 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      func_0x000107c6157c(uVar5);
      func_0x000107c61574(param_2);
      func_0x0001000d224c(&uStack_a0);
      func_0x000107c61574(uVar5);
    }
    uVar2 = uStack_a0;
    func_0x000100775264(uStack_a0,1,FUN_101d5cd6c,0,PTR___sSSN_11034da80);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uStack_a0);
    func_0x0001000834e4(auStack_80);
    puVar3 = &UNK_11047d260;
    func_0x000107c613fc(&UNK_11047d260,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    func_0x000107c61434(uVar6);
    uVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = 0;
    func_0x000100775264(0,1,0x101d5d504,puVar3,uVar5);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_11047d288;
    func_0x000107c613fc(&UNK_11047d288,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    func_0x000107c61434(uVar6);
    uVar6 = 0;
    func_0x000104889f74(0,1,FUN_101d5d51c,puVar3);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(puVar3);
  }
  return uVar6;
}



/* Entry: 101d5cd6c; end: 101d5ce27;  */

void FUN_101d5cd6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined1 *)*param_2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101d5d56c();
    func_0x000107c613f8(&UNK_11047d350,puVar1,0,0);
    *puVar1 = 7;
    func_0x000107c61654();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar1);
    uVar3 = 0;
    puVar1 = puVar2;
    func_0x000107c5ee24(0,puVar2,param_3);
    func_0x00010006c090(puVar2,param_3);
    *param_1 = uVar3;
    param_1[1] = puVar1;
  }
  return;
}



/* Entry: 101d5ce28; end: 101d5cee7;  */

void FUN_101d5ce28(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x000107c61434(param_3);
  func_0x000107c61434(uVar3);
  uVar4 = param_3;
  func_0x000107c61558();
  uVar5 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    func_0x0001000d182c(0,*(long *)(param_3 + 0x10) + 1,1,param_3);
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x0001000d182c(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  lVar1 = uVar6 + uVar4 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  *param_1 = uVar6;
  return;
}



/* Entry: 101d5cee8; end: 101d5cfe3;  */

undefined8 FUN_101d5cee8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112dc93f8,&UNK_10da11830);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11047d2b0;
  func_0x000107c613fc(&UNK_11047d2b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(long *)(puVar2 + 0x18) = lVar1;
  uVar3 = 0;
  FUN_101d5e154(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar1);
  func_0x00010090569c(FUN_101d5e14c,puVar2,uVar3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 101d5cfe4; end: 101d5d04b;  */

void FUN_101d5cfe4(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000107c43c78();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c307a0();
  func_0x000107c615e8(param_1);
  func_0x0001000285a8(0x112e293d8,&UNK_10da11828);
  lStack_28 = (long)(int)uVar1;
  func_0x000104888f7c(&lStack_28);
  return;
}



/* Entry: 101d5d04c; end: 101d5d06b;  */

void FUN_101d5d04c(void)

{
  func_0x000107c61168(&PTR_PTR_112e292e0);
  return;
}



/* Entry: 101d5d06c; end: 101d5d193;  */

ulong FUN_101d5d06c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5d194);
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
  FUN_101d5d194(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5d190);
      (*pcVar1)();
    }
    FUN_101d5d214(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101d5d194; end: 101d5d213;  */

undefined * FUN_101d5d194(undefined *param_1,undefined *param_2)

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
    func_0x000101d617f4();
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



/* Entry: 101d5d214; end: 101d5d32b;  */

long FUN_101d5d214(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d5d328);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101d5d32c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101d5e154(0,0x112e28d98,&PTR_PTR_1126e0dc8);
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
      FUN_101d5e154(0,0x112e28d98,&PTR_PTR_1126e0dc8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101d5d324);
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



/* Entry: 101d5d32c; end: 101d5d4e7;  */

ulong FUN_101d5d32c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5d410);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5d414);
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
  FUN_101d5e154(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5d4e8);
  (*pcVar2)();
}



/* Entry: 101d5d4e8; end: 101d5d51b;  */

void FUN_101d5d4e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d5cb60(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d5d51c; end: 101d5d56b;  */

void FUN_101d5d51c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112e29370,&UNK_10da117d8);
  uStack_28 = uVar1;
  func_0x000104888f7c(&uStack_28);
  return;
}



/* Entry: 101d5d56c; end: 101d5d5ab;  */

void FUN_101d5d56c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da11910;
  func_0x000107c61520(&UNK_10da11910,&UNK_11047d350);
  puRam0000000112e29378 = puVar1;
  return;
}



/* Entry: 101d5d5ac; end: 101d5d76f;  */

ulong FUN_101d5d5ac(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5d690);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5d694);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126e0dc8;
    func_0x000107c61168(PTR_PTR_1126e0dc8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126e0dc8;
    func_0x000107c61168(PTR_PTR_1126e0dc8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d5e154(0,0x112e28d98,&PTR_PTR_1126e0dc8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5d770);
  (*pcVar2)();
}



/* Entry: 101d5d770; end: 101d5db4b;  */

undefined8 **** FUN_101d5d770(long param_1,undefined8 param_2)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 ***pppuStack_98;
  long lStack_90;
  undefined8 **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  lVar3 = param_1;
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x0001000d224c(&ppuStack_88);
    func_0x0001000a8868(&ppuStack_88,uStack_70);
    func_0x000107c43c78(param_1);
    func_0x000107c61180();
    uVar6 = 0;
    func_0x000101d54004(0);
    lVar3 = param_1;
    FUN_101d545cc(param_1,uVar6,&PTR_DAT_11047c228);
    func_0x000107c615e8(param_1);
    func_0x0001000d224c(&pppuStack_98);
    uVar6 = 0x112e293c0;
    func_0x0001000285a8(0x112e293c0,&UNK_10da11810);
    ppppuVar7 = (undefined8 ****)pppuStack_98;
    func_0x000100775264(pppuStack_98,1,FUN_101d5c014,0,uVar6);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(pppuStack_98);
    func_0x0001000834e4(&ppuStack_88);
  }
  else {
    lVar4 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&ppuStack_88);
    uVar6 = uStack_80;
    ppuVar1 = ppuStack_88;
    pppuVar5 = (undefined8 ***)ppuStack_88;
    func_0x000107c614f0(ppuStack_88);
    lVar3 = lVar4;
    uVar10 = param_2;
    func_0x000103fbfb2c(lVar4,param_2,pppuVar5,uVar6);
    func_0x000107c615e8(ppuVar1);
    if (((uint)uVar10 & 0xff) == 1) {
      pppuStack_98 = (undefined8 ***)CONCAT71(pppuStack_98._1_7_,(char)lVar3);
      uVar6 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar6 != 0) {
        FUN_101d58f10();
        func_0x000107c61658(&pppuStack_98,&UNK_11072c980,uVar6);
      }
      func_0x0001000285a8(0x112e293c8,&UNK_10da11818);
      ppuStack_88 = (undefined8 ***)0x0;
      ppppuVar7 = (undefined8 ****)&ppuStack_88;
      func_0x000104888f7c(ppppuVar7);
    }
    else {
      func_0x0001000d224c(&pppuStack_98);
      ppppuVar7 = (undefined8 ****)pppuStack_98;
      func_0x000107c614f0(pppuStack_98);
      (**(code **)(lStack_90 + 8))(&ppuStack_88,lVar3,ppppuVar7,lStack_90);
      func_0x000107c615e8(pppuStack_98);
      if (cStack_68 != '\x04') {
        pppuVar5 = (undefined8 ***)PTR_PTR_1126d83e8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar6 = 0;
        pppuVar8 = (undefined8 ***)ppuStack_88;
        func_0x000107c5ee24(0,ppuStack_88,uStack_80);
        func_0x000107c5fadc();
        func_0x000107c6142c(pppuVar8);
        pppuVar8 = pppuVar5;
        func_0x000107c54580();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar5);
        func_0x000107c61170(uVar6);
        if (pppuVar8 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5db40);
          (*pcVar2)();
        }
        uVar9 = 0;
        uVar6 = uStack_78;
        func_0x000107c5ee24(0,uStack_78,uStack_70);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar6);
        pppuVar5 = pppuVar8;
        func_0x000107c5457c();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar8);
        func_0x000107c61170(uVar9);
        if (pppuVar5 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5db44);
          (*pcVar2)();
        }
        pppuVar8 = pppuVar5;
        func_0x000107c54568();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar5);
        if (pppuVar8 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5db48);
          (*pcVar2)();
        }
        pppuVar5 = pppuVar8;
        func_0x000107c3ecc8();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar8);
        if (pppuVar5 != (undefined8 ***)0x0) {
          func_0x0001000285a8(0x112e293c8,&UNK_10da11818);
          ppppuVar7 = &pppuStack_98;
          pppuStack_98 = pppuVar5;
          func_0x000104888f7c(ppppuVar7);
          func_0x00010006c090(lVar4,param_2);
          func_0x000101d58f7c(lVar3,uVar10);
          FUN_101d5e10c(&ppuStack_88,0x112e293d0,&UNK_10da11820);
          func_0x000107c61170(pppuVar5);
          return ppppuVar7;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5db4c);
        (*pcVar2)();
      }
      func_0x0001000285a8(0x112e293c8,&UNK_10da11818);
      pppuStack_98 = (undefined8 ***)0x0;
      ppppuVar7 = &pppuStack_98;
      func_0x000104888f7c(ppppuVar7);
      func_0x000101d58f7c(lVar3,uVar10);
    }
    func_0x00010006c090(lVar4,param_2);
  }
  return ppppuVar7;
}



/* Entry: 101d5db4c; end: 101d5dd17;  */

undefined ** FUN_101d5db4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126d83f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = param_1;
  func_0x000107c43c78(param_1);
  func_0x000107c61180();
  func_0x000107c5b634();
  func_0x000107c615e8(lVar2);
  func_0x000107c5a0fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar2 = param_1;
  func_0x000107c3f1c8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x000107c53080(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
  }
  lVar2 = param_1;
  func_0x000107c3e398();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x000107c529d8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
  }
  lVar2 = param_1;
  func_0x000107c42c98();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x000107c547f8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c51700();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar3 = puVar1;
    func_0x000107c58be8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
  }
  puVar3 = puVar1;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x0001000285a8(0x112e293a8,&UNK_10da117f8);
  ppuVar4 = &puStack_38;
  puStack_38 = puVar3;
  func_0x000104888f7c(ppuVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  return ppuVar4;
}



/* Entry: 101d5dd18; end: 101d5df0b;  */

void FUN_101d5dd18(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  func_0x000107c4e150();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar8 = param_1;
    func_0x000107c5bddc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar8 != 0) {
      uVar3 = 0;
      FUN_101d5e154(0,0x112e293a0,&PTR_PTR_1126e0e80);
      uVar4 = uVar8;
      func_0x000107c5fc54(uVar8,uVar3);
      func_0x000107c61170(uVar8);
      if (uVar4 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar4 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar4) {
          uVar8 = uVar4;
        }
        func_0x000107c60480();
      }
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5dea8);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar4 + uVar9 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar5 = uVar9;
            FUN_101d5d32c(uVar9,uVar4,&PTR_PTR_1126e0e80,0x112e293a0);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5dea4);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c5d0f4();
          if (uVar6 == 0xffffffffea1fba4f) {
            func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
            uStack_62 = 1;
            func_0x000104888f7c(&uStack_62);
            func_0x000107c6142c(uVar4);
            func_0x000107c61170(uVar5);
            return;
          }
          func_0x000107c61170(uVar5);
          uVar9 = uVar9 + 1;
        } while (uVar1 != uVar8);
      }
      func_0x000107c6142c(uVar4);
      func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
      uStack_63 = 0;
      puVar7 = &uStack_63;
      goto LAB_101d5dee8;
    }
  }
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  uStack_61 = 0;
  puVar7 = &uStack_61;
LAB_101d5dee8:
  func_0x000104888f7c(puVar7);
  return;
}



/* Entry: 101d5df0c; end: 101d5df7f;  */

void FUN_101d5df0c(ulong param_1)

{
  ulong uVar1;
  ulong uStack_28;
  
  func_0x000107c43c78();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4e080();
  func_0x000107c615e8(param_1);
  uStack_28 = uVar1 & 0xffffffff;
  if (3 < (uint)uVar1) {
    uStack_28 = 0xffffffffffffd8f1;
  }
  func_0x0001000285a8(0x112e29380,&UNK_10da117e0);
  func_0x000104888f7c(&uStack_28);
  return;
}



/* Entry: 101d5df80; end: 101d5e0f3;  */

void FUN_101d5df80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000107c41904();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar5 = lVar1;
    func_0x000107c5faec();
    uVar3 = param_2;
    func_0x000107c61170(lVar1);
    func_0x000107c418e4();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      lVar1 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 4;
      *(undefined8 *)(lVar1 + 0x10) = 2;
      *(long *)(lVar1 + 0x20) = lVar5;
      *(undefined8 *)(lVar1 + 0x28) = param_2;
      *(long *)(lVar1 + 0x30) = lVar2;
      *(undefined8 *)(lVar1 + 0x38) = uVar3;
      uVar3 = 0x112d38270;
      lStack_50 = lVar1;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar3;
      func_0x00010011d734();
      lVar5 = 0x20;
      uVar6 = 0xe100000000000000;
      func_0x000107c5fa80(0x20,0xe100000000000000,uVar3,uVar4);
      func_0x000107c61574(lVar1);
      func_0x0001000285a8(0x112e29388,&UNK_10da117e8);
      lStack_50 = lVar5;
      uStack_48 = uVar6;
      func_0x000104888f7c(&lStack_50);
      func_0x000107c6142c(uVar6);
      return;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x0001000285a8(0x112e29388,&UNK_10da117e8);
  uStack_48 = 0xe000000000000000;
  lStack_50 = 0;
  func_0x000104888f7c(&lStack_50);
  return;
}



/* Entry: 101d5e0f4; end: 101d5e10b;  */

undefined8 * FUN_101d5e0f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101d5e10c; end: 101d5e14b;  */

undefined8 FUN_101d5e10c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101d5e14c; end: 101d5e153;  */

/* WARNING: Possible PIC construction at 0x000101d5c494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5c6d0) */
/* WARNING: Removing unreachable block (ram,0x000101d5c71c) */
/* WARNING: Removing unreachable block (ram,0x000101d5c734) */
/* WARNING: Removing unreachable block (ram,0x000101d5c6c0) */
/* WARNING: Removing unreachable block (ram,0x000101d5c684) */
/* WARNING: Removing unreachable block (ram,0x000101d5c708) */
/* WARNING: Removing unreachable block (ram,0x000101d5c554) */
/* WARNING: Removing unreachable block (ram,0x000101d5c6d4) */
/* WARNING: Removing unreachable block (ram,0x000101d5c570) */
/* WARNING: Removing unreachable block (ram,0x000101d5c714) */
/* WARNING: Removing unreachable block (ram,0x000101d5c530) */
/* WARNING: Removing unreachable block (ram,0x000101d5c670) */
/* WARNING: Removing unreachable block (ram,0x000101d5c53c) */
/* WARNING: Removing unreachable block (ram,0x000101d5c4d8) */
/* WARNING: Removing unreachable block (ram,0x000101d5c5fc) */
/* WARNING: Removing unreachable block (ram,0x000101d5c4dc) */
/* WARNING: Removing unreachable block (ram,0x000101d5c498) */
/* WARNING: Removing unreachable block (ram,0x000101d5c638) */
/* WARNING: Removing unreachable block (ram,0x000101d5c650) */

void FUN_101d5e14c(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long alStack_d8 [13];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e150();
  func_0x000107c61180();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c5caf8();
    func_0x000107c61180();
    func_0x000107c5f9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  FUN_101d5d56c();
  puVar3 = &UNK_11047d350;
  uVar6 = 0;
  func_0x000107c613f8(&UNK_11047d350,puVar2,0,0);
  *puVar2 = 1;
  puVar4 = puVar3;
  func_0x00010488ade0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x28) = unaff_x24;
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x30) = unaff_x23;
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x38) = unaff_x22;
  *(undefined1 **)((long)alStack_d8 + lVar1 + 0x40) = auStack_70 + lVar1;
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x48) = uVar5;
  *(undefined **)((long)alStack_d8 + lVar1 + 0x50) = puVar3;
  *(undefined1 **)((long)alStack_d8 + lVar1 + 0x58) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_d8 + lVar1 + 0x60) = FUN_101d5c754;
  func_0x000107c43c78();
  func_0x000107c61180();
  puVar3 = puVar4;
  func_0x000107c44950();
  func_0x000107c615e8(puVar4);
  if ((int)puVar3 == 0) {
    func_0x0001000285a8(0x112e29390,&UNK_10da117f0);
    *(undefined8 *)((long)alStack_d8 + lVar1) = 0;
    func_0x000104888f7c((long)alStack_d8 + lVar1);
  }
  else {
    func_0x0001000d224c((long)alStack_d8 + lVar1);
    func_0x0001000a8868((long)alStack_d8 + lVar1,*(undefined8 *)((long)alStack_d8 + lVar1 + 0x18));
    uVar5 = 0;
    func_0x000101d54004(0);
    (*(code *)(undefined *)0x101d54684)(puVar2,uVar6,uVar5,&PTR_DAT_11047c228);
    uVar5 = 0x112e29398;
    func_0x0001000285a8(0x112e29398,&UNK_10da11a10);
    func_0x000100775264(0,1,FUN_101d5c868,0,uVar5);
    func_0x000107c61574(puVar2);
    func_0x0001000834e4((long)alStack_d8 + lVar1);
  }
  return;
}



/* Entry: 101d5e154; end: 101d5e193;  */

void FUN_101d5e154(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d5e194; end: 101d5e1a7;  */

bool FUN_101d5e194(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d5e1a8; end: 101d5e253;  */

void FUN_101d5e1a8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d5e254; end: 101d5e3f3;  */

void FUN_101d5e254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d5e3f4; end: 101d5e49f;  */

void FUN_101d5e3f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da118e8;
  func_0x000107c61520(&UNK_10da118e8,&UNK_11047d350);
  puRam0000000112e29408 = puVar1;
  return;
}



/* Entry: 101d5e4a0; end: 101d5e5e7;  */

undefined8 FUN_101d5e4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar5 = param_1;
  FUN_101d5eb20(param_1,param_3);
  func_0x0001000d224c(&uStack_48);
  puVar1 = &UNK_11047d408;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d430;
  func_0x000107c613fc(&UNK_11047d430,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uVar3 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar4 = uStack_48;
  func_0x0001048898b8(uStack_48,1,FUN_101d5f1b8,puVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar2);
  uVar5 = 0;
  FUN_101d62f80(0,0x112e294e0,&PTR_PTR_1126e0d58);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_101d5f29c,0,uVar5);
  func_0x000107c61574(uVar4);
  return uVar3;
}



/* Entry: 101d5e5e8; end: 101d5e6ef;  */

void FUN_101d5e5e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  puVar2 = PTR_PTR_1126d8548;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = uVar5;
  func_0x000107c5b2d0(uVar5);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c593e4(puVar2,param_3,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5e6e4);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c57044(puVar4,param_3,5);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5e6e8);
    (*pcVar1)();
  }
  puVar4 = puVar2;
  func_0x000107c59320(puVar2,param_3,uVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5e6ec);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5e6f0);
  (*pcVar1)();
}



/* Entry: 101d5e6f0; end: 101d5eab7;  */

undefined * FUN_101d5e6f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long alStack_88 [5];
  
  lVar3 = 0;
  uStack_98 = param_4;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12;
  func_0x0001000d224c(alStack_88);
  uStack_90 = param_3;
  if (alStack_88[0] != 0) {
    uVar4 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    lVar5 = alStack_88[0];
    func_0x000107c431c0();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_88[0]);
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c40bd8();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        func_0x000107c5ee94(lVar13,lVar6);
        func_0x000107c61170(lVar6);
      }
      (**(code **)(lVar11 + 0x38))(lVar13,lVar6 == 0,1,lVar3);
      func_0x0001009f0578(lVar13,lVar14);
      lVar5 = lVar14;
      (**(code **)(lVar11 + 0x30))(lVar14,1,lVar3);
      if ((int)lVar5 == 1) {
        func_0x0001000d1dcc(lVar13);
      }
      else {
        (**(code **)(lVar11 + 0x20))(puVar12,lVar14,lVar3);
        func_0x0001000d224c(alStack_88);
        func_0x000107c5ee8c();
        dVar15 = (double)(long)param_1;
        bVar2 = false;
        if ((-9.223372036854778e+18 < dVar15) && (bVar2 = false, !NAN(dVar15))) {
          bVar2 = dVar15 < 9.223372036854776e+18;
        }
        (**(code **)(lVar11 + 8))(puVar12,lVar3);
        func_0x0001000d1dcc(lVar13);
        func_0x0001000834e4(alStack_88);
        if (bVar2 && SUB168(SEXT816((long)dVar15) * SEXT816(1000),8) == (long)dVar15 * 1000 >> 0x3f)
        {
          puVar10 = PTR_PTR_1126d83e0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar7 = puVar10;
          func_0x000107c53a90();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eab8);
            (*pcVar1)();
          }
          puVar10 = puVar7;
          func_0x000107c3ecc8(puVar7);
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          goto LAB_101d5e978;
        }
      }
    }
  }
  puVar10 = (undefined *)0x0;
LAB_101d5e978:
  puVar7 = PTR_PTR_1126d8548;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,uStack_90);
  puVar8 = puVar7;
  func_0x000107c593e4();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eaa4);
    (*pcVar1)();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  puVar9 = puVar8;
  func_0x000107c57094();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eaa8);
    (*pcVar1)();
  }
  puVar7 = puVar9;
  func_0x000107c57044();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eaac);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c59320();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eab0);
    (*pcVar1)();
  }
  puVar7 = puVar8;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eab4);
    (*pcVar1)();
  }
  func_0x000107c61170(puVar10);
  return puVar7;
}



/* Entry: 101d5eab8; end: 101d5eb1f;  */

undefined8 FUN_101d5eab8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_101d5e4a0();
  uVar1 = 0;
  FUN_101d62f80(0,0x112e28d98,&PTR_PTR_1126e0dc8);
  uVar2 = 0;
  func_0x000100775264(0,1,FUN_101d5e5e8,0,uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 101d5eb20; end: 101d5eeeb;  */

long FUN_101d5eb20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1;
  uVar9 = param_2;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar3 = (undefined1 *)0x112e28f20;
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    FUN_101d5f2dc();
    plVar4 = (long *)&UNK_11047db60;
    func_0x000107c613f8(&UNK_11047db60,puVar3,0,0);
    *puVar3 = 1;
    plVar5 = plVar4;
    func_0x00010488904c();
    func_0x000107c614ac(plVar4);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    plVar5 = &lStack_70;
    lStack_70 = lVar2;
    uStack_68 = uVar9;
    func_0x000104888f7c(plVar5);
    func_0x000107c6142c(uVar9);
  }
  uVar9 = 0x112e29520;
  func_0x0001000285a8(0x112e29520,&UNK_10da11a20);
  uVar6 = 0;
  func_0x000100775264(0,1,FUN_101d5f31c,0,uVar9);
  func_0x000107c61574(plVar5);
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  puVar11 = &UNK_11047d408;
  puVar7 = puVar11;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = &UNK_11047d9d0;
  func_0x000107c613fc(&UNK_11047d9d0,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = param_1;
  puVar7 = &UNK_11047d9f8;
  func_0x000107c613fc(&UNK_11047d9f8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101d62e60;
  *(undefined **)(puVar7 + 0x18) = puVar8;
  func_0x000107c61174();
  uVar9 = 0x112e29528;
  func_0x0001000285a8(0x112e29528,&UNK_10da11a28);
  lVar2 = lVar1;
  func_0x0001048898b8(lVar1,1,FUN_101d62e68,puVar7,uVar9);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(puVar7);
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  puVar8 = puVar11;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  uVar9 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  lVar10 = lVar1;
  func_0x0001048898b8(lVar1,1,FUN_101d62e9c,puVar8,uVar9);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(puVar8);
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  puVar7 = puVar11;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar8 = &UNK_11047da20;
  func_0x000107c613fc(&UNK_11047da20,0x20,7);
  *(undefined **)(puVar8 + 0x10) = puVar7;
  *(long *)(puVar8 + 0x18) = param_1;
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x0001048898b8(lVar1,1,0x101d62ee0,puVar8,uVar9);
  func_0x000107c61574(lVar10);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(puVar8);
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar11 + 0x10);
  puVar8 = &UNK_11047da48;
  func_0x000107c613fc(&UNK_11047da48,0x28,7);
  *(undefined **)(puVar8 + 0x10) = puVar11;
  *(long *)(puVar8 + 0x18) = param_1;
  *(undefined8 *)(puVar8 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  lVar10 = lVar1;
  func_0x0001048898b8(lVar1,1,0x101d62f18,puVar8,uVar9);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(puVar8);
  return lVar10;
}



/* Entry: 101d5eeec; end: 101d5f1b7;  */

undefined * FUN_101d5eeec(undefined8 *param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  ppuVar6 = &puStack_70;
  puVar9 = (undefined *)*param_1;
  uVar1 = param_2;
  uVar7 = param_2;
  func_0x000107c42370();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar1 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61648();
      if (param_3 == 0) {
        func_0x000107c6142c(uVar7);
        return (undefined *)0x0;
      }
      func_0x0001000d224c(&puStack_70);
      if (puStack_70 == (undefined *)0x0) {
        puVar5 = (undefined1 *)0x112e294e8;
        func_0x0001000285a8(0x112e294e8,&UNK_10da119d8);
        FUN_101d5f2dc();
        puVar9 = &UNK_11047db60;
        func_0x000107c613f8(&UNK_11047db60,puVar5,0,0);
        *puVar5 = 0;
        ppuVar6 = (undefined **)puVar9;
        func_0x00010488904c();
        func_0x000107c614ac(puVar9);
      }
      else {
        func_0x000107c615e8();
        uVar8 = uVar7;
        func_0x000107c5fadc(uVar2,uVar7);
        puVar3 = puVar9;
        func_0x000107c59520(puVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(puVar3);
        uVar1 = param_2;
        func_0x000107c43c78(param_2);
        func_0x000107c61180();
        uVar2 = uVar1;
        func_0x000107c4cab0();
        func_0x000107c61180();
        func_0x000107c615e8(uVar1);
        puVar3 = puVar9;
        func_0x000107c564c4(puVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c5b1b0();
        func_0x000107c61180();
        if (param_2 != 0) {
          uVar1 = param_2;
          func_0x000107c5ee30();
          func_0x000107c61170(param_2);
          uVar4 = 0;
          uVar2 = uVar1;
          func_0x000107c5ee24(0,uVar1,uVar8);
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar2);
          puVar3 = puVar9;
          func_0x000107c59388(puVar9);
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(puVar3);
          func_0x00010006c090(uVar1,uVar8);
        }
        func_0x0001000285a8(0x112e294e8,&UNK_10da119d8);
        puStack_70 = puVar9;
        func_0x000104888f7c(&puStack_70);
      }
      func_0x000107c6142c(uVar7);
      puVar9 = (undefined *)ppuVar6;
      goto LAB_101d5f190;
    }
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return (undefined *)0x0;
  }
  FUN_101d5f1d4(puVar9,param_2,param_4);
LAB_101d5f190:
  func_0x000107c61574(param_3);
  return puVar9;
}



/* Entry: 101d5f1b8; end: 101d5f1d3;  */

void FUN_101d5f1b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d5eeec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d5f1d4; end: 101d5f29b;  */

undefined8 FUN_101d5f1d4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_2;
  uVar10 = param_2;
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar11 = 0;
    uVar10 = 0xf000000000000000;
  }
  else {
    uVar11 = uVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar1);
    if (uVar10 >> 0x3c < 0xf) {
      func_0x0001000b44c0(uVar11,uVar10);
      func_0x0001000b44c0(0,0xf000000000000000);
      func_0x0001000d224c(auStack_88);
      puVar6 = auStack_88;
      func_0x0001000a8868(puVar6,uStack_70);
      uVar12 = *puVar6;
      func_0x0001000d224c(auStack_b0);
      func_0x0001000a8868(auStack_b0,uStack_98);
      uVar7 = 0;
      func_0x000101d5bb68(0);
      uVar1 = param_2;
      FUN_101d5bc98(param_2,uVar7,&PTR_DAT_11047d0c0);
      puVar5 = &UNK_11047d688;
      func_0x000107c613fc(&UNK_11047d688,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,uVar12);
      puVar3 = &UNK_11047d890;
      func_0x000107c613fc(&UNK_11047d890,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar5;
      *(ulong *)(puVar3 + 0x18) = param_2;
      func_0x000107c61174();
      uVar7 = 0x112e28f40;
      func_0x0001000285a8(0x112e28f40,&UNK_10da11340);
      uVar12 = 0;
      func_0x0001048898b8(0,1,0x101d62d78,puVar3,uVar7);
      func_0x000107c61574(uVar1);
      func_0x000107c61574(puVar3);
      func_0x0001000834e4(auStack_b0);
      puVar5 = &UNK_11047d8b8;
      func_0x000107c613fc(&UNK_11047d8b8,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = param_1;
      uVar8 = 0;
      FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
      func_0x000107c61174(param_1);
      uVar9 = 0;
      func_0x000100775264(0,1,0x101d62d90,puVar5,uVar8);
      func_0x000107c61574(uVar12);
      func_0x000107c61574(puVar5);
      func_0x0001000834e4(auStack_88);
      func_0x0001000d224c(auStack_88);
      uVar7 = auStack_88[0];
      puVar5 = &UNK_11047d408;
      puVar2 = puVar5;
      func_0x000107c613fc(&UNK_11047d408,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,unaff_x20);
      puVar3 = &UNK_11047d8e0;
      func_0x000107c613fc(&UNK_11047d8e0,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(ulong *)(puVar3 + 0x18) = param_2;
      func_0x000107c61174();
      uVar12 = uVar7;
      func_0x0001048898b8(uVar7,1,0x101d62da8,puVar3,uVar8);
      func_0x000107c61574(uVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(puVar3);
      func_0x0001000d224c(auStack_88);
      uVar7 = auStack_88[0];
      puVar2 = puVar5;
      func_0x000107c613fc(&UNK_11047d408,0x18,7);
      func_0x000107c61644(puVar2 + 0x10,unaff_x20);
      puVar3 = &UNK_11047d908;
      func_0x000107c613fc(&UNK_11047d908,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(ulong *)(puVar3 + 0x18) = param_2;
      func_0x000107c61174();
      uVar9 = uVar7;
      func_0x0001048898b8(uVar7,1,0x101d62de0,puVar3,uVar8);
      func_0x000107c61574(uVar12);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(puVar3);
      func_0x0001000d224c(auStack_88);
      func_0x000107c613fc(&UNK_11047d408,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,unaff_x20);
      puVar3 = &UNK_11047d930;
      func_0x000107c613fc(&UNK_11047d930,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar5;
      *(ulong *)(puVar3 + 0x18) = param_2;
      func_0x000107c61174(param_2);
      uVar7 = auStack_88[0];
      func_0x0001048898b8(auStack_88[0],1,0x101d62df8,puVar3,uVar8);
      func_0x000107c61574(uVar9);
      func_0x000107c61170(auStack_88[0]);
      func_0x000107c61574(puVar3);
      return uVar7;
    }
  }
  func_0x0001000b44c0(uVar11,uVar10);
  FUN_101d60368(param_1);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar5 = &UNK_11047d408;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d458;
  func_0x000107c613fc(&UNK_11047d458,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uVar4 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_3);
  uVar12 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_101d6228c,puVar3,uVar4);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d480;
  func_0x000107c613fc(&UNK_11047d480,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d622c4,puVar3,uVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d4a8;
  func_0x000107c613fc(&UNK_11047d4a8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar12 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d622e4,puVar3,uVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d4d0;
  func_0x000107c613fc(&UNK_11047d4d0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d62304,puVar3,uVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d4f8;
  func_0x000107c613fc(&UNK_11047d4f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar12 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_101d62fc0,puVar3,uVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d520;
  func_0x000107c613fc(&UNK_11047d520,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d62324,puVar3,uVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d548;
  func_0x000107c613fc(&UNK_11047d548,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar12 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d6235c,puVar3,uVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d570;
  func_0x000107c613fc(&UNK_11047d570,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar9 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d62374,puVar3,uVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d598;
  func_0x000107c613fc(&UNK_11047d598,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d623ac,puVar3,uVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d5c0;
  func_0x000107c613fc(&UNK_11047d5c0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174();
  uVar12 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d623e4,puVar3,uVar4);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar3);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,unaff_x20);
  puVar3 = &UNK_11047d5e8;
  func_0x000107c613fc(&UNK_11047d5e8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  *(ulong *)(puVar3 + 0x18) = param_2;
  func_0x000107c61174(param_2);
  uVar7 = uStack_68;
  func_0x0001048898b8(uStack_68,1,0x101d62fd4,puVar3,uVar4);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar3);
  return uVar7;
}



/* Entry: 101d5f29c; end: 101d5f2db;  */

void FUN_101d5f29c(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5f2dc);
  (*pcVar1)();
}



/* Entry: 101d5f2dc; end: 101d5f31b;  */

void FUN_101d5f2dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e294f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da11af4;
  func_0x000107c61520(&UNK_10da11af4,&UNK_11047db60);
  puRam0000000112e294f0 = puVar1;
  return;
}



/* Entry: 101d5f31c; end: 101d5f3b7;  */

void FUN_101d5f31c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = PTR_PTR_1126d83e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = uVar1;
  func_0x000107c5fadc(uVar1,uVar2);
  puVar5 = puVar3;
  func_0x000107c593e4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar5);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 101d5f3b8; end: 101d5f44f;  */

undefined8
FUN_101d5f3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d5f450(param_3,param_5,param_1,param_2);
    func_0x000107c61574(param_4);
  }
  return param_3;
}



/* Entry: 101d5f450; end: 101d5f55f;  */

undefined8
FUN_101d5f450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  FUN_101d5d770(param_2);
  func_0x0001000d224c(&uStack_80);
  puVar1 = &UNK_11047dac0;
  func_0x000107c613fc(&UNK_11047dac0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_4);
  uVar2 = 0x112e29528;
  func_0x0001000285a8(0x112e29528,&UNK_10da11a28);
  uVar3 = uStack_80;
  func_0x000100775264(uStack_80,1,0x101d62f64,puVar1,uVar2);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_78);
  return uVar3;
}



/* Entry: 101d5f560; end: 101d5f5f3;  */

undefined8 FUN_101d5f560(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101d5f5f4(uVar2,uVar1,uVar3);
    func_0x000107c61574(param_2);
  }
  return uVar2;
}



/* Entry: 101d5f5f4; end: 101d5f6f7;  */

undefined8 FUN_101d5f5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  FUN_101d5c1c4(param_2,param_3);
  func_0x0001000d224c(&uStack_70);
  puVar1 = &UNK_11047da98;
  func_0x000107c613fc(&UNK_11047da98,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar2 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  uVar3 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101d62f4c,puVar1,uVar2);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar1);
  func_0x0001000834e4(auStack_68);
  return uVar3;
}



/* Entry: 101d5f6f8; end: 101d5f77f;  */

undefined8 FUN_101d5f6f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101d623fc(uVar1,param_3);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d5f780; end: 101d5f84b;  */

void FUN_101d5f780(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar3 = param_3;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5cb0c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    uVar3 = param_3;
    func_0x000107c5456c(param_3);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61434(param_5);
  return;
}



/* Entry: 101d5f84c; end: 101d5f8fb;  */

void FUN_101d5f84c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar3 = param_3;
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5cb0c();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    uVar3 = param_3;
    func_0x000107c53edc(param_3);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  *param_1 = param_3;
  func_0x000107c61174(param_3);
  return;
}



/* Entry: 101d5f8fc; end: 101d5f983;  */

void FUN_101d5f8fc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c61174();
    uVar2 = param_3;
    func_0x000107c59558(param_3);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  *param_1 = param_3;
  func_0x000107c61174(param_3);
  return;
}



/* Entry: 101d5f984; end: 101d60057;  */

undefined8 FUN_101d5f984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  FUN_101d60368();
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar6 = &UNK_11047d408;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d458;
  func_0x000107c613fc(&UNK_11047d458,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uVar3 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_3);
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_101d6228c,puVar2,uVar3);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d480;
  func_0x000107c613fc(&UNK_11047d480,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d622c4,puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d4a8;
  func_0x000107c613fc(&UNK_11047d4a8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d622e4,puVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d4d0;
  func_0x000107c613fc(&UNK_11047d4d0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d62304,puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d4f8;
  func_0x000107c613fc(&UNK_11047d4f8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,FUN_101d62fc0,puVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d520;
  func_0x000107c613fc(&UNK_11047d520,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d62324,puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d548;
  func_0x000107c613fc(&UNK_11047d548,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d6235c,puVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d570;
  func_0x000107c613fc(&UNK_11047d570,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d62374,puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d598;
  func_0x000107c613fc(&UNK_11047d598,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar4 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d623ac,puVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  uVar7 = uStack_68;
  puVar1 = puVar6;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_11047d5c0;
  func_0x000107c613fc(&UNK_11047d5c0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174();
  uVar5 = uVar7;
  func_0x0001048898b8(uVar7,1,0x101d623e4,puVar2,uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(puVar2);
  func_0x0001000d224c(&uStack_68);
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar2 = &UNK_11047d5e8;
  func_0x000107c613fc(&UNK_11047d5e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar6;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c61174(param_2);
  uVar7 = uStack_68;
  func_0x0001048898b8(uStack_68,1,0x101d62fd4,puVar2,uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_68);
  func_0x000107c61574(puVar2);
  return uVar7;
}



/* Entry: 101d60058; end: 101d6014f;  */

undefined8
FUN_101d60058(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  func_0x0001000d224c(auStack_78);
  (*param_3)(param_2);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  uVar1 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  uVar2 = uStack_80;
  func_0x000100775264(uStack_80,1,param_5,param_4,uVar1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(param_4);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101d60150; end: 101d60367;  */

undefined8 FUN_101d60150(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x0001000d224c(auStack_90);
    puVar1 = auStack_90;
    func_0x0001000a8868(puVar1,uStack_78);
    uVar7 = *puVar1;
    uVar4 = param_3;
    FUN_101d56b3c(param_3);
    func_0x0001000d224c(&uStack_98);
    puVar2 = &UNK_11047d688;
    func_0x000107c613fc(&UNK_11047d688,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,uVar7);
    puVar3 = &UNK_11047d958;
    func_0x000107c613fc(&UNK_11047d958,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    func_0x000107c61174(param_3);
    uVar7 = uStack_98;
    func_0x0001048898b8(uStack_98,1,0x101d62fe8,puVar3,&UNK_11047cbf8);
    func_0x000107c61574(uVar4);
    func_0x000107c61170(uStack_98);
    func_0x000107c61574(puVar3);
    puVar2 = &UNK_11047d980;
    func_0x000107c613fc(&UNK_11047d980,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    uVar4 = 0;
    FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
    func_0x000107c61174();
    uVar5 = 0;
    func_0x000100775264(0,1,0x101d62ffc,puVar2,uVar4);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar2);
    func_0x0001000834e4(auStack_90);
    puVar2 = &UNK_11047d9a8;
    func_0x000107c613fc(&UNK_11047d9a8,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    func_0x000107c61174(uVar6);
    uVar6 = 0;
    func_0x000104889f74(0,1,0x101d63010,puVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar2);
  }
  return uVar6;
}



/* Entry: 101d60368; end: 101d6072b;  */

undefined8 FUN_101d60368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = 0;
  FUN_101d5d04c(0);
  FUN_101d5cee8(param_3,uVar1,&PTR_DAT_11047d1a0);
  func_0x0001000d224c(&uStack_80);
  puVar2 = &UNK_11047d840;
  func_0x000107c613fc(&UNK_11047d840,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  uVar1 = uStack_80;
  func_0x000104889f74(uStack_80,1,FUN_101d62d48,puVar2);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_78);
  func_0x0001000d224c(auStack_78);
  puVar2 = &UNK_11047d868;
  func_0x000107c613fc(&UNK_11047d868,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uVar3 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  uVar4 = auStack_78[0];
  func_0x000100775264(auStack_78[0],1,0x101d62d60,puVar2,uVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(auStack_78[0]);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 101d6072c; end: 101d60843;  */

undefined8 FUN_101d6072c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = 0;
  FUN_101d5d04c(0);
  FUN_101d5cfe4(param_2,uVar1,&PTR_DAT_11047d1a0);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_11047d7a0;
  func_0x000107c613fc(&UNK_11047d7a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  uVar3 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  uVar1 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101d62c88,puVar2,uVar3);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  return uVar1;
}



/* Entry: 101d60844; end: 101d608d7;  */

undefined8 FUN_101d60844(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    (*param_4)(uVar1,param_3);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d608d8; end: 101d60a2f;  */

long FUN_101d608d8(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  plVar2 = &lStack_70;
  func_0x0001000d224c(auStack_68);
  func_0x000107c5202c();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112e29518,&UNK_10da11a00);
    lStack_70 = -0x60ed74c9;
  }
  else {
    lVar1 = param_2;
    func_0x000107c309ec();
    func_0x000107c61170(param_2);
    func_0x0001000285a8(0x112e29518,&UNK_10da11a00);
    lStack_70 = lVar1;
  }
  func_0x000104888f7c(&lStack_70);
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  puVar3 = &UNK_11047d778;
  func_0x000107c613fc(&UNK_11047d778,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uVar4 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  lVar5 = lVar1;
  func_0x000100775264(lVar1,1,0x101d62c70,puVar3,uVar4);
  func_0x000107c61574(plVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_68);
  return lVar5;
}



/* Entry: 101d60a30; end: 101d60c47;  */

undefined8 FUN_101d60a30(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x0001000d224c(auStack_90);
    puVar1 = auStack_90;
    func_0x0001000a8868(puVar1,uStack_78);
    uVar7 = *puVar1;
    uVar4 = param_3;
    FUN_101d56b3c(param_3);
    func_0x0001000d224c(&uStack_98);
    puVar2 = &UNK_11047d688;
    func_0x000107c613fc(&UNK_11047d688,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,uVar7);
    puVar3 = &UNK_11047d6b0;
    func_0x000107c613fc(&UNK_11047d6b0,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    func_0x000107c61174(param_3);
    uVar7 = uStack_98;
    func_0x0001048898b8(uStack_98,1,FUN_101d62bfc,puVar3,&UNK_11047cbf8);
    func_0x000107c61574(uVar4);
    func_0x000107c61170(uStack_98);
    func_0x000107c61574(puVar3);
    puVar2 = &UNK_11047d6d8;
    func_0x000107c613fc(&UNK_11047d6d8,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    uVar4 = 0;
    FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
    func_0x000107c61174();
    uVar5 = 0;
    func_0x000100775264(0,1,0x101d62c14,puVar2,uVar4);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(puVar2);
    func_0x0001000834e4(auStack_90);
    puVar2 = &UNK_11047d700;
    func_0x000107c613fc(&UNK_11047d700,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    func_0x000107c61174(uVar6);
    uVar6 = 0;
    func_0x000104889f74(0,1,0x101d62c2c,puVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar2);
  }
  return uVar6;
}



/* Entry: 101d60c48; end: 101d60cfb;  */

undefined8
FUN_101d60c48(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    (*param_7)(uVar1,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d60cfc; end: 101d60e03;  */

undefined8
FUN_101d60cfc(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (*param_3)(param_2);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  uVar1 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  uVar2 = uStack_80;
  func_0x000100775264(uStack_80,1,param_5,param_4,uVar1);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uStack_80);
  func_0x000107c61574(param_4);
  func_0x0001000834e4(auStack_78);
  return uVar2;
}



/* Entry: 101d60e04; end: 101d60f23;  */

undefined8 FUN_101d60e04(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001000d224c(auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    FUN_101d5c934(param_3);
    puVar1 = &UNK_11047d610;
    func_0x000107c613fc(&UNK_11047d610,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    uVar2 = 0;
    FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
    func_0x000107c61174(uVar3);
    uVar3 = 0;
    func_0x000100775264(0,1,FUN_101d62b84,puVar1,uVar2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(param_2);
    func_0x0001000834e4(auStack_80);
  }
  return uVar3;
}



/* Entry: 101d60f24; end: 101d60fa7;  */

undefined8 FUN_101d60f24(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101d626e8(uVar1,param_3);
    func_0x000107c61574(param_2);
  }
  return uVar1;
}



/* Entry: 101d60fa8; end: 101d6105b;  */

void FUN_101d60fa8(long *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2[1] == 0) {
    *param_1 = param_3;
    func_0x000107c61174(param_3);
  }
  else {
    uVar2 = *param_2;
    func_0x000107c5fadc(uVar2);
    func_0x000107c59388();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d61058);
      (*pcVar1)();
    }
    lVar3 = param_3;
    func_0x000107c592f0();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6105c);
      (*pcVar1)();
    }
    *param_1 = lVar3;
  }
  return;
}



/* Entry: 101d6105c; end: 101d610e7;  */

void FUN_101d6105c(long *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  func_0x00010102c3b8(uVar2);
  uVar3 = uVar2;
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
  func_0x000107c52944();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (param_3 != 0) {
    *param_1 = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d610e8);
  (*pcVar1)();
}



/* Entry: 101d610e8; end: 101d611cf;  */

void FUN_101d610e8(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[1];
  uVar7 = param_2[2];
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  func_0x000107c59d28(param_3,param_3,*param_2);
  func_0x000107c61180();
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d611c8);
    (*pcVar2)();
  }
  func_0x000107c5fadc(uVar3,uVar7);
  lVar4 = param_3;
  func_0x000107c59d18();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    func_0x000107c5fadc(uVar5,uVar1);
    lVar6 = lVar4;
    func_0x000107c59cf4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    if (lVar6 != 0) {
      *param_1 = lVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d611d0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d611cc);
  (*pcVar2)();
}



/* Entry: 101d611d0; end: 101d612cb;  */

void FUN_101d611d0(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    *param_1 = param_3;
    func_0x000107c61174(param_3);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x000107c5fadc(uVar3);
    func_0x000107c5714c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d612c4);
      (*pcVar2)();
    }
    lVar4 = param_3;
    func_0x000107c57150();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d612c8);
      (*pcVar2)();
    }
    func_0x000107c5fadc(uVar5,uVar1);
    lVar6 = lVar4;
    func_0x000107c57148();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d612cc);
      (*pcVar2)();
    }
    *param_1 = lVar6;
  }
  return;
}



/* Entry: 101d612cc; end: 101d613b3;  */

void FUN_101d612cc(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[1];
  uVar7 = param_2[2];
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  func_0x000107c592f0(param_3,param_3,*param_2);
  func_0x000107c61180();
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d613ac);
    (*pcVar2)();
  }
  func_0x000107c5fadc(uVar3,uVar7);
  lVar4 = param_3;
  func_0x000107c56450();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    func_0x000107c5fadc(uVar5,uVar1);
    lVar6 = lVar4;
    func_0x000107c563f8();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uVar5);
    if (lVar6 != 0) {
      *param_1 = lVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d613b4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d613b0);
  (*pcVar2)();
}



/* Entry: 101d613b4; end: 101d61417;  */

void FUN_101d613b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c5b2d0(param_2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000104888f7c(&uStack_30);
  return;
}



/* Entry: 101d61418; end: 101d61493;  */

void FUN_101d61418(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(uVar1,param_2[1]);
  uVar2 = param_3;
  func_0x000107c57140(param_3);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = param_3;
  func_0x000107c61174(param_3);
  return;
}



/* Entry: 101d61494; end: 101d615c3;  */

undefined * FUN_101d61494(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  (*param_2)(0,lVar5,0);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = puStack_68;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    puStack_68 = puVar1;
    func_0x0001000bb420(param_1,auStack_88);
    func_0x000100102924(auStack_88,auStack_a8);
    uVar3 = 0;
    FUN_101d62f80(0,param_3,param_4);
    uVar4 = 0;
    func_0x000107c6147c(&uStack_b0,auStack_a8,puVar2 + 8,uVar3,6);
    uVar3 = uStack_b0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    puStack_68 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      (*param_2)(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
    *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = puStack_68;
  }
  func_0x000107c61574(puVar1);
  return (undefined *)0x0;
}



/* Entry: 101d615c4; end: 101d61687;  */

undefined8 FUN_101d615c4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_80);
    func_0x000107c61574(uVar3);
    func_0x0001000a8868(auStack_80,uStack_68);
    FUN_101d5c754(param_3,uVar1,uVar2);
    func_0x0001000834e4(auStack_80);
  }
  return param_3;
}



/* Entry: 101d61688; end: 101d616db;  */

void FUN_101d61688(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  func_0x000107c5649c(param_3,param_3,*param_2);
  func_0x000107c61180();
  func_0x000107c61170();
  *param_1 = param_3;
  func_0x000107c61174(param_3);
  return;
}



/* Entry: 101d616dc; end: 101d6174f;  */

void FUN_101d616dc(long *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c56414(param_3,param_3,*param_2);
  func_0x000107c61180();
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d6174c);
    (*pcVar1)();
  }
  lVar2 = param_3;
  func_0x000107c56418();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d61750);
  (*pcVar1)();
}



/* Entry: 101d61750; end: 101d617cf;  */

void FUN_101d61750(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2[1] != 0) {
    uVar1 = *param_2;
    func_0x000107c5fadc(uVar1);
    uVar2 = param_3;
    func_0x000107c54080(param_3);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  *param_1 = param_3;
  func_0x000107c61174(param_3);
  return;
}



/* Entry: 101d617d0; end: 101d61817;  */

void FUN_101d617d0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e29530;
  plVar5 = (long *)&UNK_10da11a30;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101d62f80(0,0x112e29160,&PTR_PTR_1126e0da8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101d61818; end: 101d6188f;  */

void FUN_101d61818(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101d62f80(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101d61890; end: 101d61943;  */

void FUN_101d61890(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101d61944();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101d61944; end: 101d61f03;  */

undefined *
FUN_101d61944(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d61a90);
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
    puVar3 = param_5;
    FUN_101d61818(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101d62f80(0,param_5,param_6);
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



/* Entry: 101d61f04; end: 101d6228b;  */

undefined8 FUN_101d61f04(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  uVar9 = *puVar1;
  func_0x0001000d224c(auStack_b0);
  func_0x0001000a8868(auStack_b0,uStack_98);
  uVar2 = 0;
  func_0x000101d5bb68(0);
  uVar3 = param_2;
  FUN_101d5bc98(param_2,uVar2,&PTR_DAT_11047d0c0);
  puVar4 = &UNK_11047d688;
  func_0x000107c613fc(&UNK_11047d688,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar9);
  puVar5 = &UNK_11047d890;
  func_0x000107c613fc(&UNK_11047d890,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  func_0x000107c61174();
  uVar2 = 0x112e28f40;
  func_0x0001000285a8(0x112e28f40,&UNK_10da11340);
  uVar9 = 0;
  func_0x0001048898b8(0,1,0x101d62d78,puVar5,uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar5);
  func_0x0001000834e4(auStack_b0);
  puVar4 = &UNK_11047d8b8;
  func_0x000107c613fc(&UNK_11047d8b8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  uVar6 = 0;
  FUN_101d62f80(0,0x112e294d8,&PTR_PTR_1126d83e0);
  func_0x000107c61174(param_1);
  uVar7 = 0;
  func_0x000100775264(0,1,0x101d62d90,puVar4,uVar6);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(puVar4);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  uVar2 = auStack_88[0];
  puVar4 = &UNK_11047d408;
  puVar8 = puVar4;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar5 = &UNK_11047d8e0;
  func_0x000107c613fc(&UNK_11047d8e0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar8;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001048898b8(uVar2,1,0x101d62da8,puVar5,uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(auStack_88);
  uVar2 = auStack_88[0];
  puVar8 = puVar4;
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar5 = &UNK_11047d908;
  func_0x000107c613fc(&UNK_11047d908,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar8;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  func_0x000107c61174();
  uVar9 = uVar2;
  func_0x0001048898b8(uVar2,1,0x101d62de0,puVar5,uVar6);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(auStack_88);
  func_0x000107c613fc(&UNK_11047d408,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_11047d930;
  func_0x000107c613fc(&UNK_11047d930,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  func_0x000107c61174(param_2);
  uVar2 = auStack_88[0];
  func_0x0001048898b8(auStack_88[0],1,0x101d62df8,puVar5,uVar6);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar5);
  return uVar2;
}



/* Entry: 101d6228c; end: 101d623fb;  */

void FUN_101d6228c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d60c48(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                FUN_101d5dd18,&UNK_11047d818,FUN_101d62d00,FUN_101d60058);
  return;
}



/* Entry: 101d623fc; end: 101d626e7;  */

undefined8 * FUN_101d623fc(double param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined8 auStack_68 [5];
  
  lVar2 = param_3;
  func_0x000107c40bd8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000d224c(auStack_68);
    func_0x000107c5c9e4(lVar2);
    dVar9 = (double)(long)param_1;
    bVar1 = false;
    if ((-9.223372036854778e+18 < dVar9) && (bVar1 = false, !NAN(dVar9))) {
      bVar1 = dVar9 < 9.223372036854776e+18;
    }
    if ((bVar1) && (SUB168(SEXT816((long)dVar9) * SEXT816(1000),8) == (long)dVar9 * 1000 >> 0x3f)) {
      func_0x0001000834e4(auStack_68);
      func_0x000107c53a90(param_2);
      func_0x000107c61180();
      func_0x000107c61170();
      lVar5 = param_3;
      func_0x000107c3f60c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        func_0x0001000d224c(auStack_68);
        func_0x000107c5c9e4(lVar5);
        dVar9 = (double)(long)dVar9;
        if (((dVar9 <= -9.223372036854778e+18) || (9.223372036854776e+18 <= dVar9)) ||
           (SUB168(SEXT816((long)dVar9) * SEXT816(1000),8) != (long)dVar9 * 1000 >> 0x3f)) {
          func_0x000107c61170(lVar5);
          func_0x0001000834e4(auStack_68);
        }
        else {
          func_0x0001000834e4(auStack_68);
          uVar6 = param_2;
          func_0x000107c5320c(param_2);
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          func_0x000107c61170(uVar6);
        }
      }
      lVar5 = param_3;
      func_0x000107c43c78(param_3);
      func_0x000107c61180();
      func_0x000107c45374();
      func_0x000107c615e8(lVar5);
      func_0x000107c55390(param_2);
      func_0x000107c61180();
      func_0x000107c61170();
      lVar5 = param_3;
      func_0x000107c43c78();
      func_0x000107c61180();
      lVar7 = lVar5;
      func_0x000107c42cbc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar7 != 0) {
        uVar6 = param_2;
        func_0x000107c54808(param_2);
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        func_0x000107c61170(uVar6);
      }
      func_0x000107c43c78(param_3);
      func_0x000107c61180();
      lVar5 = param_3;
      func_0x000107c4cab0();
      func_0x000107c61180();
      func_0x000107c615e8(param_3);
      uVar6 = param_2;
      func_0x000107c564c4(param_2);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar6);
      func_0x0001000285a8(0x112e294e8,&UNK_10da119d8);
      puVar8 = auStack_68;
      auStack_68[0] = param_2;
      func_0x000104888f7c(puVar8);
      func_0x000107c61170(lVar2);
      return puVar8;
    }
    func_0x000107c61170(lVar2);
    func_0x0001000834e4(auStack_68);
  }
  puVar3 = (undefined1 *)0x112e294e8;
  func_0x0001000285a8(0x112e294e8,&UNK_10da119d8);
  FUN_101d5f2dc();
  puVar8 = (undefined8 *)&UNK_11047db60;
  func_0x000107c613f8(&UNK_11047db60,puVar3,0,0);
  *puVar3 = 2;
  puVar4 = puVar8;
  func_0x00010488904c();
  func_0x000107c614ac(puVar8);
  return puVar4;
}



/* Entry: 101d626e8; end: 101d62b83;  */

void FUN_101d626e8(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_58;
  
  lVar1 = param_3;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = param_2;
    func_0x000107c56420(param_2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  lVar1 = param_3;
  func_0x000107c5cba0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    FUN_101d61494(lVar2,0x101d61908,0x112e29500,&PTR_PTR_1126e0400);
    func_0x000107c6142c(lVar2);
    if (lVar1 != 0) {
      uVar3 = 0;
      FUN_101d62f80(0,0x112e29500,&PTR_PTR_1126e0400);
      lVar2 = lVar1;
      func_0x000107c5fc48(lVar1,uVar3);
      func_0x000107c6142c(lVar1);
      uVar3 = param_2;
      func_0x000107c59ea4(param_2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
    }
  }
  lVar1 = param_3;
  func_0x000107c4c938();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    FUN_101d61494(lVar2,0x101d618cc,0x112e294f8,&PTR_PTR_1126d7f88);
    func_0x000107c6142c(lVar2);
    if (lVar1 != 0) {
      uVar3 = 0;
      FUN_101d62f80(0,0x112e294f8,&PTR_PTR_1126d7f88);
      lVar2 = lVar1;
      func_0x000107c5fc48(lVar1,uVar3);
      func_0x000107c6142c(lVar1);
      uVar3 = param_2;
      func_0x000107c563f4(param_2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
    }
  }
  lVar1 = param_3;
  func_0x000107c43c78(param_3);
  func_0x000107c61180();
  func_0x000107c3f0e8();
  func_0x000107c615e8(lVar1);
  func_0x000107c5301c(param_2);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar1 = param_3;
  func_0x000107c5ca30();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = param_2;
    func_0x000107c59d94(param_2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  lVar1 = param_3;
  func_0x000107c43c78(param_3);
  func_0x000107c61180();
  func_0x000107c5e304();
  func_0x000107c615e8(lVar1);
  func_0x000107c5a728(param_2);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar1 = param_3;
  func_0x000107c43c78(param_3);
  func_0x000107c61180();
  func_0x000107c44d98();
  func_0x000107c615e8(lVar1);
  func_0x000107c550bc(param_2);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar1 = param_3;
  func_0x000107c43c78(param_3);
  func_0x000107c61180();
  func_0x000107c42378();
  func_0x000107c615e8(lVar1);
  dVar5 = (double)param_1;
  dVar6 = dVar5;
  if (((ulong)dVar5 & 0xfffffffffffff) != 0) {
    dVar6 = 0.0;
  }
  if ((((ulong)dVar5 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
    dVar6 = dVar5;
  }
  func_0x000107c54378(dVar6,param_2);
  fVar4 = SUB84(dVar6,0);
  func_0x000107c61180();
  func_0x000107c61170();
  lVar1 = param_3;
  func_0x000107c43920();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61174();
    uVar3 = param_2;
    func_0x000107c54ba8(param_2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  lVar1 = param_3;
  func_0x000107c4d1b4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = param_2;
    func_0x000107c567f4(param_2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  lVar1 = param_3;
  func_0x000107c51f1c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61174();
    uVar3 = param_2;
    func_0x000107c58f48(param_2);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
  }
  lVar1 = param_3;
  func_0x000107c43c78();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c448f4();
  func_0x000107c615e8(lVar1);
  if ((int)lVar2 != 0) {
    func_0x000107c43c78(param_3);
    func_0x000107c61180();
    func_0x000107c49894();
    func_0x000107c615e8(param_3);
    func_0x000107c53874((double)fVar4,param_2);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  func_0x0001000285a8(0x112e294e8,&UNK_10da119d8);
  uStack_58 = param_2;
  func_0x000104888f7c(&uStack_58);
  return;
}



/* Entry: 101d62b84; end: 101d62bb3;  */

void FUN_101d62b84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d6105c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d62bb4; end: 101d62bfb;  */

void FUN_101d62bb4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c570ac(lVar2,param_3,*param_2);
  func_0x000107c61180();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d62bfc);
  (*pcVar1)();
}



/* Entry: 101d62bfc; end: 101d62cb7;  */

void FUN_101d62bfc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d56c8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d62cb8; end: 101d62cff;  */

void FUN_101d62cb8(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5603c(lVar2,param_3,*param_2);
  func_0x000107c61180();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d62d00);
  (*pcVar1)();
}



/* Entry: 101d62d00; end: 101d62d47;  */

void FUN_101d62d00(long *param_1,undefined1 *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c53d3c(lVar2,param_3,*param_2);
  func_0x000107c61180();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d62d48);
  (*pcVar1)();
}



/* Entry: 101d62d48; end: 101d62e0f;  */

void FUN_101d62d48(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d613b4(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d62e10; end: 101d62e5f;  */

void FUN_101d62e10(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112e294e8,&UNK_10da119d8);
  uStack_28 = uVar1;
  func_0x000104888f7c(&uStack_28);
  return;
}



/* Entry: 101d62e60; end: 101d62e67;  */

undefined8 FUN_101d62e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d5f450(param_3,uVar1,param_1,param_2);
    func_0x000107c61574(lVar2);
  }
  return param_3;
}



/* Entry: 101d62e68; end: 101d62e9b;  */

void FUN_101d62e68(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 101d62e9c; end: 101d62f7f;  */

void FUN_101d62e9c(void)

{
  FUN_101d5f560();
  return;
}



/* Entry: 101d62f80; end: 101d62fbf;  */

void FUN_101d62f80(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d62fc0; end: 101d63023;  */

void FUN_101d62fc0(void)

{
  func_0x000101d62da8();
  return;
}



/* Entry: 101d63024; end: 101d63037;  */

bool FUN_101d63024(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d63038; end: 101d630e3;  */

void FUN_101d63038(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d630e4; end: 101d63283;  */

void FUN_101d630e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d63284; end: 101d63327;  */

void FUN_101d63284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da11acc;
  func_0x000107c61520(&UNK_10da11acc,&UNK_11047db60);
  puRam0000000112e29568 = puVar1;
  return;
}



/* Entry: 101d63328; end: 101d63753;  */

undefined8
FUN_101d63328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  FUN_101d63e7c(param_4,FUN_101d63990,*puVar1);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  func_0x000101d61a90();
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_5 != (undefined *)0x0) {
    puVar4 = param_5;
  }
  func_0x000107c61434(param_5);
  puVar2 = puVar4;
  func_0x000101d61c0c();
  func_0x000107c6142c(puVar4);
  func_0x0001000834e4(auStack_88);
  func_0x0001000d224c(auStack_88);
  if (param_6 != (undefined *)0x0) {
    puVar5 = param_6;
  }
  func_0x000107c61434(param_6);
  puVar3 = puVar5;
  func_0x000101d61d88();
  func_0x000107c6142c(puVar5);
  func_0x0001000834e4(auStack_88);
  func_0x000101d635cc(param_2,param_1);
  func_0x0001000d224c(auStack_88);
  uVar8 = auStack_88[0];
  puVar4 = &UNK_11047dbf8;
  func_0x000107c613fc(&UNK_11047dbf8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_11047dc20;
  func_0x000107c613fc(&UNK_11047dc20,0x51,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined **)(puVar5 + 0x28) = puVar2;
  *(undefined **)(puVar5 + 0x30) = puVar3;
  *(undefined8 *)(puVar5 + 0x38) = param_3;
  *(undefined8 *)(puVar5 + 0x40) = param_7;
  *(undefined8 *)(puVar5 + 0x48) = param_8;
  puVar5[0x50] = param_9;
  uVar6 = 0;
  FUN_101d64128(0,0x112e29160,&PTR_PTR_1126e0da8);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_8);
  uVar7 = uVar8;
  func_0x0001048898b8(uVar8,1,FUN_101d640d8,puVar5,uVar6);
  func_0x000107c61574(param_2);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(puVar5);
  func_0x0001000d224c(auStack_88);
  puVar4 = &UNK_11047dbf8;
  func_0x000107c613fc(&UNK_11047dbf8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar8 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  uVar6 = auStack_88[0];
  func_0x0001048898b8(auStack_88[0],1,0x101d64110,puVar4,uVar8);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(auStack_88[0]);
  func_0x000107c61574(puVar4);
  return uVar6;
}



/* Entry: 101d63754; end: 101d638af;  */

undefined8
FUN_101d63754(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_a0);
    func_0x000107c61574(uVar1);
    func_0x0001000a8868(auStack_a0,uStack_88);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(param_4);
    FUN_101d63b78();
    func_0x000107c61434(param_5);
    FUN_101d63b78();
    func_0x000107c61434(param_6);
    FUN_101d63b78();
    func_0x000107c61434(param_7);
    FUN_101d63b78();
    FUN_101d54ebc(param_3,uVar2,param_8,param_9,param_10);
    func_0x000107c6142c(uVar2);
    func_0x0001000834e4(auStack_a0);
  }
  return param_3;
}



/* Entry: 101d638b0; end: 101d6395f;  */

undefined8 FUN_101d638b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_70);
    func_0x000107c61574(uVar1);
    func_0x0001000a8868(auStack_70,uStack_58);
    func_0x000101d5b090(uVar2);
    func_0x0001000834e4(auStack_70);
  }
  return uVar2;
}



/* Entry: 101d63960; end: 101d6398f;  */

void FUN_101d63960(void)

{
  FUN_101d63328();
  return;
}



/* Entry: 101d63990; end: 101d63997;  */

undefined * FUN_101d63990(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long alStack_88 [5];
  
  lVar3 = 0;
  uStack_98 = param_4;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12;
  func_0x0001000d224c(alStack_88);
  uStack_90 = param_3;
  if (alStack_88[0] != 0) {
    uVar4 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    lVar5 = alStack_88[0];
    func_0x000107c431c0();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_88[0]);
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c40bd8();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        func_0x000107c5ee94(lVar13,lVar6);
        func_0x000107c61170(lVar6);
      }
      (**(code **)(lVar11 + 0x38))(lVar13,lVar6 == 0,1,lVar3);
      func_0x0001009f0578(lVar13,lVar14);
      lVar5 = lVar14;
      (**(code **)(lVar11 + 0x30))(lVar14,1,lVar3);
      if ((int)lVar5 == 1) {
        func_0x0001000d1dcc(lVar13);
      }
      else {
        (**(code **)(lVar11 + 0x20))(puVar12,lVar14,lVar3);
        func_0x0001000d224c(alStack_88);
        func_0x000107c5ee8c();
        dVar15 = (double)(long)param_1;
        bVar2 = false;
        if ((-9.223372036854778e+18 < dVar15) && (bVar2 = false, !NAN(dVar15))) {
          bVar2 = dVar15 < 9.223372036854776e+18;
        }
        (**(code **)(lVar11 + 8))(puVar12,lVar3);
        func_0x0001000d1dcc(lVar13);
        func_0x0001000834e4(alStack_88);
        if (bVar2 && SUB168(SEXT816((long)dVar15) * SEXT816(1000),8) == (long)dVar15 * 1000 >> 0x3f)
        {
          puVar10 = PTR_PTR_1126d83e0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar7 = puVar10;
          func_0x000107c53a90();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eab8);
            (*pcVar1)();
          }
          puVar10 = puVar7;
          func_0x000107c3ecc8(puVar7);
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          goto LAB_101d5e978;
        }
      }
    }
  }
  puVar10 = (undefined *)0x0;
LAB_101d5e978:
  puVar7 = PTR_PTR_1126d8548;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,uStack_90);
  puVar8 = puVar7;
  func_0x000107c593e4();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eaa4);
    (*pcVar1)();
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  puVar9 = puVar8;
  func_0x000107c57094();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eaa8);
    (*pcVar1)();
  }
  puVar7 = puVar9;
  func_0x000107c57044();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eaac);
    (*pcVar1)();
  }
  puVar8 = puVar7;
  func_0x000107c59320();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eab0);
    (*pcVar1)();
  }
  puVar7 = puVar8;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5eab4);
    (*pcVar1)();
  }
  func_0x000107c61170(puVar10);
  return puVar7;
}


