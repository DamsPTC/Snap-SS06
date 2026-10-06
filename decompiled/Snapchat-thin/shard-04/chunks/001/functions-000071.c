/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030b51d0; end: 1030b5253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b51d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112f39a30;
  lVar1 = param_1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x000107c614f0();
    FUN_1030b5254(param_2);
    (**(code **)(lVar2 + 8))();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1030b5254; end: 1030b5a13;  */

void FUN_1030b5254(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    func_0x000103094ff4(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b55d0);
      (*pcVar2)();
    }
    uVar13 = 0;
    puVar9 = puVar1;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b55b4);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + 0x20 + uVar13 * 8);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar13;
        FUN_1030b5d5c(uVar13,param_1,&PTR_PTR_1126ac088,0x112efcdd8);
      }
      uVar14 = uVar3;
      func_0x000107c3f9f4();
      func_0x000107c61180();
      uVar4 = 0;
      FUN_1030b6de0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar5 = uVar14;
      func_0x000107c5fc54(uVar14,uVar4);
      func_0x000107c61170(uVar14);
      if (uVar5 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        if (uVar14 == 0) goto LAB_1030b5450;
LAB_1030b5370:
        uVar4 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
        func_0x000100dd4260(0,uVar4,0);
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b55b0);
          (*pcVar2)();
        }
        uVar10 = 0;
        do {
          if ((uVar5 & 0xc000000000000001) == 0) {
            uVar6 = *(ulong *)(uVar5 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar10;
            uVar4 = uVar5;
            FUN_1030b5d5c(uVar10,uVar5,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
          }
          uVar7 = uVar6;
          func_0x000107c49820();
          func_0x000107c61170(uVar6);
          uVar12 = *(ulong *)(puVar9 + 0x10);
          uVar6 = uVar12 + 1;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
            uVar4 = uVar6;
            func_0x000100dd4260(1 < *(ulong *)(puVar9 + 0x18),uVar6,1);
          }
          uVar10 = uVar10 + 1;
          *(ulong *)(puVar9 + 0x10) = uVar6;
          *(ulong *)(puVar9 + uVar12 * 8 + 0x20) = uVar7;
        } while (uVar14 != uVar10);
        func_0x000107c6142c(uVar5);
      }
      else {
        uVar14 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar14 = uVar5;
        }
        func_0x000107c60480();
        if (uVar14 != 0) goto LAB_1030b5370;
LAB_1030b5450:
        func_0x000107c6142c(uVar5);
      }
      uVar14 = uVar3;
      func_0x000107c51cac(uVar3);
      func_0x000107c61180();
      uVar5 = uVar3;
      func_0x000107c4f7b0(uVar3);
      func_0x000107c61180();
      uVar10 = uVar3;
      func_0x000107c4f7bc(uVar3);
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c4de24();
      func_0x000107c61180();
      if (uVar6 == 0) {
        uVar12 = 0;
        uVar4 = 0;
      }
      else {
        uVar12 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
      }
      uVar8 = 0;
      func_0x00010480f4c4(0);
      func_0x000107c610f8();
      func_0x00010480e9f8(puVar9,uVar14,uVar5,uVar10,uVar12,uVar4,uVar8);
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        func_0x000103094ff4(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar13 = uVar13 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined **)(puVar1 + uVar3 * 8 + 0x20) = puVar9;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    } while (uVar13 != uVar11);
  }
  func_0x0001048116c8(0);
  func_0x000107c610f8();
  func_0x0001048108a0(puVar1,0);
  return;
}



/* Entry: 1030b5a14; end: 1030b5aa7; -[_TtC40SCAdAttachmentHandlerImplementationSwift22AdSurveyViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b5a14(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112f39a28;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  param_1 = param_1 + _DAT_112f39a30;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAdAttachmentHandlerImplementationSwift/AdSurveyViewController.swift",0x45,2
                      ,0x40,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5aa8);
  (*pcVar2)();
}



/* Entry: 1030b5aa8; end: 1030b5ab7; -[_TtC40SCAdAttachmentHandlerImplementationSwift22AdSurveyViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b5aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112f39a28));
  return;
}



/* Entry: 1030b5ab8; end: 1030b5b17; -[_TtC40SCAdAttachmentHandlerImplementationSwift22AdSurveyViewController initWithNibName:bundle:] */

void FUN_1030b5ab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdSurveyViewController",0x3f,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b5ae4);
  (*pcVar1)();
}



/* Entry: 1030b5b18; end: 1030b5b5f; -[_TtC40SCAdAttachmentHandlerImplementationSwift22AdSurveyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1030b5b18(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39a20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39a28));
  param_1 = param_1 + _DAT_112f39a30;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030b5b60; end: 1030b5b7f;  */

void FUN_1030b5b60(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3c30);
  return;
}



/* Entry: 1030b5b80; end: 1030b5d47;  */

undefined8 FUN_1030b5b80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1030b5d48; end: 1030b5d5b;  */

ulong FUN_1030b5d48(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5e40);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5e44);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
    func_0x000107c61168(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170);
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
    puVar4 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
    func_0x000107c61168(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170);
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
  FUN_1030b6de0(0,0x112f38b30,&PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5f18);
  (*pcVar2)();
}



/* Entry: 1030b5d5c; end: 1030b5f17;  */

ulong FUN_1030b5d5c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5e40);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5e44);
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
  FUN_1030b6de0(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5f18);
  (*pcVar2)();
}



/* Entry: 1030b5f18; end: 1030b6a5b;  */

ulong FUN_1030b5f18(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5fe8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5fec);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001047f42fc(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x0001047f42fc(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f11dc00);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b60b4);
  (*pcVar2)();
}



/* Entry: 1030b6a5c; end: 1030b6a83;  */

ulong FUN_1030b6a5c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5e40);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5e44);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ac2f0;
    func_0x000107c61168(PTR_PTR_1126ac2f0);
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
    puVar4 = PTR_PTR_1126ac2f0;
    func_0x000107c61168(PTR_PTR_1126ac2f0);
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
  FUN_1030b6de0(0,0x112f0de00,&PTR_PTR_1126ac2f0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b5f18);
  (*pcVar2)();
}



/* Entry: 1030b6a84; end: 1030b6dbb;  */

ulong FUN_1030b6a84(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b6b54);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b6b58);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010480ded0(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x00010480ded0(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f11db50);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030b6c20);
  (*pcVar2)();
}



/* Entry: 1030b6dbc; end: 1030b6ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b6dbc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x10) + _DAT_112f39a30;
  lVar1 = lVar3;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c614f0();
    FUN_1030b5254(uVar2);
    (**(code **)(lVar3 + 8))();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1030b6de0; end: 1030b6e1f;  */

void FUN_1030b6de0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1030b6e20; end: 1030b6e3f; -[AdWebViewAttachmentExternalBrowserPresenter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b6e20(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f39a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030b6e40; end: 1030b6e53; -[AdWebViewAttachmentExternalBrowserPresenter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b6e40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f39a60,param_3);
  return;
}



/* Entry: 1030b6e54; end: 1030b6ee3; -[AdWebViewAttachmentExternalBrowserPresenter initWithAttachment:urlHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b6e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f39a60,0);
  *(undefined8 *)(param_1 + _DAT_112f39a68) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f39a70) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1030b6ee4; end: 1030b6f43; -[AdWebViewAttachmentExternalBrowserPresenter init] */

void FUN_1030b6ee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdWebViewAttachmentExternalBrowserPresenter"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b6f10);
  (*pcVar1)();
}



/* Entry: 1030b6f44; end: 1030b6faf; -[AdWebViewAttachmentExternalBrowserPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b6f44(long param_1)

{
  func_0x0001030b6f8c(param_1 + _DAT_112f39a60);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f39a68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f39a70));
  return;
}



/* Entry: 1030b6fb0; end: 1030b6fcf;  */

void FUN_1030b6fb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3d00);
  return;
}



/* Entry: 1030b6fd0; end: 1030b7007; -[AdWebViewAttachmentExternalBrowserPresenter canHandleAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030b6fd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_3 + _DAT_113067d28) != 0) {
    return *(int *)(*(long *)(param_3 + _DAT_113067d28) + _DAT_113813190) == 1;
  }
  return false;
}



/* Entry: 1030b7008; end: 1030b700f; -[AdWebViewAttachmentExternalBrowserPresenter isPresenting] */

undefined8 FUN_1030b7008(void)

{
  return 0;
}



/* Entry: 1030b7010; end: 1030b738b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b7010(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar11;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  long alStack_b0 [4];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000104259764();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar6 - extraout_x12);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = (undefined8 *)((long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar14 = *(long *)(unaff_x20 + _DAT_112f39a68);
  lVar10 = lVar14 + _DAT_113813188;
  puVar3 = puVar12;
  alStack_b0[3] = lVar2;
  (**(code **)(lVar11 + 0x10))(puVar12);
  lVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f39a70);
  func_0x000107c5ed90();
  uVar5 = lVar2;
  func_0x000107c3f3f4();
  func_0x000107c61170(puVar3);
  if ((int)uVar5 == 0) {
    lVar10 = unaff_x20 + _DAT_112f39a60;
    func_0x000107c61618();
    if (lVar10 == 0) goto LAB_1030b735c;
    puVar3 = puVar12;
    FUN_1030b738c(puVar12);
    puVar13 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c5e188(lVar10);
    func_0x000107c615e8(lVar10);
  }
  else {
    lVar14 = *(long *)(lVar14 + _DAT_1138131a0);
    if (lVar14 != 0) {
      puVar7 = (undefined8 *)(lVar14 + _DAT_113067ce0);
      pcVar15 = (code *)*puVar7;
      if (pcVar15 != (code *)0x0) {
        uVar4 = puVar7[1];
        uVar5 = uVar4;
        alStack_b0[2] = lVar2;
        func_0x000107c6157c();
        func_0x000107c5ed70();
        *puVar13 = 4;
        puVar13[1] = uVar5;
        puVar13[2] = lVar10;
        func_0x000107c6159c(puVar13,lVar1,6);
        uVar5 = 0;
        func_0x0001042bfdcc();
        alStack_b0[1] = uVar5;
        FUN_1030b77a4(puVar13,lVar6);
        lVar10 = lVar6;
        func_0x0001042b937c(lVar6);
        (*pcVar15)();
        func_0x000107c61170(lVar10);
        func_0x000107c6159c(lVar6,lVar1,0x11);
        func_0x0001042b937c(lVar6);
        lVar2 = alStack_b0[2];
        (*pcVar15)();
        func_0x000107c61170(lVar6);
        func_0x000100e3c674(pcVar15,uVar4);
        func_0x000102459608(puVar13);
        puVar3 = puVar13;
      }
    }
    func_0x000107c5ed90();
    puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar4 = 0;
    func_0x000100dfa6ec(0);
    uVar5 = 0x112d377a8;
    func_0x0001030b77e8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar13 = puVar7;
    func_0x000107c5f9dc(puVar7,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
    func_0x000107c6142c(puVar7);
    puVar8 = &UNK_110608808;
    func_0x000107c613fc(&UNK_110608808,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    uStack_70 = 0x1030b7780;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f3aa0;
    puStack_78 = &UNK_110608820;
    ppuVar9 = &puStack_90;
    puStack_68 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_68);
    func_0x000107c517ac(lVar2);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar13);
LAB_1030b735c:
  (**(code **)(lVar11 + 8))(puVar12,alStack_b0[3]);
  return;
}



/* Entry: 1030b738c; end: 1030b75b7;  */

undefined * FUN_1030b738c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [80];
  
  func_0x000107c614f0();
  puVar3 = unaff_x20;
  func_0x0001041b5884();
  uVar9 = *puVar3;
  uVar1 = puVar3[1];
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar10 = auStack_a0;
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined1 **)(lVar4 + 0x28) = puVar10;
  func_0x000107c61434(uVar1);
  func_0x000107c602fc(0x26);
  func_0x000107c6142c(0xe000000000000000);
  uVar5 = 0;
  func_0x000107c60714(unaff_x20,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0x6469766f7250205d,0xef204c5255206465);
  uVar6 = 0;
  func_0x000107c5ede0(0);
  uVar5 = 0x112d4b608;
  func_0x0001030b77e8(0x112d4b608,PTR___s10Foundation3URLVMa_110350988,
                      PTR___s10Foundation3URLVs23CustomStringConvertibleAAMc_1103509c0);
  func_0x000107c6057c(uVar6,uVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f11dca0);
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar4 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar4 + 0x30) = 0x5b;
  *(undefined8 *)(lVar4 + 0x38) = 0xe100000000000000;
  lVar7 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100f15a0c((undefined8 *)(lVar4 + 0x20));
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(uVar9,uVar1);
  func_0x000107c6142c(uVar1);
  lVar4 = lVar7;
  func_0x000107c5f9dc(lVar7,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar7);
  func_0x000107c466bc(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar4);
  return puVar8;
}



/* Entry: 1030b75b8; end: 1030b7613;  */

void FUN_1030b75b8(uint param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1030b7614(param_1 & 1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1030b7614; end: 1030b7753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b7614(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar6,*(long *)(unaff_x20 + _DAT_112f39a68) + _DAT_113813188,lVar1);
  lVar3 = _DAT_112f39a60;
  lVar2 = unaff_x20 + _DAT_112f39a60;
  func_0x000107c61618();
  if ((param_1 & 1) == 0) {
    if (lVar2 != 0) {
      puVar4 = puVar6;
      FUN_1030b738c(puVar6);
      puVar5 = puVar4;
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar4);
      func_0x000107c5e188(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar5);
    }
  }
  else {
    if (lVar2 != 0) {
      func_0x000107c5e190();
      func_0x000107c615e8(lVar2);
    }
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5e180();
      func_0x000107c615e8(lVar3);
    }
  }
  (**(code **)(lVar7 + 8))(puVar6,lVar1);
  return;
}



/* Entry: 1030b7754; end: 1030b777b; -[AdWebViewAttachmentExternalBrowserPresenter presentAttachment] */

void FUN_1030b7754(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b7010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b777c; end: 1030b77a3; -[AdWebViewAttachmentExternalBrowserPresenter dismissAttachment] */

void FUN_1030b777c(void)

{
  return;
}



/* Entry: 1030b77a4; end: 1030b7827;  */

undefined8 FUN_1030b77a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104259764();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1030b7828; end: 1030b7847; -[AdWebViewAttachmentInternalSnapBrowserPresenter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b7828(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f39aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030b7848; end: 1030b785b; -[AdWebViewAttachmentInternalSnapBrowserPresenter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b7848(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f39aa0,param_3);
  return;
}



/* Entry: 1030b785c; end: 1030b795f; -[AdWebViewAttachmentInternalSnapBrowserPresenter initWithAttachment:uiContainer:urlInterceptor:browserScopeExposer:timeProvider:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:] */

undefined8
FUN_1030b785c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_10);
  uVar1 = param_3;
  FUN_1030bafe4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  return uVar1;
}



/* Entry: 1030b7960; end: 1030b79bf; -[AdWebViewAttachmentInternalSnapBrowserPresenter init] */

void FUN_1030b7960(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdWebViewAttachmentInternalSnapBrowserPresenter"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b798c);
  (*pcVar1)();
}



/* Entry: 1030b79c0; end: 1030b7a77; -[AdWebViewAttachmentInternalSnapBrowserPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030b79ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b7a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b7a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b7a20) */
/* WARNING: Removing unreachable block (ram,0x0001030b79f0) */
/* WARNING: Removing unreachable block (ram,0x0001030b7a40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b79c0(long param_1)

{
  func_0x000100d340c4(param_1 + _DAT_112f39aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39aa8));
  return;
}



/* Entry: 1030b7a78; end: 1030b7a97;  */

void FUN_1030b7a78(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3dd0);
  return;
}



/* Entry: 1030b7a98; end: 1030b7b27; -[AdWebViewAttachmentInternalSnapBrowserPresenter canHandleAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1030b7a98(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_3 + _DAT_113067d28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_28 = *(ulong *)(lVar3 + _DAT_113813190);
    if (2 < uStack_28) {
      func_0x000107c61174(param_3);
      func_0x000107c61174(lVar3);
      func_0x000107c60614(&UNK_11074f9b8,&uStack_28,&UNK_11074f9b8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030b7b28);
      (*pcVar1)();
    }
    uVar2 = (uint)uStack_28 ^ 1;
  }
  return uVar2 & 1;
}



/* Entry: 1030b7b28; end: 1030b7b6f; -[AdWebViewAttachmentInternalSnapBrowserPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030b7b28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f39ac0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 1030b7b70; end: 1030b8513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b7b70(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  undefined8 uVar9;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar6 - extraout_x12;
  puVar2 = PTR_PTR_1126c5518;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f39ae8);
  *(undefined **)(unaff_x20 + _DAT_112f39ae8) = puVar2;
  func_0x000107c61170(uVar9);
  func_0x0001030b7e0c(lVar11,*(undefined8 *)(unaff_x20 + _DAT_112f39aa8));
  puVar3 = PTR_PTR_1126ae560;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  puVar4 = puVar3;
  func_0x000107c43bf4();
  func_0x000107c61180();
  puVar2 = &UNK_110608858;
  func_0x000107c613fc(&UNK_110608858,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_70 = FUN_1030bb6d4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e38b5c;
  puStack_78 = &UNK_110608870;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_68);
  func_0x000107c5dc64(puVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar4);
  uVar9 = 0;
  func_0x0001000956f0(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001030bb768(lVar11,lVar6,&SUB_104638d5c);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f39ab0);
  lVar1 = lVar6;
  func_0x0001030bae54();
  func_0x000107c613fc();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f39ad0);
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = uVar7;
  func_0x000107c61174();
  lVar8 = lVar6;
  func_0x000103c5d254(lVar6,puVar3,uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61574(lVar1);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f39ac0));
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar8);
  func_0x0001030bb7ac(lVar11,&SUB_104638d5c);
  return;
}



/* Entry: 1030b8514; end: 1030b8583;  */

void FUN_1030b8514(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1030b8584(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1030b8584; end: 1030b8803;  */

/* WARNING: Possible PIC construction at 0x0001030b8770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b8784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b8774) */
/* WARNING: Removing unreachable block (ram,0x0001030b8788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b8584(long param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 == 0) || (param_2 != (undefined1 *)0x0)) {
    FUN_1030b8ee8();
    lVar2 = unaff_x20 + _DAT_112f39aa0;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    if (param_2 == (undefined1 *)0x0) {
      param_2 = (undefined1 *)0x0;
    }
    else {
      func_0x000107c5ed2c(param_2);
    }
    func_0x000107c5e188(lVar2);
    func_0x000107c615e8(lVar2);
  }
  else {
    uVar3 = 0;
    func_0x0001042bfdcc();
    lVar4 = param_1;
    uStack_78 = uVar3;
    func_0x000107c614f0(param_1);
    func_0x000107c614e8();
    func_0x000107c615f0(param_1);
    func_0x000107c3ec9c(lVar4);
    lVar10 = *(long *)(unaff_x20 + _DAT_112f39aa8);
    pcStack_68 = *(code **)(lVar11 + 0x10);
    lStack_70 = _DAT_113813188;
    lVar6 = lVar10 + _DAT_113813188;
    puVar5 = puVar7;
    (*pcStack_68)(puVar7,lVar6,lVar2);
    func_0x000107c5ed70();
    pcVar8 = *(code **)(lVar11 + 8);
    (*pcVar8)(puVar7,lVar2);
    func_0x0001042bd850(lVar4,puVar5,lVar6);
    func_0x000107c6142c(lVar6);
    if (*(long *)(unaff_x20 + _DAT_112f39ae8) != 0) {
      func_0x000107c4dd9c();
    }
    if (*(long *)(lVar10 + _DAT_1138131a0) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar10 + _DAT_1138131a0) + _DAT_113067ce0);
      pcVar9 = (code *)*puVar1;
      if (pcVar9 != (code *)0x0) {
        uVar3 = puVar1[1];
        func_0x000107c6157c(uVar3);
        (*pcVar9)(lVar4);
        func_0x000100d340e8(pcVar9,uVar3);
      }
    }
    param_2 = puVar7;
    (*pcStack_68)(puVar7,lVar10 + lStack_70,lVar2);
    func_0x000107c5ed90();
    (*pcVar8)(puVar7,lVar2);
    func_0x000107c4b788(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1030b8804; end: 1030b882b; -[AdWebViewAttachmentInternalSnapBrowserPresenter presentAttachment] */

void FUN_1030b8804(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b7b70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b882c; end: 1030b8c97;  */

/* WARNING: Possible PIC construction at 0x0001030b8c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b8a7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b8c6c) */
/* WARNING: Removing unreachable block (ram,0x0001030b8a80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b882c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_100 [80];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [80];
  
  puVar9 = auStack_100;
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  puVar4 = *(undefined8 **)(unaff_x20 + _DAT_112f39ac0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001041b5884();
    uVar7 = *puVar4;
    uVar1 = puVar4[1];
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar9 = auStack_a0;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    *(undefined1 **)(lVar5 + 0x28) = puVar9;
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c61434(uVar1);
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar8 = 0;
    func_0x000107c60714(lVar3,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar8);
    func_0x000107c5fb78(0xd000000000000036,0x800000010f11dd20);
    puVar2 = PTR___sSSN_11034da80;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar5 + 0x30) = uStack_b0;
    *(undefined8 *)(lVar5 + 0x38) = uStack_a8;
    lVar3 = lVar5;
    func_0x000100214a84(lVar5);
    func_0x000107c61588(lVar5);
    func_0x0001030bb728((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c6142c(uVar1);
    lVar5 = lVar3;
    func_0x000107c5f9dc(lVar3,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar3);
    func_0x000107c466bc(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar5);
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f39aa0);
    func_0x000107c61618();
    if (puVar4 == (undefined8 *)0x0) {
LAB_1030b8c78:
      func_0x000107c61170(puVar6);
      return;
    }
    func_0x000107c61174(puVar6);
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c5e184(puVar4);
  }
  else {
    func_0x000107c61170();
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f39ae0);
    func_0x000107c61618();
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001041b5884();
      uVar7 = *puVar4;
      uVar1 = puVar4[1];
      lVar5 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      func_0x000107c61534();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      uVar8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(undefined1 **)(lVar5 + 0x28) = puVar9;
      uStack_b0 = 0;
      uStack_a8 = 0xe000000000000000;
      func_0x000107c61434(uVar1);
      func_0x000107c602fc(0x3a);
      func_0x000107c5fb78(0x5b,0xe100000000000000);
      uVar8 = 0;
      func_0x000107c60714(lVar3,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar8);
      func_0x000107c5fb78(0xd000000000000037,0x800000010f11dd60);
      puVar2 = PTR___sSSN_11034da80;
      *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar5 + 0x30) = uStack_b0;
      *(undefined8 *)(lVar5 + 0x38) = uStack_a8;
      lVar3 = lVar5;
      func_0x000100214a84(lVar5);
      func_0x000107c61588(lVar5);
      func_0x0001030bb728((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c6142c(uVar1);
      lVar5 = lVar3;
      func_0x000107c5f9dc(lVar3,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar3);
      func_0x000107c466bc(puVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar5);
      puVar4 = (undefined8 *)(unaff_x20 + _DAT_112f39aa0);
      func_0x000107c61618();
      if (puVar4 == (undefined8 *)0x0) goto LAB_1030b8c78;
      func_0x000107c61174(puVar6);
      func_0x000107c5ed2c();
      func_0x000107c61170(puVar6);
      func_0x000107c5e184(puVar4);
    }
    else {
      func_0x000107c42008();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar4);
  return;
}



/* Entry: 1030b8c98; end: 1030b8cbf; -[AdWebViewAttachmentInternalSnapBrowserPresenter dismissAttachment] */

void FUN_1030b8c98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030b882c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b8cc0; end: 1030b8ee7;  */

/* WARNING: Possible PIC construction at 0x0001030b8dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b8e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b8db0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b8cc0(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  double *pdVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  pdVar5 = &dStack_90;
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39ac8));
  dVar10 = *(double *)(unaff_x20 + _DAT_112f39af0);
  cVar2 = *(char *)((double *)(unaff_x20 + _DAT_112f39af0) + 1);
  dVar11 = 0.0;
  if (cVar2 != '\x01') {
    dVar11 = dVar10;
  }
  cVar3 = *(char *)((double *)(unaff_x20 + _DAT_112f39af8) + 1);
  if (cVar3 == '\x01') {
    uVar8 = 0;
    param_1 = param_1 - dVar11;
  }
  else {
    param_1 = *(double *)(unaff_x20 + _DAT_112f39af8);
    if (cVar2 != '\x01') {
      param_1 = param_1 - dVar10;
    }
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    uVar8 = (ulong)(param_1 == 0.0);
  }
  puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112f39ae8);
  if (puVar4 == (undefined1 *)0x0) {
    lVar6 = *(long *)(*(long *)(unaff_x20 + _DAT_112f39aa8) + _DAT_1138131a0);
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)(lVar6 + _DAT_113067ce8);
      pcVar9 = (code *)*puVar1;
      if ((pcVar9 != (code *)0x0) &&
         (puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112f39ae8), puVar4 != (undefined1 *)0x0)) {
        uVar7 = puVar1[1];
        func_0x000107c6157c(uVar7);
        func_0x000107c5e260();
        func_0x000107c61180();
        if (puVar4 != (undefined1 *)0x0) {
          (*pcVar9)();
          pdVar5 = (double *)puVar4;
          goto code_r0x000107c61170;
        }
        func_0x000100d340e8(pcVar9,uVar7);
      }
    }
    FUN_1030b8ee8();
    lVar6 = unaff_x20 + _DAT_112f39aa0;
    func_0x000107c61618();
    if (lVar6 == 0) {
      return;
    }
    func_0x0001041bc850(0);
    uStack_88 = 0x100;
    if (cVar3 == '\x01') {
      uStack_88 = 0;
    }
    uStack_88 = uStack_88 | uVar8;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    dStack_90 = param_1;
    func_0x0001041bbba4(&dStack_90);
    func_0x000107c5e180(lVar6);
    func_0x000107c615e8(lVar6);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4965c(param_2);
    func_0x000107c61180();
    func_0x000107c55fe8(param_1,puVar4);
    pdVar5 = (double *)puVar4;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pdVar5);
  return;
}



/* Entry: 1030b8ee8; end: 1030b8f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b8ee8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f39ae0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39af0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39af8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f39b00) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f39ae8);
  *(undefined8 *)(unaff_x20 + _DAT_112f39ae8) = 0;
  func_0x000107c61170(uVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112f39ac0);
  lVar3 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1030b8fa0; end: 1030b8fab; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidDismiss:] */

void FUN_1030b8fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1030b8cc0(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b8fac; end: 1030b8fef; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowserPresented:] */

void FUN_1030b8fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1030bb238();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030b8ff0; end: 1030b90fb; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:didReceiveResponse:url:] */

void FUN_1030b8ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_5 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar2,param_5);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,param_5 == 0,1);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1030bb2ac(param_4,puVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x0001030bb728(puVar2,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1030b90fc; end: 1030b92c3;  */

/* WARNING: Possible PIC construction at 0x0001030b91f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b9264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b929c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b9268) */
/* WARNING: Removing unreachable block (ram,0x000100d340e8) */
/* WARNING: Removing unreachable block (ram,0x000100d340f4) */
/* WARNING: Removing unreachable block (ram,0x000100d340ec) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001030b91fc) */
/* WARNING: Removing unreachable block (ram,0x0001030b920c) */
/* WARNING: Removing unreachable block (ram,0x0001030b9214) */
/* WARNING: Removing unreachable block (ram,0x0001030b9234) */
/* WARNING: Removing unreachable block (ram,0x0001030b9298) */
/* WARNING: Removing unreachable block (ram,0x0001030b924c) */
/* WARNING: Removing unreachable block (ram,0x0001030b92a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b90fc(double param_1,undefined8 param_2,long param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  double dVar5;
  
  if (*(char *)((double *)(unaff_x20 + _DAT_112f39af0) + 1) == '\x01') {
    puVar4 = (undefined *)0x0;
  }
  else {
    dVar5 = *(double *)(unaff_x20 + _DAT_112f39af0);
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c51b38(dVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1 - dVar5);
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_2;
  }
  lVar2 = -0x2000000000000000;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  func_0x0001042bfdcc(0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61434(param_3);
  func_0x000107c466c0(param_1,puVar3);
  func_0x0001042bd6c8(uVar1,lVar2,puVar4,puVar3,param_4 & 1,param_5 & 1);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1030b92c4; end: 1030b9357; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:] */

void FUN_1030b92c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_2);
  FUN_1030b90fc(param_1,param_4,param_3,param_5,param_6);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1030b9358; end: 1030b948f;  */

/* WARNING: Possible PIC construction at 0x0001030b93ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030b9458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030b93f0) */
/* WARNING: Removing unreachable block (ram,0x0001030b9400) */
/* WARNING: Removing unreachable block (ram,0x0001030b9408) */
/* WARNING: Removing unreachable block (ram,0x0001030b9428) */
/* WARNING: Removing unreachable block (ram,0x0001030b9478) */
/* WARNING: Removing unreachable block (ram,0x0001030b9440) */
/* WARNING: Removing unreachable block (ram,0x0001030b945c) */
/* WARNING: Removing unreachable block (ram,0x000100d340e8) */
/* WARNING: Removing unreachable block (ram,0x000100d340f4) */
/* WARNING: Removing unreachable block (ram,0x000100d340ec) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b9358(double param_1)

{
  undefined *puVar1;
  long unaff_x20;
  double dVar2;
  
  if (*(char *)((double *)(unaff_x20 + _DAT_112f39af0) + 1) == '\x01') {
    return;
  }
  dVar2 = *(double *)(unaff_x20 + _DAT_112f39af0);
  func_0x000107c61168(PTR_PTR_1126afec0);
  param_1 = param_1 - dVar2;
  func_0x000107c51b38(param_1);
  func_0x0001042bfdcc(0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x0001042bd7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1030b9490; end: 1030b94c7; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidInterceptPixelRequest:] */

void FUN_1030b9490(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1030b9358(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1030b94c8; end: 1030baa6b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030b94c8(double param_1,ulong *******param_2,ulong ******param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong ******ppppppuVar4;
  ulong *******pppppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *****pppppuVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x12;
  undefined1 uVar10;
  long unaff_x20;
  ulong *******pppppppuVar11;
  long lVar12;
  ulong uVar13;
  ulong ******ppppppuVar14;
  ulong ******ppppppuVar15;
  ulong *******pppppppuVar16;
  code *pcVar17;
  ulong ******ppppppuVar18;
  ulong *******pppppppuVar19;
  ulong *******pppppppuVar20;
  undefined1 uVar21;
  ulong ******ppppppuVar22;
  long lVar23;
  ulong *****pppppuStack_380;
  undefined1 auStack_377 [7];
  ulong *****apppppuStack_370 [24];
  ulong *****pppppuStack_2b0;
  ulong uStack_2a8;
  ulong *****pppppuStack_2a0;
  ulong ******ppppppuStack_298;
  ulong ******ppppppuStack_290;
  ulong ******ppppppuStack_288;
  undefined4 uStack_27c;
  double dStack_278;
  uint uStack_270;
  uint uStack_26c;
  ulong *****pppppuStack_268;
  uint uStack_25c;
  ulong *****pppppuStack_258;
  uint uStack_24c;
  ulong *****pppppuStack_248;
  uint uStack_23c;
  ulong *****pppppuStack_238;
  uint uStack_22c;
  long lStack_228;
  uint uStack_21c;
  long lStack_218;
  uint uStack_20c;
  long lStack_208;
  ulong ******ppppppuStack_200;
  ulong *******pppppppuStack_1e8;
  ulong ******ppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  ulong ******ppppppuStack_1d0;
  ulong ******ppppppuStack_1c8;
  ulong ******ppppppuStack_1c0;
  ulong ******ppppppuStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  ulong ******ppppppuStack_190;
  ulong ******ppppppuStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong *******apppppppuStack_170 [34];
  
  puVar1 = (undefined8 *)0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar1[-1] + 0x40));
  lVar9 = (long)&pppppuStack_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppppuVar22 = (ulong ******)(lVar9 - extraout_x12);
  func_0x00010462ff40();
  ppppppuStack_1c0 = (ulong ******)*puVar1;
  ppppppuVar14 = (ulong ******)puVar1[1];
  ppppppuStack_1b8 = ppppppuVar14;
  func_0x000107c61438(ppppppuVar14,2);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_1c0,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  if (param_3[2] == (ulong *****)0x0) {
LAB_1030b95d0:
    param_1 = 0.0;
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    pppppppuVar11 = (ulong *******)apppppppuStack_170;
    func_0x000100df95d0(pppppppuVar11);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_1030b95d0;
    }
    func_0x0001000bb420(param_3[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
    func_0x000107c6142c(ppppppuVar14);
    ppppppuVar14 = param_3;
  }
  func_0x000107c6142c(ppppppuVar14);
  func_0x0001007bbff0(apppppppuStack_170);
  puVar6 = PTR___sypN_11034f1a8;
  if (lStack_1a8 == 0) {
    ppppppuVar14 = (ulong ******)&ppppppuStack_1c0;
    func_0x0001030bb728(ppppppuVar14,0x112d387f8,&UNK_10d902650);
    ppppppuVar15 = (ulong ******)0x0;
  }
  else {
    uVar2 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    ppppppuVar14 = (ulong ******)&ppppppuStack_190;
    func_0x000107c6147c(ppppppuVar14,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
    ppppppuVar15 = ppppppuStack_190;
    if ((int)ppppppuVar14 == 0) {
      ppppppuVar15 = (ulong ******)0x0;
    }
  }
  func_0x00010462ff70();
  ppppppuStack_190 = (ulong ******)*ppppppuVar14;
  ppppppuVar14 = (ulong ******)ppppppuVar14[1];
  ppppppuStack_188 = ppppppuVar14;
  func_0x000107c61438(ppppppuVar14,2);
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  if (param_3[2] == (ulong *****)0x0) {
LAB_1030b96cc:
    param_1 = 0.0;
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    pppppppuVar11 = (ulong *******)apppppppuStack_170;
    func_0x000100df95d0(pppppppuVar11);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_1030b96cc;
    }
    func_0x0001000bb420(param_3[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
    func_0x000107c6142c(ppppppuVar14);
    ppppppuVar14 = param_3;
  }
  func_0x000107c6142c(ppppppuVar14);
  func_0x0001007bbff0(apppppppuStack_170);
  if (lStack_1a8 == 0) {
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b9850:
    ppppppuStack_1e0 = (ulong ******)0x0;
    if (ppppppuVar15 == (ulong ******)0x0) goto LAB_1030b973c;
LAB_1030b9858:
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x000104645258();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030b98dc:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030b98dc;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b996c:
      pppppppuStack_1d8 = (ulong *******)0x0;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030b996c;
      pppppppuStack_1d8 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170(pppppppuVar20);
    }
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x0001046452d8();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030b99f4:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030b99f4;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b9aa8:
      lStack_208 = 0;
      uStack_20c = 1;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030b9aa8;
      pppppppuVar11 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170(pppppppuVar20);
      uStack_20c = (uint)((long)pppppppuStack_1d8 < 1 ||
                         (long)pppppppuVar11 < (long)pppppppuStack_1d8);
      lStack_208 = 0;
      if (uStack_20c == 0) {
        lStack_208 = (long)pppppppuVar11 - (long)pppppppuStack_1d8;
      }
    }
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x000104645350();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030b9b38:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030b9b38;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b9bec:
      lStack_218 = 0;
      uStack_21c = 1;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030b9bec;
      pppppppuVar11 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170(pppppppuVar20);
      uStack_21c = (uint)((long)pppppppuStack_1d8 < 1 ||
                         (long)pppppppuVar11 < (long)pppppppuStack_1d8);
      lStack_218 = 0;
      if (uStack_21c == 0) {
        lStack_218 = (long)pppppppuVar11 - (long)pppppppuStack_1d8;
      }
    }
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x000104645314();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030b9c7c:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030b9c7c;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b9d30:
      lStack_228 = 0;
      uStack_22c = 1;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030b9d30;
      pppppppuVar11 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170(pppppppuVar20);
      uStack_22c = (uint)((long)pppppppuStack_1d8 < 1 ||
                         (long)pppppppuVar11 < (long)pppppppuStack_1d8);
      lStack_228 = 0;
      if (uStack_22c == 0) {
        lStack_228 = (long)pppppppuVar11 - (long)pppppppuStack_1d8;
      }
    }
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x000104645388();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030b9dc0:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030b9dc0;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b9e74:
      pppppuStack_238 = (ulong *****)0x0;
      uStack_23c = 1;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030b9e74;
      pppppppuVar11 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170(pppppppuVar20);
      uStack_23c = (uint)((long)pppppppuStack_1d8 < 1 ||
                         (long)pppppppuVar11 < (long)pppppppuStack_1d8);
      pppppuStack_238 = (ulong *****)0x0;
      if (uStack_23c == 0) {
        pppppuStack_238 = (ulong *****)((long)pppppppuVar11 - (long)pppppppuStack_1d8);
      }
    }
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x000104645350();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030b9f04:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030b9f04;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
LAB_1030b9fb8:
      pppppuStack_248 = (ulong *****)0x0;
      uStack_24c = 1;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030b9fb8;
      pppppppuVar11 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170(pppppppuVar20);
      uStack_24c = (uint)((long)pppppppuStack_1d8 < 1 ||
                         (long)pppppppuVar11 < (long)pppppppuStack_1d8);
      pppppuStack_248 = (ulong *****)0x0;
      if (uStack_24c == 0) {
        pppppuStack_248 = (ulong *****)((long)pppppppuVar11 - (long)pppppppuStack_1d8);
      }
    }
    ppppppuVar14 = ppppppuVar15;
    func_0x000107c61434();
    func_0x0001046453c8();
    ppppppuStack_190 = (ulong ******)*ppppppuVar14;
    ppppppuVar14 = (ulong ******)ppppppuVar14[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030ba048:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030ba048;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) {
      pppppppuVar11 = &ppppppuStack_1c0;
      func_0x0001030bb728(pppppppuVar11,0x112d387f8,&UNK_10d902650);
LAB_1030ba0fc:
      pppppppuVar20 = pppppppuVar11;
      pppppuStack_258 = (ulong *****)0x0;
      uStack_25c = 1;
    }
    else {
      uVar2 = 0;
      func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
      pppppppuVar20 = apppppppuStack_170[0];
      if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030ba0fc;
      pppppppuVar11 = apppppppuStack_170[0];
      func_0x000107c4c0a8();
      func_0x000107c61170();
      uStack_25c = (uint)((long)pppppppuStack_1d8 < 1 ||
                         (long)pppppppuVar11 < (long)pppppppuStack_1d8);
      pppppuStack_258 = (ulong *****)0x0;
      if (uStack_25c == 0) {
        pppppuStack_258 = (ulong *****)((long)pppppppuVar11 - (long)pppppppuStack_1d8);
      }
    }
    func_0x000104645298();
    ppppppuStack_190 = *pppppppuVar20;
    ppppppuVar14 = pppppppuVar20[1];
    ppppppuStack_188 = ppppppuVar14;
    func_0x000107c61438(ppppppuVar14,2);
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_190,PTR___sSSN_11034da80,
                        PTR___sSSSHsWP_11034da90);
    if (ppppppuVar15[2] == (ulong *****)0x0) {
LAB_1030ba184:
      param_1 = 0.0;
      ppppppuStack_1b8 = (ulong ******)0x0;
      ppppppuStack_1c0 = (ulong ******)0x0;
      lStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c61434(ppppppuVar15);
      pppppppuVar11 = (ulong *******)apppppppuStack_170;
      func_0x000100df95d0(pppppppuVar11);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c6142c(ppppppuVar15);
        goto LAB_1030ba184;
      }
      func_0x0001000bb420(ppppppuVar15[7] + (long)pppppppuVar11 * 4,&ppppppuStack_1c0);
      func_0x000107c6142c(ppppppuVar14);
      ppppppuVar14 = ppppppuVar15;
    }
    func_0x000107c6142c(ppppppuVar14);
    func_0x000107c6142c(ppppppuVar15);
    func_0x0001007bbff0(apppppppuStack_170);
    if (lStack_1a8 == 0) goto LAB_1030ba220;
    uVar2 = 0;
    func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    pppppppuVar11 = (ulong *******)apppppppuStack_170;
    func_0x000107c6147c(pppppppuVar11,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
    if (((ulong)pppppppuVar11 & 1) == 0) goto LAB_1030ba238;
    pppppppuVar11 = apppppppuStack_170[0];
    func_0x000107c4c0a8();
    func_0x000107c61170();
    uStack_26c = (uint)((long)pppppppuStack_1d8 < 1 || (long)pppppppuVar11 < (long)pppppppuStack_1d8
                       );
    pppppuStack_268 = (ulong *****)0x0;
    if (uStack_26c == 0) {
      pppppuStack_268 = (ulong *****)((long)pppppppuVar11 - (long)pppppppuStack_1d8);
    }
  }
  else {
    uVar2 = 0;
    func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    ppppppuVar14 = (ulong ******)&ppppppuStack_190;
    func_0x000107c6147c(ppppppuVar14,&ppppppuStack_1c0,puVar6 + 8,uVar2,6);
    ppppppuVar18 = ppppppuStack_190;
    if (((ulong)ppppppuVar14 & 1) == 0) goto LAB_1030b9850;
    ppppppuStack_1e0 = ppppppuStack_190;
    func_0x000107c4c0a8();
    func_0x000107c61170(ppppppuVar18);
    if (ppppppuVar15 != (ulong ******)0x0) goto LAB_1030b9858;
LAB_1030b973c:
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    pppppuStack_258 = (ulong *****)0x0;
    pppppuStack_238 = (ulong *****)0x0;
    lStack_218 = 0;
    pppppppuStack_1d8 = (ulong *******)0x0;
    lStack_208 = 0;
    lStack_228 = 0;
    pppppuStack_248 = (ulong *****)0x0;
    param_1 = 0.0;
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_25c = 1;
    uStack_23c = 1;
    uStack_21c = 1;
    uStack_20c = 1;
    uStack_22c = 1;
    uStack_24c = 1;
LAB_1030ba220:
    pppppppuVar11 = &ppppppuStack_1c0;
    func_0x0001030bb728(pppppppuVar11,0x112d387f8,&UNK_10d902650);
LAB_1030ba238:
    apppppppuStack_170[0] = pppppppuVar11;
    pppppuStack_268 = (ulong *****)0x0;
    uStack_26c = 1;
  }
  uStack_270 = (uint)((long)ppppppuStack_1e0 < 1);
  if (param_2 == (ulong *******)0x0) {
    uStack_27c = 0;
    pppppppuVar11 = (ulong *******)0x0;
    pppppppuStack_1e8 = (ulong *******)0x0;
    dStack_278 = 0.0;
  }
  else {
    pppppppuVar11 = param_2;
    func_0x000107c4a964();
    func_0x000107c61180();
    pppppppuStack_1e8 = param_2;
    func_0x000107c4a968();
    func_0x000107c61180();
    func_0x000107c49648(param_2);
    dStack_278 = param_1 * 100.0;
    pppppppuVar20 = param_2;
    func_0x000107c44b64();
    uStack_27c = SUB84(pppppppuVar20,0);
    apppppppuStack_170[0] = pppppppuVar20;
  }
  func_0x00010462ffe8();
  ppppppuStack_1c0 = *apppppppuStack_170[0];
  ppppppuVar14 = apppppppuStack_170[0][1];
  ppppppuStack_1b8 = ppppppuVar14;
  func_0x000107c61438(ppppppuVar14,2);
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_1c0,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  if (param_3[2] == (ulong *****)0x0) {
LAB_1030ba334:
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    pppppppuVar20 = (ulong *******)apppppppuStack_170;
    func_0x000100df95d0(pppppppuVar20);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_1030ba334;
    }
    func_0x0001000bb420(param_3[7] + (long)pppppppuVar20 * 4,&ppppppuStack_1c0);
    func_0x000107c6142c(ppppppuVar14);
    ppppppuVar14 = param_3;
  }
  func_0x000107c6142c(ppppppuVar14);
  func_0x0001007bbff0(apppppppuStack_170);
  if (lStack_1a8 == 0) {
    ppppppuVar14 = (ulong ******)&ppppppuStack_1c0;
    func_0x0001030bb728(ppppppuVar14,0x112d387f8,&UNK_10d902650);
    ppppppuStack_290 = (ulong ******)0x0;
    ppppppuStack_288 = (ulong ******)0x0;
    if (param_2 == (ulong *******)0x0) goto LAB_1030ba3e0;
LAB_1030ba38c:
    pppppppuVar20 = param_2;
    func_0x000107c41824();
    func_0x000107c61180();
    if (pppppppuVar20 != (ulong *******)0x0) {
      func_0x000107c5edb4(lVar9);
      func_0x000107c61170(pppppppuVar20);
    }
    lVar3 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar3 + -8);
    (**(code **)(lVar12 + 0x38))(lVar9,pppppppuVar20 == (ulong *******)0x0,1,lVar3);
    func_0x0001001021cc(lVar9,ppppppuVar22);
    pppppuVar8 = (ulong *****)0x1;
    ppppppuVar15 = ppppppuVar22;
    (**(code **)(lVar12 + 0x30))(ppppppuVar22,1,lVar3);
    ppppppuVar14 = ppppppuVar22;
    if ((int)ppppppuVar15 == 1) {
      func_0x0001030bb728(ppppppuVar22,0x112d36580,&UNK_10d9016d0);
      pppppuStack_2a0 = (ulong *****)0x0;
      ppppppuStack_298 = (ulong ******)0x0;
    }
    else {
      func_0x000107c5ed70();
      pppppuStack_2a0 = pppppuVar8;
      ppppppuStack_298 = ppppppuVar15;
      (**(code **)(lVar12 + 8))(ppppppuVar22,lVar3);
    }
  }
  else {
    ppppppuVar14 = (ulong ******)&ppppppuStack_190;
    func_0x000107c6147c(ppppppuVar14,&ppppppuStack_1c0,puVar6 + 8,PTR___sSSN_11034da80,6);
    ppppppuStack_290 = ppppppuStack_188;
    ppppppuStack_288 = ppppppuStack_190;
    if ((int)ppppppuVar14 == 0) {
      ppppppuStack_288 = (ulong ******)0x0;
      ppppppuStack_290 = (ulong ******)0x0;
    }
    if (param_2 != (ulong *******)0x0) goto LAB_1030ba38c;
LAB_1030ba3e0:
    pppppuStack_2a0 = (ulong *****)0x0;
    ppppppuStack_298 = (ulong ******)0x0;
  }
  func_0x00010462fee8();
  ppppppuStack_1c0 = (ulong ******)*ppppppuVar14;
  ppppppuVar14 = (ulong ******)ppppppuVar14[1];
  ppppppuStack_1b8 = ppppppuVar14;
  func_0x000107c61438(ppppppuVar14,2);
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c602d4(apppppppuStack_170,&ppppppuStack_1c0,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  if (param_3[2] == (ulong *****)0x0) {
LAB_1030ba4f8:
    ppppppuStack_1b8 = (ulong ******)0x0;
    ppppppuStack_1c0 = (ulong ******)0x0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    pppppppuVar20 = (ulong *******)apppppppuStack_170;
    func_0x000100df95d0(pppppppuVar20);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_1030ba4f8;
    }
    func_0x0001000bb420(param_3[7] + (long)pppppppuVar20 * 4,&ppppppuStack_1c0);
    func_0x000107c6142c(ppppppuVar14);
    ppppppuVar14 = param_3;
  }
  func_0x000107c6142c(ppppppuVar14);
  func_0x0001007bbff0(apppppppuStack_170);
  if (lStack_1a8 == 0) {
    ppppppuVar14 = (ulong ******)0x112d387f8;
    func_0x0001030bb728(&ppppppuStack_1c0,0x112d387f8,&UNK_10d902650);
    ppppppuVar15 = (ulong ******)0x0;
    ppppppuVar18 = (ulong ******)0x0;
    if (pppppppuVar11 == (ulong *******)0x0) goto LAB_1030ba584;
LAB_1030ba54c:
    pppppppuVar20 = pppppppuVar11;
    func_0x000107c4c0a8();
    uVar21 = 0;
  }
  else {
    ppppppuVar4 = (ulong ******)&ppppppuStack_190;
    ppppppuVar14 = (ulong ******)&ppppppuStack_1c0;
    func_0x000107c6147c(ppppppuVar4,ppppppuVar14,puVar6 + 8,PTR___sSSN_11034da80,6);
    ppppppuVar18 = ppppppuStack_188;
    ppppppuVar15 = ppppppuStack_190;
    if ((int)ppppppuVar4 == 0) {
      ppppppuVar15 = (ulong ******)0x0;
      ppppppuVar18 = (ulong ******)0x0;
    }
    if (pppppppuVar11 != (ulong *******)0x0) goto LAB_1030ba54c;
LAB_1030ba584:
    pppppppuVar20 = (ulong *******)0x0;
    uVar21 = 1;
  }
  uVar13 = (ulong)ppppppuStack_1e0 & ((long)ppppppuStack_1e0 >> 0x3f ^ 0xffffffffffffffffU);
  ppppppuStack_200 = param_3;
  if (pppppppuStack_1e8 == (ulong *******)0x0) {
    pppppppuVar16 = (ulong *******)0x0;
    uVar10 = 1;
    if (param_2 == (ulong *******)0x0) goto LAB_1030ba5f4;
LAB_1030ba5ac:
    pppppppuVar5 = param_2;
    uStack_2a8 = uVar13;
    func_0x000107c4a96c();
    func_0x000107c61180();
    if (pppppppuVar5 == (ulong *******)0x0) {
      pppppppuVar19 = (ulong *******)0x0;
      ppppppuVar14 = (ulong ******)0x0;
    }
    else {
      pppppppuVar19 = pppppppuVar5;
      func_0x000107c5faec();
      func_0x000107c61170(pppppppuVar5);
    }
    *(undefined1 *)(ppppppuVar22 + -2) = 2;
    ppppppuVar22[-4] = (ulong *****)pppppppuVar19;
    ppppppuVar22[-3] = (ulong *****)ppppppuVar14;
    *(undefined1 *)(ppppppuVar22 + -5) = uVar10;
    ppppppuVar22[-6] = (ulong *****)pppppppuVar16;
    *(undefined1 *)(ppppppuVar22 + -7) = uVar21;
    ppppppuVar22[-9] = (ulong *****)ppppppuVar18;
    ppppppuVar22[-8] = (ulong *****)pppppppuVar20;
    ppppppuVar22[-10] = (ulong *****)ppppppuVar15;
    *(char *)(ppppppuVar22 + -0xb) = (char)uStack_25c;
    ppppppuVar22[-0xc] = pppppuStack_258;
    *(char *)(ppppppuVar22 + -0xd) = (char)uStack_24c;
    ppppppuVar22[-0xe] = pppppuStack_248;
    *(char *)(ppppppuVar22 + -0xf) = (char)uStack_23c;
    ppppppuVar22[-0x10] = pppppuStack_238;
    *(char *)(ppppppuVar22 + -0x11) = (char)uStack_26c;
    ppppppuVar22[-0x12] = pppppuStack_268;
    ppppppuVar22[-0x14] = (ulong *****)pppppppuStack_1d8;
    ppppppuVar22[-0x15] = pppppuStack_2a0;
    ppppppuVar22[-0x16] = (ulong *****)ppppppuStack_298;
    ppppppuVar22[-0x17] = (ulong *****)ppppppuStack_290;
    ppppppuVar22[-0x18] = (ulong *****)ppppppuStack_288;
    *(char *)((long)ppppppuVar22 + -199) = (char)uStack_27c;
    ppppppuVar22[-0x1a] = (ulong *****)dStack_278;
    *(undefined1 *)(ppppppuVar22 + -0x13) = 0;
    *(undefined1 *)(ppppppuVar22 + -0x19) = 0;
    func_0x00010425f244(apppppppuStack_170,lStack_208,uStack_20c,lStack_218,uStack_21c,uStack_2a8,
                        uStack_270,lStack_228,uStack_22c);
    func_0x000107c614f0(param_2);
    func_0x000107c614e8();
    func_0x000107c3ec9c();
  }
  else {
    pppppppuVar16 = pppppppuStack_1e8;
    func_0x000107c4c0a8();
    uVar10 = 0;
    if (param_2 != (ulong *******)0x0) goto LAB_1030ba5ac;
LAB_1030ba5f4:
    ppppppuVar22[-4] = (ulong *****)0x0;
    ppppppuVar22[-3] = (ulong *****)0x0;
    *(undefined1 *)(ppppppuVar22 + -2) = 2;
    *(undefined1 *)(ppppppuVar22 + -5) = uVar10;
    ppppppuVar22[-6] = (ulong *****)pppppppuVar16;
    *(undefined1 *)(ppppppuVar22 + -7) = uVar21;
    ppppppuVar22[-9] = (ulong *****)ppppppuVar18;
    ppppppuVar22[-8] = (ulong *****)pppppppuVar20;
    ppppppuVar22[-10] = (ulong *****)ppppppuVar15;
    *(char *)(ppppppuVar22 + -0xb) = (char)uStack_25c;
    ppppppuVar22[-0xc] = pppppuStack_258;
    *(char *)(ppppppuVar22 + -0xd) = (char)uStack_24c;
    ppppppuVar22[-0xe] = pppppuStack_248;
    *(char *)(ppppppuVar22 + -0xf) = (char)uStack_23c;
    ppppppuVar22[-0x10] = pppppuStack_238;
    *(char *)(ppppppuVar22 + -0x11) = (char)uStack_26c;
    ppppppuVar22[-0x12] = pppppuStack_268;
    *(undefined1 *)(ppppppuVar22 + -0x13) = 0;
    ppppppuVar22[-0x14] = (ulong *****)pppppppuStack_1d8;
    ppppppuVar22[-0x15] = pppppuStack_2a0;
    ppppppuVar22[-0x16] = (ulong *****)ppppppuStack_298;
    ppppppuVar22[-0x17] = (ulong *****)ppppppuStack_290;
    ppppppuVar22[-0x18] = (ulong *****)ppppppuStack_288;
    *(char *)((long)ppppppuVar22 + -199) = (char)uStack_27c;
    *(undefined1 *)(ppppppuVar22 + -0x19) = 0;
    ppppppuVar22[-0x1a] = (ulong *****)dStack_278;
    func_0x00010425f244(apppppppuStack_170,lStack_208,uStack_20c,lStack_218,uStack_21c,uVar13,
                        uStack_270,lStack_228,uStack_22c);
  }
  func_0x0001042bfdcc(0);
  func_0x0001042cdfd8(0);
  func_0x000107c610f8();
  pppppppuVar20 = (ulong *******)apppppppuStack_170;
  func_0x0001042cbdbc();
  pppppppuVar16 = pppppppuVar20;
  func_0x0001042bd630();
  func_0x000107c61170(pppppppuVar20);
  lVar9 = _DAT_112f39ae8;
  if (*(long *)(unaff_x20 + _DAT_112f39ae8) != 0) {
    func_0x000107c4dd9c();
  }
  lVar3 = _DAT_1138131a0;
  lVar23 = *(long *)(unaff_x20 + _DAT_112f39aa8);
  lVar12 = *(long *)(lVar23 + _DAT_1138131a0);
  if (lVar12 == 0) {
LAB_1030ba87c:
    func_0x000107c61170();
  }
  else {
    puVar1 = (undefined8 *)(lVar12 + _DAT_113067ce0);
    pppppppuVar20 = (ulong *******)*puVar1;
    if (pppppppuVar20 == (ulong *******)0x0) goto LAB_1030ba87c;
    uVar2 = puVar1[1];
    func_0x000107c6157c(uVar2);
    (*(code *)pppppppuVar20)(pppppppuVar16);
    func_0x000107c61170(pppppppuVar16);
    func_0x000100d340e8(pppppppuVar20,uVar2);
    pppppppuVar16 = pppppppuVar20;
  }
  func_0x00010462ffa8();
  ppppppuStack_1d0 = *pppppppuVar16;
  ppppppuVar14 = pppppppuVar16[1];
  ppppppuStack_1c8 = ppppppuVar14;
  func_0x000107c61438(ppppppuVar14,2);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&ppppppuStack_1c0,&ppppppuStack_1d0,PTR___sSSN_11034da80,
                      PTR___sSSSHsWP_11034da90);
  ppppppuVar22 = ppppppuStack_200;
  if (ppppppuStack_200[2] == (ulong *****)0x0) {
LAB_1030ba900:
    ppppppuStack_188 = (ulong ******)0x0;
    ppppppuStack_190 = (ulong ******)0x0;
    lStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    func_0x000107c61434(ppppppuStack_200);
    ppppppuVar15 = (ulong ******)&ppppppuStack_1c0;
    func_0x000100df95d0(ppppppuVar15);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(ppppppuVar22);
      goto LAB_1030ba900;
    }
    func_0x0001000bb420(ppppppuVar22[7] + (long)ppppppuVar15 * 4,&ppppppuStack_190);
    func_0x000107c6142c(ppppppuVar14);
    ppppppuVar14 = ppppppuVar22;
  }
  func_0x000107c6142c(ppppppuVar14);
  func_0x0001007bbff0(&ppppppuStack_1c0);
  if (lStack_178 == 0) {
    func_0x000107c61170(pppppppuStack_1e8);
    func_0x000107c61170(pppppppuVar11);
    func_0x0001030bb728(&ppppppuStack_190,0x112d387f8,&UNK_10d902650);
    return;
  }
  uVar2 = 0;
  func_0x0001030bb7e8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppppppuVar14 = (ulong ******)&ppppppuStack_1d0;
  func_0x000107c6147c(ppppppuVar14,&ppppppuStack_190,PTR___sypN_11034f1a8 + 8,uVar2,6);
  ppppppuVar22 = ppppppuStack_1d0;
  if (((ulong)ppppppuVar14 & 1) != 0) {
    ppppppuVar14 = ppppppuStack_1d0;
    func_0x000107c3ebcc();
    func_0x000107c61170(ppppppuVar22);
    if (((ulong)ppppppuVar14 & 1) == 0) {
      func_0x000107c61170(pppppppuStack_1e8);
      goto LAB_1030baa48;
    }
    func_0x0001042bd770();
    if (*(long *)(unaff_x20 + lVar9) != 0) {
      func_0x000107c4dd9c();
    }
    lVar9 = *(long *)(lVar23 + lVar3);
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + _DAT_113067ce0);
      pcVar17 = (code *)*puVar1;
      if (pcVar17 != (code *)0x0) {
        uVar2 = puVar1[1];
        func_0x000107c6157c(uVar2);
        (*pcVar17)(ppppppuVar22);
        func_0x000107c61170(ppppppuVar22);
        func_0x000107c61170(pppppppuStack_1e8);
        func_0x000107c61170(pppppppuVar11);
        func_0x000100d340e8(pcVar17,uVar2);
        return;
      }
    }
    func_0x000107c61170(ppppppuVar22);
  }
  func_0x000107c61170(pppppppuStack_1e8);
LAB_1030baa48:
  func_0x000107c61170(pppppppuVar11);
  return;
}



/* Entry: 1030baa6c; end: 1030babfb; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowserInterimUpdate:performanceMetrics:] */

/* WARNING: Possible PIC construction at 0x0001030baafc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bab00) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030baa6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    if (*(char *)(param_1 + _DAT_112f39b00) != '\x01') {
      return;
    }
  }
  else {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    if ((*(byte *)(param_1 + _DAT_112f39b00) & 1) == 0) {
      if (param_4 == 0) {
        return;
      }
      lVar1 = param_1 + _DAT_112f39ae0;
      func_0x000107c61618(lVar1);
      func_0x000107c61174(param_1);
      FUN_1030b94c8(lVar1,param_4);
      func_0x000107c615e8(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1030babfc; end: 1030bac07; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidFinalizeJavaScriptMetrics:] */

void FUN_1030babfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1030bab4c)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bac08; end: 1030bac5b;  */

void FUN_1030bac08(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bac5c; end: 1030bac67; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:onEvent:] */

/* WARNING: Possible PIC construction at 0x0001030bacd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bacd4) */

void FUN_1030bac5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030bb604(param_4,&UNK_1042bd7fc);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030bac68; end: 1030bac73; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:onUserInteractionEvent:] */

/* WARNING: Possible PIC construction at 0x0001030bacd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bacd4) */

void FUN_1030bac68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030bb604(param_4,&UNK_1042bd8a0);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030bac74; end: 1030baceb;  */

/* WARNING: Possible PIC construction at 0x0001030bacd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bacd4) */

void FUN_1030bac74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1030bb604(param_4,param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1030bacec; end: 1030bad5b; -[AdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:didFinishLoadWithSuccess:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bacec(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f39af8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f39ac8);
    func_0x000107c61174();
    func_0x000107c3ceac(uVar2);
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1030bad5c; end: 1030bad6f;  */

void FUN_1030bad5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f39b98 == (undefined *)0x0 || ((ulong)puRam0000000112f39b98 & 1) != 0) {
    puVar1 = &UNK_10e973d36;
    func_0x000107c61518(&UNK_10e973d36,0x25,0,0);
    puRam0000000112f39b98 = puVar1;
  }
  return;
}



/* Entry: 1030bad70; end: 1030bade7;  */

void FUN_1030bad70(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001030bb7e8(0,param_1,param_2);
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



/* Entry: 1030bade8; end: 1030baf87;  */

void FUN_1030bade8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f39b80;
  plVar5 = (long *)&UNK_10db84ce0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001030bb7e8(0,0x112f38c60,&PTR_PTR_1126acb08);
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



/* Entry: 1030baf88; end: 1030bafe3;  */

void FUN_1030baf88(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x00010480f4c4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f39b48;
  plVar5 = (long *)&UNK_10db84ca8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1030bafe4; end: 1030bb237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bafe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f39aa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f39ae0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39af0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39af8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f39b00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ae8) = 0;
  *(long *)(unaff_x20 + _DAT_112f39aa8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ab0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ab8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ac0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ac8) = param_5;
  puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_1138131a8) + _DAT_113067eb8);
  lVar7 = puVar1[1];
  if (lVar7 == 0) {
    uVar6 = 0;
    lVar4 = -0x2000000000000000;
  }
  else {
    uVar6 = *puVar1;
    lVar4 = lVar7;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1138131b8);
  lVar2 = ((undefined8 *)(param_1 + _DAT_1138131b8))[1];
  func_0x000107c61174();
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61434(lVar7);
  func_0x000107c5fadc(uVar6,lVar4);
  func_0x000107c6142c(lVar4);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c5fadc(uVar5,lVar2);
  }
  puVar3 = PTR_PTR_1126b0798;
  func_0x000107c610f8();
  func_0x000107c485d4();
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  *(undefined **)(unaff_x20 + _DAT_112f39ad0) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f39ad8) = param_8;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030bb238; end: 1030bb2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bb238(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39ac8));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39af0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lVar2 = unaff_x20 + _DAT_112f39aa0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c5e190();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1030bb2ac; end: 1030bb603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bb2ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar10 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  uVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar11 - extraout_x12;
  (**(code **)(lVar15 + 0x38))(lVar12,1,1,lVar2);
  lVar14 = (long)*(int *)(lVar14 + 0x30);
  func_0x000100029394(param_2,lVar9);
  func_0x000100029394(lVar12,lVar9 + lVar14);
  pcVar13 = *(code **)(lVar15 + 0x30);
  lVar3 = lVar9;
  (*pcVar13)(lVar9,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x0001030bb728(lVar12,0x112d36580,&UNK_10d9016d0);
    lVar14 = lVar9 + lVar14;
    (*pcVar13)(lVar14,1,lVar2);
    if ((int)lVar14 == 1) {
      func_0x0001030bb728(lVar9,0x112d36580,&UNK_10d9016d0);
      return;
    }
  }
  else {
    func_0x000100029394(lVar9,uVar11);
    lVar3 = lVar9 + lVar14;
    (*pcVar13)(lVar3,1,lVar2);
    if ((int)lVar3 != 1) {
      puVar6 = puVar10;
      (**(code **)(lVar15 + 0x20))(puVar10,lVar9 + lVar14,lVar2);
      func_0x000101553b98();
      uVar7 = uVar11;
      func_0x000107c5fab8(uVar11,puVar10,lVar2,puVar6);
      pcVar13 = *(code **)(lVar15 + 8);
      (*pcVar13)(puVar10,lVar2);
      func_0x0001030bb728(lVar12,0x112d36580,&UNK_10d9016d0);
      (*pcVar13)(uVar11,lVar2);
      func_0x0001030bb728(lVar9,0x112d36580,&UNK_10d9016d0);
      if ((uVar7 & 1) != 0) {
        return;
      }
      goto LAB_1030bb4a8;
    }
    func_0x0001030bb728(lVar12,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar15 + 8))(uVar11,lVar2);
  }
  func_0x0001030bb728(lVar9,0x112d7e680,&UNK_10d95e350);
LAB_1030bb4a8:
  func_0x0001042bfdcc(0);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  puVar5 = puVar4;
  func_0x0001042bd684();
  func_0x000107c61170(puVar4);
  if (*(long *)(unaff_x20 + _DAT_112f39ae8) != 0) {
    func_0x000107c4dd9c();
  }
  lVar14 = *(long *)(*(long *)(unaff_x20 + _DAT_112f39aa8) + _DAT_1138131a0);
  if (lVar14 != 0) {
    puVar1 = (undefined8 *)(lVar14 + _DAT_113067ce0);
    pcVar13 = (code *)*puVar1;
    if (pcVar13 != (code *)0x0) {
      uVar8 = puVar1[1];
      func_0x000107c6157c(uVar8);
      (*pcVar13)(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000100d340e8(pcVar13,uVar8);
      return;
    }
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1030bb604; end: 1030bb6d3;  */

/* WARNING: Possible PIC construction at 0x0001030bb6a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bb6a8) */
/* WARNING: Removing unreachable block (ram,0x000100d340e8) */
/* WARNING: Removing unreachable block (ram,0x000100d340f4) */
/* WARNING: Removing unreachable block (ram,0x000100d340ec) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bb604(undefined8 param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  uVar2 = 0;
  func_0x0001042bfdcc(0);
  (*param_2)(param_1,uVar2);
  if (*(long *)(unaff_x20 + _DAT_112f39ae8) != 0) {
    func_0x000107c4dd9c();
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f39aa8) + _DAT_1138131a0);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_113067ce0);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(puVar1[1]);
      (*pcVar4)(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bb6d4; end: 1030bb6f7;  */

void FUN_1030bb6d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1030b8584(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030bb6f8; end: 1030bb827;  */

/* WARNING: Possible PIC construction at 0x0001030bb710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bb714) */

void FUN_1030bb6f8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1030bb828; end: 1030bb887; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter init] */

void FUN_1030bb828(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdWebViewAttachmentPresenter",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030bb854);
  (*pcVar1)();
}



/* Entry: 1030bb888; end: 1030bb8ff; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030bb8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030bb8e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bb8c8) */
/* WARNING: Removing unreachable block (ram,0x0001030bb8e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bb888(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39ba0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f39ba8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39bb0));
  return;
}



/* Entry: 1030bb900; end: 1030bb91f;  */

void FUN_1030bb900(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3ef0);
  return;
}



/* Entry: 1030bb920; end: 1030bb95b; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter canHandleAttachment:] */

bool FUN_1030bb920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 1;
}



/* Entry: 1030bb95c; end: 1030bb9bb; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030bb95c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112f39ba0);
  func_0x000107c61174();
  func_0x000107c4a214();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f39ba8);
    func_0x000107c4a214(uVar2);
  }
  else {
    uVar2 = 1;
  }
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1030bb9bc; end: 1030bba3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bb9bc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f39bb8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x0001041bb118(0);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f39bb0);
    func_0x0001041b95a8(uVar3,uVar2);
    func_0x000107c3d258(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar3);
  }
  FUN_1030bbef0();
                    /* WARNING: Could not recover jumptable at 0x00010c10b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1030bba40; end: 1030bba67; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter presentAttachment] */

void FUN_1030bba40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030bb9bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bba68; end: 1030bbb73;  */

/* WARNING: Possible PIC construction at 0x0001030bbb44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bbb48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bba68(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f39ba0);
  func_0x000107c4a214();
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f39ba8);
    func_0x000107c4a214();
    if (iVar1 == 0) {
      lVar3 = unaff_x20 + _DAT_112f39bb8;
      func_0x000107c61618();
      if (lVar3 != 0) {
        uVar4 = 0;
        func_0x0001041bb118(0);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f39bb0);
        func_0x0001041b95a8(uVar5,uVar4);
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        func_0x0001041bf5c0(0);
        func_0x0001041bf1a4();
        func_0x000107c3d24c(lVar3);
        func_0x000107c615e8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar5);
        return;
      }
      return;
    }
  }
  FUN_1030bbef0();
                    /* WARNING: Could not recover jumptable at 0x00010bf83210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1030bbb74; end: 1030bbb9b; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter dismissAttachment] */

void FUN_1030bbb74(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030bba68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bbb9c; end: 1030bbcbb; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter webBrowserDidPresent:] */

/* WARNING: Possible PIC construction at 0x0001030bbbd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bbbd4) */

void FUN_1030bbb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001030bbfb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030bbcbc; end: 1030bbd0f; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter webBrowserDidDismissWithAdAttachmentLoadingMetrics:] */

/* WARNING: Possible PIC construction at 0x0001030bbcf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bbcfc) */

void FUN_1030bbcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001030bbbe8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1030bbd10; end: 1030bbd77; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter webBrowserDidFailToPresent:withError:] */

/* WARNING: Possible PIC construction at 0x0001030bbd58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bbd5c) */

void FUN_1030bbd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x0001030bc058(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030bbd78; end: 1030bbec7; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter webBrowserDidFailToDismiss:withError:] */

/* WARNING: Possible PIC construction at 0x0001030bbdbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bbdc0) */

void FUN_1030bbd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_4);
  func_0x0001030bc15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1030bbec8; end: 1030bbeef; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdWebViewAttachmentPresenter webBrowserPresenterDidTrigger] */

void FUN_1030bbec8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001030bbddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030bbef0; end: 1030bc22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030bbef0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  ulong uStack_38;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f39bc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c437f8();
    func_0x000107c615e8(uVar2);
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)&DAT_112f39ba8;
      goto LAB_1030bbf74;
    }
  }
  uStack_38 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112f39bb0) + _DAT_113813190);
  if (2 < uStack_38) {
    func_0x000107c60614(&UNK_11074f9b8,&uStack_38,&UNK_11074f9b8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030bbfb4);
    (*pcVar1)();
  }
  plVar4 = (long *)(&PTR_DAT_110608898)[uStack_38];
LAB_1030bbf74:
  return *(undefined8 *)(unaff_x20 + *plVar4);
}



/* Entry: 1030bc22c; end: 1030bce57;  */

void FUN_1030bc22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106088c0;
  func_0x000107c613fc(&UNK_1106088c0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1030bce58,puVar1);
  return;
}



/* Entry: 1030bce58; end: 1030bce8b;  */

void FUN_1030bce58(void)

{
  long unaff_x20;
  
  func_0x0001030bc330(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1030bce8c; end: 1030bcecb;  */

undefined ** FUN_1030bce8c(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 1030bcecc; end: 1030bceeb; -[AdWebViewAttachmentWebBrowserPresenter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bcecc(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f39c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030bceec; end: 1030bceff; -[AdWebViewAttachmentWebBrowserPresenter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bceec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f39c20,param_3);
  return;
}



/* Entry: 1030bcf00; end: 1030bd003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bcf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f39c20,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f39c58) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c60);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c68);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f39c28) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f39c30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f39c38) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f39c40) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f39c48) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f39c50) = param_6;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030bd004; end: 1030bd0a7; -[AdWebViewAttachmentWebBrowserPresenter initWithAttachment:uiContainer:webBrowserScopeExposer:webBrowserScopeServices:timeProvider:webBrowsingConfigProvider:] */

void FUN_1030bd004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_8);
  FUN_1030bcf00(param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 1030bd0a8; end: 1030bd107; -[AdWebViewAttachmentWebBrowserPresenter init] */

void FUN_1030bd0a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdWebViewAttachmentWebBrowserPresenter"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030bd0d4);
  (*pcVar1)();
}



/* Entry: 1030bd108; end: 1030bd19f; -[AdWebViewAttachmentWebBrowserPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030bd134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030bd154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030bd184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030bd158) */
/* WARNING: Removing unreachable block (ram,0x0001030bd138) */
/* WARNING: Removing unreachable block (ram,0x0001030bd188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bd108(long param_1)

{
  func_0x0001030b6f8c(param_1 + _DAT_112f39c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f39c28));
  return;
}



/* Entry: 1030bd1a0; end: 1030bd1bf;  */

void FUN_1030bd1a0(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3fd8);
  return;
}



/* Entry: 1030bd1c0; end: 1030bd247; -[AdWebViewAttachmentWebBrowserPresenter canHandleAttachment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030bd1c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uStack_28;
  
  lVar2 = *(long *)(param_3 + _DAT_113067d28);
  if ((lVar2 != 0) && (uStack_28 = *(ulong *)(lVar2 + _DAT_113813190), 2 < uStack_28)) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar2);
    func_0x000107c60614(&UNK_11074f9b8,&uStack_28,&UNK_11074f9b8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030bd248);
    (*pcVar1)();
  }
  return lVar2 != 0;
}



/* Entry: 1030bd248; end: 1030bd28f; -[AdWebViewAttachmentWebBrowserPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1030bd248(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f39c38);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 1030bd290; end: 1030bd74b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bd290(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  long extraout_x8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long alStack_180 [3];
  undefined1 auStack_168 [2];
  undefined2 auStack_166 [3];
  undefined8 auStack_160 [2];
  undefined1 auStack_150 [8];
  undefined8 auStack_148 [2];
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [2];
  undefined1 auStack_120 [12];
  uint uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined4 uStack_bc;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_90;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = auStack_120 + lVar3;
  lVar17 = unaff_x20 + _DAT_112f39c20;
  func_0x000107c61618();
  if (lVar17 != 0) {
    func_0x000107c5e1a8();
    func_0x000107c615e8(lVar17);
  }
  lVar11 = _DAT_1138131a8;
  lVar17 = *(long *)(unaff_x20 + _DAT_112f39c28);
  lVar10 = *(long *)(lVar17 + _DAT_1138131a8);
  lStack_b0 = lVar5;
  if (*(int *)(lVar10 + _DAT_113067ef0) == 4) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112f39c50);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar10 = lVar5;
      func_0x000107c425b8();
      uStack_bc = (undefined4)lVar10;
      func_0x000107c615e8(lVar5);
      lVar10 = *(long *)(lVar17 + lVar11);
      goto LAB_1030bd38c;
    }
    lVar10 = *(long *)(lVar17 + lVar11);
  }
  uStack_bc = 0;
LAB_1030bd38c:
  lStack_c8 = ((undefined8 *)(lVar10 + _DAT_113067eb0))[1];
  if (lStack_c8 == 0) {
    uStack_d0 = 0;
    lStack_c8 = -0x2000000000000000;
  }
  else {
    uStack_d0 = *(undefined8 *)(lVar10 + _DAT_113067eb0);
    func_0x000107c61434();
  }
  lVar5 = ((undefined8 *)(lVar10 + _DAT_113067eb8))[1];
  if (lVar5 == 0) {
    lStack_e0 = -0x2000000000000000;
    uStack_d8 = 0;
  }
  else {
    uStack_d8 = *(undefined8 *)(lVar10 + _DAT_113067eb8);
    lStack_e0 = lVar5;
  }
  lVar11 = ((undefined8 *)(lVar10 + _DAT_113067ec0))[1];
  if (lVar11 == 0) {
    lStack_f8 = -0x2000000000000000;
    uStack_f0 = 0;
  }
  else {
    uStack_f0 = *(undefined8 *)(lVar10 + _DAT_113067ec0);
    lStack_f8 = lVar11;
  }
  uStack_100 = *(undefined8 *)(lVar17 + _DAT_1138131b8);
  uVar9 = ((undefined8 *)(lVar17 + _DAT_1138131b8))[1];
  uStack_108 = *(undefined8 *)(lVar10 + _DAT_113067ec8);
  uStack_110 = *(undefined8 *)(lVar10 + _DAT_113067ed0);
  lStack_e8 = _DAT_113813198;
  if (*(long *)(lVar17 + _DAT_113813198) == 0) {
    uStack_114 = 0;
  }
  else {
    uStack_114 = (uint)*(byte *)(*(long *)(lVar17 + _DAT_113813198) + _DAT_113067fe8);
  }
  uVar13 = *(undefined8 *)(lVar10 + _DAT_113067ee0);
  lStack_b8 = lVar14;
  if (*(long *)(lVar17 + _DAT_1138131b0) == 0) {
    uVar15 = 0;
    uVar16 = 0;
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(lVar17 + _DAT_1138131b0) + _DAT_1130914b8) + _DAT_1130914f0);
    uVar15 = *puVar1;
    uVar16 = puVar1[1];
    func_0x000107c61434(uVar16);
  }
  uVar2 = *(undefined1 *)(lVar17 + _DAT_1138131d0);
  func_0x0001046583bc(0);
  func_0x000107c610f8();
  func_0x000107c61434(lVar11);
  func_0x000107c61434(lVar5);
  func_0x000107c61434(uVar9);
  *(undefined8 *)((long)auStack_148 + lVar3) = 0;
  *(undefined8 *)((long)auStack_148 + lVar3 + 8) = 0;
  *(undefined8 *)((long)auStack_130 + lVar3) = 0;
  auStack_138[lVar3 + 1] = uVar2;
  auStack_138[lVar3] = (char)uStack_bc;
  auStack_150[lVar3] = 0;
  *(undefined8 *)((long)auStack_160 + lVar3) = uVar15;
  *(undefined8 *)((long)auStack_160 + lVar3 + 8) = uVar16;
  *(undefined2 *)(auStack_168 + lVar3 + 2) = 0;
  auStack_168[lVar3 + 1] = (char)uStack_114;
  auStack_168[lVar3] = 0;
  *(undefined8 *)((long)alStack_180 + lVar3 + 0x10) = uVar13;
  *(long *)((long)alStack_180 + lVar3 + 8) = lStack_f8;
  *(undefined8 *)((long)alStack_180 + lVar3) = uStack_f0;
  uVar13 = uStack_d0;
  func_0x000104655f14(uStack_d0,lStack_c8,uStack_d8,lStack_e0,uStack_100,uVar9,uStack_108,uStack_110
                     );
  puVar6 = PTR_PTR_1126c5518;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f39c58);
  *(undefined **)(unaff_x20 + _DAT_112f39c58) = puVar6;
  func_0x000107c61170(uVar9);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f39c48));
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f39c60);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lVar10 = *(long *)(lVar17 + lStack_e8);
  lVar12 = *(long *)(unaff_x20 + _DAT_112f39c30);
  uVar9 = 0;
  FUN_1030922c0(0);
  lVar14 = lVar12;
  func_0x000107c61480(lVar12,uVar9);
  lVar5 = lStack_b0;
  lVar3 = lStack_b8;
  lVar11 = lVar12;
  if (lVar14 != 0) {
    lVar11 = *(long *)(*(long *)(lVar14 + _DAT_112f38a60) + _DAT_113067478);
  }
  lVar17 = lVar17 + _DAT_113813188;
  (**(code **)(lStack_b8 + 0x10))(puStack_a8,lVar17,lStack_b0);
  uVar8 = (uint)lVar17;
  if (lVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar10 + _DAT_113067ff8);
  }
  func_0x0001030be878();
  if ((uVar8 & 0xff) == 1) {
    func_0x000107c61174(lVar10);
    func_0x000107c615f0(lVar11);
    uVar9 = 1;
  }
  else {
    func_0x000107c61174(lVar10);
    func_0x000107c615f0(lVar11);
    if ((int)uVar9 == 0) {
      uVar9 = 1;
    }
  }
  puVar4 = puStack_a8;
  puVar7 = puStack_a8;
  uStack_90 = uVar13;
  func_0x000103b80ee4(puStack_a8,lVar12,uVar9);
  (**(code **)(lVar3 + 8))(puVar4,lVar5);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f39c38));
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar10);
  func_0x000107c615e8(lVar11);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1030bd74c; end: 1030bda4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030bd74c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  ulong auStack_98 [3];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112ff0b70;
  func_0x000107c61428(param_1 + _DAT_112ff0b70,auStack_68,1,0);
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_2;
  func_0x000107c61170(uVar4);
  lVar2 = _DAT_112ff0b88;
  func_0x000107c61428(param_1 + _DAT_112ff0b88,auStack_80,1,0);
  func_0x000107c61604(param_1 + lVar2,param_3);
  lVar2 = _DAT_112ff0ba8;
  auStack_98[0] = *(ulong *)(*(long *)(param_3 + _DAT_112f39c28) + _DAT_113813190);
  if (2 < auStack_98[0]) {
    func_0x000107c61174(param_2);
    func_0x000107c60614(&UNK_11074f9b8,auStack_98,&UNK_11074f9b8,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1030bda50);
    (*pcVar3)();
  }
  func_0x000107c61428(param_1 + _DAT_112ff0ba8,auStack_98,1,0);
  *(ulong *)(param_1 + lVar2) = 5 - auStack_98[0];
  if ((param_4 == 0) || ((*(byte *)(param_4 + _DAT_113067fe0) & 1) == 0)) {
    uVar4 = 0;
    func_0x000103b7f21c(0);
    func_0x000107c61480(param_5,uVar4);
    uVar9 = (uint)(param_5 != 0);
    uVar8 = (uint)(param_5 != 0);
    if (param_4 == 0) {
      uVar8 = 0;
      uVar7 = 0;
      goto LAB_1030bd8a8;
    }
  }
  else {
    uVar8 = 1;
  }
  uVar9 = uVar8;
  uVar8 = 0x10000;
  if (*(char *)(param_4 + _DAT_113067fd8) == '\0') {
    uVar8 = 0;
  }
  uVar7 = 0x100;
  if (*(char *)(param_4 + _DAT_113067fd0) == '\0') {
    uVar7 = 0;
  }
LAB_1030bd8a8:
  func_0x000104655af4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar5 = (ulong)(uVar7 | uVar8 | uVar9);
  func_0x000104655554();
  lVar2 = _DAT_11380ce00;
  func_0x000107c61428(param_1 + _DAT_11380ce00,auStack_b0,1,0);
  uVar4 = *(undefined8 *)(param_1 + lVar2);
  *(ulong *)(param_1 + lVar2) = uVar5;
  func_0x000107c61170(uVar4);
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_4 + _DAT_113067ff0);
    uVar6 = ((undefined8 *)(param_4 + _DAT_113067ff0))[1];
    puVar1 = (undefined8 *)(param_1 + _DAT_112ff0b98);
    func_0x000107c61428(puVar1,auStack_c8,1,0);
    uVar10 = puVar1[1];
    *puVar1 = uVar4;
    puVar1[1] = uVar6;
    func_0x000107c61174();
    func_0x000107c61434(uVar6);
    func_0x000107c6142c(uVar10);
    uVar4 = *(undefined8 *)(param_4 + _DAT_113068000);
    uVar6 = ((undefined8 *)(param_4 + _DAT_113068000))[1];
    puVar1 = (undefined8 *)(param_1 + _DAT_112ff0ba0);
    func_0x000107c61428(puVar1,auStack_e0,1,0);
    uVar10 = puVar1[1];
    *puVar1 = uVar4;
    puVar1[1] = uVar6;
    func_0x000107c61434(uVar6);
    func_0x000107c6142c(uVar10);
    uVar4 = *(undefined8 *)(param_4 + _DAT_113068008);
    lVar2 = ((undefined8 *)(param_4 + _DAT_113068008))[1];
    func_0x000107c61434(lVar2);
    func_0x000107c61170(param_4);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(param_1 + _DAT_112ff0b78);
      func_0x000107c61428(puVar1,auStack_f8,1,0);
      uVar6 = puVar1[1];
      *puVar1 = uVar4;
      puVar1[1] = lVar2;
      func_0x000107c6142c(uVar6);
    }
  }
  return;
}


