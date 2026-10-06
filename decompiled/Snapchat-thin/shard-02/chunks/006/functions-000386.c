/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f168c8; end: 101f16b7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f168c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  uint uVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  lVar7 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = *(undefined **)(param_1 + _DAT_11302e940);
  uVar3 = ((undefined8 *)(param_1 + _DAT_11302e940))[1];
  func_0x000107c5eea0(puVar15);
  puVar14 = puVar1;
  func_0x000101f16da4(puVar1,uVar3);
  if (puVar14 == (undefined *)0x0) {
    puVar14 = *(undefined **)(unaff_x20 + _DAT_112e40258);
    puVar9 = puVar1;
    uVar11 = uVar3;
    func_0x000107c5fadc(puVar1);
    func_0x000107c4f558();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    if (puVar14 != (undefined *)0x0) {
      puVar9 = puVar14;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101f16b7c);
        (*pcVar6)();
      }
      puVar10 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      uVar5 = (uint)(uVar11 >> 0x20);
      uVar12 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar12 == 0) {
          func_0x00010006c090(puVar10);
          if ((uVar11 & 0xff000000000000) != 0) {
LAB_101f16a60:
            func_0x00010006c804();
            uVar13 = 0;
            FUN_101f17084();
            apuStack_80[0] = puVar14;
            uStack_68 = uVar13;
            func_0x000107c61428(unaff_x20 + _DAT_112e40240,auStack_98,0x21,0);
            func_0x000107c61434(uVar3);
            func_0x000107c61174(puVar14);
            func_0x000100102934(apuStack_80,puVar1,uVar3);
            func_0x000107c614a8(auStack_98);
            func_0x000100070bfc();
            uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e40260);
            func_0x000107c614f0(uVar13);
            uVar8 = 1;
            goto LAB_101f16978;
          }
        }
        else {
          func_0x00010006c090(puVar10);
          if ((long)(int)puVar10 != (long)puVar10 >> 0x20) goto LAB_101f16a60;
        }
      }
      else if (uVar12 == 2) {
        lVar2 = *(long *)(puVar10 + 0x10);
        lVar4 = *(long *)(puVar10 + 0x18);
        func_0x00010006c090(puVar10);
        if (lVar2 != lVar4) goto LAB_101f16a60;
      }
      else {
        func_0x00010006c090(puVar10);
      }
      func_0x000107c61170(puVar14);
    }
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e40260);
    func_0x000107c614f0(uVar13);
    func_0x0001004435b0(1,4,puVar15,uVar13);
    puVar14 = PTR_PTR_1126af7d0;
    func_0x000107c610f8(PTR_PTR_1126af7d0);
    func_0x000107c453e4();
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e40260);
    func_0x000107c614f0(uVar13);
    uVar8 = 0;
LAB_101f16978:
    func_0x0001004435b0(uVar8,4,puVar15,uVar13);
  }
  (**(code **)(lVar16 + 8))(puVar15,lVar7);
  return puVar14;
}



/* Entry: 101f16b7c; end: 101f16eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101f16b7c(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010006c804();
  lVar4 = _DAT_112e40240;
  func_0x000107c61428(unaff_x20 + _DAT_112e40240,&uStack_58,0x20,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    func_0x000100029284(param_1);
    if ((param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar4 + 0x38) + param_1 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar4);
      goto LAB_101f16c20;
    }
    func_0x000107c6142c(lVar4);
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_101f16c20:
  func_0x000107c614a8(&uStack_58);
  uVar2 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  puVar3 = &uStack_58;
  func_0x000107c6147c(puVar3,&uStack_80,uVar2,PTR___sSSN_11034da80,6);
  if (((ulong)puVar3 & 1) == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
  }
  func_0x000100070bfc();
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = uStack_58;
  return auVar1;
}



/* Entry: 101f16eb4; end: 101f16f0f; -[SCStoriesCOFProvider protoForKey:] */

void FUN_101f16eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101f168c8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f16f10; end: 101f16fbb; -[SCStoriesCOFProvider manualExposureValueForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f16f10(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e40258);
  uVar2 = *(undefined8 *)(param_3 + _DAT_11302e940);
  uVar1 = ((undefined8 *)(param_3 + _DAT_11302e940))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c4c270(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101f16fbc; end: 101f1701b; -[SCStoriesCOFProvider init] */

void FUN_101f16fbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesExperimentServiceImpl.StoriesCOFProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f16fe8);
  (*pcVar1)();
}



/* Entry: 101f1701c; end: 101f17083; -[SCStoriesCOFProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f17058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f1705c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1701c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e40240));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e40248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e40250));
  return;
}



/* Entry: 101f17084; end: 101f170e7;  */

void FUN_101f17084(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e40268 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126af7d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e40268 = puVar1;
  return;
}



/* Entry: 101f170e8; end: 101f1716f;  */

void FUN_101f170e8(void)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  uVar1 = 4;
  func_0x000107c5fe14(4,PTR___sSiN_11034deb0,PTR___sSiSHsWP_11034dec0);
  uStack_28 = uVar1;
  func_0x000100f73104(auStack_30,0);
  func_0x000100f73104(auStack_30,1);
  func_0x000100f73104(auStack_30,2);
  func_0x000100f73104(auStack_30,3);
  uRam0000000112e40398 = uStack_28;
  return;
}



/* Entry: 101f17170; end: 101f171c7;  */

undefined8 FUN_101f17170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_101f198cc(param_1,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 101f171c8; end: 101f172d3;  */

void FUN_101f171c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11049f250;
  func_0x000107c613fc(&UNK_11049f250,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  puVar3 = &UNK_11049f278;
  func_0x000107c613fc(&UNK_11049f278,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101f1a98c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(param_3);
  uVar4 = 0x112e403a8;
  func_0x0001000285a8(0x112e403a8,&UNK_10da2e468);
  uVar5 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101f1a9a4,puVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  *param_1 = uVar5;
  return;
}



/* Entry: 101f172d4; end: 101f17407;  */

long FUN_101f172d4(undefined1 *param_1)

{
  undefined1 *puVar1;
  long unaff_x22;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    FUN_101f1a9d0();
    func_0x000107c613f8(&UNK_11049f310,param_1,0,0);
    *param_1 = 0;
    func_0x000107c61654();
  }
  else {
    FUN_101f1a94c(0,0x112e40378,&PTR_PTR_1126a9a38);
    func_0x000107c614e8();
    puVar1 = (undefined1 *)0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f01b020);
    unaff_x22 = lStack_38;
    func_0x000107c5ced0();
    func_0x000107c61180();
    func_0x000107c61170();
    if (unaff_x22 == 0) {
      FUN_101f1a9d0();
      func_0x000107c613f8(&UNK_11049f310,puVar1,0,0);
      *puVar1 = 1;
      func_0x000107c61654();
      func_0x000107c615e8(lStack_38);
    }
    else {
      func_0x000107c615e8(lStack_38);
    }
  }
  return unaff_x22;
}



/* Entry: 101f17408; end: 101f174e7;  */

void FUN_101f17408(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  puVar1 = &UNK_11049f228;
  func_0x000107c613fc(&UNK_11049f228,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  uVar2 = 0x112e403a8;
  func_0x0001000285a8(0x112e403a8,&UNK_10da2e468);
  uVar3 = uStack_60;
  func_0x000100775264(uStack_60,1,FUN_101f1a91c,puVar1,uVar2);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(puVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 101f174e8; end: 101f175af;  */

void FUN_101f174e8(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  uVar1 = 0;
  uStack_50 = param_4;
  FUN_101f1a94c(0,0x112e40378,&PTR_PTR_1126a9a38);
  uVar2 = 0x112e403b0;
  func_0x0001000285a8(0x112e403b0,&UNK_10da2e470);
  func_0x0001031acfe4(&uStack_38,0,0,0x101f1a934,auStack_60,uVar3,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = uStack_38;
    func_0x000107c61170(uVar2);
    *param_1 = uVar3;
    func_0x000107c61174(uVar3);
  }
  return;
}



/* Entry: 101f175b0; end: 101f176cb;  */

void FUN_101f175b0(long *param_1,double param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  param_2 = param_2 * 1000.0;
  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f176c4);
    (*pcVar1)();
  }
  if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f176c8);
    (*pcVar1)();
  }
  if (param_2 < 1.8446744073709552e+19) {
    lVar2 = param_3;
    FUN_101f19cf4(param_3,(long)param_2);
    if (lVar2 == 0) {
      func_0x000105a15a50(param_3);
      func_0x000105a15b3c(param_3);
    }
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f176cc);
  (*pcVar1)();
}



/* Entry: 101f176cc; end: 101f17933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f176cc(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  lVar1 = 0;
  uStack_78 = unaff_x20;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    FUN_101f1a94c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar7 + 0x68))
              (puVar8,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar1);
    puVar2 = puVar8;
    func_0x000107c5fff0();
    (**(code **)(lVar7 + 8))(puVar8,lVar1);
  }
  puVar3 = &UNK_11049ee90;
  func_0x000107c613fc(&UNK_11049ee90,0x28,7);
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar4 = &UNK_11049eeb8;
  func_0x000107c613fc(&UNK_11049eeb8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11049eee0;
  func_0x000107c613fc(&UNK_11049eee0,0x38,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = FUN_101f19a60;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  *(undefined8 *)(puVar5 + 0x30) = uStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(param_1);
  uVar6 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101f19a94,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar5);
  puVar4 = &UNK_11049ef08;
  func_0x000107c613fc(&UNK_11049ef08,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101f19a60;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(puVar3);
  func_0x000104888fc0(0,1,0x101f1abe0,puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 101f17934; end: 101f17e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f17934(double param_1,code *param_2,code *param_3,code *param_4,code *param_5,
                  code *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long extraout_x8;
  undefined8 uVar15;
  code *pcVar16;
  code *pcVar17;
  code *unaff_x21;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  long lVar21;
  code *pcVar22;
  code *pcVar23;
  undefined8 uVar24;
  code *pcVar25;
  ulong auStack_190 [14];
  undefined1 auStack_120 [8];
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *apcStack_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = (code *)0x0;
  func_0x000107c5eea4();
  pcVar22 = *(code **)(pcVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcVar22 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar15 = *(undefined8 *)param_2;
  pcVar12 = (code *)auStack_88;
  pcVar14 = (code *)0x0;
  func_0x000107c61428(param_3 + 0x10,pcVar12,0,0);
  pcVar3 = param_3 + 0x10;
  func_0x000107c61618();
  pcVar23 = unaff_x21;
  if (pcVar3 == (code *)0x0) {
    (*param_4)();
    pcVar6 = param_5;
    goto LAB_101f17aa4;
  }
  pcVar6 = param_6;
  func_0x000101f1a6a0();
  pcVar18 = unaff_x21;
  if ((((ulong)pcVar6 & 1) == 0) ||
     (param_3 = *(code **)(param_6 + _DAT_112f51088), (long)param_3 < 0)) {
LAB_101f17a84:
    uVar15 = 0;
    pcVar17 = param_5;
LAB_101f17a88:
    (*param_4)(uVar15);
    param_2 = pcVar3;
    pcVar6 = pcVar17;
  }
  else {
    func_0x000107c5eea0(auStack_120 + lVar2);
    func_0x000107c5ee8c();
    pcVar12 = pcVar4;
    (**(code **)(pcVar22 + 8))(auStack_120 + lVar2);
    param_1 = param_1 * 1000.0;
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f17e48);
      (*pcVar3)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f17e4c);
      (*pcVar3)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f17e50);
      (*pcVar3)();
    }
    if (param_3 + -1 < (code *)(long)param_1) goto LAB_101f17a84;
    pcVar16 = *(code **)(param_6 + _DAT_112f51098);
    if ((ulong)pcVar16 >> 0x3e == 0) {
      pcVar19 = *(code **)(((ulong)pcVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      pcVar19 = (code *)((ulong)pcVar16 & 0xffffffffffffff8);
      if ((code *)0x7fffffffffffffff < pcVar16) {
        pcVar19 = pcVar16;
      }
      func_0x000107c60480();
      pcVar4 = pcVar16;
    }
    param_3 = (code *)0x0;
    pcVar17 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pcVar19 != (code *)0x0) {
      apcStack_b0[0] = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      pcStack_118 = param_6;
      pcStack_110 = param_5;
      pcStack_108 = param_4;
      func_0x000101f19414(0,(ulong)pcVar19 & ((long)pcVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
      pcVar17 = apcStack_b0[0];
      if ((long)pcVar19 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101f17e74);
        (*pcVar3)();
      }
      pcVar5 = (code *)PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
      func_0x000107c61168();
      pcVar25 = (code *)0x0;
      param_2 = pcVar3;
      pcVar7 = param_4;
      do {
        pcVar12 = pcVar16;
        if (((ulong)pcVar16 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)pcVar16 & 0xffffffffffffff8) + 0x10) <= (long)pcVar25) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101f17e44);
            (*pcVar3)();
          }
          pcVar6 = *(code **)(pcVar16 + (long)pcVar25 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          pcVar6 = pcVar25;
          FUN_101f19730();
        }
        param_3 = *(code **)(pcVar6 + _DAT_112f51068);
        func_0x000107c61174();
        func_0x000107c61174();
        pcVar22 = pcVar5;
        pcVar14 = param_3;
        func_0x000107c3e100();
        func_0x000107c61180();
        pcVar4 = (code *)0x0;
        func_0x000107c61174();
        if (pcVar22 == (code *)0x0) {
          pcVar18 = pcVar4;
          func_0x000107c5ed30();
          func_0x000107c61170(pcVar4);
          func_0x000107c61654();
          func_0x000107c61170(pcVar3);
          pcVar8 = (code *)0x0;
          pcVar3 = pcVar6;
LAB_101f17d6c:
          func_0x000107c61170(pcVar3);
          func_0x000107c61170(param_3);
          func_0x000107c61574(pcVar17);
          pcVar3 = pcVar6;
          pcVar22 = pcVar8;
          pcVar23 = pcVar18;
          param_4 = pcVar7;
          param_6 = pcVar25;
          goto LAB_101f17a94;
        }
        param_2 = pcVar22;
        func_0x000107c5ee30();
        func_0x000107c61170(param_3);
        func_0x000107c61170(pcVar22);
        pcVar20 = *(code **)(pcVar6 + _DAT_112f51070);
        pcVar22 = (code *)0x0;
        FUN_101f1a94c(0,0x112e0fd70,&PTR_PTR_1126c2098);
        func_0x000107c5fc48();
        pcVar7 = pcVar5;
        pcVar14 = pcVar20;
        func_0x000107c3e100();
        func_0x000107c61180();
        pcVar8 = (code *)0x0;
        func_0x000107c61174();
        pcVar4 = pcVar12;
        if (pcVar7 == (code *)0x0) {
          pcVar18 = pcVar8;
          func_0x000107c5ed30();
          func_0x000107c61170(pcVar8);
          func_0x000107c61654();
          func_0x000107c61170(pcVar20);
          func_0x00010006c090(param_2);
          pcVar7 = (code *)0x0;
          param_3 = pcVar6;
          goto LAB_101f17d6c;
        }
        pcVar14 = pcVar7;
        func_0x000107c5ee30();
        func_0x000107c61170(pcVar6);
        func_0x000107c61170(pcVar20);
        func_0x000107c61170(pcVar7);
        pcVar7 = *(code **)(pcVar17 + 0x10);
        param_3 = pcVar7 + 1;
        apcStack_b0[0] = pcVar17;
        if ((code *)(*(ulong *)(pcVar17 + 0x18) >> 1) <= pcVar7) {
          func_0x000101f19414(1 < *(ulong *)(pcVar17 + 0x18),param_3,1);
        }
        pcVar25 = pcVar25 + 1;
        *(code **)(apcStack_b0[0] + 0x10) = param_3;
        *(code **)(apcStack_b0[0] + (long)pcVar7 * 0x28 + 0x20) = pcVar6;
        *(code **)(apcStack_b0[0] + (long)pcVar7 * 0x28 + 0x28) = param_2;
        *(code **)(apcStack_b0[0] + (long)pcVar7 * 0x28 + 0x30) = pcVar12;
        *(code **)(apcStack_b0[0] + (long)pcVar7 * 0x28 + 0x38) = pcVar14;
        *(code **)(apcStack_b0[0] + (long)pcVar7 * 0x28 + 0x40) = pcVar22;
        pcVar17 = apcStack_b0[0];
        param_4 = pcStack_108;
        param_5 = pcStack_110;
        param_6 = pcStack_118;
      } while (pcVar19 != pcVar25);
    }
    uVar9 = 0;
    pcStack_a0 = param_6;
    pcStack_98 = pcVar17;
    uStack_90 = param_7;
    FUN_101f1a94c(0,0x112e40378,&PTR_PTR_1126a9a38);
    pcVar14 = FUN_101f1a8e8;
    pcVar12 = (code *)0x0;
    func_0x0001031acfe4(0,0,FUN_101f1a8e8,apcStack_b0,uVar15,uVar9,PTR___sytN_11034f1b0 + 8);
    if (unaff_x21 == (code *)0x0) {
      func_0x000107c6142c(pcVar17);
      pcVar4 = *(code **)(pcVar3 + _DAT_112e402a8);
      pcVar18 = *(code **)(pcVar4 + 0x10);
      *(code **)(pcVar4 + 0x10) = param_6;
      func_0x000107c6157c(pcVar4);
      func_0x000107c61170(pcVar18);
      func_0x000107c61174(param_6);
      func_0x000107c61574(pcVar4);
      uVar15 = 1;
      pcVar17 = param_5;
      goto LAB_101f17a88;
    }
    func_0x000107c6142c(pcVar17);
    param_2 = pcVar3;
    pcVar6 = param_5;
  }
LAB_101f17a94:
  func_0x000107c61170();
  param_5 = pcVar17;
  unaff_x21 = pcVar18;
LAB_101f17aa4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  *(code **)((long)auStack_190 + lVar2 + 0x10) = param_6;
  *(code **)((long)auStack_190 + lVar2 + 0x20) = pcVar6;
  *(code **)((long)auStack_190 + lVar2 + 0x28) = param_4;
  *(code **)((long)auStack_190 + lVar2 + 0x30) = pcVar23;
  *(code **)((long)auStack_190 + lVar2 + 0x38) = pcVar22;
  *(code **)((long)auStack_190 + lVar2 + 0x40) = param_2;
  *(code **)((long)auStack_190 + lVar2 + 0x48) = param_3;
  *(code **)((long)auStack_190 + lVar2 + 0x50) = param_5;
  *(code **)((long)auStack_190 + lVar2 + 0x58) = pcVar4;
  *(undefined1 **)((long)auStack_190 + lVar2 + 0x60) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_190 + lVar2 + 0x68) = FUN_101f17e78;
  func_0x000105a15a50();
  func_0x000105a15b3c(pcVar3);
  lVar21 = *(long *)(pcVar12 + _DAT_112f51088);
  if (-1 < lVar21) {
    uVar15 = *(undefined8 *)(pcVar12 + _DAT_112f51080);
    lVar13 = *(long *)(pcVar12 + _DAT_112f51090 + 8);
    *(code **)((long)auStack_190 + lVar2) = unaff_x21;
    if (lVar13 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(pcVar12 + _DAT_112f51090);
      func_0x000107c5fadc(uVar9);
    }
    func_0x000105a1574c(pcVar3,uVar15,lVar21,uVar9);
    func_0x000107c61170(uVar9);
    *(code **)((long)auStack_190 + lVar2 + 8) = pcVar3;
    lVar21 = *(long *)(pcVar14 + 0x10);
    if (lVar21 != 0) {
      pcVar3 = pcVar14 + 0x40;
      do {
        lVar13 = *(long *)(pcVar3 + -0x20);
        uVar9 = *(undefined8 *)(pcVar3 + -0x18);
        uVar15 = *(undefined8 *)(pcVar3 + -0x10);
        uVar1 = *(undefined8 *)(pcVar3 + -8);
        uVar24 = *(undefined8 *)pcVar3;
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174();
        *(undefined8 *)((long)auStack_190 + lVar2 + 0x18) = uVar9;
        func_0x00010006c00c(uVar9,uVar15);
        func_0x00010006c00c(uVar1,uVar24);
        func_0x000107c46ed0(puVar10);
        func_0x000107c5ee20(uVar9,uVar15);
        uVar11 = uVar1;
        func_0x000107c5ee20(uVar1,uVar24);
        func_0x000105a158ac(*(undefined8 *)((long)auStack_190 + lVar2 + 8),puVar10,uVar9,uVar11,
                            *(undefined8 *)(lVar13 + _DAT_112f51078));
        func_0x000107c61170(puVar10);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar11);
        func_0x00010006c090(uVar1,uVar24);
        func_0x00010006c090(*(undefined8 *)((long)auStack_190 + lVar2 + 0x18),uVar15);
        func_0x000107c61170(lVar13);
        lVar21 = lVar21 + -1;
        pcVar3 = pcVar3 + 0x28;
      } while (lVar21 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101f18044);
  (*pcVar3)();
}



/* Entry: 101f17e78; end: 101f18043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f17e78(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000105a15a50();
  func_0x000105a15b3c(param_1);
  lVar9 = *(long *)(param_2 + _DAT_112f51088);
  if (-1 < lVar9) {
    uVar10 = *(undefined8 *)(param_2 + _DAT_112f51080);
    if (((undefined8 *)(param_2 + _DAT_112f51090))[1] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + _DAT_112f51090);
      func_0x000107c5fadc(uVar3);
    }
    func_0x000105a1574c(param_1,uVar10,lVar9,uVar3);
    func_0x000107c61170(uVar3);
    lVar9 = *(long *)(param_3 + 0x10);
    if (lVar9 != 0) {
      puVar8 = (undefined8 *)(param_3 + 0x40);
      do {
        lVar5 = puVar8[-4];
        uVar3 = puVar8[-3];
        uVar10 = puVar8[-2];
        uVar1 = puVar8[-1];
        uVar11 = *puVar8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174();
        func_0x00010006c00c(uVar3,uVar10);
        func_0x00010006c00c(uVar1,uVar11);
        func_0x000107c46ed0(puVar4);
        uVar6 = uVar3;
        func_0x000107c5ee20(uVar3,uVar10);
        uVar7 = uVar1;
        func_0x000107c5ee20(uVar1,uVar11);
        func_0x000105a158ac(param_1,puVar4,uVar6,uVar7,*(undefined8 *)(lVar5 + _DAT_112f51078));
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        func_0x00010006c090(uVar1,uVar11);
        func_0x00010006c090(uVar3,uVar10);
        func_0x000107c61170(lVar5);
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 5;
      } while (lVar9 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f18044);
  (*pcVar2)();
}



/* Entry: 101f18044; end: 101f180f7; -[_TtC45SCSpotlightInterstitialRepositoryServicesImpl37SCSpotlightInterstitialRepositoryImpl replaceInterstitial:completionQueue:completion:] */

void FUN_101f18044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11049f0c0;
  func_0x000107c613fc(&UNK_11049f0c0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101f176cc(param_3,param_4,0x101f1abe8,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f180f8; end: 101f18513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f180f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  if (param_1 == 0) {
    FUN_101f1a94c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar8 + 0x68))
              (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar1);
    lVar2 = lVar7;
    func_0x000107c5fff0();
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
  }
  puVar3 = &UNK_11049ef30;
  func_0x000107c613fc(&UNK_11049ef30,0x28,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(lVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar4 = &UNK_11049eeb8;
  func_0x000107c613fc(&UNK_11049eeb8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11049ef58;
  func_0x000107c613fc(&UNK_11049ef58,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = 0x101f19ab4;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20;
  func_0x000107c6157c(puVar3);
  uVar6 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101f19ae8,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar5);
  puVar4 = &UNK_11049ef80;
  func_0x000107c613fc(&UNK_11049ef80,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x101f19ab4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(puVar3);
  func_0x000104888fc0(0,1,FUN_101f19b04,puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 101f18514; end: 101f18607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f18514(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)();
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + _DAT_112e402a8) + 0x10);
    *(undefined8 *)(*(long *)(param_2 + _DAT_112e402a8) + 0x10) = 0;
    func_0x000107c61170(uVar1);
    uVar1 = 0;
    uStack_60 = param_5;
    FUN_101f1a94c(0,0x112e40378,&PTR_PTR_1126a9a38);
    func_0x0001031acfe4(0,0,FUN_101f19c9c,auStack_70,uVar2,uVar1,PTR___sytN_11034f1b0 + 8);
    if (unaff_x21 == 0) {
      (*param_3)(1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101f18608; end: 101f18623; -[_TtC45SCSpotlightInterstitialRepositoryServicesImpl37SCSpotlightInterstitialRepositoryImpl clearInterstitialWithCompletionQueue:completion:] */

void FUN_101f18608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11049f098;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_11049f098,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101f180f8(param_3,0x101f1abe4,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f18624; end: 101f18a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f18624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  if (param_1 == 0) {
    FUN_101f1a94c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar8 + 0x68))
              (lVar7,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
               lVar1);
    lVar2 = lVar7;
    func_0x000107c5fff0();
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
  }
  puVar3 = &UNK_11049efa8;
  func_0x000107c613fc(&UNK_11049efa8,0x28,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(lVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar4 = &UNK_11049eeb8;
  func_0x000107c613fc(&UNK_11049eeb8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_11049efd0;
  func_0x000107c613fc(&UNK_11049efd0,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(code **)(puVar5 + 0x18) = FUN_101f19b54;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20;
  func_0x000107c6157c(puVar3);
  uVar6 = uStack_70;
  func_0x000100775264(uStack_70,1,0x101f19b8c,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar5);
  puVar4 = &UNK_11049eff8;
  func_0x000107c613fc(&UNK_11049eff8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101f19b54;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(puVar3);
  func_0x000104888fc0(0,1,FUN_101f19ba8,puVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 101f18a48; end: 101f18ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f18a48(double param_1,undefined8 *param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112e402a8;
  if (param_3 == 0) {
    (*param_4)();
  }
  else {
    lVar9 = *(long *)(*(long *)(param_3 + _DAT_112e402a8) + 0x10);
    uStack_a0 = param_6;
    uStack_98 = uVar7;
    if (lVar9 == 0) {
      (*param_4)(0);
    }
    else {
      lVar6 = *(long *)(lVar9 + _DAT_112f51088);
      lVar3 = lVar9;
      pcStack_a8 = param_4;
      func_0x000107c61174();
      lStack_b0 = lVar3;
      func_0x000107c5eea0(lVar5);
      func_0x000107c5ee8c();
      (**(code **)(lVar8 + 8))(lVar5,lVar2);
      param_1 = param_1 * 1000.0;
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f18ca0);
        (*pcVar1)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f18ca4);
        (*pcVar1)();
      }
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f18ca8);
        (*pcVar1)();
      }
      if (lVar6 - 1U < (ulong)(long)param_1) {
        uVar7 = *(undefined8 *)(*(long *)(param_3 + lVar4) + 0x10);
        *(undefined8 *)(*(long *)(param_3 + lVar4) + 0x10) = 0;
        func_0x000107c61170(uVar7);
        uStack_80 = uStack_a0;
        uVar7 = 0;
        FUN_101f1a94c(0,0x112e40378,&PTR_PTR_1126a9a38);
        func_0x0001031acfe4(0,0,FUN_101f1abc8,auStack_90,uStack_98,uVar7,PTR___sytN_11034f1b0 + 8);
        if (unaff_x21 == 0) {
          (*pcStack_a8)(0);
        }
        func_0x000107c61170(param_3);
        param_3 = lStack_b0;
      }
      else {
        lVar4 = lStack_b0;
        func_0x000107c61174(lStack_b0);
        (*pcStack_a8)(lVar9);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar4);
        param_3 = lVar4;
      }
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 101f18ca8; end: 101f18cc3; -[_TtC45SCSpotlightInterstitialRepositoryServicesImpl37SCSpotlightInterstitialRepositoryImpl currentInterstitialWithCompletionQueue:completion:] */

void FUN_101f18ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11049f070;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_11049f070,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101f18624(param_3,0x101f19c48,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101f18cc4; end: 101f18d63;  */

void FUN_101f18cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_7)(param_3,param_6,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 101f18d64; end: 101f18e2f; -[_TtC45SCSpotlightInterstitialRepositoryServicesImpl37SCSpotlightInterstitialRepositoryImpl shouldFetchInterstitialWithCompletionQueue:completion:] */

/* WARNING: Possible PIC construction at 0x000101f18e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f18e10) */

void FUN_101f18d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11049f020;
  func_0x000107c613fc(&UNK_11049f020,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_11049f048;
  func_0x000107c613fc(&UNK_11049f048,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101f19c34;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  FUN_101f18624(param_3,FUN_101f1abdc,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101f18e30; end: 101f18f7b;  */

undefined8 FUN_101f18e30(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == param_2) {
LAB_101f18f58:
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar5 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
      lVar4 = 0;
      while( true ) {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar4 + 1;
            if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101f18f7c);
              (*pcVar1)();
            }
            if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_101f18f58;
            uVar9 = ((ulong *)(param_1 + 0x38))[lVar8];
            lVar4 = lVar4 + 1;
          } while (uVar9 == 0);
          uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar4;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar3) | lVar8 << 6) * 8);
        uVar3 = *(ulong *)(param_2 + 0x28);
        func_0x000107c60688(uVar3,lVar7);
        uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) break;
        while (lVar4 = lVar8, *(long *)(*(long *)(param_2 + 0x30) + uVar3 * 8) != lVar7) {
          uVar3 = uVar3 + 1 & ~uVar6;
          if ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0)
          goto LAB_101f18f50;
        }
      }
    }
LAB_101f18f50:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 101f18f7c; end: 101f18fdb; -[_TtC45SCSpotlightInterstitialRepositoryServicesImpl37SCSpotlightInterstitialRepositoryImpl init] */

void FUN_101f18f7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpotlightInterstitialRepositoryServicesImpl.SCSpotlightInterstitialRepositoryImpl"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f18fa8);
  (*pcVar1)();
}



/* Entry: 101f18fdc; end: 101f19023; -[_TtC45SCSpotlightInterstitialRepositoryServicesImpl37SCSpotlightInterstitialRepositoryImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f18ff8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f18ffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f18fdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e402a0));
  return;
}



/* Entry: 101f19024; end: 101f19047;  */

void FUN_101f19024(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f19048; end: 101f1905b;  */

bool FUN_101f19048(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101f1905c; end: 101f19107;  */

void FUN_101f1905c(void)

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



/* Entry: 101f19108; end: 101f19117;  */

void FUN_101f19108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101f19118; end: 101f1923f;  */

ulong FUN_101f19118(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f19240);
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
  FUN_101f19240(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1923c);
      (*pcVar1)();
    }
    FUN_101f192c0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101f19240; end: 101f192bf;  */

undefined * FUN_101f19240(undefined *param_1,undefined *param_2)

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
    FUN_101f193b8();
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



/* Entry: 101f192c0; end: 101f193b7;  */

long FUN_101f192c0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101f193b4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101f193b8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x00010329b290(0);
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
      func_0x00010329b290(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101f193b0);
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



/* Entry: 101f193b8; end: 101f1942f;  */

void FUN_101f193b8(void)

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
    func_0x00010329b290();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e403c8;
  plVar5 = (long *)&UNK_10db7da70;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101f19430; end: 101f19573;  */

undefined * FUN_101f19430(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f19574);
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
    puVar3 = (undefined *)0x112e40380;
    func_0x0001000285a8(0x112e40380,&UNK_10da2e450);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e40388;
    func_0x0001000285a8(0x112e40388,&UNK_10da2e458);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101f19574; end: 101f1972f;  */

ulong FUN_101f19574(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f19658);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1965c);
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
  FUN_101f1a94c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f19730);
  (*pcVar2)();
}



/* Entry: 101f19730; end: 101f198cb;  */

ulong FUN_101f19730(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f19800);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f19804);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010329b290(0);
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
    func_0x00010329b290(0);
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
  func_0x000107c5fb78(0xd000000000000026,0x800000010f01aff0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f198cc);
  (*pcVar2)();
}



/* Entry: 101f198cc; end: 101f19a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f198cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puVar2 = &UNK_11049f1d8;
  func_0x000107c613fc(&UNK_11049f1d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(long *)(puVar2 + 0x20) = lVar1;
  uVar3 = 0x112e403a0;
  func_0x0001000285a8(0x112e403a0,&UNK_10da2e460);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  pcVar4 = FUN_101f1a904;
  func_0x0001000bdd8c(FUN_101f1a904,puVar2);
  lVar5 = 0;
  func_0x000101f19c14();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e402a0) = param_1;
  *(long *)(unaff_x20 + _DAT_112e402a8) = lVar5;
  puVar2 = &UNK_11049f200;
  func_0x000107c613fc(&UNK_11049f200,0x30,7);
  *(code **)(puVar2 + 0x10) = pcVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(long *)(puVar2 + 0x20) = lVar5;
  *(long *)(puVar2 + 0x28) = lVar1;
  func_0x000107c613fc(uVar3,0x18,7);
  func_0x000107c61580(param_1,2);
  func_0x000107c61580(lVar5,2);
  func_0x000107c6157c(pcVar4);
  uVar3 = 0x101f1a910;
  func_0x0001000bdd8c(0x101f1a910,puVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112e40298) = uVar3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(lVar5);
  return puVar6;
}



/* Entry: 101f19a60; end: 101f19b03;  */

void FUN_101f19a60(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101f1834c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),&UNK_11049f188,0x101f1abec,&UNK_11049f1a0);
  return;
}



/* Entry: 101f19b04; end: 101f19b27;  */

void FUN_101f19b04(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 101f19b28; end: 101f19b53;  */

void FUN_101f19b28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f19b54; end: 101f19b5f;  */

void FUN_101f19b54(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f7fc(0,*(undefined8 *)(unaff_x20 + 0x10));
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11049f0e8;
  func_0x000107c613fc(&UNK_11049f0e8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  pcStack_70 = FUN_101f19c58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11049f100;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar7);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_98,uVar5,uVar6,lVar1,uVar7);
  func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(puVar8,lVar1);
  (**(code **)(lVar11 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 101f19b60; end: 101f19ba7;  */

void FUN_101f19b60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f19ba8; end: 101f19bf3;  */

void FUN_101f19ba8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 101f19bf4; end: 101f19c33;  */

void FUN_101f19bf4(void)

{
  func_0x000107c61168(&PTR_PTR_112809630);
  return;
}



/* Entry: 101f19c34; end: 101f19c57;  */

void FUN_101f19c34(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101f19c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101f19c58; end: 101f19c7f;  */

void FUN_101f19c58(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101f19c80; end: 101f19c9b;  */

void FUN_101f19c80(long param_1,long param_2)

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



/* Entry: 101f19c9c; end: 101f19cf3;  */

void FUN_101f19c9c(undefined8 param_1)

{
  func_0x000105a15a50();
  func_0x000105a15b3c(param_1);
  return;
}



/* Entry: 101f19cf4; end: 101f1a8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_101f19cf4(undefined8 ****param_1,undefined8 ****param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ***pppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ****unaff_x21;
  undefined8 ***pppuVar18;
  undefined8 **ppuVar19;
  undefined8 ****unaff_x23;
  undefined8 ****ppppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ****unaff_x24;
  undefined8 ****unaff_x25;
  undefined **unaff_x26;
  undefined8 ****unaff_x27;
  undefined8 ****unaff_x28;
  undefined1 auStack_180 [24];
  undefined *puStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar3 = param_1;
  pppuStack_c8 = param_2;
  func_0x000105a15398();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101f1a94c(0,0x112e403b8,&PTR_PTR_1126c1210);
  ppppuVar16 = ppppuVar3;
  func_0x000107c5fc54(ppppuVar3,uVar4);
  func_0x000107c61170(ppppuVar3);
  func_0x000105a15564();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101f1a94c(0,0x112e403c0,&PTR_PTR_1126c1218);
  ppppuVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar4);
  func_0x000107c61170(param_1);
  ppppuVar9 = ppppuVar3;
  if ((ulong)ppppuVar16 >> 0x3e == 0) {
    if (*(long *)(((ulong)ppppuVar16 & 0xffffffffffffff8) + 0x10) != 1) goto LAB_101f1a5d0;
LAB_101f19dc8:
    if (((ulong)ppppuVar16 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)ppppuVar16 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1a648);
        (*pcVar2)();
      }
      unaff_x21 = (undefined8 ****)ppppuVar16[4];
      func_0x000107c61174();
    }
    else {
      unaff_x21 = (undefined8 ****)0x0;
      FUN_101f19574(0,ppppuVar16,&PTR_PTR_1126c1210,0x112e403b8);
    }
    func_0x000107c6142c(ppppuVar16);
    ppppuVar13 = unaff_x21;
    func_0x000105a15e2c();
    ppppuVar20 = unaff_x23;
    if ((long)ppppuVar13 < 0) {
LAB_101f19f5c:
      unaff_x23 = ppppuVar20;
      func_0x000107c61170(unaff_x21);
    }
    else {
      ppppuVar20 = (undefined8 ****)((ulong)ppppuVar3 >> 0x3e);
      if (ppppuVar20 == (undefined8 ****)0x0) {
        ppppuVar13 = (undefined8 ****)((undefined8 ****)((ulong)ppppuVar3 & 0xffffffffffffff8))[2];
      }
      else {
        ppppuVar13 = (undefined8 ****)((ulong)ppppuVar3 & 0xffffffffffffff8);
        if (((ulong)ppppuVar3 & 0x8000000000000000) != 0) {
          ppppuVar13 = ppppuVar3;
        }
        func_0x000107c60480();
      }
      if (lRam0000000112e40390 != -1) {
        func_0x000107c61568(0x112e40390,FUN_101f170e8);
        ppppuVar16 = ppppuVar13;
      }
      unaff_x24 = ppppuRam0000000112e40398;
      if (ppppuVar13 != (undefined8 ****)ppppuRam0000000112e40398[2]) goto LAB_101f19f5c;
      ppppuVar16 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      pppuStack_c0 = ppppuVar13;
      if (ppppuVar13 != (undefined8 ****)0x0) {
        pppuStack_90 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
        pppuStack_f0 = unaff_x21;
        pppuStack_d0 = ppppuVar20;
        func_0x000100dd4260(0,ppppuVar13,0);
        unaff_x25 = (undefined8 ****)0x0;
        unaff_x26 = &PTR_PTR_1126c1218;
        unaff_x27 = (undefined8 ****)0x112e403c0;
        do {
          pppuVar18 = pppuStack_90;
          if (((ulong)ppppuVar3 & 0xc000000000000001) == 0) {
            ppppuVar16 = (undefined8 ****)ppppuVar3[(long)unaff_x25 + 4];
            func_0x000107c61174();
          }
          else {
            ppppuVar16 = unaff_x25;
            FUN_101f19574(unaff_x25,ppppuVar3,&PTR_PTR_1126c1218,0x112e403c0);
          }
          unaff_x28 = ppppuVar16;
          func_0x000105a16090();
          func_0x000107c61170(ppppuVar16);
          pppuVar17 = (undefined8 ***)pppuVar18[2];
          pppuStack_90 = pppuVar18;
          if ((undefined8 ***)((ulong)pppuVar18[3] >> 1) <= pppuVar17) {
            func_0x000100dd4260((undefined8 ***)0x1 < pppuVar18[3],
                                (undefined8 ***)((long)pppuVar17 + 1),1);
          }
          unaff_x25 = (undefined8 ****)((long)unaff_x25 + 1);
          pppuStack_90[2] = (undefined8 ***)((long)pppuVar17 + 1);
          pppuStack_90[(long)((long)pppuVar17 + 4)] = unaff_x28;
          ppppuVar16 = (undefined8 ****)pppuStack_90;
          unaff_x21 = (undefined8 ****)pppuStack_f0;
          ppppuVar20 = (undefined8 ****)pppuStack_d0;
        } while ((undefined8 ****)pppuStack_c0 != unaff_x25);
      }
      param_1 = ppppuVar16;
      func_0x000101164de8();
      func_0x000107c6142c(ppppuVar16);
      ppppuVar16 = param_1;
      unaff_x23 = unaff_x24;
      FUN_101f18e30();
      func_0x000107c6142c(param_1);
      if (((ulong)ppppuVar16 & 1) == 0) goto LAB_101f19f5c;
      ppppuVar13 = unaff_x21;
      func_0x000105a15e2c();
      if ((long)ppppuVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1a680);
        (*pcVar2)();
      }
      if ((undefined8 ****)((long)ppppuVar13 + -1) < pppuStack_c8) goto LAB_101f19f5c;
      pppuStack_c8 = (undefined8 ***)((ulong)ppppuVar3 & 0xffffffffffffff8);
      if (ppppuVar20 == (undefined8 ****)0x0) {
        unaff_x28 = (undefined8 ****)pppuStack_c8[2];
      }
      else {
        unaff_x28 = (undefined8 ****)pppuStack_c8;
        if (((ulong)ppppuVar3 & 0x8000000000000000) != 0) {
          unaff_x28 = ppppuVar3;
        }
        func_0x000107c60480();
      }
      pppuStack_f0 = unaff_x21;
      if (unaff_x28 == (undefined8 ****)0x0) {
        pppuStack_f8 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uStack_e8 = 0;
        pppuStack_d0 = (undefined8 ***)((ulong)ppppuVar3 & 0xc000000000000001);
        uStack_d8 = *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518;
        pppuStack_f8 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
        ppppuVar16 = ppppuVar20;
        ppppuVar9 = (undefined8 ****)0x0;
        pppuStack_e0 = unaff_x28;
LAB_101f1a044:
        do {
          if ((undefined8 ****)pppuStack_d0 == (undefined8 ****)0x0) {
            if (pppuStack_c8[2] <= ppppuVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1a624);
              (*pcVar2)();
            }
            unaff_x27 = (undefined8 ****)ppppuVar3[(long)ppppuVar9 + 4];
            func_0x000107c61174();
          }
          else {
            unaff_x27 = ppppuVar9;
            unaff_x23 = ppppuVar3;
            FUN_101f19574(ppppuVar9,ppppuVar3,&PTR_PTR_1126c1218,0x112e403c0);
          }
          ppppuVar13 = (undefined8 ****)((long)ppppuVar9 + 1);
          if (SCARRY8((long)ppppuVar9,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1a620);
            (*pcVar2)();
          }
          ppppuVar20 = unaff_x27;
          func_0x000105a1609c();
          func_0x000107c61180();
          unaff_x26 = (undefined **)ppppuVar20;
          func_0x000107c5ee30();
          func_0x000107c61170(ppppuVar20);
          ppppuVar20 = (undefined8 ****)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
          func_0x000107c610f8();
          func_0x00010006c00c(unaff_x26,unaff_x23);
          param_1 = (undefined8 ****)unaff_x26;
          func_0x000107c5ee20(unaff_x26,unaff_x23);
          pppuStack_b0 = (undefined8 ****)0x0;
          func_0x000107c45424();
          func_0x000107c61170(param_1);
          unaff_x21 = (undefined8 ****)pppuStack_b0;
          if (ppppuVar20 == (undefined8 ****)0x0) {
            param_1 = (undefined8 ****)pppuStack_b0;
            func_0x000107c61174();
            func_0x000107c5ed30();
            func_0x000107c61170(param_1);
            func_0x000107c61654();
            func_0x000107c61170(unaff_x27);
            unaff_x28 = (undefined8 ****)pppuStack_e0;
            func_0x000107c614ac(unaff_x21);
            func_0x00010006c090(unaff_x26,unaff_x23);
            func_0x00010006c090(unaff_x26);
            uStack_e8 = 0;
            uStack_88 = 0;
            pppuStack_90 = (undefined8 ****)0x0;
            lStack_78 = 0;
            uStack_80 = 0;
LAB_101f1a030:
            func_0x00010006e7f4(&pppuStack_90);
            ppppuVar20 = ppppuVar16;
          }
          else {
            func_0x000107c61174();
            func_0x00010006c090(unaff_x26,unaff_x23);
            func_0x000107c57e2c(ppppuVar20);
            ppppuVar5 = ppppuVar20;
            func_0x000107c41478();
            func_0x000107c61180();
            if (ppppuVar5 == (undefined8 ****)0x0) {
              uStack_a8 = 0;
              pppuStack_b0 = (undefined8 ****)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              func_0x000107c60234(&pppuStack_b0);
              func_0x000107c615e8(ppppuVar5);
              param_1 = ppppuVar5;
            }
            uStack_88 = uStack_a8;
            pppuStack_90 = pppuStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            func_0x000107c43594(ppppuVar20);
            func_0x00010006c090(unaff_x26);
            func_0x000107c61170(ppppuVar20);
            unaff_x21 = ppppuVar20;
            if (lStack_78 == 0) {
              func_0x000107c61170(unaff_x27);
              goto LAB_101f1a030;
            }
            uVar4 = 0;
            FUN_101f1a94c(0,0x112e0fd70,&PTR_PTR_1126c2098);
            ppppuVar5 = &pppuStack_b0;
            unaff_x23 = &pppuStack_90;
            func_0x000107c6147c(ppppuVar5,unaff_x23,PTR___sypN_11034f1a8 + 8,uVar4,6);
            ppppuVar20 = (undefined8 ****)pppuStack_b0;
            ppppuVar8 = unaff_x27;
            if (((ulong)ppppuVar5 & 1) == 0) goto LAB_101f1a3fc;
            ppppuVar16 = unaff_x27;
            func_0x000105a160a8();
            func_0x000107c61180();
            unaff_x26 = (undefined **)ppppuVar16;
            func_0x000107c5ee30();
            func_0x000107c61170(ppppuVar16);
            ppppuVar5 = (undefined8 ****)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
            func_0x000107c610f8();
            func_0x00010006c00c(unaff_x26,unaff_x23);
            ppppuVar6 = (undefined8 ****)unaff_x26;
            func_0x000107c5ee20(unaff_x26,unaff_x23);
            pppuStack_b0 = (undefined8 ****)0x0;
            func_0x000107c45424();
            func_0x000107c61170(ppppuVar6);
            unaff_x21 = (undefined8 ****)pppuStack_b0;
            ppppuVar16 = ppppuVar20;
            if (ppppuVar5 == (undefined8 ****)0x0) {
              param_1 = (undefined8 ****)pppuStack_b0;
              func_0x000107c61174();
              func_0x000107c5ed30();
              func_0x000107c61170(param_1);
              func_0x000107c61654();
              func_0x000107c61170(ppppuVar20);
              func_0x000107c61170(unaff_x27);
              func_0x000107c614ac(unaff_x21);
              func_0x00010006c090(unaff_x26,unaff_x23);
              func_0x00010006c090(unaff_x26);
              uStack_e8 = 0;
              uStack_88 = 0;
              pppuStack_90 = (undefined8 ****)0x0;
              lStack_78 = 0;
              uStack_80 = 0;
              unaff_x28 = (undefined8 ****)pppuStack_e0;
              goto LAB_101f1a030;
            }
            func_0x000107c61174();
            func_0x00010006c090(unaff_x26,unaff_x23);
            func_0x000107c57e2c(ppppuVar5);
            ppppuVar7 = ppppuVar5;
            func_0x000107c41478();
            func_0x000107c61180();
            if (ppppuVar7 == (undefined8 ****)0x0) {
              uStack_a8 = 0;
              pppuStack_b0 = (undefined8 ****)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              func_0x000107c60234(&pppuStack_b0);
              func_0x000107c615e8(ppppuVar7);
              ppppuVar6 = ppppuVar7;
            }
            uStack_88 = uStack_a8;
            pppuStack_90 = pppuStack_b0;
            lStack_78 = lStack_98;
            uStack_80 = uStack_a0;
            func_0x000107c43594(ppppuVar5);
            func_0x00010006c090(unaff_x26);
            func_0x000107c61170(ppppuVar5);
            param_1 = ppppuVar6;
            if (lStack_78 == 0) {
              func_0x000107c61170(ppppuVar20);
              func_0x000107c61170(unaff_x27);
              unaff_x21 = ppppuVar5;
              unaff_x28 = (undefined8 ****)pppuStack_e0;
              goto LAB_101f1a030;
            }
            uVar4 = 0x112e400c0;
            func_0x0001000285a8(0x112e400c0,&UNK_10da2e120);
            ppppuVar7 = &pppuStack_b0;
            unaff_x23 = &pppuStack_90;
            func_0x000107c6147c(ppppuVar7,unaff_x23,PTR___sypN_11034f1a8 + 8,uVar4,6);
            unaff_x21 = (undefined8 ****)pppuStack_b0;
            unaff_x28 = (undefined8 ****)pppuStack_e0;
            if (((ulong)ppppuVar7 & 1) == 0) {
              func_0x000107c61170(unaff_x27);
              ppppuVar8 = ppppuVar20;
              unaff_x21 = ppppuVar5;
LAB_101f1a3fc:
              func_0x000107c61170(ppppuVar8);
              ppppuVar20 = ppppuVar16;
            }
            else {
              param_1 = unaff_x27;
              func_0x000105a160b4();
              if ((undefined8 ****)0x2 < param_1) {
                func_0x000107c61170(ppppuVar20);
                func_0x000107c6142c(unaff_x21);
                param_1 = ppppuVar6;
                goto LAB_101f1a3fc;
              }
              ppppuVar5 = unaff_x27;
              func_0x000105a16090();
              uVar4 = 0;
              func_0x00010329b290(0);
              func_0x000107c610f8();
              unaff_x23 = ppppuVar20;
              func_0x00010329ad6c(ppppuVar5,ppppuVar20,unaff_x21,param_1,uVar4);
              func_0x000107c61170(unaff_x27);
              pppuVar18 = pppuStack_f8;
              if (ppppuVar5 != (undefined8 ****)0x0) {
                ppppuVar9 = (undefined8 ****)pppuStack_f8;
                func_0x000107c61550();
                if ((((int)ppppuVar9 == 0) || ((long)pppuVar18 < 0)) ||
                   (ppppuVar9 = (undefined8 ****)pppuVar18, ((ulong)pppuVar18 >> 0x3e & 1) != 0)) {
                  if ((ulong)pppuVar18 >> 0x3e == 0) {
                    ppppuVar9 = *(undefined8 *****)(((ulong)pppuVar18 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    ppppuVar9 = (undefined8 ****)((ulong)pppuVar18 & 0xffffffffffffff8);
                    if ((undefined8 ****)0x7fffffffffffffff < pppuVar18) {
                      ppppuVar9 = (undefined8 ****)pppuVar18;
                    }
                    func_0x000107c60480();
                  }
                  unaff_x23 = (undefined8 ****)((long)ppppuVar9 + 1);
                  ppppuVar9 = (undefined8 ****)0x0;
                  FUN_101f19118(0,unaff_x23,1,pppuVar18);
                }
                uVar14 = (ulong)ppppuVar9 & 0xffffffffffffff8;
                param_1 = *(undefined8 *****)(uVar14 + 0x10);
                unaff_x21 = (undefined8 ****)((long)param_1 + 1);
                pppuStack_f8 = ppppuVar9;
                if ((undefined8 ****)(*(ulong *)(uVar14 + 0x18) >> 1) <= param_1) {
                  ppppuVar8 = (undefined8 ****)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
                  unaff_x23 = unaff_x21;
                  FUN_101f19118(ppppuVar8,unaff_x21,1,ppppuVar9);
                  uVar14 = (ulong)ppppuVar8 & 0xffffffffffffff8;
                  pppuStack_f8 = ppppuVar8;
                }
                *(undefined8 *****)(uVar14 + 0x10) = unaff_x21;
                *(undefined8 *****)(uVar14 + (long)param_1 * 8 + 0x20) = ppppuVar5;
                ppppuVar9 = ppppuVar13;
                if (ppppuVar13 == unaff_x28) break;
                goto LAB_101f1a044;
              }
            }
          }
          ppppuVar16 = ppppuVar20;
          ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + 1);
        } while (ppppuVar13 != unaff_x28);
      }
      unaff_x25 = (undefined8 ****)pppuStack_f8;
      if ((ulong)pppuStack_f8 >> 0x3e == 0) {
        ppppuVar16 = *(undefined8 *****)(((ulong)pppuStack_f8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        ppppuVar16 = (undefined8 ****)((ulong)pppuStack_f8 & 0xffffffffffffff8);
        if ((undefined8 ****)0x7fffffffffffffff < pppuStack_f8) {
          ppppuVar16 = (undefined8 ****)pppuStack_f8;
        }
        func_0x000107c60480();
      }
      unaff_x24 = (undefined8 ****)pppuStack_f0;
      func_0x000107c6142c(ppppuVar3);
      if (ppppuVar16 == (undefined8 ****)pppuStack_c0) {
        ppppuVar9 = unaff_x24;
        func_0x000105a15e20();
        ppppuVar3 = unaff_x24;
        func_0x000105a15e2c();
        if ((long)ppppuVar3 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1a69c);
          (*pcVar2)();
        }
        ppppuVar16 = unaff_x24;
        func_0x000105a15e38();
        func_0x000107c61180();
        if (ppppuVar16 == (undefined8 ****)0x0) {
          unaff_x21 = (undefined8 ****)0x0;
          unaff_x23 = (undefined8 ****)0x0;
        }
        else {
          unaff_x21 = ppppuVar16;
          func_0x000107c5faec();
          func_0x000107c61170(ppppuVar16);
          param_1 = ppppuVar16;
        }
        ppppuVar16 = (undefined8 ****)0x0;
        func_0x00010329b2ec();
        func_0x000107c610f8();
        func_0x00010329b080(ppppuVar9,ppppuVar3,unaff_x21,unaff_x23,unaff_x25);
        func_0x000107c61170(unaff_x24);
        pppuStack_118 = ppppuVar9;
        goto LAB_101f1a5e4;
      }
      func_0x000107c61170(unaff_x24);
      ppppuVar9 = unaff_x25;
      unaff_x23 = ppppuVar20;
    }
  }
  else {
    param_1 = (undefined8 ****)((ulong)ppppuVar16 & 0xffffffffffffff8);
    if ((undefined8 ****)0x7fffffffffffffff < ppppuVar16) {
      param_1 = ppppuVar16;
    }
    ppppuVar20 = param_1;
    func_0x000107c60480();
    if ((ppppuVar20 == (undefined8 ****)0x1) &&
       (ppppuVar20 = param_1, func_0x000107c60480(), ppppuVar20 != (undefined8 ****)0x0))
    goto LAB_101f19dc8;
LAB_101f1a5d0:
    func_0x000107c6142c(ppppuVar16);
  }
  func_0x000107c6142c(ppppuVar9);
  ppppuVar9 = (undefined8 ****)0x0;
  pppuStack_118 = ppppuVar3;
LAB_101f1a5e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppppuVar9;
  }
  func_0x000107c60e78();
  uStack_108 = 0x101f1a6a0;
  pppuVar18 = *(undefined8 ****)((long)ppppuVar9 + _DAT_112f51098);
  pppuStack_160 = unaff_x28;
  pppuStack_158 = unaff_x27;
  pppuStack_150 = (undefined8 ***)unaff_x26;
  pppuStack_148 = unaff_x25;
  pppuStack_140 = unaff_x24;
  pppuStack_138 = unaff_x23;
  pppuStack_130 = param_1;
  pppuStack_128 = unaff_x21;
  pppuStack_120 = ppppuVar16;
  puStack_110 = &stack0xfffffffffffffff0;
  if ((ulong)pppuVar18 >> 0x3e == 0) {
    pppuVar17 = (undefined8 ***)((undefined8 ***)((ulong)pppuVar18 & 0xffffffffffffff8))[2];
  }
  else {
    pppuVar17 = (undefined8 ***)((ulong)pppuVar18 & 0xffffffffffffff8);
    if (((ulong)pppuVar18 & 0x8000000000000000) != 0) {
      pppuVar17 = pppuVar18;
    }
    func_0x000107c60480();
  }
  if (lRam0000000112e40390 != -1) {
    func_0x000107c61568(0x112e40390,FUN_101f170e8);
  }
  ppppuVar16 = ppppuRam0000000112e40398;
  if (pppuVar17 == ppppuRam0000000112e40398[2]) {
    if ((ulong)pppuVar18 >> 0x3e == 0) {
      pppuVar17 = (undefined8 ***)((undefined8 ***)((ulong)pppuVar18 & 0xffffffffffffff8))[2];
    }
    else {
      pppuVar17 = (undefined8 ***)((ulong)pppuVar18 & 0xffffffffffffff8);
      if (((ulong)pppuVar18 & 0x8000000000000000) != 0) {
        pppuVar17 = pppuVar18;
      }
      func_0x000107c60480();
    }
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppuVar17 != (undefined8 ***)0x0) {
      puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dd4260(0,(ulong)pppuVar17 & ((long)pppuVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)pppuVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101f1a8e8);
        (*pcVar2)();
      }
      if (((ulong)pppuVar18 & 0xc000000000000001) == 0) {
        pppuVar18 = pppuVar18 + 4;
        do {
          puVar12 = puStack_168;
          lVar1 = _DAT_112f51060;
          ppuVar19 = *pppuVar18;
          func_0x000107c61428((long)ppuVar19 + _DAT_112f51060,auStack_180,0,0);
          uVar4 = *(undefined8 *)((long)ppuVar19 + lVar1);
          uVar14 = *(ulong *)(puVar12 + 0x10);
          puStack_168 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar14) {
            func_0x000100dd4260(1 < *(ulong *)(puVar12 + 0x18),uVar14 + 1,1);
          }
          *(ulong *)(puStack_168 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puStack_168 + uVar14 * 8 + 0x20) = uVar4;
          pppuVar17 = (undefined8 ***)((long)pppuVar17 + -1);
          puVar12 = puStack_168;
          pppuVar18 = pppuVar18 + 1;
        } while (pppuVar17 != (undefined8 ***)0x0);
      }
      else {
        pppuVar21 = (undefined8 ***)0x0;
        do {
          puVar12 = puStack_168;
          pppuVar10 = pppuVar21;
          FUN_101f19730(pppuVar21,pppuVar18);
          lVar1 = _DAT_112f51060;
          func_0x000107c61428((undefined *)((long)pppuVar10 + _DAT_112f51060),auStack_180,0,0);
          uVar4 = *(undefined8 *)((long)pppuVar10 + lVar1);
          func_0x000107c615e8(pppuVar10);
          uVar14 = *(ulong *)(puVar12 + 0x10);
          puStack_168 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar14) {
            func_0x000100dd4260(1 < *(ulong *)(puVar12 + 0x18),uVar14 + 1,1);
          }
          pppuVar21 = (undefined8 ***)((long)pppuVar21 + 1);
          *(ulong *)(puStack_168 + 0x10) = uVar14 + 1;
          *(undefined8 *)(puStack_168 + uVar14 * 8 + 0x20) = uVar4;
          puVar12 = puStack_168;
        } while (pppuVar17 != pppuVar21);
      }
    }
    puVar11 = puVar12;
    func_0x000101164de8(puVar12);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar11;
    FUN_101f18e30(puVar11,ppppuVar16);
    uVar15 = (uint)puVar12;
    func_0x000107c6142c(puVar11);
  }
  else {
    uVar15 = 0;
  }
  return (undefined8 ****)(ulong)(uVar15 & 1);
}



/* Entry: 101f1a8e8; end: 101f1a903;  */

void FUN_101f1a8e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101f17e78(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101f1a904; end: 101f1a91b;  */

void FUN_101f1a904(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  func_0x000104888f7c();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11049f250;
  func_0x000107c613fc(&UNK_11049f250,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  puVar3 = &UNK_11049f278;
  func_0x000107c613fc(&UNK_11049f278,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101f1a98c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(uVar4);
  uVar4 = 0x112e403a8;
  func_0x0001000285a8(0x112e403a8,&UNK_10da2e468);
  uVar5 = uStack_48;
  func_0x000100775264(uStack_48,1,FUN_101f1a9a4,puVar3,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  *param_1 = uVar5;
  return;
}



/* Entry: 101f1a91c; end: 101f1a94b;  */

void FUN_101f1a91c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101f174e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101f1a94c; end: 101f1a98b;  */

void FUN_101f1a94c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101f1a98c; end: 101f1a9a3;  */

void FUN_101f1a98c(void)

{
  long unaff_x20;
  
  FUN_101f172d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101f1a9a4; end: 101f1a9cf;  */

void FUN_101f1a9a4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101f1a9d0; end: 101f1aa0f;  */

void FUN_101f1a9d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e403d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2e510;
  func_0x000107c61520(&UNK_10da2e510,&UNK_11049f310);
  puRam0000000112e403d0 = puVar1;
  return;
}



/* Entry: 101f1aa10; end: 101f1ab77;  */

int FUN_101f1aa10(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101f1aa8c;
        goto LAB_101f1aa70;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101f1aa70:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101f1aa8c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101f1ab78; end: 101f1abb7;  */

void FUN_101f1ab78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e403d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2e4e8;
  func_0x000107c61520(&UNK_10da2e4e8,&UNK_11049f310);
  puRam0000000112e403d8 = puVar1;
  return;
}



/* Entry: 101f1abb8; end: 101f1abc7;  */

void FUN_101f1abb8(long param_1,long param_2)

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



/* Entry: 101f1abc8; end: 101f1abdb;  */

void FUN_101f1abc8(void)

{
  FUN_101f19c9c();
  return;
}



/* Entry: 101f1abdc; end: 101f1abef;  */

void FUN_101f1abdc(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 101f1abf0; end: 101f1ae03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101f1abf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c613fc();
  lVar1 = *(long *)(param_4 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000100bd4184();
    lVar2 = lVar1;
    func_0x000107c3ebc4();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      func_0x0001000d224c(auStack_88);
      puVar3 = auStack_88;
      func_0x0001000a8868(puVar3,uStack_70);
      uVar4 = 3;
      func_0x00010043c5c0(3,0x37,1,uStack_70,uStack_68,puVar3);
      func_0x0001000834e4(auStack_88);
      func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
      func_0x000107c6157c(uVar4);
      uVar6 = param_3;
      func_0x000107c5cec4(param_3);
      func_0x000107c61180();
      uVar5 = uVar6;
      func_0x0001000bda74();
      func_0x000107c61170(uVar6);
      FUN_101f19bf4(0);
      func_0x000107c610f8();
      uVar6 = uVar4;
      FUN_101f198cc(uVar4,uVar5);
      func_0x000107c61574(uVar4);
      func_0x000107c61574(uVar5);
      func_0x0001002b99e4(0);
      func_0x000107c610f8();
      uVar5 = uVar6;
      func_0x000107c61174(uVar6);
      func_0x000100bd4214();
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar5);
      func_0x000107c61574(uVar4);
      goto LAB_101f1addc;
    }
  }
  func_0x0001002b99e4(0);
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x000100bd4214();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
LAB_101f1addc:
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  return unaff_x20;
}



/* Entry: 101f1ae04; end: 101f1ae0b;  */

void FUN_101f1ae04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101f1ae0c; end: 101f1ae2f;  */

void FUN_101f1ae0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f1ae30; end: 101f1ae3b;  */

void FUN_101f1ae30(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101f1ae3c; end: 101f1ae7b; +[SCSpotlightInterstitialConfigKeys tiledInterstitialSelectorUsesBackend] */

void FUN_101f1ae3c(void)

{
  if (lRam00000001134a2d00 != -1) {
    func_0x000107c61568(0x1134a2d00,&UNK_100bd41c4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804658);
  return;
}



/* Entry: 101f1ae7c; end: 101f1aeb7; -[SCSpotlightInterstitialConfigKeys init] */

void FUN_101f1ae7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f1aeb8; end: 101f1aeeb;  */

void FUN_101f1aeb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f1aeec; end: 101f1aeef; -[SCSpotlightInterstitialConfigKeys .cxx_destruct] */

void FUN_101f1aeec(void)

{
  return;
}



/* Entry: 101f1aef0; end: 101f1af0f;  */

void FUN_101f1aef0(void)

{
  func_0x000107c61168(&PTR_PTR_112809700);
  return;
}



/* Entry: 101f1af10; end: 101f1af5f;  */

void FUN_101f1af10(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000002c;
  func_0x000100bd65fc(0xd00000000000002c,0x800000010f01b0e0,0);
  uRam0000000113804660 = uVar1;
  return;
}



/* Entry: 101f1af60; end: 101f1af9f; +[SCContentEndpointConfigKeys regionAgnostic] */

void FUN_101f1af60(void)

{
  if (lRam00000001134a2d08 != -1) {
    func_0x000107c61568(0x1134a2d08,FUN_101f1af10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113804660);
  return;
}



/* Entry: 101f1afa0; end: 101f1afdb; -[SCContentEndpointConfigKeys init] */

void FUN_101f1afa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f1afdc; end: 101f1b00f;  */

void FUN_101f1afdc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f1b010; end: 101f1b013; -[SCContentEndpointConfigKeys .cxx_destruct] */

void FUN_101f1b010(void)

{
  return;
}



/* Entry: 101f1b014; end: 101f1b033;  */

void FUN_101f1b014(void)

{
  func_0x000107c61168(&PTR_PTR_1128097b0);
  return;
}



/* Entry: 101f1b034; end: 101f1b087;  */

undefined8 FUN_101f1b034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009477f4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101f1b088; end: 101f1b1db;  */

void FUN_101f1b088(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [6];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000031;
  func_0x0001000a9a18(0xd000000000000031,0x800000010f01b110);
  func_0x000107c61170(uVar1);
  func_0x000100083b20(auStack_70);
  func_0x000107c615e8(auStack_70[0]);
  func_0x000107c61428(param_1,auStack_70,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x0001000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61428(param_1,auStack_88,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar1 = 0xd000000000000042;
  func_0x0001000a9a18(0xd000000000000042,0x800000010f01b150);
  func_0x000107c61170(uVar2);
  func_0x000100083b20(auStack_a0);
  func_0x000107c61170(auStack_a0[0]);
  func_0x000107c61428(param_1,auStack_a0,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f1b1dc; end: 101f1b223;  */

void FUN_101f1b1dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f1b224; end: 101f1b2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1b224(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e405e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f1b2a8; end: 101f1b307; -[ActivityFeedBadgeServices init] */

void FUN_101f1b2a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ActivityFeedBadgeServices.ActivityFeedBadgeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f1b2d4);
  (*pcVar1)();
}



/* Entry: 101f1b308; end: 101f1b327; -[ActivityFeedBadgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f1b308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e405e0));
  return;
}



/* Entry: 101f1b328; end: 101f1b377;  */

void FUN_101f1b328(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_101f1bda4();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11049f678;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f1b378; end: 101f1b427;  */

void FUN_101f1b378(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f1b428; end: 101f1ba3f;  */

/* WARNING: Removing unreachable block (ram,0x000101f1b4c0) */

void FUN_101f1b428(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_1c0 [8];
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined1 *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  long lStack_160;
  undefined1 auStack_158 [40];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  long lStack_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [7];
  
  lVar2 = 0;
  func_0x000107c5f168();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar14 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar3);
  (**(code **)(lVar14 + 0x40))();
  puStack_1a8 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1a0 = lVar15;
  lStack_198 = lVar2;
  uStack_190 = uVar3;
  func_0x000100083b20(auStack_b8);
  func_0x000107c61170(auStack_b8[0]);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar3);
  (**(code **)(lVar2 + 0x18))(uVar3,lVar2);
  puStack_1b0 = (undefined *)CONCAT44(puStack_1b0._4_4_,(int)uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar3);
  (**(code **)(lVar2 + 8))(uVar3,lVar2);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar13);
  (**(code **)(lVar15 + 0x10))(uVar13,lVar15);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_1b8 = uVar13;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar13);
  (**(code **)(lVar15 + 0x20))(uVar13,lVar15);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar13);
  (**(code **)(lVar15 + 0x28))(uVar13,lVar15);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  uVar16 = param_1;
  func_0x0001000a8868(param_2,uVar13);
  (**(code **)(lVar15 + 0x30))(uVar13,lVar15);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  lVar15 = *(long *)(param_2 + 0x20);
  uVar17 = uVar16;
  func_0x0001000a8868(param_2,uVar13);
  (**(code **)(lVar15 + 0x38))(uVar13,lVar15);
  puVar5 = PTR_PTR_1126a9a40;
  func_0x000107c610f8();
  uVar13 = uStack_190;
  func_0x00010006c00c(uStack_190,lVar14);
  func_0x000107c5fadc(uVar3,lVar2);
  func_0x000107c6142c(lVar2);
  puVar6 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  uVar7 = uVar13;
  func_0x000107c5ee20(uVar13,lVar14);
  func_0x000107c46fa0(param_1,uVar16,uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x00010006c090(uVar13,lVar14);
  func_0x000107c61168(PTR_PTR_1126a9a48);
  puStack_1b0 = puVar5;
  func_0x000107c4bb2c();
  if (lRam00000001134a2d10 != -1) {
    func_0x000107c61568(0x1134a2d10,0x101f1b3a8);
  }
  lVar15 = lStack_198;
  lVar8 = lStack_198;
  func_0x000100028790(lStack_198,0x1134a2d18);
  lVar2 = lStack_1a0;
  puVar1 = puStack_1a8;
  (**(code **)(lStack_1a0 + 0x10))(puStack_1a8,lVar8,lVar15);
  FUN_101f1bd30(param_2,auStack_b8);
  FUN_101f1bd30(auStack_b8,auStack_e0);
  FUN_101f1bd74(auStack_b8);
  FUN_101f1bd30(param_2,auStack_108);
  FUN_101f1bd30(auStack_108,auStack_130);
  FUN_101f1bd74(auStack_108);
  FUN_101f1bd30(param_2,auStack_158);
  FUN_101f1bd30(auStack_158,auStack_180);
  puVar9 = auStack_158;
  FUN_101f1bd74();
  func_0x000107c5f160();
  puVar10 = puVar9;
  func_0x000107c5ff7c();
  puVar11 = puVar9;
  func_0x000107c611d4(puVar9,(uint)puVar10 & 0xff);
  if ((int)puVar11 == 0) {
    FUN_101f1bd74(auStack_180);
    FUN_101f1bd74(auStack_130);
    func_0x00010006c090(uStack_190,lVar14);
    func_0x000107c61170(puStack_1b0);
    func_0x000107c61170(puVar9);
    (**(code **)(lVar2 + 8))(puVar1,lVar15);
    FUN_101f1bd74(auStack_e0);
  }
  else {
    puVar12 = (undefined4 *)0x1c;
    func_0x000107c6158c(0x1c,0xffffffffffffffff);
    uVar13 = 0x20;
    lStack_1b8 = lVar14;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar12 = 0x8220302;
    uStack_188 = uVar13;
    func_0x0001000a8868(auStack_e0,uStack_c8);
    lVar14 = lStack_c0;
    (**(code **)(lStack_c0 + 8))(uStack_c8,lStack_c0);
    uVar3 = uStack_c8;
    func_0x0001014bfa20();
    func_0x000107c6142c(lVar14);
    *(undefined8 *)(puVar12 + 1) = uVar3;
    *(undefined2 *)(puVar12 + 3) = 0x800;
    func_0x0001000a8868(auStack_130,uStack_118);
    uVar3 = uStack_118;
    (**(code **)(lStack_110 + 0x10))(uStack_118,lStack_110);
    FUN_101f1bd74(auStack_130);
    *(undefined8 *)((long)puVar12 + 0xe) = uVar3;
    *(undefined2 *)((long)puVar12 + 0x16) = 0x400;
    func_0x0001000a8868(auStack_180,uStack_168);
    (**(code **)(lStack_160 + 0x18))(uStack_168,lStack_160);
    FUN_101f1bd74(auStack_180);
    puVar12[6] = (uint)uStack_168 & 1;
    FUN_101f1bd74(auStack_e0);
    func_0x000107c60ea4(0x100000000,puVar9,(uint)puVar10 & 0xff,
                        "Forwarded Blizzard event through native bridge event=%{public}s payloadID=%lld userTracked=%{bool}d"
                        ,puVar12,0x1c);
    FUN_101f1bd74(uVar13);
    func_0x000107c61590(uVar13,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puStack_1b0);
    func_0x00010006c090(uStack_190,lStack_1b8);
    (**(code **)(lVar2 + 8))(puVar1,lStack_198);
  }
  return;
}



/* Entry: 101f1ba40; end: 101f1ba63;  */

void FUN_101f1ba40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f1ba64; end: 101f1ba83;  */

void FUN_101f1ba64(void)

{
  FUN_101f1b428();
  return;
}



/* Entry: 101f1ba84; end: 101f1bd2f;  */

void FUN_101f1ba84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f168();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (lRam00000001134a2d10 != -1) {
    func_0x000107c61568(0x1134a2d10,0x101f1b3a8);
  }
  lVar2 = lVar1;
  func_0x000100028790(lVar1,0x1134a2d18);
  (**(code **)(lVar11 + 0x10))(lVar10,lVar2,lVar1);
  func_0x000107c61434(param_2);
  uVar3 = param_4;
  func_0x000107c614b0();
  func_0x000107c5f160();
  uVar4 = uVar3;
  func_0x000107c5ff74();
  uVar5 = uVar3;
  func_0x000107c611d4(uVar3,(uint)uVar4 & 0xff);
  if ((int)uVar5 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c614ac(param_4);
    func_0x000107c61170(uVar3);
    pcVar9 = *(code **)(lVar11 + 8);
  }
  else {
    puVar6 = (undefined4 *)0x20;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    uVar7 = 0x40;
    lStack_a0 = lVar11;
    func_0x000107c6158c(0x40,0xffffffffffffffff);
    *puVar6 = 0x8220302;
    uVar5 = param_1;
    uStack_a8 = uVar7;
    auStack_90[0] = uVar7;
    func_0x0001014bfa20(param_1,param_2,auStack_90);
    *(undefined8 *)(puVar6 + 1) = uVar5;
    *(undefined2 *)(puVar6 + 3) = 0x800;
    *(undefined8 *)((long)puVar6 + 0xe) = param_3;
    *(undefined2 *)((long)puVar6 + 0x16) = 0x822;
    uStack_98 = param_4;
    func_0x000107c614b0(param_4);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar8 = &uStack_98;
    func_0x000107c5fb18(puVar8,uVar5);
    func_0x0001014bfa20();
    lStack_b0 = lVar1;
    func_0x000107c6142c(uVar5);
    *(undefined8 **)(puVar6 + 6) = puVar8;
    func_0x000107c614ac(param_4);
    func_0x000107c6142c(param_2);
    func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar4 & 0xff,
                        "Dropped Blizzard event during native bridge encoding event=%{public}s payloadID=%lld error=%{public}s"
                        ,puVar6,0x20);
    uVar4 = uStack_a8;
    func_0x000107c61408(uStack_a8,2,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61590(uVar4,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar6,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(uVar3);
    pcVar9 = *(code **)(lStack_a0 + 8);
    lVar1 = lStack_b0;
  }
  (*pcVar9)(lVar10,lVar1);
  uStack_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x000103c7cd0c(FUN_101f1bdc4,auStack_90,
                      "Libraries/Platform/Implementation/LegacyBlizzardServiceImplementation/LegacyBlizzardServiceImplementation.swift"
                      ,0x6f,2,0x43);
  return;
}



/* Entry: 101f1bd30; end: 101f1bd73;  */

long FUN_101f1bd30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101f1bd74; end: 101f1bda3;  */

void FUN_101f1bd74(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101f1bd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101f1bda4; end: 101f1bdc3;  */

void FUN_101f1bda4(void)

{
  func_0x000107c61168(&PTR_PTR_112e40658);
  return;
}



/* Entry: 101f1bdc4; end: 101f1bed7;  */

undefined1  [16] FUN_101f1bdc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x30);
  func_0x000107c5fb78(0xd000000000000025,0x800000010f01b290);
  func_0x000107c5fb78(uVar5,uVar2);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  uStack_58 = uVar1;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x203a29,0xe300000000000000);
  uVar5 = 0x112d393f0;
  uStack_58 = uVar3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_58,&uStack_50,uVar5,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar4._8_8_ = uStack_48;
  auVar4._0_8_ = uStack_50;
  return auVar4;
}



/* Entry: 101f1bed8; end: 101f1bf27;  */

void FUN_101f1bed8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_101f1c120();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11049f730;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f1bf28; end: 101f1bf57;  */

void FUN_101f1bf28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101f1bf58; end: 101f1bf7b;  */

void FUN_101f1bf58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f1bf7c; end: 101f1c083;  */

undefined8 FUN_101f1bf7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000107c5fadc(param_1,param_2);
  uVar1 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return uVar1;
}


