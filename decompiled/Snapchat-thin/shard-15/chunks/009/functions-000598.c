/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd613e0; end: 10bd613ef; -[GPBFieldDescriptor isRequired] */

ushort FUN_10bd613e0(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) & 1;
}



/* Entry: 10bd613f0; end: 10bd613ff; -[GPBFieldDescriptor isOptional] */

ushort FUN_10bd613f0(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 3 & 1;
}



/* Entry: 10bd61400; end: 10bd6160f; -[GPBFieldDescriptor textFormatName] */

byte * FUN_10bd61400(byte *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbStack_68;
  
  if ((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 6 & 1) == 0) {
    pbVar11 = param_1;
    func_0x00010c0d4f60();
    pbVar8 = pbVar11;
    func_0x00010c08fa60();
    pbVar6 = pbVar11;
    func_0x00010bfdcf80();
    if ((int)pbVar6 != 0) {
      func_0x00010c260c20();
      pbVar8 = pbVar11;
      func_0x00010c08fa60();
    }
    if (((*(ushort *)(*(long *)(param_1 + 8) + 0x1c) >> 1 & 1) != 0) &&
       (pbVar6 = pbVar11, func_0x00010bfdcf80(), (int)pbVar6 != 0)) {
      func_0x00010c260c20();
      pbVar8 = pbVar11;
      func_0x00010c08fa60();
    }
    if (*(char *)(*(long *)(param_1 + 8) + 0x1e) == '\x10') {
      pbVar8 = pbVar11;
      func_0x00010bf35920();
      if ((int)pbVar8 - 0x61U < 0x1a) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010c25cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (pbVar11,PTR_s_stringByReplacingCharactersInRan_112674e08,0,1,puVar7);
        return pbVar11;
      }
    }
    else {
      pbVar11 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      if (pbVar8 != (byte *)0x0) {
        pbVar6 = (byte *)0x1;
        do {
          func_0x00010bf35920();
          func_0x00010bf06ba0(pbVar11);
          bVar1 = pbVar6 < pbVar8;
          pbVar6 = (byte *)(ulong)((int)pbVar6 + 1);
        } while (bVar1);
      }
    }
  }
  else {
    pbVar11 = param_1;
    _objc_getAssociatedObject(param_1,&UNK_10e60ddfb);
    if (pbVar11 != (byte *)0x0) {
      func_0x00010c102ea0();
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x10);
      func_0x00010c0d4f60();
      if ((pbVar11 != (byte *)0x0) && (param_1 != (byte *)0x0)) {
        iVar5 = (int)&pbStack_68;
        pbStack_68 = pbVar11;
        FUN_10bd84c50();
        if (0 < iVar5) {
          uVar9 = iVar5 + 1;
          do {
            iVar5 = (int)&pbStack_68;
            FUN_10bd84c50();
            pbVar11 = pbStack_68;
            pbVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
            if (iVar5 == iVar3) {
              if (*pbStack_68 == 0) {
                pbVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                return pbVar11;
              }
              func_0x00010c08fa60(param_1);
              func_0x00010c25d900(pbVar8);
              bVar4 = *pbVar11;
              goto joined_r0x00010bd84b44;
            }
            pbVar8 = pbStack_68 + 1;
            _strlen();
            pbStack_68 = pbVar11 + (long)pbVar8 + 2;
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
        }
      }
      return (byte *)0x0;
    }
    pbVar11 = (byte *)0x0;
  }
  return pbVar11;
joined_r0x00010bd84b44:
  if (bVar4 == 0) {
    return pbVar8;
  }
  if ((char)bVar4 < '\0') {
    func_0x00010bf070e0(pbVar8);
    bVar4 = *pbVar11;
  }
  uVar9 = bVar4 & 0x1f;
  uVar2 = bVar4 & 0x60;
  if (uVar2 == 0x20) {
    func_0x00010bf35920();
    ___tolower();
LAB_10bd84bb8:
    func_0x00010bf06ba0(pbVar8);
    uVar9 = uVar9 - 1;
  }
  else if (uVar2 == 0x40) {
    func_0x00010bf35920();
    ___toupper();
    goto LAB_10bd84bb8;
  }
  if (0 < (int)uVar9) {
    uVar10 = (ulong)uVar9;
    do {
      func_0x00010bf35920();
      if (uVar2 == 0x60) {
        ___toupper();
      }
      func_0x00010bf06ba0(pbVar8);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pbVar11 = pbVar11 + 1;
  bVar4 = *pbVar11;
  goto joined_r0x00010bd84b44;
}



/* Entry: 10bd61610; end: 10bd61617; -[GPBFieldDescriptor containingOneof] */

undefined8 FUN_10bd61610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bd61618; end: 10bd6161f; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:] */

void FUN_10bd61618(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_allocDescriptorForName_valueName_11259dd28);
  return;
}



/* Entry: 10bd61620; end: 10bd61643; +[GPBEnumDescriptor allocDescriptorForName:valueNames:values:count:enumVerifier:extraTextFormatInfo:] */

void FUN_10bd61620(void)

{
  func_0x00010bf00e20();
  return;
}



/* Entry: 10bd61644; end: 10bd61697; -[GPBEnumDescriptor dealloc] */

void FUN_10bd61644(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x30) != 0) {
    _free();
  }
  puStack_28 = PTR_PTR_11270e800;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd61698; end: 10bd6169b; -[GPBEnumDescriptor copyWithZone:] */

void FUN_10bd61698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10bd6169c; end: 10bd616a7; -[GPBEnumDescriptor isClosed] */

byte FUN_10bd6169c(long param_1)

{
  return *(byte *)(param_1 + 0x3c) >> 1 & 1;
}



/* Entry: 10bd616a8; end: 10bd616df; -[GPBEnumDescriptor enumNameForValue:] */

long FUN_10bd616a8(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x18) + uVar1 * 4) == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bfc5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getEnumNameForIndex__1125cee28,uVar1);
        return param_1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0x38) != uVar1);
  }
  return 0;
}



/* Entry: 10bd616e0; end: 10bd61767; -[GPBEnumDescriptor getValue:forEnumTextFormatName:] */

undefined8 FUN_10bd616e0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar3;
  long lVar2;
  
  func_0x00010bf277e0();
  if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = param_1;
      func_0x00010bfc5220(param_1,param_2,lVar3);
      iVar1 = (int)lVar2;
      func_0x00010c071ae0();
      if (iVar1 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x18) + lVar3 * 4);
        }
        return 1;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(param_1 + 0x38));
  }
  return 0;
}



/* Entry: 10bd61768; end: 10bd6179f; -[GPBEnumDescriptor textFormatNameForValue:] */

long FUN_10bd61768(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x18) + uVar1 * 4) == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bfc5230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s_getEnumTextFormatNameForIndex__1125cee30,uVar1);
        return param_1;
      }
      uVar1 = uVar1 + 1;
    } while (*(uint *)(param_1 + 0x38) != uVar1);
  }
  return 0;
}



/* Entry: 10bd617a0; end: 10bd617a7; -[GPBEnumDescriptor enumNameCount] */

undefined4 FUN_10bd617a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 10bd617a8; end: 10bd61813; -[GPBEnumDescriptor getEnumNameForIndex:] */

void FUN_10bd617a8(long param_1,undefined8 param_2,uint param_3)

{
  func_0x00010bf277e0();
  if ((*(long *)(param_1 + 0x30) != 0) && (param_3 < *(uint *)(param_1 + 0x38))) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_11102f638);
  }
  return;
}



/* Entry: 10bd61814; end: 10bd61937; -[GPBEnumDescriptor getEnumTextFormatNameForIndex:] */

undefined * FUN_10bd61814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010bf277e0();
  if ((*(long *)(param_1 + 0x30) == 0) || (*(uint *)(param_1 + 0x38) <= (uint)param_3)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    puVar2 = *(undefined **)(param_1 + 0x28);
    if ((puVar2 == (undefined *)0x0) ||
       (func_0x00010bd84a70(puVar2,param_3,puVar1), puVar2 == (undefined *)0x0)) {
      puVar3 = puVar1;
      func_0x00010c08fa60();
      puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          puVar4 = puVar1;
          func_0x00010bf35920();
          if ((puVar5 != (undefined *)0x0) && ((int)puVar4 - 0x41U < 0x1a)) {
            func_0x00010bf070e0(puVar2);
          }
          ___toupper();
          func_0x00010bf06ba0(puVar2);
          puVar5 = puVar5 + 1;
        } while (puVar3 != puVar5);
      }
    }
  }
  return puVar2;
}



/* Entry: 10bd61938; end: 10bd6193f; -[GPBEnumDescriptor name] */

undefined8 FUN_10bd61938(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bd61940; end: 10bd619fb; -[GPBExtensionDescriptor initWithExtensionDescription:usesClassRefs:] */

undefined1 * FUN_10bd61940(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  if (7 < *(byte *)((long)param_3 + 0x2d)) {
    FUN_10bd83b38();
  }
  puStack_38 = PTR_PTR_11270e808;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(long **)((long)puVar1 + 8) = param_3;
    if (*(byte *)((long)param_3 + 0x2c) == 0xd) {
      if (*param_3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc();
        func_0x00010bffa160();
        *(undefined **)((long)puVar1 + 0x10) = puVar2;
      }
    }
    else if (1 < *(byte *)((long)param_3 + 0x2c) - 0xf) {
      *(long *)((long)puVar1 + 0x10) = *param_3;
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd619fc; end: 10bd61a47; -[GPBExtensionDescriptor initWithExtensionDescription:] */

void FUN_10bd619fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 0x18);
  if (lVar1 != 0) {
    _objc_lookUpClass();
    *(long *)(param_3 + 0x18) = lVar1;
  }
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    _objc_lookUpClass();
    *(long *)(param_3 + 0x10) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c011230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithExtensionDescription_use_1125e1e58,param_3,1);
  return;
}



/* Entry: 10bd61a48; end: 10bd61aa7; -[GPBExtensionDescriptor dealloc] */

void FUN_10bd61a48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x2c) == '\r') &&
     ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) & 1) == 0)) {
    _objc_release(*(undefined8 *)(param_1 + 0x10));
  }
  puStack_28 = PTR_PTR_11270e808;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd61aa8; end: 10bd61aab; -[GPBExtensionDescriptor copyWithZone:] */

void FUN_10bd61aa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10bd61aac; end: 10bd61ac3; -[GPBExtensionDescriptor singletonName] */

void FUN_10bd61aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithUTF8String__1126750c8,
             *(undefined8 *)(*(long *)(param_1 + 8) + 8));
  return;
}



/* Entry: 10bd61ac4; end: 10bd61acf; -[GPBExtensionDescriptor singletonNameC] */

undefined8 FUN_10bd61ac4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 8);
}



/* Entry: 10bd61ad0; end: 10bd61adb; -[GPBExtensionDescriptor fieldNumber] */

undefined4 FUN_10bd61ad0(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0x28);
}



/* Entry: 10bd61adc; end: 10bd61ae7; -[GPBExtensionDescriptor dataType] */

undefined1 FUN_10bd61adc(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x2c);
}



/* Entry: 10bd61ae8; end: 10bd61b0f; -[GPBExtensionDescriptor wireType] */

undefined4 FUN_10bd61ae8(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) >> 1 & 1) == 0) {
    return *(undefined4 *)(&UNK_10e60e064 + (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x2c) * 4);
  }
  return 2;
}



/* Entry: 10bd61b10; end: 10bd61b37; -[GPBExtensionDescriptor alternateWireType] */

undefined4 FUN_10bd61b10(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) >> 1 & 1) == 0) {
    return 2;
  }
  return *(undefined4 *)(&UNK_10e60e064 + (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x2c) * 4);
}



/* Entry: 10bd61b38; end: 10bd61b47; -[GPBExtensionDescriptor isRepeated] */

byte FUN_10bd61b38(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 8) + 0x2d) & 1;
}



/* Entry: 10bd61b48; end: 10bd61b57; -[GPBExtensionDescriptor isPackable] */

byte FUN_10bd61b48(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 8) + 0x2d) >> 1 & 1;
}



/* Entry: 10bd61b58; end: 10bd61b63; -[GPBExtensionDescriptor msgClass] */

undefined8 FUN_10bd61b58(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
}



/* Entry: 10bd61b64; end: 10bd61b6f; -[GPBExtensionDescriptor containingMessageClass] */

undefined8 FUN_10bd61b64(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
}



/* Entry: 10bd61b70; end: 10bd61b8f; -[GPBExtensionDescriptor enumDescriptor] */

code * FUN_10bd61b70(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x2c) == '\x11') {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bd61b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  return (code *)0x0;
}



/* Entry: 10bd61b90; end: 10bd61c7f; -[GPBExtensionDescriptor defaultValue] */

undefined ** FUN_10bd61b90(long param_1)

{
  undefined **ppuVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x2d) & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
    switch(*(undefined1 *)(*(long *)(param_1 + 8) + 0x2c)) {
    case 0:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,
                 *(undefined1 *)(param_1 + 0x10));
      return ppuVar1;
    case 1:
    case 0xb:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedInt__112615820,
                 *(undefined4 *)(param_1 + 0x10));
      return ppuVar1;
    case 2:
    case 7:
    case 9:
    case 0x11:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,
                 *(undefined4 *)(param_1 + 0x10));
      return ppuVar1;
    case 3:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined4 *)(param_1 + 0x10),PTR__OBJC_CLASS___NSNumber_1126ae570,
                 PTR_s_numberWithFloat__1126157e8);
      return ppuVar1;
    case 4:
    case 0xc:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithUnsignedLongLong__112615838,
                 *(undefined8 *)(param_1 + 0x10));
      return ppuVar1;
    case 5:
    case 8:
    case 10:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithLongLong__112615808,
                 *(undefined8 *)(param_1 + 0x10));
      return ppuVar1;
    case 6:
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x10),PTR__OBJC_CLASS___NSNumber_1126ae570,
                 PTR_s_numberWithDouble__1126157e0);
      return ppuVar1;
    case 0xd:
      ppuVar1 = *(undefined ***)(param_1 + 0x10);
      if (*(undefined ***)(param_1 + 0x10) == (undefined **)0x0) {
        if (lRam00000001137fe8a0 != -1) {
          func_0x00010002a2fc(0x1137fe8a0,&PTR___NSConcreteGlobalBlock_110da0160);
        }
        return ppuRam00000001137fe8a8;
      }
      break;
    case 0xe:
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (*(undefined ***)(param_1 + 0x10) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(param_1 + 0x10);
      }
    }
  }
  else {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 10bd61c80; end: 10bd61c9f; -[GPBExtensionDescriptor compareByFieldNumber:] */

ulong FUN_10bd61c80(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x28);
  iVar2 = *(int *)(*(long *)(param_3 + 8) + 0x28);
  uVar3 = (ulong)(iVar2 < iVar1);
  if (iVar1 < iVar2) {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



/* Entry: 10bd61ca0; end: 10bd61e0f;  */

long FUN_10bd61ca0(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(undefined1 *)(*(long *)(param_2 + 8) + 0x1e);
  uVar5 = param_1;
  func_0x00010c0865c0();
  uVar6 = uVar5;
  func_0x00010c0d9ba0();
  if (uVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      uVar7 = param_1;
      func_0x00010c0e00e0();
      func_0x00010c08fac0();
      lVar8 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        lVar8 = 5;
      }
      uVar4 = (uint)uVar6;
      lVar1 = 3;
      if (0x1fffff < uVar4) {
        lVar1 = lVar8;
      }
      lVar8 = 2;
      if (0x3fff < uVar4) {
        lVar8 = lVar1;
      }
      lVar1 = 1;
      if (0x7f < uVar4) {
        lVar1 = lVar8;
      }
      FUN_10bd61e10(uVar7,uVar2);
      uVar6 = uVar6 + lVar1 + uVar7 + 1;
      lVar8 = 4;
      if ((uVar6 >> 0x1c & 0xf) != 0) {
        lVar8 = 5;
      }
      uVar4 = (uint)uVar6;
      lVar1 = 3;
      if (0x1fffff < uVar4) {
        lVar1 = lVar8;
      }
      lVar8 = 2;
      if (0x3fff < uVar4) {
        lVar8 = lVar1;
      }
      lVar1 = 1;
      if (0x7f < uVar4) {
        lVar1 = lVar8;
      }
      lVar9 = uVar6 + lVar9 + lVar1;
      uVar6 = uVar5;
      func_0x00010c0d9ba0();
    } while (uVar6 != 0);
  }
  uVar4 = *(uint *)(*(long *)(param_2 + 8) + 0x10);
  uVar3 = uVar4 << 3;
  if (uVar3 < 0x80) {
    lVar8 = 1;
  }
  else if (uVar3 < 0x4000) {
    lVar8 = 2;
  }
  else if (uVar3 < 0x200000) {
    lVar8 = 3;
  }
  else {
    lVar8 = 4;
    if ((uVar4 & 0x1fffffff) >> 0x19 != 0) {
      lVar8 = 5;
    }
  }
  func_0x00010bf529e0(param_1);
  return lVar9 + param_1 * lVar8;
}



/* Entry: 10bd61e10; end: 10bd61e93;  */

long FUN_10bd61e10(ulong param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 == 0xd) {
    func_0x00010c08fa60();
  }
  else if (param_2 == 0xe) {
    func_0x00010c08fac0(param_1,0xe,4);
  }
  else {
    if (param_2 != 0xf) {
      return 0;
    }
    func_0x00010c15ebe0();
  }
  lVar1 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    lVar1 = 5;
  }
  uVar3 = (uint)param_1;
  lVar2 = 3;
  if (0x1fffff < uVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar3) {
    lVar2 = lVar1;
  }
  return param_1 + lVar2 + 1;
}



/* Entry: 10bd61e94; end: 10bd61fab;  */

void FUN_10bd61e94(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined1 *)(*(long *)(param_3 + 8) + 0x1e);
  lVar2 = param_2;
  func_0x00010c0865c0();
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    lVar3 = param_2;
    func_0x00010c0e00e0(param_2);
    func_0x00010c2bdf60(param_1);
    func_0x00010c08fac0();
    FUN_10bd61e10(lVar3,uVar1);
    func_0x00010c2bdf60(param_1);
    func_0x00010c2be420(param_1);
    FUN_10bd61fac(param_1,lVar3,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd61fac; end: 10bd61feb;  */

void FUN_10bd61fac(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0xd) {
                    /* WARNING: Could not recover jumptable at 0x00010c2bd990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writeBytes_value__11268d088,2,param_2);
    return;
  }
  if (param_3 != 0xe) {
    if (param_3 == 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writeMessage_value__11268d248,2,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2be430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writeString_value__11268d330,2,param_2);
  return;
}



/* Entry: 10bd61fec; end: 10bd61ffb; -[GPBUInt32UInt32Dictionary init] */

void FUN_10bd61fec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd61ffc; end: 10bd620bf; -[GPBUInt32UInt32Dictionary initWithUInt32s:forKeys:count:] */

undefined1 *
FUN_10bd61ffc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e810;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd620c0; end: 10bd62107; -[GPBUInt32UInt32Dictionary initWithDictionary:] */

long FUN_10bd620c0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c0576e0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd62108; end: 10bd62117; -[GPBUInt32UInt32Dictionary initWithCapacity:] */

void FUN_10bd62108(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0576f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt32s_forKeys_count__1125f37c8,0,0,0);
  return;
}



/* Entry: 10bd62118; end: 10bd6215f; -[GPBUInt32UInt32Dictionary dealloc] */

void FUN_10bd62118(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e810;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd62160; end: 10bd6218b; -[GPBUInt32UInt32Dictionary copyWithZone:] */

void FUN_10bd62160(void)

{
  func_0x00010bf00e40(PTR_PTR_1126d8cc8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd6218c; end: 10bd621ef; -[GPBUInt32UInt32Dictionary isEqual:] */

undefined8 FUN_10bd6218c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d8cc8;
    _objc_opt_class(PTR_PTR_1126d8cc8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd621f0; end: 10bd621f7; -[GPBUInt32UInt32Dictionary hash] */

void FUN_10bd621f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd621f8; end: 10bd62243; -[GPBUInt32UInt32Dictionary description] */

void FUN_10bd621f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd62244; end: 10bd6224b; -[GPBUInt32UInt32Dictionary count] */

void FUN_10bd62244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd6224c; end: 10bd622eb; -[GPBUInt32UInt32Dictionary enumerateKeysAndUInt32sUsingBlock:] */

void FUN_10bd6224c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010c282760(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd622ec; end: 10bd6249b; -[GPBUInt32UInt32Dictionary computeSerializedSizeAsField:] */

void FUN_10bd622ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar2 = lVar3;
    func_0x00010c0865c0();
    lVar1 = lVar2;
    func_0x00010c0d9ba0();
    while (lVar1 != 0) {
      func_0x00010c0e00e0(lVar3,param_2,lVar1);
      func_0x00010c282760();
      func_0x00010c282760();
      lVar1 = lVar2;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd6249c; end: 10bd62693; -[GPBUInt32UInt32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd6249c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  lVar3 = param_4;
  func_0x00010c0b92a0();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar4 = lVar8;
  func_0x00010c0865c0();
  lVar5 = lVar4;
  func_0x00010c0d9ba0();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar8;
      func_0x00010c0e00e0(lVar8,param_2,lVar5);
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c282760();
      func_0x00010c282760();
      iVar7 = (int)lVar3;
      if (iVar7 == 1) {
        iVar10 = 5;
      }
      else if (iVar7 == 0xb) {
        uVar9 = (uint)lVar5;
        if (uVar9 < 0x80) {
          iVar10 = 2;
        }
        else if (uVar9 < 0x4000) {
          iVar10 = 3;
        }
        else if (uVar9 < 0x200000) {
          iVar10 = 4;
        }
        else {
          iVar10 = 5;
          if (uVar9 >> 0x1c != 0) {
            iVar10 = 6;
          }
        }
      }
      else {
        iVar10 = 0;
      }
      if (cVar2 == '\x01') {
        iVar11 = 5;
      }
      else if (cVar2 == '\v') {
        uVar9 = (uint)lVar6;
        if (uVar9 < 0x80) {
          iVar11 = 2;
        }
        else if (uVar9 < 0x4000) {
          iVar11 = 3;
        }
        else if (uVar9 < 0x200000) {
          iVar11 = 4;
        }
        else {
          iVar11 = 5;
          if (uVar9 >> 0x1c != 0) {
            iVar11 = 6;
          }
        }
      }
      else {
        iVar11 = 0;
      }
      func_0x00010c2bdf60(param_3,param_2,iVar11 + iVar10);
      if (iVar7 == 1) {
        func_0x00010c2bdd00(param_3,param_2,1,lVar5);
      }
      else if (iVar7 == 0xb) {
        func_0x00010c2be600(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x01') {
        func_0x00010c2bdd00(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\v') {
        func_0x00010c2be600(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00010c0d9ba0();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10bd62694; end: 10bd626e7; -[GPBUInt32UInt32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd62694(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd626e8; end: 10bd62737; -[GPBUInt32UInt32Dictionary enumerateForTextFormat:] */

void FUN_10bd626e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd62738;
  puStack_20 = &UNK_110d9f648;
  uStack_18 = param_3;
  func_0x00010bf97d40(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd62738; end: 10bd627af;  */

void FUN_10bd62738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd627ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd627b0; end: 10bd627bb;  */

void FUN_10bd627b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_11034bce8)(*(undefined8 *)(param_1 + 0x20),7);
  return;
}



/* Entry: 10bd627bc; end: 10bd62817; -[GPBUInt32UInt32Dictionary getUInt32:forKey:] */

bool FUN_10bd627bc(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c282760();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd62818; end: 10bd6285b; -[GPBUInt32UInt32Dictionary addEntriesFromDictionary:] */

long FUN_10bd62818(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}



/* Entry: 10bd6285c; end: 10bd628db; -[GPBUInt32UInt32Dictionary setUInt32:forKey:] */

long FUN_10bd6285c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd628dc; end: 10bd6290b; -[GPBUInt32UInt32Dictionary removeUInt32ForKey:] */

void FUN_10bd628dc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd6290c; end: 10bd62913; -[GPBUInt32UInt32Dictionary removeAll] */

void FUN_10bd6290c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd62914; end: 10bd62923; -[GPBUInt32Int32Dictionary init] */

void FUN_10bd62914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd62924; end: 10bd629e7; -[GPBUInt32Int32Dictionary initWithInt32s:forKeys:count:] */

undefined1 *
FUN_10bd62924(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e818;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd629e8; end: 10bd62a2f; -[GPBUInt32Int32Dictionary initWithDictionary:] */

long FUN_10bd629e8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c01e4c0(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd62a30; end: 10bd62a3f; -[GPBUInt32Int32Dictionary initWithCapacity:] */

void FUN_10bd62a30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInt32s_forKeys_count__1125e5318,0,0,0);
  return;
}



/* Entry: 10bd62a40; end: 10bd62a87; -[GPBUInt32Int32Dictionary dealloc] */

void FUN_10bd62a40(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e818;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd62a88; end: 10bd62ab3; -[GPBUInt32Int32Dictionary copyWithZone:] */

void FUN_10bd62a88(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30c0);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd62ab4; end: 10bd62b17; -[GPBUInt32Int32Dictionary isEqual:] */

undefined8 FUN_10bd62ab4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30c0;
    _objc_opt_class(PTR_PTR_1126e30c0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd62b18; end: 10bd62b1f; -[GPBUInt32Int32Dictionary hash] */

void FUN_10bd62b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd62b20; end: 10bd62b6b; -[GPBUInt32Int32Dictionary description] */

void FUN_10bd62b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd62b6c; end: 10bd62b73; -[GPBUInt32Int32Dictionary count] */

void FUN_10bd62b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd62b74; end: 10bd62c13; -[GPBUInt32Int32Dictionary enumerateKeysAndInt32sUsingBlock:] */

void FUN_10bd62b74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010c067ec0(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd62c14; end: 10bd62d83; -[GPBUInt32Int32Dictionary computeSerializedSizeAsField:] */

void FUN_10bd62c14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = lVar3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010c0b92a0();
    lVar1 = lVar3;
    func_0x00010c0865c0();
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    while (lVar2 != 0) {
      lVar2 = lVar3;
      func_0x00010c0e00e0(lVar3);
      func_0x00010c282760();
      func_0x00010c067ec0(lVar2);
      FUN_10bd62d84();
      lVar2 = lVar1;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd62d84; end: 10bd62dc7;  */

long FUN_10bd62d84(ulong param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 2) {
    return 5;
  }
  uVar5 = (uint)param_1;
  if (param_3 != 9) {
    if (param_3 == 7) {
      uVar4 = param_2 << 3;
      lVar1 = 4;
      if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
        lVar1 = 5;
      }
      lVar2 = 3;
      if (0x1fffff < uVar4) {
        lVar2 = lVar1;
      }
      lVar1 = 2;
      if (0x3fff < uVar4) {
        lVar1 = lVar2;
      }
      lVar2 = 1;
      if (0x7f < uVar4) {
        lVar2 = lVar1;
      }
      lVar1 = 4;
      if ((param_1 >> 0x1c & 0xf) != 0) {
        lVar1 = 5;
      }
      lVar3 = 3;
      if (0x1fffff < uVar5) {
        lVar3 = lVar1;
      }
      lVar1 = 2;
      if (0x3fff < uVar5) {
        lVar1 = lVar3;
      }
      lVar3 = 1;
      if (0x7f < uVar5) {
        lVar3 = lVar1;
      }
      lVar1 = 10;
      if ((param_1 & 0x80000000) == 0) {
        lVar1 = lVar3;
      }
      return lVar1 + lVar2;
    }
    return 0;
  }
  uVar4 = param_2 << 3;
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < uVar4) {
    lVar2 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar4) {
    lVar1 = lVar2;
  }
  lVar2 = 1;
  if (0x7f < uVar4) {
    lVar2 = lVar1;
  }
  uVar5 = uVar5 << 1 ^ (int)uVar5 >> 0x1f;
  lVar1 = 4;
  if (uVar5 >> 0x1c != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < uVar5) {
    lVar3 = lVar1;
  }
  lVar1 = 2;
  if (0x3fff < uVar5) {
    lVar1 = lVar3;
  }
  lVar3 = 1;
  if (0x7f < uVar5) {
    lVar3 = lVar1;
  }
  return lVar3 + lVar2;
}



/* Entry: 10bd62dc8; end: 10bd62f63; -[GPBUInt32Int32Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd62dc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined1 *)(*(long *)(param_4 + 8) + 0x1e);
  func_0x00010c0b92a0();
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = lVar4;
  func_0x00010c0865c0();
  lVar3 = lVar2;
  func_0x00010c0d9ba0();
  while (lVar3 != 0) {
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c2bdf60(param_3);
    func_0x00010c282760();
    func_0x00010c067ec0(lVar3);
    if ((int)param_4 == 1) {
      FUN_10bd62d84(lVar3,2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2bdd00(param_3);
    }
    else if ((int)param_4 == 0xb) {
      FUN_10bd62d84(lVar3,2,uVar1);
      func_0x00010c2bdf60(param_3);
      func_0x00010c2be600(param_3);
    }
    else {
      FUN_10bd62d84(lVar3,2,uVar1);
      func_0x00010c2bdf60(param_3);
    }
    FUN_10bd62f64(param_3,lVar3,2,uVar1);
    lVar3 = lVar2;
    func_0x00010c0d9ba0();
  }
  return;
}



/* Entry: 10bd62f64; end: 10bd62f97;  */

void FUN_10bd62f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c2be290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_writeSFixed32_value__11268d2c8,param_3,param_2);
    return;
  }
  if (param_4 != 9) {
    if (param_4 == 7) {
                    /* WARNING: Could not recover jumptable at 0x00010c2bdf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_writeInt32_value__11268d1f0,param_3,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2be350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writeSInt32_value__11268d2f8,param_3,param_2)
  ;
  return;
}



/* Entry: 10bd62f98; end: 10bd62feb; -[GPBUInt32Int32Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd62f98(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd62fec; end: 10bd6303b; -[GPBUInt32Int32Dictionary enumerateForTextFormat:] */

void FUN_10bd62fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd6303c;
  puStack_20 = &UNK_110d9f678;
  uStack_18 = param_3;
  func_0x00010bf97ca0(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd6303c; end: 10bd630ab;  */

void FUN_10bd6303c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd630a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd630ac; end: 10bd63107; -[GPBUInt32Int32Dictionary getInt32:forKey:] */

bool FUN_10bd630ac(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (undefined4 *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c067ec0();
    *param_3 = (int)lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd63108; end: 10bd6314b; -[GPBUInt32Int32Dictionary addEntriesFromDictionary:] */

long FUN_10bd63108(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}



/* Entry: 10bd6314c; end: 10bd631cb; -[GPBUInt32Int32Dictionary setInt32:forKey:] */

long FUN_10bd6314c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x00010c1d0560(uVar8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = lVar1;
  _objc_opt_class();
  func_0x00010bf6e760();
  lVar9 = *(long *)(lVar2 + 8);
  puVar4 = (undefined8 *)0x10;
  lVar3 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  lVar11 = 0;
  if (lVar3 != 0) {
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        lVar10 = *(long *)(lVar11 * 8);
        lVar6 = lVar10;
        func_0x00010bfac840();
        if ((int)lVar6 == 2) {
          lVar6 = 0;
          if (*(long *)(lVar1 + 0x40) != 0) {
            lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                             (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0x18));
          }
          if (lVar6 == param_1) {
            lVar2 = lVar10;
            func_0x00010c0b92a0();
            if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar10 + 8) + 0x1e) - 0xd < 4)) {
              piVar7 = (int *)&DAT_112796db0;
            }
            else {
              piVar7 = (int *)&DAT_112796db4;
            }
            *(undefined8 *)(param_1 + *piVar7) = 0;
            func_0x000107c3187c();
            lVar11 = lVar1;
            goto LAB_10bd7e9b0;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar9;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar11 = 0;
  }
LAB_10bd7e9b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bfee200();
    if ((lVar11 != 0) && (func_0x00010c0cabe0(lVar11), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
    }
    return lVar11;
  }
  return lVar11;
}



/* Entry: 10bd631cc; end: 10bd631fb; -[GPBUInt32Int32Dictionary removeInt32ForKey:] */

void FUN_10bd631cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeObjectForKey__112628f18,puVar1);
  return;
}



/* Entry: 10bd631fc; end: 10bd63203; -[GPBUInt32Int32Dictionary removeAll] */

void FUN_10bd631fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10bd63204; end: 10bd63213; -[GPBUInt32UInt64Dictionary init] */

void FUN_10bd63204(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd63214; end: 10bd632d7; -[GPBUInt32UInt64Dictionary initWithUInt64s:forKeys:count:] */

undefined1 *
FUN_10bd63214(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_11270e820;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    if ((param_4 != 0) && (param_3 != 0)) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
        func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x00010c1d0560(uVar3);
      }
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bd632d8; end: 10bd6331f; -[GPBUInt32UInt64Dictionary initWithDictionary:] */

long FUN_10bd632d8(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c057700(param_1,param_2,0,0,0);
  if ((param_3 != 0) && (param_1 != 0)) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}



/* Entry: 10bd63320; end: 10bd6332f; -[GPBUInt32UInt64Dictionary initWithCapacity:] */

void FUN_10bd63320(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUInt64s_forKeys_count__1125f37d0,0,0,0);
  return;
}



/* Entry: 10bd63330; end: 10bd63377; -[GPBUInt32UInt64Dictionary dealloc] */

void FUN_10bd63330(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_11270e820;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10bd63378; end: 10bd633a3; -[GPBUInt32UInt64Dictionary copyWithZone:] */

void FUN_10bd63378(void)

{
  func_0x00010bf00e40(PTR_PTR_1126e30c8);
                    /* WARNING: Could not recover jumptable at 0x00010c00c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bd633a4; end: 10bd63407; -[GPBUInt32UInt64Dictionary isEqual:] */

undefined8 FUN_10bd633a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126e30c8;
    _objc_opt_class(PTR_PTR_1126e30c8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010c071af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_isEqual__1125fa0c8,*(undefined8 *)(param_3 + 0x10));
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10bd63408; end: 10bd6340f; -[GPBUInt32UInt64Dictionary hash] */

void FUN_10bd63408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd63410; end: 10bd6345b; -[GPBUInt32UInt64Dictionary description] */

void FUN_10bd63410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_11102f658);
  return;
}



/* Entry: 10bd6345c; end: 10bd63463; -[GPBUInt32UInt64Dictionary count] */

void FUN_10bd6345c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10bd63464; end: 10bd63503; -[GPBUInt32UInt64Dictionary enumerateKeysAndUInt64sUsingBlock:] */

void FUN_10bd63464(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cStack_41;
  
  cStack_41 = '\0';
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = lVar4;
  func_0x00010c0865c0();
  do {
    lVar2 = lVar1;
    func_0x00010c0d9ba0();
    if (lVar2 == 0) {
      return;
    }
    lVar3 = lVar4;
    func_0x00010c0e00e0(lVar4);
    func_0x00010c282760(lVar2);
    func_0x00010c282800(lVar3);
    (**(code **)(param_3 + 0x10))(param_3,lVar2,lVar3,&cStack_41);
  } while (cStack_41 != '\x01');
  return;
}



/* Entry: 10bd63504; end: 10bd6368f; -[GPBUInt32UInt64Dictionary computeSerializedSizeAsField:] */

void FUN_10bd63504(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = lVar5;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(long *)(param_3 + 8) + 0x1e);
    func_0x00010c0b92a0();
    lVar3 = lVar5;
    func_0x00010c0865c0();
    lVar2 = lVar3;
    func_0x00010c0d9ba0();
    while (lVar2 != 0) {
      lVar4 = lVar5;
      func_0x00010c0e00e0(lVar5,param_2,lVar2);
      func_0x00010c282760();
      func_0x00010c282800(lVar4);
      if ((cVar1 != '\x04') && (cVar1 == '\f')) {
        func_0x000107c3184c();
      }
      lVar2 = lVar3;
      func_0x00010c0d9ba0();
    }
  }
  return;
}



/* Entry: 10bd63690; end: 10bd63857; -[GPBUInt32UInt64Dictionary writeToCodedOutputStream:asField:] */

void FUN_10bd63690(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  cVar2 = *(char *)(*(long *)(param_4 + 8) + 0x1e);
  lVar3 = param_4;
  func_0x00010c0b92a0();
  iVar1 = *(int *)(*(long *)(param_4 + 8) + 0x10);
  lVar10 = *(long *)(param_1 + 0x10);
  lVar4 = lVar10;
  func_0x00010c0865c0();
  lVar5 = lVar4;
  func_0x00010c0d9ba0();
  if (lVar5 != 0) {
    do {
      lVar6 = lVar10;
      func_0x00010c0e00e0(lVar10,param_2,lVar5);
      func_0x00010c2bdf60(param_3,param_2,iVar1 << 3 | 2);
      func_0x00010c282760();
      func_0x00010c282800(lVar6);
      iVar9 = (int)lVar3;
      if (iVar9 == 1) {
        iVar12 = 5;
      }
      else if (iVar9 == 0xb) {
        uVar11 = (uint)lVar5;
        if (uVar11 < 0x80) {
          iVar12 = 2;
        }
        else if (uVar11 < 0x4000) {
          iVar12 = 3;
        }
        else if (uVar11 < 0x200000) {
          iVar12 = 4;
        }
        else {
          iVar12 = 5;
          if (uVar11 >> 0x1c != 0) {
            iVar12 = 6;
          }
        }
      }
      else {
        iVar12 = 0;
      }
      if (cVar2 == '\x04') {
        iVar8 = 9;
      }
      else if (cVar2 == '\f') {
        lVar7 = lVar6;
        func_0x000107c3184c(lVar6);
        iVar8 = (int)lVar7 + 1;
      }
      else {
        iVar8 = 0;
      }
      func_0x00010c2bdf60(param_3,param_2,iVar8 + iVar12);
      if (iVar9 == 1) {
        func_0x00010c2bdd00(param_3,param_2,1,lVar5);
      }
      else if (iVar9 == 0xb) {
        func_0x00010c2be600(param_3,param_2,1,lVar5);
      }
      if (cVar2 == '\x04') {
        func_0x00010c2bdd60(param_3,param_2,2,lVar6);
      }
      else if (cVar2 == '\f') {
        func_0x00010c2be660(param_3,param_2,2,lVar6);
      }
      lVar5 = lVar4;
      func_0x00010c0d9ba0();
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10bd63858; end: 10bd638ab; -[GPBUInt32UInt64Dictionary setGPBGenericValue:forGPBGenericValueKey:] */

void FUN_10bd63858(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setObject_forKey__112651b80,puVar1,puVar2);
  return;
}



/* Entry: 10bd638ac; end: 10bd638fb; -[GPBUInt32UInt64Dictionary enumerateForTextFormat:] */

void FUN_10bd638ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10bd638fc;
  puStack_20 = &UNK_110d9f6a8;
  uStack_18 = param_3;
  func_0x00010bf97d60(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10bd638fc; end: 10bd6396b;  */

void FUN_10bd638fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb3938);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bd63968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,puVar1,puVar2);
  return;
}



/* Entry: 10bd6396c; end: 10bd639c7; -[GPBUInt32UInt64Dictionary getUInt64:forKey:] */

bool FUN_10bd6396c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  func_0x00010c0dff20(lVar3,param_2,puVar1);
  if ((param_3 != (long *)0x0) && (lVar3 != 0)) {
    lVar2 = lVar3;
    func_0x00010c282800();
    *param_3 = lVar2;
  }
  return lVar3 != 0;
}



/* Entry: 10bd639c8; end: 10bd63a0b; -[GPBUInt32UInt64Dictionary addEntriesFromDictionary:] */

long FUN_10bd639c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = param_1;
  if (param_3 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_3 + 0x10));
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar2 = lVar1;
      _objc_opt_class();
      func_0x00010bf6e760();
      lVar8 = *(long *)(lVar2 + 8);
      puVar4 = (undefined8 *)0x10;
      lVar3 = lVar8;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      lVar10 = 0;
      if (lVar3 != 0) {
        do {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar8);
            }
            lVar9 = *(long *)(lVar10 * 8);
            lVar6 = lVar9;
            func_0x00010bfac840();
            if ((int)lVar6 == 2) {
              lVar6 = 0;
              if (*(long *)(lVar1 + 0x40) != 0) {
                lVar6 = *(long *)(*(long *)(lVar1 + 0x40) +
                                 (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
              }
              if (lVar6 == param_1) {
                lVar2 = lVar9;
                func_0x00010c0b92a0();
                if (((int)lVar2 == 0xe) && (*(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd < 4)) {
                  piVar7 = (int *)&DAT_112796db0;
                }
                else {
                  piVar7 = (int *)&DAT_112796db4;
                }
                *(undefined8 *)(param_1 + *piVar7) = 0;
                func_0x000107c3187c();
                lVar10 = lVar1;
                goto LAB_10bd7e9b0;
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar3 != lVar10);
          puVar4 = (undefined8 *)0x10;
          lVar3 = lVar8;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
        lVar10 = 0;
      }
LAB_10bd7e9b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
        ___stack_chk_fail();
        func_0x00010bfee200();
        if ((lVar10 != 0) && (func_0x00010c0cabe0(lVar10), puVar4 != (undefined8 *)0x0)) {
          *puVar4 = 0;
        }
        return lVar10;
      }
      return lVar10;
    }
  }
  return lVar2;
}


